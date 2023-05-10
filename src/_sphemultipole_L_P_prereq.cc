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
void _sphemultipole_L_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2503)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2506)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+2506)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2515)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+2515)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2524)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+2515)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2530)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+2524)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2546)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2556)*1+lsi)*1]), &(stack[((hsi*6+2524)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2566)*1+lsi)*1]), &(stack[((hsi*10+2530)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*10+2556)*1+lsi)*1]), &(stack[((hsi*10+2546)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2591)*1+lsi)*1]), &(stack[((hsi*10+2546)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2606)*1+lsi)*1]), &(stack[((hsi*10+2556)*1+lsi)*1]), &(stack[((hsi*6+2524)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2621)*1+lsi)*1]), &(stack[((hsi*15+2566)*1+lsi)*1]), &(stack[((hsi*10+2530)*1+lsi)*1]), &(stack[((hsi*15+2606)*1+lsi)*1]), &(stack[((hsi*15+2591)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2642)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2657)*1+lsi)*1]), &(stack[((hsi*15+2591)*1+lsi)*1]), &(stack[((hsi*10+2546)*1+lsi)*1]), &(stack[((hsi*15+2642)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2678)*1+lsi)*1]), &(stack[((hsi*15+2606)*1+lsi)*1]), &(stack[((hsi*10+2556)*1+lsi)*1]), &(stack[((hsi*15+2642)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2699)*1+lsi)*1]), &(stack[((hsi*21+2621)*1+lsi)*1]), &(stack[((hsi*15+2566)*1+lsi)*1]), &(stack[((hsi*21+2678)*1+lsi)*1]), &(stack[((hsi*21+2657)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2727)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2730)*1+lsi)*1]), &(stack[((hsi*3+2727)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+2503)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+2730)*1+lsi)*1]), &(stack[((hsi*3+2727)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*6+2524)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+2730)*1+lsi)*1]), &(stack[((hsi*10+2546)*1+lsi)*1]), &(stack[((hsi*10+2556)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2761)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*15+2591)*1+lsi)*1]), &(stack[((hsi*15+2606)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2782)*1+lsi)*1]), &(stack[((hsi*21+2761)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*21+2657)*1+lsi)*1]), &(stack[((hsi*21+2678)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2810)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2813)*1+lsi)*1]), &(stack[((hsi*3+2810)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+2727)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2819)*1+lsi)*1]), &(stack[((hsi*6+2813)*1+lsi)*1]), &(stack[((hsi*3+2810)*1+lsi)*1]), &(stack[((hsi*6+2730)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2829)*1+lsi)*1]), &(stack[((hsi*10+2819)*1+lsi)*1]), &(stack[((hsi*6+2813)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+2530)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2844)*1+lsi)*1]), &(stack[((hsi*15+2829)*1+lsi)*1]), &(stack[((hsi*10+2819)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*15+2566)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*21+2844)*1+lsi)*1]), &(stack[((hsi*15+2829)*1+lsi)*1]), &(stack[((hsi*21+2761)*1+lsi)*1]), &(stack[((hsi*21+2621)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*21+2844)*1+lsi)*1]), &(stack[((hsi*28+2782)*1+lsi)*1]), &(stack[((hsi*28+2699)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2929)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2932)*1+lsi)*1]), &(stack[((hsi*3+2929)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+2727)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2938)*1+lsi)*1]), &(stack[((hsi*6+2932)*1+lsi)*1]), &(stack[((hsi*3+2929)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+2730)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2948)*1+lsi)*1]), &(stack[((hsi*10+2938)*1+lsi)*1]), &(stack[((hsi*6+2932)*1+lsi)*1]), &(stack[((hsi*10+2530)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2963)*1+lsi)*1]), &(stack[((hsi*15+2948)*1+lsi)*1]), &(stack[((hsi*10+2938)*1+lsi)*1]), &(stack[((hsi*15+2566)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2984)*1+lsi)*1]), &(stack[((hsi*21+2963)*1+lsi)*1]), &(stack[((hsi*15+2948)*1+lsi)*1]), &(stack[((hsi*21+2621)*1+lsi)*1]), &(stack[((hsi*21+2761)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3012)*1+lsi)*1]), &(stack[((hsi*28+2984)*1+lsi)*1]), &(stack[((hsi*21+2963)*1+lsi)*1]), &(stack[((hsi*28+2699)*1+lsi)*1]), &(stack[((hsi*28+2782)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3048)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3051)*1+lsi)*1]), &(stack[((hsi*3+3048)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+2929)*1+lsi)*1]), &(stack[((hsi*3+2810)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+3051)*1+lsi)*1]), &(stack[((hsi*3+3048)*1+lsi)*1]), &(stack[((hsi*6+2932)*1+lsi)*1]), &(stack[((hsi*6+2813)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3067)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+3051)*1+lsi)*1]), &(stack[((hsi*10+2938)*1+lsi)*1]), &(stack[((hsi*10+2819)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3082)*1+lsi)*1]), &(stack[((hsi*15+3067)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*15+2948)*1+lsi)*1]), &(stack[((hsi*15+2829)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3103)*1+lsi)*1]), &(stack[((hsi*21+3082)*1+lsi)*1]), &(stack[((hsi*15+3067)*1+lsi)*1]), &(stack[((hsi*21+2963)*1+lsi)*1]), &(stack[((hsi*21+2844)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3131)*1+lsi)*1]), &(stack[((hsi*28+3103)*1+lsi)*1]), &(stack[((hsi*21+3082)*1+lsi)*1]), &(stack[((hsi*28+2984)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3048)*1+lsi)*1]), &(stack[((hsi*36+3131)*1+lsi)*1]), &(stack[((hsi*28+3103)*1+lsi)*1]), &(stack[((hsi*36+3012)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2455)*1+lsi)*1]),&(stack[((hsi*45+3048)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3093)*1+lsi)*1]), &(stack[((hsi*15+2642)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3167)*1+lsi)*1]), &(stack[((hsi*21+2657)*1+lsi)*1]), &(stack[((hsi*15+2591)*1+lsi)*1]), &(stack[((hsi*21+3093)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3195)*1+lsi)*1]), &(stack[((hsi*21+2678)*1+lsi)*1]), &(stack[((hsi*15+2606)*1+lsi)*1]), &(stack[((hsi*21+3093)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3223)*1+lsi)*1]), &(stack[((hsi*28+2699)*1+lsi)*1]), &(stack[((hsi*21+2621)*1+lsi)*1]), &(stack[((hsi*28+3195)*1+lsi)*1]), &(stack[((hsi*28+3167)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3259)*1+lsi)*1]), &(stack[((hsi*28+2782)*1+lsi)*1]), &(stack[((hsi*21+2761)*1+lsi)*1]), &(stack[((hsi*28+3167)*1+lsi)*1]), &(stack[((hsi*28+3195)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3295)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*36+3259)*1+lsi)*1]), &(stack[((hsi*36+3223)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3340)*1+lsi)*1]), &(stack[((hsi*36+3012)*1+lsi)*1]), &(stack[((hsi*28+2984)*1+lsi)*1]), &(stack[((hsi*36+3223)*1+lsi)*1]), &(stack[((hsi*36+3259)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3385)*1+lsi)*1]), &(stack[((hsi*45+3048)*1+lsi)*1]), &(stack[((hsi*36+3131)*1+lsi)*1]), &(stack[((hsi*45+3340)*1+lsi)*1]), &(stack[((hsi*45+3295)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2400)*1+lsi)*1]),&(stack[((hsi*55+3385)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3114)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3117)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3120)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3123)*1+lsi)*1]), &(stack[((hsi*3+3114)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+3120)*1+lsi)*1]), &(stack[((hsi*3+3117)*1+lsi)*1]), &(stack[((hsi*3+2727)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3129)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3132)*1+lsi)*1]), &(stack[((hsi*3+3117)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+3129)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3138)*1+lsi)*1]), &(stack[((hsi*3+3120)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+3129)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3144)*1+lsi)*1]), &(stack[((hsi*6+3123)*1+lsi)*1]), &(stack[((hsi*3+3114)*1+lsi)*1]), &(stack[((hsi*6+3138)*1+lsi)*1]), &(stack[((hsi*6+3132)*1+lsi)*1]), &(stack[((hsi*6+2730)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3154)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+2515)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3440)*1+lsi)*1]), &(stack[((hsi*6+3132)*1+lsi)*1]), &(stack[((hsi*3+3117)*1+lsi)*1]), &(stack[((hsi*6+3154)*1+lsi)*1]), &(stack[((hsi*6+2524)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3450)*1+lsi)*1]), &(stack[((hsi*6+3138)*1+lsi)*1]), &(stack[((hsi*3+3120)*1+lsi)*1]), &(stack[((hsi*6+3154)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3460)*1+lsi)*1]), &(stack[((hsi*10+3144)*1+lsi)*1]), &(stack[((hsi*6+3123)*1+lsi)*1]), &(stack[((hsi*10+3450)*1+lsi)*1]), &(stack[((hsi*10+3440)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*6+3154)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3485)*1+lsi)*1]), &(stack[((hsi*10+3440)*1+lsi)*1]), &(stack[((hsi*6+3132)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*10+2556)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3500)*1+lsi)*1]), &(stack[((hsi*10+3450)*1+lsi)*1]), &(stack[((hsi*6+3138)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*10+2546)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3515)*1+lsi)*1]), &(stack[((hsi*15+3460)*1+lsi)*1]), &(stack[((hsi*10+3144)*1+lsi)*1]), &(stack[((hsi*15+3500)*1+lsi)*1]), &(stack[((hsi*15+3485)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*6+3154)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3551)*1+lsi)*1]), &(stack[((hsi*15+3485)*1+lsi)*1]), &(stack[((hsi*10+3440)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*15+2606)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*15+3500)*1+lsi)*1]), &(stack[((hsi*10+3450)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*15+2591)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3593)*1+lsi)*1]), &(stack[((hsi*21+3515)*1+lsi)*1]), &(stack[((hsi*15+3460)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*21+3551)*1+lsi)*1]), &(stack[((hsi*21+2761)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3621)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*15+2642)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*21+3551)*1+lsi)*1]), &(stack[((hsi*15+3485)*1+lsi)*1]), &(stack[((hsi*21+3621)*1+lsi)*1]), &(stack[((hsi*21+2678)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*15+3500)*1+lsi)*1]), &(stack[((hsi*21+3621)*1+lsi)*1]), &(stack[((hsi*21+2657)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*28+3593)*1+lsi)*1]), &(stack[((hsi*21+3515)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*28+2782)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2515)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+3117)*1+lsi)*1]), &(stack[((hsi*3+3120)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*6+3132)*1+lsi)*1]), &(stack[((hsi*6+3138)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3734)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*10+3440)*1+lsi)*1]), &(stack[((hsi*10+3450)*1+lsi)*1]), &(stack[((hsi*10+2530)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3749)*1+lsi)*1]), &(stack[((hsi*15+3734)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*15+3485)*1+lsi)*1]), &(stack[((hsi*15+3500)*1+lsi)*1]), &(stack[((hsi*15+2566)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3770)*1+lsi)*1]), &(stack[((hsi*21+3749)*1+lsi)*1]), &(stack[((hsi*15+3734)*1+lsi)*1]), &(stack[((hsi*21+3551)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*21+2621)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3798)*1+lsi)*1]), &(stack[((hsi*28+3770)*1+lsi)*1]), &(stack[((hsi*21+3749)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*28+2699)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3160)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3834)*1+lsi)*1]), &(stack[((hsi*3+3160)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*3+3114)*1+lsi)*1]), &(stack[((hsi*3+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3840)*1+lsi)*1]), &(stack[((hsi*6+3834)*1+lsi)*1]), &(stack[((hsi*3+3160)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*6+3123)*1+lsi)*1]), &(stack[((hsi*6+2932)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3850)*1+lsi)*1]), &(stack[((hsi*10+3840)*1+lsi)*1]), &(stack[((hsi*6+3834)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*10+3144)*1+lsi)*1]), &(stack[((hsi*10+2938)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3865)*1+lsi)*1]), &(stack[((hsi*15+3850)*1+lsi)*1]), &(stack[((hsi*10+3840)*1+lsi)*1]), &(stack[((hsi*15+3734)*1+lsi)*1]), &(stack[((hsi*15+3460)*1+lsi)*1]), &(stack[((hsi*15+2948)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3886)*1+lsi)*1]), &(stack[((hsi*21+3865)*1+lsi)*1]), &(stack[((hsi*15+3850)*1+lsi)*1]), &(stack[((hsi*21+3749)*1+lsi)*1]), &(stack[((hsi*21+3515)*1+lsi)*1]), &(stack[((hsi*21+2963)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3914)*1+lsi)*1]), &(stack[((hsi*28+3886)*1+lsi)*1]), &(stack[((hsi*21+3865)*1+lsi)*1]), &(stack[((hsi*28+3770)*1+lsi)*1]), &(stack[((hsi*28+3593)*1+lsi)*1]), &(stack[((hsi*28+2984)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3834)*1+lsi)*1]), &(stack[((hsi*36+3914)*1+lsi)*1]), &(stack[((hsi*28+3886)*1+lsi)*1]), &(stack[((hsi*36+3798)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*36+3012)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2355)*1+lsi)*1]),&(stack[((hsi*45+3834)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3879)*1+lsi)*1]), &(stack[((hsi*21+3621)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*21+3093)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*21+3551)*1+lsi)*1]), &(stack[((hsi*28+3879)*1+lsi)*1]), &(stack[((hsi*28+3195)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3986)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*28+3879)*1+lsi)*1]), &(stack[((hsi*28+3167)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4022)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*28+3593)*1+lsi)*1]), &(stack[((hsi*36+3986)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*36+3259)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4067)*1+lsi)*1]), &(stack[((hsi*36+3798)*1+lsi)*1]), &(stack[((hsi*28+3770)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*36+3986)*1+lsi)*1]), &(stack[((hsi*36+3223)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4112)*1+lsi)*1]), &(stack[((hsi*45+3834)*1+lsi)*1]), &(stack[((hsi*36+3914)*1+lsi)*1]), &(stack[((hsi*45+4067)*1+lsi)*1]), &(stack[((hsi*45+4022)*1+lsi)*1]), &(stack[((hsi*45+3340)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2300)*1+lsi)*1]),&(stack[((hsi*55+4112)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3907)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3913)*1+lsi)*1]), &(stack[((hsi*3+3907)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+2727)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(stack[((hsi*3+3120)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+2506)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3925)*1+lsi)*1]), &(stack[((hsi*6+3913)*1+lsi)*1]), &(stack[((hsi*3+3907)*1+lsi)*1]), &(stack[((hsi*6+2730)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*6+3138)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3935)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(stack[((hsi*6+2524)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*6+3154)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4167)*1+lsi)*1]), &(stack[((hsi*10+3925)*1+lsi)*1]), &(stack[((hsi*6+3913)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+2530)*1+lsi)*1]), &(stack[((hsi*10+3935)*1+lsi)*1]), &(stack[((hsi*10+3450)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+3935)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*10+2556)*1+lsi)*1]), &(stack[((hsi*10+2546)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*15+4167)*1+lsi)*1]), &(stack[((hsi*10+3925)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*15+2566)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*15+3500)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+3935)*1+lsi)*1]), &(stack[((hsi*15+2606)*1+lsi)*1]), &(stack[((hsi*15+2591)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2591)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*15+4167)*1+lsi)*1]), &(stack[((hsi*21+2761)*1+lsi)*1]), &(stack[((hsi*21+2621)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*21+2678)*1+lsi)*1]), &(stack[((hsi*21+2657)*1+lsi)*1]), &(stack[((hsi*21+3621)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4267)*1+lsi)*1]), &(stack[((hsi*28+2591)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*28+2782)*1+lsi)*1]), &(stack[((hsi*28+2699)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3129)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(stack[((hsi*3+2727)*1+lsi)*1]), &(stack[((hsi*3+3117)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*6+2730)*1+lsi)*1]), &(stack[((hsi*6+3132)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*10+2530)*1+lsi)*1]), &(stack[((hsi*10+3935)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2518)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*15+2566)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*15+3485)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2546)*1+lsi)*1]), &(stack[((hsi*21+2518)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*21+2621)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*21+2761)*1+lsi)*1]), &(stack[((hsi*21+3551)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2727)*1+lsi)*1]), &(stack[((hsi*28+2546)*1+lsi)*1]), &(stack[((hsi*21+2518)*1+lsi)*1]), &(stack[((hsi*28+2699)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*28+2782)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+2929)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]), &(stack[((hsi*3+2810)*1+lsi)*1]), &(stack[((hsi*3+3907)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2619)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+2932)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*6+2813)*1+lsi)*1]), &(stack[((hsi*6+3913)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2763)*1+lsi)*1]), &(stack[((hsi*10+2619)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*10+2938)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*10+2819)*1+lsi)*1]), &(stack[((hsi*10+3925)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4303)*1+lsi)*1]), &(stack[((hsi*15+2763)*1+lsi)*1]), &(stack[((hsi*10+2619)*1+lsi)*1]), &(stack[((hsi*15+2948)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*15+2829)*1+lsi)*1]), &(stack[((hsi*15+4167)*1+lsi)*1]), &(stack[((hsi*15+3734)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4324)*1+lsi)*1]), &(stack[((hsi*21+4303)*1+lsi)*1]), &(stack[((hsi*15+2763)*1+lsi)*1]), &(stack[((hsi*21+2963)*1+lsi)*1]), &(stack[((hsi*21+2518)*1+lsi)*1]), &(stack[((hsi*21+2844)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*21+3749)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4352)*1+lsi)*1]), &(stack[((hsi*28+4324)*1+lsi)*1]), &(stack[((hsi*21+4303)*1+lsi)*1]), &(stack[((hsi*28+2984)*1+lsi)*1]), &(stack[((hsi*28+2546)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*28+2591)*1+lsi)*1]), &(stack[((hsi*28+3770)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4388)*1+lsi)*1]), &(stack[((hsi*36+4352)*1+lsi)*1]), &(stack[((hsi*28+4324)*1+lsi)*1]), &(stack[((hsi*36+3012)*1+lsi)*1]), &(stack[((hsi*36+2727)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*36+4267)*1+lsi)*1]), &(stack[((hsi*36+3798)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2255)*1+lsi)*1]),&(stack[((hsi*45+4388)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4303)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*28+3195)*1+lsi)*1]), &(stack[((hsi*28+3167)*1+lsi)*1]), &(stack[((hsi*28+3879)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4433)*1+lsi)*1]), &(stack[((hsi*36+4267)*1+lsi)*1]), &(stack[((hsi*28+2591)*1+lsi)*1]), &(stack[((hsi*36+3259)*1+lsi)*1]), &(stack[((hsi*36+3223)*1+lsi)*1]), &(stack[((hsi*36+4303)*1+lsi)*1]), &(stack[((hsi*36+3986)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4478)*1+lsi)*1]), &(stack[((hsi*36+2727)*1+lsi)*1]), &(stack[((hsi*28+2546)*1+lsi)*1]), &(stack[((hsi*36+3223)*1+lsi)*1]), &(stack[((hsi*36+4303)*1+lsi)*1]), &(stack[((hsi*36+3259)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4523)*1+lsi)*1]), &(stack[((hsi*45+4388)*1+lsi)*1]), &(stack[((hsi*36+4352)*1+lsi)*1]), &(stack[((hsi*45+3340)*1+lsi)*1]), &(stack[((hsi*45+4478)*1+lsi)*1]), &(stack[((hsi*45+3295)*1+lsi)*1]), &(stack[((hsi*45+4433)*1+lsi)*1]), &(stack[((hsi*45+4067)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2200)*1+lsi)*1]),&(stack[((hsi*55+4523)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+3117)*1+lsi)*1]), &(stack[((hsi*3+3120)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4339)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+3132)*1+lsi)*1]), &(stack[((hsi*6+3138)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4349)*1+lsi)*1]), &(stack[((hsi*10+4339)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*10+3440)*1+lsi)*1]), &(stack[((hsi*10+3450)*1+lsi)*1]), &(stack[((hsi*10+3935)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4364)*1+lsi)*1]), &(stack[((hsi*15+4349)*1+lsi)*1]), &(stack[((hsi*10+4339)*1+lsi)*1]), &(stack[((hsi*15+3485)*1+lsi)*1]), &(stack[((hsi*15+3500)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3485)*1+lsi)*1]), &(stack[((hsi*21+4364)*1+lsi)*1]), &(stack[((hsi*15+4349)*1+lsi)*1]), &(stack[((hsi*21+3551)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3551)*1+lsi)*1]), &(stack[((hsi*28+3485)*1+lsi)*1]), &(stack[((hsi*21+4364)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+3114)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2619)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+3123)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+2619)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*10+4339)*1+lsi)*1]), &(stack[((hsi*10+3144)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+2619)*1+lsi)*1]), &(stack[((hsi*15+3734)*1+lsi)*1]), &(stack[((hsi*15+4349)*1+lsi)*1]), &(stack[((hsi*15+3460)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*21+3749)*1+lsi)*1]), &(stack[((hsi*21+4364)*1+lsi)*1]), &(stack[((hsi*21+3515)*1+lsi)*1]), &(stack[((hsi*21+2518)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*28+3770)*1+lsi)*1]), &(stack[((hsi*28+3485)*1+lsi)*1]), &(stack[((hsi*28+3593)*1+lsi)*1]), &(stack[((hsi*28+2546)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4642)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*36+3798)*1+lsi)*1]), &(stack[((hsi*36+3551)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*36+2727)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2155)*1+lsi)*1]),&(stack[((hsi*45+4642)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4687)*1+lsi)*1]), &(stack[((hsi*36+3551)*1+lsi)*1]), &(stack[((hsi*28+3485)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*36+3986)*1+lsi)*1]), &(stack[((hsi*36+4303)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4732)*1+lsi)*1]), &(stack[((hsi*45+4642)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*45+4067)*1+lsi)*1]), &(stack[((hsi*45+4687)*1+lsi)*1]), &(stack[((hsi*45+4022)*1+lsi)*1]), &(stack[((hsi*45+4478)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2100)*1+lsi)*1]),&(stack[((hsi*55+4732)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+3129)*1+lsi)*1]), &(stack[((hsi*3+3907)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*6+3913)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*10+3925)*1+lsi)*1]), &(stack[((hsi*10+4339)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*15+4167)*1+lsi)*1]), &(stack[((hsi*15+4349)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*21+2518)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*21+4364)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*28+2546)*1+lsi)*1]), &(stack[((hsi*28+2591)*1+lsi)*1]), &(stack[((hsi*28+3485)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4787)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*36+2727)*1+lsi)*1]), &(stack[((hsi*36+4267)*1+lsi)*1]), &(stack[((hsi*36+3551)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2055)*1+lsi)*1]),&(stack[((hsi*45+4787)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4832)*1+lsi)*1]), &(stack[((hsi*45+4787)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*45+4478)*1+lsi)*1]), &(stack[((hsi*45+4433)*1+lsi)*1]), &(stack[((hsi*45+4687)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2000)*1+lsi)*1]),&(stack[((hsi*55+4832)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+3114)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+3907)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*3+3910)*1+lsi)*1]), &(stack[((hsi*6+3123)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+3913)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*6+3919)*1+lsi)*1]), &(stack[((hsi*10+3144)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*10+4339)*1+lsi)*1]), &(stack[((hsi*10+3925)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*15+3460)*1+lsi)*1]), &(stack[((hsi*15+3734)*1+lsi)*1]), &(stack[((hsi*15+4349)*1+lsi)*1]), &(stack[((hsi*15+4167)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*21+3515)*1+lsi)*1]), &(stack[((hsi*21+3749)*1+lsi)*1]), &(stack[((hsi*21+4364)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*28+3593)*1+lsi)*1]), &(stack[((hsi*28+3770)*1+lsi)*1]), &(stack[((hsi*28+3485)*1+lsi)*1]), &(stack[((hsi*28+2591)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4339)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*36+3798)*1+lsi)*1]), &(stack[((hsi*36+3551)*1+lsi)*1]), &(stack[((hsi*36+4267)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1955)*1+lsi)*1]),&(stack[((hsi*45+4339)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4887)*1+lsi)*1]), &(stack[((hsi*45+4339)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*45+4022)*1+lsi)*1]), &(stack[((hsi*45+4067)*1+lsi)*1]), &(stack[((hsi*45+4687)*1+lsi)*1]), &(stack[((hsi*45+4433)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1900)*1+lsi)*1]),&(stack[((hsi*55+4887)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+2810)*1+lsi)*1]), &(stack[((hsi*3+3907)*1+lsi)*1]), &(stack[((hsi*3+2929)*1+lsi)*1]), &(stack[((hsi*3+3129)*1+lsi)*1]), &(stack[((hsi*3+3114)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+2813)*1+lsi)*1]), &(stack[((hsi*6+3913)*1+lsi)*1]), &(stack[((hsi*6+2932)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*6+3123)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*10+2819)*1+lsi)*1]), &(stack[((hsi*10+3925)*1+lsi)*1]), &(stack[((hsi*10+2938)*1+lsi)*1]), &(stack[((hsi*10+3475)*1+lsi)*1]), &(stack[((hsi*10+3144)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*10+4578)*1+lsi)*1]), &(stack[((hsi*15+2829)*1+lsi)*1]), &(stack[((hsi*15+4167)*1+lsi)*1]), &(stack[((hsi*15+2948)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*15+3460)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4182)*1+lsi)*1]), &(stack[((hsi*21+2844)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*21+2963)*1+lsi)*1]), &(stack[((hsi*21+2518)*1+lsi)*1]), &(stack[((hsi*21+3515)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*28+2591)*1+lsi)*1]), &(stack[((hsi*28+2984)*1+lsi)*1]), &(stack[((hsi*28+2546)*1+lsi)*1]), &(stack[((hsi*28+3593)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4167)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*36+4267)*1+lsi)*1]), &(stack[((hsi*36+3012)*1+lsi)*1]), &(stack[((hsi*36+2727)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1855)*1+lsi)*1]),&(stack[((hsi*45+4167)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4942)*1+lsi)*1]), &(stack[((hsi*45+4167)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*45+3295)*1+lsi)*1]), &(stack[((hsi*45+4433)*1+lsi)*1]), &(stack[((hsi*45+3340)*1+lsi)*1]), &(stack[((hsi*45+4478)*1+lsi)*1]), &(stack[((hsi*45+4022)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1800)*1+lsi)*1]),&(stack[((hsi*55+4942)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4578)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3117)*1+lsi)*1]), &(stack[((hsi*3+4578)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+3114)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*3+2810)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4581)*1+lsi)*1]), &(stack[((hsi*6+3117)*1+lsi)*1]), &(stack[((hsi*3+4578)*1+lsi)*1]), &(stack[((hsi*6+3123)*1+lsi)*1]), &(stack[((hsi*6+2540)*1+lsi)*1]), &(stack[((hsi*6+2813)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*10+4581)*1+lsi)*1]), &(stack[((hsi*6+3117)*1+lsi)*1]), &(stack[((hsi*10+3144)*1+lsi)*1]), &(stack[((hsi*10+2581)*1+lsi)*1]), &(stack[((hsi*10+2819)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2500)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*10+4581)*1+lsi)*1]), &(stack[((hsi*15+3460)*1+lsi)*1]), &(stack[((hsi*15+3734)*1+lsi)*1]), &(stack[((hsi*15+2829)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2521)*1+lsi)*1]), &(stack[((hsi*21+2500)*1+lsi)*1]), &(stack[((hsi*15+3536)*1+lsi)*1]), &(stack[((hsi*21+3515)*1+lsi)*1]), &(stack[((hsi*21+3749)*1+lsi)*1]), &(stack[((hsi*21+2844)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3734)*1+lsi)*1]), &(stack[((hsi*28+2521)*1+lsi)*1]), &(stack[((hsi*21+2500)*1+lsi)*1]), &(stack[((hsi*28+3593)*1+lsi)*1]), &(stack[((hsi*28+3770)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3440)*1+lsi)*1]), &(stack[((hsi*36+3734)*1+lsi)*1]), &(stack[((hsi*28+2521)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*36+3798)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1755)*1+lsi)*1]),&(stack[((hsi*45+3440)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2500)*1+lsi)*1]), &(stack[((hsi*45+3440)*1+lsi)*1]), &(stack[((hsi*36+3734)*1+lsi)*1]), &(stack[((hsi*45+4022)*1+lsi)*1]), &(stack[((hsi*45+4067)*1+lsi)*1]), &(stack[((hsi*45+3295)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1700)*1+lsi)*1]),&(stack[((hsi*55+2500)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2555)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2558)*1+lsi)*1]), &(stack[((hsi*3+2555)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+2810)*1+lsi)*1]), &(stack[((hsi*3+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2564)*1+lsi)*1]), &(stack[((hsi*6+2558)*1+lsi)*1]), &(stack[((hsi*3+2555)*1+lsi)*1]), &(stack[((hsi*6+2813)*1+lsi)*1]), &(stack[((hsi*6+2932)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2574)*1+lsi)*1]), &(stack[((hsi*10+2564)*1+lsi)*1]), &(stack[((hsi*6+2558)*1+lsi)*1]), &(stack[((hsi*10+2819)*1+lsi)*1]), &(stack[((hsi*10+2938)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3485)*1+lsi)*1]), &(stack[((hsi*15+2574)*1+lsi)*1]), &(stack[((hsi*10+2564)*1+lsi)*1]), &(stack[((hsi*15+2829)*1+lsi)*1]), &(stack[((hsi*15+2948)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+3485)*1+lsi)*1]), &(stack[((hsi*15+2574)*1+lsi)*1]), &(stack[((hsi*21+2844)*1+lsi)*1]), &(stack[((hsi*21+2963)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*21+3485)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*28+2984)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2555)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*28+4578)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*36+3012)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1655)*1+lsi)*1]),&(stack[((hsi*45+2555)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2810)*1+lsi)*1]), &(stack[((hsi*45+2555)*1+lsi)*1]), &(stack[((hsi*36+4606)*1+lsi)*1]), &(stack[((hsi*45+3295)*1+lsi)*1]), &(stack[((hsi*45+3340)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1600)*1+lsi)*1]),&(stack[((hsi*55+2810)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1555)*1+lsi)*1]),&(stack[((hsi*45+3340)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*21+3093)*1+lsi)*1]), &(stack[((hsi*15+2642)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2929)*1+lsi)*1]), &(stack[((hsi*28+3195)*1+lsi)*1]), &(stack[((hsi*21+2678)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3485)*1+lsi)*1]), &(stack[((hsi*28+3167)*1+lsi)*1]), &(stack[((hsi*21+2657)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2600)*1+lsi)*1]), &(stack[((hsi*36+3259)*1+lsi)*1]), &(stack[((hsi*28+2782)*1+lsi)*1]), &(stack[((hsi*36+3485)*1+lsi)*1]), &(stack[((hsi*36+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3734)*1+lsi)*1]), &(stack[((hsi*36+3223)*1+lsi)*1]), &(stack[((hsi*28+2699)*1+lsi)*1]), &(stack[((hsi*36+2929)*1+lsi)*1]), &(stack[((hsi*36+3485)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2645)*1+lsi)*1]), &(stack[((hsi*45+3340)*1+lsi)*1]), &(stack[((hsi*36+3012)*1+lsi)*1]), &(stack[((hsi*45+3734)*1+lsi)*1]), &(stack[((hsi*45+2600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1500)*1+lsi)*1]),&(stack[((hsi*55+2645)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1455)*1+lsi)*1]),&(stack[((hsi*45+4067)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2965)*1+lsi)*1]), &(stack[((hsi*28+3879)*1+lsi)*1]), &(stack[((hsi*21+3621)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4578)*1+lsi)*1]), &(stack[((hsi*36+3986)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*36+2965)*1+lsi)*1]), &(stack[((hsi*36+3485)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3587)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*36+2965)*1+lsi)*1]), &(stack[((hsi*36+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3632)*1+lsi)*1]), &(stack[((hsi*45+4067)*1+lsi)*1]), &(stack[((hsi*36+3798)*1+lsi)*1]), &(stack[((hsi*45+3587)*1+lsi)*1]), &(stack[((hsi*45+4578)*1+lsi)*1]), &(stack[((hsi*45+3734)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1400)*1+lsi)*1]),&(stack[((hsi*55+3632)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1355)*1+lsi)*1]),&(stack[((hsi*45+4478)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3779)*1+lsi)*1]), &(stack[((hsi*36+4303)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*36+2929)*1+lsi)*1]), &(stack[((hsi*36+3485)*1+lsi)*1]), &(stack[((hsi*36+2965)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4212)*1+lsi)*1]), &(stack[((hsi*45+4478)*1+lsi)*1]), &(stack[((hsi*36+2727)*1+lsi)*1]), &(stack[((hsi*45+3734)*1+lsi)*1]), &(stack[((hsi*45+3779)*1+lsi)*1]), &(stack[((hsi*45+2600)*1+lsi)*1]), &(stack[((hsi*45+3587)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1300)*1+lsi)*1]),&(stack[((hsi*55+4212)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1255)*1+lsi)*1]),&(stack[((hsi*45+4687)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2700)*1+lsi)*1]), &(stack[((hsi*45+4687)*1+lsi)*1]), &(stack[((hsi*36+3551)*1+lsi)*1]), &(stack[((hsi*45+3587)*1+lsi)*1]), &(stack[((hsi*45+4578)*1+lsi)*1]), &(stack[((hsi*45+3779)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1200)*1+lsi)*1]),&(stack[((hsi*55+2700)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1155)*1+lsi)*1]),&(stack[((hsi*45+4433)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2755)*1+lsi)*1]), &(stack[((hsi*45+4433)*1+lsi)*1]), &(stack[((hsi*36+4267)*1+lsi)*1]), &(stack[((hsi*45+2600)*1+lsi)*1]), &(stack[((hsi*45+3734)*1+lsi)*1]), &(stack[((hsi*45+3779)*1+lsi)*1]), &(stack[((hsi*45+4578)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1100)*1+lsi)*1]),&(stack[((hsi*55+2755)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1055)*1+lsi)*1]),&(stack[((hsi*45+4022)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3521)*1+lsi)*1]), &(stack[((hsi*45+4022)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*45+4578)*1+lsi)*1]), &(stack[((hsi*45+3587)*1+lsi)*1]), &(stack[((hsi*45+2600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1000)*1+lsi)*1]),&(stack[((hsi*55+3521)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+955)*1+lsi)*1]),&(stack[((hsi*45+3295)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4997)*1+lsi)*1]), &(stack[((hsi*45+3295)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*45+2600)*1+lsi)*1]), &(stack[((hsi*45+3734)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+900)*1+lsi)*1]),&(stack[((hsi*55+4997)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+855)*1+lsi)*1]),&(stack[((hsi*45+3734)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]), &(stack[((hsi*21+3093)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3093)*1+lsi)*1]), &(stack[((hsi*36+3485)*1+lsi)*1]), &(stack[((hsi*28+3167)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3138)*1+lsi)*1]), &(stack[((hsi*36+2929)*1+lsi)*1]), &(stack[((hsi*28+3195)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5052)*1+lsi)*1]), &(stack[((hsi*45+3734)*1+lsi)*1]), &(stack[((hsi*36+3223)*1+lsi)*1]), &(stack[((hsi*45+3138)*1+lsi)*1]), &(stack[((hsi*45+3093)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+800)*1+lsi)*1]),&(stack[((hsi*55+5052)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+755)*1+lsi)*1]),&(stack[((hsi*45+3587)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3183)*1+lsi)*1]), &(stack[((hsi*36+2965)*1+lsi)*1]), &(stack[((hsi*28+3879)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3879)*1+lsi)*1]), &(stack[((hsi*45+3587)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*45+3183)*1+lsi)*1]), &(stack[((hsi*45+3138)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+700)*1+lsi)*1]),&(stack[((hsi*55+3879)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+655)*1+lsi)*1]),&(stack[((hsi*45+3779)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5107)*1+lsi)*1]), &(stack[((hsi*45+3779)*1+lsi)*1]), &(stack[((hsi*36+4303)*1+lsi)*1]), &(stack[((hsi*45+3138)*1+lsi)*1]), &(stack[((hsi*45+3093)*1+lsi)*1]), &(stack[((hsi*45+3183)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+600)*1+lsi)*1]),&(stack[((hsi*55+5107)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+555)*1+lsi)*1]),&(stack[((hsi*45+4578)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4267)*1+lsi)*1]), &(stack[((hsi*45+4578)*1+lsi)*1]), &(stack[((hsi*36+3986)*1+lsi)*1]), &(stack[((hsi*45+3183)*1+lsi)*1]), &(stack[((hsi*45+3093)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+500)*1+lsi)*1]),&(stack[((hsi*55+4267)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+455)*1+lsi)*1]),&(stack[((hsi*45+2600)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3934)*1+lsi)*1]), &(stack[((hsi*45+2600)*1+lsi)*1]), &(stack[((hsi*36+3259)*1+lsi)*1]), &(stack[((hsi*45+3093)*1+lsi)*1]), &(stack[((hsi*45+3138)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+400)*1+lsi)*1]),&(stack[((hsi*55+3934)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+355)*1+lsi)*1]),&(stack[((hsi*45+3138)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3228)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]), &(stack[((hsi*28+2865)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5162)*1+lsi)*1]), &(stack[((hsi*45+3138)*1+lsi)*1]), &(stack[((hsi*36+2929)*1+lsi)*1]), &(stack[((hsi*45+3228)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+300)*1+lsi)*1]),&(stack[((hsi*55+5162)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+255)*1+lsi)*1]),&(stack[((hsi*45+3183)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5217)*1+lsi)*1]), &(stack[((hsi*45+3183)*1+lsi)*1]), &(stack[((hsi*36+2965)*1+lsi)*1]), &(stack[((hsi*45+3228)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+200)*1+lsi)*1]),&(stack[((hsi*55+5217)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+155)*1+lsi)*1]),&(stack[((hsi*45+3093)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2929)*1+lsi)*1]), &(stack[((hsi*45+3093)*1+lsi)*1]), &(stack[((hsi*36+3485)*1+lsi)*1]), &(stack[((hsi*45+3228)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+100)*1+lsi)*1]),&(stack[((hsi*55+2929)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+55)*1+lsi)*1]),&(stack[((hsi*45+3228)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2984)*1+lsi)*1]), &(stack[((hsi*45+3228)*1+lsi)*1]), &(stack[((hsi*36+2893)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+2984)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2500 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
