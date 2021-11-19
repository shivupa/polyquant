#include "ci/epci.hpp"

using namespace polyquant;

void POLYQUANT_EPCI::setup(const POLYQUANT_EPSCF &input_scf) {
  this->input_epscf = input_scf;
  this->input_params = this->input_epscf.input_params;
  this->input_molecule = this->input_epscf.input_molecule;
  this->input_basis = this->input_epscf.input_basis;
  this->frozen_core.resize(this->input_molecule.quantum_particles.size());
  this->deleted_virtual.resize(this->input_molecule.quantum_particles.size());
  this->input_integral = this->input_epscf.input_integral;
  // this->input_integral.calculate_mo_1_body_integrals(this->input_epscf.C);
  // this->input_integral.calculate_mo_2_body_integrals(this->input_epscf.C);
  // std::vector<int> num_basis;
  // for (auto i : this->input_basis.num_basis) {
  //   num_basis.push_back(i);
  //   this->detset.max_orb.push_back(i);
  // }
  // this->detset.set_integral(this->input_integral);
  // this->detset.construct_cache(this->cache_size);
  // this->setup_determinants();
  // Polyquant_cout("Created " + std::to_string(this->detset.N_dets) + " determinants");
  // this->detset.print_determinants();
}

void POLYQUANT_EPCI::calculate_integrals() {

  this->input_integral.calculate_mo_1_body_integrals(this->input_epscf.C, this->frozen_core, this->deleted_virtual);
  this->input_integral.calculate_mo_2_body_integrals(this->input_epscf.C, this->frozen_core, this->deleted_virtual);

  std::vector<int> num_basis;
  for (auto i = 0; i < this->input_molecule.quantum_particles.size(); i++){
    num_basis.push_back(this->input_basis.num_basis[i] - this->frozen_core[i] - this->deleted_virtual[i]);
    this->detset.max_orb.push_back(this->input_basis.num_basis[i] - this->frozen_core[i] - this->deleted_virtual[i]);
  }
  this->detset.set_integral(this->input_integral);
  this->detset.construct_cache(this->cache_size);
}

void POLYQUANT_EPCI::setup_determinants() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  std::vector<std::vector<std::vector<int>>> occ;
  auto quantum_part_idx = 0ul;
  occ.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    std::vector<int> this_spin_occ;
    for (auto i = 0; i < quantum_part.num_parts_alpha; i++) {
      this_spin_occ.push_back(i);
    }
    occ[quantum_part_idx].push_back(this_spin_occ);
    if (quantum_part.num_parts > 1) {
      if (quantum_part.num_parts_alpha == quantum_part.num_parts_beta) {
        occ[quantum_part_idx].push_back(this_spin_occ);
      } else {
        this_spin_occ.clear();
        for (auto i = 0; i < quantum_part.num_parts_beta; i++) {
          this_spin_occ.push_back(i);
        }
        occ[quantum_part_idx].push_back(this_spin_occ);
      }
    } else {
      this_spin_occ.clear();
      occ[quantum_part_idx].push_back(this_spin_occ);
    }
    quantum_part_idx++;
  }
  this->detset.create_det(occ);
  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto ex_lvl = this->excitation_level[quantum_part_idx];
    auto max_alpha_ex_lvl = std::get<0>(ex_lvl);
    auto max_beta_ex_lvl = std::get<1>(ex_lvl);
    auto total_ex_lvl = std::get<2>(ex_lvl);
    auto hf_det = *this->detset.dets[quantum_part_idx].begin();

    for (auto alpha_ex_lvl = 0; alpha_ex_lvl <= max_alpha_ex_lvl; alpha_ex_lvl++) {
      for (auto beta_ex_lvl = 0; beta_ex_lvl <= max_beta_ex_lvl; beta_ex_lvl++) {
        std::tuple<int, int, int> this_ex_lvl = {alpha_ex_lvl, beta_ex_lvl, total_ex_lvl};
        auto excited_dets = this->detset.create_excitation(quantum_part_idx, hf_det, this_ex_lvl);
        for (auto &e_det : excited_dets) {
          this->detset.dets[quantum_part_idx].insert(e_det);
        }
      }
    }
    quantum_part_idx++;
  }
  quantum_part_idx = 0;
  this->detset.N_dets = 1;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    this->detset.N_dets *= this->detset.dets[quantum_part_idx].size();
    quantum_part_idx++;
  }
  Polyquant_cout("Created " + std::to_string(this->detset.N_dets) + " determinants");
  this->detset.print_determinants();
}

void POLYQUANT_EPCI::print_start_iterations() { Polyquant_cout("Starting CI Iterations"); }
void POLYQUANT_EPCI::print_iteration() { Polyquant_cout("Iteration "); }
void POLYQUANT_EPCI::print_success() { Polyquant_cout("SCF SUCCESS"); }
void POLYQUANT_EPCI::print_exceeded_iterations() { Polyquant_cout("Exceeded Iterations"); }
void POLYQUANT_EPCI::print_error() { APP_ABORT("Something wrong!"); }
void POLYQUANT_EPCI::print_params() { Polyquant_cout("Running CI"); }

void POLYQUANT_EPCI::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
    this->setup_determinants();
  this->print_start_iterations();
  // spectra generated function
  // this->detset.create_ham();
  // Spectra::SparseSymMatProd<double> op(this->detset.ham);
  // Spectra::SymEigsSolver<Spectra::SparseSymMatProd<double>> eigs(op,
  // this->num_states, this->num_subspace_vec);
  //
  //
  /*
  Spectra::SymEigsSolver<POLYQUANT_DETSET<uint64_t>> eigs(this->detset,
  this->num_states, this->num_subspace_vec); eigs.init(); Eigen::Index maxit =
  this->iteration_max; eigs.compute(Spectra::SortRule::SmallestAlge, maxit,
  this->convergence_E); if (eigs.info() == Spectra::CompInfo::Successful) {
    Eigen::VectorXd evalues = eigs.eigenvalues();
    std::cout << "Eigenvalues found:\n" << std::endl;
    for (auto e = 0; e < evalues.size(); e++) {

      Polyquant_cout(evalues[e] + this->input_molecule.E_nuc);
    }
  } else {
    std::cout << "HELP" << std::endl;
  }
  */

  // Eigen::Index num_of_eigenvalues = 5;
  Eigen::Index initialsubspacevec = this->num_subspace_vec;
  Eigen::Index maxsubspacevec = 10 * this->num_states;
  Polyquant_cout("Initial subspace");
  Polyquant_cout(initialsubspacevec);
  // todo Eigen::Index maxsubspace = this->iteration_max;
  Spectra::DavidsonSymEigsSolver<POLYQUANT_DETSET<uint64_t>> solver(this->detset, this->num_states, initialsubspacevec, maxsubspacevec); // Create Solver
  Eigen::Index maxit = this->iteration_max;
  int nconv = solver.compute(Spectra::SortRule::SmallestAlge, maxit, this->convergence_E);

  // Retrieve results
  if (solver.info() == Spectra::CompInfo::Successful) {
    this->energies = solver.eigenvalues();
    this->C_ci = solver.eigenvectors();
    std::cout << nconv << " Eigenvalues found:\n" << std::endl;
    for (auto e = 0; e < this->energies.size(); e++) {
      Polyquant_cout(this->energies[e] + this->input_molecule.E_nuc);
    }
  } else {
    APP_ABORT("CI Calculation did not converge!");
  }
}
// void POLYQUANT_EPCI::dump_ham() {
//    this->detset.dump_ham();
//
//}
