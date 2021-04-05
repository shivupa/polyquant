
#ifndef POLYQUANT_CACHE_H
#define POLYQUANT_CACHE_H
#include <limits>
#include <memory>
#include <unordered_map>

namespace polyquant {

template <typename keytype, typename valuetype>
class polyquant_lfu_cache {

public:
  using iterator = typename std::unordered_map<keytype, valuetype>::iterator;
  using const_iterator = typename std::unordered_map<keytype, valuetype>::const_iterator;
  explicit fixed_sized_cache(size_t max_size = 0)  {
    if (max_size == 0) {
      this->max_cache_size = std::numeric_limits<size_t>::max();
  } else {
      this->max_cache_size = max_size
  }
  omp_init_lock(&writelock);
  }

  ~fixed_sized_cache() = default;

  void set(const keytype &key, const valuetype &value) {
    omp_set_lock(&writelock);
    auto elem_it = this->find(key);

    if (elem_it == this->cache_items_map.end()) {
      // add new element to the cache
      if (this->cache_items_map.size() + 1 > this->max_cache_size) {
          // TODO replace some fraction of the cache e.g. 90%
        auto disp_candidate_keytype = this->least_freq_used();
        this->erase(disp_candidate_keytype);
      }
      this->insert(key, value);
    } else {
      this->increment(key, value);
    }
    omp_unset_lock(&writelock);
  }

  const valuetype &get(const keytype &keytype) const {
    omp_set_lock(&writelock);
    auto elem_it = this->find(keytype);

    if (elem_it == cache_items_map.end()) {
      throw std::range_error{"No such element in the cache"};
    }
    cache_policy.increment(keytype);
    omp_unset_lock(&writelock);
    return elem_it->second;
  }

  bool in_cache(const keytype &keytype) const {
    omp_set_lock(&writelock);
    bool in_cache = find(keytype) != cache_items_map.end();
    omp_unset_lock(&writelock);
    return in_cache;
  }

  size_t size() const {
    omp_set_lock(&writelock);
    auto size = this->cache_items_map.size();
    omp_unset_lock(&writelock);
    return size;
  }

  bool remove(const keytype &keytype) {
    operation_guard{safe_op};
    if (cache_items_map.find(keytype) == cache_items_map.cend()) {
      return false;
    }
    erase(keytype);
    return true;
  }

protected:
  void insert(const keytype &keytype)  {
    constexpr std::size_t INIT_VAL = 1;
    // all new valuetype initialized with the frequency 1
    lfu_storage[keytype] = frequency_storage.emplace_hint(
        frequency_storage.cbegin(), INIT_VAL, keytype);
  }

  void increment(const keytype &keytype)  {
    // get the previous frequency valuetype of a keytype
    auto elem_for_increment = lfu_storage[keytype];
    auto incrementd_elem =
        std::make_pair(elem_for_increment->first + 1, elem_for_increment->second);
    // increment the previous valuetype
    frequency_storage.erase(elem_for_increment);
    lfu_storage[keytype] = frequency_storage.emplace_hint(frequency_storage.cend(),
                                                      std::move(incrementd_elem));
  }

  void erase(const keytype &keytype)  {
    frequency_storage.erase(lfu_storage[keytype]);
    lfu_storage.erase(keytype);
  }

  void increment(const keytype &keytype, const valuetype &valuetype) {
    cache_policy.increment(keytype);
    cache_items_map[keytype] = valuetype;
  }

  const_iterator find(const keytype &keytype) const {
    return cache_items_map.find(keytype);
  }
  const keytype &least_freq_used() const  {
    // at the beginning of the frequency_storage we have the
    // least frequency used valuetype
    return frequency_storage.cbegin()->second;
  }

private:
  omp_lock_t writelock;
  std::multimap<std::size_t, keytype> frequency_storage;
  std::unordered_map<keytype, lfu_iterator> lfu_storage;
  std::unordered_map<keytype, valuetype, > cache_items_map;
  size_t max_cache_size;
};
} // namespace polyquant

#endif
