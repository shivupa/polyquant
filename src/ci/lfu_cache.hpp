
#ifndef POLYQUANT_CACHE_H
#define POLYQUANT_CACHE_H
#include <limits>
#include <memory>
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

  ~polyquant_lfu_cache() = default;

  void set(const keytype &key, const valuetype &value) {
    omp_set_lock(&writelock);
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

  const std::optional<valuetype> &get(const keytype &key) const {
    omp_set_lock(&writelock);
    auto elem_it = this->find(key);

    if (elem_it == cache_items_map.end()) {
      return {};
    }
    this->increment(key);
    omp_unset_lock(&writelock);
    return elem_it->second;
  }

  bool in_cache(const keytype &key) const {
    omp_set_lock(&writelock);
    bool in_cache = this->find(key) != this->cache_items_map.end();
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
    if (cache_items_map.find(key) == std::as_const(cache_items_map.end())) {
      return false;
    }
    erase(key);
    omp_unset_lock(&writelock);
    return true;
  }

protected:
  void insert(const keytype &key) {
    constexpr std::size_t INIT_VAL = 1;
    lfu_storage[keytype] = frequency_storage.emplace_hint(
        std::as_const(frequency_storage.begin()), INIT_VAL, key);
  }

  void increment(const keytype &key) {
    auto elem_for_increment = this->lfu_storage[key];
    auto incremented_pair = std::make_pair(elem_for_increment->first + 1,
                                           elem_for_increment->second);
    this->frequency_storage.erase(elem_for_increment);
    this->lfu_storage[key] = this->frequency_storage.emplace_hint(
        std::as_const(this->frequency_storage.end()),
        std::move(incremented_pair));
  }

  void erase(const keytype &key) {
    this->frequency_storage.erase(this->lfu_storage[key]);
    this->lfu_storage.erase(key);
  }

  void increment(const keytype &key, const valuetype &value) {
    this->increment(key);
    this->cache_items_map[key] = value;
  }

  std::unordered_map<keytype, valuetype, hashtype>::const_iterator
  find(const keytype &key) const {
    return this->cache_items_map.find(key);
  }
  const keytype &least_freq_used() const {
    return std::as_const(this->frequency_storage.begin()->second);
  }

private:
  omp_lock_t writelock;
  std::multimap<std::size_t, keytype> frequency_storage;
  std::unordered_map<keytype, typename std::multimap<std::size_t, keytype>::iterator, hashtype>
      lfu_storage;
  std::unordered_map<keytype, valuetype, hashtype> cache_items_map;
  size_t max_cache_size;
};
} // namespace polyquant

#endif