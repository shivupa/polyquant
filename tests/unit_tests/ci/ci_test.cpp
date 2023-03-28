#include "basis/basis.hpp"
#include "calculation/calculation.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <bitset>
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

using namespace polyquant;

TEST_CASE("CI: one body MO basis", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o_sto3galls.json");
  test_calc.run();
  std::vector frozen_core = {0};
  std::vector deleted_virtual = {0};
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> fc_dm;
  fc_dm.resize(1); // 1 particle
  auto num_basis = test_calc.scf_calc->input_basis->num_basis[0];
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> dm;
  dm.resize(num_basis, num_basis);
  dm.setZero();
  fc_dm[0].push_back(dm);
  test_calc.scf_calc->input_integral->calculate_frozen_core_ints(fc_dm, frozen_core);
  test_calc.scf_calc->input_integral->calculate_mo_1_body_integrals(test_calc.scf_calc->C_combined, frozen_core, deleted_virtual);

  std::vector<std::vector<double>> reference_values;
  std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/ref_mo_onebody.txt";
  Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);

  auto num_mo = test_calc.scf_calc->C_combined[0][0].cols();
  auto idx = 0;
  for (auto i = 0; i < num_mo; i++) {
    for (auto j = i; j < num_mo; j++) {
      std::cout << i << "  " << j << "     " << test_calc.scf_calc->input_integral->mo_one_body_ints[0][0](i, j) << "     " << reference_values[i][j] << std::endl;
      REQUIRE_THAT(std::abs(test_calc.scf_calc->input_integral->mo_one_body_ints[0][0](i, j)), Catch::Matchers::WithinAbs(std::abs(reference_values[i][j]), 1e-5));
    }
  }
}

TEST_CASE("CI: two body MO basis", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o_sto3galls.json");
  test_calc.run();
  std::vector frozen_core = {0};
  std::vector deleted_virtual = {0};
  test_calc.scf_calc->input_integral->calculate_mo_2_body_integrals(test_calc.scf_calc->C_combined, frozen_core, deleted_virtual);

  std::vector<std::vector<double>> reference_values;
  std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/ref_eri.txt";
  Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);

  auto num_mo = test_calc.scf_calc->C_combined[0][0].cols();
  auto idx = 0;
  for (auto i = 0; i < num_mo; i++) {
    for (auto j = i; j < num_mo; j++) {
      for (auto k = 0; k < num_mo; k++) {
        for (auto l = k; l < num_mo; l++) {
          auto a = test_calc.scf_calc->input_integral->idx2(i, j);
          auto b = test_calc.scf_calc->input_integral->idx2(k, l);
          std::cout << i << "  " << j << "    " << k << "  " << l << "          " << test_calc.scf_calc->input_integral->mo_two_body_ints[0][0][0][0](a, b) << "   " << reference_values[idx][4]
                    << std::endl;
          REQUIRE_THAT(std::abs(test_calc.scf_calc->input_integral->mo_two_body_ints[0][0][0][0](a, b)), Catch::Matchers::WithinAbs(std::abs(reference_values[idx][4]), 1e-5));
          idx++;
        }
      }
    }
  }
}

TEST_CASE("CI: setup/detset construction ", "[CI]") {
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
  REQUIRE(test_ci.detset.frozen_core_energy[0] == 0.0);
  REQUIRE(test_ci.detset.max_orb[0] == 7);
  REQUIRE(test_ci.detset.N_dets == 21);
  REQUIRE(test_ci.detset.dets.size() == 21);
  std::bitset<8> hf_det("0011111");

  bool det_found = false;
  for (auto const &detvec : test_ci.detset.unique_dets[0][0]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), hf_det.to_ulong());
    if (it != std::end(detvec)) {
      det_found = true;
      break;
    }
  }
  REQUIRE(det_found);

  det_found = false;
  for (auto const &detvec : test_ci.detset.unique_dets[0][1]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), hf_det.to_ulong());
    if (it != std::end(detvec)) {
      det_found = true;
      break;
    }
  }
  REQUIRE(det_found);

  std::bitset<8> single_exc_det("0011111");

  det_found = false;
  for (auto const &detvec : test_ci.detset.unique_dets[0][0]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), single_exc_det.to_ulong());
    if (it != std::end(detvec)) {
      det_found = true;
      break;
    }
  }
  REQUIRE(det_found);

  det_found = false;
  for (auto const &detvec : test_ci.detset.unique_dets[0][1]) {
    auto it = std::find(std::begin(detvec), std::end(detvec), single_exc_det.to_ulong());
    if (it != std::end(detvec)) {
      det_found = true;
      break;
    }
  }
  REQUIRE(det_found);
}

TEST_CASE("CI: frozen core energy ", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {1, 1, 1};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.detset.frozen_core.push_back(2);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.setup(test_calc.scf_calc);
  test_ci.calculate_integrals();
  test_ci.calculate_fc_energy();
  // Unverified number
  REQUIRE_THAT(test_ci.detset.frozen_core_energy[0], Catch::Matchers::WithinAbs(-71.3745646924, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CI: get_det ", "[CI]") {
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
  REQUIRE(test_ci.detset.frozen_core_energy[0] == 0.0);
  REQUIRE(test_ci.detset.max_orb[0] == 7);
  REQUIRE(test_ci.detset.N_dets == 21);
  REQUIRE(test_ci.detset.dets.size() == 21);
  std::bitset<8> hf_det("0011111");

  auto det = test_ci.detset.get_det(0, 0, 0);
  REQUIRE(hf_det.to_ulong() == det[0]);
  det = test_ci.detset.get_det(0, 1, 0);
  REQUIRE(hf_det.to_ulong() == det[0]);

  det = test_ci.detset.get_det_withfcorbs(0, 0, 0);
  REQUIRE(hf_det.to_ulong() == det[0]);
  det = test_ci.detset.get_det_withfcorbs(0, 1, 0);
  REQUIRE(hf_det.to_ulong() == det[0]);
}

TEST_CASE("CI: frozen core get_det ", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {1, 1, 1};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.detset.frozen_core.push_back(2);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.setup(test_calc.scf_calc);
  test_ci.calculate_integrals();
  test_ci.calculate_fc_energy();
  test_ci.setup_determinants();
  std::bitset<8> hf_det_withfc("0011111");
  std::bitset<6> hf_det("00111");

  auto det = test_ci.detset.get_det(0, 0, 0);
  REQUIRE(hf_det.to_ulong() == det[0]);
  det = test_ci.detset.get_det(0, 1, 0);
  REQUIRE(hf_det.to_ulong() == det[0]);

  det = test_ci.detset.get_det_withfcorbs(0, 0, 0);
  REQUIRE(hf_det_withfc.to_ulong() == det[0]);
  det = test_ci.detset.get_det_withfcorbs(0, 1, 0);
  REQUIRE(hf_det_withfc.to_ulong() == det[0]);

  test_ci.detset.max_orb[0] = 75;
  std::vector<uint64_t> det2 = {0UL, 9223372036854775809UL};
  test_ci.detset.unique_dets[0][0][0] = det2;
  det = test_ci.detset.get_det_withfcorbs(0, 0, 0);

  std::cout << "Before pad" << det2[1] << " " << det2[0] << std::endl;
  std::cout << "after pad" << det[1] << " " << det[0] << std::endl;
  REQUIRE(2 == det[0]);
  REQUIRE(7 == det[1]);
}

TEST_CASE("CI: get holes ", "[CI]") {
  POLYQUANT_DETSET<uint64_t> detset;
  std::bitset<8> hf_det("0011111");
  std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
  std::bitset<8> single_ext("0101111");
  std::vector<uint64_t> single_ext_vec = {single_ext.to_ulong()};
  std::vector<int> holes;
  detset.get_holes(hf_det_vec, single_ext_vec, holes);
  REQUIRE(holes.size() == 1);
  REQUIRE(holes[0] == 4);

  holes.clear();
  std::bitset<8> double_ext("1101101");
  std::vector<uint64_t> double_ext_vec = {double_ext.to_ulong()};
  detset.get_holes(hf_det_vec, double_ext_vec, holes);
  REQUIRE(holes.size() == 2);
  REQUIRE(holes[0] == 1);
  REQUIRE(holes[1] == 4);

  holes.clear();
  std::bitset<10> hf_det_longer("0001111111");
  std::bitset<10> double_ext_longer("0110111101");
  std::vector<uint64_t> big_hf_det_vec = {hf_det_longer.to_ulong(), 0ul};
  std::vector<uint64_t> big_double_ext_vec = {double_ext_longer.to_ulong(), 0ul};
  detset.get_holes(big_hf_det_vec, big_double_ext_vec, holes);
  REQUIRE(holes.size() == 2);
  REQUIRE(holes[0] == 64 + 1);
  REQUIRE(holes[1] == 64 + 6);

  holes.clear();
  big_hf_det_vec[1] = 1ul;
  big_double_ext_vec[1] = 32ul;
  detset.get_holes(big_hf_det_vec, big_double_ext_vec, holes);
  REQUIRE(holes.size() == 3);
  REQUIRE(holes[0] == 0);
  REQUIRE(holes[1] == 64 + 1);
  REQUIRE(holes[2] == 64 + 6);

  holes.clear();
  std::vector<uint64_t> bigger_hf_det_vec = {7, 127};
  std::vector<uint64_t> bigger_single_ext_vec = {519, 63};
  detset.get_holes(bigger_hf_det_vec, bigger_single_ext_vec, holes);
  REQUIRE(holes.size() == 1);
  REQUIRE(holes[0] == 6);
}

TEST_CASE("CI: get parts ", "[CI]") {
  POLYQUANT_DETSET<uint64_t> detset;
  std::bitset<8> hf_det("0011111");
  std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
  std::bitset<8> single_ext("0101111");
  std::vector<uint64_t> single_ext_vec = {single_ext.to_ulong()};
  std::vector<int> parts;
  detset.get_parts(hf_det_vec, single_ext_vec, parts);
  REQUIRE(parts.size() == 1);
  REQUIRE(parts[0] == 5);
  parts.clear();
  std::bitset<8> double_ext("1101101");
  std::vector<uint64_t> double_ext_vec = {double_ext.to_ulong()};
  detset.get_parts(hf_det_vec, double_ext_vec, parts);
  REQUIRE(parts.size() == 2);
  REQUIRE(parts[0] == 5);
  REQUIRE(parts[1] == 6);

  parts.clear();
  std::bitset<10> hf_det_longer("0001111111");
  std::bitset<10> double_ext_longer("0110111101");
  std::vector<uint64_t> big_hf_det_vec = {hf_det_longer.to_ulong(), 0ul};
  std::vector<uint64_t> big_double_ext_vec = {double_ext_longer.to_ulong(), 0ul};
  detset.get_parts(big_hf_det_vec, big_double_ext_vec, parts);
  REQUIRE(parts.size() == 2);
  REQUIRE(parts[0] == 64 + 7);
  REQUIRE(parts[1] == 64 + 8);

  parts.clear();
  big_hf_det_vec[1] = 1ul;
  big_double_ext_vec[1] = 32ul;
  detset.get_parts(big_hf_det_vec, big_double_ext_vec, parts);
  REQUIRE(parts.size() == 3);
  REQUIRE(parts[0] == 5);
  REQUIRE(parts[1] == 64 + 7);
  REQUIRE(parts[2] == 64 + 8);

  parts.clear();
  std::vector<uint64_t> bigger_hf_det_vec = {7, 127};
  std::vector<uint64_t> bigger_single_ext_vec = {519, 63};
  detset.get_parts(bigger_hf_det_vec, bigger_single_ext_vec, parts);
  REQUIRE(parts.size() == 1);
  REQUIRE(parts[0] == 73);
}

TEST_CASE("CI: get phase ", "[CI]") {
  // verified with respect to the fortran code in arXiv:1311.6244
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

  holes.clear();
  parts.clear();
  detset.get_holes(double_ext_vec, single_ext_vec, holes);
  detset.get_parts(double_ext_vec, single_ext_vec, parts);
  phase = detset.get_phase(double_ext_vec, single_ext_vec, holes, parts);
  CHECK(phase == -1.0);

  std::vector<uint64_t> hf_det_vec2 = {0ul, hf_det.to_ulong()};
  std::vector<uint64_t> single_ext_vec2 = {0ul, single_ext.to_ulong()};
  holes.clear();
  parts.clear();
  detset.get_holes(hf_det_vec2, single_ext_vec2, holes);
  detset.get_parts(hf_det_vec2, single_ext_vec2, parts);
  phase = detset.get_phase(hf_det_vec2, single_ext_vec2, holes, parts);
  CHECK(phase == 1.0);

  holes.clear();
  parts.clear();
  std::vector<uint64_t> bigger_hf_det_vec = {7, 127};
  std::vector<uint64_t> bigger_single_ext_vec = {519, 63};
  detset.get_holes(bigger_hf_det_vec, bigger_single_ext_vec, holes);
  detset.get_parts(bigger_hf_det_vec, bigger_single_ext_vec, parts);
  phase = detset.get_phase(bigger_hf_det_vec, bigger_single_ext_vec, holes, parts);
  CHECK(phase == -1.0);

  holes.clear();
  parts.clear();
  std::vector<uint64_t> Be_bug_det_i_a = {0, 1};
  std::vector<uint64_t> Be_bug_det_i_b = {0, 17179869184};
  std::vector<uint64_t> Be_bug_det_j_a = {0, 16};
  std::vector<uint64_t> Be_bug_det_j_b = {4, 0};

  detset.get_holes(Be_bug_det_i_a, Be_bug_det_j_a, holes);
  detset.get_parts(Be_bug_det_i_a, Be_bug_det_j_a, parts);
  auto aphase = detset.get_phase(Be_bug_det_i_a, Be_bug_det_j_a, holes, parts);
  CHECK(aphase == 1.0);
  holes.clear();
  parts.clear();
  detset.get_holes(Be_bug_det_i_b, Be_bug_det_j_b, holes);
  detset.get_parts(Be_bug_det_i_b, Be_bug_det_j_b, parts);
  auto bphase = detset.get_phase(Be_bug_det_i_b, Be_bug_det_j_b, holes, parts);
  CHECK(bphase == 1.0);
}
TEST_CASE("CI: get occ virt ", "[CI]") {
  POLYQUANT_DETSET<uint64_t> detset;
  detset.max_orb = {7};
  std::bitset<8> hf_det("0011111");
  std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
  std::vector<int> occ, virt;
  detset.get_occ_virt(0, hf_det_vec, occ, virt);
  REQUIRE(occ.size() == 5);
  REQUIRE(virt.size() == 2);
  for (auto i = 0; i < occ.size(); i++) {
    REQUIRE(occ[i] == i);
  }
  for (auto i = 0; i < virt.size(); i++) {
    REQUIRE(virt[i] == occ.size() + i);
  }

  POLYQUANT_DETSET<uint64_t> detset2;
  detset2.max_orb = {64 + 10};
  occ.clear();
  virt.clear();
  std::bitset<10> hf_det_longer("0001111111");
  std::vector<uint64_t> big_hf_det_vec = {hf_det_longer.to_ulong(), 0ul};
  detset2.get_occ_virt(0, big_hf_det_vec, occ, virt);
  CHECK(occ.size() == 7);
  CHECK(virt.size() == 64 + 3);
  CHECK(occ[0] == 64 + 0);
  CHECK(occ[1] == 64 + 1);
  CHECK(occ[2] == 64 + 2);
  CHECK(occ[3] == 64 + 3);
  CHECK(occ[4] == 64 + 4);
  CHECK(occ[5] == 64 + 5);
  CHECK(occ[6] == 64 + 6);
  for (auto i = 0; i < 64; i++) {
    CHECK(virt[i] == i);
  }
  CHECK(virt[64] == 64 + 7);
  CHECK(virt[65] == 64 + 8);
  CHECK(virt[66] == 64 + 9);

  std::bitset<10> double_ext_longer("0110111101");
  std::vector<uint64_t> big_double_ext_vec = {double_ext_longer.to_ulong(), 0ul};
  occ.clear();
  virt.clear();
  detset2.get_occ_virt(0, big_double_ext_vec, occ, virt);
  CHECK(occ.size() == 7);
  CHECK(virt.size() == 64 + 3);
  CHECK(occ[0] == 64 + 0);
  CHECK(occ[1] == 64 + 2);
  CHECK(occ[2] == 64 + 3);
  CHECK(occ[3] == 64 + 4);
  CHECK(occ[4] == 64 + 5);
  CHECK(occ[5] == 64 + 7);
  CHECK(occ[6] == 64 + 8);
  for (auto i = 0; i < 64; i++) {
    CHECK(virt[i] == i);
  }
  CHECK(virt[64] == 64 + 1);
  CHECK(virt[65] == 64 + 6);
  CHECK(virt[66] == 64 + 9);

  occ.clear();
  virt.clear();
  std::vector<uint64_t> bigger_hf_det_vec = {7, 127};
  // std::vector<uint64_t> bigger_single_ext_vec = {519,63};
  POLYQUANT_DETSET<uint64_t> detset3;
  detset3.max_orb = {100};
  detset3.get_occ_virt(0, bigger_hf_det_vec, occ, virt);
  CHECK(occ.size() == 10);
  CHECK(virt.size() == 90);
  for (auto i = 0; i < 7; i++) {
    CHECK(occ[i] == i);
  }
  for (auto i = 7; i < 64; i++) {
    CHECK(virt[i - 7] == i);
  }
  CHECK(occ[7] == 64 + 0);
  CHECK(occ[8] == 64 + 1);
  CHECK(occ[9] == 64 + 2);
  for (auto i = 57; i < 90; i++) {
    CHECK(virt[i] == 10 + i);
  }

  occ.clear();
  virt.clear();
  std::vector<uint64_t> bigger_single_ext_vec = {519, 63};
  detset3.max_orb = {100};
  detset3.get_occ_virt(0, bigger_single_ext_vec, occ, virt);
  CHECK(occ.size() == 10);
  CHECK(virt.size() == 90);
  for (auto i = 0; i < 6; i++) {
    CHECK(occ[i] == i);
  }
  for (auto i = 6; i < 64; i++) {
    CHECK(virt[i - 6] == i);
  }
  CHECK(occ[6] == 64 + 0);
  CHECK(occ[7] == 64 + 1);
  CHECK(occ[8] == 64 + 2);
  CHECK(occ[9] == 64 + 9);
  auto shift = 0;
  for (auto i = 0; i < 90; i++) {
    std::cout << i << " " << virt[i] << std::endl;
  }
  for (auto i = 58; i < 90; i++) {
    if (i == 64 + 9 - 10) {
      shift = 1;
      continue;
    }
    CHECK(virt[i] == 9 + i + shift);
    std::cout << i << " " << virt[i] << std::endl;
  }
}
TEST_CASE("CI: same part ham diag ", "[CI]") {
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

  std::vector<int> i_unfold = {0, 0};
  std::vector<int> j_unfold = {0, 0};
  auto diag_ham_elem = test_ci.detset.same_part_ham_diag(0, i_unfold, j_unfold);
  REQUIRE_THAT(diag_ham_elem, Catch::Matchers::WithinAbs(-84.1577927627923, POLYQUANT_TEST_EPSILON_LOOSE));

  auto folded_idet_idx = test_ci.detset.dets.find(i_unfold)->second;
  auto diag_ham_single_elem_thru_SC = test_ci.detset.Slater_Condon(folded_idet_idx, folded_idet_idx);
}
TEST_CASE("CI: same part ham single ", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {1, 1, 1};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.setup(test_calc.scf_calc);
  test_ci.calculate_integrals();
  test_ci.setup_determinants();

  std::vector<int> i_unfold = {0, 0};
  std::vector<int> j_unfold = {0, 1};
  auto off_diag_ham_single_elem = test_ci.detset.same_part_ham_single(0, i_unfold, j_unfold);
  REQUIRE_THAT(off_diag_ham_single_elem, Catch::Matchers::WithinAbs(3.042582036923841e-08, POLYQUANT_TEST_EPSILON_LOOSE));
  off_diag_ham_single_elem = test_ci.detset.same_part_ham_single(0, j_unfold, i_unfold);
  REQUIRE_THAT(off_diag_ham_single_elem, Catch::Matchers::WithinAbs(3.042582036923841e-08, POLYQUANT_TEST_EPSILON_LOOSE));

  auto folded_idet_idx = test_ci.detset.dets.find(i_unfold)->second;
  auto folded_jdet_idx = test_ci.detset.dets.find(j_unfold)->second;
  auto off_diag_ham_single_elem_thru_SC = test_ci.detset.Slater_Condon(folded_idet_idx, folded_jdet_idx);
  REQUIRE_THAT(off_diag_ham_single_elem, Catch::Matchers::WithinAbs(off_diag_ham_single_elem_thru_SC, POLYQUANT_TEST_EPSILON_LOOSE));
  off_diag_ham_single_elem_thru_SC = test_ci.detset.Slater_Condon(folded_jdet_idx, folded_idet_idx);
  REQUIRE_THAT(off_diag_ham_single_elem, Catch::Matchers::WithinAbs(off_diag_ham_single_elem_thru_SC, POLYQUANT_TEST_EPSILON_LOOSE));
}
TEST_CASE("CI: same part ham double ", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {2, 2, 2};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.setup(test_calc.scf_calc);
  test_ci.calculate_integrals();
  test_ci.setup_determinants();

  std::vector<int> i_unfold = {0, 0};
  std::vector<int> j_unfold = {0, 12};
  auto off_diag_ham_double_elem = test_ci.detset.same_part_ham_double(0, i_unfold, j_unfold);
  auto ref_value = 0.010855436090541142;
  REQUIRE_THAT(off_diag_ham_double_elem, Catch::Matchers::WithinAbs(ref_value, POLYQUANT_TEST_EPSILON_LOOSE));
  off_diag_ham_double_elem = test_ci.detset.same_part_ham_double(0, j_unfold, i_unfold);
  REQUIRE_THAT(off_diag_ham_double_elem, Catch::Matchers::WithinAbs(ref_value, POLYQUANT_TEST_EPSILON_LOOSE));

  auto folded_idet_idx = test_ci.detset.dets.find(i_unfold)->second;
  auto folded_jdet_idx = test_ci.detset.dets.find(j_unfold)->second;
  auto off_diag_ham_double_elem_thru_SC = test_ci.detset.Slater_Condon(folded_idet_idx, folded_jdet_idx);
  REQUIRE_THAT(off_diag_ham_double_elem, Catch::Matchers::WithinAbs(off_diag_ham_double_elem_thru_SC, POLYQUANT_TEST_EPSILON_LOOSE));
  off_diag_ham_double_elem_thru_SC = test_ci.detset.Slater_Condon(folded_jdet_idx, folded_idet_idx);
  REQUIRE_THAT(off_diag_ham_double_elem, Catch::Matchers::WithinAbs(off_diag_ham_double_elem_thru_SC, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CI: det_idx_unfold", "[CI]") {
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
    REQUIRE(unfolded_idx.size() == 2);
    if (i < 11) {
      REQUIRE(unfolded_idx[0] == 0);
      REQUIRE(unfolded_idx[1] == i);
    } else {
      REQUIRE(unfolded_idx[1] == 0);
      REQUIRE(unfolded_idx[0] == i - 10);
    }
  }
}
TEST_CASE("CI: mixed part ham diag ", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {1, 1, 1};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.setup(test_calc.scf_calc);
  test_ci.calculate_integrals();
  test_ci.setup_determinants();
  test_ci.detset.precompute_diagonal_Slater_Condon();

  std::vector<int> i_unfold = {0, 0, 0, 0};
  auto folded_idx = test_ci.detset.dets.find(i_unfold)->second;
  auto diag_ham_elem = test_ci.detset.Slater_Condon(folded_idx, folded_idx);
  REQUIRE_THAT(diag_ham_elem, Catch::Matchers::WithinAbs(-7.5257234633357024123, POLYQUANT_TEST_EPSILON_LOOSE));
}
TEST_CASE("CI: mixed part ham single ", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {1, 1, 1};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.setup(test_calc.scf_calc);
  test_ci.calculate_integrals();
  test_ci.setup_determinants();

  std::vector<int> i_unfold = {0, 0, 0, 0};
  auto folded_i_idx = test_ci.detset.dets.find(i_unfold)->second;
  for (auto alpha_excitation = 0; alpha_excitation < test_ci.detset.unique_dets[0][0].size(); alpha_excitation++) {
    std::vector<int> j_unfold = {alpha_excitation, 0, 0, 0};
    auto ex = test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[0][0][0], test_ci.detset.unique_dets[0][0][alpha_excitation]);
    if (ex == 1) {
      auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
      auto single_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
      REQUIRE_THAT(single_ham_elem, Catch::Matchers::WithinAbs(0.000000000, POLYQUANT_TEST_EPSILON_LOOSE));
    }
  }
  for (auto beta_excitation = 0; beta_excitation < test_ci.detset.unique_dets[0][1].size(); beta_excitation++) {
    std::vector<int> j_unfold = {0, beta_excitation, 0, 0};
    auto ex = test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[0][1][0], test_ci.detset.unique_dets[0][1][beta_excitation]);
    if (ex == 1) {
      auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
      auto single_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
      REQUIRE_THAT(single_ham_elem, Catch::Matchers::WithinAbs(0.000000000, POLYQUANT_TEST_EPSILON_LOOSE));
    }
  }
  for (auto pos_excitation = 0; pos_excitation < test_ci.detset.unique_dets[1][0].size(); pos_excitation++) {
    std::vector<int> j_unfold = {0, 0, pos_excitation, 0};
    auto ex = test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[1][0][0], test_ci.detset.unique_dets[1][0][pos_excitation]);
    if (ex == 1) {
      auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
      auto single_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
      REQUIRE_THAT(single_ham_elem, Catch::Matchers::WithinAbs(0.000000000, POLYQUANT_TEST_EPSILON_LOOSE));
    }
  }
}

TEST_CASE("CI: mixed part ham double ", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {1, 1, 1};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.setup(test_calc.scf_calc);
  test_ci.calculate_integrals();
  test_ci.setup_determinants();

  std::vector<int> i_unfold = {0, 0, 0, 0};
  auto folded_i_idx = test_ci.detset.dets.find(i_unfold)->second;

  std::vector<int> j_unfold = {1, 0, 2, 0};
  auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
  auto double_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
  REQUIRE_THAT(std::abs(double_ham_elem), Catch::Matchers::WithinAbs(0.0, 1e-3));
  // REQUIRE(0 == 1);
  // auto max_val = 0.0;
  // for (auto elec_excitation = 0; elec_excitation < test_ci.detset.unique_dets[0][0].size(); elec_excitation++) {
  // for (auto pos_excitation = 0; pos_excitation < test_ci.detset.unique_dets[1][0].size(); pos_excitation++) {
  //     std::vector<int> j_unfold = {elec_excitation,0,pos_excitation,0};
  //     auto ex = 0.0;
  //     ex += test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[0][0][0], test_ci.detset.unique_dets[0][0][elec_excitation]);
  //     ex += test_ci.detset.single_spin_num_excitation(test_ci.detset.unique_dets[1][0][0], test_ci.detset.unique_dets[1][0][pos_excitation]);
  //     if (ex == 2) {
  //         auto folded_j_idx = test_ci.detset.dets.find(j_unfold)->second;
  //         auto double_ham_elem = test_ci.detset.Slater_Condon(folded_i_idx, folded_j_idx);
  //         if (std::abs(double_ham_elem) > max_val)
  //         {
  //             std::cout << " " << elec_excitation << " " << pos_excitation << " " << double_ham_elem  << std::endl;
  //             max_val = double_ham_elem;
  //         }
  //         //REQUIRE(single_ham_elem == Catch::Matchers::WithinAbs(0.000000000, POLYQUANT_TEST_EPSILON_LOOSE));
  //     }
  // }
  // }
}

TEST_CASE("CI: single species sigma slow v fast", "[CI]") {
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
  C(0, 0) = 1.0;

  test_ci.detset.create_sigma_slow(sigma, C);
  test_ci.detset.create_sigma(sigma_fast, C);
  std::cout << "\n"
            << "C[0] = 1; C[i > 0]  = 0"
            << "\n"
            << std::endl;
  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
    std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "        " << sigma(i, 0) << "  " << sigma_fast(i, 0) << "     " << sigma(i, 0) - sigma_fast(i, 0)
              << std::endl;
    REQUIRE_THAT(sigma(i, 0), Catch::Matchers::WithinAbs(sigma_fast(i, 0), POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT));
  }
  /////////////////////////////////////////////////////////////////////
  C.setZero();
  sigma.setZero();
  sigma_fast.setZero();
  C(5, 0) = 1.0;

  test_ci.detset.create_sigma_slow(sigma, C);
  test_ci.detset.create_sigma(sigma_fast, C);
  std::cout << "\n"
            << "C[5] = 1; C[i != 5]  = 0"
            << "\n"
            << std::endl;
  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
    std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "        " << sigma(i, 0) << "  " << sigma_fast(i, 0) << "     " << sigma(i, 0) - sigma_fast(i, 0)
              << std::endl;
    REQUIRE_THAT(sigma(i, 0), Catch::Matchers::WithinAbs(sigma_fast(i, 0), POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT));
  }

  /////////////////////////////////////////////////////////////////////
  std::cout << "\n"
            << "C[:] = One over N_dets"
            << "\n"
            << std::endl;
  C.setZero();
  sigma.setZero();
  sigma_fast.setZero();
  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    C(i, 0) = 1.0 / test_ci.detset.N_dets;
  }

  test_ci.detset.create_sigma_slow(sigma, C);
  test_ci.detset.create_sigma(sigma_fast, C);

  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
    std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "        " << sigma(i, 0) << "  " << sigma_fast(i, 0) << "     " << sigma(i, 0) - sigma_fast(i, 0)
              << std::endl;
    REQUIRE_THAT(sigma(i, 0), Catch::Matchers::WithinAbs(sigma_fast(i, 0), POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT));
  }
}

TEST_CASE("CI: multispecies sigma slow v fast", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/PsH_wpos/PsH_wpos.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  std::tuple<int, int, int> ex_lvl = {1, 1, 1};
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.excitation_level.push_back(ex_lvl);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.frozen_core.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
  test_ci.detset.deleted_virtual.push_back(0);
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
  C(0, 0) = 1.0;

  test_ci.detset.create_sigma_slow(sigma, C);
  test_ci.detset.create_sigma(sigma_fast, C);
  std::cout << "\n"
            << "C[0] = 1; C[i > 0]  = 0"
            << "\n"
            << std::endl;
  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
    std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "   " << unfolded_idx[2] << "   " << unfolded_idx[3] << "        " << sigma(i, 0) << "  "
              << sigma_fast(i, 0) << "     " << sigma(i, 0) - sigma_fast(i, 0) << std::endl;
    REQUIRE_THAT(sigma(i, 0), Catch::Matchers::WithinAbs(sigma_fast(i, 0), 10 * POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT));
  }
  /////////////////////////////////////////////////////////////////////
  C.setZero();
  sigma.setZero();
  sigma_fast.setZero();
  C(5, 0) = 1.0;

  test_ci.detset.create_sigma_slow(sigma, C);
  test_ci.detset.create_sigma(sigma_fast, C);
  std::cout << "\n"
            << "C[5] = 1; C[i != 5]  = 0"
            << "\n"
            << std::endl;
  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
    std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "   " << unfolded_idx[2] << "   " << unfolded_idx[3] << "        " << sigma(i, 0) << "  "
              << sigma_fast(i, 0) << "     " << sigma(i, 0) - sigma_fast(i, 0) << std::endl;
    REQUIRE_THAT(sigma(i, 0), Catch::Matchers::WithinAbs(sigma_fast(i, 0), 10 * POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT));
  }

  /////////////////////////////////////////////////////////////////////
  std::cout << "\n"
            << "C[:] = One over N_dets"
            << "\n"
            << std::endl;
  C.setZero();
  sigma.setZero();
  sigma_fast.setZero();
  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    C(i, 0) = 1.0 / test_ci.detset.N_dets;
  }

  test_ci.detset.create_sigma_slow(sigma, C);
  test_ci.detset.create_sigma(sigma_fast, C);

  for (auto i = 0; i < test_ci.detset.N_dets; i++) {
    auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
    std::cout << "SHIV          " << i << " : " << unfolded_idx[0] << "   " << unfolded_idx[1] << "   " << unfolded_idx[2] << "   " << unfolded_idx[3] << "        " << sigma(i, 0) << "  "
              << sigma_fast(i, 0) << "     " << sigma(i, 0) - sigma_fast(i, 0) << std::endl;
    REQUIRE_THAT(sigma(i, 0), Catch::Matchers::WithinAbs(sigma_fast(i, 0), 10 * POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT));
  }
}
TEST_CASE("CI: Natural Orbitals", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/PsH_wpos/H_minus.json");
  test_calc.run();

  std::vector<double> NO_occ_pyscf;
  std::vector<std::vector<double>> NO_pyscf;
  Polyquant_read_vec_from_file(NO_occ_pyscf, "../../tests/data/PsH_wpos/h_minus_NO_occ.txt");
  Polyquant_read_vecofvec_from_file(NO_pyscf, "../../tests/data/PsH_wpos/h_minus_NO.txt");

  for (auto i = 0; i < NO_occ_pyscf.size(); i++) {
    REQUIRE_THAT(test_calc.ci_calc->occ_nso[0][0][0][i], Catch::Matchers::WithinAbs(NO_occ_pyscf[i] / 2.0, POLYQUANT_TEST_EPSILON_LOOSE));
  }
  for (auto i = 0; i < NO_pyscf.size(); i++) {
    for (auto j = 0; j < NO_pyscf[i].size(); j++) {
      REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][0][0](i, j)), Catch::Matchers::WithinAbs(std::abs(NO_pyscf[i][j]), 1e-3));
    }
  }
}
TEST_CASE("CI: Multispecies Natural Orbitals", "[CI]") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/PsH_wpos/PsH_wpos_CI.json");
  test_calc.run();

  REQUIRE_THAT(test_calc.ci_calc->occ_nso[0][0][0].sum(), Catch::Matchers::WithinAbs(1.0, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE_THAT(test_calc.ci_calc->occ_nso[0][1][0].sum(), Catch::Matchers::WithinAbs(1.0, POLYQUANT_TEST_EPSILON_TIGHT));

  REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][0][0](0, 0)), Catch::Matchers::WithinAbs(std::abs(0.300771), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][0][0](1, 0)), Catch::Matchers::WithinAbs(std::abs(0.345285), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][0][0](2, 0)), Catch::Matchers::WithinAbs(std::abs(0.43364), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][0][0](3, 0)), Catch::Matchers::WithinAbs(std::abs(0.0889083), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][0][0](4, 0)), Catch::Matchers::WithinAbs(std::abs(0.00747211), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][1][0](0, 0)), Catch::Matchers::WithinAbs(std::abs(1.36173), 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(std::abs(test_calc.ci_calc->C_nso[0][1][0](1, 0)), Catch::Matchers::WithinAbs(std::abs(0.428029), POLYQUANT_TEST_EPSILON_LOOSE));
}
