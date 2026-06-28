#ifndef POLYQUANT_INPUT_TIMER_H
#define POLYQUANT_INPUT_TIMER_H
#include "io/utils.hpp"
#include <algorithm>
#include <chrono>
#include <fmt/format.h>
#include <fstream>
#include <iostream>
#include <map>
#include <mutex>
#include <regex>
#include <sstream>
#include <string>
#include <vector>
using json = nlohmann::json;

namespace polyquant {

enum class POLYQUANT_TIMER_MODE { print_on_destruction, aggregate };

class POLYQUANT_TIMER {
  using clock = std::chrono::steady_clock;

  struct aggregate_timer_stats {
    size_t count = 0;
    clock::duration total = clock::duration::zero();
    clock::duration min = clock::duration::zero();
    clock::duration max = clock::duration::zero();
  };

public:
  POLYQUANT_TIMER() { this->set_start_time(); };

  POLYQUANT_TIMER(const std::string &calling_func) {
    this->set_start_time();
    this->set_calling_function(calling_func);
  };

  POLYQUANT_TIMER(const std::string &calling_func, POLYQUANT_TIMER_MODE mode) {
    this->set_start_time();
    this->set_calling_function(calling_func);
    this->timer_mode = mode;
  };

  ~POLYQUANT_TIMER() {
    this->set_end_time();
    if (this->timer_mode == POLYQUANT_TIMER_MODE::aggregate) {
      this->record_aggregate_timer(this->get_duration());
    } else if (print_on_destruction) {
      this->print_timer_end();
    }
  };

  static void print_aggregate_timers() {
    std::map<std::string, aggregate_timer_stats> timers;
    {
      std::lock_guard<std::mutex> lock(aggregate_timers_mutex);
      timers = aggregate_timers;
    }

    for (const auto &[name, stats] : timers) {
      if (stats.count == 0) {
        continue;
      }
      std::stringstream buffer;
      buffer << "Aggregate Timer " << name << " count=" << stats.count << " total=" << format_duration(stats.total) << " avg=" << format_duration(stats.total / stats.count)
             << " min=" << format_duration(stats.min) << " max=" << format_duration(stats.max) << std::endl;
      Polyquant_cout(buffer.str());
    }
  }

  static void reset_aggregate_timers() {
    std::lock_guard<std::mutex> lock(aggregate_timers_mutex);
    aggregate_timers.clear();
  }

  /**
   * @brief Get the memory usage in bytes
   *
   */
  void process_mem_total(double &mem_used, double &mem_avail, double &mem_total) {
    mem_used = 0.0;
    mem_total = 0.0;

    // the three fields we want
    // MemTotal:       32792564 kB
    // MemFree:        17269208 kB
    // MemAvailable:   19344872 kB
    std::string MemTotal_str;
    std::string MemFree_str;
    std::string MemAvailable_str;

    unsigned long long MemTotal;
    unsigned long long MemFree;
    unsigned long long MemAvailable;

    std::ifstream ifs("/proc/meminfo", std::ios_base::in);

    std::getline(ifs, MemTotal_str);
    std::getline(ifs, MemFree_str);
    std::getline(ifs, MemAvailable_str);

    std::smatch match;
    std::regex rgx("\\d+");

    std::regex_search(MemTotal_str, match, rgx);
    MemTotal = std::stoull(match[0]);

    std::regex_search(MemFree_str, match, rgx);
    MemFree = std::stoull(match[0]);

    std::regex_search(MemAvailable_str, match, rgx);
    MemAvailable = std::stoull(match[0]);

    mem_used = (MemTotal - MemAvailable) * 1e3;
    mem_total = MemTotal * 1e3;
    mem_avail = MemAvailable * 1e3;
    // convert to Bytes and return
  }

  std::string formatted_mem(double mem) {
    std::stringstream formatted_string;
    const double tera = 1e12;
    const double giga = 1e9;
    const double mega = 1e6;
    const double kilo = 1e3;

    auto truncate_usg = (int)(std::floor(mem / tera));
    auto fmt_string = fmt::format("{:>4d}{:>3}", truncate_usg, "TB");
    formatted_string << fmt_string;
    mem -= tera * truncate_usg;

    truncate_usg = (int)(std::floor(mem / giga));
    fmt_string = fmt::format("{:>4d}{:>3}", truncate_usg, "GB");
    formatted_string << fmt_string;
    mem -= giga * truncate_usg;

    truncate_usg = (int)(std::floor(mem / mega));
    fmt_string = fmt::format("{:>4d}{:>3}", truncate_usg, "MB");
    formatted_string << fmt_string;
    mem -= mega * truncate_usg;

    truncate_usg = (int)(std::floor(mem / kilo));
    fmt_string = fmt::format("{:>4d}{:>3}", truncate_usg, "KB");
    formatted_string << fmt_string;
    mem -= kilo * truncate_usg;

    truncate_usg = (int)(mem);
    fmt_string = fmt::format("{:>4d}{:>3}", truncate_usg, "B");
    formatted_string << fmt_string;
    return formatted_string.str();
  }

  void set_print_on_destruction(bool print_val) { this->print_on_destruction = print_val; };
  void set_calling_function(const std::string &calling_func) { this->calling_function = calling_func; };

  void set_start_time() { this->start = clock::now(); };

  void set_end_time() { this->end = clock::now(); };

  clock::duration get_duration() { return end - start; }

  static std::string format_duration(clock::duration duration) {
    auto d = std::chrono::duration_cast<std::chrono::days>(duration);
    duration -= d;
    auto h = std::chrono::duration_cast<std::chrono::hours>(duration);
    duration -= h;
    auto m = std::chrono::duration_cast<std::chrono::minutes>(duration);
    duration -= m;
    auto s = std::chrono::duration_cast<std::chrono::seconds>(duration);
    duration -= s;
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
    duration -= ms;
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(duration);
    duration -= us;
    auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);
    duration -= ns;

    std::stringstream buffer;
    buffer << d.count() << "d:" << h.count() << "h:" << m.count() << "m:" << s.count() << "s:" << ms.count() << "ms:" << us.count() << "us:" << ns.count() << "ns";
    return buffer.str();
  }

  void print_timer_end() {
    std::stringstream buffer;
    buffer << "Timer " << this->calling_function << "    " << format_duration(this->get_duration());
    double mem_used, mem_avail, mem_total;
    process_mem_total(mem_used, mem_avail, mem_total);
    std::string used = formatted_mem(mem_used);
    std::string total = formatted_mem(mem_total);
    buffer << "    "
           << "Current Memory usage:" << used << " free:" << total << std::endl;
    Polyquant_cout(buffer.str());
  };

private:
  void record_aggregate_timer(clock::duration duration) {
    std::lock_guard<std::mutex> lock(aggregate_timers_mutex);
    auto &stats = aggregate_timers[this->calling_function];
    if (stats.count == 0) {
      stats.min = duration;
      stats.max = duration;
    } else {
      stats.min = std::min(stats.min, duration);
      stats.max = std::max(stats.max, duration);
    }
    stats.count++;
    stats.total += duration;
  }

  static inline std::map<std::string, aggregate_timer_stats> aggregate_timers;
  static inline std::mutex aggregate_timers_mutex;

  bool print_on_destruction = true;
  POLYQUANT_TIMER_MODE timer_mode = POLYQUANT_TIMER_MODE::print_on_destruction;
  std::string calling_function = "UNKNOWN";
  std::chrono::time_point<clock> start;
  std::chrono::time_point<clock> end;
};
} // namespace polyquant
#endif
