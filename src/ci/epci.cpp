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
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  this->calculate_fc_energy();
  this->input_integral.calculate_mo_1_body_integrals(this->input_epscf.C, this->frozen_core, this->deleted_virtual);
  this->input_integral.calculate_mo_2_body_integrals(this->input_epscf.C, this->frozen_core, this->deleted_virtual);

  std::vector<int> num_basis;
  for (auto i = 0; i < this->input_molecule.quantum_particles.size(); i++) {
    num_basis.push_back(this->input_basis.num_basis[i] - this->frozen_core[i] - this->deleted_virtual[i]);
    this->detset.max_orb.push_back(this->input_basis.num_basis[i] - this->frozen_core[i] - this->deleted_virtual[i]);
  }
  this->detset.set_integral(this->input_integral);
  this->detset.construct_cache(this->cache_size);
}

void POLYQUANT_EPCI::calculate_fc_energy() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  // caculate dm for frozen core block
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> fc_dm;
  fc_dm.resize(this->input_molecule.quantum_particles.size());
  this->detset.frozen_core_energy.resize(this->input_molecule.quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      fc_dm[quantum_part_idx].resize(2);
      fc_dm[quantum_part_idx][0].setZero(num_basis, num_basis);
      fc_dm[quantum_part_idx][1].setZero(num_basis, num_basis);
    } else {
      fc_dm[quantum_part_idx].resize(1);
      fc_dm[quantum_part_idx][0].setZero(num_basis, num_basis);
    }
  }

  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
    std::cout << this->frozen_core[quantum_part_idx] << std::endl;
    if (this->frozen_core[quantum_part_idx] != 0) {
      auto num_parts_alpha = this->frozen_core[quantum_part_idx];
      auto num_parts_beta = this->frozen_core[quantum_part_idx];
      this->input_epscf.form_DM_helper(fc_dm[quantum_part_idx][0], fc_dm[quantum_part_idx][0], this->input_epscf.C[quantum_part_idx][0], num_basis, num_parts_alpha);
      Polyquant_dump_mat_to_file(fc_dm[quantum_part_idx][0], "FC_DM_" + quantum_part_key + "_alpha.txt");
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        this->input_epscf.form_DM_helper(fc_dm[quantum_part_idx][1], fc_dm[quantum_part_idx][1], this->input_epscf.C[quantum_part_idx][1], num_basis, num_parts_beta);
        Polyquant_dump_mat_to_file(fc_dm[quantum_part_idx][1], "FC_DM_" + quantum_part_key + "_beta.txt");
      }
    }
    quantum_part_idx++;
  }

  // calculate frozen core  "operator"
  this->input_integral.calculate_frozen_core_ints(fc_dm, this->frozen_core);

  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    this->input_integral.frozen_core_ints[quantum_part_idx] += this->input_epscf.H_core[quantum_part_idx];
    Polyquant_dump_mat_to_file(this->input_integral.frozen_core_ints[quantum_part_idx], "FCop_" + quantum_part_key + ".txt");
  }

  // calculate energy for frozen core block
  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    this->detset.frozen_core_energy[quantum_part_idx] = 0.0;
    if (this->frozen_core[quantum_part_idx] != 0) {
      if (quantum_part.restricted == false) {
        this->detset.frozen_core_energy[quantum_part_idx] =   0.5 * (((fc_dm[quantum_part_idx][0] + fc_dm[quantum_part_idx][1]).array() * (this->input_epscf.H_core[quantum_part_idx]).array()) +                  ((fc_dm[quantum_part_idx][0]).array() * (this->input_integral.frozen_core_ints[quantum_part_idx]).array()) + ((fc_dm[quantum_part_idx][1]).array() * (this->input_integral.frozen_core_ints[quantum_part_idx]).array()))                    .sum();
      } else {
        this->detset.frozen_core_energy[quantum_part_idx] = (fc_dm[quantum_part_idx][0].array() * (this->input_epscf.H_core[quantum_part_idx] + this->input_integral.frozen_core_ints[quantum_part_idx]).array()).sum();
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPCI::setup_determinants() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  std::vector<std::vector<std::vector<int>>> occ;
  auto quantum_part_idx = 0ul;
  occ.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    std::vector<int> this_spin_occ;
    for (auto i = 0; i < quantum_part.num_parts_alpha - this->frozen_core[quantum_part_idx]; i++) {
      this_spin_occ.push_back(i);
    }
    occ[quantum_part_idx].push_back(this_spin_occ);
    if (quantum_part.num_parts > 1) {
      if (quantum_part.num_parts_alpha == quantum_part.num_parts_beta) {
        occ[quantum_part_idx].push_back(this_spin_occ);
      } else {
        this_spin_occ.clear();
        for (auto i = 0; i < quantum_part.num_parts_beta - this->frozen_core[quantum_part_idx]; i++) {
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

void POLYQUANT_EPCI::print_success() { Polyquant_cout("CI SUCCESS"); }

void POLYQUANT_EPCI::print_exceeded_iterations() { Polyquant_cout("Exceeded Iterations"); }

void POLYQUANT_EPCI::print_error() { APP_ABORT("Something wrong!"); }

void POLYQUANT_EPCI::print_params() { Polyquant_cout("Running CI"); }

void POLYQUANT_EPCI::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->calculate_integrals();
  this->setup_determinants();
  this->print_start_iterations();

  Eigen::Index initialsubspacevec = this->num_subspace_vec;
  Eigen::Index maxsubspacevec = std::max(2 * this->num_subspace_vec, 10 * this->num_states);
  Polyquant_cout("Initial subspace");
  Polyquant_cout(initialsubspacevec);
  using Scalar = double;
  using Vector_of_Scalar = Eigen::Matrix<double, Eigen::Dynamic, 1>;
  std::cout << "SHIV " <<this->detset.Slater_Condon(0,0) << std::endl;
  for (auto fc_energy : this->detset.frozen_core_energy) {
    std::cout << "SHIV " <<    fc_energy << std::endl;
  }

  DavidsonDerivedLogger<Scalar, Vector_of_Scalar> *logger = new DavidsonDerivedLogger<Scalar, Vector_of_Scalar>();
  Spectra::DavidsonSymEigsSolver<POLYQUANT_DETSET<uint64_t>> solver(this->detset, this->num_states, initialsubspacevec, maxsubspacevec, logger); // Create Solver
  Eigen::Index maxit = this->iteration_max;
  int nconv = solver.compute(Spectra::SortRule::SmallestAlge, maxit, this->convergence_E);

  // Retrieve results
  if (solver.info() == Spectra::CompInfo::Successful) {
    this->print_success();
    this->energies = solver.eigenvalues();
    this->C_ci = solver.eigenvectors();
    std::cout << nconv << " Eigenvalues found:\n" << std::endl;
    //auto frozen_core_shift = 0.0;
    //for (auto fc_energy : this->detset.frozen_core_energy) {
    //  frozen_core_shift += fc_energy;
    //}
    for (auto e = 0; e < this->energies.size(); e++) {
      Polyquant_cout(this->energies[e] + this->input_molecule.E_nuc);// + frozen_core_shift);
    }
  } else {
    APP_ABORT("CI Calculation did not converge!");
  }
}
