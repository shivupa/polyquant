/*
 *  Copyright (C) 2004-2021 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <CR_aB_X0__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_I_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
CR_aB_Z0__0___Overlap_Z0__0___Ab__up_(inteval, &(fp3), &(inteval->_0_Overlap_0_z[vi]));
LIBINT2_REALTYPE fp2;
CR_aB_Y0__0___Overlap_Y0__0___Ab__up_(inteval, &(fp2), &(inteval->_0_Overlap_0_y[vi]));
LIBINT2_REALTYPE fp1;
CR_aB_X0__0___Overlap_X0__0___Ab__up_(inteval, &(fp1), &(inteval->_0_Overlap_0_x[vi]));
LIBINT2_REALTYPE fp0;
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp0), &(fp1), &(fp2), &(fp3));
LIBINT2_REALTYPE fp4;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp4), &(fp0));
LIBINT2_REALTYPE fp5;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp5), &(fp4));
LIBINT2_REALTYPE fp7;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(fp7), &(fp4));
LIBINT2_REALTYPE fp12;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2725)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2728)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2731)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2734)*1+lsi)*1]), &(stack[((hsi*3+2725)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+2731)*1+lsi)*1]), &(stack[((hsi*3+2728)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2740)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2743)*1+lsi)*1]), &(stack[((hsi*3+2728)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+2740)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2749)*1+lsi)*1]), &(stack[((hsi*3+2731)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+2740)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2755)*1+lsi)*1]), &(stack[((hsi*6+2734)*1+lsi)*1]), &(stack[((hsi*3+2725)*1+lsi)*1]), &(stack[((hsi*6+2749)*1+lsi)*1]), &(stack[((hsi*6+2743)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2771)*1+lsi)*1]), &(stack[((hsi*6+2743)*1+lsi)*1]), &(stack[((hsi*3+2728)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2781)*1+lsi)*1]), &(stack[((hsi*6+2749)*1+lsi)*1]), &(stack[((hsi*3+2731)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2791)*1+lsi)*1]), &(stack[((hsi*10+2755)*1+lsi)*1]), &(stack[((hsi*6+2734)*1+lsi)*1]), &(stack[((hsi*10+2781)*1+lsi)*1]), &(stack[((hsi*10+2771)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2806)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2809)*1+lsi)*1]), &(stack[((hsi*3+2806)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+2728)*1+lsi)*1]), &(stack[((hsi*3+2731)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2815)*1+lsi)*1]), &(stack[((hsi*6+2809)*1+lsi)*1]), &(stack[((hsi*3+2806)*1+lsi)*1]), &(stack[((hsi*6+2743)*1+lsi)*1]), &(stack[((hsi*6+2749)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2825)*1+lsi)*1]), &(stack[((hsi*10+2815)*1+lsi)*1]), &(stack[((hsi*6+2809)*1+lsi)*1]), &(stack[((hsi*10+2771)*1+lsi)*1]), &(stack[((hsi*10+2781)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2840)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2843)*1+lsi)*1]), &(stack[((hsi*3+2840)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+2806)*1+lsi)*1]), &(stack[((hsi*3+2725)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2849)*1+lsi)*1]), &(stack[((hsi*6+2843)*1+lsi)*1]), &(stack[((hsi*3+2840)*1+lsi)*1]), &(stack[((hsi*6+2809)*1+lsi)*1]), &(stack[((hsi*6+2734)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2859)*1+lsi)*1]), &(stack[((hsi*10+2849)*1+lsi)*1]), &(stack[((hsi*6+2843)*1+lsi)*1]), &(stack[((hsi*10+2815)*1+lsi)*1]), &(stack[((hsi*10+2755)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2874)*1+lsi)*1]), &(stack[((hsi*15+2859)*1+lsi)*1]), &(stack[((hsi*10+2849)*1+lsi)*1]), &(stack[((hsi*15+2825)*1+lsi)*1]), &(stack[((hsi*15+2791)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2895)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2898)*1+lsi)*1]), &(stack[((hsi*3+2895)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+2725)*1+lsi)*1]), &(stack[((hsi*3+2806)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2904)*1+lsi)*1]), &(stack[((hsi*6+2898)*1+lsi)*1]), &(stack[((hsi*3+2895)*1+lsi)*1]), &(stack[((hsi*6+2734)*1+lsi)*1]), &(stack[((hsi*6+2809)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*10+2904)*1+lsi)*1]), &(stack[((hsi*6+2898)*1+lsi)*1]), &(stack[((hsi*10+2755)*1+lsi)*1]), &(stack[((hsi*10+2815)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*10+2904)*1+lsi)*1]), &(stack[((hsi*15+2791)*1+lsi)*1]), &(stack[((hsi*15+2825)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2950)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2953)*1+lsi)*1]), &(stack[((hsi*3+2950)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+2895)*1+lsi)*1]), &(stack[((hsi*3+2840)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2959)*1+lsi)*1]), &(stack[((hsi*6+2953)*1+lsi)*1]), &(stack[((hsi*3+2950)*1+lsi)*1]), &(stack[((hsi*6+2898)*1+lsi)*1]), &(stack[((hsi*6+2843)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2969)*1+lsi)*1]), &(stack[((hsi*10+2959)*1+lsi)*1]), &(stack[((hsi*6+2953)*1+lsi)*1]), &(stack[((hsi*10+2904)*1+lsi)*1]), &(stack[((hsi*10+2849)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2984)*1+lsi)*1]), &(stack[((hsi*15+2969)*1+lsi)*1]), &(stack[((hsi*10+2959)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*15+2859)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3005)*1+lsi)*1]), &(stack[((hsi*21+2984)*1+lsi)*1]), &(stack[((hsi*15+2969)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*21+2874)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2697)*1+lsi)*1]),&(stack[((hsi*28+3005)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2950)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2960)*1+lsi)*1]), &(stack[((hsi*10+2771)*1+lsi)*1]), &(stack[((hsi*6+2743)*1+lsi)*1]), &(stack[((hsi*10+2950)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3033)*1+lsi)*1]), &(stack[((hsi*10+2781)*1+lsi)*1]), &(stack[((hsi*6+2749)*1+lsi)*1]), &(stack[((hsi*10+2950)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3048)*1+lsi)*1]), &(stack[((hsi*15+2791)*1+lsi)*1]), &(stack[((hsi*10+2755)*1+lsi)*1]), &(stack[((hsi*15+3033)*1+lsi)*1]), &(stack[((hsi*15+2960)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3069)*1+lsi)*1]), &(stack[((hsi*15+2825)*1+lsi)*1]), &(stack[((hsi*10+2815)*1+lsi)*1]), &(stack[((hsi*15+2960)*1+lsi)*1]), &(stack[((hsi*15+3033)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3090)*1+lsi)*1]), &(stack[((hsi*21+2874)*1+lsi)*1]), &(stack[((hsi*15+2859)*1+lsi)*1]), &(stack[((hsi*21+3069)*1+lsi)*1]), &(stack[((hsi*21+3048)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3118)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*21+3048)*1+lsi)*1]), &(stack[((hsi*21+3069)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3146)*1+lsi)*1]), &(stack[((hsi*28+3005)*1+lsi)*1]), &(stack[((hsi*21+2984)*1+lsi)*1]), &(stack[((hsi*28+3118)*1+lsi)*1]), &(stack[((hsi*28+3090)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2661)*1+lsi)*1]),&(stack[((hsi*36+3146)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2975)*1+lsi)*1]), &(stack[((hsi*10+2950)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3182)*1+lsi)*1]), &(stack[((hsi*15+2960)*1+lsi)*1]), &(stack[((hsi*10+2771)*1+lsi)*1]), &(stack[((hsi*15+2975)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3203)*1+lsi)*1]), &(stack[((hsi*15+3033)*1+lsi)*1]), &(stack[((hsi*10+2781)*1+lsi)*1]), &(stack[((hsi*15+2975)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3224)*1+lsi)*1]), &(stack[((hsi*21+3048)*1+lsi)*1]), &(stack[((hsi*15+2791)*1+lsi)*1]), &(stack[((hsi*21+3203)*1+lsi)*1]), &(stack[((hsi*21+3182)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3252)*1+lsi)*1]), &(stack[((hsi*21+3069)*1+lsi)*1]), &(stack[((hsi*15+2825)*1+lsi)*1]), &(stack[((hsi*21+3182)*1+lsi)*1]), &(stack[((hsi*21+3203)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3280)*1+lsi)*1]), &(stack[((hsi*28+3090)*1+lsi)*1]), &(stack[((hsi*21+2874)*1+lsi)*1]), &(stack[((hsi*28+3252)*1+lsi)*1]), &(stack[((hsi*28+3224)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3316)*1+lsi)*1]), &(stack[((hsi*28+3118)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*28+3224)*1+lsi)*1]), &(stack[((hsi*28+3252)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3352)*1+lsi)*1]), &(stack[((hsi*36+3146)*1+lsi)*1]), &(stack[((hsi*28+3005)*1+lsi)*1]), &(stack[((hsi*36+3316)*1+lsi)*1]), &(stack[((hsi*36+3280)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2616)*1+lsi)*1]),&(stack[((hsi*45+3352)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2990)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2993)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2996)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2999)*1+lsi)*1]), &(stack[((hsi*3+2990)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+2996)*1+lsi)*1]), &(stack[((hsi*3+2993)*1+lsi)*1]), &(stack[((hsi*3+2806)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3397)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3400)*1+lsi)*1]), &(stack[((hsi*3+2993)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+3397)*1+lsi)*1]), &(stack[((hsi*3+2731)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3406)*1+lsi)*1]), &(stack[((hsi*3+2996)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+3397)*1+lsi)*1]), &(stack[((hsi*3+2728)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3412)*1+lsi)*1]), &(stack[((hsi*6+2999)*1+lsi)*1]), &(stack[((hsi*3+2990)*1+lsi)*1]), &(stack[((hsi*6+3406)*1+lsi)*1]), &(stack[((hsi*6+3400)*1+lsi)*1]), &(stack[((hsi*6+2809)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+2740)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3428)*1+lsi)*1]), &(stack[((hsi*6+3400)*1+lsi)*1]), &(stack[((hsi*3+2993)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*6+2749)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3438)*1+lsi)*1]), &(stack[((hsi*6+3406)*1+lsi)*1]), &(stack[((hsi*3+2996)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*6+2743)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3448)*1+lsi)*1]), &(stack[((hsi*10+3412)*1+lsi)*1]), &(stack[((hsi*6+2999)*1+lsi)*1]), &(stack[((hsi*10+3438)*1+lsi)*1]), &(stack[((hsi*10+3428)*1+lsi)*1]), &(stack[((hsi*10+2815)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3473)*1+lsi)*1]), &(stack[((hsi*10+3428)*1+lsi)*1]), &(stack[((hsi*6+3400)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*10+2781)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3488)*1+lsi)*1]), &(stack[((hsi*10+3438)*1+lsi)*1]), &(stack[((hsi*6+3406)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*10+2771)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3503)*1+lsi)*1]), &(stack[((hsi*15+3448)*1+lsi)*1]), &(stack[((hsi*10+3412)*1+lsi)*1]), &(stack[((hsi*15+3488)*1+lsi)*1]), &(stack[((hsi*15+3473)*1+lsi)*1]), &(stack[((hsi*15+2825)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2740)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+2993)*1+lsi)*1]), &(stack[((hsi*3+2996)*1+lsi)*1]), &(stack[((hsi*3+2725)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3524)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*6+3400)*1+lsi)*1]), &(stack[((hsi*6+3406)*1+lsi)*1]), &(stack[((hsi*6+2734)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3534)*1+lsi)*1]), &(stack[((hsi*10+3524)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*10+3428)*1+lsi)*1]), &(stack[((hsi*10+3438)*1+lsi)*1]), &(stack[((hsi*10+2755)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*15+3534)*1+lsi)*1]), &(stack[((hsi*10+3524)*1+lsi)*1]), &(stack[((hsi*15+3473)*1+lsi)*1]), &(stack[((hsi*15+3488)*1+lsi)*1]), &(stack[((hsi*15+2791)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3570)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3573)*1+lsi)*1]), &(stack[((hsi*3+3570)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*3+2990)*1+lsi)*1]), &(stack[((hsi*3+2895)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3579)*1+lsi)*1]), &(stack[((hsi*6+3573)*1+lsi)*1]), &(stack[((hsi*3+3570)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*6+2999)*1+lsi)*1]), &(stack[((hsi*6+2898)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3589)*1+lsi)*1]), &(stack[((hsi*10+3579)*1+lsi)*1]), &(stack[((hsi*6+3573)*1+lsi)*1]), &(stack[((hsi*10+3524)*1+lsi)*1]), &(stack[((hsi*10+3412)*1+lsi)*1]), &(stack[((hsi*10+2904)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3604)*1+lsi)*1]), &(stack[((hsi*15+3589)*1+lsi)*1]), &(stack[((hsi*10+3579)*1+lsi)*1]), &(stack[((hsi*15+3534)*1+lsi)*1]), &(stack[((hsi*15+3448)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3625)*1+lsi)*1]), &(stack[((hsi*21+3604)*1+lsi)*1]), &(stack[((hsi*15+3589)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*21+3503)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2588)*1+lsi)*1]),&(stack[((hsi*28+3625)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3570)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*10+2950)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3653)*1+lsi)*1]), &(stack[((hsi*15+3473)*1+lsi)*1]), &(stack[((hsi*10+3428)*1+lsi)*1]), &(stack[((hsi*15+3570)*1+lsi)*1]), &(stack[((hsi*15+3033)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3674)*1+lsi)*1]), &(stack[((hsi*15+3488)*1+lsi)*1]), &(stack[((hsi*10+3438)*1+lsi)*1]), &(stack[((hsi*15+3570)*1+lsi)*1]), &(stack[((hsi*15+2960)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3695)*1+lsi)*1]), &(stack[((hsi*21+3503)*1+lsi)*1]), &(stack[((hsi*15+3448)*1+lsi)*1]), &(stack[((hsi*21+3674)*1+lsi)*1]), &(stack[((hsi*21+3653)*1+lsi)*1]), &(stack[((hsi*21+3069)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3723)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*15+3534)*1+lsi)*1]), &(stack[((hsi*21+3653)*1+lsi)*1]), &(stack[((hsi*21+3674)*1+lsi)*1]), &(stack[((hsi*21+3048)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3751)*1+lsi)*1]), &(stack[((hsi*28+3625)*1+lsi)*1]), &(stack[((hsi*21+3604)*1+lsi)*1]), &(stack[((hsi*28+3723)*1+lsi)*1]), &(stack[((hsi*28+3695)*1+lsi)*1]), &(stack[((hsi*28+3118)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2552)*1+lsi)*1]),&(stack[((hsi*36+3751)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3585)*1+lsi)*1]), &(stack[((hsi*15+3570)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*15+2975)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3787)*1+lsi)*1]), &(stack[((hsi*21+3653)*1+lsi)*1]), &(stack[((hsi*15+3473)*1+lsi)*1]), &(stack[((hsi*21+3585)*1+lsi)*1]), &(stack[((hsi*21+3203)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3815)*1+lsi)*1]), &(stack[((hsi*21+3674)*1+lsi)*1]), &(stack[((hsi*15+3488)*1+lsi)*1]), &(stack[((hsi*21+3585)*1+lsi)*1]), &(stack[((hsi*21+3182)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3843)*1+lsi)*1]), &(stack[((hsi*28+3695)*1+lsi)*1]), &(stack[((hsi*21+3503)*1+lsi)*1]), &(stack[((hsi*28+3815)*1+lsi)*1]), &(stack[((hsi*28+3787)*1+lsi)*1]), &(stack[((hsi*28+3252)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3879)*1+lsi)*1]), &(stack[((hsi*28+3723)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*28+3787)*1+lsi)*1]), &(stack[((hsi*28+3815)*1+lsi)*1]), &(stack[((hsi*28+3224)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3915)*1+lsi)*1]), &(stack[((hsi*36+3751)*1+lsi)*1]), &(stack[((hsi*28+3625)*1+lsi)*1]), &(stack[((hsi*36+3879)*1+lsi)*1]), &(stack[((hsi*36+3843)*1+lsi)*1]), &(stack[((hsi*36+3316)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2507)*1+lsi)*1]),&(stack[((hsi*45+3915)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3606)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3612)*1+lsi)*1]), &(stack[((hsi*3+3606)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+2806)*1+lsi)*1]), &(stack[((hsi*3+2725)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(stack[((hsi*3+2996)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3618)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+2731)*1+lsi)*1]), &(stack[((hsi*3+2728)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*6+3612)*1+lsi)*1]), &(stack[((hsi*3+3606)*1+lsi)*1]), &(stack[((hsi*6+2809)*1+lsi)*1]), &(stack[((hsi*6+2734)*1+lsi)*1]), &(stack[((hsi*6+3618)*1+lsi)*1]), &(stack[((hsi*6+3406)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+3618)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(stack[((hsi*6+2749)*1+lsi)*1]), &(stack[((hsi*6+2743)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3980)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*6+3612)*1+lsi)*1]), &(stack[((hsi*10+2815)*1+lsi)*1]), &(stack[((hsi*10+2755)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*10+3438)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+3618)*1+lsi)*1]), &(stack[((hsi*10+2781)*1+lsi)*1]), &(stack[((hsi*10+2771)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4010)*1+lsi)*1]), &(stack[((hsi*15+3980)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*15+2825)*1+lsi)*1]), &(stack[((hsi*15+2791)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*15+3488)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3397)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+2725)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(stack[((hsi*3+2806)*1+lsi)*1]), &(stack[((hsi*3+2993)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]), &(stack[((hsi*6+2734)*1+lsi)*1]), &(stack[((hsi*6+3618)*1+lsi)*1]), &(stack[((hsi*6+2809)*1+lsi)*1]), &(stack[((hsi*6+3400)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2725)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*10+2755)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*10+2815)*1+lsi)*1]), &(stack[((hsi*10+3428)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2743)*1+lsi)*1]), &(stack[((hsi*15+2725)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*15+2791)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*15+2825)*1+lsi)*1]), &(stack[((hsi*15+3473)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2771)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2774)*1+lsi)*1]), &(stack[((hsi*3+2771)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+2895)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]), &(stack[((hsi*3+2840)*1+lsi)*1]), &(stack[((hsi*3+3606)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2780)*1+lsi)*1]), &(stack[((hsi*6+2774)*1+lsi)*1]), &(stack[((hsi*3+2771)*1+lsi)*1]), &(stack[((hsi*6+2898)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*6+2843)*1+lsi)*1]), &(stack[((hsi*6+3612)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2790)*1+lsi)*1]), &(stack[((hsi*10+2780)*1+lsi)*1]), &(stack[((hsi*6+2774)*1+lsi)*1]), &(stack[((hsi*10+2904)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*10+2849)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*10+3524)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2805)*1+lsi)*1]), &(stack[((hsi*15+2790)*1+lsi)*1]), &(stack[((hsi*10+2780)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*15+2725)*1+lsi)*1]), &(stack[((hsi*15+2859)*1+lsi)*1]), &(stack[((hsi*15+3980)*1+lsi)*1]), &(stack[((hsi*15+3534)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4031)*1+lsi)*1]), &(stack[((hsi*21+2805)*1+lsi)*1]), &(stack[((hsi*15+2790)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*21+2743)*1+lsi)*1]), &(stack[((hsi*21+2874)*1+lsi)*1]), &(stack[((hsi*21+4010)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2479)*1+lsi)*1]),&(stack[((hsi*28+4031)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*15+3033)*1+lsi)*1]), &(stack[((hsi*15+2960)*1+lsi)*1]), &(stack[((hsi*15+3570)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4059)*1+lsi)*1]), &(stack[((hsi*21+4010)*1+lsi)*1]), &(stack[((hsi*15+3980)*1+lsi)*1]), &(stack[((hsi*21+3069)*1+lsi)*1]), &(stack[((hsi*21+3048)*1+lsi)*1]), &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*21+3674)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4087)*1+lsi)*1]), &(stack[((hsi*21+2743)*1+lsi)*1]), &(stack[((hsi*15+2725)*1+lsi)*1]), &(stack[((hsi*21+3048)*1+lsi)*1]), &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*21+3069)*1+lsi)*1]), &(stack[((hsi*21+3653)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4115)*1+lsi)*1]), &(stack[((hsi*28+4031)*1+lsi)*1]), &(stack[((hsi*21+2805)*1+lsi)*1]), &(stack[((hsi*28+3118)*1+lsi)*1]), &(stack[((hsi*28+4087)*1+lsi)*1]), &(stack[((hsi*28+3090)*1+lsi)*1]), &(stack[((hsi*28+4059)*1+lsi)*1]), &(stack[((hsi*28+3723)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2443)*1+lsi)*1]),&(stack[((hsi*36+4115)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*21+3203)*1+lsi)*1]), &(stack[((hsi*21+3182)*1+lsi)*1]), &(stack[((hsi*21+3585)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4151)*1+lsi)*1]), &(stack[((hsi*28+4059)*1+lsi)*1]), &(stack[((hsi*21+4010)*1+lsi)*1]), &(stack[((hsi*28+3252)*1+lsi)*1]), &(stack[((hsi*28+3224)*1+lsi)*1]), &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*28+3815)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4187)*1+lsi)*1]), &(stack[((hsi*28+4087)*1+lsi)*1]), &(stack[((hsi*21+2743)*1+lsi)*1]), &(stack[((hsi*28+3224)*1+lsi)*1]), &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*28+3252)*1+lsi)*1]), &(stack[((hsi*28+3787)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4223)*1+lsi)*1]), &(stack[((hsi*36+4115)*1+lsi)*1]), &(stack[((hsi*28+4031)*1+lsi)*1]), &(stack[((hsi*36+3316)*1+lsi)*1]), &(stack[((hsi*36+4187)*1+lsi)*1]), &(stack[((hsi*36+3280)*1+lsi)*1]), &(stack[((hsi*36+4151)*1+lsi)*1]), &(stack[((hsi*36+3879)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2398)*1+lsi)*1]),&(stack[((hsi*45+4223)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2820)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2823)*1+lsi)*1]), &(stack[((hsi*3+2820)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+2993)*1+lsi)*1]), &(stack[((hsi*3+2996)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2829)*1+lsi)*1]), &(stack[((hsi*6+2823)*1+lsi)*1]), &(stack[((hsi*3+2820)*1+lsi)*1]), &(stack[((hsi*6+3400)*1+lsi)*1]), &(stack[((hsi*6+3406)*1+lsi)*1]), &(stack[((hsi*6+3618)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4268)*1+lsi)*1]), &(stack[((hsi*10+2829)*1+lsi)*1]), &(stack[((hsi*6+2823)*1+lsi)*1]), &(stack[((hsi*10+3428)*1+lsi)*1]), &(stack[((hsi*10+3438)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4283)*1+lsi)*1]), &(stack[((hsi*15+4268)*1+lsi)*1]), &(stack[((hsi*10+2829)*1+lsi)*1]), &(stack[((hsi*15+3473)*1+lsi)*1]), &(stack[((hsi*15+3488)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*3+2820)*1+lsi)*1]), &(stack[((hsi*3+2990)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*6+2823)*1+lsi)*1]), &(stack[((hsi*6+2999)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*10+3524)*1+lsi)*1]), &(stack[((hsi*10+2829)*1+lsi)*1]), &(stack[((hsi*10+3412)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*15+3534)*1+lsi)*1]), &(stack[((hsi*15+4268)*1+lsi)*1]), &(stack[((hsi*15+3448)*1+lsi)*1]), &(stack[((hsi*15+2725)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4304)*1+lsi)*1]), &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*21+4283)*1+lsi)*1]), &(stack[((hsi*21+3503)*1+lsi)*1]), &(stack[((hsi*21+2743)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2370)*1+lsi)*1]),&(stack[((hsi*28+4304)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4332)*1+lsi)*1]), &(stack[((hsi*21+4283)*1+lsi)*1]), &(stack[((hsi*15+4268)*1+lsi)*1]), &(stack[((hsi*21+3653)*1+lsi)*1]), &(stack[((hsi*21+3674)*1+lsi)*1]), &(stack[((hsi*21+2771)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4360)*1+lsi)*1]), &(stack[((hsi*28+4304)*1+lsi)*1]), &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*28+3723)*1+lsi)*1]), &(stack[((hsi*28+4332)*1+lsi)*1]), &(stack[((hsi*28+3695)*1+lsi)*1]), &(stack[((hsi*28+4087)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2334)*1+lsi)*1]),&(stack[((hsi*36+4360)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4396)*1+lsi)*1]), &(stack[((hsi*28+4332)*1+lsi)*1]), &(stack[((hsi*21+4283)*1+lsi)*1]), &(stack[((hsi*28+3787)*1+lsi)*1]), &(stack[((hsi*28+3815)*1+lsi)*1]), &(stack[((hsi*28+2792)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4432)*1+lsi)*1]), &(stack[((hsi*36+4360)*1+lsi)*1]), &(stack[((hsi*28+4304)*1+lsi)*1]), &(stack[((hsi*36+3879)*1+lsi)*1]), &(stack[((hsi*36+4396)*1+lsi)*1]), &(stack[((hsi*36+3843)*1+lsi)*1]), &(stack[((hsi*36+4187)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2289)*1+lsi)*1]),&(stack[((hsi*45+4432)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+3397)*1+lsi)*1]), &(stack[((hsi*3+3606)*1+lsi)*1]), &(stack[((hsi*3+2820)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*6+3612)*1+lsi)*1]), &(stack[((hsi*6+2823)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*10+2829)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*15+2725)*1+lsi)*1]), &(stack[((hsi*15+3980)*1+lsi)*1]), &(stack[((hsi*15+4268)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4477)*1+lsi)*1]), &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*21+2743)*1+lsi)*1]), &(stack[((hsi*21+4010)*1+lsi)*1]), &(stack[((hsi*21+4283)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2261)*1+lsi)*1]),&(stack[((hsi*28+4477)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4505)*1+lsi)*1]), &(stack[((hsi*28+4477)*1+lsi)*1]), &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*28+4087)*1+lsi)*1]), &(stack[((hsi*28+4059)*1+lsi)*1]), &(stack[((hsi*28+4332)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2225)*1+lsi)*1]),&(stack[((hsi*36+4505)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4541)*1+lsi)*1]), &(stack[((hsi*36+4505)*1+lsi)*1]), &(stack[((hsi*28+4477)*1+lsi)*1]), &(stack[((hsi*36+4187)*1+lsi)*1]), &(stack[((hsi*36+4151)*1+lsi)*1]), &(stack[((hsi*36+4396)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2180)*1+lsi)*1]),&(stack[((hsi*45+4541)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+2990)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*3+2820)*1+lsi)*1]), &(stack[((hsi*3+3606)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(stack[((hsi*6+2999)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*6+2823)*1+lsi)*1]), &(stack[((hsi*6+3612)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*10+3412)*1+lsi)*1]), &(stack[((hsi*10+3524)*1+lsi)*1]), &(stack[((hsi*10+2829)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*15+3448)*1+lsi)*1]), &(stack[((hsi*15+3534)*1+lsi)*1]), &(stack[((hsi*15+4268)*1+lsi)*1]), &(stack[((hsi*15+3980)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4586)*1+lsi)*1]), &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*21+3503)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*21+4283)*1+lsi)*1]), &(stack[((hsi*21+4010)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2152)*1+lsi)*1]),&(stack[((hsi*28+4586)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4268)*1+lsi)*1]), &(stack[((hsi*28+4586)*1+lsi)*1]), &(stack[((hsi*21+3473)*1+lsi)*1]), &(stack[((hsi*28+3695)*1+lsi)*1]), &(stack[((hsi*28+3723)*1+lsi)*1]), &(stack[((hsi*28+4332)*1+lsi)*1]), &(stack[((hsi*28+4059)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2116)*1+lsi)*1]),&(stack[((hsi*36+4268)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4614)*1+lsi)*1]), &(stack[((hsi*36+4268)*1+lsi)*1]), &(stack[((hsi*28+4586)*1+lsi)*1]), &(stack[((hsi*36+3843)*1+lsi)*1]), &(stack[((hsi*36+3879)*1+lsi)*1]), &(stack[((hsi*36+4396)*1+lsi)*1]), &(stack[((hsi*36+4151)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2071)*1+lsi)*1]),&(stack[((hsi*45+4614)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+2840)*1+lsi)*1]), &(stack[((hsi*3+3606)*1+lsi)*1]), &(stack[((hsi*3+2895)*1+lsi)*1]), &(stack[((hsi*3+3397)*1+lsi)*1]), &(stack[((hsi*3+2990)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3609)*1+lsi)*1]), &(stack[((hsi*6+2843)*1+lsi)*1]), &(stack[((hsi*6+3612)*1+lsi)*1]), &(stack[((hsi*6+2898)*1+lsi)*1]), &(stack[((hsi*6+3422)*1+lsi)*1]), &(stack[((hsi*6+2999)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*10+2849)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*10+2904)*1+lsi)*1]), &(stack[((hsi*10+3463)*1+lsi)*1]), &(stack[((hsi*10+3412)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3463)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*10+3970)*1+lsi)*1]), &(stack[((hsi*15+2859)*1+lsi)*1]), &(stack[((hsi*15+3980)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*15+2725)*1+lsi)*1]), &(stack[((hsi*15+3448)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3960)*1+lsi)*1]), &(stack[((hsi*21+3463)*1+lsi)*1]), &(stack[((hsi*15+3995)*1+lsi)*1]), &(stack[((hsi*21+2874)*1+lsi)*1]), &(stack[((hsi*21+4010)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*21+2743)*1+lsi)*1]), &(stack[((hsi*21+3503)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2043)*1+lsi)*1]),&(stack[((hsi*28+3960)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3988)*1+lsi)*1]), &(stack[((hsi*28+3960)*1+lsi)*1]), &(stack[((hsi*21+3463)*1+lsi)*1]), &(stack[((hsi*28+3090)*1+lsi)*1]), &(stack[((hsi*28+4059)*1+lsi)*1]), &(stack[((hsi*28+3118)*1+lsi)*1]), &(stack[((hsi*28+4087)*1+lsi)*1]), &(stack[((hsi*28+3695)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2007)*1+lsi)*1]),&(stack[((hsi*36+3988)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4659)*1+lsi)*1]), &(stack[((hsi*36+3988)*1+lsi)*1]), &(stack[((hsi*28+3960)*1+lsi)*1]), &(stack[((hsi*36+3280)*1+lsi)*1]), &(stack[((hsi*36+4151)*1+lsi)*1]), &(stack[((hsi*36+3316)*1+lsi)*1]), &(stack[((hsi*36+4187)*1+lsi)*1]), &(stack[((hsi*36+3843)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1962)*1+lsi)*1]),&(stack[((hsi*45+4659)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3463)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3463)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+2990)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*3+2840)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2725)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*3+3463)*1+lsi)*1]), &(stack[((hsi*6+2999)*1+lsi)*1]), &(stack[((hsi*6+2765)*1+lsi)*1]), &(stack[((hsi*6+2843)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3397)*1+lsi)*1]), &(stack[((hsi*10+2725)*1+lsi)*1]), &(stack[((hsi*6+2993)*1+lsi)*1]), &(stack[((hsi*10+3412)*1+lsi)*1]), &(stack[((hsi*10+3524)*1+lsi)*1]), &(stack[((hsi*10+2849)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3463)*1+lsi)*1]), &(stack[((hsi*15+3397)*1+lsi)*1]), &(stack[((hsi*10+2725)*1+lsi)*1]), &(stack[((hsi*15+3448)*1+lsi)*1]), &(stack[((hsi*15+3534)*1+lsi)*1]), &(stack[((hsi*15+2859)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3412)*1+lsi)*1]), &(stack[((hsi*21+3463)*1+lsi)*1]), &(stack[((hsi*15+3397)*1+lsi)*1]), &(stack[((hsi*21+3503)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*21+2874)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1934)*1+lsi)*1]),&(stack[((hsi*28+3412)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3484)*1+lsi)*1]), &(stack[((hsi*28+3412)*1+lsi)*1]), &(stack[((hsi*21+3463)*1+lsi)*1]), &(stack[((hsi*28+3695)*1+lsi)*1]), &(stack[((hsi*28+3723)*1+lsi)*1]), &(stack[((hsi*28+3090)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1898)*1+lsi)*1]),&(stack[((hsi*36+3484)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3520)*1+lsi)*1]), &(stack[((hsi*36+3484)*1+lsi)*1]), &(stack[((hsi*28+3412)*1+lsi)*1]), &(stack[((hsi*36+3843)*1+lsi)*1]), &(stack[((hsi*36+3879)*1+lsi)*1]), &(stack[((hsi*36+3280)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1853)*1+lsi)*1]),&(stack[((hsi*45+3520)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2725)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*3+2725)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+2840)*1+lsi)*1]), &(stack[((hsi*3+2895)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2728)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*3+2725)*1+lsi)*1]), &(stack[((hsi*6+2843)*1+lsi)*1]), &(stack[((hsi*6+2898)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3397)*1+lsi)*1]), &(stack[((hsi*10+2728)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*10+2849)*1+lsi)*1]), &(stack[((hsi*10+2904)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3440)*1+lsi)*1]), &(stack[((hsi*15+3397)*1+lsi)*1]), &(stack[((hsi*10+2728)*1+lsi)*1]), &(stack[((hsi*15+2859)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2820)*1+lsi)*1]), &(stack[((hsi*21+3440)*1+lsi)*1]), &(stack[((hsi*15+3397)*1+lsi)*1]), &(stack[((hsi*21+2874)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1825)*1+lsi)*1]),&(stack[((hsi*28+2820)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2848)*1+lsi)*1]), &(stack[((hsi*28+2820)*1+lsi)*1]), &(stack[((hsi*21+3440)*1+lsi)*1]), &(stack[((hsi*28+3090)*1+lsi)*1]), &(stack[((hsi*28+3118)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1789)*1+lsi)*1]),&(stack[((hsi*36+2848)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2884)*1+lsi)*1]), &(stack[((hsi*36+2848)*1+lsi)*1]), &(stack[((hsi*28+2820)*1+lsi)*1]), &(stack[((hsi*36+3280)*1+lsi)*1]), &(stack[((hsi*36+3316)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1744)*1+lsi)*1]),&(stack[((hsi*45+2884)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1716)*1+lsi)*1]),&(stack[((hsi*28+3118)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1680)*1+lsi)*1]),&(stack[((hsi*36+3316)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*15+2975)*1+lsi)*1]), &(stack[((hsi*10+2950)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2725)*1+lsi)*1]), &(stack[((hsi*21+3203)*1+lsi)*1]), &(stack[((hsi*15+3033)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3440)*1+lsi)*1]), &(stack[((hsi*21+3182)*1+lsi)*1]), &(stack[((hsi*15+2960)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4704)*1+lsi)*1]), &(stack[((hsi*28+3252)*1+lsi)*1]), &(stack[((hsi*21+3069)*1+lsi)*1]), &(stack[((hsi*28+3440)*1+lsi)*1]), &(stack[((hsi*28+2725)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4740)*1+lsi)*1]), &(stack[((hsi*28+3224)*1+lsi)*1]), &(stack[((hsi*21+3048)*1+lsi)*1]), &(stack[((hsi*28+2725)*1+lsi)*1]), &(stack[((hsi*28+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3033)*1+lsi)*1]), &(stack[((hsi*36+3316)*1+lsi)*1]), &(stack[((hsi*28+3118)*1+lsi)*1]), &(stack[((hsi*36+4740)*1+lsi)*1]), &(stack[((hsi*36+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1635)*1+lsi)*1]),&(stack[((hsi*45+3033)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1607)*1+lsi)*1]),&(stack[((hsi*28+3723)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1571)*1+lsi)*1]),&(stack[((hsi*36+3879)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4776)*1+lsi)*1]), &(stack[((hsi*21+3585)*1+lsi)*1]), &(stack[((hsi*15+3570)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4804)*1+lsi)*1]), &(stack[((hsi*28+3815)*1+lsi)*1]), &(stack[((hsi*21+3674)*1+lsi)*1]), &(stack[((hsi*28+4776)*1+lsi)*1]), &(stack[((hsi*28+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4840)*1+lsi)*1]), &(stack[((hsi*28+3787)*1+lsi)*1]), &(stack[((hsi*21+3653)*1+lsi)*1]), &(stack[((hsi*28+4776)*1+lsi)*1]), &(stack[((hsi*28+2725)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4876)*1+lsi)*1]), &(stack[((hsi*36+3879)*1+lsi)*1]), &(stack[((hsi*28+3723)*1+lsi)*1]), &(stack[((hsi*36+4840)*1+lsi)*1]), &(stack[((hsi*36+4804)*1+lsi)*1]), &(stack[((hsi*36+4740)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1526)*1+lsi)*1]),&(stack[((hsi*45+4876)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1498)*1+lsi)*1]),&(stack[((hsi*28+4087)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1462)*1+lsi)*1]),&(stack[((hsi*36+4187)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3653)*1+lsi)*1]), &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*28+2725)*1+lsi)*1]), &(stack[((hsi*28+3440)*1+lsi)*1]), &(stack[((hsi*28+4776)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4921)*1+lsi)*1]), &(stack[((hsi*36+4187)*1+lsi)*1]), &(stack[((hsi*28+4087)*1+lsi)*1]), &(stack[((hsi*36+4740)*1+lsi)*1]), &(stack[((hsi*36+3653)*1+lsi)*1]), &(stack[((hsi*36+4704)*1+lsi)*1]), &(stack[((hsi*36+4840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1417)*1+lsi)*1]),&(stack[((hsi*45+4921)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1389)*1+lsi)*1]),&(stack[((hsi*28+4332)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1353)*1+lsi)*1]),&(stack[((hsi*36+4396)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4966)*1+lsi)*1]), &(stack[((hsi*36+4396)*1+lsi)*1]), &(stack[((hsi*28+4332)*1+lsi)*1]), &(stack[((hsi*36+4840)*1+lsi)*1]), &(stack[((hsi*36+4804)*1+lsi)*1]), &(stack[((hsi*36+3653)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1308)*1+lsi)*1]),&(stack[((hsi*45+4966)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1280)*1+lsi)*1]),&(stack[((hsi*28+4059)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1244)*1+lsi)*1]),&(stack[((hsi*36+4151)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5011)*1+lsi)*1]), &(stack[((hsi*36+4151)*1+lsi)*1]), &(stack[((hsi*28+4059)*1+lsi)*1]), &(stack[((hsi*36+4704)*1+lsi)*1]), &(stack[((hsi*36+4740)*1+lsi)*1]), &(stack[((hsi*36+3653)*1+lsi)*1]), &(stack[((hsi*36+4804)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1199)*1+lsi)*1]),&(stack[((hsi*45+5011)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1171)*1+lsi)*1]),&(stack[((hsi*28+3695)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1135)*1+lsi)*1]),&(stack[((hsi*36+3843)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5056)*1+lsi)*1]), &(stack[((hsi*36+3843)*1+lsi)*1]), &(stack[((hsi*28+3695)*1+lsi)*1]), &(stack[((hsi*36+4804)*1+lsi)*1]), &(stack[((hsi*36+4840)*1+lsi)*1]), &(stack[((hsi*36+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1090)*1+lsi)*1]),&(stack[((hsi*45+5056)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1062)*1+lsi)*1]),&(stack[((hsi*28+3090)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1026)*1+lsi)*1]),&(stack[((hsi*36+3280)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5101)*1+lsi)*1]), &(stack[((hsi*36+3280)*1+lsi)*1]), &(stack[((hsi*28+3090)*1+lsi)*1]), &(stack[((hsi*36+4704)*1+lsi)*1]), &(stack[((hsi*36+4740)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+981)*1+lsi)*1]),&(stack[((hsi*45+5101)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+953)*1+lsi)*1]),&(stack[((hsi*28+3224)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+917)*1+lsi)*1]),&(stack[((hsi*36+4740)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2753)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*15+2975)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2950)*1+lsi)*1]), &(stack[((hsi*28+3440)*1+lsi)*1]), &(stack[((hsi*21+3182)*1+lsi)*1]), &(stack[((hsi*28+2753)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5146)*1+lsi)*1]), &(stack[((hsi*28+2725)*1+lsi)*1]), &(stack[((hsi*21+3203)*1+lsi)*1]), &(stack[((hsi*28+2753)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5182)*1+lsi)*1]), &(stack[((hsi*36+4740)*1+lsi)*1]), &(stack[((hsi*28+3224)*1+lsi)*1]), &(stack[((hsi*36+5146)*1+lsi)*1]), &(stack[((hsi*36+2950)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+872)*1+lsi)*1]),&(stack[((hsi*45+5182)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+844)*1+lsi)*1]),&(stack[((hsi*28+3787)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+808)*1+lsi)*1]),&(stack[((hsi*36+4840)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3182)*1+lsi)*1]), &(stack[((hsi*28+4776)*1+lsi)*1]), &(stack[((hsi*21+3585)*1+lsi)*1]), &(stack[((hsi*28+2753)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3565)*1+lsi)*1]), &(stack[((hsi*36+4840)*1+lsi)*1]), &(stack[((hsi*28+3787)*1+lsi)*1]), &(stack[((hsi*36+3182)*1+lsi)*1]), &(stack[((hsi*36+5146)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+763)*1+lsi)*1]),&(stack[((hsi*45+3565)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+735)*1+lsi)*1]),&(stack[((hsi*28+2792)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+699)*1+lsi)*1]),&(stack[((hsi*36+3653)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5227)*1+lsi)*1]), &(stack[((hsi*36+3653)*1+lsi)*1]), &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*36+5146)*1+lsi)*1]), &(stack[((hsi*36+2950)*1+lsi)*1]), &(stack[((hsi*36+3182)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+654)*1+lsi)*1]),&(stack[((hsi*45+5227)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+626)*1+lsi)*1]),&(stack[((hsi*28+3815)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+590)*1+lsi)*1]),&(stack[((hsi*36+4804)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5272)*1+lsi)*1]), &(stack[((hsi*36+4804)*1+lsi)*1]), &(stack[((hsi*28+3815)*1+lsi)*1]), &(stack[((hsi*36+3182)*1+lsi)*1]), &(stack[((hsi*36+2950)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+545)*1+lsi)*1]),&(stack[((hsi*45+5272)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+517)*1+lsi)*1]),&(stack[((hsi*28+3252)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+481)*1+lsi)*1]),&(stack[((hsi*36+4704)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5317)*1+lsi)*1]), &(stack[((hsi*36+4704)*1+lsi)*1]), &(stack[((hsi*28+3252)*1+lsi)*1]), &(stack[((hsi*36+2950)*1+lsi)*1]), &(stack[((hsi*36+5146)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+436)*1+lsi)*1]),&(stack[((hsi*45+5317)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+408)*1+lsi)*1]),&(stack[((hsi*28+2725)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+372)*1+lsi)*1]),&(stack[((hsi*36+5146)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5362)*1+lsi)*1]), &(stack[((hsi*28+2753)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5398)*1+lsi)*1]), &(stack[((hsi*36+5146)*1+lsi)*1]), &(stack[((hsi*28+2725)*1+lsi)*1]), &(stack[((hsi*36+5362)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+327)*1+lsi)*1]),&(stack[((hsi*45+5398)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+299)*1+lsi)*1]),&(stack[((hsi*28+4776)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+263)*1+lsi)*1]),&(stack[((hsi*36+3182)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5443)*1+lsi)*1]), &(stack[((hsi*36+3182)*1+lsi)*1]), &(stack[((hsi*28+4776)*1+lsi)*1]), &(stack[((hsi*36+5362)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+218)*1+lsi)*1]),&(stack[((hsi*45+5443)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+190)*1+lsi)*1]),&(stack[((hsi*28+3440)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+154)*1+lsi)*1]),&(stack[((hsi*36+2950)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5488)*1+lsi)*1]), &(stack[((hsi*36+2950)*1+lsi)*1]), &(stack[((hsi*28+3440)*1+lsi)*1]), &(stack[((hsi*36+5362)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+109)*1+lsi)*1]),&(stack[((hsi*45+5488)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+81)*1+lsi)*1]),&(stack[((hsi*28+2753)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+5362)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5533)*1+lsi)*1]), &(stack[((hsi*36+5362)*1+lsi)*1]), &(stack[((hsi*28+2753)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+5533)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2725 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
