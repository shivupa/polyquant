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
void _sphemultipole_M_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4975)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4978)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4981)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4984)*1+lsi)*1]), &(stack[((hsi*3+4975)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+4981)*1+lsi)*1]), &(stack[((hsi*3+4978)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4990)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4993)*1+lsi)*1]), &(stack[((hsi*3+4978)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+4990)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4999)*1+lsi)*1]), &(stack[((hsi*3+4981)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+4990)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5005)*1+lsi)*1]), &(stack[((hsi*6+4984)*1+lsi)*1]), &(stack[((hsi*3+4975)*1+lsi)*1]), &(stack[((hsi*6+4999)*1+lsi)*1]), &(stack[((hsi*6+4993)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*3+4990)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5021)*1+lsi)*1]), &(stack[((hsi*6+4993)*1+lsi)*1]), &(stack[((hsi*3+4978)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5031)*1+lsi)*1]), &(stack[((hsi*6+4999)*1+lsi)*1]), &(stack[((hsi*3+4981)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5041)*1+lsi)*1]), &(stack[((hsi*10+5005)*1+lsi)*1]), &(stack[((hsi*6+4984)*1+lsi)*1]), &(stack[((hsi*10+5031)*1+lsi)*1]), &(stack[((hsi*10+5021)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*3+4990)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5066)*1+lsi)*1]), &(stack[((hsi*10+5021)*1+lsi)*1]), &(stack[((hsi*6+4993)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5081)*1+lsi)*1]), &(stack[((hsi*10+5031)*1+lsi)*1]), &(stack[((hsi*6+4999)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*15+5041)*1+lsi)*1]), &(stack[((hsi*10+5005)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]), &(stack[((hsi*15+5066)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5132)*1+lsi)*1]), &(stack[((hsi*15+5066)*1+lsi)*1]), &(stack[((hsi*10+5021)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5153)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]), &(stack[((hsi*10+5031)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5174)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*15+5041)*1+lsi)*1]), &(stack[((hsi*21+5153)*1+lsi)*1]), &(stack[((hsi*21+5132)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5223)*1+lsi)*1]), &(stack[((hsi*21+5132)*1+lsi)*1]), &(stack[((hsi*15+5066)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5251)*1+lsi)*1]), &(stack[((hsi*21+5153)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5279)*1+lsi)*1]), &(stack[((hsi*28+5174)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*28+5251)*1+lsi)*1]), &(stack[((hsi*28+5223)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5315)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5318)*1+lsi)*1]), &(stack[((hsi*3+5315)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+4978)*1+lsi)*1]), &(stack[((hsi*3+4981)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5324)*1+lsi)*1]), &(stack[((hsi*6+5318)*1+lsi)*1]), &(stack[((hsi*3+5315)*1+lsi)*1]), &(stack[((hsi*6+4993)*1+lsi)*1]), &(stack[((hsi*6+4999)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5334)*1+lsi)*1]), &(stack[((hsi*10+5324)*1+lsi)*1]), &(stack[((hsi*6+5318)*1+lsi)*1]), &(stack[((hsi*10+5021)*1+lsi)*1]), &(stack[((hsi*10+5031)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5349)*1+lsi)*1]), &(stack[((hsi*15+5334)*1+lsi)*1]), &(stack[((hsi*10+5324)*1+lsi)*1]), &(stack[((hsi*15+5066)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5370)*1+lsi)*1]), &(stack[((hsi*21+5349)*1+lsi)*1]), &(stack[((hsi*15+5334)*1+lsi)*1]), &(stack[((hsi*21+5132)*1+lsi)*1]), &(stack[((hsi*21+5153)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5398)*1+lsi)*1]), &(stack[((hsi*28+5370)*1+lsi)*1]), &(stack[((hsi*21+5349)*1+lsi)*1]), &(stack[((hsi*28+5223)*1+lsi)*1]), &(stack[((hsi*28+5251)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5434)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5437)*1+lsi)*1]), &(stack[((hsi*3+5434)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+5315)*1+lsi)*1]), &(stack[((hsi*3+4975)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5443)*1+lsi)*1]), &(stack[((hsi*6+5437)*1+lsi)*1]), &(stack[((hsi*3+5434)*1+lsi)*1]), &(stack[((hsi*6+5318)*1+lsi)*1]), &(stack[((hsi*6+4984)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5453)*1+lsi)*1]), &(stack[((hsi*10+5443)*1+lsi)*1]), &(stack[((hsi*6+5437)*1+lsi)*1]), &(stack[((hsi*10+5324)*1+lsi)*1]), &(stack[((hsi*10+5005)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5468)*1+lsi)*1]), &(stack[((hsi*15+5453)*1+lsi)*1]), &(stack[((hsi*10+5443)*1+lsi)*1]), &(stack[((hsi*15+5334)*1+lsi)*1]), &(stack[((hsi*15+5041)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5489)*1+lsi)*1]), &(stack[((hsi*21+5468)*1+lsi)*1]), &(stack[((hsi*15+5453)*1+lsi)*1]), &(stack[((hsi*21+5349)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5517)*1+lsi)*1]), &(stack[((hsi*28+5489)*1+lsi)*1]), &(stack[((hsi*21+5468)*1+lsi)*1]), &(stack[((hsi*28+5370)*1+lsi)*1]), &(stack[((hsi*28+5174)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5553)*1+lsi)*1]), &(stack[((hsi*36+5517)*1+lsi)*1]), &(stack[((hsi*28+5489)*1+lsi)*1]), &(stack[((hsi*36+5398)*1+lsi)*1]), &(stack[((hsi*36+5279)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5598)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5601)*1+lsi)*1]), &(stack[((hsi*3+5598)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+4975)*1+lsi)*1]), &(stack[((hsi*3+5315)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5607)*1+lsi)*1]), &(stack[((hsi*6+5601)*1+lsi)*1]), &(stack[((hsi*3+5598)*1+lsi)*1]), &(stack[((hsi*6+4984)*1+lsi)*1]), &(stack[((hsi*6+5318)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5617)*1+lsi)*1]), &(stack[((hsi*10+5607)*1+lsi)*1]), &(stack[((hsi*6+5601)*1+lsi)*1]), &(stack[((hsi*10+5005)*1+lsi)*1]), &(stack[((hsi*10+5324)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5632)*1+lsi)*1]), &(stack[((hsi*15+5617)*1+lsi)*1]), &(stack[((hsi*10+5607)*1+lsi)*1]), &(stack[((hsi*15+5041)*1+lsi)*1]), &(stack[((hsi*15+5334)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5653)*1+lsi)*1]), &(stack[((hsi*21+5632)*1+lsi)*1]), &(stack[((hsi*15+5617)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*21+5349)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5681)*1+lsi)*1]), &(stack[((hsi*28+5653)*1+lsi)*1]), &(stack[((hsi*21+5632)*1+lsi)*1]), &(stack[((hsi*28+5174)*1+lsi)*1]), &(stack[((hsi*28+5370)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5717)*1+lsi)*1]), &(stack[((hsi*36+5681)*1+lsi)*1]), &(stack[((hsi*28+5653)*1+lsi)*1]), &(stack[((hsi*36+5279)*1+lsi)*1]), &(stack[((hsi*36+5398)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5762)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5765)*1+lsi)*1]), &(stack[((hsi*3+5762)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+5598)*1+lsi)*1]), &(stack[((hsi*3+5434)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5771)*1+lsi)*1]), &(stack[((hsi*6+5765)*1+lsi)*1]), &(stack[((hsi*3+5762)*1+lsi)*1]), &(stack[((hsi*6+5601)*1+lsi)*1]), &(stack[((hsi*6+5437)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*10+5771)*1+lsi)*1]), &(stack[((hsi*6+5765)*1+lsi)*1]), &(stack[((hsi*10+5607)*1+lsi)*1]), &(stack[((hsi*10+5443)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*10+5771)*1+lsi)*1]), &(stack[((hsi*15+5617)*1+lsi)*1]), &(stack[((hsi*15+5453)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5817)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*21+5632)*1+lsi)*1]), &(stack[((hsi*21+5468)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5845)*1+lsi)*1]), &(stack[((hsi*28+5817)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*28+5653)*1+lsi)*1]), &(stack[((hsi*28+5489)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5762)*1+lsi)*1]), &(stack[((hsi*36+5845)*1+lsi)*1]), &(stack[((hsi*28+5817)*1+lsi)*1]), &(stack[((hsi*36+5681)*1+lsi)*1]), &(stack[((hsi*36+5517)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5881)*1+lsi)*1]), &(stack[((hsi*45+5762)*1+lsi)*1]), &(stack[((hsi*36+5845)*1+lsi)*1]), &(stack[((hsi*45+5717)*1+lsi)*1]), &(stack[((hsi*45+5553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4920)*1+lsi)*1]),&(stack[((hsi*55+5881)*1+lsi)*1]),55);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5807)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5835)*1+lsi)*1]), &(stack[((hsi*28+5223)*1+lsi)*1]), &(stack[((hsi*21+5132)*1+lsi)*1]), &(stack[((hsi*28+5807)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5936)*1+lsi)*1]), &(stack[((hsi*28+5251)*1+lsi)*1]), &(stack[((hsi*21+5153)*1+lsi)*1]), &(stack[((hsi*28+5807)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5972)*1+lsi)*1]), &(stack[((hsi*36+5279)*1+lsi)*1]), &(stack[((hsi*28+5174)*1+lsi)*1]), &(stack[((hsi*36+5936)*1+lsi)*1]), &(stack[((hsi*36+5835)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6017)*1+lsi)*1]), &(stack[((hsi*36+5398)*1+lsi)*1]), &(stack[((hsi*28+5370)*1+lsi)*1]), &(stack[((hsi*36+5835)*1+lsi)*1]), &(stack[((hsi*36+5936)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6062)*1+lsi)*1]), &(stack[((hsi*45+5553)*1+lsi)*1]), &(stack[((hsi*36+5517)*1+lsi)*1]), &(stack[((hsi*45+6017)*1+lsi)*1]), &(stack[((hsi*45+5972)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6117)*1+lsi)*1]), &(stack[((hsi*45+5717)*1+lsi)*1]), &(stack[((hsi*36+5681)*1+lsi)*1]), &(stack[((hsi*45+5972)*1+lsi)*1]), &(stack[((hsi*45+6017)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+6172)*1+lsi)*1]), &(stack[((hsi*55+5881)*1+lsi)*1]), &(stack[((hsi*45+5762)*1+lsi)*1]), &(stack[((hsi*55+6117)*1+lsi)*1]), &(stack[((hsi*55+6062)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4854)*1+lsi)*1]),&(stack[((hsi*66+6172)*1+lsi)*1]),66);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5762)*1+lsi)*1]), &(stack[((hsi*28+5807)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6238)*1+lsi)*1]), &(stack[((hsi*36+5835)*1+lsi)*1]), &(stack[((hsi*28+5223)*1+lsi)*1]), &(stack[((hsi*36+5762)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6283)*1+lsi)*1]), &(stack[((hsi*36+5936)*1+lsi)*1]), &(stack[((hsi*28+5251)*1+lsi)*1]), &(stack[((hsi*36+5762)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6328)*1+lsi)*1]), &(stack[((hsi*45+5972)*1+lsi)*1]), &(stack[((hsi*36+5279)*1+lsi)*1]), &(stack[((hsi*45+6283)*1+lsi)*1]), &(stack[((hsi*45+6238)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6383)*1+lsi)*1]), &(stack[((hsi*45+6017)*1+lsi)*1]), &(stack[((hsi*36+5398)*1+lsi)*1]), &(stack[((hsi*45+6238)*1+lsi)*1]), &(stack[((hsi*45+6283)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+6438)*1+lsi)*1]), &(stack[((hsi*55+6062)*1+lsi)*1]), &(stack[((hsi*45+5553)*1+lsi)*1]), &(stack[((hsi*55+6383)*1+lsi)*1]), &(stack[((hsi*55+6328)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+6504)*1+lsi)*1]), &(stack[((hsi*55+6117)*1+lsi)*1]), &(stack[((hsi*45+5717)*1+lsi)*1]), &(stack[((hsi*55+6328)*1+lsi)*1]), &(stack[((hsi*55+6383)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+6570)*1+lsi)*1]), &(stack[((hsi*66+6172)*1+lsi)*1]), &(stack[((hsi*55+5881)*1+lsi)*1]), &(stack[((hsi*66+6504)*1+lsi)*1]), &(stack[((hsi*66+6438)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4776)*1+lsi)*1]),&(stack[((hsi*78+6570)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5871)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5874)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5801)*1+lsi)*1]), &(stack[((hsi*3+5871)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+5874)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*3+5315)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5877)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6648)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+5877)*1+lsi)*1]), &(stack[((hsi*3+4981)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6654)*1+lsi)*1]), &(stack[((hsi*3+5874)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+5877)*1+lsi)*1]), &(stack[((hsi*3+4978)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6660)*1+lsi)*1]), &(stack[((hsi*6+5801)*1+lsi)*1]), &(stack[((hsi*3+5871)*1+lsi)*1]), &(stack[((hsi*6+6654)*1+lsi)*1]), &(stack[((hsi*6+6648)*1+lsi)*1]), &(stack[((hsi*6+5318)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*3+5877)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+4990)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6676)*1+lsi)*1]), &(stack[((hsi*6+6648)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*6+4999)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6686)*1+lsi)*1]), &(stack[((hsi*6+6654)*1+lsi)*1]), &(stack[((hsi*3+5874)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*6+4993)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6696)*1+lsi)*1]), &(stack[((hsi*10+6660)*1+lsi)*1]), &(stack[((hsi*6+5801)*1+lsi)*1]), &(stack[((hsi*10+6686)*1+lsi)*1]), &(stack[((hsi*10+6676)*1+lsi)*1]), &(stack[((hsi*10+5324)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*3+5877)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6721)*1+lsi)*1]), &(stack[((hsi*10+6676)*1+lsi)*1]), &(stack[((hsi*6+6648)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*10+5031)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6736)*1+lsi)*1]), &(stack[((hsi*10+6686)*1+lsi)*1]), &(stack[((hsi*6+6654)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*10+5021)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6751)*1+lsi)*1]), &(stack[((hsi*15+6696)*1+lsi)*1]), &(stack[((hsi*10+6660)*1+lsi)*1]), &(stack[((hsi*15+6736)*1+lsi)*1]), &(stack[((hsi*15+6721)*1+lsi)*1]), &(stack[((hsi*15+5334)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6787)*1+lsi)*1]), &(stack[((hsi*15+6721)*1+lsi)*1]), &(stack[((hsi*10+6676)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6808)*1+lsi)*1]), &(stack[((hsi*15+6736)*1+lsi)*1]), &(stack[((hsi*10+6686)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*15+5066)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6829)*1+lsi)*1]), &(stack[((hsi*21+6751)*1+lsi)*1]), &(stack[((hsi*15+6696)*1+lsi)*1]), &(stack[((hsi*21+6808)*1+lsi)*1]), &(stack[((hsi*21+6787)*1+lsi)*1]), &(stack[((hsi*21+5349)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6878)*1+lsi)*1]), &(stack[((hsi*21+6787)*1+lsi)*1]), &(stack[((hsi*15+6721)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*21+5153)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6906)*1+lsi)*1]), &(stack[((hsi*21+6808)*1+lsi)*1]), &(stack[((hsi*15+6736)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*21+5132)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6934)*1+lsi)*1]), &(stack[((hsi*28+6829)*1+lsi)*1]), &(stack[((hsi*21+6751)*1+lsi)*1]), &(stack[((hsi*28+6906)*1+lsi)*1]), &(stack[((hsi*28+6878)*1+lsi)*1]), &(stack[((hsi*28+5370)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6970)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6998)*1+lsi)*1]), &(stack[((hsi*28+6878)*1+lsi)*1]), &(stack[((hsi*21+6787)*1+lsi)*1]), &(stack[((hsi*28+6970)*1+lsi)*1]), &(stack[((hsi*28+5251)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7034)*1+lsi)*1]), &(stack[((hsi*28+6906)*1+lsi)*1]), &(stack[((hsi*21+6808)*1+lsi)*1]), &(stack[((hsi*28+6970)*1+lsi)*1]), &(stack[((hsi*28+5223)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7070)*1+lsi)*1]), &(stack[((hsi*36+6934)*1+lsi)*1]), &(stack[((hsi*28+6829)*1+lsi)*1]), &(stack[((hsi*36+7034)*1+lsi)*1]), &(stack[((hsi*36+6998)*1+lsi)*1]), &(stack[((hsi*36+5398)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4990)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*3+4990)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*3+5874)*1+lsi)*1]), &(stack[((hsi*3+4975)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*3+4990)*1+lsi)*1]), &(stack[((hsi*6+6648)*1+lsi)*1]), &(stack[((hsi*6+6654)*1+lsi)*1]), &(stack[((hsi*6+4984)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*10+6676)*1+lsi)*1]), &(stack[((hsi*10+6686)*1+lsi)*1]), &(stack[((hsi*10+5005)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*15+6721)*1+lsi)*1]), &(stack[((hsi*15+6736)*1+lsi)*1]), &(stack[((hsi*15+5041)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7115)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*21+6787)*1+lsi)*1]), &(stack[((hsi*21+6808)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7143)*1+lsi)*1]), &(stack[((hsi*28+7115)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*28+6878)*1+lsi)*1]), &(stack[((hsi*28+6906)*1+lsi)*1]), &(stack[((hsi*28+5174)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7179)*1+lsi)*1]), &(stack[((hsi*36+7143)*1+lsi)*1]), &(stack[((hsi*28+7115)*1+lsi)*1]), &(stack[((hsi*36+6998)*1+lsi)*1]), &(stack[((hsi*36+7034)*1+lsi)*1]), &(stack[((hsi*36+5279)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7224)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7227)*1+lsi)*1]), &(stack[((hsi*3+7224)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+4990)*1+lsi)*1]), &(stack[((hsi*3+5871)*1+lsi)*1]), &(stack[((hsi*3+5598)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7233)*1+lsi)*1]), &(stack[((hsi*6+7227)*1+lsi)*1]), &(stack[((hsi*3+7224)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*6+5801)*1+lsi)*1]), &(stack[((hsi*6+5601)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7243)*1+lsi)*1]), &(stack[((hsi*10+7233)*1+lsi)*1]), &(stack[((hsi*6+7227)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*10+6660)*1+lsi)*1]), &(stack[((hsi*10+5607)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7258)*1+lsi)*1]), &(stack[((hsi*15+7243)*1+lsi)*1]), &(stack[((hsi*10+7233)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+6696)*1+lsi)*1]), &(stack[((hsi*15+5617)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7279)*1+lsi)*1]), &(stack[((hsi*21+7258)*1+lsi)*1]), &(stack[((hsi*15+7243)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*21+6751)*1+lsi)*1]), &(stack[((hsi*21+5632)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7307)*1+lsi)*1]), &(stack[((hsi*28+7279)*1+lsi)*1]), &(stack[((hsi*21+7258)*1+lsi)*1]), &(stack[((hsi*28+7115)*1+lsi)*1]), &(stack[((hsi*28+6829)*1+lsi)*1]), &(stack[((hsi*28+5653)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*36+7307)*1+lsi)*1]), &(stack[((hsi*28+7279)*1+lsi)*1]), &(stack[((hsi*36+7143)*1+lsi)*1]), &(stack[((hsi*36+6934)*1+lsi)*1]), &(stack[((hsi*36+5681)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7343)*1+lsi)*1]), &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*36+7307)*1+lsi)*1]), &(stack[((hsi*45+7179)*1+lsi)*1]), &(stack[((hsi*45+7070)*1+lsi)*1]), &(stack[((hsi*45+5717)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4721)*1+lsi)*1]),&(stack[((hsi*55+7343)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7269)*1+lsi)*1]), &(stack[((hsi*28+6970)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*28+5807)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7398)*1+lsi)*1]), &(stack[((hsi*36+6998)*1+lsi)*1]), &(stack[((hsi*28+6878)*1+lsi)*1]), &(stack[((hsi*36+7269)*1+lsi)*1]), &(stack[((hsi*36+5936)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7443)*1+lsi)*1]), &(stack[((hsi*36+7034)*1+lsi)*1]), &(stack[((hsi*28+6906)*1+lsi)*1]), &(stack[((hsi*36+7269)*1+lsi)*1]), &(stack[((hsi*36+5835)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7488)*1+lsi)*1]), &(stack[((hsi*45+7070)*1+lsi)*1]), &(stack[((hsi*36+6934)*1+lsi)*1]), &(stack[((hsi*45+7443)*1+lsi)*1]), &(stack[((hsi*45+7398)*1+lsi)*1]), &(stack[((hsi*45+6017)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7543)*1+lsi)*1]), &(stack[((hsi*45+7179)*1+lsi)*1]), &(stack[((hsi*36+7143)*1+lsi)*1]), &(stack[((hsi*45+7398)*1+lsi)*1]), &(stack[((hsi*45+7443)*1+lsi)*1]), &(stack[((hsi*45+5972)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+7598)*1+lsi)*1]), &(stack[((hsi*55+7343)*1+lsi)*1]), &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*55+7543)*1+lsi)*1]), &(stack[((hsi*55+7488)*1+lsi)*1]), &(stack[((hsi*55+6117)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4655)*1+lsi)*1]),&(stack[((hsi*66+7598)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*36+7269)*1+lsi)*1]), &(stack[((hsi*28+6970)*1+lsi)*1]), &(stack[((hsi*36+5762)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7664)*1+lsi)*1]), &(stack[((hsi*45+7398)*1+lsi)*1]), &(stack[((hsi*36+6998)*1+lsi)*1]), &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*45+6283)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7719)*1+lsi)*1]), &(stack[((hsi*45+7443)*1+lsi)*1]), &(stack[((hsi*36+7034)*1+lsi)*1]), &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*45+6238)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+7774)*1+lsi)*1]), &(stack[((hsi*55+7488)*1+lsi)*1]), &(stack[((hsi*45+7070)*1+lsi)*1]), &(stack[((hsi*55+7719)*1+lsi)*1]), &(stack[((hsi*55+7664)*1+lsi)*1]), &(stack[((hsi*55+6383)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+7840)*1+lsi)*1]), &(stack[((hsi*55+7543)*1+lsi)*1]), &(stack[((hsi*45+7179)*1+lsi)*1]), &(stack[((hsi*55+7664)*1+lsi)*1]), &(stack[((hsi*55+7719)*1+lsi)*1]), &(stack[((hsi*55+6328)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+7906)*1+lsi)*1]), &(stack[((hsi*66+7598)*1+lsi)*1]), &(stack[((hsi*55+7343)*1+lsi)*1]), &(stack[((hsi*66+7840)*1+lsi)*1]), &(stack[((hsi*66+7774)*1+lsi)*1]), &(stack[((hsi*66+6504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4577)*1+lsi)*1]),&(stack[((hsi*78+7906)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7305)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7308)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7311)*1+lsi)*1]), &(stack[((hsi*3+7305)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+5315)*1+lsi)*1]), &(stack[((hsi*3+4975)*1+lsi)*1]), &(stack[((hsi*3+7308)*1+lsi)*1]), &(stack[((hsi*3+5874)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+7308)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+4981)*1+lsi)*1]), &(stack[((hsi*3+4978)*1+lsi)*1]), &(stack[((hsi*3+5877)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7323)*1+lsi)*1]), &(stack[((hsi*6+7311)*1+lsi)*1]), &(stack[((hsi*3+7305)*1+lsi)*1]), &(stack[((hsi*6+5318)*1+lsi)*1]), &(stack[((hsi*6+4984)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*6+6654)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+7308)*1+lsi)*1]), &(stack[((hsi*6+4999)*1+lsi)*1]), &(stack[((hsi*6+4993)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7984)*1+lsi)*1]), &(stack[((hsi*10+7323)*1+lsi)*1]), &(stack[((hsi*6+7311)*1+lsi)*1]), &(stack[((hsi*10+5324)*1+lsi)*1]), &(stack[((hsi*10+5005)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*10+6686)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*10+5031)*1+lsi)*1]), &(stack[((hsi*10+5021)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8014)*1+lsi)*1]), &(stack[((hsi*15+7984)*1+lsi)*1]), &(stack[((hsi*10+7323)*1+lsi)*1]), &(stack[((hsi*15+5334)*1+lsi)*1]), &(stack[((hsi*15+5041)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*15+6736)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8035)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]), &(stack[((hsi*15+5066)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*21+8014)*1+lsi)*1]), &(stack[((hsi*15+7984)*1+lsi)*1]), &(stack[((hsi*21+5349)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*21+8035)*1+lsi)*1]), &(stack[((hsi*21+6808)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8056)*1+lsi)*1]), &(stack[((hsi*21+8035)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*21+5153)*1+lsi)*1]), &(stack[((hsi*21+5132)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5132)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*21+8014)*1+lsi)*1]), &(stack[((hsi*28+5370)*1+lsi)*1]), &(stack[((hsi*28+5174)*1+lsi)*1]), &(stack[((hsi*28+8056)*1+lsi)*1]), &(stack[((hsi*28+6906)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8084)*1+lsi)*1]), &(stack[((hsi*28+8056)*1+lsi)*1]), &(stack[((hsi*21+8035)*1+lsi)*1]), &(stack[((hsi*28+5251)*1+lsi)*1]), &(stack[((hsi*28+5223)*1+lsi)*1]), &(stack[((hsi*28+6970)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5223)*1+lsi)*1]), &(stack[((hsi*36+5132)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*36+5398)*1+lsi)*1]), &(stack[((hsi*36+5279)*1+lsi)*1]), &(stack[((hsi*36+8084)*1+lsi)*1]), &(stack[((hsi*36+7034)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6970)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*3+6970)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+4975)*1+lsi)*1]), &(stack[((hsi*3+7308)*1+lsi)*1]), &(stack[((hsi*3+5315)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*3+6970)*1+lsi)*1]), &(stack[((hsi*6+4984)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*6+5318)*1+lsi)*1]), &(stack[((hsi*6+6648)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*10+5005)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*10+5324)*1+lsi)*1]), &(stack[((hsi*10+6676)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*15+5041)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*15+5334)*1+lsi)*1]), &(stack[((hsi*15+6721)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5021)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*21+8035)*1+lsi)*1]), &(stack[((hsi*21+5349)*1+lsi)*1]), &(stack[((hsi*21+6787)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5315)*1+lsi)*1]), &(stack[((hsi*28+5021)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*28+5174)*1+lsi)*1]), &(stack[((hsi*28+8056)*1+lsi)*1]), &(stack[((hsi*28+5370)*1+lsi)*1]), &(stack[((hsi*28+6878)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5351)*1+lsi)*1]), &(stack[((hsi*36+5315)*1+lsi)*1]), &(stack[((hsi*28+5021)*1+lsi)*1]), &(stack[((hsi*36+5279)*1+lsi)*1]), &(stack[((hsi*36+8084)*1+lsi)*1]), &(stack[((hsi*36+5398)*1+lsi)*1]), &(stack[((hsi*36+6998)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5268)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5271)*1+lsi)*1]), &(stack[((hsi*3+5268)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+5598)*1+lsi)*1]), &(stack[((hsi*3+6970)*1+lsi)*1]), &(stack[((hsi*3+5434)*1+lsi)*1]), &(stack[((hsi*3+7305)*1+lsi)*1]), &(stack[((hsi*3+4990)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5277)*1+lsi)*1]), &(stack[((hsi*6+5271)*1+lsi)*1]), &(stack[((hsi*3+5268)*1+lsi)*1]), &(stack[((hsi*6+5601)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*6+5437)*1+lsi)*1]), &(stack[((hsi*6+7311)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*10+5277)*1+lsi)*1]), &(stack[((hsi*6+5271)*1+lsi)*1]), &(stack[((hsi*10+5607)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*10+5443)*1+lsi)*1]), &(stack[((hsi*10+7323)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5396)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*10+5277)*1+lsi)*1]), &(stack[((hsi*15+5617)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*15+5453)*1+lsi)*1]), &(stack[((hsi*15+7984)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5268)*1+lsi)*1]), &(stack[((hsi*21+5396)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*21+5632)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*21+5468)*1+lsi)*1]), &(stack[((hsi*21+8014)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8120)*1+lsi)*1]), &(stack[((hsi*28+5268)*1+lsi)*1]), &(stack[((hsi*21+5396)*1+lsi)*1]), &(stack[((hsi*28+5653)*1+lsi)*1]), &(stack[((hsi*28+5021)*1+lsi)*1]), &(stack[((hsi*28+5489)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*28+7115)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8156)*1+lsi)*1]), &(stack[((hsi*36+8120)*1+lsi)*1]), &(stack[((hsi*28+5268)*1+lsi)*1]), &(stack[((hsi*36+5681)*1+lsi)*1]), &(stack[((hsi*36+5315)*1+lsi)*1]), &(stack[((hsi*36+5517)*1+lsi)*1]), &(stack[((hsi*36+5132)*1+lsi)*1]), &(stack[((hsi*36+7143)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8201)*1+lsi)*1]), &(stack[((hsi*45+8156)*1+lsi)*1]), &(stack[((hsi*36+8120)*1+lsi)*1]), &(stack[((hsi*45+5717)*1+lsi)*1]), &(stack[((hsi*45+5351)*1+lsi)*1]), &(stack[((hsi*45+5553)*1+lsi)*1]), &(stack[((hsi*45+5223)*1+lsi)*1]), &(stack[((hsi*45+7179)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4522)*1+lsi)*1]),&(stack[((hsi*55+8201)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5268)*1+lsi)*1]), &(stack[((hsi*36+8084)*1+lsi)*1]), &(stack[((hsi*28+8056)*1+lsi)*1]), &(stack[((hsi*36+5936)*1+lsi)*1]), &(stack[((hsi*36+5835)*1+lsi)*1]), &(stack[((hsi*36+7269)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8256)*1+lsi)*1]), &(stack[((hsi*45+5223)*1+lsi)*1]), &(stack[((hsi*36+5132)*1+lsi)*1]), &(stack[((hsi*45+6017)*1+lsi)*1]), &(stack[((hsi*45+5972)*1+lsi)*1]), &(stack[((hsi*45+5268)*1+lsi)*1]), &(stack[((hsi*45+7443)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8311)*1+lsi)*1]), &(stack[((hsi*45+5351)*1+lsi)*1]), &(stack[((hsi*36+5315)*1+lsi)*1]), &(stack[((hsi*45+5972)*1+lsi)*1]), &(stack[((hsi*45+5268)*1+lsi)*1]), &(stack[((hsi*45+6017)*1+lsi)*1]), &(stack[((hsi*45+7398)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+8366)*1+lsi)*1]), &(stack[((hsi*55+8201)*1+lsi)*1]), &(stack[((hsi*45+8156)*1+lsi)*1]), &(stack[((hsi*55+6117)*1+lsi)*1]), &(stack[((hsi*55+8311)*1+lsi)*1]), &(stack[((hsi*55+6062)*1+lsi)*1]), &(stack[((hsi*55+8256)*1+lsi)*1]), &(stack[((hsi*55+7543)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4456)*1+lsi)*1]),&(stack[((hsi*66+8366)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8120)*1+lsi)*1]), &(stack[((hsi*45+5268)*1+lsi)*1]), &(stack[((hsi*36+8084)*1+lsi)*1]), &(stack[((hsi*45+6283)*1+lsi)*1]), &(stack[((hsi*45+6238)*1+lsi)*1]), &(stack[((hsi*45+7224)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+8432)*1+lsi)*1]), &(stack[((hsi*55+8256)*1+lsi)*1]), &(stack[((hsi*45+5223)*1+lsi)*1]), &(stack[((hsi*55+6383)*1+lsi)*1]), &(stack[((hsi*55+6328)*1+lsi)*1]), &(stack[((hsi*55+8120)*1+lsi)*1]), &(stack[((hsi*55+7719)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+8498)*1+lsi)*1]), &(stack[((hsi*55+8311)*1+lsi)*1]), &(stack[((hsi*45+5351)*1+lsi)*1]), &(stack[((hsi*55+6328)*1+lsi)*1]), &(stack[((hsi*55+8120)*1+lsi)*1]), &(stack[((hsi*55+6383)*1+lsi)*1]), &(stack[((hsi*55+7664)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+8564)*1+lsi)*1]), &(stack[((hsi*66+8366)*1+lsi)*1]), &(stack[((hsi*55+8201)*1+lsi)*1]), &(stack[((hsi*66+6504)*1+lsi)*1]), &(stack[((hsi*66+8498)*1+lsi)*1]), &(stack[((hsi*66+6438)*1+lsi)*1]), &(stack[((hsi*66+8432)*1+lsi)*1]), &(stack[((hsi*66+7840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4378)*1+lsi)*1]),&(stack[((hsi*78+8564)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5396)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5399)*1+lsi)*1]), &(stack[((hsi*3+5396)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*3+5874)*1+lsi)*1]), &(stack[((hsi*3+7308)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5168)*1+lsi)*1]), &(stack[((hsi*6+5399)*1+lsi)*1]), &(stack[((hsi*3+5396)*1+lsi)*1]), &(stack[((hsi*6+6648)*1+lsi)*1]), &(stack[((hsi*6+6654)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*10+5168)*1+lsi)*1]), &(stack[((hsi*6+5399)*1+lsi)*1]), &(stack[((hsi*10+6676)*1+lsi)*1]), &(stack[((hsi*10+6686)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5405)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*10+5168)*1+lsi)*1]), &(stack[((hsi*15+6721)*1+lsi)*1]), &(stack[((hsi*15+6736)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*21+5405)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*21+6787)*1+lsi)*1]), &(stack[((hsi*21+6808)*1+lsi)*1]), &(stack[((hsi*21+8035)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6787)*1+lsi)*1]), &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*21+5405)*1+lsi)*1]), &(stack[((hsi*28+6878)*1+lsi)*1]), &(stack[((hsi*28+6906)*1+lsi)*1]), &(stack[((hsi*28+8056)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6878)*1+lsi)*1]), &(stack[((hsi*36+6787)*1+lsi)*1]), &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*36+6998)*1+lsi)*1]), &(stack[((hsi*36+7034)*1+lsi)*1]), &(stack[((hsi*36+8084)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+4990)*1+lsi)*1]), &(stack[((hsi*3+5396)*1+lsi)*1]), &(stack[((hsi*3+5871)*1+lsi)*1]), &(stack[((hsi*3+6970)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*6+5399)*1+lsi)*1]), &(stack[((hsi*6+5801)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*10+5168)*1+lsi)*1]), &(stack[((hsi*10+6660)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6973)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*15+6696)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8035)*1+lsi)*1]), &(stack[((hsi*21+6973)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*21+5405)*1+lsi)*1]), &(stack[((hsi*21+6751)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6994)*1+lsi)*1]), &(stack[((hsi*28+8035)*1+lsi)*1]), &(stack[((hsi*21+6973)*1+lsi)*1]), &(stack[((hsi*28+7115)*1+lsi)*1]), &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*28+6829)*1+lsi)*1]), &(stack[((hsi*28+5021)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8063)*1+lsi)*1]), &(stack[((hsi*36+6994)*1+lsi)*1]), &(stack[((hsi*28+8035)*1+lsi)*1]), &(stack[((hsi*36+7143)*1+lsi)*1]), &(stack[((hsi*36+6787)*1+lsi)*1]), &(stack[((hsi*36+6934)*1+lsi)*1]), &(stack[((hsi*36+5315)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8642)*1+lsi)*1]), &(stack[((hsi*45+8063)*1+lsi)*1]), &(stack[((hsi*36+6994)*1+lsi)*1]), &(stack[((hsi*45+7179)*1+lsi)*1]), &(stack[((hsi*45+6878)*1+lsi)*1]), &(stack[((hsi*45+7070)*1+lsi)*1]), &(stack[((hsi*45+5351)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4323)*1+lsi)*1]),&(stack[((hsi*55+8642)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6973)*1+lsi)*1]), &(stack[((hsi*45+6878)*1+lsi)*1]), &(stack[((hsi*36+6787)*1+lsi)*1]), &(stack[((hsi*45+7398)*1+lsi)*1]), &(stack[((hsi*45+7443)*1+lsi)*1]), &(stack[((hsi*45+5268)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+8697)*1+lsi)*1]), &(stack[((hsi*55+8642)*1+lsi)*1]), &(stack[((hsi*45+8063)*1+lsi)*1]), &(stack[((hsi*55+7543)*1+lsi)*1]), &(stack[((hsi*55+6973)*1+lsi)*1]), &(stack[((hsi*55+7488)*1+lsi)*1]), &(stack[((hsi*55+8311)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4257)*1+lsi)*1]),&(stack[((hsi*66+8697)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+8035)*1+lsi)*1]), &(stack[((hsi*55+6973)*1+lsi)*1]), &(stack[((hsi*45+6878)*1+lsi)*1]), &(stack[((hsi*55+7664)*1+lsi)*1]), &(stack[((hsi*55+7719)*1+lsi)*1]), &(stack[((hsi*55+8120)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+8763)*1+lsi)*1]), &(stack[((hsi*66+8697)*1+lsi)*1]), &(stack[((hsi*55+8642)*1+lsi)*1]), &(stack[((hsi*66+7840)*1+lsi)*1]), &(stack[((hsi*66+8035)*1+lsi)*1]), &(stack[((hsi*66+7774)*1+lsi)*1]), &(stack[((hsi*66+8498)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4179)*1+lsi)*1]),&(stack[((hsi*78+8763)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+6970)*1+lsi)*1]), &(stack[((hsi*3+7305)*1+lsi)*1]), &(stack[((hsi*3+5396)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*6+7311)*1+lsi)*1]), &(stack[((hsi*6+5399)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*10+7323)*1+lsi)*1]), &(stack[((hsi*10+5168)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*15+7984)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8841)*1+lsi)*1]), &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*21+8014)*1+lsi)*1]), &(stack[((hsi*21+5405)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8869)*1+lsi)*1]), &(stack[((hsi*28+8841)*1+lsi)*1]), &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*28+5021)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*28+6721)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8905)*1+lsi)*1]), &(stack[((hsi*36+8869)*1+lsi)*1]), &(stack[((hsi*28+8841)*1+lsi)*1]), &(stack[((hsi*36+5315)*1+lsi)*1]), &(stack[((hsi*36+5132)*1+lsi)*1]), &(stack[((hsi*36+6787)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8950)*1+lsi)*1]), &(stack[((hsi*45+8905)*1+lsi)*1]), &(stack[((hsi*36+8869)*1+lsi)*1]), &(stack[((hsi*45+5351)*1+lsi)*1]), &(stack[((hsi*45+5223)*1+lsi)*1]), &(stack[((hsi*45+6878)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4124)*1+lsi)*1]),&(stack[((hsi*55+8950)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9005)*1+lsi)*1]), &(stack[((hsi*55+8950)*1+lsi)*1]), &(stack[((hsi*45+8905)*1+lsi)*1]), &(stack[((hsi*55+8311)*1+lsi)*1]), &(stack[((hsi*55+8256)*1+lsi)*1]), &(stack[((hsi*55+6973)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4058)*1+lsi)*1]),&(stack[((hsi*66+9005)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+8841)*1+lsi)*1]), &(stack[((hsi*66+9005)*1+lsi)*1]), &(stack[((hsi*55+8950)*1+lsi)*1]), &(stack[((hsi*66+8498)*1+lsi)*1]), &(stack[((hsi*66+8432)*1+lsi)*1]), &(stack[((hsi*66+8035)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3980)*1+lsi)*1]),&(stack[((hsi*78+8841)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+5871)*1+lsi)*1]), &(stack[((hsi*3+4990)*1+lsi)*1]), &(stack[((hsi*3+5396)*1+lsi)*1]), &(stack[((hsi*3+7305)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*6+5801)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*6+5399)*1+lsi)*1]), &(stack[((hsi*6+7311)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*10+6660)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*10+5168)*1+lsi)*1]), &(stack[((hsi*10+7323)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*15+6696)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*15+7984)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5168)*1+lsi)*1]), &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*21+6751)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*21+5405)*1+lsi)*1]), &(stack[((hsi*21+8014)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5396)*1+lsi)*1]), &(stack[((hsi*28+5168)*1+lsi)*1]), &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*28+6829)*1+lsi)*1]), &(stack[((hsi*28+7115)*1+lsi)*1]), &(stack[((hsi*28+6721)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+5396)*1+lsi)*1]), &(stack[((hsi*28+5168)*1+lsi)*1]), &(stack[((hsi*36+6934)*1+lsi)*1]), &(stack[((hsi*36+7143)*1+lsi)*1]), &(stack[((hsi*36+6787)*1+lsi)*1]), &(stack[((hsi*36+5132)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9116)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+5396)*1+lsi)*1]), &(stack[((hsi*45+7070)*1+lsi)*1]), &(stack[((hsi*45+7179)*1+lsi)*1]), &(stack[((hsi*45+6878)*1+lsi)*1]), &(stack[((hsi*45+5223)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3925)*1+lsi)*1]),&(stack[((hsi*55+9116)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9171)*1+lsi)*1]), &(stack[((hsi*55+9116)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*55+7488)*1+lsi)*1]), &(stack[((hsi*55+7543)*1+lsi)*1]), &(stack[((hsi*55+6973)*1+lsi)*1]), &(stack[((hsi*55+8256)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3859)*1+lsi)*1]),&(stack[((hsi*66+9171)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9237)*1+lsi)*1]), &(stack[((hsi*66+9171)*1+lsi)*1]), &(stack[((hsi*55+9116)*1+lsi)*1]), &(stack[((hsi*66+7774)*1+lsi)*1]), &(stack[((hsi*66+7840)*1+lsi)*1]), &(stack[((hsi*66+8035)*1+lsi)*1]), &(stack[((hsi*66+8432)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3781)*1+lsi)*1]),&(stack[((hsi*78+9237)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+5434)*1+lsi)*1]), &(stack[((hsi*3+7305)*1+lsi)*1]), &(stack[((hsi*3+5598)*1+lsi)*1]), &(stack[((hsi*3+6970)*1+lsi)*1]), &(stack[((hsi*3+5871)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*6+5437)*1+lsi)*1]), &(stack[((hsi*6+7311)*1+lsi)*1]), &(stack[((hsi*6+5601)*1+lsi)*1]), &(stack[((hsi*6+6670)*1+lsi)*1]), &(stack[((hsi*6+5801)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*6+7317)*1+lsi)*1]), &(stack[((hsi*10+5443)*1+lsi)*1]), &(stack[((hsi*10+7323)*1+lsi)*1]), &(stack[((hsi*10+5607)*1+lsi)*1]), &(stack[((hsi*10+6711)*1+lsi)*1]), &(stack[((hsi*10+6660)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6878)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*10+7333)*1+lsi)*1]), &(stack[((hsi*15+5453)*1+lsi)*1]), &(stack[((hsi*15+7984)*1+lsi)*1]), &(stack[((hsi*15+5617)*1+lsi)*1]), &(stack[((hsi*15+6772)*1+lsi)*1]), &(stack[((hsi*15+6696)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6772)*1+lsi)*1]), &(stack[((hsi*21+6878)*1+lsi)*1]), &(stack[((hsi*15+7999)*1+lsi)*1]), &(stack[((hsi*21+5468)*1+lsi)*1]), &(stack[((hsi*21+8014)*1+lsi)*1]), &(stack[((hsi*21+5632)*1+lsi)*1]), &(stack[((hsi*21+6857)*1+lsi)*1]), &(stack[((hsi*21+6751)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7984)*1+lsi)*1]), &(stack[((hsi*28+6772)*1+lsi)*1]), &(stack[((hsi*21+6878)*1+lsi)*1]), &(stack[((hsi*28+5489)*1+lsi)*1]), &(stack[((hsi*28+5066)*1+lsi)*1]), &(stack[((hsi*28+5653)*1+lsi)*1]), &(stack[((hsi*28+5021)*1+lsi)*1]), &(stack[((hsi*28+6829)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+7984)*1+lsi)*1]), &(stack[((hsi*28+6772)*1+lsi)*1]), &(stack[((hsi*36+5517)*1+lsi)*1]), &(stack[((hsi*36+5132)*1+lsi)*1]), &(stack[((hsi*36+5681)*1+lsi)*1]), &(stack[((hsi*36+5315)*1+lsi)*1]), &(stack[((hsi*36+6934)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6857)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+7984)*1+lsi)*1]), &(stack[((hsi*45+5553)*1+lsi)*1]), &(stack[((hsi*45+5223)*1+lsi)*1]), &(stack[((hsi*45+5717)*1+lsi)*1]), &(stack[((hsi*45+5351)*1+lsi)*1]), &(stack[((hsi*45+7070)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3726)*1+lsi)*1]),&(stack[((hsi*55+6857)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+5313)*1+lsi)*1]), &(stack[((hsi*55+6857)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*55+6062)*1+lsi)*1]), &(stack[((hsi*55+8256)*1+lsi)*1]), &(stack[((hsi*55+6117)*1+lsi)*1]), &(stack[((hsi*55+8311)*1+lsi)*1]), &(stack[((hsi*55+7488)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3660)*1+lsi)*1]),&(stack[((hsi*66+5313)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9315)*1+lsi)*1]), &(stack[((hsi*66+5313)*1+lsi)*1]), &(stack[((hsi*55+6857)*1+lsi)*1]), &(stack[((hsi*66+6438)*1+lsi)*1]), &(stack[((hsi*66+8432)*1+lsi)*1]), &(stack[((hsi*66+6504)*1+lsi)*1]), &(stack[((hsi*66+8498)*1+lsi)*1]), &(stack[((hsi*66+7774)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3582)*1+lsi)*1]),&(stack[((hsi*78+9315)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5132)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+5871)*1+lsi)*1]), &(stack[((hsi*3+4990)*1+lsi)*1]), &(stack[((hsi*3+5434)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5871)*1+lsi)*1]), &(stack[((hsi*6+5132)*1+lsi)*1]), &(stack[((hsi*3+5798)*1+lsi)*1]), &(stack[((hsi*6+5801)*1+lsi)*1]), &(stack[((hsi*6+5015)*1+lsi)*1]), &(stack[((hsi*6+5437)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*10+5871)*1+lsi)*1]), &(stack[((hsi*6+5132)*1+lsi)*1]), &(stack[((hsi*10+6660)*1+lsi)*1]), &(stack[((hsi*10+5056)*1+lsi)*1]), &(stack[((hsi*10+5443)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4990)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*10+5871)*1+lsi)*1]), &(stack[((hsi*15+6696)*1+lsi)*1]), &(stack[((hsi*15+5117)*1+lsi)*1]), &(stack[((hsi*15+5453)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5011)*1+lsi)*1]), &(stack[((hsi*21+4990)*1+lsi)*1]), &(stack[((hsi*15+4975)*1+lsi)*1]), &(stack[((hsi*21+6751)*1+lsi)*1]), &(stack[((hsi*21+5202)*1+lsi)*1]), &(stack[((hsi*21+5468)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5039)*1+lsi)*1]), &(stack[((hsi*28+5011)*1+lsi)*1]), &(stack[((hsi*21+4990)*1+lsi)*1]), &(stack[((hsi*28+6829)*1+lsi)*1]), &(stack[((hsi*28+7115)*1+lsi)*1]), &(stack[((hsi*28+5489)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+5039)*1+lsi)*1]), &(stack[((hsi*28+5011)*1+lsi)*1]), &(stack[((hsi*36+6934)*1+lsi)*1]), &(stack[((hsi*36+7143)*1+lsi)*1]), &(stack[((hsi*36+5517)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5379)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+5039)*1+lsi)*1]), &(stack[((hsi*45+7070)*1+lsi)*1]), &(stack[((hsi*45+7179)*1+lsi)*1]), &(stack[((hsi*45+5553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3527)*1+lsi)*1]),&(stack[((hsi*55+5379)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+4975)*1+lsi)*1]), &(stack[((hsi*55+5379)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*55+7488)*1+lsi)*1]), &(stack[((hsi*55+7543)*1+lsi)*1]), &(stack[((hsi*55+6062)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3461)*1+lsi)*1]),&(stack[((hsi*66+4975)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+5041)*1+lsi)*1]), &(stack[((hsi*66+4975)*1+lsi)*1]), &(stack[((hsi*55+5379)*1+lsi)*1]), &(stack[((hsi*66+7774)*1+lsi)*1]), &(stack[((hsi*66+7840)*1+lsi)*1]), &(stack[((hsi*66+6438)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3383)*1+lsi)*1]),&(stack[((hsi*78+5041)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6648)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6651)*1+lsi)*1]), &(stack[((hsi*3+6648)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+5434)*1+lsi)*1]), &(stack[((hsi*3+5598)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5871)*1+lsi)*1]), &(stack[((hsi*6+6651)*1+lsi)*1]), &(stack[((hsi*3+6648)*1+lsi)*1]), &(stack[((hsi*6+5437)*1+lsi)*1]), &(stack[((hsi*6+5601)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6657)*1+lsi)*1]), &(stack[((hsi*10+5871)*1+lsi)*1]), &(stack[((hsi*6+6651)*1+lsi)*1]), &(stack[((hsi*10+5443)*1+lsi)*1]), &(stack[((hsi*10+5607)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*15+6657)*1+lsi)*1]), &(stack[((hsi*10+5871)*1+lsi)*1]), &(stack[((hsi*15+5453)*1+lsi)*1]), &(stack[((hsi*15+5617)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6672)*1+lsi)*1]), &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*15+6657)*1+lsi)*1]), &(stack[((hsi*21+5468)*1+lsi)*1]), &(stack[((hsi*21+5632)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7049)*1+lsi)*1]), &(stack[((hsi*28+6672)*1+lsi)*1]), &(stack[((hsi*21+7028)*1+lsi)*1]), &(stack[((hsi*28+5489)*1+lsi)*1]), &(stack[((hsi*28+5653)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+7049)*1+lsi)*1]), &(stack[((hsi*28+6672)*1+lsi)*1]), &(stack[((hsi*36+5517)*1+lsi)*1]), &(stack[((hsi*36+5681)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6648)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+7049)*1+lsi)*1]), &(stack[((hsi*45+5553)*1+lsi)*1]), &(stack[((hsi*45+5717)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3328)*1+lsi)*1]),&(stack[((hsi*55+6648)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+5434)*1+lsi)*1]), &(stack[((hsi*55+6648)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*55+6062)*1+lsi)*1]), &(stack[((hsi*55+6117)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3262)*1+lsi)*1]),&(stack[((hsi*66+5434)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+5500)*1+lsi)*1]), &(stack[((hsi*66+5434)*1+lsi)*1]), &(stack[((hsi*55+6648)*1+lsi)*1]), &(stack[((hsi*66+6438)*1+lsi)*1]), &(stack[((hsi*66+6504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3184)*1+lsi)*1]),&(stack[((hsi*78+5500)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3129)*1+lsi)*1]),&(stack[((hsi*55+6117)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3063)*1+lsi)*1]),&(stack[((hsi*66+6504)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+5762)*1+lsi)*1]), &(stack[((hsi*28+5807)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7028)*1+lsi)*1]), &(stack[((hsi*45+6283)*1+lsi)*1]), &(stack[((hsi*36+5936)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5578)*1+lsi)*1]), &(stack[((hsi*45+6238)*1+lsi)*1]), &(stack[((hsi*36+5835)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+6703)*1+lsi)*1]), &(stack[((hsi*55+6383)*1+lsi)*1]), &(stack[((hsi*45+6017)*1+lsi)*1]), &(stack[((hsi*55+5578)*1+lsi)*1]), &(stack[((hsi*55+7028)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+5119)*1+lsi)*1]), &(stack[((hsi*55+6328)*1+lsi)*1]), &(stack[((hsi*45+5972)*1+lsi)*1]), &(stack[((hsi*55+7028)*1+lsi)*1]), &(stack[((hsi*55+5578)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+7083)*1+lsi)*1]), &(stack[((hsi*66+6504)*1+lsi)*1]), &(stack[((hsi*55+6117)*1+lsi)*1]), &(stack[((hsi*66+5119)*1+lsi)*1]), &(stack[((hsi*66+6703)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2985)*1+lsi)*1]),&(stack[((hsi*78+7083)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2930)*1+lsi)*1]),&(stack[((hsi*55+7543)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2864)*1+lsi)*1]),&(stack[((hsi*66+7840)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5633)*1+lsi)*1]), &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*36+7269)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+5936)*1+lsi)*1]), &(stack[((hsi*55+7719)*1+lsi)*1]), &(stack[((hsi*45+7443)*1+lsi)*1]), &(stack[((hsi*55+5633)*1+lsi)*1]), &(stack[((hsi*55+5578)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+6769)*1+lsi)*1]), &(stack[((hsi*55+7664)*1+lsi)*1]), &(stack[((hsi*45+7398)*1+lsi)*1]), &(stack[((hsi*55+5633)*1+lsi)*1]), &(stack[((hsi*55+7028)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+7398)*1+lsi)*1]), &(stack[((hsi*66+7840)*1+lsi)*1]), &(stack[((hsi*55+7543)*1+lsi)*1]), &(stack[((hsi*66+6769)*1+lsi)*1]), &(stack[((hsi*66+5936)*1+lsi)*1]), &(stack[((hsi*66+5119)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2786)*1+lsi)*1]),&(stack[((hsi*78+7398)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2731)*1+lsi)*1]),&(stack[((hsi*55+8311)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2665)*1+lsi)*1]),&(stack[((hsi*66+8498)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+5185)*1+lsi)*1]), &(stack[((hsi*55+8120)*1+lsi)*1]), &(stack[((hsi*45+5268)*1+lsi)*1]), &(stack[((hsi*55+7028)*1+lsi)*1]), &(stack[((hsi*55+5578)*1+lsi)*1]), &(stack[((hsi*55+5633)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+5798)*1+lsi)*1]), &(stack[((hsi*66+8498)*1+lsi)*1]), &(stack[((hsi*55+8311)*1+lsi)*1]), &(stack[((hsi*66+5119)*1+lsi)*1]), &(stack[((hsi*66+5185)*1+lsi)*1]), &(stack[((hsi*66+6703)*1+lsi)*1]), &(stack[((hsi*66+6769)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2587)*1+lsi)*1]),&(stack[((hsi*78+5798)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2532)*1+lsi)*1]),&(stack[((hsi*55+6973)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2466)*1+lsi)*1]),&(stack[((hsi*66+8035)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9393)*1+lsi)*1]), &(stack[((hsi*66+8035)*1+lsi)*1]), &(stack[((hsi*55+6973)*1+lsi)*1]), &(stack[((hsi*66+6769)*1+lsi)*1]), &(stack[((hsi*66+5936)*1+lsi)*1]), &(stack[((hsi*66+5185)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2388)*1+lsi)*1]),&(stack[((hsi*78+9393)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2333)*1+lsi)*1]),&(stack[((hsi*55+8256)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2267)*1+lsi)*1]),&(stack[((hsi*66+8432)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9471)*1+lsi)*1]), &(stack[((hsi*66+8432)*1+lsi)*1]), &(stack[((hsi*55+8256)*1+lsi)*1]), &(stack[((hsi*66+6703)*1+lsi)*1]), &(stack[((hsi*66+5119)*1+lsi)*1]), &(stack[((hsi*66+5185)*1+lsi)*1]), &(stack[((hsi*66+5936)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2189)*1+lsi)*1]),&(stack[((hsi*78+9471)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2134)*1+lsi)*1]),&(stack[((hsi*55+7488)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2068)*1+lsi)*1]),&(stack[((hsi*66+7774)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9549)*1+lsi)*1]), &(stack[((hsi*66+7774)*1+lsi)*1]), &(stack[((hsi*55+7488)*1+lsi)*1]), &(stack[((hsi*66+5936)*1+lsi)*1]), &(stack[((hsi*66+6769)*1+lsi)*1]), &(stack[((hsi*66+6703)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1990)*1+lsi)*1]),&(stack[((hsi*78+9549)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1935)*1+lsi)*1]),&(stack[((hsi*55+6062)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1869)*1+lsi)*1]),&(stack[((hsi*66+6438)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9627)*1+lsi)*1]), &(stack[((hsi*66+6438)*1+lsi)*1]), &(stack[((hsi*55+6062)*1+lsi)*1]), &(stack[((hsi*66+6703)*1+lsi)*1]), &(stack[((hsi*66+5119)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1791)*1+lsi)*1]),&(stack[((hsi*78+9627)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1736)*1+lsi)*1]),&(stack[((hsi*55+6328)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1670)*1+lsi)*1]),&(stack[((hsi*66+5119)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5688)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]), &(stack[((hsi*36+5762)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+7269)*1+lsi)*1]), &(stack[((hsi*55+5578)*1+lsi)*1]), &(stack[((hsi*45+6238)*1+lsi)*1]), &(stack[((hsi*55+5688)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9705)*1+lsi)*1]), &(stack[((hsi*55+7028)*1+lsi)*1]), &(stack[((hsi*45+6283)*1+lsi)*1]), &(stack[((hsi*55+5688)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+6238)*1+lsi)*1]), &(stack[((hsi*66+5119)*1+lsi)*1]), &(stack[((hsi*55+6328)*1+lsi)*1]), &(stack[((hsi*66+9705)*1+lsi)*1]), &(stack[((hsi*66+7269)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1592)*1+lsi)*1]),&(stack[((hsi*78+6238)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1537)*1+lsi)*1]),&(stack[((hsi*55+7664)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1471)*1+lsi)*1]),&(stack[((hsi*66+6769)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9771)*1+lsi)*1]), &(stack[((hsi*55+5633)*1+lsi)*1]), &(stack[((hsi*45+7224)*1+lsi)*1]), &(stack[((hsi*55+5688)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+7161)*1+lsi)*1]), &(stack[((hsi*66+6769)*1+lsi)*1]), &(stack[((hsi*55+7664)*1+lsi)*1]), &(stack[((hsi*66+9771)*1+lsi)*1]), &(stack[((hsi*66+9705)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1393)*1+lsi)*1]),&(stack[((hsi*78+7161)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1338)*1+lsi)*1]),&(stack[((hsi*55+8120)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1272)*1+lsi)*1]),&(stack[((hsi*66+5185)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9837)*1+lsi)*1]), &(stack[((hsi*66+5185)*1+lsi)*1]), &(stack[((hsi*55+8120)*1+lsi)*1]), &(stack[((hsi*66+9705)*1+lsi)*1]), &(stack[((hsi*66+7269)*1+lsi)*1]), &(stack[((hsi*66+9771)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1194)*1+lsi)*1]),&(stack[((hsi*78+9837)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1139)*1+lsi)*1]),&(stack[((hsi*55+7719)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1073)*1+lsi)*1]),&(stack[((hsi*66+5936)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9915)*1+lsi)*1]), &(stack[((hsi*66+5936)*1+lsi)*1]), &(stack[((hsi*55+7719)*1+lsi)*1]), &(stack[((hsi*66+9771)*1+lsi)*1]), &(stack[((hsi*66+7269)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+995)*1+lsi)*1]),&(stack[((hsi*78+9915)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+940)*1+lsi)*1]),&(stack[((hsi*55+6383)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+874)*1+lsi)*1]),&(stack[((hsi*66+6703)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9993)*1+lsi)*1]), &(stack[((hsi*66+6703)*1+lsi)*1]), &(stack[((hsi*55+6383)*1+lsi)*1]), &(stack[((hsi*66+7269)*1+lsi)*1]), &(stack[((hsi*66+9705)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+796)*1+lsi)*1]),&(stack[((hsi*78+9993)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+741)*1+lsi)*1]),&(stack[((hsi*55+7028)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+675)*1+lsi)*1]),&(stack[((hsi*66+9705)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10071)*1+lsi)*1]), &(stack[((hsi*55+5688)*1+lsi)*1]), &(stack[((hsi*45+9071)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10137)*1+lsi)*1]), &(stack[((hsi*66+9705)*1+lsi)*1]), &(stack[((hsi*55+7028)*1+lsi)*1]), &(stack[((hsi*66+10071)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+597)*1+lsi)*1]),&(stack[((hsi*78+10137)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+542)*1+lsi)*1]),&(stack[((hsi*55+5633)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+476)*1+lsi)*1]),&(stack[((hsi*66+9771)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10215)*1+lsi)*1]), &(stack[((hsi*66+9771)*1+lsi)*1]), &(stack[((hsi*55+5633)*1+lsi)*1]), &(stack[((hsi*66+10071)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+398)*1+lsi)*1]),&(stack[((hsi*78+10215)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+343)*1+lsi)*1]),&(stack[((hsi*55+5578)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+277)*1+lsi)*1]),&(stack[((hsi*66+7269)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10293)*1+lsi)*1]), &(stack[((hsi*66+7269)*1+lsi)*1]), &(stack[((hsi*55+5578)*1+lsi)*1]), &(stack[((hsi*66+10071)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+199)*1+lsi)*1]),&(stack[((hsi*78+10293)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+144)*1+lsi)*1]),&(stack[((hsi*55+5688)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+78)*1+lsi)*1]),&(stack[((hsi*66+10071)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10371)*1+lsi)*1]), &(stack[((hsi*66+10071)*1+lsi)*1]), &(stack[((hsi*55+5688)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+0)*1+lsi)*1]),&(stack[((hsi*78+10371)*1+lsi)*1]),78);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4975 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
