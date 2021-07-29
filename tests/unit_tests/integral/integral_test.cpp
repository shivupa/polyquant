#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <doctest/doctest.h>

using namespace polyquant;

TEST_SUITE("INTEGRAL") {
  TEST_CASE("INTEGRAL: triangular matrix") {
    CHECK(symmetric_matrix_triangular_idx(0, 0) == 0);
    CHECK(symmetric_matrix_triangular_idx(2, 5) == 17);
    CHECK(symmetric_matrix_triangular_idx(4, 3) == 13);
  }

  TEST_CASE("INTEGRAL: overlap AO basis") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    POLYQUANT_BASIS test_bas(test_inp, test_mol);
    POLYQUANT_INTEGRAL test_int;
    test_int.setup_integral(test_inp, test_bas, test_mol);
    test_int.calculate_overlap();
    CHECK(test_int.overlap[0](0, 0) ==
          doctest::Approx(12.5663706144).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.overlap[0](3, 5) ==
          doctest::Approx(0.0).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  }

  TEST_CASE("INTEGRAL: kinetic AO basis") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    POLYQUANT_BASIS test_bas(test_inp, test_mol);
    POLYQUANT_INTEGRAL test_int(test_inp, test_bas, test_mol);
    test_int.calculate_kinetic();
    CHECK(test_int.kinetic[0](0, 0) ==
          doctest::Approx(9.5508423276).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.kinetic[0](3, 5) ==
          doctest::Approx(0.0).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  }

  TEST_CASE("INTEGRAL: nuclear AO basis") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    POLYQUANT_BASIS test_bas(test_inp, test_mol);
    POLYQUANT_INTEGRAL test_int(test_inp, test_bas, test_mol);
    test_int.calculate_nuclear();
    CHECK(
        test_int.nuclear[0](0, 0) ==
        doctest::Approx(-73.3460436798).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.nuclear[0](3, 5) ==
          doctest::Approx(1.6216541894).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  }
  TEST_CASE("INTEGRAL: electron repulsion AO basis") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    POLYQUANT_BASIS test_bas(test_inp, test_mol);
    POLYQUANT_INTEGRAL test_int(test_inp, test_bas, test_mol);
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 0, 0)  ==     doctest::Approx(122.32086773154878756).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 0, 1)  ==     doctest::Approx(21.227605283301198114).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 0, 2)  ==     doctest::Approx(4.6784971970061421942).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 0, 3)  ==     doctest::Approx(48.376979099114954863).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 0, 4)  ==     doctest::Approx(0.0000000000000000000).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 0, 5)  ==     doctest::Approx(-18.09554308670268341).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 0, 6)  ==     doctest::Approx(23.380013065582687659).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 1, 0)  ==     doctest::Approx(21.227605283301198114).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 1, 1)  ==     doctest::Approx(54.154520564086354284).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.get2e_elem(0, 0, 0, 0, 1, 2)  ==     doctest::Approx(4.4766322482673537309).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));

  }
  TEST_CASE("INTEGRAL: symmetric orthogonalization AO basis") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    POLYQUANT_BASIS test_bas(test_inp, test_mol);
    POLYQUANT_INTEGRAL test_int;
    test_int.setup_integral(test_inp, test_bas, test_mol);
    test_int.calculate_overlap();
    test_int.symmetric_orthogonalization();
    CHECK(test_int.orth_X[0](0, 0) ==
          doctest::Approx(0.3360854191).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_int.orth_X[0](3, 5) ==
          doctest::Approx(-0.0444794156).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  }
}
