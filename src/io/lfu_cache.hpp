
#ifndef POLYQUANT_CACHE_H
#define POLYQUANT_CACHE_H
#include <limits>
#include <memory>
#include <unordered_map>
#include <iostream>
#include "io/io.hpp"

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

  ~polyquant_lfu_cache() = default;

  void set(const keytype &key, const valuetype &value) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    omp_set_lock(&writelock);
    std::cout << "setSHIV" << std::endl;
    auto elem_it = this->find(key);
    if (elem_it == this->cache_items_map.end()) {
      if (this->cache_items_map.size() + 1 > this->max_cache_size) {
        // TODO replace some fraction of the cache e.g. 90%? Investigate
        auto least_used_key_to_delete = this->least_freq_used();
        this->erase(least_used_key_to_delete);
      }
      this->insert(key, value);
    } else {
      this->increment(key, value);
    }
    omp_unset_lock(&writelock);
  }

  const std::optional<valuetype> get(const keytype &key) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    omp_set_lock(&writelock);
    auto elem_it = this->find(key);

    if (elem_it == cache_items_map.end()) {
      omp_unset_lock(&writelock);
      return std::nullopt;
    }
    this->increment(key);
    omp_unset_lock(&writelock);
    return elem_it->second;
  }

  bool in_cache(const keytype &key) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    omp_set_lock(&writelock);
    bool in_cache = this->find(key) != this->cache_items_map.end();
    omp_unset_lock(&writelock);
    return in_cache;
  }

  size_t size() const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    omp_set_lock(&writelock);
    auto size = this->cache_items_map.size();
    omp_unset_lock(&writelock);
    return size;
  }

  bool remove(const keytype &key) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    omp_set_lock(&writelock);
    if (cache_items_map.find(key) == cache_items_map.cend()) {
      return false;
    }
    erase(key);
    omp_unset_lock(&writelock);
    return true;
  }

protected:
  void insert(const keytype &key, const valuetype &value)
  {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
      this->insert(key);
      this->cache_items_map.emplace(std::make_pair(key, value));
  }

  void insert(const keytype &key) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    constexpr std::size_t INIT_VAL = 1;
    lfu_storage[key] = frequency_storage.emplace_hint(
        frequency_storage.cbegin(), INIT_VAL, key);
  }

  void increment(const keytype &key) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    std::cout << "in increment" << std::endl;
    auto elem_for_increment = this->lfu_storage[key];
    std::cout << "in increment1" << std::endl;
    auto incremented_pair = std::make_pair(elem_for_increment->first + 1,
                                           elem_for_increment->second);
    std::cout << "in increment2" << std::endl;
    this->frequency_storage.erase(elem_for_increment);
    std::cout << "in increment3" << std::endl;
    this->lfu_storage[key] = this->frequency_storage.emplace_hint(
        this->frequency_storage.cend(),
        std::move(incremented_pair));
    std::cout << "in increment4" << std::endl;
  }

  void erase(const keytype &key) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    this->frequency_storage.erase(this->lfu_storage[key]);
    this->lfu_storage.erase(key);
  }

  void increment(const keytype &key, const valuetype &value) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    this->increment(key);
    this->cache_items_map[key] = value;
  }

  std::unordered_map<keytype, valuetype, hashtype>::const_iterator
  find(const keytype &key) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    std::cout << key.first << " " << key.second <<  (this->cache_items_map.find(key) == this->cache_items_map.end())<< std::endl;
    return this->cache_items_map.find(key);
  }
  const keytype &least_freq_used() const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    return std::as_const(this->frequency_storage.begin()->second);
  }

private:
  mutable omp_lock_t writelock;
  mutable std::multimap<std::size_t, keytype> frequency_storage;
  mutable std::unordered_map<keytype, typename std::multimap<std::size_t, keytype>::iterator, hashtype>
      lfu_storage;
  mutable std::unordered_map<keytype, valuetype, hashtype> cache_items_map;
  size_t max_cache_size;
};
} // namespace polyquant

#endif
