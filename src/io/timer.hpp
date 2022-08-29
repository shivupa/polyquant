#ifndef POLYQUANT_INPUT_TIMER_H
#define POLYQUANT_INPUT_TIMER_H
#include "io/utils.hpp"
#include <chrono>
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
