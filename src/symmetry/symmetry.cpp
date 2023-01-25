#include "molecule/molecule.hpp"

using namespace polyquant;

POLYQUANT_SYMMETRY::POLYQUANT_SYMMETRY(std::shared_ptr<POLYQUANT_INPUT> input_params) { setup_symmetry(input_params); }

void POLYQUANT_SYMMETRY::set_symmetry_from_input() {
  if (input->input_data.contains("keywords")) {
    if (input->input_data["keywords"].contains("symmetry")) {
      this->do_symmetry = input->input_data["keywords"]["symmetry"];
    }
  }
  if (!this->do_symmetry) {
    point_group = "C1";
    sub_group = "C1";
  }
}

void POLYQUANT_SYMMETRY::setup_symmetry(std::shared_ptr<POLYQUANT_INPUT> input_params) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  input = input_params;
  set_symmetry_from_input();
}

void POLYQUANT_SYMMETRY::create_ctx_for_particle_types(int n) {
  ctx.resize(n);
  for (int i = 0; i < n; i++) {
    ctx[i] = msymCreateContext();
  }
}
