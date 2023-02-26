#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T> double POLYQUANT_DETSET<T>::same_part_ham_diag(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);

  auto alpha_spin_idx = 0;
  auto beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[idx_part].size();

  std::vector<int> aocc, avirt;
  this->get_occ_virt(idx_part, det_i_a, aocc, avirt);

  std::vector<int> bocc, bvirt;
  this->get_occ_virt(idx_part, det_i_b, bocc, bvirt);

  double elem = 0.0;
  for (auto orb_a_i : aocc) {
    elem += this->input_integral->mo_one_body_ints[idx_part][alpha_spin_idx](orb_a_i, orb_a_i);
  }
  for (auto orb_b_i : bocc) {
    elem += this->input_integral->mo_one_body_ints[idx_part][beta_spin_idx](orb_b_i, orb_b_i);
  }
  for (auto orb_a_i : aocc) {
    for (auto orb_a_j : aocc) {
      elem += 0.5 *
              (this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(orb_a_i, orb_a_i), this->input_integral->idx2(orb_a_j, orb_a_j)));
      elem -= 0.5 *
              (this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(orb_a_i, orb_a_j), this->input_integral->idx2(orb_a_j, orb_a_i)));
    }
    for (auto orb_b_j : bocc) {
      elem +=
          0.5 * this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(orb_a_i, orb_a_i), this->input_integral->idx2(orb_b_j, orb_b_j));
    }
  }
  for (auto orb_b_i : bocc) {
    for (auto orb_b_j : bocc) {
      elem +=
          0.5 * (this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(orb_b_i, orb_b_i), this->input_integral->idx2(orb_b_j, orb_b_j)));
      elem -=
          0.5 * (this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(orb_b_i, orb_b_j), this->input_integral->idx2(orb_b_j, orb_b_i)));
    }
    for (auto orb_a_j : aocc) {
      elem +=
          0.5 * this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(orb_b_i, orb_b_i), this->input_integral->idx2(orb_a_j, orb_a_j));
    }
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::same_part_ham_single(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto alpha_spin_idx = 0;
  auto beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[idx_part].size();

  // spin = 0 alpha excitation, spin = 1 beta excitation
  auto spin = 0;
  if (det_i_a == det_j_a) {
    spin = 1;
  }

  std::vector<int> aocc, avirt;
  std::vector<int> bocc, bvirt;
  this->get_occ_virt(idx_part, det_i_a, aocc, avirt);
  this->get_occ_virt(idx_part, det_i_b, bocc, bvirt);

  // get hole
  // get part
  std::vector<int> holes, parts;
  double phase = 1.0;
  if (spin == 0) {
    get_holes(det_i_a, det_j_a, holes);
    get_parts(det_i_a, det_j_a, parts);
    phase = get_phase(det_i_a, det_j_a, holes, parts);
    elem += this->input_integral->mo_one_body_ints[idx_part][alpha_spin_idx](holes[0], parts[0]);
    for (auto orb_a_i : aocc) {
      elem += this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(holes[0], parts[0]), this->input_integral->idx2(orb_a_i, orb_a_i));
      elem -= this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(holes[0], orb_a_i), this->input_integral->idx2(orb_a_i, parts[0]));
    }
    for (auto orb_b_i : bocc) {
      elem += this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(holes[0], parts[0]), this->input_integral->idx2(orb_b_i, orb_b_i));
    }
    elem *= phase;
  } else {
    get_holes(det_i_b, det_j_b, holes);
    get_parts(det_i_b, det_j_b, parts);
    phase = get_phase(det_i_b, det_j_b, holes, parts);
    elem += this->input_integral->mo_one_body_ints[idx_part][beta_spin_idx](holes[0], parts[0]);
    for (auto orb_b_i : bocc) {
      elem += this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(holes[0], parts[0]), this->input_integral->idx2(orb_b_i, orb_b_i));
      elem -= this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(holes[0], orb_b_i), this->input_integral->idx2(orb_b_i, parts[0]));
    }
    for (auto orb_a_i : aocc) {
      elem += this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(holes[0], parts[0]), this->input_integral->idx2(orb_a_i, orb_a_i));
    }
    elem *= phase;
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::same_part_ham_double(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto alpha_spin_idx = 0;
  auto beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[idx_part].size();

  // spin = -1 mixed, spin = 0 alpha excitation, spin = 1 beta excitation
  if (det_i_a == det_j_a) {
    std::vector<int> holes, parts;
    double phase = 1.0;
    get_holes(det_i_b, det_j_b, holes);
    get_parts(det_i_b, det_j_b, parts);
    phase = get_phase(det_i_b, det_j_b, holes, parts);
    elem += this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(holes[0], parts[0]), this->input_integral->idx2(holes[1], parts[1]));
    elem -= this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral->idx2(holes[0], parts[1]), this->input_integral->idx2(holes[1], parts[0]));
    elem *= phase;
  } else if (det_i_b == det_j_b) {
    std::vector<int> holes, parts;
    double phase = 1.0;
    get_holes(det_i_a, det_j_a, holes);
    get_parts(det_i_a, det_j_a, parts);
    phase = get_phase(det_i_a, det_j_a, holes, parts);
    elem += this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(holes[0], parts[0]), this->input_integral->idx2(holes[1], parts[1]));
    elem -= this->input_integral->mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(holes[0], parts[1]), this->input_integral->idx2(holes[1], parts[0]));
    elem *= phase;
  } else {
    std::vector<int> aholes, aparts;
    std::vector<int> bholes, bparts;
    double phase = 1.0;
    get_holes(det_i_a, det_j_a, aholes);
    get_parts(det_i_a, det_j_a, aparts);
    get_holes(det_i_b, det_j_b, bholes);
    get_parts(det_i_b, det_j_b, bparts);
    phase *= get_phase(det_i_a, det_j_a, aholes, aparts);
    phase *= get_phase(det_i_b, det_j_b, bholes, bparts);
    elem +=
        this->input_integral->mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][beta_spin_idx](this->input_integral->idx2(aholes[0], aparts[0]), this->input_integral->idx2(bholes[0], bparts[0]));
    elem *= phase;
  }
  return elem;
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
