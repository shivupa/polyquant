#include "ci/determinant_set.hpp"

using namespace polyquant;

template <typename T> double POLYQUANT_DETSET<T>::mixed_part_ham_diag(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto idx_part_det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto idx_part_det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto idx_part_det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto other_idx_part_det_i_a = this->get_det(other_idx_part, 0, i_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
  auto other_idx_part_det_j_a = this->get_det(other_idx_part, 0, j_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_j_b = this->get_det(other_idx_part, 1, j_unfold[other_idx_part * 2 + 1]);
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[other_idx_part].size();

  std::vector<int> other_idx_part_aocc, other_idx_part_avirt;
  std::vector<int> other_idx_part_bocc, other_idx_part_bvirt;
  std::vector<int> idx_part_aocc, idx_part_avirt;
  std::vector<int> idx_part_bocc, idx_part_bvirt;
  this->get_occ_virt(other_idx_part, other_idx_part_det_i_a, other_idx_part_aocc, other_idx_part_avirt);
  this->get_occ_virt(other_idx_part, other_idx_part_det_i_b, other_idx_part_bocc, other_idx_part_bvirt);
  this->get_occ_virt(idx_part, idx_part_det_i_a, idx_part_aocc, idx_part_avirt);
  this->get_occ_virt(idx_part, idx_part_det_i_b, idx_part_bocc, idx_part_bvirt);

  for (auto orb_a_i : idx_part_aocc) {
    for (auto orb_a_j : other_idx_part_aocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](this->input_integral->idx2(orb_a_j, orb_a_j),
                                                                                                                                         this->input_integral->idx2(orb_a_i, orb_a_i));
      } else {
        elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](this->input_integral->idx2(orb_a_i, orb_a_i),
                                                                                                                                         this->input_integral->idx2(orb_a_j, orb_a_j));
      }
    }
    for (auto orb_b_j : other_idx_part_bocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](this->input_integral->idx2(orb_b_j, orb_b_j),
                                                                                                                                        this->input_integral->idx2(orb_a_i, orb_a_i));
      } else {
        elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](this->input_integral->idx2(orb_a_i, orb_a_i),
                                                                                                                                        this->input_integral->idx2(orb_b_j, orb_b_j));
      }
    }
  }
  for (auto orb_b_i : idx_part_bocc) {
    for (auto orb_a_j : other_idx_part_aocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](this->input_integral->idx2(orb_a_j, orb_a_j),
                                                                                                                                        this->input_integral->idx2(orb_b_i, orb_b_i));
      } else {
        elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](this->input_integral->idx2(orb_b_i, orb_b_i),
                                                                                                                                        this->input_integral->idx2(orb_a_j, orb_a_j));
      }
    }
    for (auto orb_b_j : other_idx_part_bocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](this->input_integral->idx2(orb_b_j, orb_b_j),
                                                                                                                                       this->input_integral->idx2(orb_b_i, orb_b_i));
      } else {
        elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](this->input_integral->idx2(orb_b_i, orb_b_i),
                                                                                                                                       this->input_integral->idx2(orb_b_j, orb_b_j));
      }
    }
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::mixed_part_ham_single(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto idx_part_det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto idx_part_det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto idx_part_det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto other_idx_part_det_i_a = this->get_det(other_idx_part, 0, i_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
  auto other_idx_part_det_j_a = this->get_det(other_idx_part, 0, j_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_j_b = this->get_det(other_idx_part, 1, j_unfold[other_idx_part * 2 + 1]);
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[other_idx_part].size();
  if (other_idx_part_det_i_a == other_idx_part_det_j_a && other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> aocc, avirt;
    std::vector<int> bocc, bvirt;
    this->get_occ_virt(other_idx_part, other_idx_part_det_i_a, aocc, avirt);
    this->get_occ_virt(other_idx_part, other_idx_part_det_i_b, bocc, bvirt);
    std::vector<int> idx_part_holes, idx_part_parts;
    double phase = 1.0;
    if (idx_part_det_i_a == idx_part_det_j_a) {
      get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
      get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
      phase *= get_phase(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes, idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral->idx2(orb_a_i, orb_a_i), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(orb_a_i, orb_a_i));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral->idx2(orb_b_i, orb_b_i), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
              this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(orb_b_i, orb_b_i));
        }
      }
    } else {
      get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
      get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
      phase *= get_phase(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes, idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral->idx2(orb_a_i, orb_a_i), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(orb_a_i, orb_a_i));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral->idx2(orb_b_i, orb_b_i), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
              this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(orb_b_i, orb_b_i));
        }
      }
    }
    elem *= phase;
  } else {
    std::vector<int> aocc, avirt;
    std::vector<int> bocc, bvirt;
    this->get_occ_virt(idx_part, idx_part_det_i_a, aocc, avirt);
    this->get_occ_virt(idx_part, idx_part_det_i_b, bocc, bvirt);
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    if (other_idx_part_det_i_b == other_idx_part_det_j_b) {
      get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes);
      get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_parts);
      phase *= get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes, other_idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(orb_a_i, orb_a_i));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral->idx2(orb_a_i, orb_a_i), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(orb_b_i, orb_b_i));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral->idx2(orb_b_i, orb_b_i), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
    } else {
      get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes);
      get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_parts);
      phase *= get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes, other_idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(orb_a_i, orb_a_i));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
              this->input_integral->idx2(orb_a_i, orb_a_i), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(orb_b_i, orb_b_i));
        } else {
          elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
              this->input_integral->idx2(orb_b_i, orb_b_i), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
    }
    elem *= phase;
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::mixed_part_ham_double(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto idx_part_det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto idx_part_det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto idx_part_det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto other_idx_part_det_i_a = this->get_det(other_idx_part, 0, i_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
  auto other_idx_part_det_j_a = this->get_det(other_idx_part, 0, j_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_j_b = this->get_det(other_idx_part, 1, j_unfold[other_idx_part * 2 + 1]);
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx = 1 % this->input_integral->mo_one_body_ints[other_idx_part].size();

  // spin = -1 mixed, spin = 0 alpha excitation, spin = 1 beta excitation
  if (idx_part_det_i_a == idx_part_det_j_a && other_idx_part_det_i_a == other_idx_part_det_j_a) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
    get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
    get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes);
    get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](
          this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
          this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_b == idx_part_det_j_b && other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
    get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
    get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes);
    get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](
          this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
          this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_a == idx_part_det_j_a && other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
    get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
    get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes);
    get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](
          this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
          this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_b == idx_part_det_j_b && other_idx_part_det_i_a == other_idx_part_det_j_a) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
    get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
    get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes);
    get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral->mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](
          this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral->mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
          this->input_integral->idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral->idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  }
  return elem;
}

template class POLYQUANT_DETSET<uint64_t>;
