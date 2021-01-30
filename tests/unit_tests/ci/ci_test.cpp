#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "calculation/calculation.hpp"
#include <doctest/doctest.h>
#include <bitset>

using namespace polyquant;

TEST_SUITE("CI") {
TEST_CASE("CI: one body MO basis") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  test_calc.scf_calc.input_integral.calculate_mo_1_body_integrals(test_calc.scf_calc.C);

  CHECK(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0,0) == 
        doctest::Approx(-32.7032520).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0,1) ==
        doctest::Approx(-0.5580913772).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CI: two body MO basis") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  test_calc.scf_calc.input_integral.calculate_mo_2_body_integrals(test_calc.scf_calc.C);

  CHECK(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0,0) == 
        doctest::Approx(4.74449478).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0,1) == 
        doctest::Approx(0.4166223).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0,2) == 
        doctest::Approx(1.00454538).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
}
TEST_CASE("CI: setup/detset construction ") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  test_ci.excitation_level.push_back(1);
  test_ci.setup(test_calc.scf_calc);
  CHECK(test_ci.detset.max_orb == 7);
  CHECK(test_ci.detset.N_dets == 11);
  CHECK(test_ci.detset.dets[0][0].size() == 11);
  std::bitset<8> hf_det("0011111");
  std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
  CHECK(test_ci.detset.dets[0][0].count(hf_det_vec) == 1);
  std::bitset<8> single_ext("0101111");
  std::vector<uint64_t> single_ext_vec = {single_ext.to_ulong()};
  CHECK(test_ci.detset.dets[0][0].count(single_ext_vec) == 1);
}
TEST_CASE("CI: setup/detset construction ") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  POLYQUANT_EPCI test_ci;
  test_ci.excitation_level.push_back(1);
  test_ci.setup(test_calc.scf_calc);
  CHECK(test_ci.detset.max_orb == 7);
  CHECK(test_ci.detset.N_dets == 11);
  CHECK(test_ci.detset.dets[0][0].size() == 11);
  std::bitset<8> hf_det("0011111");
  std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
  CHECK(test_ci.detset.dets[0][0].count(hf_det_vec) == 1);
  std::bitset<8> single_ext("0101111");
  std::vector<uint64_t> single_ext_vec = {single_ext.to_ulong()};
  CHECK(test_ci.detset.dets[0][0].count(single_ext_vec) == 1);
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
  CHECK(phase == -1.0);
}
TEST_CASE("CI: get occ virt ") {
  POLYQUANT_DETSET<uint64_t> detset;
  std::bitset<8> hf_det("0011111");
  std::vector<uint64_t> hf_det_vec = {hf_det.to_ulong()};
  std::vector<int> occ, virt;
  detset.get_occ_virt(hf_det_vec, occ, virt);
  CHECK(occ.size() == 5);
  CHECK(virt.size() == 2);
  for (auto i = 0; i < occ.size(); i++){
      CHECK(occ[i] == i);
  }
  for (auto i = 0; i < virt.size(); i++){
      CHECK(virt[i] == occ.size() + i);
  }
}



}
