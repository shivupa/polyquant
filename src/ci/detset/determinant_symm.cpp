
#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T> int POLYQUANT_DETSET<T>::get_symm_idx(int idx_part, const std::pair<std::vector<T>, std::vector<T>> &D, int &symm_idx) {
  // int symm_idx = -1;
  std::vector<int> occ, virt;
  occ.clear();
  virt.clear();
  auto det = std::get<0>(D);
  this->get_occ_virt(idx_part, det, occ, virt);
  for (auto i_occ : occ) {
    auto shifted_i_occ = i_occ + frozen_core[idx_part];
    if (symm_idx < 0) {
      symm_idx = this->input_epscf->symm_label_idxs[idx_part][0][shifted_i_occ];
    } else {
      symm_idx = this->input_basis->direct_product_table(symm_idx, this->input_epscf->symm_label_idxs[idx_part][0][shifted_i_occ]);
    }
  }

  int beta_idx = this->input_epscf->symm_label_idxs[idx_part].size() - 1;
  det = std::get<1>(D);
  occ.clear();
  virt.clear();
  this->get_occ_virt(idx_part, det, occ, virt);
  for (auto i_occ : occ) {
    auto shifted_i_occ = i_occ + frozen_core[idx_part];
    if (symm_idx < 0) {
      symm_idx = this->input_epscf->symm_label_idxs[idx_part][beta_idx][shifted_i_occ];
    } else {
      symm_idx = this->input_basis->direct_product_table(symm_idx, this->input_epscf->symm_label_idxs[idx_part][beta_idx][shifted_i_occ]);
    }
  }

  return symm_idx;
}

template class POLYQUANT_DETSET<uint64_t>;
};
