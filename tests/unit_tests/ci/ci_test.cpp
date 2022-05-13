#include "basis/basis.hpp"
#include "calculation/calculation.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <bitset>
#include <doctest/doctest.h>

using namespace polyquant;

TEST_SUITE("CI") {
  TEST_CASE("CI: one body MO basis") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    std::vector frozen_core = {0};
    std::vector deleted_virtual = {0};
    std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> fc_dm;
    fc_dm.resize(1); //1 particle
    auto num_basis = test_calc.scf_calc.input_basis.num_basis[0];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> dm;
    dm.resize(num_basis, num_basis);
    dm.setZero();
    fc_dm[0].push_back(dm);
    test_calc.scf_calc.input_integral.calculate_frozen_core_ints(fc_dm, frozen_core);
    test_calc.scf_calc.input_integral.calculate_mo_1_body_integrals(test_calc.scf_calc.C, frozen_core, deleted_virtual);

    CHECK(std::abs(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0, 0)) ==doctest::Approx(32.7032520).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0, 1)) ==doctest::Approx(0.5580913772).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CI: two body MO basis") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    std::vector frozen_core = {0};
    std::vector deleted_virtual = {0};
    test_calc.scf_calc.input_integral.calculate_mo_2_body_integrals(test_calc.scf_calc.C, frozen_core, deleted_virtual);

    CHECK(std::abs(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0, 0)) ==doctest::Approx(4.74449478).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0, 1)) ==doctest::Approx(0.4166223).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0, 2)) ==doctest::Approx(1.00454538).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: setup/detset construction ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.calculate_fc_energy();
    test_ci.setup_determinants();
    CHECK(test_ci.detset.frozen_core_energy[0] == 0.0);
    CHECK(test_ci.detset.max_orb[0] == 7);
    CHECK(test_ci.detset.N_dets == 21);
    CHECK(test_ci.detset.dets.size() == 21);
    std::bitset<8> hf_det("0011111");

    bool det_found = false;
    for (auto const &detvec : test_ci.detset.unique_dets[0][0]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), hf_det.to_ulong());
    if (it != std::end(detvec)){
        det_found = true;
         break;
    }
    }
    CHECK( det_found == true);

    det_found = false;
    for (auto const &detvec : test_ci.detset.unique_dets[0][1]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), hf_det.to_ulong());
    if (it != std::end(detvec)) {
        det_found = true;
         break;
    }
    }
    CHECK( det_found == true);



    std::bitset<8> single_exc_det("0011111");

    det_found = false;
    for (auto const &detvec : test_ci.detset.unique_dets[0][0]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), single_exc_det.to_ulong());
    if (it != std::end(detvec)){
        det_found = true;
         break;
    }
    }
    CHECK( det_found == true);

    det_found = false;
    for (auto const &detvec : test_ci.detset.unique_dets[0][1]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), single_exc_det.to_ulong());
    if (it != std::end(detvec)){
        det_found = true;
         break;
    }
    }
    CHECK( det_found == true);
  }
  TEST_CASE("CI: frozen core energy ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.frozen_core.push_back(2);
    test_ci.deleted_virtual.push_back(0);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.calculate_fc_energy();
    // Unverified number
    CHECK(test_ci.detset.frozen_core_energy[0] == doctest::Approx(-71.3745646924).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: get holes ") {
    POLYQUANT_DETSET<uint64_t> detset;
    std::bitset<8> hf_det("0011111");
    std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
    std::bitset<8> single_ext("0101111");
    std::vector<uint64_t> single_ext_vec = {single_ext.to_ulong()};
    std::vector<int> holes;
    detset.get_holes(hf_det_vec, single_ext_vec, holes);
    CHECK(holes.size() == 1);
    CHECK(holes[0] == 4);

    holes.clear();
    std::bitset<8> double_ext("1101101");
    std::vector<uint64_t> double_ext_vec = {double_ext.to_ulong()};
    detset.get_holes(hf_det_vec, double_ext_vec, holes);
    CHECK(holes.size() == 2);
    CHECK(holes[0] == 1);
    CHECK(holes[1] == 4);
  }
  TEST_CASE("CI: get parts ") {
    POLYQUANT_DETSET<uint64_t> detset;
    std::bitset<8> hf_det("0011111");
    std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
    std::bitset<8> single_ext("0101111");
    std::vector<uint64_t> single_ext_vec = {single_ext.to_ulong()};
    std::vector<int> parts;
    detset.get_parts(hf_det_vec, single_ext_vec, parts);
    CHECK(parts.size() == 1);
    CHECK(parts[0] == 5);
    parts.clear();
    std::bitset<8> double_ext("1101101");
    std::vector<uint64_t> double_ext_vec = {double_ext.to_ulong()};
    detset.get_parts(hf_det_vec, double_ext_vec, parts);
    CHECK(parts.size() == 2);
    CHECK(parts[0] == 5);
    CHECK(parts[1] == 6);
  }
  TEST_CASE("CI: get phase ") {
    POLYQUANT_DETSET<uint64_t> detset;
    std::bitset<8> hf_det("0011111");
    std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
    std::bitset<8> single_ext("0101111");
    std::vector<uint64_t> single_ext_vec = {single_ext.to_ulong()};
    std::bitset<8> double_ext("1101101");
    std::vector<uint64_t> double_ext_vec = {double_ext.to_ulong()};
    std::vector<int> holes;
    std::vector<int> parts;

    detset.get_holes(hf_det_vec, single_ext_vec, holes);
    detset.get_parts(hf_det_vec, single_ext_vec, parts);
    auto phase = detset.get_phase(hf_det_vec, single_ext_vec, holes, parts);
    CHECK(phase == 1.0);

    holes.clear();
    parts.clear();
    detset.get_holes(hf_det_vec, double_ext_vec, holes);
    detset.get_parts(hf_det_vec, double_ext_vec, parts);
    phase = detset.get_phase(hf_det_vec, double_ext_vec, holes, parts);
    CHECK(phase == 1.0);
  }
  TEST_CASE("CI: get occ virt ") {
    POLYQUANT_DETSET<uint64_t> detset;
    detset.max_orb = {7};
    std::bitset<8> hf_det("0011111");
    std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
    std::vector<int> occ, virt;
    detset.get_occ_virt(0, hf_det_vec, occ, virt);
    CHECK(occ.size() == 5);
    CHECK(virt.size() == 2);
    for (auto i = 0; i < occ.size(); i++) {
      CHECK(occ[i] == i);
    }
    for (auto i = 0; i < virt.size(); i++) {
      CHECK(virt[i] == occ.size() + i);
    }
  }
  TEST_CASE("CI: same part ham diag ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();
    test_ci.detset.precompute_diagonal_Slater_Condon();

    std::vector<int> i_unfold = {0,0};
    std::vector<int> j_unfold = {0,0};
    auto diag_ham_elem = test_ci.detset.same_part_ham_diag(0, i_unfold, j_unfold);
    CHECK(diag_ham_elem == doctest::Approx(-84.1577927627923).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));

    auto folded_idet_idx = test_ci.detset.dets.find(i_unfold)->second;
    auto diag_ham_single_elem_thru_SC =test_ci.detset.Slater_Condon(folded_idet_idx, folded_idet_idx);
  }
  TEST_CASE("CI: same part ham single ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();

    std::vector<int> i_unfold = {0,0};
    std::vector<int> j_unfold = {0,1};
    auto off_diag_ham_single_elem = test_ci.detset.same_part_ham_single(0, i_unfold, j_unfold);
    CHECK(off_diag_ham_single_elem ==doctest::Approx(3.042582036923841e-08).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_single_elem = test_ci.detset.same_part_ham_single(0, j_unfold, i_unfold);
    CHECK(off_diag_ham_single_elem ==doctest::Approx(3.042582036923841e-08).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));


    auto folded_idet_idx = test_ci.detset.dets.find(i_unfold)->second;
    auto folded_jdet_idx = test_ci.detset.dets.find(j_unfold)->second;
    auto off_diag_ham_single_elem_thru_SC =test_ci.detset.Slater_Condon(folded_idet_idx, folded_jdet_idx);
    CHECK(off_diag_ham_single_elem ==doctest::Approx(off_diag_ham_single_elem_thru_SC).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_single_elem_thru_SC =test_ci.detset.Slater_Condon(folded_jdet_idx, folded_idet_idx);
    CHECK(off_diag_ham_single_elem ==doctest::Approx(off_diag_ham_single_elem_thru_SC).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: same part ham double ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {2, 2, 2};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();

    std::vector<int> i_unfold = {0,0};
    std::vector<int> j_unfold = {0,12};
    auto off_diag_ham_double_elem = test_ci.detset.same_part_ham_double(0, i_unfold, j_unfold);
    auto ref_value = 0.010855436090541142;
    CHECK(off_diag_ham_double_elem ==doctest::Approx(ref_value).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_double_elem = test_ci.detset.same_part_ham_double(0, j_unfold, i_unfold);
    CHECK(off_diag_ham_double_elem ==doctest::Approx(ref_value).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));


    auto folded_idet_idx = test_ci.detset.dets.find(i_unfold)->second;
    auto folded_jdet_idx = test_ci.detset.dets.find(j_unfold)->second;
    auto off_diag_ham_double_elem_thru_SC =test_ci.detset.Slater_Condon(folded_idet_idx, folded_jdet_idx);
    CHECK(off_diag_ham_double_elem ==doctest::Approx(off_diag_ham_double_elem_thru_SC).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_double_elem_thru_SC =test_ci.detset.Slater_Condon(folded_jdet_idx, folded_idet_idx);
    CHECK(off_diag_ham_double_elem ==doctest::Approx(off_diag_ham_double_elem_thru_SC).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CI: det_idx_unfold") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();
    
    for (auto i = 0; i < test_ci.detset.N_dets; i++) {
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
      CHECK(unfolded_idx.size() == 2);
      if (i < 11){
        CHECK(unfolded_idx[0] == 0);
        CHECK(unfolded_idx[1] == i );
      } else {
        CHECK(unfolded_idx[1] == 0);
        CHECK(unfolded_idx[0] == i - 10);
      }
    }
  }
  TEST_CASE("CI: mixed part ham diag ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation(
        "../../tests/data/li-_custombasis_wpos/Li_wpos.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.frozen_core.push_back(0);
    test_ci.frozen_core.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();
    test_ci.detset.precompute_diagonal_Slater_Condon();
    
    std::vector<int> i_unfold = {0,0,0,0};
    auto folded_idx = test_ci.detset.dets.find(i_unfold)->second;
    auto diag_ham_elem = test_ci.detset.Slater_Condon(folded_idx, folded_idx);
    CHECK(diag_ham_elem == doctest::Approx(-7.5257234633357024123).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: mixed part ham single ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.frozen_core.push_back(0);
    test_ci.frozen_core.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();
    
    std::vector<int> i_unfold = {0,0,0,0};
    auto folded_i_idx = test_ci.detset.dets.find(i_unfold)->second;
    for (auto alpha_excitation = 0; alpha_excitation < test_ci.detset.unique_dets[0][0].size(); alpha_excitation++) {
        std::vector<int> j_unfold = {alpha_excitation,0,0,0};
        auto ex = test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[0][0][0], test_ci.detset.unique_dets[0][0][alpha_excitation]);
        if (ex == 1) {
            auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
            auto single_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
            CHECK(single_ham_elem == doctest::Approx(0.000000000).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
        }
    }
    for (auto beta_excitation = 0; beta_excitation < test_ci.detset.unique_dets[0][1].size(); beta_excitation++) {
        std::vector<int> j_unfold = {0,beta_excitation,0,0};
        auto ex = test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[0][1][0], test_ci.detset.unique_dets[0][1][beta_excitation]);
        if (ex == 1) {
            auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
            auto single_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
            CHECK(single_ham_elem == doctest::Approx(0.000000000).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
        }
    }
    for (auto pos_excitation = 0; pos_excitation < test_ci.detset.unique_dets[1][0].size(); pos_excitation++) {
        std::vector<int> j_unfold = {0,0,pos_excitation,0};
        auto ex = test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[1][0][0], test_ci.detset.unique_dets[1][0][pos_excitation]);
        if (ex == 1) {
            auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
            auto single_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
            CHECK(single_ham_elem == doctest::Approx(0.000000000).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
        }
    }
  }

  TEST_CASE("CI: mixed part ham double ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.frozen_core.push_back(0);
    test_ci.frozen_core.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();
    
    std::vector<int> i_unfold = {0,0,0,0};
    auto folded_i_idx = test_ci.detset.dets.find(i_unfold)->second;

    std::vector<int> j_unfold = {22,0,7,0};
    auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
    auto double_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
    CHECK(std::abs(double_ham_elem) == doctest::Approx(0.017292652397971213646).epsilon(1e-3));
    // CHECK(0 == 1);
    //  auto max_val = 0.0;
    //  for (auto elec_excitation = 0; elec_excitation < test_ci.detset.unique_dets[0][0].size(); elec_excitation++) {
    //  for (auto pos_excitation = 0; pos_excitation < test_ci.detset.unique_dets[1][0].size(); pos_excitation++) {
    //      std::vector<int> j_unfold = {elec_excitation,0,pos_excitation,0};
    //      auto ex = 0.0; 
    //      ex += test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[0][0][0], test_ci.detset.unique_dets[0][0][elec_excitation]);
    //      ex += test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[1][0][0], test_ci.detset.unique_dets[1][0][pos_excitation]);
    //      if (ex == 2) {
    //          auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
    //          auto double_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
    //          if (std::abs(double_ham_elem) > max_val)
    //          {
    //              std::cout << " " << elec_excitation << " " << pos_excitation << " " << double_ham_elem  << std::endl;
    //              max_val = double_ham_elem;
    //          }
    //          //CHECK(single_ham_elem == doctest::Approx(0.000000000).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    //      }
    //  }
    //  }
  }


   TEST_CASE("CI: single species sigma slow v fast") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {2, 2, 2};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();
    test_ci.detset.precompute_diagonal_Slater_Condon();
    
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma;
    sigma.resize(test_ci.detset.N_dets, 1);
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma_fast;
    sigma_fast.resize(test_ci.detset.N_dets, 1);
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C;
    C.resize(test_ci.detset.N_dets, 1);
    /////////////////////////////////////////////////////////////////////
    C.setZero();
    sigma.setZero();
    sigma_fast.setZero();
    C(0,0) = 1.0;

    test_ci.detset.create_sigma_slow(sigma, C);
    test_ci.detset.create_sigma(sigma_fast, C);
    std::cout << "\n" << "C[0] = 1; C[i > 0]  = 0" << "\n" << std::endl;
    for (auto i =0; i< test_ci.detset.N_dets; i++){
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
        std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "        " <<sigma(i,0) << "  " << sigma_fast(i,0) << "     " << sigma(i,0) - sigma_fast(i,0) << std::endl;
      CHECK(sigma(i,0) == doctest::Approx(sigma_fast(i,0)).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    }
    /////////////////////////////////////////////////////////////////////
    C.setZero();
    sigma.setZero();
    sigma_fast.setZero();
    C(5,0) = 1.0;

    test_ci.detset.create_sigma_slow(sigma, C);
    test_ci.detset.create_sigma(sigma_fast, C);
    std::cout << "\n" << "C[5] = 1; C[i != 5]  = 0" << "\n" << std::endl;
    for (auto i =0; i< test_ci.detset.N_dets; i++){
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
        std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "        " <<sigma(i,0) << "  " << sigma_fast(i,0) << "     " << sigma(i,0) - sigma_fast(i,0) << std::endl;
        CHECK(sigma(i,0) == doctest::Approx(sigma_fast(i,0)).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    }

    /////////////////////////////////////////////////////////////////////
    std::cout << "\n" << "C[:] = One over N_dets" << "\n" << std::endl;
    C.setZero();
    sigma.setZero();
    sigma_fast.setZero();
    for(auto i = 0; i < test_ci.detset.N_dets; i++){
        C(i,0) = 1.0 / test_ci.detset.N_dets;
    }

    test_ci.detset.create_sigma_slow(sigma, C);
    test_ci.detset.create_sigma(sigma_fast, C);

    for (auto i =0; i< test_ci.detset.N_dets; i++){
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
        std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "        " <<sigma(i,0) << "  " << sigma_fast(i,0) << "     " << sigma(i,0) - sigma_fast(i,0) << std::endl;
      CHECK(sigma(i,0) == doctest::Approx(sigma_fast(i,0)).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    }
    


  }

  TEST_CASE("CI: multispecies sigma slow v fast") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/PsH_wpos/PsH_wpos.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.frozen_core.push_back(0);
    test_ci.frozen_core.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.deleted_virtual.push_back(0);
    test_ci.setup(test_calc.scf_calc);
    test_ci.calculate_integrals();
    test_ci.setup_determinants();
    test_ci.detset.precompute_diagonal_Slater_Condon();
    
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma;
    sigma.resize(test_ci.detset.N_dets, 1);
    sigma.setZero();
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma_fast;
    sigma_fast.resize(test_ci.detset.N_dets, 1);
    sigma_fast.setZero();
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C;
    C.resize(test_ci.detset.N_dets, 1);
    /////////////////////////////////////////////////////////////////////
    C.setZero();
    sigma.setZero();
    sigma_fast.setZero();
    C(0,0) = 1.0;

    test_ci.detset.create_sigma_slow(sigma, C);
    test_ci.detset.create_sigma(sigma_fast, C);
    std::cout << "\n" << "C[0] = 1; C[i > 0]  = 0" << "\n" << std::endl;
    for (auto i =0; i< test_ci.detset.N_dets; i++){
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
        std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "   " << unfolded_idx[2] << "   " << unfolded_idx[3] << "        " <<sigma(i,0) << "  " << sigma_fast(i,0) << "     " << sigma(i,0) - sigma_fast(i,0) << std::endl;
      CHECK(sigma(i,0) == doctest::Approx(sigma_fast(i,0)).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    }
    /////////////////////////////////////////////////////////////////////
    C.setZero();
    sigma.setZero();
    sigma_fast.setZero();
    C(5,0) = 1.0;

    test_ci.detset.create_sigma_slow(sigma, C);
    test_ci.detset.create_sigma(sigma_fast, C);
    std::cout << "\n" << "C[5] = 1; C[i != 5]  = 0" << "\n" << std::endl;
    for (auto i =0; i< test_ci.detset.N_dets; i++){
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
        std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "   " << unfolded_idx[2] << "   " << unfolded_idx[3] << "        " <<sigma(i,0) << "  " << sigma_fast(i,0) << "     " << sigma(i,0) - sigma_fast(i,0) << std::endl;
        CHECK(sigma(i,0) == doctest::Approx(sigma_fast(i,0)).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    }

    /////////////////////////////////////////////////////////////////////
    std::cout << "\n" << "C[:] = One over N_dets" << "\n" << std::endl;
    C.setZero();
    sigma.setZero();
    sigma_fast.setZero();
    for(auto i = 0; i < test_ci.detset.N_dets; i++){
        C(i,0) = 1.0 / test_ci.detset.N_dets;
    }

    test_ci.detset.create_sigma_slow(sigma, C);
    test_ci.detset.create_sigma(sigma_fast, C);

    for (auto i =0; i< test_ci.detset.N_dets; i++){
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
        std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "   " << unfolded_idx[2] << "   " << unfolded_idx[3] << "        " <<sigma(i,0) << "  " << sigma_fast(i,0) << "     " << sigma(i,0) - sigma_fast(i,0) << std::endl;
      CHECK(sigma(i,0) == doctest::Approx(sigma_fast(i,0)).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    }
    

  }
}
