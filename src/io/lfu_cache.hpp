
#ifndef POLYQUANT_CACHE_H
#define POLYQUANT_CACHE_H
#include "io/timer.hpp"
#include <iostream>
#include <limits>
#include <memory>
#include <omp.h>
#include <optional>
#include <unordered_map>

namespace polyquant {

template <typename keytype, typename valuetype, typename hashtype>
class polyquant_lfu_cache {

public:
  explicit polyquant_lfu_cache(size_t max_size = 0) {
    if (max_size == 0) {
      this->max_cache_size = std::numeric_limits<size_t>::max();
    } else {
      this->max_cache_size = max_size;
    }
    omp_init_lock(&writelock);
  }

  ~polyquant_lfu_cache() {
    this->clear();
    omp_destroy_lock(&writelock);
  }

  void set(const keytype &key, const valuetype &value) {
    omp_set_lock(&writelock);
    auto elem_it = this->cache_items_map.find(key);
    if (elem_it == this->cache_items_map.end()) {
      if (this->cache_items_map.size() + 1 > this->max_cache_size) {

        // https://stackoverflow.com/a/11410425
        // create a vector of iterators to the map elements (O(n))
        // use std::nth_element to find the worst 10% (O(n))
        // remove them all from the map (O(n log n))

        std::vector<typename std::unordered_map< keytype, std::pair<size_t, valuetype>, hashtype>::iterator> cache_elements;
        cache_elements.resize(this->cache_items_map.size());
        size_t num_elements = this->cache_items_map.size() * this->discard_percentage / 100;
        for (auto it = this->cache_items_map.begin(); it != this->cache_items_map.end(); ++it) {
          cache_elements.push_back(it);
        }
        std::nth_element( cache_elements.begin(), cache_elements.begin() + num_elements, cache_elements.end(), [](const auto &a, const auto &b) {
              return a->second.first < b->second.first;
            });
        // TODO replace some fraction of the cache e.g. 90%? Investigate
        for (auto i = cache_elements.begin(); i != cache_elements.begin() + num_elements; ++i) {
          this->erase((*i)->first);
        }
      }
      this->insert(key, value);
    } else {
      this->increment(key, value);
    }
    omp_unset_lock(&writelock);
  }

  const std::optional<valuetype> get(const keytype &key) const {
    omp_set_lock(&writelock);
    auto elem_it = this->cache_items_map.find(key);

    if (elem_it == this->cache_items_map.end()) {
      omp_unset_lock(&writelock);
      return std::nullopt;
    }
    auto return_value = elem_it->second.second;
    this->increment(key, return_value);
    omp_unset_lock(&writelock);
    return return_value;
  }

  bool in_cache(const keytype &key) const {
    omp_set_lock(&writelock);
    bool in_cache = this->cache_items_map.find(key) != this->cache_items_map.end();
    omp_unset_lock(&writelock);
    return in_cache;
  }

  size_t size() const {
    omp_set_lock(&writelock);
    auto size = this->cache_items_map.size();
    omp_unset_lock(&writelock);
    return size;
  }

  bool remove(const keytype &key) {
    omp_set_lock(&writelock);
    bool removed = false;
    if (this->cache_items_map.find(key) == this->cache_items_map.cend()) {
      return removed;
    }
    this->erase(key);
    removed = true;
    omp_unset_lock(&writelock);
    return removed;
  }

protected:
  void clear() {
    omp_set_lock(&writelock);
    this->cache_items_map.clear();
    omp_unset_lock(&writelock);
  }

  void insert(const keytype &key, const valuetype &value) {
    constexpr std::size_t initial_value = 1;
    this->cache_items_map.emplace( std::make_pair(key, std::make_pair(initial_value, value)));
  }

  void erase(const keytype &key) {
    auto elem_it = this->cache_items_map.find(key);
    cache_items_map.erase(elem_it);
  }

  void increment(const keytype &key, const valuetype &value) const {
    this->cache_items_map[key].first += 1;
    this->cache_items_map[key].second = value;
  }

  std::unordered_map<keytype, std::pair<size_t, valuetype>, hashtype>::const_iterator
  find(const keytype &key) const {
    return this->cache_items_map.find(key);
  }

private:
  mutable omp_lock_t writelock;
  // store keys, pair < freq, value >
  mutable std::unordered_map<keytype, std::pair<size_t, valuetype>, hashtype> cache_items_map;
  size_t max_cache_size;
  size_t discard_percentage = 5;
};
} // namespace polyquant

#endif
