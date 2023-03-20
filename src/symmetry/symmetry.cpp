#include "molecule/molecule.hpp"

using namespace polyquant;

POLYQUANT_SYMMETRY::POLYQUANT_SYMMETRY(std::shared_ptr<POLYQUANT_INPUT> input_params) { setup_symmetry(input_params); }

void POLYQUANT_SYMMETRY::set_symmetry_from_input() {
  if (input->input_data.contains("keywords")) {
    if (input->input_data["keywords"].contains("symmetry")) {
      this->do_symmetry = input->input_data["keywords"]["symmetry"];
    }
    if (input->input_data["keywords"].contains("point_group")) {
      if (!this->do_symmetry) {
        APP_ABORT("keywords->point_group is present, but symmetry is not turned on!");
      }
      std::string pg_from_inp = input->input_data["keywords"]["point_group"];
      if (pg_from_inp == "automatic") {
        // Default behavior nothing needs to be done
      } else if (pg_from_inp == "SO(3)") {
        this->point_group = "SO(3)";
        this->sub_group = "SO(3)";
      } else {
          this->point_group = pg_from_inp;
        //APP_ABORT("keywords->point_group is unrecognized. Currently the only keyword that can be manually specified is SO(3).");
      }
    }
  }
  if (!this->do_symmetry) {
    this->point_group = "C1";
    this->sub_group = "C1";
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
