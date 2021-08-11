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
    test_calc.scf_calc.input_integral.calculate_mo_1_body_integrals(
        test_calc.scf_calc.C);

    CHECK(std::abs(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0, 0)) ==
          doctest::Approx(32.7032520).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0, 1)) ==
          doctest::Approx(0.5580913772).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CI: two body MO basis") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    test_calc.scf_calc.input_integral.calculate_mo_2_body_integrals(
        test_calc.scf_calc.C);

    CHECK(
        std::abs(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0, 0)) ==
        doctest::Approx(4.74449478).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(
        std::abs(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0, 1)) ==
        doctest::Approx(0.4166223).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(
        std::abs(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0, 2)) ==
        doctest::Approx(1.00454538).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: setup/detset construction ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    CHECK(test_ci.detset.max_orb[0] == 7);
    CHECK(test_ci.detset.N_dets == 21);
    CHECK(test_ci.detset.dets[0].size() == 21);
    std::bitset<8> hf_det("0011111");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_vec = {
        {hf_det.to_ulong()}, {hf_det.to_ulong()}};
    CHECK(test_ci.detset.dets[0].count(hf_det_vec) == 1);
    std::bitset<8> single_ext("0101111");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>>
        single_ext_vec_alpha = {{single_ext.to_ulong()}, {hf_det.to_ulong()}};
    CHECK(test_ci.detset.dets[0].count(single_ext_vec_alpha) == 1);
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>>
        single_ext_vec_beta = {{single_ext.to_ulong()}, {hf_det.to_ulong()}};
    CHECK(test_ci.detset.dets[0].count(single_ext_vec_beta) == 1);
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
    detset.max_orb.push_back(7);
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

    std::bitset<8> hf_det("0011111");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_obj = {
        {hf_det.to_ulong()}, {hf_det.to_ulong()}};
    auto det_pos = test_ci.detset.dets[0].find(hf_det_obj);
    CHECK(det_pos != test_ci.detset.dets[0].end());
    auto distance = std::distance(test_ci.detset.dets[0].begin(), det_pos);
    std::vector<int> distance_vec = {distance};
    auto diag_ham_elem =
        test_ci.detset.same_part_ham_diag(0, distance_vec, distance_vec);
    for (auto i = 0; i < test_ci.detset.dets[0].size(); i++) {
      std::cout << test_ci.detset.Slater_Condon(i, i) << std::endl;
    }
    CHECK(diag_ham_elem == doctest::Approx(-84.1577927627923)
                               .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: same part ham single ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);

    std::bitset<8> hf_det("0011111");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_obj = {
        {hf_det.to_ulong()}, {hf_det.to_ulong()}};
    std::bitset<8> single_ext("0111110");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> single_ext_obj = {
        {single_ext.to_ulong()}, {hf_det.to_ulong()}};

    auto hf_det_pos = test_ci.detset.dets[0].find(hf_det_obj);
    CHECK(hf_det_pos != test_ci.detset.dets[0].end());
    auto hf_distance =
        std::distance(test_ci.detset.dets[0].begin(), hf_det_pos);
    std::vector<int> hf_distance_vec = {hf_distance};
    auto se_det_pos = test_ci.detset.dets[0].find(single_ext_obj);
    auto se_distance =
        std::distance(test_ci.detset.dets[0].begin(), se_det_pos);
    CHECK(se_det_pos != test_ci.detset.dets[0].end());
    std::vector<int> se_distance_vec = {se_distance};

    auto off_diag_ham_single_elem = test_ci.detset.same_part_ham_single(
        0, hf_distance_vec, se_distance_vec);
    CHECK(off_diag_ham_single_elem ==
          doctest::Approx(3.042582036923841e-08)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_single_elem = test_ci.detset.same_part_ham_single(
        0, se_distance_vec, hf_distance_vec);
    CHECK(off_diag_ham_single_elem ==
          doctest::Approx(3.042582036923841e-08)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));

    auto off_diag_ham_single_elem_thru_SC =
        test_ci.detset.Slater_Condon(hf_distance, se_distance);
    CHECK(off_diag_ham_single_elem ==
          doctest::Approx(off_diag_ham_single_elem_thru_SC)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_single_elem_thru_SC =
        test_ci.detset.Slater_Condon(se_distance, hf_distance);
    CHECK(off_diag_ham_single_elem ==
          doctest::Approx(off_diag_ham_single_elem_thru_SC)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: same part ham double ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {2, 2, 2};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);

    std::bitset<8> hf_det("0011111");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_obj = {
        {hf_det.to_ulong()}, {hf_det.to_ulong()}};
    std::bitset<8> double_ext("1111010");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> double_ext_obj = {
        {double_ext.to_ulong()}, {hf_det.to_ulong()}};

    auto hf_det_pos = test_ci.detset.dets[0].find(hf_det_obj);
    CHECK(hf_det_pos != test_ci.detset.dets[0].end());
    auto hf_distance =
        std::distance(test_ci.detset.dets[0].begin(), hf_det_pos);
    std::vector<int> hf_distance_vec = {hf_distance};
    auto double_det_pos = test_ci.detset.dets[0].find(double_ext_obj);
    auto double_distance =
        std::distance(test_ci.detset.dets[0].begin(), double_det_pos);
    CHECK(double_det_pos != test_ci.detset.dets[0].end());
    std::vector<int> double_distance_vec = {double_distance};

    auto off_diag_ham_double_elem = test_ci.detset.same_part_ham_double(
        0, hf_distance_vec, double_distance_vec);
    CHECK(off_diag_ham_double_elem ==
          doctest::Approx(0.010855436090541142)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_double_elem = test_ci.detset.same_part_ham_double(
        0, double_distance_vec, hf_distance_vec);
    CHECK(off_diag_ham_double_elem ==
          doctest::Approx(0.010855436090541142)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));

    auto off_diag_ham_double_elem_thru_SC =
        test_ci.detset.Slater_Condon(hf_distance, double_distance);
    CHECK(off_diag_ham_double_elem ==
          doctest::Approx(off_diag_ham_double_elem_thru_SC)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    off_diag_ham_double_elem_thru_SC =
        test_ci.detset.Slater_Condon(double_distance, hf_distance);
    CHECK(off_diag_ham_double_elem ==
          doctest::Approx(off_diag_ham_double_elem_thru_SC)
              .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CI: det_idx_unfold") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);

    std::cout << test_ci.detset.N_dets << std::endl;
    for (auto i = 0; i < test_ci.detset.N_dets; i++) {
      auto unfolded_idx = test_ci.detset.det_idx_unfold(i);
      CHECK(unfolded_idx.size() == 1);
      CHECK(unfolded_idx[0] == i);
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
    test_ci.setup(test_calc.scf_calc);
    // get elec det distance
    std::bitset<18> hf_det("0000000000000011");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_obj = {
        {hf_det.to_ulong()}, {hf_det.to_ulong()}};
    auto det_pos = test_ci.detset.dets[0].find(hf_det_obj);
    CHECK(det_pos != test_ci.detset.dets[0].end());
    auto elec_distance = std::distance(test_ci.detset.dets[0].begin(), det_pos);
    // get pos det distance
    std::bitset<18> hf_det_pos_a("0000000000000001");
    std::bitset<18> hf_det_pos_b("0000000000000000");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_pos_obj = {
        {hf_det_pos_a.to_ulong()}, {hf_det_pos_b.to_ulong()}};
    auto det_pos_pos = test_ci.detset.dets[1].find(hf_det_pos_obj);
    CHECK(det_pos_pos != test_ci.detset.dets[1].end());
    auto pos_distance =
        std::distance(test_ci.detset.dets[1].begin(), det_pos_pos);
    std::vector<int> distance_vec = {elec_distance, pos_distance};
    int folded_idx =
        elec_distance * test_ci.detset.dets[1].size() + pos_distance;
    auto diag_ham_elem = test_ci.detset.Slater_Condon(folded_idx, folded_idx);
    for (auto i = 0;
         i < (test_ci.detset.dets[0].size() * test_ci.detset.dets[1].size());
         i++) {
      auto e = test_ci.detset.Slater_Condon(i, i);
      if (e > 0) {
        std::cout << test_ci.detset.det_idx_unfold(i)[0] << " "
                  << test_ci.detset.det_idx_unfold(i)[1] << " " << e << " "
                  << test_ci.detset.same_part_ham_diag(
                         0, test_ci.detset.det_idx_unfold(i),
                         test_ci.detset.det_idx_unfold(i))
                  << " "
                  << test_ci.detset.same_part_ham_diag(
                         1, test_ci.detset.det_idx_unfold(i),
                         test_ci.detset.det_idx_unfold(i))
                  << " "
                  << test_ci.detset.mixed_part_ham_diag(
                         0, 1, test_ci.detset.det_idx_unfold(i),
                         test_ci.detset.det_idx_unfold(i))
                  << std::endl;
      }
    }
    Polyquant_dump_mat(
        test_ci.detset.input_integral.mo_two_body_ints[0][0][1][0],
        "MO two elec e/p alpha");
    // Polyquant_dump_mat(this->input_integral.mo_two_body_ints[0][1][1][1],"MO
    // two elec e/p beta");

    CHECK(diag_ham_elem == doctest::Approx(-7.5257234633357024123)
                               .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CI: mixed part ham single ") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation(
        "../../tests/data/li-_custombasis_wpos/Li_wpos.json");
    test_calc.run();
    POLYQUANT_EPCI test_ci;
    std::tuple<int, int, int> ex_lvl = {1, 1, 1};
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.excitation_level.push_back(ex_lvl);
    test_ci.setup(test_calc.scf_calc);
    // get elec det distance
    std::bitset<18> hf_det("0000000000000011");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_obj = {
        {hf_det.to_ulong()}, {hf_det.to_ulong()}};
    auto det_pos = test_ci.detset.dets[0].find(hf_det_obj);
    CHECK(det_pos != test_ci.detset.dets[0].end());
    auto elec_distance = std::distance(test_ci.detset.dets[0].begin(), det_pos);
    // get pos det distance
    std::bitset<18> hf_det_pos_a("0000000000000001");
    std::bitset<18> hf_det_pos_b("0000000000000000");
    std::pair<std::vector<uint64_t>, std::vector<uint64_t>> hf_det_pos_obj = {
        {hf_det_pos_a.to_ulong()}, {hf_det_pos_b.to_ulong()}};
    auto det_pos_pos = test_ci.detset.dets[1].find(hf_det_pos_obj);
    CHECK(det_pos_pos != test_ci.detset.dets[1].end());
    auto pos_distance =
        std::distance(test_ci.detset.dets[1].begin(), det_pos_pos);
    // get pos single det distance
    // std::bitset<18> single_det_pos_a("0000000000000010");
    // std::bitset<18> single_det_pos_b("0000000000000000");
    // std::pair<std::vector<uint64_t>, std::vector<uint64_t>>
    // single_det_pos_obj = {
    //    {single_det_pos_a.to_ulong()}, {single_det_pos_b.to_ulong()}};
    // auto sing_det_pos_pos = test_ci.detset.dets[1].find(single_det_pos_obj);
    // auto sing_pos_distance = std::distance(test_ci.detset.dets[1].begin(),
    // sing_det_pos_pos);
    int folded_idx =
        elec_distance * test_ci.detset.dets[1].size() + pos_distance;
    // int sing_folded_idx =        elec_distance *
    // test_ci.detset.dets[1].size() + sing_pos_distance;
    for (auto i = 0;
         i < (test_ci.detset.dets[0].size() * test_ci.detset.dets[1].size());
         i++) {
      if (i != folded_idx) {

        auto excited_e_det =
            test_ci.detset.get_det(0, test_ci.detset.det_idx_unfold(i)[0]);
        auto excited_p_det =
            test_ci.detset.get_det(1, test_ci.detset.det_idx_unfold(i)[1]);
        auto ex = 0;
        ex += test_ci.detset.num_excitation(hf_det_obj, excited_e_det);
        ex += test_ci.detset.num_excitation(hf_det_pos_obj, excited_p_det);
        if (ex == 1) {
          auto sing_ham_elem = test_ci.detset.Slater_Condon(folded_idx, i);
          CHECK(sing_ham_elem == doctest::Approx(0.000000000)
                                     .epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
        }
      }
    }
  }
}
