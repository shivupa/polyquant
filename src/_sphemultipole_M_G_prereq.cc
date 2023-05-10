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
void _sphemultipole_M_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9875)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9878)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9881)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9884)*1+lsi)*1]), &(stack[((hsi*3+9875)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+9881)*1+lsi)*1]), &(stack[((hsi*3+9878)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9890)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9893)*1+lsi)*1]), &(stack[((hsi*3+9878)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+9890)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9899)*1+lsi)*1]), &(stack[((hsi*3+9881)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+9890)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9905)*1+lsi)*1]), &(stack[((hsi*6+9884)*1+lsi)*1]), &(stack[((hsi*3+9875)*1+lsi)*1]), &(stack[((hsi*6+9899)*1+lsi)*1]), &(stack[((hsi*6+9893)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*3+9890)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9921)*1+lsi)*1]), &(stack[((hsi*6+9893)*1+lsi)*1]), &(stack[((hsi*3+9878)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9931)*1+lsi)*1]), &(stack[((hsi*6+9899)*1+lsi)*1]), &(stack[((hsi*3+9881)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9941)*1+lsi)*1]), &(stack[((hsi*10+9905)*1+lsi)*1]), &(stack[((hsi*6+9884)*1+lsi)*1]), &(stack[((hsi*10+9931)*1+lsi)*1]), &(stack[((hsi*10+9921)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*3+9890)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9966)*1+lsi)*1]), &(stack[((hsi*10+9921)*1+lsi)*1]), &(stack[((hsi*6+9893)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9981)*1+lsi)*1]), &(stack[((hsi*10+9931)*1+lsi)*1]), &(stack[((hsi*6+9899)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9996)*1+lsi)*1]), &(stack[((hsi*15+9941)*1+lsi)*1]), &(stack[((hsi*10+9905)*1+lsi)*1]), &(stack[((hsi*15+9981)*1+lsi)*1]), &(stack[((hsi*15+9966)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10032)*1+lsi)*1]), &(stack[((hsi*15+9966)*1+lsi)*1]), &(stack[((hsi*10+9921)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10053)*1+lsi)*1]), &(stack[((hsi*15+9981)*1+lsi)*1]), &(stack[((hsi*10+9931)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10074)*1+lsi)*1]), &(stack[((hsi*21+9996)*1+lsi)*1]), &(stack[((hsi*15+9941)*1+lsi)*1]), &(stack[((hsi*21+10053)*1+lsi)*1]), &(stack[((hsi*21+10032)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10123)*1+lsi)*1]), &(stack[((hsi*21+10032)*1+lsi)*1]), &(stack[((hsi*15+9966)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10151)*1+lsi)*1]), &(stack[((hsi*21+10053)*1+lsi)*1]), &(stack[((hsi*15+9981)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10179)*1+lsi)*1]), &(stack[((hsi*28+10074)*1+lsi)*1]), &(stack[((hsi*21+9996)*1+lsi)*1]), &(stack[((hsi*28+10151)*1+lsi)*1]), &(stack[((hsi*28+10123)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10215)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10218)*1+lsi)*1]), &(stack[((hsi*3+10215)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+9878)*1+lsi)*1]), &(stack[((hsi*3+9881)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10224)*1+lsi)*1]), &(stack[((hsi*6+10218)*1+lsi)*1]), &(stack[((hsi*3+10215)*1+lsi)*1]), &(stack[((hsi*6+9893)*1+lsi)*1]), &(stack[((hsi*6+9899)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10234)*1+lsi)*1]), &(stack[((hsi*10+10224)*1+lsi)*1]), &(stack[((hsi*6+10218)*1+lsi)*1]), &(stack[((hsi*10+9921)*1+lsi)*1]), &(stack[((hsi*10+9931)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10249)*1+lsi)*1]), &(stack[((hsi*15+10234)*1+lsi)*1]), &(stack[((hsi*10+10224)*1+lsi)*1]), &(stack[((hsi*15+9966)*1+lsi)*1]), &(stack[((hsi*15+9981)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10270)*1+lsi)*1]), &(stack[((hsi*21+10249)*1+lsi)*1]), &(stack[((hsi*15+10234)*1+lsi)*1]), &(stack[((hsi*21+10032)*1+lsi)*1]), &(stack[((hsi*21+10053)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10298)*1+lsi)*1]), &(stack[((hsi*28+10270)*1+lsi)*1]), &(stack[((hsi*21+10249)*1+lsi)*1]), &(stack[((hsi*28+10123)*1+lsi)*1]), &(stack[((hsi*28+10151)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10334)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10337)*1+lsi)*1]), &(stack[((hsi*3+10334)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+10215)*1+lsi)*1]), &(stack[((hsi*3+9875)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10343)*1+lsi)*1]), &(stack[((hsi*6+10337)*1+lsi)*1]), &(stack[((hsi*3+10334)*1+lsi)*1]), &(stack[((hsi*6+10218)*1+lsi)*1]), &(stack[((hsi*6+9884)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10353)*1+lsi)*1]), &(stack[((hsi*10+10343)*1+lsi)*1]), &(stack[((hsi*6+10337)*1+lsi)*1]), &(stack[((hsi*10+10224)*1+lsi)*1]), &(stack[((hsi*10+9905)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10368)*1+lsi)*1]), &(stack[((hsi*15+10353)*1+lsi)*1]), &(stack[((hsi*10+10343)*1+lsi)*1]), &(stack[((hsi*15+10234)*1+lsi)*1]), &(stack[((hsi*15+9941)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10389)*1+lsi)*1]), &(stack[((hsi*21+10368)*1+lsi)*1]), &(stack[((hsi*15+10353)*1+lsi)*1]), &(stack[((hsi*21+10249)*1+lsi)*1]), &(stack[((hsi*21+9996)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10417)*1+lsi)*1]), &(stack[((hsi*28+10389)*1+lsi)*1]), &(stack[((hsi*21+10368)*1+lsi)*1]), &(stack[((hsi*28+10270)*1+lsi)*1]), &(stack[((hsi*28+10074)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10453)*1+lsi)*1]), &(stack[((hsi*36+10417)*1+lsi)*1]), &(stack[((hsi*28+10389)*1+lsi)*1]), &(stack[((hsi*36+10298)*1+lsi)*1]), &(stack[((hsi*36+10179)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10498)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10501)*1+lsi)*1]), &(stack[((hsi*3+10498)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+9875)*1+lsi)*1]), &(stack[((hsi*3+10215)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10507)*1+lsi)*1]), &(stack[((hsi*6+10501)*1+lsi)*1]), &(stack[((hsi*3+10498)*1+lsi)*1]), &(stack[((hsi*6+9884)*1+lsi)*1]), &(stack[((hsi*6+10218)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10517)*1+lsi)*1]), &(stack[((hsi*10+10507)*1+lsi)*1]), &(stack[((hsi*6+10501)*1+lsi)*1]), &(stack[((hsi*10+9905)*1+lsi)*1]), &(stack[((hsi*10+10224)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10532)*1+lsi)*1]), &(stack[((hsi*15+10517)*1+lsi)*1]), &(stack[((hsi*10+10507)*1+lsi)*1]), &(stack[((hsi*15+9941)*1+lsi)*1]), &(stack[((hsi*15+10234)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10553)*1+lsi)*1]), &(stack[((hsi*21+10532)*1+lsi)*1]), &(stack[((hsi*15+10517)*1+lsi)*1]), &(stack[((hsi*21+9996)*1+lsi)*1]), &(stack[((hsi*21+10249)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10581)*1+lsi)*1]), &(stack[((hsi*28+10553)*1+lsi)*1]), &(stack[((hsi*21+10532)*1+lsi)*1]), &(stack[((hsi*28+10074)*1+lsi)*1]), &(stack[((hsi*28+10270)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10617)*1+lsi)*1]), &(stack[((hsi*36+10581)*1+lsi)*1]), &(stack[((hsi*28+10553)*1+lsi)*1]), &(stack[((hsi*36+10179)*1+lsi)*1]), &(stack[((hsi*36+10298)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10662)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*3+10662)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+10498)*1+lsi)*1]), &(stack[((hsi*3+10334)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10671)*1+lsi)*1]), &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*3+10662)*1+lsi)*1]), &(stack[((hsi*6+10501)*1+lsi)*1]), &(stack[((hsi*6+10337)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10681)*1+lsi)*1]), &(stack[((hsi*10+10671)*1+lsi)*1]), &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*10+10507)*1+lsi)*1]), &(stack[((hsi*10+10343)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10696)*1+lsi)*1]), &(stack[((hsi*15+10681)*1+lsi)*1]), &(stack[((hsi*10+10671)*1+lsi)*1]), &(stack[((hsi*15+10517)*1+lsi)*1]), &(stack[((hsi*15+10353)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10717)*1+lsi)*1]), &(stack[((hsi*21+10696)*1+lsi)*1]), &(stack[((hsi*15+10681)*1+lsi)*1]), &(stack[((hsi*21+10532)*1+lsi)*1]), &(stack[((hsi*21+10368)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10745)*1+lsi)*1]), &(stack[((hsi*28+10717)*1+lsi)*1]), &(stack[((hsi*21+10696)*1+lsi)*1]), &(stack[((hsi*28+10553)*1+lsi)*1]), &(stack[((hsi*28+10389)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10662)*1+lsi)*1]), &(stack[((hsi*36+10745)*1+lsi)*1]), &(stack[((hsi*28+10717)*1+lsi)*1]), &(stack[((hsi*36+10581)*1+lsi)*1]), &(stack[((hsi*36+10417)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10781)*1+lsi)*1]), &(stack[((hsi*45+10662)*1+lsi)*1]), &(stack[((hsi*36+10745)*1+lsi)*1]), &(stack[((hsi*45+10617)*1+lsi)*1]), &(stack[((hsi*45+10453)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9820)*1+lsi)*1]),&(stack[((hsi*55+10781)*1+lsi)*1]),55);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10707)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10735)*1+lsi)*1]), &(stack[((hsi*28+10123)*1+lsi)*1]), &(stack[((hsi*21+10032)*1+lsi)*1]), &(stack[((hsi*28+10707)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10836)*1+lsi)*1]), &(stack[((hsi*28+10151)*1+lsi)*1]), &(stack[((hsi*21+10053)*1+lsi)*1]), &(stack[((hsi*28+10707)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10872)*1+lsi)*1]), &(stack[((hsi*36+10179)*1+lsi)*1]), &(stack[((hsi*28+10074)*1+lsi)*1]), &(stack[((hsi*36+10836)*1+lsi)*1]), &(stack[((hsi*36+10735)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10917)*1+lsi)*1]), &(stack[((hsi*36+10298)*1+lsi)*1]), &(stack[((hsi*28+10270)*1+lsi)*1]), &(stack[((hsi*36+10735)*1+lsi)*1]), &(stack[((hsi*36+10836)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10962)*1+lsi)*1]), &(stack[((hsi*45+10453)*1+lsi)*1]), &(stack[((hsi*36+10417)*1+lsi)*1]), &(stack[((hsi*45+10917)*1+lsi)*1]), &(stack[((hsi*45+10872)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11017)*1+lsi)*1]), &(stack[((hsi*45+10617)*1+lsi)*1]), &(stack[((hsi*36+10581)*1+lsi)*1]), &(stack[((hsi*45+10872)*1+lsi)*1]), &(stack[((hsi*45+10917)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11072)*1+lsi)*1]), &(stack[((hsi*55+10781)*1+lsi)*1]), &(stack[((hsi*45+10662)*1+lsi)*1]), &(stack[((hsi*55+11017)*1+lsi)*1]), &(stack[((hsi*55+10962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+9754)*1+lsi)*1]),&(stack[((hsi*66+11072)*1+lsi)*1]),66);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10662)*1+lsi)*1]), &(stack[((hsi*28+10707)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11138)*1+lsi)*1]), &(stack[((hsi*36+10735)*1+lsi)*1]), &(stack[((hsi*28+10123)*1+lsi)*1]), &(stack[((hsi*36+10662)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11183)*1+lsi)*1]), &(stack[((hsi*36+10836)*1+lsi)*1]), &(stack[((hsi*28+10151)*1+lsi)*1]), &(stack[((hsi*36+10662)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11228)*1+lsi)*1]), &(stack[((hsi*45+10872)*1+lsi)*1]), &(stack[((hsi*36+10179)*1+lsi)*1]), &(stack[((hsi*45+11183)*1+lsi)*1]), &(stack[((hsi*45+11138)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11283)*1+lsi)*1]), &(stack[((hsi*45+10917)*1+lsi)*1]), &(stack[((hsi*36+10298)*1+lsi)*1]), &(stack[((hsi*45+11138)*1+lsi)*1]), &(stack[((hsi*45+11183)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11338)*1+lsi)*1]), &(stack[((hsi*55+10962)*1+lsi)*1]), &(stack[((hsi*45+10453)*1+lsi)*1]), &(stack[((hsi*55+11283)*1+lsi)*1]), &(stack[((hsi*55+11228)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11404)*1+lsi)*1]), &(stack[((hsi*55+11017)*1+lsi)*1]), &(stack[((hsi*45+10617)*1+lsi)*1]), &(stack[((hsi*55+11228)*1+lsi)*1]), &(stack[((hsi*55+11283)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+11470)*1+lsi)*1]), &(stack[((hsi*66+11072)*1+lsi)*1]), &(stack[((hsi*55+10781)*1+lsi)*1]), &(stack[((hsi*66+11404)*1+lsi)*1]), &(stack[((hsi*66+11338)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+9676)*1+lsi)*1]),&(stack[((hsi*78+11470)*1+lsi)*1]),78);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11548)*1+lsi)*1]), &(stack[((hsi*36+10662)*1+lsi)*1]), &(stack[((hsi*28+10707)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11593)*1+lsi)*1]), &(stack[((hsi*45+11138)*1+lsi)*1]), &(stack[((hsi*36+10735)*1+lsi)*1]), &(stack[((hsi*45+11548)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11648)*1+lsi)*1]), &(stack[((hsi*45+11183)*1+lsi)*1]), &(stack[((hsi*36+10836)*1+lsi)*1]), &(stack[((hsi*45+11548)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11703)*1+lsi)*1]), &(stack[((hsi*55+11228)*1+lsi)*1]), &(stack[((hsi*45+10872)*1+lsi)*1]), &(stack[((hsi*55+11648)*1+lsi)*1]), &(stack[((hsi*55+11593)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11769)*1+lsi)*1]), &(stack[((hsi*55+11283)*1+lsi)*1]), &(stack[((hsi*45+10917)*1+lsi)*1]), &(stack[((hsi*55+11593)*1+lsi)*1]), &(stack[((hsi*55+11648)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+11835)*1+lsi)*1]), &(stack[((hsi*66+11338)*1+lsi)*1]), &(stack[((hsi*55+10962)*1+lsi)*1]), &(stack[((hsi*66+11769)*1+lsi)*1]), &(stack[((hsi*66+11703)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+11913)*1+lsi)*1]), &(stack[((hsi*66+11404)*1+lsi)*1]), &(stack[((hsi*55+11017)*1+lsi)*1]), &(stack[((hsi*66+11703)*1+lsi)*1]), &(stack[((hsi*66+11769)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+11991)*1+lsi)*1]), &(stack[((hsi*78+11470)*1+lsi)*1]), &(stack[((hsi*66+11072)*1+lsi)*1]), &(stack[((hsi*78+11913)*1+lsi)*1]), &(stack[((hsi*78+11835)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+9585)*1+lsi)*1]),&(stack[((hsi*91+11991)*1+lsi)*1]),91);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12082)*1+lsi)*1]), &(stack[((hsi*45+11548)*1+lsi)*1]), &(stack[((hsi*36+10662)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12137)*1+lsi)*1]), &(stack[((hsi*55+11593)*1+lsi)*1]), &(stack[((hsi*45+11138)*1+lsi)*1]), &(stack[((hsi*55+12082)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12203)*1+lsi)*1]), &(stack[((hsi*55+11648)*1+lsi)*1]), &(stack[((hsi*45+11183)*1+lsi)*1]), &(stack[((hsi*55+12082)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12269)*1+lsi)*1]), &(stack[((hsi*66+11703)*1+lsi)*1]), &(stack[((hsi*55+11228)*1+lsi)*1]), &(stack[((hsi*66+12203)*1+lsi)*1]), &(stack[((hsi*66+12137)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12347)*1+lsi)*1]), &(stack[((hsi*66+11769)*1+lsi)*1]), &(stack[((hsi*55+11283)*1+lsi)*1]), &(stack[((hsi*66+12137)*1+lsi)*1]), &(stack[((hsi*66+12203)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+12425)*1+lsi)*1]), &(stack[((hsi*78+11835)*1+lsi)*1]), &(stack[((hsi*66+11338)*1+lsi)*1]), &(stack[((hsi*78+12347)*1+lsi)*1]), &(stack[((hsi*78+12269)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+12516)*1+lsi)*1]), &(stack[((hsi*78+11913)*1+lsi)*1]), &(stack[((hsi*66+11404)*1+lsi)*1]), &(stack[((hsi*78+12269)*1+lsi)*1]), &(stack[((hsi*78+12347)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+12607)*1+lsi)*1]), &(stack[((hsi*91+11991)*1+lsi)*1]), &(stack[((hsi*78+11470)*1+lsi)*1]), &(stack[((hsi*91+12516)*1+lsi)*1]), &(stack[((hsi*91+12425)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+9480)*1+lsi)*1]),&(stack[((hsi*105+12607)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10771)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10698)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10774)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10701)*1+lsi)*1]), &(stack[((hsi*3+10771)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+10774)*1+lsi)*1]), &(stack[((hsi*3+10698)*1+lsi)*1]), &(stack[((hsi*3+10215)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10777)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12712)*1+lsi)*1]), &(stack[((hsi*3+10698)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+10777)*1+lsi)*1]), &(stack[((hsi*3+9881)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12718)*1+lsi)*1]), &(stack[((hsi*3+10774)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+10777)*1+lsi)*1]), &(stack[((hsi*3+9878)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12724)*1+lsi)*1]), &(stack[((hsi*6+10701)*1+lsi)*1]), &(stack[((hsi*3+10771)*1+lsi)*1]), &(stack[((hsi*6+12718)*1+lsi)*1]), &(stack[((hsi*6+12712)*1+lsi)*1]), &(stack[((hsi*6+10218)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*3+10777)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+9890)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12740)*1+lsi)*1]), &(stack[((hsi*6+12712)*1+lsi)*1]), &(stack[((hsi*3+10698)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*6+9899)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12750)*1+lsi)*1]), &(stack[((hsi*6+12718)*1+lsi)*1]), &(stack[((hsi*3+10774)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*6+9893)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12760)*1+lsi)*1]), &(stack[((hsi*10+12724)*1+lsi)*1]), &(stack[((hsi*6+10701)*1+lsi)*1]), &(stack[((hsi*10+12750)*1+lsi)*1]), &(stack[((hsi*10+12740)*1+lsi)*1]), &(stack[((hsi*10+10224)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*3+10777)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12785)*1+lsi)*1]), &(stack[((hsi*10+12740)*1+lsi)*1]), &(stack[((hsi*6+12712)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*10+9931)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12800)*1+lsi)*1]), &(stack[((hsi*10+12750)*1+lsi)*1]), &(stack[((hsi*6+12718)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*10+9921)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12815)*1+lsi)*1]), &(stack[((hsi*15+12760)*1+lsi)*1]), &(stack[((hsi*10+12724)*1+lsi)*1]), &(stack[((hsi*15+12800)*1+lsi)*1]), &(stack[((hsi*15+12785)*1+lsi)*1]), &(stack[((hsi*15+10234)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12851)*1+lsi)*1]), &(stack[((hsi*15+12785)*1+lsi)*1]), &(stack[((hsi*10+12740)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*15+9981)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12872)*1+lsi)*1]), &(stack[((hsi*15+12800)*1+lsi)*1]), &(stack[((hsi*10+12750)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*15+9966)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12893)*1+lsi)*1]), &(stack[((hsi*21+12815)*1+lsi)*1]), &(stack[((hsi*15+12760)*1+lsi)*1]), &(stack[((hsi*21+12872)*1+lsi)*1]), &(stack[((hsi*21+12851)*1+lsi)*1]), &(stack[((hsi*21+10249)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12942)*1+lsi)*1]), &(stack[((hsi*21+12851)*1+lsi)*1]), &(stack[((hsi*15+12785)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*21+10053)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12970)*1+lsi)*1]), &(stack[((hsi*21+12872)*1+lsi)*1]), &(stack[((hsi*15+12800)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*21+10032)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12998)*1+lsi)*1]), &(stack[((hsi*28+12893)*1+lsi)*1]), &(stack[((hsi*21+12815)*1+lsi)*1]), &(stack[((hsi*28+12970)*1+lsi)*1]), &(stack[((hsi*28+12942)*1+lsi)*1]), &(stack[((hsi*28+10270)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+13034)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+13062)*1+lsi)*1]), &(stack[((hsi*28+12942)*1+lsi)*1]), &(stack[((hsi*21+12851)*1+lsi)*1]), &(stack[((hsi*28+13034)*1+lsi)*1]), &(stack[((hsi*28+10151)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+13098)*1+lsi)*1]), &(stack[((hsi*28+12970)*1+lsi)*1]), &(stack[((hsi*21+12872)*1+lsi)*1]), &(stack[((hsi*28+13034)*1+lsi)*1]), &(stack[((hsi*28+10123)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13134)*1+lsi)*1]), &(stack[((hsi*36+12998)*1+lsi)*1]), &(stack[((hsi*28+12893)*1+lsi)*1]), &(stack[((hsi*36+13098)*1+lsi)*1]), &(stack[((hsi*36+13062)*1+lsi)*1]), &(stack[((hsi*36+10298)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9890)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*3+9890)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+10698)*1+lsi)*1]), &(stack[((hsi*3+10774)*1+lsi)*1]), &(stack[((hsi*3+9875)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*3+9890)*1+lsi)*1]), &(stack[((hsi*6+12712)*1+lsi)*1]), &(stack[((hsi*6+12718)*1+lsi)*1]), &(stack[((hsi*6+9884)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*10+12740)*1+lsi)*1]), &(stack[((hsi*10+12750)*1+lsi)*1]), &(stack[((hsi*10+9905)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*15+12785)*1+lsi)*1]), &(stack[((hsi*15+12800)*1+lsi)*1]), &(stack[((hsi*15+9941)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+13179)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*21+12851)*1+lsi)*1]), &(stack[((hsi*21+12872)*1+lsi)*1]), &(stack[((hsi*21+9996)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+13207)*1+lsi)*1]), &(stack[((hsi*28+13179)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*28+12942)*1+lsi)*1]), &(stack[((hsi*28+12970)*1+lsi)*1]), &(stack[((hsi*28+10074)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13243)*1+lsi)*1]), &(stack[((hsi*36+13207)*1+lsi)*1]), &(stack[((hsi*28+13179)*1+lsi)*1]), &(stack[((hsi*36+13062)*1+lsi)*1]), &(stack[((hsi*36+13098)*1+lsi)*1]), &(stack[((hsi*36+10179)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+13288)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+13291)*1+lsi)*1]), &(stack[((hsi*3+13288)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+9890)*1+lsi)*1]), &(stack[((hsi*3+10771)*1+lsi)*1]), &(stack[((hsi*3+10498)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+13297)*1+lsi)*1]), &(stack[((hsi*6+13291)*1+lsi)*1]), &(stack[((hsi*3+13288)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*6+10701)*1+lsi)*1]), &(stack[((hsi*6+10501)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13307)*1+lsi)*1]), &(stack[((hsi*10+13297)*1+lsi)*1]), &(stack[((hsi*6+13291)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*10+12724)*1+lsi)*1]), &(stack[((hsi*10+10507)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+13322)*1+lsi)*1]), &(stack[((hsi*15+13307)*1+lsi)*1]), &(stack[((hsi*10+13297)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*15+12760)*1+lsi)*1]), &(stack[((hsi*15+10517)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+13343)*1+lsi)*1]), &(stack[((hsi*21+13322)*1+lsi)*1]), &(stack[((hsi*15+13307)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*21+12815)*1+lsi)*1]), &(stack[((hsi*21+10532)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+13371)*1+lsi)*1]), &(stack[((hsi*28+13343)*1+lsi)*1]), &(stack[((hsi*21+13322)*1+lsi)*1]), &(stack[((hsi*28+13179)*1+lsi)*1]), &(stack[((hsi*28+12893)*1+lsi)*1]), &(stack[((hsi*28+10553)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*36+13371)*1+lsi)*1]), &(stack[((hsi*28+13343)*1+lsi)*1]), &(stack[((hsi*36+13207)*1+lsi)*1]), &(stack[((hsi*36+12998)*1+lsi)*1]), &(stack[((hsi*36+10581)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13407)*1+lsi)*1]), &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*36+13371)*1+lsi)*1]), &(stack[((hsi*45+13243)*1+lsi)*1]), &(stack[((hsi*45+13134)*1+lsi)*1]), &(stack[((hsi*45+10617)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9425)*1+lsi)*1]),&(stack[((hsi*55+13407)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+13333)*1+lsi)*1]), &(stack[((hsi*28+13034)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*28+10707)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13462)*1+lsi)*1]), &(stack[((hsi*36+13062)*1+lsi)*1]), &(stack[((hsi*28+12942)*1+lsi)*1]), &(stack[((hsi*36+13333)*1+lsi)*1]), &(stack[((hsi*36+10836)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13507)*1+lsi)*1]), &(stack[((hsi*36+13098)*1+lsi)*1]), &(stack[((hsi*28+12970)*1+lsi)*1]), &(stack[((hsi*36+13333)*1+lsi)*1]), &(stack[((hsi*36+10735)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13552)*1+lsi)*1]), &(stack[((hsi*45+13134)*1+lsi)*1]), &(stack[((hsi*36+12998)*1+lsi)*1]), &(stack[((hsi*45+13507)*1+lsi)*1]), &(stack[((hsi*45+13462)*1+lsi)*1]), &(stack[((hsi*45+10917)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13607)*1+lsi)*1]), &(stack[((hsi*45+13243)*1+lsi)*1]), &(stack[((hsi*36+13207)*1+lsi)*1]), &(stack[((hsi*45+13462)*1+lsi)*1]), &(stack[((hsi*45+13507)*1+lsi)*1]), &(stack[((hsi*45+10872)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13662)*1+lsi)*1]), &(stack[((hsi*55+13407)*1+lsi)*1]), &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*55+13607)*1+lsi)*1]), &(stack[((hsi*55+13552)*1+lsi)*1]), &(stack[((hsi*55+11017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+9359)*1+lsi)*1]),&(stack[((hsi*66+13662)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*36+13333)*1+lsi)*1]), &(stack[((hsi*28+13034)*1+lsi)*1]), &(stack[((hsi*36+10662)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13728)*1+lsi)*1]), &(stack[((hsi*45+13462)*1+lsi)*1]), &(stack[((hsi*36+13062)*1+lsi)*1]), &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*45+11183)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13783)*1+lsi)*1]), &(stack[((hsi*45+13507)*1+lsi)*1]), &(stack[((hsi*36+13098)*1+lsi)*1]), &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*45+11138)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13838)*1+lsi)*1]), &(stack[((hsi*55+13552)*1+lsi)*1]), &(stack[((hsi*45+13134)*1+lsi)*1]), &(stack[((hsi*55+13783)*1+lsi)*1]), &(stack[((hsi*55+13728)*1+lsi)*1]), &(stack[((hsi*55+11283)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13904)*1+lsi)*1]), &(stack[((hsi*55+13607)*1+lsi)*1]), &(stack[((hsi*45+13243)*1+lsi)*1]), &(stack[((hsi*55+13728)*1+lsi)*1]), &(stack[((hsi*55+13783)*1+lsi)*1]), &(stack[((hsi*55+11228)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13970)*1+lsi)*1]), &(stack[((hsi*66+13662)*1+lsi)*1]), &(stack[((hsi*55+13407)*1+lsi)*1]), &(stack[((hsi*66+13904)*1+lsi)*1]), &(stack[((hsi*66+13838)*1+lsi)*1]), &(stack[((hsi*66+11404)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+9281)*1+lsi)*1]),&(stack[((hsi*78+13970)*1+lsi)*1]),78);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14048)*1+lsi)*1]), &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*36+13333)*1+lsi)*1]), &(stack[((hsi*45+11548)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14103)*1+lsi)*1]), &(stack[((hsi*55+13728)*1+lsi)*1]), &(stack[((hsi*45+13462)*1+lsi)*1]), &(stack[((hsi*55+14048)*1+lsi)*1]), &(stack[((hsi*55+11648)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14169)*1+lsi)*1]), &(stack[((hsi*55+13783)*1+lsi)*1]), &(stack[((hsi*45+13507)*1+lsi)*1]), &(stack[((hsi*55+14048)*1+lsi)*1]), &(stack[((hsi*55+11593)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14235)*1+lsi)*1]), &(stack[((hsi*66+13838)*1+lsi)*1]), &(stack[((hsi*55+13552)*1+lsi)*1]), &(stack[((hsi*66+14169)*1+lsi)*1]), &(stack[((hsi*66+14103)*1+lsi)*1]), &(stack[((hsi*66+11769)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14313)*1+lsi)*1]), &(stack[((hsi*66+13904)*1+lsi)*1]), &(stack[((hsi*55+13607)*1+lsi)*1]), &(stack[((hsi*66+14103)*1+lsi)*1]), &(stack[((hsi*66+14169)*1+lsi)*1]), &(stack[((hsi*66+11703)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+14391)*1+lsi)*1]), &(stack[((hsi*78+13970)*1+lsi)*1]), &(stack[((hsi*66+13662)*1+lsi)*1]), &(stack[((hsi*78+14313)*1+lsi)*1]), &(stack[((hsi*78+14235)*1+lsi)*1]), &(stack[((hsi*78+11913)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+9190)*1+lsi)*1]),&(stack[((hsi*91+14391)*1+lsi)*1]),91);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14482)*1+lsi)*1]), &(stack[((hsi*55+14048)*1+lsi)*1]), &(stack[((hsi*45+13288)*1+lsi)*1]), &(stack[((hsi*55+12082)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14548)*1+lsi)*1]), &(stack[((hsi*66+14103)*1+lsi)*1]), &(stack[((hsi*55+13728)*1+lsi)*1]), &(stack[((hsi*66+14482)*1+lsi)*1]), &(stack[((hsi*66+12203)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14626)*1+lsi)*1]), &(stack[((hsi*66+14169)*1+lsi)*1]), &(stack[((hsi*55+13783)*1+lsi)*1]), &(stack[((hsi*66+14482)*1+lsi)*1]), &(stack[((hsi*66+12137)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+14704)*1+lsi)*1]), &(stack[((hsi*78+14235)*1+lsi)*1]), &(stack[((hsi*66+13838)*1+lsi)*1]), &(stack[((hsi*78+14626)*1+lsi)*1]), &(stack[((hsi*78+14548)*1+lsi)*1]), &(stack[((hsi*78+12347)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+14795)*1+lsi)*1]), &(stack[((hsi*78+14313)*1+lsi)*1]), &(stack[((hsi*66+13904)*1+lsi)*1]), &(stack[((hsi*78+14548)*1+lsi)*1]), &(stack[((hsi*78+14626)*1+lsi)*1]), &(stack[((hsi*78+12269)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+14886)*1+lsi)*1]), &(stack[((hsi*91+14391)*1+lsi)*1]), &(stack[((hsi*78+13970)*1+lsi)*1]), &(stack[((hsi*91+14795)*1+lsi)*1]), &(stack[((hsi*91+14704)*1+lsi)*1]), &(stack[((hsi*91+12516)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+9085)*1+lsi)*1]),&(stack[((hsi*105+14886)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+13369)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10662)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+13372)*1+lsi)*1]), &(stack[((hsi*3+13369)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+10215)*1+lsi)*1]), &(stack[((hsi*3+9875)*1+lsi)*1]), &(stack[((hsi*3+10662)*1+lsi)*1]), &(stack[((hsi*3+10774)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*3+10662)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+9881)*1+lsi)*1]), &(stack[((hsi*3+9878)*1+lsi)*1]), &(stack[((hsi*3+10777)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+13378)*1+lsi)*1]), &(stack[((hsi*6+13372)*1+lsi)*1]), &(stack[((hsi*3+13369)*1+lsi)*1]), &(stack[((hsi*6+10218)*1+lsi)*1]), &(stack[((hsi*6+9884)*1+lsi)*1]), &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*6+12718)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*3+10662)*1+lsi)*1]), &(stack[((hsi*6+9899)*1+lsi)*1]), &(stack[((hsi*6+9893)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10671)*1+lsi)*1]), &(stack[((hsi*10+13378)*1+lsi)*1]), &(stack[((hsi*6+13372)*1+lsi)*1]), &(stack[((hsi*10+10224)*1+lsi)*1]), &(stack[((hsi*10+9905)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*10+12750)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13388)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*10+9931)*1+lsi)*1]), &(stack[((hsi*10+9921)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*15+10671)*1+lsi)*1]), &(stack[((hsi*10+13378)*1+lsi)*1]), &(stack[((hsi*15+10234)*1+lsi)*1]), &(stack[((hsi*15+9941)*1+lsi)*1]), &(stack[((hsi*15+13388)*1+lsi)*1]), &(stack[((hsi*15+12800)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+15012)*1+lsi)*1]), &(stack[((hsi*15+13388)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*15+9981)*1+lsi)*1]), &(stack[((hsi*15+9966)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9966)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*15+10671)*1+lsi)*1]), &(stack[((hsi*21+10249)*1+lsi)*1]), &(stack[((hsi*21+9996)*1+lsi)*1]), &(stack[((hsi*21+15012)*1+lsi)*1]), &(stack[((hsi*21+12872)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+15033)*1+lsi)*1]), &(stack[((hsi*21+15012)*1+lsi)*1]), &(stack[((hsi*15+13388)*1+lsi)*1]), &(stack[((hsi*21+10053)*1+lsi)*1]), &(stack[((hsi*21+10032)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*28+9966)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*28+10270)*1+lsi)*1]), &(stack[((hsi*28+10074)*1+lsi)*1]), &(stack[((hsi*28+15033)*1+lsi)*1]), &(stack[((hsi*28+12970)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+15061)*1+lsi)*1]), &(stack[((hsi*28+15033)*1+lsi)*1]), &(stack[((hsi*21+15012)*1+lsi)*1]), &(stack[((hsi*28+10151)*1+lsi)*1]), &(stack[((hsi*28+10123)*1+lsi)*1]), &(stack[((hsi*28+13034)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10123)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*28+9966)*1+lsi)*1]), &(stack[((hsi*36+10298)*1+lsi)*1]), &(stack[((hsi*36+10179)*1+lsi)*1]), &(stack[((hsi*36+15061)*1+lsi)*1]), &(stack[((hsi*36+13098)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+13034)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*3+13034)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+9875)*1+lsi)*1]), &(stack[((hsi*3+10662)*1+lsi)*1]), &(stack[((hsi*3+10215)*1+lsi)*1]), &(stack[((hsi*3+10698)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*3+13034)*1+lsi)*1]), &(stack[((hsi*6+9884)*1+lsi)*1]), &(stack[((hsi*6+10665)*1+lsi)*1]), &(stack[((hsi*6+10218)*1+lsi)*1]), &(stack[((hsi*6+12712)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*10+9905)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*10+10224)*1+lsi)*1]), &(stack[((hsi*10+12740)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*15+9941)*1+lsi)*1]), &(stack[((hsi*15+13388)*1+lsi)*1]), &(stack[((hsi*15+10234)*1+lsi)*1]), &(stack[((hsi*15+12785)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9921)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*21+9996)*1+lsi)*1]), &(stack[((hsi*21+15012)*1+lsi)*1]), &(stack[((hsi*21+10249)*1+lsi)*1]), &(stack[((hsi*21+12851)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10215)*1+lsi)*1]), &(stack[((hsi*28+9921)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*28+10074)*1+lsi)*1]), &(stack[((hsi*28+15033)*1+lsi)*1]), &(stack[((hsi*28+10270)*1+lsi)*1]), &(stack[((hsi*28+12942)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10251)*1+lsi)*1]), &(stack[((hsi*36+10215)*1+lsi)*1]), &(stack[((hsi*28+9921)*1+lsi)*1]), &(stack[((hsi*36+10179)*1+lsi)*1]), &(stack[((hsi*36+15061)*1+lsi)*1]), &(stack[((hsi*36+10298)*1+lsi)*1]), &(stack[((hsi*36+13062)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10168)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10171)*1+lsi)*1]), &(stack[((hsi*3+10168)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+10498)*1+lsi)*1]), &(stack[((hsi*3+13034)*1+lsi)*1]), &(stack[((hsi*3+10334)*1+lsi)*1]), &(stack[((hsi*3+13369)*1+lsi)*1]), &(stack[((hsi*3+9890)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10177)*1+lsi)*1]), &(stack[((hsi*6+10171)*1+lsi)*1]), &(stack[((hsi*3+10168)*1+lsi)*1]), &(stack[((hsi*6+10501)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*6+10337)*1+lsi)*1]), &(stack[((hsi*6+13372)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10177)*1+lsi)*1]), &(stack[((hsi*6+10171)*1+lsi)*1]), &(stack[((hsi*10+10507)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*10+10343)*1+lsi)*1]), &(stack[((hsi*10+13378)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10296)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10177)*1+lsi)*1]), &(stack[((hsi*15+10517)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*15+10353)*1+lsi)*1]), &(stack[((hsi*15+10671)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10168)*1+lsi)*1]), &(stack[((hsi*21+10296)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*21+10532)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*21+10368)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+15097)*1+lsi)*1]), &(stack[((hsi*28+10168)*1+lsi)*1]), &(stack[((hsi*21+10296)*1+lsi)*1]), &(stack[((hsi*28+10553)*1+lsi)*1]), &(stack[((hsi*28+9921)*1+lsi)*1]), &(stack[((hsi*28+10389)*1+lsi)*1]), &(stack[((hsi*28+9966)*1+lsi)*1]), &(stack[((hsi*28+13179)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+15133)*1+lsi)*1]), &(stack[((hsi*36+15097)*1+lsi)*1]), &(stack[((hsi*28+10168)*1+lsi)*1]), &(stack[((hsi*36+10581)*1+lsi)*1]), &(stack[((hsi*36+10215)*1+lsi)*1]), &(stack[((hsi*36+10417)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*36+13207)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+15178)*1+lsi)*1]), &(stack[((hsi*45+15133)*1+lsi)*1]), &(stack[((hsi*36+15097)*1+lsi)*1]), &(stack[((hsi*45+10617)*1+lsi)*1]), &(stack[((hsi*45+10251)*1+lsi)*1]), &(stack[((hsi*45+10453)*1+lsi)*1]), &(stack[((hsi*45+10123)*1+lsi)*1]), &(stack[((hsi*45+13243)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9030)*1+lsi)*1]),&(stack[((hsi*55+15178)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*36+15061)*1+lsi)*1]), &(stack[((hsi*28+15033)*1+lsi)*1]), &(stack[((hsi*36+10836)*1+lsi)*1]), &(stack[((hsi*36+10735)*1+lsi)*1]), &(stack[((hsi*36+13333)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+15233)*1+lsi)*1]), &(stack[((hsi*45+10123)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*45+10917)*1+lsi)*1]), &(stack[((hsi*45+10872)*1+lsi)*1]), &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*45+13507)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+15288)*1+lsi)*1]), &(stack[((hsi*45+10251)*1+lsi)*1]), &(stack[((hsi*36+10215)*1+lsi)*1]), &(stack[((hsi*45+10872)*1+lsi)*1]), &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*45+10917)*1+lsi)*1]), &(stack[((hsi*45+13462)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10836)*1+lsi)*1]), &(stack[((hsi*55+15178)*1+lsi)*1]), &(stack[((hsi*45+15133)*1+lsi)*1]), &(stack[((hsi*55+11017)*1+lsi)*1]), &(stack[((hsi*55+15288)*1+lsi)*1]), &(stack[((hsi*55+10962)*1+lsi)*1]), &(stack[((hsi*55+15233)*1+lsi)*1]), &(stack[((hsi*55+13607)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8964)*1+lsi)*1]),&(stack[((hsi*66+10836)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+15097)*1+lsi)*1]), &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*36+15061)*1+lsi)*1]), &(stack[((hsi*45+11183)*1+lsi)*1]), &(stack[((hsi*45+11138)*1+lsi)*1]), &(stack[((hsi*45+13288)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11138)*1+lsi)*1]), &(stack[((hsi*55+15233)*1+lsi)*1]), &(stack[((hsi*45+10123)*1+lsi)*1]), &(stack[((hsi*55+11283)*1+lsi)*1]), &(stack[((hsi*55+11228)*1+lsi)*1]), &(stack[((hsi*55+15097)*1+lsi)*1]), &(stack[((hsi*55+13783)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13288)*1+lsi)*1]), &(stack[((hsi*55+15288)*1+lsi)*1]), &(stack[((hsi*45+10251)*1+lsi)*1]), &(stack[((hsi*55+11228)*1+lsi)*1]), &(stack[((hsi*55+15097)*1+lsi)*1]), &(stack[((hsi*55+11283)*1+lsi)*1]), &(stack[((hsi*55+13728)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15343)*1+lsi)*1]), &(stack[((hsi*66+10836)*1+lsi)*1]), &(stack[((hsi*55+15178)*1+lsi)*1]), &(stack[((hsi*66+11404)*1+lsi)*1]), &(stack[((hsi*66+13288)*1+lsi)*1]), &(stack[((hsi*66+11338)*1+lsi)*1]), &(stack[((hsi*66+11138)*1+lsi)*1]), &(stack[((hsi*66+13904)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8886)*1+lsi)*1]),&(stack[((hsi*78+15343)*1+lsi)*1]),78);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15421)*1+lsi)*1]), &(stack[((hsi*55+15097)*1+lsi)*1]), &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*55+11648)*1+lsi)*1]), &(stack[((hsi*55+11593)*1+lsi)*1]), &(stack[((hsi*55+14048)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15487)*1+lsi)*1]), &(stack[((hsi*66+11138)*1+lsi)*1]), &(stack[((hsi*55+15233)*1+lsi)*1]), &(stack[((hsi*66+11769)*1+lsi)*1]), &(stack[((hsi*66+11703)*1+lsi)*1]), &(stack[((hsi*66+15421)*1+lsi)*1]), &(stack[((hsi*66+14169)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15565)*1+lsi)*1]), &(stack[((hsi*66+13288)*1+lsi)*1]), &(stack[((hsi*55+15288)*1+lsi)*1]), &(stack[((hsi*66+11703)*1+lsi)*1]), &(stack[((hsi*66+15421)*1+lsi)*1]), &(stack[((hsi*66+11769)*1+lsi)*1]), &(stack[((hsi*66+14103)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15643)*1+lsi)*1]), &(stack[((hsi*78+15343)*1+lsi)*1]), &(stack[((hsi*66+10836)*1+lsi)*1]), &(stack[((hsi*78+11913)*1+lsi)*1]), &(stack[((hsi*78+15565)*1+lsi)*1]), &(stack[((hsi*78+11835)*1+lsi)*1]), &(stack[((hsi*78+15487)*1+lsi)*1]), &(stack[((hsi*78+14313)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8795)*1+lsi)*1]),&(stack[((hsi*91+15643)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15734)*1+lsi)*1]), &(stack[((hsi*66+15421)*1+lsi)*1]), &(stack[((hsi*55+15097)*1+lsi)*1]), &(stack[((hsi*66+12203)*1+lsi)*1]), &(stack[((hsi*66+12137)*1+lsi)*1]), &(stack[((hsi*66+14482)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15812)*1+lsi)*1]), &(stack[((hsi*78+15487)*1+lsi)*1]), &(stack[((hsi*66+11138)*1+lsi)*1]), &(stack[((hsi*78+12347)*1+lsi)*1]), &(stack[((hsi*78+12269)*1+lsi)*1]), &(stack[((hsi*78+15734)*1+lsi)*1]), &(stack[((hsi*78+14626)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15903)*1+lsi)*1]), &(stack[((hsi*78+15565)*1+lsi)*1]), &(stack[((hsi*66+13288)*1+lsi)*1]), &(stack[((hsi*78+12269)*1+lsi)*1]), &(stack[((hsi*78+15734)*1+lsi)*1]), &(stack[((hsi*78+12347)*1+lsi)*1]), &(stack[((hsi*78+14548)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+15994)*1+lsi)*1]), &(stack[((hsi*91+15643)*1+lsi)*1]), &(stack[((hsi*78+15343)*1+lsi)*1]), &(stack[((hsi*91+12516)*1+lsi)*1]), &(stack[((hsi*91+15903)*1+lsi)*1]), &(stack[((hsi*91+12425)*1+lsi)*1]), &(stack[((hsi*91+15812)*1+lsi)*1]), &(stack[((hsi*91+14795)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+8690)*1+lsi)*1]),&(stack[((hsi*105+15994)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10902)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10905)*1+lsi)*1]), &(stack[((hsi*3+10902)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+10698)*1+lsi)*1]), &(stack[((hsi*3+10774)*1+lsi)*1]), &(stack[((hsi*3+10662)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10717)*1+lsi)*1]), &(stack[((hsi*6+10905)*1+lsi)*1]), &(stack[((hsi*3+10902)*1+lsi)*1]), &(stack[((hsi*6+12712)*1+lsi)*1]), &(stack[((hsi*6+12718)*1+lsi)*1]), &(stack[((hsi*6+10665)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10717)*1+lsi)*1]), &(stack[((hsi*6+10905)*1+lsi)*1]), &(stack[((hsi*10+12740)*1+lsi)*1]), &(stack[((hsi*10+12750)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10911)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10717)*1+lsi)*1]), &(stack[((hsi*15+12785)*1+lsi)*1]), &(stack[((hsi*15+12800)*1+lsi)*1]), &(stack[((hsi*15+13388)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10727)*1+lsi)*1]), &(stack[((hsi*21+10911)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*21+12851)*1+lsi)*1]), &(stack[((hsi*21+12872)*1+lsi)*1]), &(stack[((hsi*21+15012)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12851)*1+lsi)*1]), &(stack[((hsi*28+10727)*1+lsi)*1]), &(stack[((hsi*21+10911)*1+lsi)*1]), &(stack[((hsi*28+12942)*1+lsi)*1]), &(stack[((hsi*28+12970)*1+lsi)*1]), &(stack[((hsi*28+15033)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12942)*1+lsi)*1]), &(stack[((hsi*36+12851)*1+lsi)*1]), &(stack[((hsi*28+10727)*1+lsi)*1]), &(stack[((hsi*36+13062)*1+lsi)*1]), &(stack[((hsi*36+13098)*1+lsi)*1]), &(stack[((hsi*36+15061)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+13037)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*3+13037)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+9890)*1+lsi)*1]), &(stack[((hsi*3+10902)*1+lsi)*1]), &(stack[((hsi*3+10771)*1+lsi)*1]), &(stack[((hsi*3+13034)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*3+13037)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*6+10905)*1+lsi)*1]), &(stack[((hsi*6+10701)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*10+10717)*1+lsi)*1]), &(stack[((hsi*10+12724)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+13037)*1+lsi)*1]), &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*15+12760)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+15012)*1+lsi)*1]), &(stack[((hsi*21+13037)*1+lsi)*1]), &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*21+10911)*1+lsi)*1]), &(stack[((hsi*21+12815)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+13058)*1+lsi)*1]), &(stack[((hsi*28+15012)*1+lsi)*1]), &(stack[((hsi*21+13037)*1+lsi)*1]), &(stack[((hsi*28+13179)*1+lsi)*1]), &(stack[((hsi*28+10727)*1+lsi)*1]), &(stack[((hsi*28+12893)*1+lsi)*1]), &(stack[((hsi*28+9921)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+15040)*1+lsi)*1]), &(stack[((hsi*36+13058)*1+lsi)*1]), &(stack[((hsi*28+15012)*1+lsi)*1]), &(stack[((hsi*36+13207)*1+lsi)*1]), &(stack[((hsi*36+12851)*1+lsi)*1]), &(stack[((hsi*36+12998)*1+lsi)*1]), &(stack[((hsi*36+10215)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+16099)*1+lsi)*1]), &(stack[((hsi*45+15040)*1+lsi)*1]), &(stack[((hsi*36+13058)*1+lsi)*1]), &(stack[((hsi*45+13243)*1+lsi)*1]), &(stack[((hsi*45+12942)*1+lsi)*1]), &(stack[((hsi*45+13134)*1+lsi)*1]), &(stack[((hsi*45+10251)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+8635)*1+lsi)*1]),&(stack[((hsi*55+16099)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13037)*1+lsi)*1]), &(stack[((hsi*45+12942)*1+lsi)*1]), &(stack[((hsi*36+12851)*1+lsi)*1]), &(stack[((hsi*45+13462)*1+lsi)*1]), &(stack[((hsi*45+13507)*1+lsi)*1]), &(stack[((hsi*45+10168)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13462)*1+lsi)*1]), &(stack[((hsi*55+16099)*1+lsi)*1]), &(stack[((hsi*45+15040)*1+lsi)*1]), &(stack[((hsi*55+13607)*1+lsi)*1]), &(stack[((hsi*55+13037)*1+lsi)*1]), &(stack[((hsi*55+13552)*1+lsi)*1]), &(stack[((hsi*55+15288)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8569)*1+lsi)*1]),&(stack[((hsi*66+13462)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15012)*1+lsi)*1]), &(stack[((hsi*55+13037)*1+lsi)*1]), &(stack[((hsi*45+12942)*1+lsi)*1]), &(stack[((hsi*55+13728)*1+lsi)*1]), &(stack[((hsi*55+13783)*1+lsi)*1]), &(stack[((hsi*55+15097)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16154)*1+lsi)*1]), &(stack[((hsi*66+13462)*1+lsi)*1]), &(stack[((hsi*55+16099)*1+lsi)*1]), &(stack[((hsi*66+13904)*1+lsi)*1]), &(stack[((hsi*66+15012)*1+lsi)*1]), &(stack[((hsi*66+13838)*1+lsi)*1]), &(stack[((hsi*66+13288)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8491)*1+lsi)*1]),&(stack[((hsi*78+16154)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16232)*1+lsi)*1]), &(stack[((hsi*66+15012)*1+lsi)*1]), &(stack[((hsi*55+13037)*1+lsi)*1]), &(stack[((hsi*66+14103)*1+lsi)*1]), &(stack[((hsi*66+14169)*1+lsi)*1]), &(stack[((hsi*66+15421)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+16310)*1+lsi)*1]), &(stack[((hsi*78+16154)*1+lsi)*1]), &(stack[((hsi*66+13462)*1+lsi)*1]), &(stack[((hsi*78+14313)*1+lsi)*1]), &(stack[((hsi*78+16232)*1+lsi)*1]), &(stack[((hsi*78+14235)*1+lsi)*1]), &(stack[((hsi*78+15565)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8400)*1+lsi)*1]),&(stack[((hsi*91+16310)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+16401)*1+lsi)*1]), &(stack[((hsi*78+16232)*1+lsi)*1]), &(stack[((hsi*66+15012)*1+lsi)*1]), &(stack[((hsi*78+14548)*1+lsi)*1]), &(stack[((hsi*78+14626)*1+lsi)*1]), &(stack[((hsi*78+15734)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+16492)*1+lsi)*1]), &(stack[((hsi*91+16310)*1+lsi)*1]), &(stack[((hsi*78+16154)*1+lsi)*1]), &(stack[((hsi*91+14795)*1+lsi)*1]), &(stack[((hsi*91+16401)*1+lsi)*1]), &(stack[((hsi*91+14704)*1+lsi)*1]), &(stack[((hsi*91+15903)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+8295)*1+lsi)*1]),&(stack[((hsi*105+16492)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10168)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*3+10168)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+13034)*1+lsi)*1]), &(stack[((hsi*3+13369)*1+lsi)*1]), &(stack[((hsi*3+10902)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*3+10168)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*6+13372)*1+lsi)*1]), &(stack[((hsi*6+10905)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*10+13378)*1+lsi)*1]), &(stack[((hsi*10+10717)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10168)*1+lsi)*1]), &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*15+10671)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+13092)*1+lsi)*1]), &(stack[((hsi*21+10168)*1+lsi)*1]), &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*21+10911)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10296)*1+lsi)*1]), &(stack[((hsi*28+13092)*1+lsi)*1]), &(stack[((hsi*21+10168)*1+lsi)*1]), &(stack[((hsi*28+9921)*1+lsi)*1]), &(stack[((hsi*28+9966)*1+lsi)*1]), &(stack[((hsi*28+10727)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*36+10296)*1+lsi)*1]), &(stack[((hsi*28+13092)*1+lsi)*1]), &(stack[((hsi*36+10215)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*36+12851)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+16597)*1+lsi)*1]), &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*36+10296)*1+lsi)*1]), &(stack[((hsi*45+10251)*1+lsi)*1]), &(stack[((hsi*45+10123)*1+lsi)*1]), &(stack[((hsi*45+12942)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+8240)*1+lsi)*1]),&(stack[((hsi*55+16597)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16652)*1+lsi)*1]), &(stack[((hsi*55+16597)*1+lsi)*1]), &(stack[((hsi*45+10168)*1+lsi)*1]), &(stack[((hsi*55+15288)*1+lsi)*1]), &(stack[((hsi*55+15233)*1+lsi)*1]), &(stack[((hsi*55+13037)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8174)*1+lsi)*1]),&(stack[((hsi*66+16652)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16718)*1+lsi)*1]), &(stack[((hsi*66+16652)*1+lsi)*1]), &(stack[((hsi*55+16597)*1+lsi)*1]), &(stack[((hsi*66+13288)*1+lsi)*1]), &(stack[((hsi*66+11138)*1+lsi)*1]), &(stack[((hsi*66+15012)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8096)*1+lsi)*1]),&(stack[((hsi*78+16718)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+16796)*1+lsi)*1]), &(stack[((hsi*78+16718)*1+lsi)*1]), &(stack[((hsi*66+16652)*1+lsi)*1]), &(stack[((hsi*78+15565)*1+lsi)*1]), &(stack[((hsi*78+15487)*1+lsi)*1]), &(stack[((hsi*78+16232)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8005)*1+lsi)*1]),&(stack[((hsi*91+16796)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+16887)*1+lsi)*1]), &(stack[((hsi*91+16796)*1+lsi)*1]), &(stack[((hsi*78+16718)*1+lsi)*1]), &(stack[((hsi*91+15903)*1+lsi)*1]), &(stack[((hsi*91+15812)*1+lsi)*1]), &(stack[((hsi*91+16401)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+7900)*1+lsi)*1]),&(stack[((hsi*105+16887)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10168)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*3+10168)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+10771)*1+lsi)*1]), &(stack[((hsi*3+9890)*1+lsi)*1]), &(stack[((hsi*3+10902)*1+lsi)*1]), &(stack[((hsi*3+13369)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*3+10168)*1+lsi)*1]), &(stack[((hsi*6+10701)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*6+10905)*1+lsi)*1]), &(stack[((hsi*6+13372)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12887)*1+lsi)*1]), &(stack[((hsi*10+12724)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*10+10717)*1+lsi)*1]), &(stack[((hsi*10+13378)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10168)*1+lsi)*1]), &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*15+12760)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*15+10671)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+13092)*1+lsi)*1]), &(stack[((hsi*21+10168)*1+lsi)*1]), &(stack[((hsi*15+13354)*1+lsi)*1]), &(stack[((hsi*21+12815)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*21+10911)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10902)*1+lsi)*1]), &(stack[((hsi*28+13092)*1+lsi)*1]), &(stack[((hsi*21+10168)*1+lsi)*1]), &(stack[((hsi*28+12893)*1+lsi)*1]), &(stack[((hsi*28+13179)*1+lsi)*1]), &(stack[((hsi*28+10727)*1+lsi)*1]), &(stack[((hsi*28+9966)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10707)*1+lsi)*1]), &(stack[((hsi*36+10902)*1+lsi)*1]), &(stack[((hsi*28+13092)*1+lsi)*1]), &(stack[((hsi*36+12998)*1+lsi)*1]), &(stack[((hsi*36+13207)*1+lsi)*1]), &(stack[((hsi*36+12851)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+16992)*1+lsi)*1]), &(stack[((hsi*45+10707)*1+lsi)*1]), &(stack[((hsi*36+10902)*1+lsi)*1]), &(stack[((hsi*45+13134)*1+lsi)*1]), &(stack[((hsi*45+13243)*1+lsi)*1]), &(stack[((hsi*45+12942)*1+lsi)*1]), &(stack[((hsi*45+10123)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7845)*1+lsi)*1]),&(stack[((hsi*55+16992)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+17047)*1+lsi)*1]), &(stack[((hsi*55+16992)*1+lsi)*1]), &(stack[((hsi*45+10707)*1+lsi)*1]), &(stack[((hsi*55+13552)*1+lsi)*1]), &(stack[((hsi*55+13607)*1+lsi)*1]), &(stack[((hsi*55+13037)*1+lsi)*1]), &(stack[((hsi*55+15233)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7779)*1+lsi)*1]),&(stack[((hsi*66+17047)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17113)*1+lsi)*1]), &(stack[((hsi*66+17047)*1+lsi)*1]), &(stack[((hsi*55+16992)*1+lsi)*1]), &(stack[((hsi*66+13838)*1+lsi)*1]), &(stack[((hsi*66+13904)*1+lsi)*1]), &(stack[((hsi*66+15012)*1+lsi)*1]), &(stack[((hsi*66+11138)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7701)*1+lsi)*1]),&(stack[((hsi*78+17113)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17191)*1+lsi)*1]), &(stack[((hsi*78+17113)*1+lsi)*1]), &(stack[((hsi*66+17047)*1+lsi)*1]), &(stack[((hsi*78+14235)*1+lsi)*1]), &(stack[((hsi*78+14313)*1+lsi)*1]), &(stack[((hsi*78+16232)*1+lsi)*1]), &(stack[((hsi*78+15487)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+7610)*1+lsi)*1]),&(stack[((hsi*91+17191)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+17282)*1+lsi)*1]), &(stack[((hsi*91+17191)*1+lsi)*1]), &(stack[((hsi*78+17113)*1+lsi)*1]), &(stack[((hsi*91+14704)*1+lsi)*1]), &(stack[((hsi*91+14795)*1+lsi)*1]), &(stack[((hsi*91+16401)*1+lsi)*1]), &(stack[((hsi*91+15812)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+7505)*1+lsi)*1]),&(stack[((hsi*105+17282)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10707)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10710)*1+lsi)*1]), &(stack[((hsi*3+10707)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+10334)*1+lsi)*1]), &(stack[((hsi*3+13369)*1+lsi)*1]), &(stack[((hsi*3+10498)*1+lsi)*1]), &(stack[((hsi*3+13034)*1+lsi)*1]), &(stack[((hsi*3+10771)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10902)*1+lsi)*1]), &(stack[((hsi*6+10710)*1+lsi)*1]), &(stack[((hsi*3+10707)*1+lsi)*1]), &(stack[((hsi*6+10337)*1+lsi)*1]), &(stack[((hsi*6+13372)*1+lsi)*1]), &(stack[((hsi*6+10501)*1+lsi)*1]), &(stack[((hsi*6+12734)*1+lsi)*1]), &(stack[((hsi*6+10701)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10902)*1+lsi)*1]), &(stack[((hsi*6+10710)*1+lsi)*1]), &(stack[((hsi*10+10343)*1+lsi)*1]), &(stack[((hsi*10+13378)*1+lsi)*1]), &(stack[((hsi*10+10507)*1+lsi)*1]), &(stack[((hsi*10+12775)*1+lsi)*1]), &(stack[((hsi*10+12724)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10707)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10902)*1+lsi)*1]), &(stack[((hsi*15+10353)*1+lsi)*1]), &(stack[((hsi*15+10671)*1+lsi)*1]), &(stack[((hsi*15+10517)*1+lsi)*1]), &(stack[((hsi*15+12836)*1+lsi)*1]), &(stack[((hsi*15+12760)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10902)*1+lsi)*1]), &(stack[((hsi*21+10707)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*21+10368)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*21+10532)*1+lsi)*1]), &(stack[((hsi*21+12921)*1+lsi)*1]), &(stack[((hsi*21+12815)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12921)*1+lsi)*1]), &(stack[((hsi*28+10902)*1+lsi)*1]), &(stack[((hsi*21+10707)*1+lsi)*1]), &(stack[((hsi*28+10389)*1+lsi)*1]), &(stack[((hsi*28+9966)*1+lsi)*1]), &(stack[((hsi*28+10553)*1+lsi)*1]), &(stack[((hsi*28+9921)*1+lsi)*1]), &(stack[((hsi*28+12893)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10707)*1+lsi)*1]), &(stack[((hsi*36+12921)*1+lsi)*1]), &(stack[((hsi*28+10902)*1+lsi)*1]), &(stack[((hsi*36+10417)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*36+10581)*1+lsi)*1]), &(stack[((hsi*36+10215)*1+lsi)*1]), &(stack[((hsi*36+12998)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10168)*1+lsi)*1]), &(stack[((hsi*45+10707)*1+lsi)*1]), &(stack[((hsi*36+12921)*1+lsi)*1]), &(stack[((hsi*45+10453)*1+lsi)*1]), &(stack[((hsi*45+10123)*1+lsi)*1]), &(stack[((hsi*45+10617)*1+lsi)*1]), &(stack[((hsi*45+10251)*1+lsi)*1]), &(stack[((hsi*45+13134)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7450)*1+lsi)*1]),&(stack[((hsi*55+10168)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10223)*1+lsi)*1]), &(stack[((hsi*55+10168)*1+lsi)*1]), &(stack[((hsi*45+10707)*1+lsi)*1]), &(stack[((hsi*55+10962)*1+lsi)*1]), &(stack[((hsi*55+15233)*1+lsi)*1]), &(stack[((hsi*55+11017)*1+lsi)*1]), &(stack[((hsi*55+15288)*1+lsi)*1]), &(stack[((hsi*55+13552)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7384)*1+lsi)*1]),&(stack[((hsi*66+10223)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17387)*1+lsi)*1]), &(stack[((hsi*66+10223)*1+lsi)*1]), &(stack[((hsi*55+10168)*1+lsi)*1]), &(stack[((hsi*66+11338)*1+lsi)*1]), &(stack[((hsi*66+11138)*1+lsi)*1]), &(stack[((hsi*66+11404)*1+lsi)*1]), &(stack[((hsi*66+13288)*1+lsi)*1]), &(stack[((hsi*66+13838)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7306)*1+lsi)*1]),&(stack[((hsi*78+17387)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17465)*1+lsi)*1]), &(stack[((hsi*78+17387)*1+lsi)*1]), &(stack[((hsi*66+10223)*1+lsi)*1]), &(stack[((hsi*78+11835)*1+lsi)*1]), &(stack[((hsi*78+15487)*1+lsi)*1]), &(stack[((hsi*78+11913)*1+lsi)*1]), &(stack[((hsi*78+15565)*1+lsi)*1]), &(stack[((hsi*78+14235)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+7215)*1+lsi)*1]),&(stack[((hsi*91+17465)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+17556)*1+lsi)*1]), &(stack[((hsi*91+17465)*1+lsi)*1]), &(stack[((hsi*78+17387)*1+lsi)*1]), &(stack[((hsi*91+12425)*1+lsi)*1]), &(stack[((hsi*91+15812)*1+lsi)*1]), &(stack[((hsi*91+12516)*1+lsi)*1]), &(stack[((hsi*91+15903)*1+lsi)*1]), &(stack[((hsi*91+14704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+7110)*1+lsi)*1]),&(stack[((hsi*105+17556)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+13034)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12921)*1+lsi)*1]), &(stack[((hsi*3+13034)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+10771)*1+lsi)*1]), &(stack[((hsi*3+9890)*1+lsi)*1]), &(stack[((hsi*3+10334)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12921)*1+lsi)*1]), &(stack[((hsi*3+13034)*1+lsi)*1]), &(stack[((hsi*6+10701)*1+lsi)*1]), &(stack[((hsi*6+9915)*1+lsi)*1]), &(stack[((hsi*6+10337)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*6+12921)*1+lsi)*1]), &(stack[((hsi*10+12724)*1+lsi)*1]), &(stack[((hsi*10+9956)*1+lsi)*1]), &(stack[((hsi*10+10343)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*10+10707)*1+lsi)*1]), &(stack[((hsi*15+12760)*1+lsi)*1]), &(stack[((hsi*15+10017)*1+lsi)*1]), &(stack[((hsi*15+10353)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9890)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*15+9875)*1+lsi)*1]), &(stack[((hsi*21+12815)*1+lsi)*1]), &(stack[((hsi*21+10102)*1+lsi)*1]), &(stack[((hsi*21+10368)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9918)*1+lsi)*1]), &(stack[((hsi*28+9890)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*28+12893)*1+lsi)*1]), &(stack[((hsi*28+13179)*1+lsi)*1]), &(stack[((hsi*28+10389)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10289)*1+lsi)*1]), &(stack[((hsi*36+9918)*1+lsi)*1]), &(stack[((hsi*28+9890)*1+lsi)*1]), &(stack[((hsi*36+12998)*1+lsi)*1]), &(stack[((hsi*36+13207)*1+lsi)*1]), &(stack[((hsi*36+10417)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12712)*1+lsi)*1]), &(stack[((hsi*45+10289)*1+lsi)*1]), &(stack[((hsi*36+9918)*1+lsi)*1]), &(stack[((hsi*45+13134)*1+lsi)*1]), &(stack[((hsi*45+13243)*1+lsi)*1]), &(stack[((hsi*45+10453)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7055)*1+lsi)*1]),&(stack[((hsi*55+12712)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9875)*1+lsi)*1]), &(stack[((hsi*55+12712)*1+lsi)*1]), &(stack[((hsi*45+10289)*1+lsi)*1]), &(stack[((hsi*55+13552)*1+lsi)*1]), &(stack[((hsi*55+13607)*1+lsi)*1]), &(stack[((hsi*55+10962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6989)*1+lsi)*1]),&(stack[((hsi*66+9875)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12767)*1+lsi)*1]), &(stack[((hsi*66+9875)*1+lsi)*1]), &(stack[((hsi*55+12712)*1+lsi)*1]), &(stack[((hsi*66+13838)*1+lsi)*1]), &(stack[((hsi*66+13904)*1+lsi)*1]), &(stack[((hsi*66+11338)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6911)*1+lsi)*1]),&(stack[((hsi*78+12767)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+9941)*1+lsi)*1]), &(stack[((hsi*78+12767)*1+lsi)*1]), &(stack[((hsi*66+9875)*1+lsi)*1]), &(stack[((hsi*78+14235)*1+lsi)*1]), &(stack[((hsi*78+14313)*1+lsi)*1]), &(stack[((hsi*78+11835)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+6820)*1+lsi)*1]),&(stack[((hsi*91+9941)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+13092)*1+lsi)*1]), &(stack[((hsi*91+9941)*1+lsi)*1]), &(stack[((hsi*78+12767)*1+lsi)*1]), &(stack[((hsi*91+14704)*1+lsi)*1]), &(stack[((hsi*91+14795)*1+lsi)*1]), &(stack[((hsi*91+12425)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+6715)*1+lsi)*1]),&(stack[((hsi*105+13092)*1+lsi)*1]),105);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12845)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12848)*1+lsi)*1]), &(stack[((hsi*3+12845)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+10334)*1+lsi)*1]), &(stack[((hsi*3+10498)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12854)*1+lsi)*1]), &(stack[((hsi*6+12848)*1+lsi)*1]), &(stack[((hsi*3+12845)*1+lsi)*1]), &(stack[((hsi*6+10337)*1+lsi)*1]), &(stack[((hsi*6+10501)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12864)*1+lsi)*1]), &(stack[((hsi*10+12854)*1+lsi)*1]), &(stack[((hsi*6+12848)*1+lsi)*1]), &(stack[((hsi*10+10343)*1+lsi)*1]), &(stack[((hsi*10+10507)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*15+12864)*1+lsi)*1]), &(stack[((hsi*10+12854)*1+lsi)*1]), &(stack[((hsi*15+10353)*1+lsi)*1]), &(stack[((hsi*15+10517)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12879)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*15+12864)*1+lsi)*1]), &(stack[((hsi*21+10368)*1+lsi)*1]), &(stack[((hsi*21+10532)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*28+12879)*1+lsi)*1]), &(stack[((hsi*21+14991)*1+lsi)*1]), &(stack[((hsi*28+10389)*1+lsi)*1]), &(stack[((hsi*28+10553)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12907)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*28+12879)*1+lsi)*1]), &(stack[((hsi*36+10417)*1+lsi)*1]), &(stack[((hsi*36+10581)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10289)*1+lsi)*1]), &(stack[((hsi*45+12907)*1+lsi)*1]), &(stack[((hsi*36+10032)*1+lsi)*1]), &(stack[((hsi*45+10453)*1+lsi)*1]), &(stack[((hsi*45+10617)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6660)*1+lsi)*1]),&(stack[((hsi*55+10289)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10344)*1+lsi)*1]), &(stack[((hsi*55+10289)*1+lsi)*1]), &(stack[((hsi*45+12907)*1+lsi)*1]), &(stack[((hsi*55+10962)*1+lsi)*1]), &(stack[((hsi*55+11017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6594)*1+lsi)*1]),&(stack[((hsi*66+10344)*1+lsi)*1]),66);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10410)*1+lsi)*1]), &(stack[((hsi*66+10344)*1+lsi)*1]), &(stack[((hsi*55+10289)*1+lsi)*1]), &(stack[((hsi*66+11338)*1+lsi)*1]), &(stack[((hsi*66+11404)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6516)*1+lsi)*1]),&(stack[((hsi*78+10410)*1+lsi)*1]),78);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+13197)*1+lsi)*1]), &(stack[((hsi*78+10410)*1+lsi)*1]), &(stack[((hsi*66+10344)*1+lsi)*1]), &(stack[((hsi*78+11835)*1+lsi)*1]), &(stack[((hsi*78+11913)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+6425)*1+lsi)*1]),&(stack[((hsi*91+13197)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+10488)*1+lsi)*1]), &(stack[((hsi*91+13197)*1+lsi)*1]), &(stack[((hsi*78+10410)*1+lsi)*1]), &(stack[((hsi*91+12425)*1+lsi)*1]), &(stack[((hsi*91+12516)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+6320)*1+lsi)*1]),&(stack[((hsi*105+10488)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6265)*1+lsi)*1]),&(stack[((hsi*55+11017)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6199)*1+lsi)*1]),&(stack[((hsi*66+11404)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6121)*1+lsi)*1]),&(stack[((hsi*78+11913)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+6030)*1+lsi)*1]),&(stack[((hsi*91+12516)*1+lsi)*1]),91);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12845)*1+lsi)*1]), &(stack[((hsi*55+12082)*1+lsi)*1]), &(stack[((hsi*45+11548)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10593)*1+lsi)*1]), &(stack[((hsi*66+12203)*1+lsi)*1]), &(stack[((hsi*55+11648)*1+lsi)*1]), &(stack[((hsi*66+12845)*1+lsi)*1]));
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10032)*1+lsi)*1]), &(stack[((hsi*66+12137)*1+lsi)*1]), &(stack[((hsi*55+11593)*1+lsi)*1]), &(stack[((hsi*66+12845)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+12911)*1+lsi)*1]), &(stack[((hsi*78+12347)*1+lsi)*1]), &(stack[((hsi*66+11769)*1+lsi)*1]), &(stack[((hsi*78+10032)*1+lsi)*1]), &(stack[((hsi*78+10593)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+10671)*1+lsi)*1]), &(stack[((hsi*78+12269)*1+lsi)*1]), &(stack[((hsi*66+11703)*1+lsi)*1]), &(stack[((hsi*78+10593)*1+lsi)*1]), &(stack[((hsi*78+10032)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+17661)*1+lsi)*1]), &(stack[((hsi*91+12516)*1+lsi)*1]), &(stack[((hsi*78+11913)*1+lsi)*1]), &(stack[((hsi*91+10671)*1+lsi)*1]), &(stack[((hsi*91+12911)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+5925)*1+lsi)*1]),&(stack[((hsi*105+17661)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5870)*1+lsi)*1]),&(stack[((hsi*55+13607)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5804)*1+lsi)*1]),&(stack[((hsi*66+13904)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5726)*1+lsi)*1]),&(stack[((hsi*78+14313)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+5635)*1+lsi)*1]),&(stack[((hsi*91+14795)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17766)*1+lsi)*1]), &(stack[((hsi*66+14482)*1+lsi)*1]), &(stack[((hsi*55+14048)*1+lsi)*1]), &(stack[((hsi*66+12845)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17844)*1+lsi)*1]), &(stack[((hsi*78+14626)*1+lsi)*1]), &(stack[((hsi*66+14169)*1+lsi)*1]), &(stack[((hsi*78+17766)*1+lsi)*1]), &(stack[((hsi*78+10032)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17935)*1+lsi)*1]), &(stack[((hsi*78+14548)*1+lsi)*1]), &(stack[((hsi*66+14103)*1+lsi)*1]), &(stack[((hsi*78+17766)*1+lsi)*1]), &(stack[((hsi*78+10593)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18026)*1+lsi)*1]), &(stack[((hsi*91+14795)*1+lsi)*1]), &(stack[((hsi*78+14313)*1+lsi)*1]), &(stack[((hsi*91+17935)*1+lsi)*1]), &(stack[((hsi*91+17844)*1+lsi)*1]), &(stack[((hsi*91+10671)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+5530)*1+lsi)*1]),&(stack[((hsi*105+18026)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5475)*1+lsi)*1]),&(stack[((hsi*55+15288)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5409)*1+lsi)*1]),&(stack[((hsi*66+13288)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5331)*1+lsi)*1]),&(stack[((hsi*78+15565)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+5240)*1+lsi)*1]),&(stack[((hsi*91+15903)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18131)*1+lsi)*1]), &(stack[((hsi*78+15734)*1+lsi)*1]), &(stack[((hsi*66+15421)*1+lsi)*1]), &(stack[((hsi*78+10593)*1+lsi)*1]), &(stack[((hsi*78+10032)*1+lsi)*1]), &(stack[((hsi*78+17766)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18222)*1+lsi)*1]), &(stack[((hsi*91+15903)*1+lsi)*1]), &(stack[((hsi*78+15565)*1+lsi)*1]), &(stack[((hsi*91+10671)*1+lsi)*1]), &(stack[((hsi*91+18131)*1+lsi)*1]), &(stack[((hsi*91+12911)*1+lsi)*1]), &(stack[((hsi*91+17935)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+5135)*1+lsi)*1]),&(stack[((hsi*105+18222)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5080)*1+lsi)*1]),&(stack[((hsi*55+13037)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5014)*1+lsi)*1]),&(stack[((hsi*66+15012)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4936)*1+lsi)*1]),&(stack[((hsi*78+16232)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4845)*1+lsi)*1]),&(stack[((hsi*91+16401)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18327)*1+lsi)*1]), &(stack[((hsi*91+16401)*1+lsi)*1]), &(stack[((hsi*78+16232)*1+lsi)*1]), &(stack[((hsi*91+17935)*1+lsi)*1]), &(stack[((hsi*91+17844)*1+lsi)*1]), &(stack[((hsi*91+18131)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+4740)*1+lsi)*1]),&(stack[((hsi*105+18327)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4685)*1+lsi)*1]),&(stack[((hsi*55+15233)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4619)*1+lsi)*1]),&(stack[((hsi*66+11138)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4541)*1+lsi)*1]),&(stack[((hsi*78+15487)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4450)*1+lsi)*1]),&(stack[((hsi*91+15812)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18432)*1+lsi)*1]), &(stack[((hsi*91+15812)*1+lsi)*1]), &(stack[((hsi*78+15487)*1+lsi)*1]), &(stack[((hsi*91+12911)*1+lsi)*1]), &(stack[((hsi*91+10671)*1+lsi)*1]), &(stack[((hsi*91+18131)*1+lsi)*1]), &(stack[((hsi*91+17844)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+4345)*1+lsi)*1]),&(stack[((hsi*105+18432)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4290)*1+lsi)*1]),&(stack[((hsi*55+13552)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4224)*1+lsi)*1]),&(stack[((hsi*66+13838)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4146)*1+lsi)*1]),&(stack[((hsi*78+14235)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4055)*1+lsi)*1]),&(stack[((hsi*91+14704)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18537)*1+lsi)*1]), &(stack[((hsi*91+14704)*1+lsi)*1]), &(stack[((hsi*78+14235)*1+lsi)*1]), &(stack[((hsi*91+17844)*1+lsi)*1]), &(stack[((hsi*91+17935)*1+lsi)*1]), &(stack[((hsi*91+12911)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+3950)*1+lsi)*1]),&(stack[((hsi*105+18537)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3895)*1+lsi)*1]),&(stack[((hsi*55+10962)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3829)*1+lsi)*1]),&(stack[((hsi*66+11338)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3751)*1+lsi)*1]),&(stack[((hsi*78+11835)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+3660)*1+lsi)*1]),&(stack[((hsi*91+12425)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+18642)*1+lsi)*1]), &(stack[((hsi*91+12425)*1+lsi)*1]), &(stack[((hsi*78+11835)*1+lsi)*1]), &(stack[((hsi*91+12911)*1+lsi)*1]), &(stack[((hsi*91+10671)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+3555)*1+lsi)*1]),&(stack[((hsi*105+18642)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3500)*1+lsi)*1]),&(stack[((hsi*55+11228)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3434)*1+lsi)*1]),&(stack[((hsi*66+11703)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3356)*1+lsi)*1]),&(stack[((hsi*78+12269)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+3265)*1+lsi)*1]),&(stack[((hsi*91+10671)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+18747)*1+lsi)*1]), &(stack[((hsi*66+12845)*1+lsi)*1]), &(stack[((hsi*55+12082)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18825)*1+lsi)*1]), &(stack[((hsi*78+10032)*1+lsi)*1]), &(stack[((hsi*66+12137)*1+lsi)*1]), &(stack[((hsi*78+18747)*1+lsi)*1]));
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18916)*1+lsi)*1]), &(stack[((hsi*78+10593)*1+lsi)*1]), &(stack[((hsi*66+12203)*1+lsi)*1]), &(stack[((hsi*78+18747)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19007)*1+lsi)*1]), &(stack[((hsi*91+10671)*1+lsi)*1]), &(stack[((hsi*78+12269)*1+lsi)*1]), &(stack[((hsi*91+18916)*1+lsi)*1]), &(stack[((hsi*91+18825)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+3160)*1+lsi)*1]),&(stack[((hsi*105+19007)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3105)*1+lsi)*1]),&(stack[((hsi*55+13728)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3039)*1+lsi)*1]),&(stack[((hsi*66+14103)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2961)*1+lsi)*1]),&(stack[((hsi*78+14548)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+2870)*1+lsi)*1]),&(stack[((hsi*91+17935)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19112)*1+lsi)*1]), &(stack[((hsi*78+17766)*1+lsi)*1]), &(stack[((hsi*66+14482)*1+lsi)*1]), &(stack[((hsi*78+18747)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19203)*1+lsi)*1]), &(stack[((hsi*91+17935)*1+lsi)*1]), &(stack[((hsi*78+14548)*1+lsi)*1]), &(stack[((hsi*91+19112)*1+lsi)*1]), &(stack[((hsi*91+18916)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+2765)*1+lsi)*1]),&(stack[((hsi*105+19203)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2710)*1+lsi)*1]),&(stack[((hsi*55+15097)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2644)*1+lsi)*1]),&(stack[((hsi*66+15421)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2566)*1+lsi)*1]),&(stack[((hsi*78+15734)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+2475)*1+lsi)*1]),&(stack[((hsi*91+18131)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19308)*1+lsi)*1]), &(stack[((hsi*91+18131)*1+lsi)*1]), &(stack[((hsi*78+15734)*1+lsi)*1]), &(stack[((hsi*91+18916)*1+lsi)*1]), &(stack[((hsi*91+18825)*1+lsi)*1]), &(stack[((hsi*91+19112)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+2370)*1+lsi)*1]),&(stack[((hsi*105+19308)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2315)*1+lsi)*1]),&(stack[((hsi*55+13783)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2249)*1+lsi)*1]),&(stack[((hsi*66+14169)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2171)*1+lsi)*1]),&(stack[((hsi*78+14626)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+2080)*1+lsi)*1]),&(stack[((hsi*91+17844)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19413)*1+lsi)*1]), &(stack[((hsi*91+17844)*1+lsi)*1]), &(stack[((hsi*78+14626)*1+lsi)*1]), &(stack[((hsi*91+19112)*1+lsi)*1]), &(stack[((hsi*91+18825)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+1975)*1+lsi)*1]),&(stack[((hsi*105+19413)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1920)*1+lsi)*1]),&(stack[((hsi*55+11283)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1854)*1+lsi)*1]),&(stack[((hsi*66+11769)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1776)*1+lsi)*1]),&(stack[((hsi*78+12347)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+1685)*1+lsi)*1]),&(stack[((hsi*91+12911)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19518)*1+lsi)*1]), &(stack[((hsi*91+12911)*1+lsi)*1]), &(stack[((hsi*78+12347)*1+lsi)*1]), &(stack[((hsi*91+18825)*1+lsi)*1]), &(stack[((hsi*91+18916)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+1580)*1+lsi)*1]),&(stack[((hsi*105+19518)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1525)*1+lsi)*1]),&(stack[((hsi*55+11648)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1459)*1+lsi)*1]),&(stack[((hsi*66+12203)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1381)*1+lsi)*1]),&(stack[((hsi*78+10593)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+1290)*1+lsi)*1]),&(stack[((hsi*91+18916)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19623)*1+lsi)*1]), &(stack[((hsi*78+18747)*1+lsi)*1]), &(stack[((hsi*66+12845)*1+lsi)*1]));
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19714)*1+lsi)*1]), &(stack[((hsi*91+18916)*1+lsi)*1]), &(stack[((hsi*78+10593)*1+lsi)*1]), &(stack[((hsi*91+19623)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+1185)*1+lsi)*1]),&(stack[((hsi*105+19714)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1130)*1+lsi)*1]),&(stack[((hsi*55+14048)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1064)*1+lsi)*1]),&(stack[((hsi*66+14482)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+986)*1+lsi)*1]),&(stack[((hsi*78+17766)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+895)*1+lsi)*1]),&(stack[((hsi*91+19112)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19819)*1+lsi)*1]), &(stack[((hsi*91+19112)*1+lsi)*1]), &(stack[((hsi*78+17766)*1+lsi)*1]), &(stack[((hsi*91+19623)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+790)*1+lsi)*1]),&(stack[((hsi*105+19819)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+735)*1+lsi)*1]),&(stack[((hsi*55+11593)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+669)*1+lsi)*1]),&(stack[((hsi*66+12137)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+591)*1+lsi)*1]),&(stack[((hsi*78+10032)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+500)*1+lsi)*1]),&(stack[((hsi*91+18825)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+19924)*1+lsi)*1]), &(stack[((hsi*91+18825)*1+lsi)*1]), &(stack[((hsi*78+10032)*1+lsi)*1]), &(stack[((hsi*91+19623)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+395)*1+lsi)*1]),&(stack[((hsi*105+19924)*1+lsi)*1]),105);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+340)*1+lsi)*1]),&(stack[((hsi*55+12082)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+274)*1+lsi)*1]),&(stack[((hsi*66+12845)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+196)*1+lsi)*1]),&(stack[((hsi*78+18747)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*91+105)*1+lsi)*1]),&(stack[((hsi*91+19623)*1+lsi)*1]),91);
OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*105+20029)*1+lsi)*1]), &(stack[((hsi*91+19623)*1+lsi)*1]), &(stack[((hsi*78+18747)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*105+0)*1+lsi)*1]),&(stack[((hsi*105+20029)*1+lsi)*1]),105);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 9875 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
