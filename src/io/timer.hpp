#ifndef POLYQUANT_INPUT_TIMER_H
#define POLYQUANT_INPUT_TIMER_H

/**
 * @file timer.hpp
 * @brief RAII timing and coarse memory-reporting utilities.
 */
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

/**
 * @brief Controls whether a timer prints immediately or contributes to aggregate statistics.
 */
enum class POLYQUANT_TIMER_MODE { print_on_destruction, aggregate };

/**
 * @brief RAII timer for scoped runtime measurements.
 *
 * A timer records a start timestamp when constructed and an end timestamp when
 * destroyed. In `print_on_destruction` mode it prints the elapsed time and a
 * coarse process memory snapshot. In `aggregate` mode it instead contributes to
 * a thread-safe global summary keyed by the calling-function label.
 *
 * The memory reporting path reads `/proc/meminfo`, so it assumes a Linux-like
 * environment. Aggregate state is process-global and protected by a mutex; it
 * is intended for coarse profiling rather than high-frequency low-overhead
 * tracing.
 */
class POLYQUANT_TIMER {
  using clock = std::chrono::steady_clock;

  /**
   * @brief Aggregate timing statistics for one timer label.
   */
  struct aggregate_timer_stats {
    size_t count = 0;
    clock::duration total = clock::duration::zero();
    clock::duration min = clock::duration::zero();
    clock::duration max = clock::duration::zero();
  };

public:
  /**
   * @brief Construct an unnamed timer and start it immediately.
   */
  POLYQUANT_TIMER() { this->set_start_time(); };

  /**
   * @brief Construct a named timer and start it immediately.
   *
   * @param calling_func Label printed or aggregated for this timer.
   */
  POLYQUANT_TIMER(const std::string &calling_func) {
    this->set_start_time();
    this->set_calling_function(calling_func);
  };

  /**
   * @brief Construct a named timer with explicit output mode.
   *
   * @param calling_func Label printed or aggregated for this timer.
   * @param mode Timer output mode.
   */
  POLYQUANT_TIMER(const std::string &calling_func, POLYQUANT_TIMER_MODE mode) {
    this->set_start_time();
    this->set_calling_function(calling_func);
    this->timer_mode = mode;
  };

  /**
   * @brief Stop the timer and either print or aggregate the elapsed time.
   */
  ~POLYQUANT_TIMER() {
    this->set_end_time();
    if (this->timer_mode == POLYQUANT_TIMER_MODE::aggregate) {
      this->record_aggregate_timer(this->get_duration());
    } else if (print_on_destruction) {
      this->print_timer_end();
    }
  };

  /**
   * @brief Print and clear-copy all aggregate timing summaries accumulated so far.
   *
   * Output includes invocation count plus total, average, minimum, and maximum
   * duration for each named aggregate timer.
   */
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

  /**
   * @brief Reset all process-global aggregate timing statistics.
   */
  static void reset_aggregate_timers() {
    std::lock_guard<std::mutex> lock(aggregate_timers_mutex);
    aggregate_timers.clear();
  }

  /**
   * @brief Read coarse process memory availability from `/proc/meminfo`.
   *
   * Values are returned in bytes derived from the kernel's kilobyte counters.
   *
   * @param mem_used Approximate used memory.
   * @param mem_avail Approximate available memory.
   * @param mem_total Total physical memory.
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

  /**
   * @brief Format a byte count into concatenated TB/GB/MB/KB/B fields.
   *
   * @param mem Memory size in bytes.
   * @return Human-readable fixed-width string.
   */
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

  /**
   * @brief Enable or suppress automatic printing when the timer is destroyed.
   *
   * @param print_val Whether destruction should print when not aggregating.
   */
  void set_print_on_destruction(bool print_val) { this->print_on_destruction = print_val; };
  /**
   * @brief Set the label associated with this timer.
   *
   * @param calling_func Timer label.
   */
  void set_calling_function(const std::string &calling_func) { this->calling_function = calling_func; };

  /**
   * @brief Record the current time as the timer start point.
   */
  void set_start_time() { this->start = clock::now(); };

  /**
   * @brief Record the current time as the timer end point.
   */
  void set_end_time() { this->end = clock::now(); };

  /**
   * @brief Return the elapsed duration between the stored start and end times.
   *
   * @return Elapsed steady-clock duration.
   */
  clock::duration get_duration() { return end - start; }

  /**
   * @brief Format a duration as `d:h:m:s:ms:us:ns`.
   *
   * @param duration Duration to format.
   * @return Human-readable string.
   */
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

  /**
   * @brief Print this timer's elapsed duration and current memory snapshot.
   */
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
  /**
   * @brief Add one elapsed duration to the process-global aggregate table.
   *
   * @param duration Elapsed duration to record.
   */
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

  /**
   * @brief Process-global aggregate timing table keyed by timer label.
   */
  static inline std::map<std::string, aggregate_timer_stats> aggregate_timers;
  /**
   * @brief Mutex guarding aggregate timing updates and snapshots.
   */
  static inline std::mutex aggregate_timers_mutex;

  /**
   * @brief Whether to print timing output on destruction in non-aggregate mode.
   */
  bool print_on_destruction = true;
  /**
   * @brief Selected timer reporting mode.
   */
  POLYQUANT_TIMER_MODE timer_mode = POLYQUANT_TIMER_MODE::print_on_destruction;
  /**
   * @brief User-facing timer label.
   */
  std::string calling_function = "UNKNOWN";
  /**
   * @brief Recorded steady-clock start time.
   */
  std::chrono::time_point<clock> start;
  /**
   * @brief Recorded steady-clock end time.
   */
  std::chrono::time_point<clock> end;
};
} // namespace polyquant
#endif
