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
}

void POLYQUANT_EPCI::calculate_fc_energy() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  // caculate dm for frozen core block
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
    if (this->frozen_core[quantum_part_idx] != 0) {
      auto num_parts_alpha = this->frozen_core[quantum_part_idx];
      auto num_parts_beta = this->frozen_core[quantum_part_idx];
      Eigen::Matrix<double, Eigen::Dynamic, 1> occ;
      occ.setZero(num_basis);
      this->input_epscf.form_occ_helper_aufbau(occ, quantum_part_idx, 0, num_parts_alpha, 1.0);
      this->input_epscf.form_DM_helper(fc_dm[quantum_part_idx][0], fc_dm[quantum_part_idx][0], this->input_epscf.C[quantum_part_idx][0], occ, num_basis, num_parts_alpha);
      if (verbose == true) {
        Polyquant_dump_mat_to_file(fc_dm[quantum_part_idx][0], "FC_DM_" + quantum_part_key + "_alpha.txt");
      }
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        Eigen::Matrix<double, Eigen::Dynamic, 1> occ;
        occ.setZero(num_basis);
        this->input_epscf.form_occ_helper_aufbau(occ, quantum_part_idx, 1, num_parts_beta, 1.0);
        this->input_epscf.form_DM_helper(fc_dm[quantum_part_idx][1], fc_dm[quantum_part_idx][1], this->input_epscf.C[quantum_part_idx][1], occ, num_basis, num_parts_beta);
        if (verbose == true) {
          Polyquant_dump_mat_to_file(fc_dm[quantum_part_idx][1], "FC_DM_" + quantum_part_key + "_beta.txt");
        }
      }
    }
    quantum_part_idx++;
  }

  // calculate frozen core  "operator"
  this->input_integral.calculate_frozen_core_ints(fc_dm, this->frozen_core);

  if (verbose == true) {
    quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      Polyquant_dump_mat_to_file(fc_dm[quantum_part_idx][0], "FC_DM_" + quantum_part_key + "_alpha.txt");
      Polyquant_dump_mat_to_file(this->input_integral.frozen_core_ints[quantum_part_idx][0], "FCop_" + quantum_part_key + "_0.txt");
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        Polyquant_dump_mat_to_file(this->input_integral.frozen_core_ints[quantum_part_idx][1], "FCop_" + quantum_part_key + "_1.txt");
      }
    }
  }

  // calculate energy for frozen core block
  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    this->detset.frozen_core_energy[quantum_part_idx] = 0.0;
    if (this->frozen_core[quantum_part_idx] != 0) {
      if (quantum_part.restricted == false) {
        this->detset.frozen_core_energy[quantum_part_idx] = 0.5 * (((fc_dm[quantum_part_idx][0] + fc_dm[quantum_part_idx][1]).array() * (this->input_epscf.H_core[quantum_part_idx]).array()) +
                                                                   ((fc_dm[quantum_part_idx][0]).array() * (this->input_integral.frozen_core_ints[quantum_part_idx][0]).array()) +
                                                                   ((fc_dm[quantum_part_idx][1]).array() * (this->input_integral.frozen_core_ints[quantum_part_idx][1]).array()))
                                                                      .sum();
      } else {
        this->detset.frozen_core_energy[quantum_part_idx] =
            (fc_dm[quantum_part_idx][0].array() * (this->input_epscf.H_core[quantum_part_idx] + this->input_integral.frozen_core_ints[quantum_part_idx][0]).array()).sum();
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPCI::diag_dm_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>& dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>& orbs, Eigen::Matrix<double, Eigen::Dynamic, 1>& occs){
  Eigen::SelfAdjointEigenSolver<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> eigensolver(dm);
  occs = eigensolver.eigenvalues();
  orbs = eigensolver.eigenvectors();
}

void POLYQUANT_EPCI::calculate_NOs(){
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  this->dm1.resize(this->NO_states.size());
  this->C_nso.resize(this->NO_states.size());
  this->C_no.resize(this->NO_states.size());
  this->occ_nso.resize(this->NO_states.size());
  this->occ_no.resize(this->NO_statees.size());

  for (int state_idx : this->NO_states){
    this->dm1[state_idx].resize(this->input_molecule.quantum_particles.size());
    this->C_nso[state_idx].resize(this->input_molecule.quantum_particles.size());
    this->C_no[state_idx].resize(this->input_molecule.quantum_particles.size());
    this->occ_nso[state_idx].resize(this->input_molecule.quantum_particles.size());
    this->occ_no[state_idx].resize(this->input_molecule.quantum_particles.size());
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      auto num_basis = this->input_basis.num_basis[quantum_part_idx];
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        dm1[state_idx][quantum_part_idx].resize(2);
        this->C_nso[state_idx][quantum_part_idx].resize(2);
        this->C_no[state_idx][quantum_part_idx].resize(1);
        dm1[state_idx][quantum_part_idx][0].setZero(num_basis, num_basis);
        dm1[[state_idx]quantum_part_idx][1].setZero(num_basis, num_basis);
      } else {
        this->C_nso[state_idx][quantum_part_idx].resize(1);
        this->C_no[state_idx][quantum_part_idx].resize(1);
        dm1[state_idx][quantum_part_idx].resize(1);
        dm1[state_idx][quantum_part_idx][0].setZero(num_basis, num_basis);
      }
    }
    // calculate DM in MO basis
    // transform to AO
    // add FC contribution
    quantum_part_idx = 0
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> MO_rdm1;
        if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
          this->detset.create_1rdm(state_idx, quantum_part_idx, 0, MO_rdm1, this->C);
          this->dm1[state_idx][quantum_part_idx][0].noalias() = this->input_epscf.C[quantum_part_idx][0].transpose() * MO_rdm1 * this->input_epscf.C[quantum_part_idx][0];
          this->dm1[state_idx][quantum_part_idx][0] += this->fc_dm[quantum_part_idx][0];

          MO_rdm1.clear();
          this->detset.create_1rdm(state_idx, quantum_part_idx, 1, MO_rdm1, this->C);
          this->dm1[state_idx][quantum_part_idx][1] = this->input_epscf.C[quantum_part_idx][1].transpose() * MO_rdm1 * this->input_epscf.C[quantum_part_idx][1];
          this->dm1[state_idx][quantum_part_idx][1] += this->fc_dm[quantum_part_idx][1];
        } else {
          this->detset.create_1rdm(state_idx, quantum_part_idx, 0, MO_rdm1, this->C);
          this->dm1[state_idx][quantum_part_idx][0].noalias() = this->input_epscf.C[quantum_part_idx][0].transpose() * MO_rdm1 * this->input_epscf.C[quantum_part_idx][0];
          this->dm1[state_idx][quantum_part_idx][0] += this->fc_dm[quantum_part_idx][0];
        }
        quantum_part_idx++;
    }
    // if verbose dump
    if (verbose == true) {
      quantum_part_idx = 0ul;
      for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
        Polyquant_dump_mat_to_file(dm1[state_idx][quantum_part_idx][0], "CI_State_" + state_idx + "_DM_" + quantum_part_key + "_alpha.txt");
        if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
          Polyquant_dump_mat_to_file(dm1[state_idx][quantum_part_idx][1], "CI_State_" + state_idx + "_DM_" + quantum_part_key + "_beta.txt");
        }
        quantum_part_idx++;
      }
    }


    // diag for NSOs and occ
    // print
    quantum_part_idx = 0
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
          diag_dm_helper(this->dm1[state_idx][quantum_part_idx][0], this->C_nso[state_idx][quantum_part_idx][0], this->occ_nso[state_idx][quantum_part_idx][0]);
          diag_dm_helper(this->dm1[state_idx][quantum_part_idx][1], this->C_nso[state_idx][quantum_part_idx][1], this->occ_nso[state_idx][quantum_part_idx][1]);
      } else {
          diag_dm_helper(this->dm1[state_idx][quantum_part_idx][0], this->C_nso[state_idx][quantum_part_idx][0], this->occ_nso[state_idx][quantum_part_idx][0]);
      }
      quantum_part_idx++;
    }

    std::stringstream title;
    title << "NATURAL SPIN ORBITALS  state " << state_idx;
    dump_orbitals(this->C_nso[state_idx], this->occ_nso[state_idx], this->occ_nso[state_idx], title.str());

    // diag for NOs and occ
    // print
    quantum_part_idx = 0
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
          diag_dm_helper(this->dm1[state_idx][quantum_part_idx][0] + this->dm1[state_idx][quantum_part_idx][1], this->C_no[state_idx][quantum_part_idx][0], this->occ_nso[state_idx][quantum_part_idx][0]);
      } else {
          if (quantum_part.num_parts > 1) {
          diag_dm_helper(this->dm1[state_idx][quantum_part_idx][0] + this->dm1[state_idx][quantum_part_idx][0], this->C_no[state_idx][quantum_part_idx][0], this->occ_nso[state_idx][quantum_part_idx][0]);
          } else {
          diag_dm_helper(this->dm1[state_idx][quantum_part_idx][0],  this->C_no[state_idx][quantum_part_idx][0], this->occ_nso[state_idx][quantum_part_idx][0]);
          }
      }
      quantum_part_idx++;
    }
    title.str(std::string());
    title << "NATURAL ORBITALS  state " << state_idx;
    dump_orbitals(this->C_no[state_idx], this->occ_no[state_idx], this->occ_no[state_idx], title.str());
  }
}
void POLYQUANT_EPCI::setup_determinants() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  this->detset.resize(this->input_molecule.quantum_particles.size());
  // create gs det
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    std::vector<std::vector<int>> occ;
    std::vector<int> this_spin_occ;
    for (auto i = 0; i < quantum_part.num_parts_alpha - this->frozen_core[quantum_part_idx]; i++) {
      this_spin_occ.push_back(i);
    }
    occ.push_back(this_spin_occ);
    if (quantum_part.num_parts > 1) {
      if (quantum_part.num_parts_alpha == quantum_part.num_parts_beta) {
        occ.push_back(this_spin_occ);
      } else {
        this_spin_occ.clear();
        for (auto i = 0; i < quantum_part.num_parts_beta - this->frozen_core[quantum_part_idx]; i++) {
          this_spin_occ.push_back(i);
        }
        occ.push_back(this_spin_occ);
      }
    } else {
      this_spin_occ.clear();
      occ.push_back(this_spin_occ);
    }
    this->detset.create_det(quantum_part_idx, occ);
    quantum_part_idx++;
  }

  // create unique determinants
  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto ex_lvl = this->excitation_level[quantum_part_idx];
    auto max_alpha_ex_lvl = std::get<0>(ex_lvl);
    auto max_beta_ex_lvl = std::get<1>(ex_lvl);
    for (auto i = 1; i <= max_alpha_ex_lvl; i++) {
      this->detset.create_unique_excitation(quantum_part_idx, 0, i);
    }
    for (auto i = 1; i <= max_beta_ex_lvl; i++) {
      this->detset.create_unique_excitation(quantum_part_idx, 1, i);
    }
    quantum_part_idx++;
  }

  // create acceptable determinant combinations wrt total excitation_level
  this->detset.create_excitation(excitation_level);
  Polyquant_cout("Created " + std::to_string(this->detset.N_dets) + " determinants");
  this->detset.print_determinants();
}

void POLYQUANT_EPCI::print_start_iterations() { Polyquant_cout("Starting CI Iterations"); }

void POLYQUANT_EPCI::print_iteration() { Polyquant_cout("Iteration "); }

void POLYQUANT_EPCI::print_success() {
  Polyquant_cout("CI SUCCESS");
  std::stringstream divider;
  for (auto a = 0; a < 80; a++)
    divider << "*";
  divider << std::endl;

  for (auto state_idx = 0; state_idx < this->num_states; state_idx++) {
    Polyquant_cout(divider.str());
    std::string line;
    line += fmt::format("State {} Energy {}\n", state_idx, this->energies[state_idx]);
    Polyquant_cout(line);
    line = "";
    line += fmt::format("{: ^10}{:^30}{: ^10}{:^20}{: ^10}\n", "", "Det idx", "", "C", "");
    line += fmt::format("{: ^10}{:-^30}{: ^10}{:-^20}{: ^10}", "", "", "", "", "");
    Polyquant_cout(line);
    for (auto i = 0; i < this->detset.N_dets; i++) {
      line = "";
      std::stringstream unfold_string;
      auto i_unfold = this->detset.det_idx_unfold(i);
      for (auto unfold_idx : i_unfold) {
        unfold_string << unfold_idx;
        unfold_string << " ";
      }
      line += fmt::format("{: ^10}{:^30}{: ^10}{:>20.12f}{: ^10}", "", unfold_string.str(), "", this->C_ci(i, state_idx), "");
      Polyquant_cout(line);
    }
  }
  Polyquant_cout("");
}

void POLYQUANT_EPCI::print_exceeded_iterations() { Polyquant_cout("Exceeded Iterations"); }

void POLYQUANT_EPCI::print_error() { APP_ABORT("Something wrong!"); }

void POLYQUANT_EPCI::print_params() { Polyquant_cout("Running CI"); }

void POLYQUANT_EPCI::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->calculate_integrals();
  this->setup_determinants();
  this->detset.precompute_diagonal_Slater_Condon();
  this->print_start_iterations();

  Eigen::Index initialsubspacevec = this->num_subspace_vec;
  Eigen::Index maxsubspacevec = std::max(2 * this->num_subspace_vec, 10 * this->num_states);
  Polyquant_cout("Initial subspace");
  Polyquant_cout(initialsubspacevec);
  using Scalar = double;
  using Vector_of_Scalar = Eigen::Matrix<double, Eigen::Dynamic, 1>;
  auto frozen_core_shift = 0.0;
  for (auto fc_energy : this->detset.frozen_core_energy) {
    frozen_core_shift += fc_energy;
  }
  Scalar constant_shift = this->input_molecule.E_nuc + frozen_core_shift;
  DavidsonDerivedLogger<Scalar, Vector_of_Scalar> *logger = new DavidsonDerivedLogger<Scalar, Vector_of_Scalar>(constant_shift);
  Spectra::DavidsonSymEigsSolver<POLYQUANT_DETSET<uint64_t>> solver(this->detset, this->num_states, initialsubspacevec, maxsubspacevec, logger);
  Eigen::Index maxit = this->iteration_max;
  int nconv = solver.compute(Spectra::SortRule::SmallestAlge, maxit, this->convergence_E);
  if (solver.info() == Spectra::CompInfo::Successful) {
    this->energies = solver.eigenvalues();
    this->C_ci = solver.eigenvectors();
    for (auto e = 0; e < this->energies.size(); e++) {
      this->energies[e] += constant_shift;
    }
    this->print_success();
  } else {
    APP_ABORT("CI Calculation did not converge!");
  }
}
