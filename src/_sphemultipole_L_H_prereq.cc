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
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
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
void _sphemultipole_L_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11000)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11003)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11006)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11009)*1+lsi)*1]), &(stack[((hsi*3+11000)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+11006)*1+lsi)*1]), &(stack[((hsi*3+11003)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11015)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11018)*1+lsi)*1]), &(stack[((hsi*3+11003)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+11015)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11024)*1+lsi)*1]), &(stack[((hsi*3+11006)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+11015)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11030)*1+lsi)*1]), &(stack[((hsi*6+11009)*1+lsi)*1]), &(stack[((hsi*3+11000)*1+lsi)*1]), &(stack[((hsi*6+11024)*1+lsi)*1]), &(stack[((hsi*6+11018)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*3+11015)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11046)*1+lsi)*1]), &(stack[((hsi*6+11018)*1+lsi)*1]), &(stack[((hsi*3+11003)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11056)*1+lsi)*1]), &(stack[((hsi*6+11024)*1+lsi)*1]), &(stack[((hsi*3+11006)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11066)*1+lsi)*1]), &(stack[((hsi*10+11030)*1+lsi)*1]), &(stack[((hsi*6+11009)*1+lsi)*1]), &(stack[((hsi*10+11056)*1+lsi)*1]), &(stack[((hsi*10+11046)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*3+11015)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11091)*1+lsi)*1]), &(stack[((hsi*10+11046)*1+lsi)*1]), &(stack[((hsi*6+11018)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11106)*1+lsi)*1]), &(stack[((hsi*10+11056)*1+lsi)*1]), &(stack[((hsi*6+11024)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11121)*1+lsi)*1]), &(stack[((hsi*15+11066)*1+lsi)*1]), &(stack[((hsi*10+11030)*1+lsi)*1]), &(stack[((hsi*15+11106)*1+lsi)*1]), &(stack[((hsi*15+11091)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11157)*1+lsi)*1]), &(stack[((hsi*15+11091)*1+lsi)*1]), &(stack[((hsi*10+11046)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11178)*1+lsi)*1]), &(stack[((hsi*15+11106)*1+lsi)*1]), &(stack[((hsi*10+11056)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*21+11121)*1+lsi)*1]), &(stack[((hsi*15+11066)*1+lsi)*1]), &(stack[((hsi*21+11178)*1+lsi)*1]), &(stack[((hsi*21+11157)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11227)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11230)*1+lsi)*1]), &(stack[((hsi*3+11227)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+11003)*1+lsi)*1]), &(stack[((hsi*3+11006)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11236)*1+lsi)*1]), &(stack[((hsi*6+11230)*1+lsi)*1]), &(stack[((hsi*3+11227)*1+lsi)*1]), &(stack[((hsi*6+11018)*1+lsi)*1]), &(stack[((hsi*6+11024)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11246)*1+lsi)*1]), &(stack[((hsi*10+11236)*1+lsi)*1]), &(stack[((hsi*6+11230)*1+lsi)*1]), &(stack[((hsi*10+11046)*1+lsi)*1]), &(stack[((hsi*10+11056)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11261)*1+lsi)*1]), &(stack[((hsi*15+11246)*1+lsi)*1]), &(stack[((hsi*10+11236)*1+lsi)*1]), &(stack[((hsi*15+11091)*1+lsi)*1]), &(stack[((hsi*15+11106)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11282)*1+lsi)*1]), &(stack[((hsi*21+11261)*1+lsi)*1]), &(stack[((hsi*15+11246)*1+lsi)*1]), &(stack[((hsi*21+11157)*1+lsi)*1]), &(stack[((hsi*21+11178)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11310)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11313)*1+lsi)*1]), &(stack[((hsi*3+11310)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+11227)*1+lsi)*1]), &(stack[((hsi*3+11000)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11319)*1+lsi)*1]), &(stack[((hsi*6+11313)*1+lsi)*1]), &(stack[((hsi*3+11310)*1+lsi)*1]), &(stack[((hsi*6+11230)*1+lsi)*1]), &(stack[((hsi*6+11009)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11329)*1+lsi)*1]), &(stack[((hsi*10+11319)*1+lsi)*1]), &(stack[((hsi*6+11313)*1+lsi)*1]), &(stack[((hsi*10+11236)*1+lsi)*1]), &(stack[((hsi*10+11030)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11344)*1+lsi)*1]), &(stack[((hsi*15+11329)*1+lsi)*1]), &(stack[((hsi*10+11319)*1+lsi)*1]), &(stack[((hsi*15+11246)*1+lsi)*1]), &(stack[((hsi*15+11066)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11365)*1+lsi)*1]), &(stack[((hsi*21+11344)*1+lsi)*1]), &(stack[((hsi*15+11329)*1+lsi)*1]), &(stack[((hsi*21+11261)*1+lsi)*1]), &(stack[((hsi*21+11121)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11393)*1+lsi)*1]), &(stack[((hsi*28+11365)*1+lsi)*1]), &(stack[((hsi*21+11344)*1+lsi)*1]), &(stack[((hsi*28+11282)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11429)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11432)*1+lsi)*1]), &(stack[((hsi*3+11429)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+11000)*1+lsi)*1]), &(stack[((hsi*3+11227)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11438)*1+lsi)*1]), &(stack[((hsi*6+11432)*1+lsi)*1]), &(stack[((hsi*3+11429)*1+lsi)*1]), &(stack[((hsi*6+11009)*1+lsi)*1]), &(stack[((hsi*6+11230)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11448)*1+lsi)*1]), &(stack[((hsi*10+11438)*1+lsi)*1]), &(stack[((hsi*6+11432)*1+lsi)*1]), &(stack[((hsi*10+11030)*1+lsi)*1]), &(stack[((hsi*10+11236)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11463)*1+lsi)*1]), &(stack[((hsi*15+11448)*1+lsi)*1]), &(stack[((hsi*10+11438)*1+lsi)*1]), &(stack[((hsi*15+11066)*1+lsi)*1]), &(stack[((hsi*15+11246)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11484)*1+lsi)*1]), &(stack[((hsi*21+11463)*1+lsi)*1]), &(stack[((hsi*15+11448)*1+lsi)*1]), &(stack[((hsi*21+11121)*1+lsi)*1]), &(stack[((hsi*21+11261)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11512)*1+lsi)*1]), &(stack[((hsi*28+11484)*1+lsi)*1]), &(stack[((hsi*21+11463)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*28+11282)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11548)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11551)*1+lsi)*1]), &(stack[((hsi*3+11548)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+11429)*1+lsi)*1]), &(stack[((hsi*3+11310)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11557)*1+lsi)*1]), &(stack[((hsi*6+11551)*1+lsi)*1]), &(stack[((hsi*3+11548)*1+lsi)*1]), &(stack[((hsi*6+11432)*1+lsi)*1]), &(stack[((hsi*6+11313)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11567)*1+lsi)*1]), &(stack[((hsi*10+11557)*1+lsi)*1]), &(stack[((hsi*6+11551)*1+lsi)*1]), &(stack[((hsi*10+11438)*1+lsi)*1]), &(stack[((hsi*10+11319)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11582)*1+lsi)*1]), &(stack[((hsi*15+11567)*1+lsi)*1]), &(stack[((hsi*10+11557)*1+lsi)*1]), &(stack[((hsi*15+11448)*1+lsi)*1]), &(stack[((hsi*15+11329)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11603)*1+lsi)*1]), &(stack[((hsi*21+11582)*1+lsi)*1]), &(stack[((hsi*15+11567)*1+lsi)*1]), &(stack[((hsi*21+11463)*1+lsi)*1]), &(stack[((hsi*21+11344)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11631)*1+lsi)*1]), &(stack[((hsi*28+11603)*1+lsi)*1]), &(stack[((hsi*21+11582)*1+lsi)*1]), &(stack[((hsi*28+11484)*1+lsi)*1]), &(stack[((hsi*28+11365)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11548)*1+lsi)*1]), &(stack[((hsi*36+11631)*1+lsi)*1]), &(stack[((hsi*28+11603)*1+lsi)*1]), &(stack[((hsi*36+11512)*1+lsi)*1]), &(stack[((hsi*36+11393)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+10955)*1+lsi)*1]),&(stack[((hsi*45+11548)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11593)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11667)*1+lsi)*1]), &(stack[((hsi*21+11157)*1+lsi)*1]), &(stack[((hsi*15+11091)*1+lsi)*1]), &(stack[((hsi*21+11593)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11695)*1+lsi)*1]), &(stack[((hsi*21+11178)*1+lsi)*1]), &(stack[((hsi*15+11106)*1+lsi)*1]), &(stack[((hsi*21+11593)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11723)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*21+11121)*1+lsi)*1]), &(stack[((hsi*28+11695)*1+lsi)*1]), &(stack[((hsi*28+11667)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11759)*1+lsi)*1]), &(stack[((hsi*28+11282)*1+lsi)*1]), &(stack[((hsi*21+11261)*1+lsi)*1]), &(stack[((hsi*28+11667)*1+lsi)*1]), &(stack[((hsi*28+11695)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11795)*1+lsi)*1]), &(stack[((hsi*36+11393)*1+lsi)*1]), &(stack[((hsi*28+11365)*1+lsi)*1]), &(stack[((hsi*36+11759)*1+lsi)*1]), &(stack[((hsi*36+11723)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11840)*1+lsi)*1]), &(stack[((hsi*36+11512)*1+lsi)*1]), &(stack[((hsi*28+11484)*1+lsi)*1]), &(stack[((hsi*36+11723)*1+lsi)*1]), &(stack[((hsi*36+11759)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11885)*1+lsi)*1]), &(stack[((hsi*45+11548)*1+lsi)*1]), &(stack[((hsi*36+11631)*1+lsi)*1]), &(stack[((hsi*45+11840)*1+lsi)*1]), &(stack[((hsi*45+11795)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+10900)*1+lsi)*1]),&(stack[((hsi*55+11885)*1+lsi)*1]),55);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11614)*1+lsi)*1]), &(stack[((hsi*21+11593)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11940)*1+lsi)*1]), &(stack[((hsi*28+11667)*1+lsi)*1]), &(stack[((hsi*21+11157)*1+lsi)*1]), &(stack[((hsi*28+11614)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11976)*1+lsi)*1]), &(stack[((hsi*28+11695)*1+lsi)*1]), &(stack[((hsi*21+11178)*1+lsi)*1]), &(stack[((hsi*28+11614)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12012)*1+lsi)*1]), &(stack[((hsi*36+11723)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*36+11976)*1+lsi)*1]), &(stack[((hsi*36+11940)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12057)*1+lsi)*1]), &(stack[((hsi*36+11759)*1+lsi)*1]), &(stack[((hsi*28+11282)*1+lsi)*1]), &(stack[((hsi*36+11940)*1+lsi)*1]), &(stack[((hsi*36+11976)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12102)*1+lsi)*1]), &(stack[((hsi*45+11795)*1+lsi)*1]), &(stack[((hsi*36+11393)*1+lsi)*1]), &(stack[((hsi*45+12057)*1+lsi)*1]), &(stack[((hsi*45+12012)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12157)*1+lsi)*1]), &(stack[((hsi*45+11840)*1+lsi)*1]), &(stack[((hsi*36+11512)*1+lsi)*1]), &(stack[((hsi*45+12012)*1+lsi)*1]), &(stack[((hsi*45+12057)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12212)*1+lsi)*1]), &(stack[((hsi*55+11885)*1+lsi)*1]), &(stack[((hsi*45+11548)*1+lsi)*1]), &(stack[((hsi*55+12157)*1+lsi)*1]), &(stack[((hsi*55+12102)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+10834)*1+lsi)*1]),&(stack[((hsi*66+12212)*1+lsi)*1]),66);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12278)*1+lsi)*1]), &(stack[((hsi*28+11614)*1+lsi)*1]), &(stack[((hsi*21+11593)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12314)*1+lsi)*1]), &(stack[((hsi*36+11940)*1+lsi)*1]), &(stack[((hsi*28+11667)*1+lsi)*1]), &(stack[((hsi*36+12278)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12359)*1+lsi)*1]), &(stack[((hsi*36+11976)*1+lsi)*1]), &(stack[((hsi*28+11695)*1+lsi)*1]), &(stack[((hsi*36+12278)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12404)*1+lsi)*1]), &(stack[((hsi*45+12012)*1+lsi)*1]), &(stack[((hsi*36+11723)*1+lsi)*1]), &(stack[((hsi*45+12359)*1+lsi)*1]), &(stack[((hsi*45+12314)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12459)*1+lsi)*1]), &(stack[((hsi*45+12057)*1+lsi)*1]), &(stack[((hsi*36+11759)*1+lsi)*1]), &(stack[((hsi*45+12314)*1+lsi)*1]), &(stack[((hsi*45+12359)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12514)*1+lsi)*1]), &(stack[((hsi*55+12102)*1+lsi)*1]), &(stack[((hsi*45+11795)*1+lsi)*1]), &(stack[((hsi*55+12459)*1+lsi)*1]), &(stack[((hsi*55+12404)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12580)*1+lsi)*1]), &(stack[((hsi*55+12157)*1+lsi)*1]), &(stack[((hsi*45+11840)*1+lsi)*1]), &(stack[((hsi*55+12404)*1+lsi)*1]), &(stack[((hsi*55+12459)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12646)*1+lsi)*1]), &(stack[((hsi*66+12212)*1+lsi)*1]), &(stack[((hsi*55+11885)*1+lsi)*1]), &(stack[((hsi*66+12580)*1+lsi)*1]), &(stack[((hsi*66+12514)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+10756)*1+lsi)*1]),&(stack[((hsi*78+12646)*1+lsi)*1]),78);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12724)*1+lsi)*1]), &(stack[((hsi*36+12278)*1+lsi)*1]), &(stack[((hsi*28+11614)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12769)*1+lsi)*1]), &(stack[((hsi*45+12314)*1+lsi)*1]), &(stack[((hsi*36+11940)*1+lsi)*1]), &(stack[((hsi*45+12724)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12824)*1+lsi)*1]), &(stack[((hsi*45+12359)*1+lsi)*1]), &(stack[((hsi*36+11976)*1+lsi)*1]), &(stack[((hsi*45+12724)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12879)*1+lsi)*1]), &(stack[((hsi*55+12404)*1+lsi)*1]), &(stack[((hsi*45+12012)*1+lsi)*1]), &(stack[((hsi*55+12824)*1+lsi)*1]), &(stack[((hsi*55+12769)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12945)*1+lsi)*1]), &(stack[((hsi*55+12459)*1+lsi)*1]), &(stack[((hsi*45+12057)*1+lsi)*1]), &(stack[((hsi*55+12769)*1+lsi)*1]), &(stack[((hsi*55+12824)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13011)*1+lsi)*1]), &(stack[((hsi*66+12514)*1+lsi)*1]), &(stack[((hsi*55+12102)*1+lsi)*1]), &(stack[((hsi*66+12945)*1+lsi)*1]), &(stack[((hsi*66+12879)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13089)*1+lsi)*1]), &(stack[((hsi*66+12580)*1+lsi)*1]), &(stack[((hsi*55+12157)*1+lsi)*1]), &(stack[((hsi*66+12879)*1+lsi)*1]), &(stack[((hsi*66+12945)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+13167)*1+lsi)*1]), &(stack[((hsi*78+12646)*1+lsi)*1]), &(stack[((hsi*66+12212)*1+lsi)*1]), &(stack[((hsi*78+13089)*1+lsi)*1]), &(stack[((hsi*78+13011)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+10665)*1+lsi)*1]),&(stack[((hsi*91+13167)*1+lsi)*1]),91);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13258)*1+lsi)*1]), &(stack[((hsi*45+12724)*1+lsi)*1]), &(stack[((hsi*36+12278)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13313)*1+lsi)*1]), &(stack[((hsi*55+12769)*1+lsi)*1]), &(stack[((hsi*45+12314)*1+lsi)*1]), &(stack[((hsi*55+13258)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13379)*1+lsi)*1]), &(stack[((hsi*55+12824)*1+lsi)*1]), &(stack[((hsi*45+12359)*1+lsi)*1]), &(stack[((hsi*55+13258)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13445)*1+lsi)*1]), &(stack[((hsi*66+12879)*1+lsi)*1]), &(stack[((hsi*55+12404)*1+lsi)*1]), &(stack[((hsi*66+13379)*1+lsi)*1]), &(stack[((hsi*66+13313)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13523)*1+lsi)*1]), &(stack[((hsi*66+12945)*1+lsi)*1]), &(stack[((hsi*55+12459)*1+lsi)*1]), &(stack[((hsi*66+13313)*1+lsi)*1]), &(stack[((hsi*66+13379)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+13601)*1+lsi)*1]), &(stack[((hsi*78+13011)*1+lsi)*1]), &(stack[((hsi*66+12514)*1+lsi)*1]), &(stack[((hsi*78+13523)*1+lsi)*1]), &(stack[((hsi*78+13445)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+13692)*1+lsi)*1]), &(stack[((hsi*78+13089)*1+lsi)*1]), &(stack[((hsi*66+12580)*1+lsi)*1]), &(stack[((hsi*78+13445)*1+lsi)*1]), &(stack[((hsi*78+13523)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+13783)*1+lsi)*1]), &(stack[((hsi*91+13167)*1+lsi)*1]), &(stack[((hsi*78+12646)*1+lsi)*1]), &(stack[((hsi*91+13692)*1+lsi)*1]), &(stack[((hsi*91+13601)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+10560)*1+lsi)*1]),&(stack[((hsi*105+13783)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11642)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11645)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11648)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11651)*1+lsi)*1]), &(stack[((hsi*3+11642)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+11648)*1+lsi)*1]), &(stack[((hsi*3+11645)*1+lsi)*1]), &(stack[((hsi*3+11227)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11657)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+11645)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+11657)*1+lsi)*1]), &(stack[((hsi*3+11006)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*3+11648)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+11657)*1+lsi)*1]), &(stack[((hsi*3+11003)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+13894)*1+lsi)*1]), &(stack[((hsi*6+11651)*1+lsi)*1]), &(stack[((hsi*3+11642)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*6+11230)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+11015)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+13910)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+11645)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*6+11024)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+13920)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*3+11648)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*6+11018)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13930)*1+lsi)*1]), &(stack[((hsi*10+13894)*1+lsi)*1]), &(stack[((hsi*6+11651)*1+lsi)*1]), &(stack[((hsi*10+13920)*1+lsi)*1]), &(stack[((hsi*10+13910)*1+lsi)*1]), &(stack[((hsi*10+11236)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13955)*1+lsi)*1]), &(stack[((hsi*10+13910)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*10+11056)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13970)*1+lsi)*1]), &(stack[((hsi*10+13920)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*10+11046)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+13985)*1+lsi)*1]), &(stack[((hsi*15+13930)*1+lsi)*1]), &(stack[((hsi*10+13894)*1+lsi)*1]), &(stack[((hsi*15+13970)*1+lsi)*1]), &(stack[((hsi*15+13955)*1+lsi)*1]), &(stack[((hsi*15+11246)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14021)*1+lsi)*1]), &(stack[((hsi*15+13955)*1+lsi)*1]), &(stack[((hsi*10+13910)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*15+11106)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14042)*1+lsi)*1]), &(stack[((hsi*15+13970)*1+lsi)*1]), &(stack[((hsi*10+13920)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*15+11091)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14063)*1+lsi)*1]), &(stack[((hsi*21+13985)*1+lsi)*1]), &(stack[((hsi*15+13930)*1+lsi)*1]), &(stack[((hsi*21+14042)*1+lsi)*1]), &(stack[((hsi*21+14021)*1+lsi)*1]), &(stack[((hsi*21+11261)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14112)*1+lsi)*1]), &(stack[((hsi*21+14021)*1+lsi)*1]), &(stack[((hsi*15+13955)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*21+11178)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14140)*1+lsi)*1]), &(stack[((hsi*21+14042)*1+lsi)*1]), &(stack[((hsi*15+13970)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*21+11157)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14168)*1+lsi)*1]), &(stack[((hsi*28+14063)*1+lsi)*1]), &(stack[((hsi*21+13985)*1+lsi)*1]), &(stack[((hsi*28+14140)*1+lsi)*1]), &(stack[((hsi*28+14112)*1+lsi)*1]), &(stack[((hsi*28+11282)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11015)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*3+11015)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+11645)*1+lsi)*1]), &(stack[((hsi*3+11648)*1+lsi)*1]), &(stack[((hsi*3+11000)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*3+11015)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*6+11009)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*10+13910)*1+lsi)*1]), &(stack[((hsi*10+13920)*1+lsi)*1]), &(stack[((hsi*10+11030)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14204)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*15+13955)*1+lsi)*1]), &(stack[((hsi*15+13970)*1+lsi)*1]), &(stack[((hsi*15+11066)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14225)*1+lsi)*1]), &(stack[((hsi*21+14204)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*21+14021)*1+lsi)*1]), &(stack[((hsi*21+14042)*1+lsi)*1]), &(stack[((hsi*21+11121)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14253)*1+lsi)*1]), &(stack[((hsi*28+14225)*1+lsi)*1]), &(stack[((hsi*21+14204)*1+lsi)*1]), &(stack[((hsi*28+14112)*1+lsi)*1]), &(stack[((hsi*28+14140)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+14289)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+14292)*1+lsi)*1]), &(stack[((hsi*3+14289)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+11015)*1+lsi)*1]), &(stack[((hsi*3+11642)*1+lsi)*1]), &(stack[((hsi*3+11429)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+14298)*1+lsi)*1]), &(stack[((hsi*6+14292)*1+lsi)*1]), &(stack[((hsi*3+14289)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*6+11651)*1+lsi)*1]), &(stack[((hsi*6+11432)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14308)*1+lsi)*1]), &(stack[((hsi*10+14298)*1+lsi)*1]), &(stack[((hsi*6+14292)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*10+13894)*1+lsi)*1]), &(stack[((hsi*10+11438)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14323)*1+lsi)*1]), &(stack[((hsi*15+14308)*1+lsi)*1]), &(stack[((hsi*10+14298)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*15+13930)*1+lsi)*1]), &(stack[((hsi*15+11448)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14344)*1+lsi)*1]), &(stack[((hsi*21+14323)*1+lsi)*1]), &(stack[((hsi*15+14308)*1+lsi)*1]), &(stack[((hsi*21+14204)*1+lsi)*1]), &(stack[((hsi*21+13985)*1+lsi)*1]), &(stack[((hsi*21+11463)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14372)*1+lsi)*1]), &(stack[((hsi*28+14344)*1+lsi)*1]), &(stack[((hsi*21+14323)*1+lsi)*1]), &(stack[((hsi*28+14225)*1+lsi)*1]), &(stack[((hsi*28+14063)*1+lsi)*1]), &(stack[((hsi*28+11484)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14289)*1+lsi)*1]), &(stack[((hsi*36+14372)*1+lsi)*1]), &(stack[((hsi*28+14344)*1+lsi)*1]), &(stack[((hsi*36+14253)*1+lsi)*1]), &(stack[((hsi*36+14168)*1+lsi)*1]), &(stack[((hsi*36+11512)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+10515)*1+lsi)*1]),&(stack[((hsi*45+14289)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14334)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*21+11593)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14408)*1+lsi)*1]), &(stack[((hsi*28+14112)*1+lsi)*1]), &(stack[((hsi*21+14021)*1+lsi)*1]), &(stack[((hsi*28+14334)*1+lsi)*1]), &(stack[((hsi*28+11695)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14444)*1+lsi)*1]), &(stack[((hsi*28+14140)*1+lsi)*1]), &(stack[((hsi*21+14042)*1+lsi)*1]), &(stack[((hsi*28+14334)*1+lsi)*1]), &(stack[((hsi*28+11667)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14480)*1+lsi)*1]), &(stack[((hsi*36+14168)*1+lsi)*1]), &(stack[((hsi*28+14063)*1+lsi)*1]), &(stack[((hsi*36+14444)*1+lsi)*1]), &(stack[((hsi*36+14408)*1+lsi)*1]), &(stack[((hsi*36+11759)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14525)*1+lsi)*1]), &(stack[((hsi*36+14253)*1+lsi)*1]), &(stack[((hsi*28+14225)*1+lsi)*1]), &(stack[((hsi*36+14408)*1+lsi)*1]), &(stack[((hsi*36+14444)*1+lsi)*1]), &(stack[((hsi*36+11723)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14570)*1+lsi)*1]), &(stack[((hsi*45+14289)*1+lsi)*1]), &(stack[((hsi*36+14372)*1+lsi)*1]), &(stack[((hsi*45+14525)*1+lsi)*1]), &(stack[((hsi*45+14480)*1+lsi)*1]), &(stack[((hsi*45+11840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+10460)*1+lsi)*1]),&(stack[((hsi*55+14570)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14362)*1+lsi)*1]), &(stack[((hsi*28+14334)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*28+11614)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11593)*1+lsi)*1]), &(stack[((hsi*36+14408)*1+lsi)*1]), &(stack[((hsi*28+14112)*1+lsi)*1]), &(stack[((hsi*36+14362)*1+lsi)*1]), &(stack[((hsi*36+11976)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14625)*1+lsi)*1]), &(stack[((hsi*36+14444)*1+lsi)*1]), &(stack[((hsi*28+14140)*1+lsi)*1]), &(stack[((hsi*36+14362)*1+lsi)*1]), &(stack[((hsi*36+11940)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14670)*1+lsi)*1]), &(stack[((hsi*45+14480)*1+lsi)*1]), &(stack[((hsi*36+14168)*1+lsi)*1]), &(stack[((hsi*45+14625)*1+lsi)*1]), &(stack[((hsi*45+11593)*1+lsi)*1]), &(stack[((hsi*45+12057)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14725)*1+lsi)*1]), &(stack[((hsi*45+14525)*1+lsi)*1]), &(stack[((hsi*36+14253)*1+lsi)*1]), &(stack[((hsi*45+11593)*1+lsi)*1]), &(stack[((hsi*45+14625)*1+lsi)*1]), &(stack[((hsi*45+12012)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14780)*1+lsi)*1]), &(stack[((hsi*55+14570)*1+lsi)*1]), &(stack[((hsi*45+14289)*1+lsi)*1]), &(stack[((hsi*55+14725)*1+lsi)*1]), &(stack[((hsi*55+14670)*1+lsi)*1]), &(stack[((hsi*55+12157)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+10394)*1+lsi)*1]),&(stack[((hsi*66+14780)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14846)*1+lsi)*1]), &(stack[((hsi*36+14362)*1+lsi)*1]), &(stack[((hsi*28+14334)*1+lsi)*1]), &(stack[((hsi*36+12278)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14891)*1+lsi)*1]), &(stack[((hsi*45+11593)*1+lsi)*1]), &(stack[((hsi*36+14408)*1+lsi)*1]), &(stack[((hsi*45+14846)*1+lsi)*1]), &(stack[((hsi*45+12359)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14946)*1+lsi)*1]), &(stack[((hsi*45+14625)*1+lsi)*1]), &(stack[((hsi*36+14444)*1+lsi)*1]), &(stack[((hsi*45+14846)*1+lsi)*1]), &(stack[((hsi*45+12314)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15001)*1+lsi)*1]), &(stack[((hsi*55+14670)*1+lsi)*1]), &(stack[((hsi*45+14480)*1+lsi)*1]), &(stack[((hsi*55+14946)*1+lsi)*1]), &(stack[((hsi*55+14891)*1+lsi)*1]), &(stack[((hsi*55+12459)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15067)*1+lsi)*1]), &(stack[((hsi*55+14725)*1+lsi)*1]), &(stack[((hsi*45+14525)*1+lsi)*1]), &(stack[((hsi*55+14891)*1+lsi)*1]), &(stack[((hsi*55+14946)*1+lsi)*1]), &(stack[((hsi*55+12404)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15133)*1+lsi)*1]), &(stack[((hsi*66+14780)*1+lsi)*1]), &(stack[((hsi*55+14570)*1+lsi)*1]), &(stack[((hsi*66+15067)*1+lsi)*1]), &(stack[((hsi*66+15001)*1+lsi)*1]), &(stack[((hsi*66+12580)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+10316)*1+lsi)*1]),&(stack[((hsi*78+15133)*1+lsi)*1]),78);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+15211)*1+lsi)*1]), &(stack[((hsi*45+14846)*1+lsi)*1]), &(stack[((hsi*36+14362)*1+lsi)*1]), &(stack[((hsi*45+12724)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15266)*1+lsi)*1]), &(stack[((hsi*55+14891)*1+lsi)*1]), &(stack[((hsi*45+11593)*1+lsi)*1]), &(stack[((hsi*55+15211)*1+lsi)*1]), &(stack[((hsi*55+12824)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15332)*1+lsi)*1]), &(stack[((hsi*55+14946)*1+lsi)*1]), &(stack[((hsi*45+14625)*1+lsi)*1]), &(stack[((hsi*55+15211)*1+lsi)*1]), &(stack[((hsi*55+12769)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15398)*1+lsi)*1]), &(stack[((hsi*66+15001)*1+lsi)*1]), &(stack[((hsi*55+14670)*1+lsi)*1]), &(stack[((hsi*66+15332)*1+lsi)*1]), &(stack[((hsi*66+15266)*1+lsi)*1]), &(stack[((hsi*66+12945)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15476)*1+lsi)*1]), &(stack[((hsi*66+15067)*1+lsi)*1]), &(stack[((hsi*55+14725)*1+lsi)*1]), &(stack[((hsi*66+15266)*1+lsi)*1]), &(stack[((hsi*66+15332)*1+lsi)*1]), &(stack[((hsi*66+12879)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15554)*1+lsi)*1]), &(stack[((hsi*78+15133)*1+lsi)*1]), &(stack[((hsi*66+14780)*1+lsi)*1]), &(stack[((hsi*78+15476)*1+lsi)*1]), &(stack[((hsi*78+15398)*1+lsi)*1]), &(stack[((hsi*78+13089)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+10225)*1+lsi)*1]),&(stack[((hsi*91+15554)*1+lsi)*1]),91);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15645)*1+lsi)*1]), &(stack[((hsi*55+15211)*1+lsi)*1]), &(stack[((hsi*45+14846)*1+lsi)*1]), &(stack[((hsi*55+13258)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15711)*1+lsi)*1]), &(stack[((hsi*66+15266)*1+lsi)*1]), &(stack[((hsi*55+14891)*1+lsi)*1]), &(stack[((hsi*66+15645)*1+lsi)*1]), &(stack[((hsi*66+13379)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15789)*1+lsi)*1]), &(stack[((hsi*66+15332)*1+lsi)*1]), &(stack[((hsi*55+14946)*1+lsi)*1]), &(stack[((hsi*66+15645)*1+lsi)*1]), &(stack[((hsi*66+13313)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15867)*1+lsi)*1]), &(stack[((hsi*78+15398)*1+lsi)*1]), &(stack[((hsi*66+15001)*1+lsi)*1]), &(stack[((hsi*78+15789)*1+lsi)*1]), &(stack[((hsi*78+15711)*1+lsi)*1]), &(stack[((hsi*78+13523)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15958)*1+lsi)*1]), &(stack[((hsi*78+15476)*1+lsi)*1]), &(stack[((hsi*66+15067)*1+lsi)*1]), &(stack[((hsi*78+15711)*1+lsi)*1]), &(stack[((hsi*78+15789)*1+lsi)*1]), &(stack[((hsi*78+13445)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+16049)*1+lsi)*1]), &(stack[((hsi*91+15554)*1+lsi)*1]), &(stack[((hsi*78+15133)*1+lsi)*1]), &(stack[((hsi*91+15958)*1+lsi)*1]), &(stack[((hsi*91+15867)*1+lsi)*1]), &(stack[((hsi*91+13692)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+10120)*1+lsi)*1]),&(stack[((hsi*105+16049)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12278)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12284)*1+lsi)*1]), &(stack[((hsi*3+12278)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+11227)*1+lsi)*1]), &(stack[((hsi*3+11000)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(stack[((hsi*3+11648)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+11006)*1+lsi)*1]), &(stack[((hsi*3+11003)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+14398)*1+lsi)*1]), &(stack[((hsi*6+12284)*1+lsi)*1]), &(stack[((hsi*3+12278)*1+lsi)*1]), &(stack[((hsi*6+11230)*1+lsi)*1]), &(stack[((hsi*6+11009)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12296)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(stack[((hsi*6+11024)*1+lsi)*1]), &(stack[((hsi*6+11018)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+16154)*1+lsi)*1]), &(stack[((hsi*10+14398)*1+lsi)*1]), &(stack[((hsi*6+12284)*1+lsi)*1]), &(stack[((hsi*10+11236)*1+lsi)*1]), &(stack[((hsi*10+11030)*1+lsi)*1]), &(stack[((hsi*10+12296)*1+lsi)*1]), &(stack[((hsi*10+13920)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+12296)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*10+11056)*1+lsi)*1]), &(stack[((hsi*10+11046)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+16184)*1+lsi)*1]), &(stack[((hsi*15+16154)*1+lsi)*1]), &(stack[((hsi*10+14398)*1+lsi)*1]), &(stack[((hsi*15+11246)*1+lsi)*1]), &(stack[((hsi*15+11066)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*15+13970)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+12296)*1+lsi)*1]), &(stack[((hsi*15+11106)*1+lsi)*1]), &(stack[((hsi*15+11091)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11091)*1+lsi)*1]), &(stack[((hsi*21+16184)*1+lsi)*1]), &(stack[((hsi*15+16154)*1+lsi)*1]), &(stack[((hsi*21+11261)*1+lsi)*1]), &(stack[((hsi*21+11121)*1+lsi)*1]), &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*21+14042)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*21+11178)*1+lsi)*1]), &(stack[((hsi*21+11157)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11157)*1+lsi)*1]), &(stack[((hsi*28+11091)*1+lsi)*1]), &(stack[((hsi*21+16184)*1+lsi)*1]), &(stack[((hsi*28+11282)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*28+14140)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11657)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+11000)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(stack[((hsi*3+11227)*1+lsi)*1]), &(stack[((hsi*3+11645)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]), &(stack[((hsi*6+11009)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*6+11230)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*10+11030)*1+lsi)*1]), &(stack[((hsi*10+12296)*1+lsi)*1]), &(stack[((hsi*10+11236)*1+lsi)*1]), &(stack[((hsi*10+13910)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*15+11066)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*15+11246)*1+lsi)*1]), &(stack[((hsi*15+13955)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11046)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*21+11121)*1+lsi)*1]), &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*21+11261)*1+lsi)*1]), &(stack[((hsi*21+14021)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11227)*1+lsi)*1]), &(stack[((hsi*28+11046)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*28+11282)*1+lsi)*1]), &(stack[((hsi*28+14112)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11263)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11266)*1+lsi)*1]), &(stack[((hsi*3+11263)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+11429)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]), &(stack[((hsi*3+11310)*1+lsi)*1]), &(stack[((hsi*3+12278)*1+lsi)*1]), &(stack[((hsi*3+11015)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11272)*1+lsi)*1]), &(stack[((hsi*6+11266)*1+lsi)*1]), &(stack[((hsi*3+11263)*1+lsi)*1]), &(stack[((hsi*6+11432)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*6+11313)*1+lsi)*1]), &(stack[((hsi*6+12284)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*10+11272)*1+lsi)*1]), &(stack[((hsi*6+11266)*1+lsi)*1]), &(stack[((hsi*10+11438)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*10+11319)*1+lsi)*1]), &(stack[((hsi*10+14398)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11193)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*10+11272)*1+lsi)*1]), &(stack[((hsi*15+11448)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*15+11329)*1+lsi)*1]), &(stack[((hsi*15+16154)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11263)*1+lsi)*1]), &(stack[((hsi*21+11193)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*21+11463)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*21+11344)*1+lsi)*1]), &(stack[((hsi*21+16184)*1+lsi)*1]), &(stack[((hsi*21+14204)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+16254)*1+lsi)*1]), &(stack[((hsi*28+11263)*1+lsi)*1]), &(stack[((hsi*21+11193)*1+lsi)*1]), &(stack[((hsi*28+11484)*1+lsi)*1]), &(stack[((hsi*28+11046)*1+lsi)*1]), &(stack[((hsi*28+11365)*1+lsi)*1]), &(stack[((hsi*28+11091)*1+lsi)*1]), &(stack[((hsi*28+14225)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16290)*1+lsi)*1]), &(stack[((hsi*36+16254)*1+lsi)*1]), &(stack[((hsi*28+11263)*1+lsi)*1]), &(stack[((hsi*36+11512)*1+lsi)*1]), &(stack[((hsi*36+11227)*1+lsi)*1]), &(stack[((hsi*36+11393)*1+lsi)*1]), &(stack[((hsi*36+11157)*1+lsi)*1]), &(stack[((hsi*36+14253)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+10075)*1+lsi)*1]),&(stack[((hsi*45+16290)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11263)*1+lsi)*1]), &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*28+11695)*1+lsi)*1]), &(stack[((hsi*28+11667)*1+lsi)*1]), &(stack[((hsi*28+14334)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11666)*1+lsi)*1]), &(stack[((hsi*36+11157)*1+lsi)*1]), &(stack[((hsi*28+11091)*1+lsi)*1]), &(stack[((hsi*36+11759)*1+lsi)*1]), &(stack[((hsi*36+11723)*1+lsi)*1]), &(stack[((hsi*36+11263)*1+lsi)*1]), &(stack[((hsi*36+14444)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16335)*1+lsi)*1]), &(stack[((hsi*36+11227)*1+lsi)*1]), &(stack[((hsi*28+11046)*1+lsi)*1]), &(stack[((hsi*36+11723)*1+lsi)*1]), &(stack[((hsi*36+11263)*1+lsi)*1]), &(stack[((hsi*36+11759)*1+lsi)*1]), &(stack[((hsi*36+14408)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11711)*1+lsi)*1]), &(stack[((hsi*45+16290)*1+lsi)*1]), &(stack[((hsi*36+16254)*1+lsi)*1]), &(stack[((hsi*45+11840)*1+lsi)*1]), &(stack[((hsi*45+16335)*1+lsi)*1]), &(stack[((hsi*45+11795)*1+lsi)*1]), &(stack[((hsi*45+11666)*1+lsi)*1]), &(stack[((hsi*45+14525)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+10020)*1+lsi)*1]),&(stack[((hsi*55+11711)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16380)*1+lsi)*1]), &(stack[((hsi*36+11263)*1+lsi)*1]), &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*36+11976)*1+lsi)*1]), &(stack[((hsi*36+11940)*1+lsi)*1]), &(stack[((hsi*36+14362)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11940)*1+lsi)*1]), &(stack[((hsi*45+11666)*1+lsi)*1]), &(stack[((hsi*36+11157)*1+lsi)*1]), &(stack[((hsi*45+12057)*1+lsi)*1]), &(stack[((hsi*45+12012)*1+lsi)*1]), &(stack[((hsi*45+16380)*1+lsi)*1]), &(stack[((hsi*45+14625)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14334)*1+lsi)*1]), &(stack[((hsi*45+16335)*1+lsi)*1]), &(stack[((hsi*36+11227)*1+lsi)*1]), &(stack[((hsi*45+12012)*1+lsi)*1]), &(stack[((hsi*45+16380)*1+lsi)*1]), &(stack[((hsi*45+12057)*1+lsi)*1]), &(stack[((hsi*45+11593)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16425)*1+lsi)*1]), &(stack[((hsi*55+11711)*1+lsi)*1]), &(stack[((hsi*45+16290)*1+lsi)*1]), &(stack[((hsi*55+12157)*1+lsi)*1]), &(stack[((hsi*55+14334)*1+lsi)*1]), &(stack[((hsi*55+12102)*1+lsi)*1]), &(stack[((hsi*55+11940)*1+lsi)*1]), &(stack[((hsi*55+14725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+9954)*1+lsi)*1]),&(stack[((hsi*66+16425)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+16491)*1+lsi)*1]), &(stack[((hsi*45+16380)*1+lsi)*1]), &(stack[((hsi*36+11263)*1+lsi)*1]), &(stack[((hsi*45+12359)*1+lsi)*1]), &(stack[((hsi*45+12314)*1+lsi)*1]), &(stack[((hsi*45+14846)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16546)*1+lsi)*1]), &(stack[((hsi*55+11940)*1+lsi)*1]), &(stack[((hsi*45+11666)*1+lsi)*1]), &(stack[((hsi*55+12459)*1+lsi)*1]), &(stack[((hsi*55+12404)*1+lsi)*1]), &(stack[((hsi*55+16491)*1+lsi)*1]), &(stack[((hsi*55+14946)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16612)*1+lsi)*1]), &(stack[((hsi*55+14334)*1+lsi)*1]), &(stack[((hsi*45+16335)*1+lsi)*1]), &(stack[((hsi*55+12404)*1+lsi)*1]), &(stack[((hsi*55+16491)*1+lsi)*1]), &(stack[((hsi*55+12459)*1+lsi)*1]), &(stack[((hsi*55+14891)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16678)*1+lsi)*1]), &(stack[((hsi*66+16425)*1+lsi)*1]), &(stack[((hsi*55+11711)*1+lsi)*1]), &(stack[((hsi*66+12580)*1+lsi)*1]), &(stack[((hsi*66+16612)*1+lsi)*1]), &(stack[((hsi*66+12514)*1+lsi)*1]), &(stack[((hsi*66+16546)*1+lsi)*1]), &(stack[((hsi*66+15067)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+9876)*1+lsi)*1]),&(stack[((hsi*78+16678)*1+lsi)*1]),78);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16756)*1+lsi)*1]), &(stack[((hsi*55+16491)*1+lsi)*1]), &(stack[((hsi*45+16380)*1+lsi)*1]), &(stack[((hsi*55+12824)*1+lsi)*1]), &(stack[((hsi*55+12769)*1+lsi)*1]), &(stack[((hsi*55+15211)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16822)*1+lsi)*1]), &(stack[((hsi*66+16546)*1+lsi)*1]), &(stack[((hsi*55+11940)*1+lsi)*1]), &(stack[((hsi*66+12945)*1+lsi)*1]), &(stack[((hsi*66+12879)*1+lsi)*1]), &(stack[((hsi*66+16756)*1+lsi)*1]), &(stack[((hsi*66+15332)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16900)*1+lsi)*1]), &(stack[((hsi*66+16612)*1+lsi)*1]), &(stack[((hsi*55+14334)*1+lsi)*1]), &(stack[((hsi*66+12879)*1+lsi)*1]), &(stack[((hsi*66+16756)*1+lsi)*1]), &(stack[((hsi*66+12945)*1+lsi)*1]), &(stack[((hsi*66+15266)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+16978)*1+lsi)*1]), &(stack[((hsi*78+16678)*1+lsi)*1]), &(stack[((hsi*66+16425)*1+lsi)*1]), &(stack[((hsi*78+13089)*1+lsi)*1]), &(stack[((hsi*78+16900)*1+lsi)*1]), &(stack[((hsi*78+13011)*1+lsi)*1]), &(stack[((hsi*78+16822)*1+lsi)*1]), &(stack[((hsi*78+15476)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+9785)*1+lsi)*1]),&(stack[((hsi*91+16978)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17069)*1+lsi)*1]), &(stack[((hsi*66+16756)*1+lsi)*1]), &(stack[((hsi*55+16491)*1+lsi)*1]), &(stack[((hsi*66+13379)*1+lsi)*1]), &(stack[((hsi*66+13313)*1+lsi)*1]), &(stack[((hsi*66+15645)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17147)*1+lsi)*1]), &(stack[((hsi*78+16822)*1+lsi)*1]), &(stack[((hsi*66+16546)*1+lsi)*1]), &(stack[((hsi*78+13523)*1+lsi)*1]), &(stack[((hsi*78+13445)*1+lsi)*1]), &(stack[((hsi*78+17069)*1+lsi)*1]), &(stack[((hsi*78+15789)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17238)*1+lsi)*1]), &(stack[((hsi*78+16900)*1+lsi)*1]), &(stack[((hsi*66+16612)*1+lsi)*1]), &(stack[((hsi*78+13445)*1+lsi)*1]), &(stack[((hsi*78+17069)*1+lsi)*1]), &(stack[((hsi*78+13523)*1+lsi)*1]), &(stack[((hsi*78+15711)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+17329)*1+lsi)*1]), &(stack[((hsi*91+16978)*1+lsi)*1]), &(stack[((hsi*78+16678)*1+lsi)*1]), &(stack[((hsi*91+13692)*1+lsi)*1]), &(stack[((hsi*91+17238)*1+lsi)*1]), &(stack[((hsi*91+13601)*1+lsi)*1]), &(stack[((hsi*91+17147)*1+lsi)*1]), &(stack[((hsi*91+15958)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+9680)*1+lsi)*1]),&(stack[((hsi*105+17329)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+16254)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11193)*1+lsi)*1]), &(stack[((hsi*3+16254)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+11645)*1+lsi)*1]), &(stack[((hsi*3+11648)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+16257)*1+lsi)*1]), &(stack[((hsi*6+11193)*1+lsi)*1]), &(stack[((hsi*3+16254)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*10+16257)*1+lsi)*1]), &(stack[((hsi*6+11193)*1+lsi)*1]), &(stack[((hsi*10+13910)*1+lsi)*1]), &(stack[((hsi*10+13920)*1+lsi)*1]), &(stack[((hsi*10+12296)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11766)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*10+16257)*1+lsi)*1]), &(stack[((hsi*15+13955)*1+lsi)*1]), &(stack[((hsi*15+13970)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*21+11766)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*21+14021)*1+lsi)*1]), &(stack[((hsi*21+14042)*1+lsi)*1]), &(stack[((hsi*21+16205)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14021)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*21+11766)*1+lsi)*1]), &(stack[((hsi*28+14112)*1+lsi)*1]), &(stack[((hsi*28+14140)*1+lsi)*1]), &(stack[((hsi*28+16226)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+11015)*1+lsi)*1]), &(stack[((hsi*3+16254)*1+lsi)*1]), &(stack[((hsi*3+11642)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+14112)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*6+11193)*1+lsi)*1]), &(stack[((hsi*6+11651)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+14112)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*10+16257)*1+lsi)*1]), &(stack[((hsi*10+13894)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+14112)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*15+13930)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*21+14204)*1+lsi)*1]), &(stack[((hsi*21+11766)*1+lsi)*1]), &(stack[((hsi*21+13985)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14112)*1+lsi)*1]), &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*21+16205)*1+lsi)*1]), &(stack[((hsi*28+14225)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*28+14063)*1+lsi)*1]), &(stack[((hsi*28+11046)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+17434)*1+lsi)*1]), &(stack[((hsi*36+14112)*1+lsi)*1]), &(stack[((hsi*28+16226)*1+lsi)*1]), &(stack[((hsi*36+14253)*1+lsi)*1]), &(stack[((hsi*36+14021)*1+lsi)*1]), &(stack[((hsi*36+14168)*1+lsi)*1]), &(stack[((hsi*36+11227)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+9635)*1+lsi)*1]),&(stack[((hsi*45+17434)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16205)*1+lsi)*1]), &(stack[((hsi*36+14021)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*36+14408)*1+lsi)*1]), &(stack[((hsi*36+14444)*1+lsi)*1]), &(stack[((hsi*36+11263)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14408)*1+lsi)*1]), &(stack[((hsi*45+17434)*1+lsi)*1]), &(stack[((hsi*36+14112)*1+lsi)*1]), &(stack[((hsi*45+14525)*1+lsi)*1]), &(stack[((hsi*45+16205)*1+lsi)*1]), &(stack[((hsi*45+14480)*1+lsi)*1]), &(stack[((hsi*45+16335)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9580)*1+lsi)*1]),&(stack[((hsi*55+14408)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14112)*1+lsi)*1]), &(stack[((hsi*45+16205)*1+lsi)*1]), &(stack[((hsi*36+14021)*1+lsi)*1]), &(stack[((hsi*45+11593)*1+lsi)*1]), &(stack[((hsi*45+14625)*1+lsi)*1]), &(stack[((hsi*45+16380)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+17479)*1+lsi)*1]), &(stack[((hsi*55+14408)*1+lsi)*1]), &(stack[((hsi*45+17434)*1+lsi)*1]), &(stack[((hsi*55+14725)*1+lsi)*1]), &(stack[((hsi*55+14112)*1+lsi)*1]), &(stack[((hsi*55+14670)*1+lsi)*1]), &(stack[((hsi*55+14334)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+9514)*1+lsi)*1]),&(stack[((hsi*66+17479)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+17545)*1+lsi)*1]), &(stack[((hsi*55+14112)*1+lsi)*1]), &(stack[((hsi*45+16205)*1+lsi)*1]), &(stack[((hsi*55+14891)*1+lsi)*1]), &(stack[((hsi*55+14946)*1+lsi)*1]), &(stack[((hsi*55+16491)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17611)*1+lsi)*1]), &(stack[((hsi*66+17479)*1+lsi)*1]), &(stack[((hsi*55+14408)*1+lsi)*1]), &(stack[((hsi*66+15067)*1+lsi)*1]), &(stack[((hsi*66+17545)*1+lsi)*1]), &(stack[((hsi*66+15001)*1+lsi)*1]), &(stack[((hsi*66+16612)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+9436)*1+lsi)*1]),&(stack[((hsi*78+17611)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17689)*1+lsi)*1]), &(stack[((hsi*66+17545)*1+lsi)*1]), &(stack[((hsi*55+14112)*1+lsi)*1]), &(stack[((hsi*66+15266)*1+lsi)*1]), &(stack[((hsi*66+15332)*1+lsi)*1]), &(stack[((hsi*66+16756)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17767)*1+lsi)*1]), &(stack[((hsi*78+17611)*1+lsi)*1]), &(stack[((hsi*66+17479)*1+lsi)*1]), &(stack[((hsi*78+15476)*1+lsi)*1]), &(stack[((hsi*78+17689)*1+lsi)*1]), &(stack[((hsi*78+15398)*1+lsi)*1]), &(stack[((hsi*78+16900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+9345)*1+lsi)*1]),&(stack[((hsi*91+17767)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17858)*1+lsi)*1]), &(stack[((hsi*78+17689)*1+lsi)*1]), &(stack[((hsi*66+17545)*1+lsi)*1]), &(stack[((hsi*78+15711)*1+lsi)*1]), &(stack[((hsi*78+15789)*1+lsi)*1]), &(stack[((hsi*78+17069)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+17949)*1+lsi)*1]), &(stack[((hsi*91+17767)*1+lsi)*1]), &(stack[((hsi*78+17611)*1+lsi)*1]), &(stack[((hsi*91+15958)*1+lsi)*1]), &(stack[((hsi*91+17858)*1+lsi)*1]), &(stack[((hsi*91+15867)*1+lsi)*1]), &(stack[((hsi*91+17238)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+9240)*1+lsi)*1]),&(stack[((hsi*105+17949)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+11657)*1+lsi)*1]), &(stack[((hsi*3+12278)*1+lsi)*1]), &(stack[((hsi*3+16254)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11263)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*6+12284)*1+lsi)*1]), &(stack[((hsi*6+11193)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+11263)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*10+14398)*1+lsi)*1]), &(stack[((hsi*10+16257)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11273)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+11263)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*15+16154)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+13955)*1+lsi)*1]), &(stack[((hsi*21+11273)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*21+16184)*1+lsi)*1]), &(stack[((hsi*21+11766)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+18054)*1+lsi)*1]), &(stack[((hsi*28+13955)*1+lsi)*1]), &(stack[((hsi*21+11273)*1+lsi)*1]), &(stack[((hsi*28+11046)*1+lsi)*1]), &(stack[((hsi*28+11091)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11263)*1+lsi)*1]), &(stack[((hsi*36+18054)*1+lsi)*1]), &(stack[((hsi*28+13955)*1+lsi)*1]), &(stack[((hsi*36+11227)*1+lsi)*1]), &(stack[((hsi*36+11157)*1+lsi)*1]), &(stack[((hsi*36+14021)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+9195)*1+lsi)*1]),&(stack[((hsi*45+11263)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+18090)*1+lsi)*1]), &(stack[((hsi*45+11263)*1+lsi)*1]), &(stack[((hsi*36+18054)*1+lsi)*1]), &(stack[((hsi*45+16335)*1+lsi)*1]), &(stack[((hsi*45+11666)*1+lsi)*1]), &(stack[((hsi*45+16205)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9140)*1+lsi)*1]),&(stack[((hsi*55+18090)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+18145)*1+lsi)*1]), &(stack[((hsi*55+18090)*1+lsi)*1]), &(stack[((hsi*45+11263)*1+lsi)*1]), &(stack[((hsi*55+14334)*1+lsi)*1]), &(stack[((hsi*55+11940)*1+lsi)*1]), &(stack[((hsi*55+14112)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+9074)*1+lsi)*1]),&(stack[((hsi*66+18145)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+18211)*1+lsi)*1]), &(stack[((hsi*66+18145)*1+lsi)*1]), &(stack[((hsi*55+18090)*1+lsi)*1]), &(stack[((hsi*66+16612)*1+lsi)*1]), &(stack[((hsi*66+16546)*1+lsi)*1]), &(stack[((hsi*66+17545)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8996)*1+lsi)*1]),&(stack[((hsi*78+18211)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18289)*1+lsi)*1]), &(stack[((hsi*78+18211)*1+lsi)*1]), &(stack[((hsi*66+18145)*1+lsi)*1]), &(stack[((hsi*78+16900)*1+lsi)*1]), &(stack[((hsi*78+16822)*1+lsi)*1]), &(stack[((hsi*78+17689)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8905)*1+lsi)*1]),&(stack[((hsi*91+18289)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18380)*1+lsi)*1]), &(stack[((hsi*91+18289)*1+lsi)*1]), &(stack[((hsi*78+18211)*1+lsi)*1]), &(stack[((hsi*91+17238)*1+lsi)*1]), &(stack[((hsi*91+17147)*1+lsi)*1]), &(stack[((hsi*91+17858)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+8800)*1+lsi)*1]),&(stack[((hsi*105+18380)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+11642)*1+lsi)*1]), &(stack[((hsi*3+11015)*1+lsi)*1]), &(stack[((hsi*3+16254)*1+lsi)*1]), &(stack[((hsi*3+12278)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+18054)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(stack[((hsi*6+11651)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*6+11193)*1+lsi)*1]), &(stack[((hsi*6+12284)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+18054)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*10+13894)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*10+16257)*1+lsi)*1]), &(stack[((hsi*10+14398)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+16250)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+18054)*1+lsi)*1]), &(stack[((hsi*15+13930)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*15+16154)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+18054)*1+lsi)*1]), &(stack[((hsi*21+16250)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*21+13985)*1+lsi)*1]), &(stack[((hsi*21+14204)*1+lsi)*1]), &(stack[((hsi*21+11766)*1+lsi)*1]), &(stack[((hsi*21+16184)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+18054)*1+lsi)*1]), &(stack[((hsi*21+16250)*1+lsi)*1]), &(stack[((hsi*28+14063)*1+lsi)*1]), &(stack[((hsi*28+14225)*1+lsi)*1]), &(stack[((hsi*28+11199)*1+lsi)*1]), &(stack[((hsi*28+11091)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+18521)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+18054)*1+lsi)*1]), &(stack[((hsi*36+14168)*1+lsi)*1]), &(stack[((hsi*36+14253)*1+lsi)*1]), &(stack[((hsi*36+14021)*1+lsi)*1]), &(stack[((hsi*36+11157)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+8755)*1+lsi)*1]),&(stack[((hsi*45+18521)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+18566)*1+lsi)*1]), &(stack[((hsi*45+18521)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*45+14480)*1+lsi)*1]), &(stack[((hsi*45+14525)*1+lsi)*1]), &(stack[((hsi*45+16205)*1+lsi)*1]), &(stack[((hsi*45+11666)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+8700)*1+lsi)*1]),&(stack[((hsi*55+18566)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+18621)*1+lsi)*1]), &(stack[((hsi*55+18566)*1+lsi)*1]), &(stack[((hsi*45+18521)*1+lsi)*1]), &(stack[((hsi*55+14670)*1+lsi)*1]), &(stack[((hsi*55+14725)*1+lsi)*1]), &(stack[((hsi*55+14112)*1+lsi)*1]), &(stack[((hsi*55+11940)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8634)*1+lsi)*1]),&(stack[((hsi*66+18621)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+18687)*1+lsi)*1]), &(stack[((hsi*66+18621)*1+lsi)*1]), &(stack[((hsi*55+18566)*1+lsi)*1]), &(stack[((hsi*66+15001)*1+lsi)*1]), &(stack[((hsi*66+15067)*1+lsi)*1]), &(stack[((hsi*66+17545)*1+lsi)*1]), &(stack[((hsi*66+16546)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8556)*1+lsi)*1]),&(stack[((hsi*78+18687)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18765)*1+lsi)*1]), &(stack[((hsi*78+18687)*1+lsi)*1]), &(stack[((hsi*66+18621)*1+lsi)*1]), &(stack[((hsi*78+15398)*1+lsi)*1]), &(stack[((hsi*78+15476)*1+lsi)*1]), &(stack[((hsi*78+17689)*1+lsi)*1]), &(stack[((hsi*78+16822)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8465)*1+lsi)*1]),&(stack[((hsi*91+18765)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18856)*1+lsi)*1]), &(stack[((hsi*91+18765)*1+lsi)*1]), &(stack[((hsi*78+18687)*1+lsi)*1]), &(stack[((hsi*91+15867)*1+lsi)*1]), &(stack[((hsi*91+15958)*1+lsi)*1]), &(stack[((hsi*91+17858)*1+lsi)*1]), &(stack[((hsi*91+17147)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+8360)*1+lsi)*1]),&(stack[((hsi*105+18856)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+11310)*1+lsi)*1]), &(stack[((hsi*3+12278)*1+lsi)*1]), &(stack[((hsi*3+11429)*1+lsi)*1]), &(stack[((hsi*3+11657)*1+lsi)*1]), &(stack[((hsi*3+11642)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+14021)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*3+12281)*1+lsi)*1]), &(stack[((hsi*6+11313)*1+lsi)*1]), &(stack[((hsi*6+12284)*1+lsi)*1]), &(stack[((hsi*6+11432)*1+lsi)*1]), &(stack[((hsi*6+13904)*1+lsi)*1]), &(stack[((hsi*6+11651)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+14021)*1+lsi)*1]), &(stack[((hsi*6+11660)*1+lsi)*1]), &(stack[((hsi*10+11319)*1+lsi)*1]), &(stack[((hsi*10+14398)*1+lsi)*1]), &(stack[((hsi*10+11438)*1+lsi)*1]), &(stack[((hsi*10+13945)*1+lsi)*1]), &(stack[((hsi*10+13894)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+16250)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*10+14021)*1+lsi)*1]), &(stack[((hsi*15+11329)*1+lsi)*1]), &(stack[((hsi*15+16154)*1+lsi)*1]), &(stack[((hsi*15+11448)*1+lsi)*1]), &(stack[((hsi*15+14006)*1+lsi)*1]), &(stack[((hsi*15+13930)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14006)*1+lsi)*1]), &(stack[((hsi*21+16250)*1+lsi)*1]), &(stack[((hsi*15+16169)*1+lsi)*1]), &(stack[((hsi*21+11344)*1+lsi)*1]), &(stack[((hsi*21+16184)*1+lsi)*1]), &(stack[((hsi*21+11463)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*21+13985)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+14006)*1+lsi)*1]), &(stack[((hsi*21+16250)*1+lsi)*1]), &(stack[((hsi*28+11365)*1+lsi)*1]), &(stack[((hsi*28+11091)*1+lsi)*1]), &(stack[((hsi*28+11484)*1+lsi)*1]), &(stack[((hsi*28+11046)*1+lsi)*1]), &(stack[((hsi*28+14063)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16154)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+14006)*1+lsi)*1]), &(stack[((hsi*36+11393)*1+lsi)*1]), &(stack[((hsi*36+11157)*1+lsi)*1]), &(stack[((hsi*36+11512)*1+lsi)*1]), &(stack[((hsi*36+11227)*1+lsi)*1]), &(stack[((hsi*36+14168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+8315)*1+lsi)*1]),&(stack[((hsi*45+16154)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11157)*1+lsi)*1]), &(stack[((hsi*45+16154)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*45+11795)*1+lsi)*1]), &(stack[((hsi*45+11666)*1+lsi)*1]), &(stack[((hsi*45+11840)*1+lsi)*1]), &(stack[((hsi*45+16335)*1+lsi)*1]), &(stack[((hsi*45+14480)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+8260)*1+lsi)*1]),&(stack[((hsi*55+11157)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+18961)*1+lsi)*1]), &(stack[((hsi*55+11157)*1+lsi)*1]), &(stack[((hsi*45+16154)*1+lsi)*1]), &(stack[((hsi*55+12102)*1+lsi)*1]), &(stack[((hsi*55+11940)*1+lsi)*1]), &(stack[((hsi*55+12157)*1+lsi)*1]), &(stack[((hsi*55+14334)*1+lsi)*1]), &(stack[((hsi*55+14670)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8194)*1+lsi)*1]),&(stack[((hsi*66+18961)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19027)*1+lsi)*1]), &(stack[((hsi*66+18961)*1+lsi)*1]), &(stack[((hsi*55+11157)*1+lsi)*1]), &(stack[((hsi*66+12514)*1+lsi)*1]), &(stack[((hsi*66+16546)*1+lsi)*1]), &(stack[((hsi*66+12580)*1+lsi)*1]), &(stack[((hsi*66+16612)*1+lsi)*1]), &(stack[((hsi*66+15001)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8116)*1+lsi)*1]),&(stack[((hsi*78+19027)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19105)*1+lsi)*1]), &(stack[((hsi*78+19027)*1+lsi)*1]), &(stack[((hsi*66+18961)*1+lsi)*1]), &(stack[((hsi*78+13011)*1+lsi)*1]), &(stack[((hsi*78+16822)*1+lsi)*1]), &(stack[((hsi*78+13089)*1+lsi)*1]), &(stack[((hsi*78+16900)*1+lsi)*1]), &(stack[((hsi*78+15398)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8025)*1+lsi)*1]),&(stack[((hsi*91+19105)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19196)*1+lsi)*1]), &(stack[((hsi*91+19105)*1+lsi)*1]), &(stack[((hsi*78+19027)*1+lsi)*1]), &(stack[((hsi*91+13601)*1+lsi)*1]), &(stack[((hsi*91+17147)*1+lsi)*1]), &(stack[((hsi*91+13692)*1+lsi)*1]), &(stack[((hsi*91+17238)*1+lsi)*1]), &(stack[((hsi*91+15867)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+7920)*1+lsi)*1]),&(stack[((hsi*105+19196)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+14006)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*3+14006)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+11642)*1+lsi)*1]), &(stack[((hsi*3+11015)*1+lsi)*1]), &(stack[((hsi*3+11310)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+14009)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*3+14006)*1+lsi)*1]), &(stack[((hsi*6+11651)*1+lsi)*1]), &(stack[((hsi*6+11040)*1+lsi)*1]), &(stack[((hsi*6+11313)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*10+14009)*1+lsi)*1]), &(stack[((hsi*6+13888)*1+lsi)*1]), &(stack[((hsi*10+13894)*1+lsi)*1]), &(stack[((hsi*10+11081)*1+lsi)*1]), &(stack[((hsi*10+11319)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*10+14009)*1+lsi)*1]), &(stack[((hsi*15+13930)*1+lsi)*1]), &(stack[((hsi*15+11142)*1+lsi)*1]), &(stack[((hsi*15+11329)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11638)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*15+11000)*1+lsi)*1]), &(stack[((hsi*21+13985)*1+lsi)*1]), &(stack[((hsi*21+14204)*1+lsi)*1]), &(stack[((hsi*21+11344)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+11638)*1+lsi)*1]), &(stack[((hsi*21+14091)*1+lsi)*1]), &(stack[((hsi*28+14063)*1+lsi)*1]), &(stack[((hsi*28+14225)*1+lsi)*1]), &(stack[((hsi*28+11365)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13888)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+11638)*1+lsi)*1]), &(stack[((hsi*36+14168)*1+lsi)*1]), &(stack[((hsi*36+14253)*1+lsi)*1]), &(stack[((hsi*36+11393)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+7875)*1+lsi)*1]),&(stack[((hsi*45+13888)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13933)*1+lsi)*1]), &(stack[((hsi*45+13888)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*45+14480)*1+lsi)*1]), &(stack[((hsi*45+14525)*1+lsi)*1]), &(stack[((hsi*45+11795)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7820)*1+lsi)*1]),&(stack[((hsi*55+13933)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11000)*1+lsi)*1]), &(stack[((hsi*55+13933)*1+lsi)*1]), &(stack[((hsi*45+13888)*1+lsi)*1]), &(stack[((hsi*55+14670)*1+lsi)*1]), &(stack[((hsi*55+14725)*1+lsi)*1]), &(stack[((hsi*55+12102)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7754)*1+lsi)*1]),&(stack[((hsi*66+11000)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13988)*1+lsi)*1]), &(stack[((hsi*66+11000)*1+lsi)*1]), &(stack[((hsi*55+13933)*1+lsi)*1]), &(stack[((hsi*66+15001)*1+lsi)*1]), &(stack[((hsi*66+15067)*1+lsi)*1]), &(stack[((hsi*66+12514)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7676)*1+lsi)*1]),&(stack[((hsi*78+13988)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+11066)*1+lsi)*1]), &(stack[((hsi*78+13988)*1+lsi)*1]), &(stack[((hsi*66+11000)*1+lsi)*1]), &(stack[((hsi*78+15398)*1+lsi)*1]), &(stack[((hsi*78+15476)*1+lsi)*1]), &(stack[((hsi*78+13011)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+7585)*1+lsi)*1]),&(stack[((hsi*91+11066)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+14167)*1+lsi)*1]), &(stack[((hsi*91+11066)*1+lsi)*1]), &(stack[((hsi*78+13988)*1+lsi)*1]), &(stack[((hsi*91+15867)*1+lsi)*1]), &(stack[((hsi*91+15958)*1+lsi)*1]), &(stack[((hsi*91+13601)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+7480)*1+lsi)*1]),&(stack[((hsi*105+14167)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11212)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+16199)*1+lsi)*1]), &(stack[((hsi*3+11212)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+11310)*1+lsi)*1]), &(stack[((hsi*3+11429)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+11215)*1+lsi)*1]), &(stack[((hsi*6+16199)*1+lsi)*1]), &(stack[((hsi*3+11212)*1+lsi)*1]), &(stack[((hsi*6+11313)*1+lsi)*1]), &(stack[((hsi*6+11432)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14066)*1+lsi)*1]), &(stack[((hsi*10+11215)*1+lsi)*1]), &(stack[((hsi*6+16199)*1+lsi)*1]), &(stack[((hsi*10+11319)*1+lsi)*1]), &(stack[((hsi*10+11438)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11308)*1+lsi)*1]), &(stack[((hsi*15+14066)*1+lsi)*1]), &(stack[((hsi*10+11215)*1+lsi)*1]), &(stack[((hsi*15+11329)*1+lsi)*1]), &(stack[((hsi*15+11448)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11638)*1+lsi)*1]), &(stack[((hsi*21+11308)*1+lsi)*1]), &(stack[((hsi*15+14066)*1+lsi)*1]), &(stack[((hsi*21+11344)*1+lsi)*1]), &(stack[((hsi*21+11463)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+11638)*1+lsi)*1]), &(stack[((hsi*21+11308)*1+lsi)*1]), &(stack[((hsi*28+11365)*1+lsi)*1]), &(stack[((hsi*28+11484)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11308)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*28+11638)*1+lsi)*1]), &(stack[((hsi*36+11393)*1+lsi)*1]), &(stack[((hsi*36+11512)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+7435)*1+lsi)*1]),&(stack[((hsi*45+11308)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11353)*1+lsi)*1]), &(stack[((hsi*45+11308)*1+lsi)*1]), &(stack[((hsi*36+18485)*1+lsi)*1]), &(stack[((hsi*45+11795)*1+lsi)*1]), &(stack[((hsi*45+11840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7380)*1+lsi)*1]),&(stack[((hsi*55+11353)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11408)*1+lsi)*1]), &(stack[((hsi*55+11353)*1+lsi)*1]), &(stack[((hsi*45+11308)*1+lsi)*1]), &(stack[((hsi*55+12102)*1+lsi)*1]), &(stack[((hsi*55+12157)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7314)*1+lsi)*1]),&(stack[((hsi*66+11408)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19301)*1+lsi)*1]), &(stack[((hsi*66+11408)*1+lsi)*1]), &(stack[((hsi*55+11353)*1+lsi)*1]), &(stack[((hsi*66+12514)*1+lsi)*1]), &(stack[((hsi*66+12580)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7236)*1+lsi)*1]),&(stack[((hsi*78+19301)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19379)*1+lsi)*1]), &(stack[((hsi*78+19301)*1+lsi)*1]), &(stack[((hsi*66+11408)*1+lsi)*1]), &(stack[((hsi*78+13011)*1+lsi)*1]), &(stack[((hsi*78+13089)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+7145)*1+lsi)*1]),&(stack[((hsi*91+19379)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19470)*1+lsi)*1]), &(stack[((hsi*91+19379)*1+lsi)*1]), &(stack[((hsi*78+19301)*1+lsi)*1]), &(stack[((hsi*91+13601)*1+lsi)*1]), &(stack[((hsi*91+13692)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+7040)*1+lsi)*1]),&(stack[((hsi*105+19470)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6995)*1+lsi)*1]),&(stack[((hsi*45+11840)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6940)*1+lsi)*1]),&(stack[((hsi*55+12157)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6874)*1+lsi)*1]),&(stack[((hsi*66+12580)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6796)*1+lsi)*1]),&(stack[((hsi*78+13089)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+6705)*1+lsi)*1]),&(stack[((hsi*91+13692)*1+lsi)*1]),91);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11474)*1+lsi)*1]), &(stack[((hsi*55+13258)*1+lsi)*1]), &(stack[((hsi*45+12724)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19575)*1+lsi)*1]), &(stack[((hsi*66+13379)*1+lsi)*1]), &(stack[((hsi*55+12824)*1+lsi)*1]), &(stack[((hsi*66+11474)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19653)*1+lsi)*1]), &(stack[((hsi*66+13313)*1+lsi)*1]), &(stack[((hsi*55+12769)*1+lsi)*1]), &(stack[((hsi*66+11474)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19731)*1+lsi)*1]), &(stack[((hsi*78+13523)*1+lsi)*1]), &(stack[((hsi*66+12945)*1+lsi)*1]), &(stack[((hsi*78+19653)*1+lsi)*1]), &(stack[((hsi*78+19575)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19822)*1+lsi)*1]), &(stack[((hsi*78+13445)*1+lsi)*1]), &(stack[((hsi*66+12879)*1+lsi)*1]), &(stack[((hsi*78+19575)*1+lsi)*1]), &(stack[((hsi*78+19653)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19913)*1+lsi)*1]), &(stack[((hsi*91+13692)*1+lsi)*1]), &(stack[((hsi*78+13089)*1+lsi)*1]), &(stack[((hsi*91+19822)*1+lsi)*1]), &(stack[((hsi*91+19731)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+6600)*1+lsi)*1]),&(stack[((hsi*105+19913)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6555)*1+lsi)*1]),&(stack[((hsi*45+14525)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6500)*1+lsi)*1]),&(stack[((hsi*55+14725)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6434)*1+lsi)*1]),&(stack[((hsi*66+15067)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6356)*1+lsi)*1]),&(stack[((hsi*78+15476)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+6265)*1+lsi)*1]),&(stack[((hsi*91+15958)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+20018)*1+lsi)*1]), &(stack[((hsi*66+15645)*1+lsi)*1]), &(stack[((hsi*55+15211)*1+lsi)*1]), &(stack[((hsi*66+11474)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+20096)*1+lsi)*1]), &(stack[((hsi*78+15789)*1+lsi)*1]), &(stack[((hsi*66+15332)*1+lsi)*1]), &(stack[((hsi*78+20018)*1+lsi)*1]), &(stack[((hsi*78+19653)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+20187)*1+lsi)*1]), &(stack[((hsi*78+15711)*1+lsi)*1]), &(stack[((hsi*66+15266)*1+lsi)*1]), &(stack[((hsi*78+20018)*1+lsi)*1]), &(stack[((hsi*78+19575)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+20278)*1+lsi)*1]), &(stack[((hsi*91+15958)*1+lsi)*1]), &(stack[((hsi*78+15476)*1+lsi)*1]), &(stack[((hsi*91+20187)*1+lsi)*1]), &(stack[((hsi*91+20096)*1+lsi)*1]), &(stack[((hsi*91+19822)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+6160)*1+lsi)*1]),&(stack[((hsi*105+20278)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6115)*1+lsi)*1]),&(stack[((hsi*45+16335)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6060)*1+lsi)*1]),&(stack[((hsi*55+14334)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5994)*1+lsi)*1]),&(stack[((hsi*66+16612)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5916)*1+lsi)*1]),&(stack[((hsi*78+16900)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+5825)*1+lsi)*1]),&(stack[((hsi*91+17238)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+20383)*1+lsi)*1]), &(stack[((hsi*78+17069)*1+lsi)*1]), &(stack[((hsi*66+16756)*1+lsi)*1]), &(stack[((hsi*78+19575)*1+lsi)*1]), &(stack[((hsi*78+19653)*1+lsi)*1]), &(stack[((hsi*78+20018)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+20474)*1+lsi)*1]), &(stack[((hsi*91+17238)*1+lsi)*1]), &(stack[((hsi*78+16900)*1+lsi)*1]), &(stack[((hsi*91+19822)*1+lsi)*1]), &(stack[((hsi*91+20383)*1+lsi)*1]), &(stack[((hsi*91+19731)*1+lsi)*1]), &(stack[((hsi*91+20187)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+5720)*1+lsi)*1]),&(stack[((hsi*105+20474)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5675)*1+lsi)*1]),&(stack[((hsi*45+16205)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5620)*1+lsi)*1]),&(stack[((hsi*55+14112)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5554)*1+lsi)*1]),&(stack[((hsi*66+17545)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5476)*1+lsi)*1]),&(stack[((hsi*78+17689)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+5385)*1+lsi)*1]),&(stack[((hsi*91+17858)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+20579)*1+lsi)*1]), &(stack[((hsi*91+17858)*1+lsi)*1]), &(stack[((hsi*78+17689)*1+lsi)*1]), &(stack[((hsi*91+20187)*1+lsi)*1]), &(stack[((hsi*91+20096)*1+lsi)*1]), &(stack[((hsi*91+20383)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+5280)*1+lsi)*1]),&(stack[((hsi*105+20579)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5235)*1+lsi)*1]),&(stack[((hsi*45+11666)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5180)*1+lsi)*1]),&(stack[((hsi*55+11940)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5114)*1+lsi)*1]),&(stack[((hsi*66+16546)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5036)*1+lsi)*1]),&(stack[((hsi*78+16822)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4945)*1+lsi)*1]),&(stack[((hsi*91+17147)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+20684)*1+lsi)*1]), &(stack[((hsi*91+17147)*1+lsi)*1]), &(stack[((hsi*78+16822)*1+lsi)*1]), &(stack[((hsi*91+19731)*1+lsi)*1]), &(stack[((hsi*91+19822)*1+lsi)*1]), &(stack[((hsi*91+20383)*1+lsi)*1]), &(stack[((hsi*91+20096)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+4840)*1+lsi)*1]),&(stack[((hsi*105+20684)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4795)*1+lsi)*1]),&(stack[((hsi*45+14480)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4740)*1+lsi)*1]),&(stack[((hsi*55+14670)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4674)*1+lsi)*1]),&(stack[((hsi*66+15001)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4596)*1+lsi)*1]),&(stack[((hsi*78+15398)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4505)*1+lsi)*1]),&(stack[((hsi*91+15867)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+20789)*1+lsi)*1]), &(stack[((hsi*91+15867)*1+lsi)*1]), &(stack[((hsi*78+15398)*1+lsi)*1]), &(stack[((hsi*91+20096)*1+lsi)*1]), &(stack[((hsi*91+20187)*1+lsi)*1]), &(stack[((hsi*91+19731)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+4400)*1+lsi)*1]),&(stack[((hsi*105+20789)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4355)*1+lsi)*1]),&(stack[((hsi*45+11795)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4300)*1+lsi)*1]),&(stack[((hsi*55+12102)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4234)*1+lsi)*1]),&(stack[((hsi*66+12514)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4156)*1+lsi)*1]),&(stack[((hsi*78+13011)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4065)*1+lsi)*1]),&(stack[((hsi*91+13601)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+20894)*1+lsi)*1]), &(stack[((hsi*91+13601)*1+lsi)*1]), &(stack[((hsi*78+13011)*1+lsi)*1]), &(stack[((hsi*91+19731)*1+lsi)*1]), &(stack[((hsi*91+19822)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+3960)*1+lsi)*1]),&(stack[((hsi*105+20894)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3915)*1+lsi)*1]),&(stack[((hsi*45+12012)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3860)*1+lsi)*1]),&(stack[((hsi*55+12404)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3794)*1+lsi)*1]),&(stack[((hsi*66+12879)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3716)*1+lsi)*1]),&(stack[((hsi*78+13445)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+3625)*1+lsi)*1]),&(stack[((hsi*91+19822)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+20999)*1+lsi)*1]), &(stack[((hsi*66+11474)*1+lsi)*1]), &(stack[((hsi*55+13258)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+21077)*1+lsi)*1]), &(stack[((hsi*78+19653)*1+lsi)*1]), &(stack[((hsi*66+13313)*1+lsi)*1]), &(stack[((hsi*78+20999)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+21168)*1+lsi)*1]), &(stack[((hsi*78+19575)*1+lsi)*1]), &(stack[((hsi*66+13379)*1+lsi)*1]), &(stack[((hsi*78+20999)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+21259)*1+lsi)*1]), &(stack[((hsi*91+19822)*1+lsi)*1]), &(stack[((hsi*78+13445)*1+lsi)*1]), &(stack[((hsi*91+21168)*1+lsi)*1]), &(stack[((hsi*91+21077)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+3520)*1+lsi)*1]),&(stack[((hsi*105+21259)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3475)*1+lsi)*1]),&(stack[((hsi*45+11593)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3420)*1+lsi)*1]),&(stack[((hsi*55+14891)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3354)*1+lsi)*1]),&(stack[((hsi*66+15266)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3276)*1+lsi)*1]),&(stack[((hsi*78+15711)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+3185)*1+lsi)*1]),&(stack[((hsi*91+20187)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+21364)*1+lsi)*1]), &(stack[((hsi*78+20018)*1+lsi)*1]), &(stack[((hsi*66+15645)*1+lsi)*1]), &(stack[((hsi*78+20999)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+21455)*1+lsi)*1]), &(stack[((hsi*91+20187)*1+lsi)*1]), &(stack[((hsi*78+15711)*1+lsi)*1]), &(stack[((hsi*91+21364)*1+lsi)*1]), &(stack[((hsi*91+21168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+3080)*1+lsi)*1]),&(stack[((hsi*105+21455)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3035)*1+lsi)*1]),&(stack[((hsi*45+16380)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2980)*1+lsi)*1]),&(stack[((hsi*55+16491)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2914)*1+lsi)*1]),&(stack[((hsi*66+16756)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2836)*1+lsi)*1]),&(stack[((hsi*78+17069)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+2745)*1+lsi)*1]),&(stack[((hsi*91+20383)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+21560)*1+lsi)*1]), &(stack[((hsi*91+20383)*1+lsi)*1]), &(stack[((hsi*78+17069)*1+lsi)*1]), &(stack[((hsi*91+21168)*1+lsi)*1]), &(stack[((hsi*91+21077)*1+lsi)*1]), &(stack[((hsi*91+21364)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+2640)*1+lsi)*1]),&(stack[((hsi*105+21560)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2595)*1+lsi)*1]),&(stack[((hsi*45+14625)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2540)*1+lsi)*1]),&(stack[((hsi*55+14946)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2474)*1+lsi)*1]),&(stack[((hsi*66+15332)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2396)*1+lsi)*1]),&(stack[((hsi*78+15789)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+2305)*1+lsi)*1]),&(stack[((hsi*91+20096)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+21665)*1+lsi)*1]), &(stack[((hsi*91+20096)*1+lsi)*1]), &(stack[((hsi*78+15789)*1+lsi)*1]), &(stack[((hsi*91+21364)*1+lsi)*1]), &(stack[((hsi*91+21077)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+2200)*1+lsi)*1]),&(stack[((hsi*105+21665)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2155)*1+lsi)*1]),&(stack[((hsi*45+12057)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2100)*1+lsi)*1]),&(stack[((hsi*55+12459)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2034)*1+lsi)*1]),&(stack[((hsi*66+12945)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1956)*1+lsi)*1]),&(stack[((hsi*78+13523)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+1865)*1+lsi)*1]),&(stack[((hsi*91+19731)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+21770)*1+lsi)*1]), &(stack[((hsi*91+19731)*1+lsi)*1]), &(stack[((hsi*78+13523)*1+lsi)*1]), &(stack[((hsi*91+21077)*1+lsi)*1]), &(stack[((hsi*91+21168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+1760)*1+lsi)*1]),&(stack[((hsi*105+21770)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1715)*1+lsi)*1]),&(stack[((hsi*45+12359)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1660)*1+lsi)*1]),&(stack[((hsi*55+12824)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1594)*1+lsi)*1]),&(stack[((hsi*66+13379)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1516)*1+lsi)*1]),&(stack[((hsi*78+19575)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+1425)*1+lsi)*1]),&(stack[((hsi*91+21168)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+21875)*1+lsi)*1]), &(stack[((hsi*78+20999)*1+lsi)*1]), &(stack[((hsi*66+11474)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+21966)*1+lsi)*1]), &(stack[((hsi*91+21168)*1+lsi)*1]), &(stack[((hsi*78+19575)*1+lsi)*1]), &(stack[((hsi*91+21875)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+1320)*1+lsi)*1]),&(stack[((hsi*105+21966)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1275)*1+lsi)*1]),&(stack[((hsi*45+14846)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1220)*1+lsi)*1]),&(stack[((hsi*55+15211)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1154)*1+lsi)*1]),&(stack[((hsi*66+15645)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1076)*1+lsi)*1]),&(stack[((hsi*78+20018)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+985)*1+lsi)*1]),&(stack[((hsi*91+21364)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+22071)*1+lsi)*1]), &(stack[((hsi*91+21364)*1+lsi)*1]), &(stack[((hsi*78+20018)*1+lsi)*1]), &(stack[((hsi*91+21875)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+880)*1+lsi)*1]),&(stack[((hsi*105+22071)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+835)*1+lsi)*1]),&(stack[((hsi*45+12314)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+780)*1+lsi)*1]),&(stack[((hsi*55+12769)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+714)*1+lsi)*1]),&(stack[((hsi*66+13313)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+636)*1+lsi)*1]),&(stack[((hsi*78+19653)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+545)*1+lsi)*1]),&(stack[((hsi*91+21077)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+22176)*1+lsi)*1]), &(stack[((hsi*91+21077)*1+lsi)*1]), &(stack[((hsi*78+19653)*1+lsi)*1]), &(stack[((hsi*91+21875)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+440)*1+lsi)*1]),&(stack[((hsi*105+22176)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+395)*1+lsi)*1]),&(stack[((hsi*45+12724)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+340)*1+lsi)*1]),&(stack[((hsi*55+13258)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+274)*1+lsi)*1]),&(stack[((hsi*66+11474)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+196)*1+lsi)*1]),&(stack[((hsi*78+20999)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+105)*1+lsi)*1]),&(stack[((hsi*91+21875)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+22281)*1+lsi)*1]), &(stack[((hsi*91+21875)*1+lsi)*1]), &(stack[((hsi*78+20999)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+0)*1+lsi)*1]),&(stack[((hsi*105+22281)*1+lsi)*1]),105);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 11000 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
