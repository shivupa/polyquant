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
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
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
void _sphemultipole_I_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4100)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4103)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4106)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*3+4100)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+4106)*1+lsi)*1]), &(stack[((hsi*3+4103)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4115)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4118)*1+lsi)*1]), &(stack[((hsi*3+4103)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+4115)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4124)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+4115)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4130)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*3+4100)*1+lsi)*1]), &(stack[((hsi*6+4124)*1+lsi)*1]), &(stack[((hsi*6+4118)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*3+4115)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4146)*1+lsi)*1]), &(stack[((hsi*6+4118)*1+lsi)*1]), &(stack[((hsi*3+4103)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4156)*1+lsi)*1]), &(stack[((hsi*6+4124)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4166)*1+lsi)*1]), &(stack[((hsi*10+4130)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*10+4156)*1+lsi)*1]), &(stack[((hsi*10+4146)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4181)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4184)*1+lsi)*1]), &(stack[((hsi*3+4181)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+4103)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4190)*1+lsi)*1]), &(stack[((hsi*6+4184)*1+lsi)*1]), &(stack[((hsi*3+4181)*1+lsi)*1]), &(stack[((hsi*6+4118)*1+lsi)*1]), &(stack[((hsi*6+4124)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4200)*1+lsi)*1]), &(stack[((hsi*10+4190)*1+lsi)*1]), &(stack[((hsi*6+4184)*1+lsi)*1]), &(stack[((hsi*10+4146)*1+lsi)*1]), &(stack[((hsi*10+4156)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4215)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4218)*1+lsi)*1]), &(stack[((hsi*3+4215)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+4181)*1+lsi)*1]), &(stack[((hsi*3+4100)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4224)*1+lsi)*1]), &(stack[((hsi*6+4218)*1+lsi)*1]), &(stack[((hsi*3+4215)*1+lsi)*1]), &(stack[((hsi*6+4184)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4234)*1+lsi)*1]), &(stack[((hsi*10+4224)*1+lsi)*1]), &(stack[((hsi*6+4218)*1+lsi)*1]), &(stack[((hsi*10+4190)*1+lsi)*1]), &(stack[((hsi*10+4130)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4249)*1+lsi)*1]), &(stack[((hsi*15+4234)*1+lsi)*1]), &(stack[((hsi*10+4224)*1+lsi)*1]), &(stack[((hsi*15+4200)*1+lsi)*1]), &(stack[((hsi*15+4166)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4270)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4273)*1+lsi)*1]), &(stack[((hsi*3+4270)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+4100)*1+lsi)*1]), &(stack[((hsi*3+4181)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4279)*1+lsi)*1]), &(stack[((hsi*6+4273)*1+lsi)*1]), &(stack[((hsi*3+4270)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*6+4184)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4289)*1+lsi)*1]), &(stack[((hsi*10+4279)*1+lsi)*1]), &(stack[((hsi*6+4273)*1+lsi)*1]), &(stack[((hsi*10+4130)*1+lsi)*1]), &(stack[((hsi*10+4190)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4304)*1+lsi)*1]), &(stack[((hsi*15+4289)*1+lsi)*1]), &(stack[((hsi*10+4279)*1+lsi)*1]), &(stack[((hsi*15+4166)*1+lsi)*1]), &(stack[((hsi*15+4200)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4325)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*3+4325)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+4270)*1+lsi)*1]), &(stack[((hsi*3+4215)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4334)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*3+4325)*1+lsi)*1]), &(stack[((hsi*6+4273)*1+lsi)*1]), &(stack[((hsi*6+4218)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4344)*1+lsi)*1]), &(stack[((hsi*10+4334)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*10+4279)*1+lsi)*1]), &(stack[((hsi*10+4224)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4359)*1+lsi)*1]), &(stack[((hsi*15+4344)*1+lsi)*1]), &(stack[((hsi*10+4334)*1+lsi)*1]), &(stack[((hsi*15+4289)*1+lsi)*1]), &(stack[((hsi*15+4234)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*21+4359)*1+lsi)*1]), &(stack[((hsi*15+4344)*1+lsi)*1]), &(stack[((hsi*21+4304)*1+lsi)*1]), &(stack[((hsi*21+4249)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4072)*1+lsi)*1]),&(stack[((hsi*28+4380)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4325)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*3+4115)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4335)*1+lsi)*1]), &(stack[((hsi*10+4146)*1+lsi)*1]), &(stack[((hsi*6+4118)*1+lsi)*1]), &(stack[((hsi*10+4325)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4408)*1+lsi)*1]), &(stack[((hsi*10+4156)*1+lsi)*1]), &(stack[((hsi*6+4124)*1+lsi)*1]), &(stack[((hsi*10+4325)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4423)*1+lsi)*1]), &(stack[((hsi*15+4166)*1+lsi)*1]), &(stack[((hsi*10+4130)*1+lsi)*1]), &(stack[((hsi*15+4408)*1+lsi)*1]), &(stack[((hsi*15+4335)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4444)*1+lsi)*1]), &(stack[((hsi*15+4200)*1+lsi)*1]), &(stack[((hsi*10+4190)*1+lsi)*1]), &(stack[((hsi*15+4335)*1+lsi)*1]), &(stack[((hsi*15+4408)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4465)*1+lsi)*1]), &(stack[((hsi*21+4249)*1+lsi)*1]), &(stack[((hsi*15+4234)*1+lsi)*1]), &(stack[((hsi*21+4444)*1+lsi)*1]), &(stack[((hsi*21+4423)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4493)*1+lsi)*1]), &(stack[((hsi*21+4304)*1+lsi)*1]), &(stack[((hsi*15+4289)*1+lsi)*1]), &(stack[((hsi*21+4423)*1+lsi)*1]), &(stack[((hsi*21+4444)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4521)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*21+4359)*1+lsi)*1]), &(stack[((hsi*28+4493)*1+lsi)*1]), &(stack[((hsi*28+4465)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4036)*1+lsi)*1]),&(stack[((hsi*36+4521)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4350)*1+lsi)*1]), &(stack[((hsi*10+4325)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4557)*1+lsi)*1]), &(stack[((hsi*15+4335)*1+lsi)*1]), &(stack[((hsi*10+4146)*1+lsi)*1]), &(stack[((hsi*15+4350)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4578)*1+lsi)*1]), &(stack[((hsi*15+4408)*1+lsi)*1]), &(stack[((hsi*10+4156)*1+lsi)*1]), &(stack[((hsi*15+4350)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4599)*1+lsi)*1]), &(stack[((hsi*21+4423)*1+lsi)*1]), &(stack[((hsi*15+4166)*1+lsi)*1]), &(stack[((hsi*21+4578)*1+lsi)*1]), &(stack[((hsi*21+4557)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4627)*1+lsi)*1]), &(stack[((hsi*21+4444)*1+lsi)*1]), &(stack[((hsi*15+4200)*1+lsi)*1]), &(stack[((hsi*21+4557)*1+lsi)*1]), &(stack[((hsi*21+4578)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4655)*1+lsi)*1]), &(stack[((hsi*28+4465)*1+lsi)*1]), &(stack[((hsi*21+4249)*1+lsi)*1]), &(stack[((hsi*28+4627)*1+lsi)*1]), &(stack[((hsi*28+4599)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4691)*1+lsi)*1]), &(stack[((hsi*28+4493)*1+lsi)*1]), &(stack[((hsi*21+4304)*1+lsi)*1]), &(stack[((hsi*28+4599)*1+lsi)*1]), &(stack[((hsi*28+4627)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4727)*1+lsi)*1]), &(stack[((hsi*36+4521)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*36+4691)*1+lsi)*1]), &(stack[((hsi*36+4655)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3991)*1+lsi)*1]),&(stack[((hsi*45+4727)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4772)*1+lsi)*1]), &(stack[((hsi*15+4350)*1+lsi)*1]), &(stack[((hsi*10+4325)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4793)*1+lsi)*1]), &(stack[((hsi*21+4557)*1+lsi)*1]), &(stack[((hsi*15+4335)*1+lsi)*1]), &(stack[((hsi*21+4772)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4821)*1+lsi)*1]), &(stack[((hsi*21+4578)*1+lsi)*1]), &(stack[((hsi*15+4408)*1+lsi)*1]), &(stack[((hsi*21+4772)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4849)*1+lsi)*1]), &(stack[((hsi*28+4599)*1+lsi)*1]), &(stack[((hsi*21+4423)*1+lsi)*1]), &(stack[((hsi*28+4821)*1+lsi)*1]), &(stack[((hsi*28+4793)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4885)*1+lsi)*1]), &(stack[((hsi*28+4627)*1+lsi)*1]), &(stack[((hsi*21+4444)*1+lsi)*1]), &(stack[((hsi*28+4793)*1+lsi)*1]), &(stack[((hsi*28+4821)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4921)*1+lsi)*1]), &(stack[((hsi*36+4655)*1+lsi)*1]), &(stack[((hsi*28+4465)*1+lsi)*1]), &(stack[((hsi*36+4885)*1+lsi)*1]), &(stack[((hsi*36+4849)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4966)*1+lsi)*1]), &(stack[((hsi*36+4691)*1+lsi)*1]), &(stack[((hsi*28+4493)*1+lsi)*1]), &(stack[((hsi*36+4849)*1+lsi)*1]), &(stack[((hsi*36+4885)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5011)*1+lsi)*1]), &(stack[((hsi*45+4727)*1+lsi)*1]), &(stack[((hsi*36+4521)*1+lsi)*1]), &(stack[((hsi*45+4966)*1+lsi)*1]), &(stack[((hsi*45+4921)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3936)*1+lsi)*1]),&(stack[((hsi*55+5011)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4365)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4368)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4371)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4374)*1+lsi)*1]), &(stack[((hsi*3+4365)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+4371)*1+lsi)*1]), &(stack[((hsi*3+4368)*1+lsi)*1]), &(stack[((hsi*3+4181)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5066)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5069)*1+lsi)*1]), &(stack[((hsi*3+4368)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+5066)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5075)*1+lsi)*1]), &(stack[((hsi*3+4371)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+5066)*1+lsi)*1]), &(stack[((hsi*3+4103)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5081)*1+lsi)*1]), &(stack[((hsi*6+4374)*1+lsi)*1]), &(stack[((hsi*3+4365)*1+lsi)*1]), &(stack[((hsi*6+5075)*1+lsi)*1]), &(stack[((hsi*6+5069)*1+lsi)*1]), &(stack[((hsi*6+4184)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+4115)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5097)*1+lsi)*1]), &(stack[((hsi*6+5069)*1+lsi)*1]), &(stack[((hsi*3+4368)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*6+4124)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5107)*1+lsi)*1]), &(stack[((hsi*6+5075)*1+lsi)*1]), &(stack[((hsi*3+4371)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*6+4118)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*10+5081)*1+lsi)*1]), &(stack[((hsi*6+4374)*1+lsi)*1]), &(stack[((hsi*10+5107)*1+lsi)*1]), &(stack[((hsi*10+5097)*1+lsi)*1]), &(stack[((hsi*10+4190)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5142)*1+lsi)*1]), &(stack[((hsi*10+5097)*1+lsi)*1]), &(stack[((hsi*6+5069)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*10+4156)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5157)*1+lsi)*1]), &(stack[((hsi*10+5107)*1+lsi)*1]), &(stack[((hsi*6+5075)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*10+4146)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5172)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*10+5081)*1+lsi)*1]), &(stack[((hsi*15+5157)*1+lsi)*1]), &(stack[((hsi*15+5142)*1+lsi)*1]), &(stack[((hsi*15+4200)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4115)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*3+4115)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+4368)*1+lsi)*1]), &(stack[((hsi*3+4371)*1+lsi)*1]), &(stack[((hsi*3+4100)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5193)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*3+4115)*1+lsi)*1]), &(stack[((hsi*6+5069)*1+lsi)*1]), &(stack[((hsi*6+5075)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5203)*1+lsi)*1]), &(stack[((hsi*10+5193)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*10+5097)*1+lsi)*1]), &(stack[((hsi*10+5107)*1+lsi)*1]), &(stack[((hsi*10+4130)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5218)*1+lsi)*1]), &(stack[((hsi*15+5203)*1+lsi)*1]), &(stack[((hsi*10+5193)*1+lsi)*1]), &(stack[((hsi*15+5142)*1+lsi)*1]), &(stack[((hsi*15+5157)*1+lsi)*1]), &(stack[((hsi*15+4166)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5239)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5242)*1+lsi)*1]), &(stack[((hsi*3+5239)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+4115)*1+lsi)*1]), &(stack[((hsi*3+4365)*1+lsi)*1]), &(stack[((hsi*3+4270)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5248)*1+lsi)*1]), &(stack[((hsi*6+5242)*1+lsi)*1]), &(stack[((hsi*3+5239)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*6+4374)*1+lsi)*1]), &(stack[((hsi*6+4273)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5258)*1+lsi)*1]), &(stack[((hsi*10+5248)*1+lsi)*1]), &(stack[((hsi*6+5242)*1+lsi)*1]), &(stack[((hsi*10+5193)*1+lsi)*1]), &(stack[((hsi*10+5081)*1+lsi)*1]), &(stack[((hsi*10+4279)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5273)*1+lsi)*1]), &(stack[((hsi*15+5258)*1+lsi)*1]), &(stack[((hsi*10+5248)*1+lsi)*1]), &(stack[((hsi*15+5203)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+4289)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5294)*1+lsi)*1]), &(stack[((hsi*21+5273)*1+lsi)*1]), &(stack[((hsi*15+5258)*1+lsi)*1]), &(stack[((hsi*21+5218)*1+lsi)*1]), &(stack[((hsi*21+5172)*1+lsi)*1]), &(stack[((hsi*21+4304)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3908)*1+lsi)*1]),&(stack[((hsi*28+5294)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*10+4325)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5322)*1+lsi)*1]), &(stack[((hsi*15+5142)*1+lsi)*1]), &(stack[((hsi*10+5097)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*15+4408)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5343)*1+lsi)*1]), &(stack[((hsi*15+5157)*1+lsi)*1]), &(stack[((hsi*10+5107)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*15+4335)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5364)*1+lsi)*1]), &(stack[((hsi*21+5172)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*21+5343)*1+lsi)*1]), &(stack[((hsi*21+5322)*1+lsi)*1]), &(stack[((hsi*21+4444)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5392)*1+lsi)*1]), &(stack[((hsi*21+5218)*1+lsi)*1]), &(stack[((hsi*15+5203)*1+lsi)*1]), &(stack[((hsi*21+5322)*1+lsi)*1]), &(stack[((hsi*21+5343)*1+lsi)*1]), &(stack[((hsi*21+4423)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5420)*1+lsi)*1]), &(stack[((hsi*28+5294)*1+lsi)*1]), &(stack[((hsi*21+5273)*1+lsi)*1]), &(stack[((hsi*28+5392)*1+lsi)*1]), &(stack[((hsi*28+5364)*1+lsi)*1]), &(stack[((hsi*28+4493)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3872)*1+lsi)*1]),&(stack[((hsi*36+5420)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5254)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*15+4350)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5456)*1+lsi)*1]), &(stack[((hsi*21+5322)*1+lsi)*1]), &(stack[((hsi*15+5142)*1+lsi)*1]), &(stack[((hsi*21+5254)*1+lsi)*1]), &(stack[((hsi*21+4578)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5484)*1+lsi)*1]), &(stack[((hsi*21+5343)*1+lsi)*1]), &(stack[((hsi*15+5157)*1+lsi)*1]), &(stack[((hsi*21+5254)*1+lsi)*1]), &(stack[((hsi*21+4557)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5512)*1+lsi)*1]), &(stack[((hsi*28+5364)*1+lsi)*1]), &(stack[((hsi*21+5172)*1+lsi)*1]), &(stack[((hsi*28+5484)*1+lsi)*1]), &(stack[((hsi*28+5456)*1+lsi)*1]), &(stack[((hsi*28+4627)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5548)*1+lsi)*1]), &(stack[((hsi*28+5392)*1+lsi)*1]), &(stack[((hsi*21+5218)*1+lsi)*1]), &(stack[((hsi*28+5456)*1+lsi)*1]), &(stack[((hsi*28+5484)*1+lsi)*1]), &(stack[((hsi*28+4599)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5584)*1+lsi)*1]), &(stack[((hsi*36+5420)*1+lsi)*1]), &(stack[((hsi*28+5294)*1+lsi)*1]), &(stack[((hsi*36+5548)*1+lsi)*1]), &(stack[((hsi*36+5512)*1+lsi)*1]), &(stack[((hsi*36+4691)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3827)*1+lsi)*1]),&(stack[((hsi*45+5584)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5629)*1+lsi)*1]), &(stack[((hsi*21+5254)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*21+4772)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5657)*1+lsi)*1]), &(stack[((hsi*28+5456)*1+lsi)*1]), &(stack[((hsi*21+5322)*1+lsi)*1]), &(stack[((hsi*28+5629)*1+lsi)*1]), &(stack[((hsi*28+4821)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5693)*1+lsi)*1]), &(stack[((hsi*28+5484)*1+lsi)*1]), &(stack[((hsi*21+5343)*1+lsi)*1]), &(stack[((hsi*28+5629)*1+lsi)*1]), &(stack[((hsi*28+4793)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5729)*1+lsi)*1]), &(stack[((hsi*36+5512)*1+lsi)*1]), &(stack[((hsi*28+5364)*1+lsi)*1]), &(stack[((hsi*36+5693)*1+lsi)*1]), &(stack[((hsi*36+5657)*1+lsi)*1]), &(stack[((hsi*36+4885)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5774)*1+lsi)*1]), &(stack[((hsi*36+5548)*1+lsi)*1]), &(stack[((hsi*28+5392)*1+lsi)*1]), &(stack[((hsi*36+5657)*1+lsi)*1]), &(stack[((hsi*36+5693)*1+lsi)*1]), &(stack[((hsi*36+4849)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5819)*1+lsi)*1]), &(stack[((hsi*45+5584)*1+lsi)*1]), &(stack[((hsi*36+5420)*1+lsi)*1]), &(stack[((hsi*45+5774)*1+lsi)*1]), &(stack[((hsi*45+5729)*1+lsi)*1]), &(stack[((hsi*45+4966)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3772)*1+lsi)*1]),&(stack[((hsi*55+5819)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5275)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5281)*1+lsi)*1]), &(stack[((hsi*3+5275)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+4181)*1+lsi)*1]), &(stack[((hsi*3+4100)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(stack[((hsi*3+4371)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+4106)*1+lsi)*1]), &(stack[((hsi*3+4103)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5874)*1+lsi)*1]), &(stack[((hsi*6+5281)*1+lsi)*1]), &(stack[((hsi*3+5275)*1+lsi)*1]), &(stack[((hsi*6+4184)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*6+5075)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(stack[((hsi*6+4124)*1+lsi)*1]), &(stack[((hsi*6+4118)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5894)*1+lsi)*1]), &(stack[((hsi*10+5874)*1+lsi)*1]), &(stack[((hsi*6+5281)*1+lsi)*1]), &(stack[((hsi*10+4190)*1+lsi)*1]), &(stack[((hsi*10+4130)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*10+5107)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*10+4156)*1+lsi)*1]), &(stack[((hsi*10+4146)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5924)*1+lsi)*1]), &(stack[((hsi*15+5894)*1+lsi)*1]), &(stack[((hsi*10+5874)*1+lsi)*1]), &(stack[((hsi*15+4200)*1+lsi)*1]), &(stack[((hsi*15+4166)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*15+5157)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5066)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+4100)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(stack[((hsi*3+4181)*1+lsi)*1]), &(stack[((hsi*3+4368)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*6+4184)*1+lsi)*1]), &(stack[((hsi*6+5069)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4100)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*10+4130)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*10+4190)*1+lsi)*1]), &(stack[((hsi*10+5097)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4118)*1+lsi)*1]), &(stack[((hsi*15+4100)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*15+4166)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*15+4200)*1+lsi)*1]), &(stack[((hsi*15+5142)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4146)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4149)*1+lsi)*1]), &(stack[((hsi*3+4146)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+4270)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]), &(stack[((hsi*3+4215)*1+lsi)*1]), &(stack[((hsi*3+5275)*1+lsi)*1]), &(stack[((hsi*3+4115)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4155)*1+lsi)*1]), &(stack[((hsi*6+4149)*1+lsi)*1]), &(stack[((hsi*3+4146)*1+lsi)*1]), &(stack[((hsi*6+4273)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*6+4218)*1+lsi)*1]), &(stack[((hsi*6+5281)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4165)*1+lsi)*1]), &(stack[((hsi*10+4155)*1+lsi)*1]), &(stack[((hsi*6+4149)*1+lsi)*1]), &(stack[((hsi*10+4279)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*10+4224)*1+lsi)*1]), &(stack[((hsi*10+5874)*1+lsi)*1]), &(stack[((hsi*10+5193)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4180)*1+lsi)*1]), &(stack[((hsi*15+4165)*1+lsi)*1]), &(stack[((hsi*10+4155)*1+lsi)*1]), &(stack[((hsi*15+4289)*1+lsi)*1]), &(stack[((hsi*15+4100)*1+lsi)*1]), &(stack[((hsi*15+4234)*1+lsi)*1]), &(stack[((hsi*15+5894)*1+lsi)*1]), &(stack[((hsi*15+5203)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5945)*1+lsi)*1]), &(stack[((hsi*21+4180)*1+lsi)*1]), &(stack[((hsi*15+4165)*1+lsi)*1]), &(stack[((hsi*21+4304)*1+lsi)*1]), &(stack[((hsi*21+4118)*1+lsi)*1]), &(stack[((hsi*21+4249)*1+lsi)*1]), &(stack[((hsi*21+5924)*1+lsi)*1]), &(stack[((hsi*21+5218)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3744)*1+lsi)*1]),&(stack[((hsi*28+5945)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*15+4408)*1+lsi)*1]), &(stack[((hsi*15+4335)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5973)*1+lsi)*1]), &(stack[((hsi*21+5924)*1+lsi)*1]), &(stack[((hsi*15+5894)*1+lsi)*1]), &(stack[((hsi*21+4444)*1+lsi)*1]), &(stack[((hsi*21+4423)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*21+5343)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6001)*1+lsi)*1]), &(stack[((hsi*21+4118)*1+lsi)*1]), &(stack[((hsi*15+4100)*1+lsi)*1]), &(stack[((hsi*21+4423)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*21+4444)*1+lsi)*1]), &(stack[((hsi*21+5322)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*28+5945)*1+lsi)*1]), &(stack[((hsi*21+4180)*1+lsi)*1]), &(stack[((hsi*28+4493)*1+lsi)*1]), &(stack[((hsi*28+6001)*1+lsi)*1]), &(stack[((hsi*28+4465)*1+lsi)*1]), &(stack[((hsi*28+5973)*1+lsi)*1]), &(stack[((hsi*28+5392)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3708)*1+lsi)*1]),&(stack[((hsi*36+4408)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4167)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*21+4578)*1+lsi)*1]), &(stack[((hsi*21+4557)*1+lsi)*1]), &(stack[((hsi*21+5254)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6029)*1+lsi)*1]), &(stack[((hsi*28+5973)*1+lsi)*1]), &(stack[((hsi*21+5924)*1+lsi)*1]), &(stack[((hsi*28+4627)*1+lsi)*1]), &(stack[((hsi*28+4599)*1+lsi)*1]), &(stack[((hsi*28+4167)*1+lsi)*1]), &(stack[((hsi*28+5484)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6065)*1+lsi)*1]), &(stack[((hsi*28+6001)*1+lsi)*1]), &(stack[((hsi*21+4118)*1+lsi)*1]), &(stack[((hsi*28+4599)*1+lsi)*1]), &(stack[((hsi*28+4167)*1+lsi)*1]), &(stack[((hsi*28+4627)*1+lsi)*1]), &(stack[((hsi*28+5456)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6101)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*28+5945)*1+lsi)*1]), &(stack[((hsi*36+4691)*1+lsi)*1]), &(stack[((hsi*36+6065)*1+lsi)*1]), &(stack[((hsi*36+4655)*1+lsi)*1]), &(stack[((hsi*36+6029)*1+lsi)*1]), &(stack[((hsi*36+5548)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3663)*1+lsi)*1]),&(stack[((hsi*45+6101)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6146)*1+lsi)*1]), &(stack[((hsi*28+4167)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*28+4821)*1+lsi)*1]), &(stack[((hsi*28+4793)*1+lsi)*1]), &(stack[((hsi*28+5629)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6182)*1+lsi)*1]), &(stack[((hsi*36+6029)*1+lsi)*1]), &(stack[((hsi*28+5973)*1+lsi)*1]), &(stack[((hsi*36+4885)*1+lsi)*1]), &(stack[((hsi*36+4849)*1+lsi)*1]), &(stack[((hsi*36+6146)*1+lsi)*1]), &(stack[((hsi*36+5693)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6227)*1+lsi)*1]), &(stack[((hsi*36+6065)*1+lsi)*1]), &(stack[((hsi*28+6001)*1+lsi)*1]), &(stack[((hsi*36+4849)*1+lsi)*1]), &(stack[((hsi*36+6146)*1+lsi)*1]), &(stack[((hsi*36+4885)*1+lsi)*1]), &(stack[((hsi*36+5657)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6272)*1+lsi)*1]), &(stack[((hsi*45+6101)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*45+4966)*1+lsi)*1]), &(stack[((hsi*45+6227)*1+lsi)*1]), &(stack[((hsi*45+4921)*1+lsi)*1]), &(stack[((hsi*45+6182)*1+lsi)*1]), &(stack[((hsi*45+5774)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3608)*1+lsi)*1]),&(stack[((hsi*55+6272)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4444)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4195)*1+lsi)*1]), &(stack[((hsi*3+4444)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+4368)*1+lsi)*1]), &(stack[((hsi*3+4371)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4331)*1+lsi)*1]), &(stack[((hsi*6+4195)*1+lsi)*1]), &(stack[((hsi*3+4444)*1+lsi)*1]), &(stack[((hsi*6+5069)*1+lsi)*1]), &(stack[((hsi*6+5075)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+4331)*1+lsi)*1]), &(stack[((hsi*6+4195)*1+lsi)*1]), &(stack[((hsi*10+5097)*1+lsi)*1]), &(stack[((hsi*10+5107)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+4331)*1+lsi)*1]), &(stack[((hsi*15+5142)*1+lsi)*1]), &(stack[((hsi*15+5157)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+4115)*1+lsi)*1]), &(stack[((hsi*3+4444)*1+lsi)*1]), &(stack[((hsi*3+4365)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*6+4195)*1+lsi)*1]), &(stack[((hsi*6+4374)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*10+5193)*1+lsi)*1]), &(stack[((hsi*10+4331)*1+lsi)*1]), &(stack[((hsi*10+5081)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5142)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*15+5203)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+4100)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6348)*1+lsi)*1]), &(stack[((hsi*21+5142)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*21+5218)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*21+5172)*1+lsi)*1]), &(stack[((hsi*21+4118)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3580)*1+lsi)*1]),&(stack[((hsi*28+6348)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6376)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*21+5322)*1+lsi)*1]), &(stack[((hsi*21+5343)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5322)*1+lsi)*1]), &(stack[((hsi*28+6348)*1+lsi)*1]), &(stack[((hsi*21+5142)*1+lsi)*1]), &(stack[((hsi*28+5392)*1+lsi)*1]), &(stack[((hsi*28+6376)*1+lsi)*1]), &(stack[((hsi*28+5364)*1+lsi)*1]), &(stack[((hsi*28+6001)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3544)*1+lsi)*1]),&(stack[((hsi*36+5322)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6404)*1+lsi)*1]), &(stack[((hsi*28+6376)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*28+5456)*1+lsi)*1]), &(stack[((hsi*28+5484)*1+lsi)*1]), &(stack[((hsi*28+4167)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6440)*1+lsi)*1]), &(stack[((hsi*36+5322)*1+lsi)*1]), &(stack[((hsi*28+6348)*1+lsi)*1]), &(stack[((hsi*36+5548)*1+lsi)*1]), &(stack[((hsi*36+6404)*1+lsi)*1]), &(stack[((hsi*36+5512)*1+lsi)*1]), &(stack[((hsi*36+6065)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3499)*1+lsi)*1]),&(stack[((hsi*45+6440)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6485)*1+lsi)*1]), &(stack[((hsi*36+6404)*1+lsi)*1]), &(stack[((hsi*28+6376)*1+lsi)*1]), &(stack[((hsi*36+5657)*1+lsi)*1]), &(stack[((hsi*36+5693)*1+lsi)*1]), &(stack[((hsi*36+6146)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6530)*1+lsi)*1]), &(stack[((hsi*45+6440)*1+lsi)*1]), &(stack[((hsi*36+5322)*1+lsi)*1]), &(stack[((hsi*45+5774)*1+lsi)*1]), &(stack[((hsi*45+6485)*1+lsi)*1]), &(stack[((hsi*45+5729)*1+lsi)*1]), &(stack[((hsi*45+6227)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3444)*1+lsi)*1]),&(stack[((hsi*55+6530)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+5066)*1+lsi)*1]), &(stack[((hsi*3+5275)*1+lsi)*1]), &(stack[((hsi*3+4444)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*6+5281)*1+lsi)*1]), &(stack[((hsi*6+4195)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*10+5874)*1+lsi)*1]), &(stack[((hsi*10+4331)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*15+4100)*1+lsi)*1]), &(stack[((hsi*15+5894)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5142)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*21+4118)*1+lsi)*1]), &(stack[((hsi*21+5924)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3416)*1+lsi)*1]),&(stack[((hsi*28+5142)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6585)*1+lsi)*1]), &(stack[((hsi*28+5142)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*28+6001)*1+lsi)*1]), &(stack[((hsi*28+5973)*1+lsi)*1]), &(stack[((hsi*28+6376)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3380)*1+lsi)*1]),&(stack[((hsi*36+6585)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6621)*1+lsi)*1]), &(stack[((hsi*36+6585)*1+lsi)*1]), &(stack[((hsi*28+5142)*1+lsi)*1]), &(stack[((hsi*36+6065)*1+lsi)*1]), &(stack[((hsi*36+6029)*1+lsi)*1]), &(stack[((hsi*36+6404)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3335)*1+lsi)*1]),&(stack[((hsi*45+6621)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6666)*1+lsi)*1]), &(stack[((hsi*45+6621)*1+lsi)*1]), &(stack[((hsi*36+6585)*1+lsi)*1]), &(stack[((hsi*45+6227)*1+lsi)*1]), &(stack[((hsi*45+6182)*1+lsi)*1]), &(stack[((hsi*45+6485)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3280)*1+lsi)*1]),&(stack[((hsi*55+6666)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+4365)*1+lsi)*1]), &(stack[((hsi*3+4115)*1+lsi)*1]), &(stack[((hsi*3+4444)*1+lsi)*1]), &(stack[((hsi*3+5275)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(stack[((hsi*6+4374)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*6+4195)*1+lsi)*1]), &(stack[((hsi*6+5281)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4325)*1+lsi)*1]), &(stack[((hsi*10+5081)*1+lsi)*1]), &(stack[((hsi*10+5193)*1+lsi)*1]), &(stack[((hsi*10+4331)*1+lsi)*1]), &(stack[((hsi*10+5874)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+5203)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*15+5894)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5909)*1+lsi)*1]), &(stack[((hsi*21+5172)*1+lsi)*1]), &(stack[((hsi*21+5218)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*21+5924)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3252)*1+lsi)*1]),&(stack[((hsi*28+6721)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6749)*1+lsi)*1]), &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*28+5364)*1+lsi)*1]), &(stack[((hsi*28+5392)*1+lsi)*1]), &(stack[((hsi*28+6376)*1+lsi)*1]), &(stack[((hsi*28+5973)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3216)*1+lsi)*1]),&(stack[((hsi*36+6749)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6785)*1+lsi)*1]), &(stack[((hsi*36+6749)*1+lsi)*1]), &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*36+5512)*1+lsi)*1]), &(stack[((hsi*36+5548)*1+lsi)*1]), &(stack[((hsi*36+6404)*1+lsi)*1]), &(stack[((hsi*36+6029)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3171)*1+lsi)*1]),&(stack[((hsi*45+6785)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6830)*1+lsi)*1]), &(stack[((hsi*45+6785)*1+lsi)*1]), &(stack[((hsi*36+6749)*1+lsi)*1]), &(stack[((hsi*45+5729)*1+lsi)*1]), &(stack[((hsi*45+5774)*1+lsi)*1]), &(stack[((hsi*45+6485)*1+lsi)*1]), &(stack[((hsi*45+6182)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3116)*1+lsi)*1]),&(stack[((hsi*55+6830)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4368)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+4215)*1+lsi)*1]), &(stack[((hsi*3+5275)*1+lsi)*1]), &(stack[((hsi*3+4270)*1+lsi)*1]), &(stack[((hsi*3+5066)*1+lsi)*1]), &(stack[((hsi*3+4365)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4368)*1+lsi)*1]), &(stack[((hsi*3+5278)*1+lsi)*1]), &(stack[((hsi*6+4218)*1+lsi)*1]), &(stack[((hsi*6+5281)*1+lsi)*1]), &(stack[((hsi*6+4273)*1+lsi)*1]), &(stack[((hsi*6+5091)*1+lsi)*1]), &(stack[((hsi*6+4374)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*6+4368)*1+lsi)*1]), &(stack[((hsi*10+4224)*1+lsi)*1]), &(stack[((hsi*10+5874)*1+lsi)*1]), &(stack[((hsi*10+4279)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*10+5081)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+5884)*1+lsi)*1]), &(stack[((hsi*15+4234)*1+lsi)*1]), &(stack[((hsi*15+5894)*1+lsi)*1]), &(stack[((hsi*15+4289)*1+lsi)*1]), &(stack[((hsi*15+4100)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5874)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*21+4249)*1+lsi)*1]), &(stack[((hsi*21+5924)*1+lsi)*1]), &(stack[((hsi*21+4304)*1+lsi)*1]), &(stack[((hsi*21+4118)*1+lsi)*1]), &(stack[((hsi*21+5172)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3088)*1+lsi)*1]),&(stack[((hsi*28+5874)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5902)*1+lsi)*1]), &(stack[((hsi*28+5874)*1+lsi)*1]), &(stack[((hsi*21+4146)*1+lsi)*1]), &(stack[((hsi*28+4465)*1+lsi)*1]), &(stack[((hsi*28+5973)*1+lsi)*1]), &(stack[((hsi*28+4493)*1+lsi)*1]), &(stack[((hsi*28+6001)*1+lsi)*1]), &(stack[((hsi*28+5364)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3052)*1+lsi)*1]),&(stack[((hsi*36+5902)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6885)*1+lsi)*1]), &(stack[((hsi*36+5902)*1+lsi)*1]), &(stack[((hsi*28+5874)*1+lsi)*1]), &(stack[((hsi*36+4655)*1+lsi)*1]), &(stack[((hsi*36+6029)*1+lsi)*1]), &(stack[((hsi*36+4691)*1+lsi)*1]), &(stack[((hsi*36+6065)*1+lsi)*1]), &(stack[((hsi*36+5512)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3007)*1+lsi)*1]),&(stack[((hsi*45+6885)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6930)*1+lsi)*1]), &(stack[((hsi*45+6885)*1+lsi)*1]), &(stack[((hsi*36+5902)*1+lsi)*1]), &(stack[((hsi*45+4921)*1+lsi)*1]), &(stack[((hsi*45+6182)*1+lsi)*1]), &(stack[((hsi*45+4966)*1+lsi)*1]), &(stack[((hsi*45+6227)*1+lsi)*1]), &(stack[((hsi*45+5729)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2952)*1+lsi)*1]),&(stack[((hsi*55+6930)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5091)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4368)*1+lsi)*1]), &(stack[((hsi*3+5091)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+4365)*1+lsi)*1]), &(stack[((hsi*3+4115)*1+lsi)*1]), &(stack[((hsi*3+4215)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*6+4368)*1+lsi)*1]), &(stack[((hsi*3+5091)*1+lsi)*1]), &(stack[((hsi*6+4374)*1+lsi)*1]), &(stack[((hsi*6+4140)*1+lsi)*1]), &(stack[((hsi*6+4218)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*6+4368)*1+lsi)*1]), &(stack[((hsi*10+5081)*1+lsi)*1]), &(stack[((hsi*10+5193)*1+lsi)*1]), &(stack[((hsi*10+4224)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*10+5132)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+5203)*1+lsi)*1]), &(stack[((hsi*15+4234)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*15+5239)*1+lsi)*1]), &(stack[((hsi*21+5172)*1+lsi)*1]), &(stack[((hsi*21+5218)*1+lsi)*1]), &(stack[((hsi*21+4249)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2924)*1+lsi)*1]),&(stack[((hsi*28+5066)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5170)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*28+5364)*1+lsi)*1]), &(stack[((hsi*28+5392)*1+lsi)*1]), &(stack[((hsi*28+4465)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2888)*1+lsi)*1]),&(stack[((hsi*36+5170)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4100)*1+lsi)*1]), &(stack[((hsi*36+5170)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*36+5512)*1+lsi)*1]), &(stack[((hsi*36+5548)*1+lsi)*1]), &(stack[((hsi*36+4655)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2843)*1+lsi)*1]),&(stack[((hsi*45+4100)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6985)*1+lsi)*1]), &(stack[((hsi*45+4100)*1+lsi)*1]), &(stack[((hsi*36+5170)*1+lsi)*1]), &(stack[((hsi*45+5729)*1+lsi)*1]), &(stack[((hsi*45+5774)*1+lsi)*1]), &(stack[((hsi*45+4921)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2788)*1+lsi)*1]),&(stack[((hsi*55+6985)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5094)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5358)*1+lsi)*1]), &(stack[((hsi*3+5094)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+4215)*1+lsi)*1]), &(stack[((hsi*3+4270)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5206)*1+lsi)*1]), &(stack[((hsi*6+5358)*1+lsi)*1]), &(stack[((hsi*3+5094)*1+lsi)*1]), &(stack[((hsi*6+4218)*1+lsi)*1]), &(stack[((hsi*6+4273)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4365)*1+lsi)*1]), &(stack[((hsi*10+5206)*1+lsi)*1]), &(stack[((hsi*6+5358)*1+lsi)*1]), &(stack[((hsi*10+4224)*1+lsi)*1]), &(stack[((hsi*10+4279)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*15+4365)*1+lsi)*1]), &(stack[((hsi*10+5206)*1+lsi)*1]), &(stack[((hsi*15+4234)*1+lsi)*1]), &(stack[((hsi*15+4289)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4195)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*15+4365)*1+lsi)*1]), &(stack[((hsi*21+4249)*1+lsi)*1]), &(stack[((hsi*21+4304)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2760)*1+lsi)*1]),&(stack[((hsi*28+4195)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4223)*1+lsi)*1]), &(stack[((hsi*28+4195)*1+lsi)*1]), &(stack[((hsi*21+6327)*1+lsi)*1]), &(stack[((hsi*28+4465)*1+lsi)*1]), &(stack[((hsi*28+4493)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2724)*1+lsi)*1]),&(stack[((hsi*36+4223)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4259)*1+lsi)*1]), &(stack[((hsi*36+4223)*1+lsi)*1]), &(stack[((hsi*28+4195)*1+lsi)*1]), &(stack[((hsi*36+4655)*1+lsi)*1]), &(stack[((hsi*36+4691)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2679)*1+lsi)*1]),&(stack[((hsi*45+4259)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7040)*1+lsi)*1]), &(stack[((hsi*45+4259)*1+lsi)*1]), &(stack[((hsi*36+4223)*1+lsi)*1]), &(stack[((hsi*45+4921)*1+lsi)*1]), &(stack[((hsi*45+4966)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2624)*1+lsi)*1]),&(stack[((hsi*55+7040)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2596)*1+lsi)*1]),&(stack[((hsi*28+4493)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2560)*1+lsi)*1]),&(stack[((hsi*36+4691)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2515)*1+lsi)*1]),&(stack[((hsi*45+4966)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5094)*1+lsi)*1]), &(stack[((hsi*21+4772)*1+lsi)*1]), &(stack[((hsi*15+4350)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4304)*1+lsi)*1]), &(stack[((hsi*28+4821)*1+lsi)*1]), &(stack[((hsi*21+4578)*1+lsi)*1]), &(stack[((hsi*28+5094)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5206)*1+lsi)*1]), &(stack[((hsi*28+4793)*1+lsi)*1]), &(stack[((hsi*21+4557)*1+lsi)*1]), &(stack[((hsi*28+5094)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7095)*1+lsi)*1]), &(stack[((hsi*36+4885)*1+lsi)*1]), &(stack[((hsi*28+4627)*1+lsi)*1]), &(stack[((hsi*36+5206)*1+lsi)*1]), &(stack[((hsi*36+4304)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7140)*1+lsi)*1]), &(stack[((hsi*36+4849)*1+lsi)*1]), &(stack[((hsi*28+4599)*1+lsi)*1]), &(stack[((hsi*36+4304)*1+lsi)*1]), &(stack[((hsi*36+5206)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7185)*1+lsi)*1]), &(stack[((hsi*45+4966)*1+lsi)*1]), &(stack[((hsi*36+4691)*1+lsi)*1]), &(stack[((hsi*45+7140)*1+lsi)*1]), &(stack[((hsi*45+7095)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2460)*1+lsi)*1]),&(stack[((hsi*55+7185)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2432)*1+lsi)*1]),&(stack[((hsi*28+5392)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2396)*1+lsi)*1]),&(stack[((hsi*36+5548)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2351)*1+lsi)*1]),&(stack[((hsi*45+5774)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4557)*1+lsi)*1]), &(stack[((hsi*28+5629)*1+lsi)*1]), &(stack[((hsi*21+5254)*1+lsi)*1]), &(stack[((hsi*28+5094)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5242)*1+lsi)*1]), &(stack[((hsi*36+5693)*1+lsi)*1]), &(stack[((hsi*28+5484)*1+lsi)*1]), &(stack[((hsi*36+4557)*1+lsi)*1]), &(stack[((hsi*36+5206)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7240)*1+lsi)*1]), &(stack[((hsi*36+5657)*1+lsi)*1]), &(stack[((hsi*28+5456)*1+lsi)*1]), &(stack[((hsi*36+4557)*1+lsi)*1]), &(stack[((hsi*36+4304)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7285)*1+lsi)*1]), &(stack[((hsi*45+5774)*1+lsi)*1]), &(stack[((hsi*36+5548)*1+lsi)*1]), &(stack[((hsi*45+7240)*1+lsi)*1]), &(stack[((hsi*45+5242)*1+lsi)*1]), &(stack[((hsi*45+7140)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2296)*1+lsi)*1]),&(stack[((hsi*55+7285)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2268)*1+lsi)*1]),&(stack[((hsi*28+6001)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2232)*1+lsi)*1]),&(stack[((hsi*36+6065)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2187)*1+lsi)*1]),&(stack[((hsi*45+6227)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7340)*1+lsi)*1]), &(stack[((hsi*36+6146)*1+lsi)*1]), &(stack[((hsi*28+4167)*1+lsi)*1]), &(stack[((hsi*36+4304)*1+lsi)*1]), &(stack[((hsi*36+5206)*1+lsi)*1]), &(stack[((hsi*36+4557)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7385)*1+lsi)*1]), &(stack[((hsi*45+6227)*1+lsi)*1]), &(stack[((hsi*36+6065)*1+lsi)*1]), &(stack[((hsi*45+7140)*1+lsi)*1]), &(stack[((hsi*45+7340)*1+lsi)*1]), &(stack[((hsi*45+7095)*1+lsi)*1]), &(stack[((hsi*45+7240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2132)*1+lsi)*1]),&(stack[((hsi*55+7385)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2104)*1+lsi)*1]),&(stack[((hsi*28+6376)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2068)*1+lsi)*1]),&(stack[((hsi*36+6404)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2023)*1+lsi)*1]),&(stack[((hsi*45+6485)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7440)*1+lsi)*1]), &(stack[((hsi*45+6485)*1+lsi)*1]), &(stack[((hsi*36+6404)*1+lsi)*1]), &(stack[((hsi*45+7240)*1+lsi)*1]), &(stack[((hsi*45+5242)*1+lsi)*1]), &(stack[((hsi*45+7340)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1968)*1+lsi)*1]),&(stack[((hsi*55+7440)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1940)*1+lsi)*1]),&(stack[((hsi*28+5973)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1904)*1+lsi)*1]),&(stack[((hsi*36+6029)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1859)*1+lsi)*1]),&(stack[((hsi*45+6182)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7495)*1+lsi)*1]), &(stack[((hsi*45+6182)*1+lsi)*1]), &(stack[((hsi*36+6029)*1+lsi)*1]), &(stack[((hsi*45+7095)*1+lsi)*1]), &(stack[((hsi*45+7140)*1+lsi)*1]), &(stack[((hsi*45+7340)*1+lsi)*1]), &(stack[((hsi*45+5242)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1804)*1+lsi)*1]),&(stack[((hsi*55+7495)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1776)*1+lsi)*1]),&(stack[((hsi*28+5364)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1740)*1+lsi)*1]),&(stack[((hsi*36+5512)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1695)*1+lsi)*1]),&(stack[((hsi*45+5729)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7550)*1+lsi)*1]), &(stack[((hsi*45+5729)*1+lsi)*1]), &(stack[((hsi*36+5512)*1+lsi)*1]), &(stack[((hsi*45+5242)*1+lsi)*1]), &(stack[((hsi*45+7240)*1+lsi)*1]), &(stack[((hsi*45+7095)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1640)*1+lsi)*1]),&(stack[((hsi*55+7550)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1612)*1+lsi)*1]),&(stack[((hsi*28+4465)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1576)*1+lsi)*1]),&(stack[((hsi*36+4655)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1531)*1+lsi)*1]),&(stack[((hsi*45+4921)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7605)*1+lsi)*1]), &(stack[((hsi*45+4921)*1+lsi)*1]), &(stack[((hsi*36+4655)*1+lsi)*1]), &(stack[((hsi*45+7095)*1+lsi)*1]), &(stack[((hsi*45+7140)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1476)*1+lsi)*1]),&(stack[((hsi*55+7605)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1448)*1+lsi)*1]),&(stack[((hsi*28+4599)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1412)*1+lsi)*1]),&(stack[((hsi*36+4849)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1367)*1+lsi)*1]),&(stack[((hsi*45+7140)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4340)*1+lsi)*1]), &(stack[((hsi*28+5094)*1+lsi)*1]), &(stack[((hsi*21+4772)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7660)*1+lsi)*1]), &(stack[((hsi*36+5206)*1+lsi)*1]), &(stack[((hsi*28+4793)*1+lsi)*1]), &(stack[((hsi*36+4340)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7705)*1+lsi)*1]), &(stack[((hsi*36+4304)*1+lsi)*1]), &(stack[((hsi*28+4821)*1+lsi)*1]), &(stack[((hsi*36+4340)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7750)*1+lsi)*1]), &(stack[((hsi*45+7140)*1+lsi)*1]), &(stack[((hsi*36+4849)*1+lsi)*1]), &(stack[((hsi*45+7705)*1+lsi)*1]), &(stack[((hsi*45+7660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1312)*1+lsi)*1]),&(stack[((hsi*55+7750)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1284)*1+lsi)*1]),&(stack[((hsi*28+5456)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1248)*1+lsi)*1]),&(stack[((hsi*36+5657)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1203)*1+lsi)*1]),&(stack[((hsi*45+7240)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7805)*1+lsi)*1]), &(stack[((hsi*36+4557)*1+lsi)*1]), &(stack[((hsi*28+5629)*1+lsi)*1]), &(stack[((hsi*36+4340)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7850)*1+lsi)*1]), &(stack[((hsi*45+7240)*1+lsi)*1]), &(stack[((hsi*36+5657)*1+lsi)*1]), &(stack[((hsi*45+7805)*1+lsi)*1]), &(stack[((hsi*45+7705)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1148)*1+lsi)*1]),&(stack[((hsi*55+7850)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1120)*1+lsi)*1]),&(stack[((hsi*28+4167)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1084)*1+lsi)*1]),&(stack[((hsi*36+6146)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1039)*1+lsi)*1]),&(stack[((hsi*45+7340)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7905)*1+lsi)*1]), &(stack[((hsi*45+7340)*1+lsi)*1]), &(stack[((hsi*36+6146)*1+lsi)*1]), &(stack[((hsi*45+7705)*1+lsi)*1]), &(stack[((hsi*45+7660)*1+lsi)*1]), &(stack[((hsi*45+7805)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+984)*1+lsi)*1]),&(stack[((hsi*55+7905)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+956)*1+lsi)*1]),&(stack[((hsi*28+5484)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+920)*1+lsi)*1]),&(stack[((hsi*36+5693)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+875)*1+lsi)*1]),&(stack[((hsi*45+5242)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7960)*1+lsi)*1]), &(stack[((hsi*45+5242)*1+lsi)*1]), &(stack[((hsi*36+5693)*1+lsi)*1]), &(stack[((hsi*45+7805)*1+lsi)*1]), &(stack[((hsi*45+7660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+820)*1+lsi)*1]),&(stack[((hsi*55+7960)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+792)*1+lsi)*1]),&(stack[((hsi*28+4627)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+756)*1+lsi)*1]),&(stack[((hsi*36+4885)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+711)*1+lsi)*1]),&(stack[((hsi*45+7095)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8015)*1+lsi)*1]), &(stack[((hsi*45+7095)*1+lsi)*1]), &(stack[((hsi*36+4885)*1+lsi)*1]), &(stack[((hsi*45+7660)*1+lsi)*1]), &(stack[((hsi*45+7705)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+656)*1+lsi)*1]),&(stack[((hsi*55+8015)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+628)*1+lsi)*1]),&(stack[((hsi*28+4821)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+592)*1+lsi)*1]),&(stack[((hsi*36+4304)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+547)*1+lsi)*1]),&(stack[((hsi*45+7705)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8070)*1+lsi)*1]), &(stack[((hsi*36+4340)*1+lsi)*1]), &(stack[((hsi*28+5094)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8115)*1+lsi)*1]), &(stack[((hsi*45+7705)*1+lsi)*1]), &(stack[((hsi*36+4304)*1+lsi)*1]), &(stack[((hsi*45+8070)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+492)*1+lsi)*1]),&(stack[((hsi*55+8115)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+464)*1+lsi)*1]),&(stack[((hsi*28+5629)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+428)*1+lsi)*1]),&(stack[((hsi*36+4557)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+383)*1+lsi)*1]),&(stack[((hsi*45+7805)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8170)*1+lsi)*1]), &(stack[((hsi*45+7805)*1+lsi)*1]), &(stack[((hsi*36+4557)*1+lsi)*1]), &(stack[((hsi*45+8070)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+328)*1+lsi)*1]),&(stack[((hsi*55+8170)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+300)*1+lsi)*1]),&(stack[((hsi*28+4793)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+264)*1+lsi)*1]),&(stack[((hsi*36+5206)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+219)*1+lsi)*1]),&(stack[((hsi*45+7660)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8225)*1+lsi)*1]), &(stack[((hsi*45+7660)*1+lsi)*1]), &(stack[((hsi*36+5206)*1+lsi)*1]), &(stack[((hsi*45+8070)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+164)*1+lsi)*1]),&(stack[((hsi*55+8225)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+136)*1+lsi)*1]),&(stack[((hsi*28+5094)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+100)*1+lsi)*1]),&(stack[((hsi*36+4340)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+55)*1+lsi)*1]),&(stack[((hsi*45+8070)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8280)*1+lsi)*1]), &(stack[((hsi*45+8070)*1+lsi)*1]), &(stack[((hsi*36+4340)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+8280)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4100 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
