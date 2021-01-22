#include "ci/epci.hpp"

using namespace polyquant;

void POLYQUANT_EPCI::setup(const POLYQUANT_EPSCF &input_scf) {
  this->input_epscf = input_scf;
  this->input_params = this->input_epscf.input_params;
  this->input_molecule = this->input_epscf.input_molecule;
  this->input_basis = this->input_epscf.input_basis;
  this->input_integral = this->input_epscf.input_integral;
  this->input_integral.calculate_mo_1_body_integrals(this->input_epscf.C);
  this->input_integral.calculate_mo_2_body_integrals(this->input_epscf.C);

  auto num_basis = this->input_basis.num_basis;
  this->detset.max_orb = num_basis;
  this->detset.set_integral(this->input_integral);

  this->setup_determinants();
  Polyquant_cout("Created " + std::to_string(this->detset.N_dets) +
                 " determinants");
  this->detset.print_determinants();
}

void POLYQUANT_EPCI::setup_determinants() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  std::vector<std::vector<std::vector<int>>> occ;
  auto quantum_part_idx = 0ul;
  occ.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    std::vector<int> this_spin_occ;
    for (auto i = 0; i < quantum_part.num_parts_alpha; i++) {
      this_spin_occ.push_back(i);
    }
    occ[quantum_part_idx].push_back(this_spin_occ);
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      if (quantum_part.num_parts_alpha == quantum_part.num_parts_beta) {
        occ[quantum_part_idx].push_back(this_spin_occ);
      } else {
        this_spin_occ.clear();
        for (auto i = 0; i < quantum_part.num_parts_beta; i++) {
          this_spin_occ.push_back(i);
        }
        occ[quantum_part_idx].push_back(this_spin_occ);
      }
    }
    quantum_part_idx++;
  }
  this->detset.create_det(occ);
  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    auto ex_lvl = this->excitation_level[quantum_part_idx];
    if (ex_lvl > 0) {
      for (auto i_ex = 1; i_ex <= ex_lvl; i_ex++) {
        auto hf_det = *this->detset.dets[quantum_part_idx][0].begin();
        auto excited_dets = this->detset.create_excitation(hf_det, i_ex);
        for (auto &e_det : excited_dets) {
          this->detset.dets[quantum_part_idx][0].insert(e_det);
        }
      }
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        for (auto i_ex = 1; i_ex < ex_lvl; i_ex++) {
          auto hf_det = *this->detset.dets[quantum_part_idx][1].begin();
          auto excited_dets = this->detset.create_excitation(hf_det, i_ex);
          for (auto &e_det : excited_dets) {
            this->detset.dets[quantum_part_idx][1].insert(e_det);
          }
        }
      }
    }
    quantum_part_idx++;
  }
  quantum_part_idx = 0;
  this->detset.N_dets = 1;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    this->detset.N_dets *= this->detset.dets[quantum_part_idx][0].size();
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      this->detset.N_dets *= this->detset.dets[quantum_part_idx][1].size();
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPCI::print_start_iterations() {
  Polyquant_cout("Starting Iterations");
}
void POLYQUANT_EPCI::print_iteration() { Polyquant_cout("Iteration "); }
void POLYQUANT_EPCI::print_success() { Polyquant_cout("SCF SUCCESS"); }
void POLYQUANT_EPCI::print_exceeded_iterations() {
  Polyquant_cout("Exceeded Iterations");
}
void POLYQUANT_EPCI::print_error() { APP_ABORT("Something wrong!"); }
void POLYQUANT_EPCI::print_params() { Polyquant_cout("Running CI"); }

void POLYQUANT_EPCI::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  Eigen::Index num_of_eigenvalues = 5;
  Spectra::DavidsonSymEigsSolver<POLYQUANT_DETSET<uint64_t>> solver(
      this->detset, num_of_eigenvalues); // Create Solver
  Eigen::Index iterations = 100;
  double tolerance = 1e-3;
  int nconv =
      solver.compute(Spectra::SortRule::LargestAlge, iterations, tolerance);

  // Retrieve results
  Eigen::VectorXd evalues;
  if (solver.info() == Spectra::CompInfo::Successful) {
    evalues = solver.eigenvalues();

    std::cout << nconv << " Eigenvalues found:\n" << evalues << std::endl;
    for (auto e = 0; e < evalues.size(); e++) {
      Polyquant_cout(evalues[e]);
    }
  } else {
    std::cout << "Calculation failed" << std::endl;
  }
}
