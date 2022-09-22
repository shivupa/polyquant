#ifndef POLYQUANT_INPUT_TIMER_H
#define POLYQUANT_INPUT_TIMER_H
#include "io/utils.hpp"
#include <chrono>
#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>
#include <vector>
using json = nlohmann::json;

namespace polyquant {

class POLYQUANT_TIMER {
public:
  POLYQUANT_TIMER() { this->set_start_time(); };

  POLYQUANT_TIMER(const std::string &calling_func) {
    this->set_start_time();
    this->set_calling_function(calling_func);
  };

  ~POLYQUANT_TIMER() {
    if (print_on_destruction) {
      this->set_end_time();
      this->print_timer_end();
    }
  };

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

  void set_start_time() { this->start = std::chrono::high_resolution_clock::now(); };

  void set_end_time() { this->end = std::chrono::high_resolution_clock::now(); };

  std::chrono::system_clock::duration get_duration() { return end - start; }

  void print_timer_end() {
    // use std::format once supported
    // use std::chrono::days etc once it is used
    // typedef std::chrono::duration<int, std::ratio<86400>> days;
    auto duration = get_duration();
    // auto d = std::chrono::duration_cast<days>(duration);
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
    buffer << "Timer " << this->calling_function << "    " << d.count() << "d:" << h.count() << "h:" << m.count() << "m:" << s.count() << "s:" << ms.count() << "ms:" << us.count()
           << "us:" << ns.count() << "ns";
    double mem_used, mem_avail, mem_total;
    process_mem_total(mem_used, mem_avail, mem_total);
    std::string used = formatted_mem(mem_used);
    std::string total = formatted_mem(mem_total);
    buffer << "    "
           << "Current Memory usage:" << used << " free:" << total << std::endl;
    Polyquant_cout(buffer.str());
  };

private:
  bool print_on_destruction = true;
  std::string calling_function = "UNKNOWN";
  std::chrono::time_point<std::chrono::high_resolution_clock> start;
  std::chrono::time_point<std::chrono::high_resolution_clock> end;
};
} // namespace polyquant
#endif
