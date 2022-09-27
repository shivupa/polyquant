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

  for (auto i = 0; i < this->input_molecule.quantum_particles.size(); i++) {
    this->detset.max_orb.push_back(this->input_epscf.num_mo[i] - this->frozen_core[i] - this->deleted_virtual[i]);
  }
  this->detset.set_integral(this->input_integral);
}

void POLYQUANT_EPCI::calculate_fc_energy() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  // caculate dm for frozen core block
  fc_dm.resize(this->input_molecule.quantum_particles.size());
  fc_occ.resize(this->input_molecule.quantum_particles.size());
  this->detset.frozen_core_energy.resize(this->input_molecule.quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_ao = this->input_basis.num_basis[quantum_part_idx];
    auto num_mo = this->input_epscf.num_mo[quantum_part_idx];
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      fc_dm[quantum_part_idx].resize(2);
      fc_occ[quantum_part_idx].resize(2);
      fc_occ[quantum_part_idx][0].setZero(num_mo);
      fc_occ[quantum_part_idx][1].setZero(num_mo);
      fc_dm[quantum_part_idx][0].setZero(num_ao, num_ao);
      fc_dm[quantum_part_idx][1].setZero(num_ao, num_ao);
    } else {
      fc_dm[quantum_part_idx].resize(1);
      fc_occ[quantum_part_idx].resize(1);
      fc_occ[quantum_part_idx][0].setZero(num_mo);
      fc_dm[quantum_part_idx][0].setZero(num_ao, num_ao);
    }
    quantum_part_idx++;
  }

  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
    if (this->frozen_core[quantum_part_idx] != 0) {
      auto num_parts_alpha = this->frozen_core[quantum_part_idx];
      auto num_parts_beta = this->frozen_core[quantum_part_idx];
      this->input_epscf.form_occ_helper_aufbau(fc_occ[quantum_part_idx][0], quantum_part_idx, 0, num_parts_alpha, 1.0);
      this->input_epscf.form_DM_helper(fc_dm[quantum_part_idx][0], fc_dm[quantum_part_idx][0], this->input_epscf.C[quantum_part_idx][0], fc_occ[quantum_part_idx][0], num_basis, num_parts_alpha);
      if (verbose == true) {
        Polyquant_dump_mat_to_file(fc_dm[quantum_part_idx][0], "FC_DM_" + quantum_part_key + "_alpha.txt");
      }
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        this->input_epscf.form_occ_helper_aufbau(fc_occ[quantum_part_idx][1], quantum_part_idx, 1, num_parts_beta, 1.0);
        this->input_epscf.form_DM_helper(fc_dm[quantum_part_idx][1], fc_dm[quantum_part_idx][1], this->input_epscf.C[quantum_part_idx][1], fc_occ[quantum_part_idx][1], num_basis, num_parts_beta);
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

void POLYQUANT_EPCI::diag_dm_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &orbs,
                                    Eigen::Matrix<double, Eigen::Dynamic, 1> &occs) {
  Eigen::SelfAdjointEigenSolver<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> eigensolver(dm);
  occs = eigensolver.eigenvalues();
  orbs = eigensolver.eigenvectors();
  std::vector<int> argsort_indices;
  bool ascending = false;
  argsort_indices = argsort(occs, ascending);
  Eigen::PermutationMatrix<Eigen::Dynamic, Eigen::Dynamic> swapper_mat(orbs.cols());
  swapper_mat.indices() = Eigen::Map<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Unaligned>(argsort_indices.data(), argsort_indices.size());
  // multiply from right : permute cols, multiply from left, permute rows
  std::sort(occs.begin(), occs.end(), std::greater<double>());
  orbs = orbs * swapper_mat;
}

void POLYQUANT_EPCI::calculate_NOs() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  this->dm1.resize(this->NO_states.size());
  this->C_nso.resize(this->NO_states.size());
  // this->C_no.resize(this->NO_states.size());
  this->occ_nso.resize(this->NO_states.size());
  // this->occ_no.resize(this->NO_states.size());

  for (int state_vec_idx = 0; state_vec_idx < this->NO_states.size(); state_vec_idx++) {
    auto state_idx = this->NO_states[state_vec_idx];
    this->dm1[state_vec_idx].resize(this->input_molecule.quantum_particles.size());
    this->C_nso[state_vec_idx].resize(this->input_molecule.quantum_particles.size());
    // this->C_no[state_vec_idx].resize(this->input_molecule.quantum_particles.size());
    this->occ_nso[state_vec_idx].resize(this->input_molecule.quantum_particles.size());
    // this->occ_no[state_vec_idx].resize(this->input_molecule.quantum_particles.size());
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      auto num_basis = this->input_basis.num_basis[quantum_part_idx];
      if (quantum_part.num_parts > 1) {
        dm1[state_vec_idx][quantum_part_idx].resize(2);
        this->C_nso[state_vec_idx][quantum_part_idx].resize(2);
        // this->C_no[state_vec_idx][quantum_part_idx].resize(1);
        this->occ_nso[state_vec_idx][quantum_part_idx].resize(2);
        // this->occ_no[state_vec_idx][quantum_part_idx].resize(1);
        dm1[state_vec_idx][quantum_part_idx][0].setZero(num_basis, num_basis);
        dm1[state_vec_idx][quantum_part_idx][1].setZero(num_basis, num_basis);
      } else {
        this->C_nso[state_vec_idx][quantum_part_idx].resize(1);
        // this->C_no[state_vec_idx][quantum_part_idx].resize(1);
        this->occ_nso[state_vec_idx][quantum_part_idx].resize(1);
        // this->occ_no[state_vec_idx][quantum_part_idx].resize(1);
        dm1[state_vec_idx][quantum_part_idx].resize(1);
        dm1[state_vec_idx][quantum_part_idx][0].setZero(num_basis, num_basis);
      }
      quantum_part_idx++;
    }
    // calculate DM in MO basis
    // transform to AO
    // add FC contribution
    quantum_part_idx = 0;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> MO_rdm1;
      auto num_mo = 0;
      if (quantum_part.num_parts > 1) {
        num_mo = this->input_epscf.num_mo[quantum_part_idx] - this->frozen_core[quantum_part_idx] - this->deleted_virtual[quantum_part_idx];
        MO_rdm1.setZero(num_mo, num_mo);
        this->detset.create_1rdm(state_idx, quantum_part_idx, 0, MO_rdm1, this->C_ci);
        // MO_rdm1 += fc_occ[quantum_part_idx][0].asDiagonal();
        // Polyquant_dump_mat(MO_rdm1, "Error SHIV1");
        // this->dm1[state_vec_idx][quantum_part_idx][0] = MO_rdm1;
        this->dm1[state_vec_idx][quantum_part_idx][0].setZero(this->input_epscf.num_mo[quantum_part_idx], this->input_epscf.num_mo[quantum_part_idx]);
        // fill fc block
        this->dm1[state_vec_idx][quantum_part_idx][0] += fc_occ[quantum_part_idx][0].asDiagonal();
        // fill active block
        this->dm1[state_vec_idx][quantum_part_idx][0].block(this->frozen_core[quantum_part_idx], this->frozen_core[quantum_part_idx], num_mo, num_mo) = MO_rdm1;

        // MO_rdm nmo x nmo
        // C nao x nmo
        // C @ MO_rdm @ C.T
        // this->dm1[state_vec_idx][quantum_part_idx][0] = this->input_epscf.C[quantum_part_idx][0] * MO_rdm1 * this->input_epscf.C[quantum_part_idx][0].transpose();
        // this->dm1[state_vec_idx][quantum_part_idx][0] += this->fc_dm[quantum_part_idx][0];
        if (quantum_part.restricted == false) {
          num_mo = this->input_epscf.num_mo[quantum_part_idx] - this->frozen_core[quantum_part_idx] - this->deleted_virtual[quantum_part_idx];
          MO_rdm1.setZero(num_mo, num_mo);
          this->detset.create_1rdm(state_idx, quantum_part_idx, 1, MO_rdm1, this->C_ci);
          // MO_rdm1 += fc_occ[quantum_part_idx][1].asDiagonal();
          // // Polyquant_dump_mat(MO_rdm1, "Error SHIV2");
          // this->dm1[state_vec_idx][quantum_part_idx][1] = MO_rdm1;
          this->dm1[state_vec_idx][quantum_part_idx][1].setZero(this->input_epscf.num_mo[quantum_part_idx], this->input_epscf.num_mo[quantum_part_idx]);
          // fill fc block
          this->dm1[state_vec_idx][quantum_part_idx][1] += fc_occ[quantum_part_idx][1].asDiagonal();
          // fill active block
          this->dm1[state_vec_idx][quantum_part_idx][1].block(this->frozen_core[quantum_part_idx], this->frozen_core[quantum_part_idx], num_mo, num_mo) = MO_rdm1;
          // this->dm1[state_vec_idx][quantum_part_idx][1] = this->input_epscf.C[quantum_part_idx][1] * MO_rdm1 * this->input_epscf.C[quantum_part_idx][1].transpose();
          // this->dm1[state_vec_idx][quantum_part_idx][1] += this->fc_dm[quantum_part_idx][1];
        } else {
          this->dm1[state_vec_idx][quantum_part_idx][1] = this->dm1[state_vec_idx][quantum_part_idx][0];
        }
      } else {
        num_mo = this->input_epscf.num_mo[quantum_part_idx] - this->frozen_core[quantum_part_idx] - this->deleted_virtual[quantum_part_idx];
        MO_rdm1.setZero(num_mo, num_mo);
        this->detset.create_1rdm(state_idx, quantum_part_idx, 0, MO_rdm1, this->C_ci);
        // MO_rdm1 += fc_occ[quantum_part_idx][0].asDiagonal();
        // // Polyquant_dump_mat(MO_rdm1, "Error SHIV3");
        // this->dm1[state_vec_idx][quantum_part_idx][0] = MO_rdm1;
        this->dm1[state_vec_idx][quantum_part_idx][0].setZero(this->input_epscf.num_mo[quantum_part_idx], this->input_epscf.num_mo[quantum_part_idx]);
        // fill fc block
        this->dm1[state_vec_idx][quantum_part_idx][0] += fc_occ[quantum_part_idx][0].asDiagonal();
        // fill active block
        this->dm1[state_vec_idx][quantum_part_idx][0].block(this->frozen_core[quantum_part_idx], this->frozen_core[quantum_part_idx], num_mo, num_mo) = MO_rdm1;
        // this->dm1[state_vec_idx][quantum_part_idx][0] = this->input_epscf.C[quantum_part_idx][0] * MO_rdm1 * this->input_epscf.C[quantum_part_idx][0].transpose();
        // this->dm1[state_vec_idx][quantum_part_idx][0] += this->fc_dm[quantum_part_idx][0];
      }
      quantum_part_idx++;
    }
    // if verbose dump
    if (verbose == true) {
      quantum_part_idx = 0ul;
      for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
        std::stringstream dump_file;
        dump_file << "CI_state_";
        dump_file << state_idx;
        dump_file << "_DM_";
        dump_file << quantum_part_key;
        dump_file << "_alpha.txt";
        Polyquant_dump_mat_to_file(dm1[state_idx][quantum_part_idx][0], dump_file.str());
        if (quantum_part.num_parts > 1) {
          std::stringstream dump_file;
          dump_file << "CI_state_";
          dump_file << state_idx;
          dump_file << "_DM_";
          dump_file << quantum_part_key;
          dump_file << "_beta.txt";
          Polyquant_dump_mat_to_file(dm1[state_idx][quantum_part_idx][1], dump_file.str());
        }
        quantum_part_idx++;
      }
    }

    // diag for NSOs and occ
    // print
    quantum_part_idx = 0;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      if (quantum_part.num_parts > 1) {
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> NOs_mobasis;
        diag_dm_helper(this->dm1[state_idx][quantum_part_idx][0], NOs_mobasis, this->occ_nso[state_idx][quantum_part_idx][0]);
        this->C_nso[state_idx][quantum_part_idx][0].noalias() = this->input_epscf.C[quantum_part_idx][0] * NOs_mobasis;
        diag_dm_helper(this->dm1[state_idx][quantum_part_idx][1], NOs_mobasis, this->occ_nso[state_idx][quantum_part_idx][1]);
        if (quantum_part.restricted == false) {
          this->C_nso[state_idx][quantum_part_idx][1].noalias() = this->input_epscf.C[quantum_part_idx][1] * NOs_mobasis;
        } else {
          this->C_nso[state_idx][quantum_part_idx][1].noalias() = this->input_epscf.C[quantum_part_idx][0] * NOs_mobasis;
        }
      } else {
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> NOs_mobasis;
        diag_dm_helper(this->dm1[state_idx][quantum_part_idx][0], NOs_mobasis, this->occ_nso[state_idx][quantum_part_idx][0]);
        this->C_nso[state_idx][quantum_part_idx][0].noalias() = this->input_epscf.C[quantum_part_idx][0] * NOs_mobasis;
      }
      quantum_part_idx++;
    }
    // diag for NOs and occ
    // print
    // quantum_part_idx = 0;
    // for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    //   if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
    //     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> dm1_spin_combined = this->dm1[state_idx][quantum_part_idx][0] + this->dm1[state_idx][quantum_part_idx][1];
    //     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> NOs_mobasis;
    //     diag_dm_helper(dm1_spin_combined, this->C_no[state_idx][quantum_part_idx][0], this->occ_no[state_idx][quantum_part_idx][0]);
    //     this->C_no[state_idx][quantum_part_idx][0].noalias() = this->input_epscf.C[quantum_part_idx][0] * NOs_mobasis;
    //   } else {
    //     if (quantum_part.num_parts > 1) {
    //       Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> dm1_spin_combined = this->dm1[state_idx][quantum_part_idx][0] + this->dm1[state_idx][quantum_part_idx][0];
    //       diag_dm_helper(dm1_spin_combined, this->C_no[state_idx][quantum_part_idx][0], this->occ_no[state_idx][quantum_part_idx][0]);
    //     } else {
    //       Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> dm1_spin_combined = this->dm1[state_idx][quantum_part_idx][0] + this->dm1[state_idx][quantum_part_idx][1];
    //       diag_dm_helper(dm1_spin_combined, this->C_no[state_idx][quantum_part_idx][0], this->occ_no[state_idx][quantum_part_idx][0]);
    //     }
    //   }
    //   quantum_part_idx++;
    // }
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
  this->detset.create_unique_excitation_map_singles();
  this->detset.create_unique_excitation_map_doubles();
}

void POLYQUANT_EPCI::print_start() { Polyquant_section_header("Multispecies CI Calculation"); }
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
    line = "";
    for (auto i = 0; i < this->detset.N_dets; i++) {
      std::stringstream unfold_string;
      auto i_unfold = this->detset.det_idx_unfold(i);
      for (auto unfold_idx : i_unfold) {
        unfold_string << unfold_idx;
        unfold_string << " ";
      }
      if (std::abs(this->C_ci(i, state_idx)) > this->det_print_threshold) {
        line += fmt::format("{: ^10}{:^30}{: ^10}{:>20.12f}{: ^10}\n", "", unfold_string.str(), "", this->C_ci(i, state_idx), "");
      }
    }
    Polyquant_cout(line);
  }
  for (int state_vec_idx = 0; state_vec_idx < this->NO_states.size(); state_vec_idx++) {
    auto state_idx = this->NO_states[state_vec_idx];
    Polyquant_cout("");
    std::stringstream title;
    title << "NATURAL SPIN ORBITALS  state " << state_idx;
    dump_orbitals(this->C_nso[state_vec_idx], this->occ_nso[state_vec_idx], this->occ_nso[state_vec_idx], title.str());

    // title.str(std::string());
    // title << "NATURAL ORBITALS  state " << state_idx;
    // dump_orbitals(this->C_no[state_vec_idx], this->occ_no[state_vec_idx], this->occ_no[state_vec_idx], title.str());
  }
}

void POLYQUANT_EPCI::print_exceeded_iterations() { Polyquant_cout("Exceeded Iterations"); }

void POLYQUANT_EPCI::print_error() { APP_ABORT("Something wrong!"); }

void POLYQUANT_EPCI::print_params() { Polyquant_cout("Running CI"); }

void POLYQUANT_EPCI::fcidump(std::string &filename) {
  // Assemble data
  // &FCI
  // NORB=36,
  // NELEC=14,
  // MS2=0,
  // UHF=.FALSE.,
  // ORBSYM=1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,
  // ISYM=1,
  // PNTGRP=C2V,
  // &END
  auto quantum_part_a_idx = 0ul;
  for (auto const &[quantum_part_a_key, quantum_part_a] : this->input_molecule.quantum_particles) {
    int num_mo = this->input_epscf.num_mo[quantum_part_a_idx];
    int num_part_total = quantum_part_a.num_parts;
    int ms2 = quantum_part_a.multiplicity - 1; // we store mult they want spin
    bool unique_beta = (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false);
    bool restricted = !unique_beta;
    auto &MO_a_coeff = this->input_epscf.C[quantum_part_a_idx][0];
    auto &MO_a_energy = this->input_epscf.E_orbitals[quantum_part_a_idx][0];
    auto &MO_b_coeff = unique_beta ? this->input_epscf.C[quantum_part_a_idx][1] : this->input_epscf.C[quantum_part_a_idx][0];
    auto &MO_b_energy = unique_beta ? this->input_epscf.E_orbitals[quantum_part_a_idx][1] : this->input_epscf.E_orbitals[quantum_part_a_idx][0];
    auto E_constant = this->input_molecule.E_nuc;
    std::vector<int> MO_symmetry_labels;
    MO_symmetry_labels.resize(MO_a_coeff.cols() + MO_b_coeff.cols(), 1);
    int isym = 1;
    std::string point_group = "C1";
    auto quantum_part_b_idx = 0ul;
    for (auto const &[quantum_part_b_key, quantum_part_b] : this->input_molecule.quantum_particles) {
      if (quantum_part_b_idx < quantum_part_a_idx) {
        quantum_part_b_idx++;
        continue;
      }
      std::string particle_filename;
      if (quantum_part_a_idx == quantum_part_b_idx) {
        particle_filename = quantum_part_a_key + "_" + filename;
      } else {
        particle_filename = quantum_part_a_key + "_" + quantum_part_b_key + "_" + filename;
      }
      POLYQUANT_FCIDUMP fcidump_f(particle_filename);
      // todo: learn about this-> references
      fcidump_f.dump(num_mo, num_part_total, ms2, restricted, MO_symmetry_labels, isym, point_group, this->input_integral, E_constant, MO_a_energy, MO_b_energy, quantum_part_a_idx,
                     quantum_part_b_idx);
      // need integrals
      // std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> mo_one_body_ints;
      // std::vector<std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>>> mo_two_body_ints;
      // call function in IO
      quantum_part_b_idx++;
    }
    quantum_part_a_idx++;
  }
}
void POLYQUANT_EPCI::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->print_start();
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

  if (this->detset.build_matrix == false) {
    Spectra::DavidsonSymEigsSolver<POLYQUANT_DETSET<uint64_t>> solver(this->detset, this->num_states, initialsubspacevec, maxsubspacevec, logger);
    Eigen::Index maxit = this->iteration_max;
    int nconv = solver.compute(Spectra::SortRule::SmallestAlge, maxit, this->convergence_E);
    if (solver.info() == Spectra::CompInfo::Successful) {
      this->energies = solver.eigenvalues();
      this->C_ci = solver.eigenvectors();
      for (auto e = 0; e < this->energies.size(); e++) {
        this->energies[e] += constant_shift;
      }
      this->calculate_NOs();
      this->print_success();
      this->dump_molden();
    } else {
      APP_ABORT("CI Calculation did not converge!");
    }
  } else {
    this->detset.create_ham();
    // row major so Upper has more continguous memory
    Spectra::SparseSymMatProd<double, Eigen::Upper, Eigen::RowMajor, int> op_sparse(this->detset.ham);
    Spectra::DavidsonSymEigsSolver<Spectra::SparseSymMatProd<double, Eigen::Upper, Eigen::RowMajor, int>> solver(op_sparse, this->num_states, initialsubspacevec, maxsubspacevec, logger);
    Eigen::Index maxit = this->iteration_max;
    int nconv = solver.compute(Spectra::SortRule::SmallestAlge, maxit, this->convergence_E);
    if (solver.info() == Spectra::CompInfo::Successful) {
      this->energies = solver.eigenvalues();
      this->C_ci = solver.eigenvectors();
      for (auto e = 0; e < this->energies.size(); e++) {
        this->energies[e] += constant_shift;
      }
      this->calculate_NOs();
      this->print_success();
      this->dump_molden();
    } else {
      APP_ABORT("CI Calculation did not converge!");
    }
  }
}

void POLYQUANT_EPCI::dump_molden() {
  for (int state_vec_idx = 0; state_vec_idx < this->NO_states.size(); state_vec_idx++) {
    auto state_idx = this->NO_states[state_vec_idx];
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
      bool unique_beta = (quantum_part.num_parts > 1 && quantum_part.restricted == false);
      auto &NO_a_coeff = this->C_nso[state_idx][quantum_part_idx][0];
      auto &NO_a_energy = this->occ_nso[state_idx][quantum_part_idx][0];
      auto &NO_a_occupation = this->occ_nso[state_idx][quantum_part_idx][0];
      auto &NO_b_coeff = unique_beta ? this->C_nso[state_idx][quantum_part_idx][1] : this->C_nso[state_idx][quantum_part_idx][0];
      auto &NO_b_energy = unique_beta ? this->occ_nso[state_idx][quantum_part_idx][1] : this->occ_nso[state_idx][quantum_part_idx][0];
      auto &NO_b_occupation = unique_beta ? this->occ_nso[state_idx][quantum_part_idx][1] : this->occ_nso[state_idx][quantum_part_idx][0];

      std::vector<std::string> NO_a_symmetry_labels;
      NO_a_symmetry_labels.resize(NO_a_coeff.cols(), "A");
      std::vector<std::string> NO_b_symmetry_labels;
      NO_b_symmetry_labels.resize(NO_b_coeff.cols(), "A");
      std::vector<libint2::Atom> atoms = this->input_molecule.to_libint_atom();
      try {
        std::stringstream molden_filename;
        molden_filename << "NSO_State_" << state_idx << "_part_" << quantum_part_key << "_polyquant.molden";
        POLYQUANT_MOLDEN molden_dumper(molden_filename.str());
        molden_dumper.dump(atoms, this->input_basis.basis[quantum_part_idx], NO_a_coeff, NO_a_energy, NO_a_symmetry_labels, NO_a_occupation, NO_b_coeff, NO_b_energy, NO_b_symmetry_labels,
                           NO_b_occupation);
      } catch (std::logic_error e) {
        Polyquant_cout("Not dumping molden for " + quantum_part_key + " because : " + e.what());
      }
      quantum_part_idx++;
    }
  }
}
