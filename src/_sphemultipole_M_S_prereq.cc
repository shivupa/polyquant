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
void _sphemultipole_M_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1375)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1378)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1381)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1384)*1+lsi)*1]), &(stack[((hsi*3+1375)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+1381)*1+lsi)*1]), &(stack[((hsi*3+1378)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1390)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1393)*1+lsi)*1]), &(stack[((hsi*3+1378)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+1390)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1399)*1+lsi)*1]), &(stack[((hsi*3+1381)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+1390)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1405)*1+lsi)*1]), &(stack[((hsi*6+1384)*1+lsi)*1]), &(stack[((hsi*3+1375)*1+lsi)*1]), &(stack[((hsi*6+1399)*1+lsi)*1]), &(stack[((hsi*6+1393)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*3+1390)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1421)*1+lsi)*1]), &(stack[((hsi*6+1393)*1+lsi)*1]), &(stack[((hsi*3+1378)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1431)*1+lsi)*1]), &(stack[((hsi*6+1399)*1+lsi)*1]), &(stack[((hsi*3+1381)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1441)*1+lsi)*1]), &(stack[((hsi*10+1405)*1+lsi)*1]), &(stack[((hsi*6+1384)*1+lsi)*1]), &(stack[((hsi*10+1431)*1+lsi)*1]), &(stack[((hsi*10+1421)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*3+1390)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1466)*1+lsi)*1]), &(stack[((hsi*10+1421)*1+lsi)*1]), &(stack[((hsi*6+1393)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1481)*1+lsi)*1]), &(stack[((hsi*10+1431)*1+lsi)*1]), &(stack[((hsi*6+1399)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1496)*1+lsi)*1]), &(stack[((hsi*15+1441)*1+lsi)*1]), &(stack[((hsi*10+1405)*1+lsi)*1]), &(stack[((hsi*15+1481)*1+lsi)*1]), &(stack[((hsi*15+1466)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1517)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1532)*1+lsi)*1]), &(stack[((hsi*15+1466)*1+lsi)*1]), &(stack[((hsi*10+1421)*1+lsi)*1]), &(stack[((hsi*15+1517)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1553)*1+lsi)*1]), &(stack[((hsi*15+1481)*1+lsi)*1]), &(stack[((hsi*10+1431)*1+lsi)*1]), &(stack[((hsi*15+1517)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1574)*1+lsi)*1]), &(stack[((hsi*21+1496)*1+lsi)*1]), &(stack[((hsi*15+1441)*1+lsi)*1]), &(stack[((hsi*21+1553)*1+lsi)*1]), &(stack[((hsi*21+1532)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1602)*1+lsi)*1]), &(stack[((hsi*15+1517)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1623)*1+lsi)*1]), &(stack[((hsi*21+1532)*1+lsi)*1]), &(stack[((hsi*15+1466)*1+lsi)*1]), &(stack[((hsi*21+1602)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1651)*1+lsi)*1]), &(stack[((hsi*21+1553)*1+lsi)*1]), &(stack[((hsi*15+1481)*1+lsi)*1]), &(stack[((hsi*21+1602)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1679)*1+lsi)*1]), &(stack[((hsi*28+1574)*1+lsi)*1]), &(stack[((hsi*21+1496)*1+lsi)*1]), &(stack[((hsi*28+1651)*1+lsi)*1]), &(stack[((hsi*28+1623)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1715)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1718)*1+lsi)*1]), &(stack[((hsi*3+1715)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+1378)*1+lsi)*1]), &(stack[((hsi*3+1381)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1724)*1+lsi)*1]), &(stack[((hsi*6+1718)*1+lsi)*1]), &(stack[((hsi*3+1715)*1+lsi)*1]), &(stack[((hsi*6+1393)*1+lsi)*1]), &(stack[((hsi*6+1399)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1734)*1+lsi)*1]), &(stack[((hsi*10+1724)*1+lsi)*1]), &(stack[((hsi*6+1718)*1+lsi)*1]), &(stack[((hsi*10+1421)*1+lsi)*1]), &(stack[((hsi*10+1431)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*15+1734)*1+lsi)*1]), &(stack[((hsi*10+1724)*1+lsi)*1]), &(stack[((hsi*15+1466)*1+lsi)*1]), &(stack[((hsi*15+1481)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1770)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*15+1734)*1+lsi)*1]), &(stack[((hsi*21+1532)*1+lsi)*1]), &(stack[((hsi*21+1553)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1798)*1+lsi)*1]), &(stack[((hsi*28+1770)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*28+1623)*1+lsi)*1]), &(stack[((hsi*28+1651)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1834)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1837)*1+lsi)*1]), &(stack[((hsi*3+1834)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+1715)*1+lsi)*1]), &(stack[((hsi*3+1375)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1843)*1+lsi)*1]), &(stack[((hsi*6+1837)*1+lsi)*1]), &(stack[((hsi*3+1834)*1+lsi)*1]), &(stack[((hsi*6+1718)*1+lsi)*1]), &(stack[((hsi*6+1384)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1853)*1+lsi)*1]), &(stack[((hsi*10+1843)*1+lsi)*1]), &(stack[((hsi*6+1837)*1+lsi)*1]), &(stack[((hsi*10+1724)*1+lsi)*1]), &(stack[((hsi*10+1405)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1868)*1+lsi)*1]), &(stack[((hsi*15+1853)*1+lsi)*1]), &(stack[((hsi*10+1843)*1+lsi)*1]), &(stack[((hsi*15+1734)*1+lsi)*1]), &(stack[((hsi*15+1441)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1889)*1+lsi)*1]), &(stack[((hsi*21+1868)*1+lsi)*1]), &(stack[((hsi*15+1853)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1496)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1917)*1+lsi)*1]), &(stack[((hsi*28+1889)*1+lsi)*1]), &(stack[((hsi*21+1868)*1+lsi)*1]), &(stack[((hsi*28+1770)*1+lsi)*1]), &(stack[((hsi*28+1574)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+1953)*1+lsi)*1]), &(stack[((hsi*36+1917)*1+lsi)*1]), &(stack[((hsi*28+1889)*1+lsi)*1]), &(stack[((hsi*36+1798)*1+lsi)*1]), &(stack[((hsi*36+1679)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1998)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2001)*1+lsi)*1]), &(stack[((hsi*3+1998)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+1375)*1+lsi)*1]), &(stack[((hsi*3+1715)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2007)*1+lsi)*1]), &(stack[((hsi*6+2001)*1+lsi)*1]), &(stack[((hsi*3+1998)*1+lsi)*1]), &(stack[((hsi*6+1384)*1+lsi)*1]), &(stack[((hsi*6+1718)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2017)*1+lsi)*1]), &(stack[((hsi*10+2007)*1+lsi)*1]), &(stack[((hsi*6+2001)*1+lsi)*1]), &(stack[((hsi*10+1405)*1+lsi)*1]), &(stack[((hsi*10+1724)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2032)*1+lsi)*1]), &(stack[((hsi*15+2017)*1+lsi)*1]), &(stack[((hsi*10+2007)*1+lsi)*1]), &(stack[((hsi*15+1441)*1+lsi)*1]), &(stack[((hsi*15+1734)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2053)*1+lsi)*1]), &(stack[((hsi*21+2032)*1+lsi)*1]), &(stack[((hsi*15+2017)*1+lsi)*1]), &(stack[((hsi*21+1496)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2081)*1+lsi)*1]), &(stack[((hsi*28+2053)*1+lsi)*1]), &(stack[((hsi*21+2032)*1+lsi)*1]), &(stack[((hsi*28+1574)*1+lsi)*1]), &(stack[((hsi*28+1770)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2117)*1+lsi)*1]), &(stack[((hsi*36+2081)*1+lsi)*1]), &(stack[((hsi*28+2053)*1+lsi)*1]), &(stack[((hsi*36+1679)*1+lsi)*1]), &(stack[((hsi*36+1798)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2162)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2165)*1+lsi)*1]), &(stack[((hsi*3+2162)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+1998)*1+lsi)*1]), &(stack[((hsi*3+1834)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2171)*1+lsi)*1]), &(stack[((hsi*6+2165)*1+lsi)*1]), &(stack[((hsi*3+2162)*1+lsi)*1]), &(stack[((hsi*6+2001)*1+lsi)*1]), &(stack[((hsi*6+1837)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2181)*1+lsi)*1]), &(stack[((hsi*10+2171)*1+lsi)*1]), &(stack[((hsi*6+2165)*1+lsi)*1]), &(stack[((hsi*10+2007)*1+lsi)*1]), &(stack[((hsi*10+1843)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2196)*1+lsi)*1]), &(stack[((hsi*15+2181)*1+lsi)*1]), &(stack[((hsi*10+2171)*1+lsi)*1]), &(stack[((hsi*15+2017)*1+lsi)*1]), &(stack[((hsi*15+1853)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2217)*1+lsi)*1]), &(stack[((hsi*21+2196)*1+lsi)*1]), &(stack[((hsi*15+2181)*1+lsi)*1]), &(stack[((hsi*21+2032)*1+lsi)*1]), &(stack[((hsi*21+1868)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*28+2217)*1+lsi)*1]), &(stack[((hsi*21+2196)*1+lsi)*1]), &(stack[((hsi*28+2053)*1+lsi)*1]), &(stack[((hsi*28+1889)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2162)*1+lsi)*1]), &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*28+2217)*1+lsi)*1]), &(stack[((hsi*36+2081)*1+lsi)*1]), &(stack[((hsi*36+1917)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2281)*1+lsi)*1]), &(stack[((hsi*45+2162)*1+lsi)*1]), &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*45+2117)*1+lsi)*1]), &(stack[((hsi*45+1953)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1320)*1+lsi)*1]),&(stack[((hsi*55+2281)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2162)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2165)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2168)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2171)*1+lsi)*1]), &(stack[((hsi*3+2162)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+2168)*1+lsi)*1]), &(stack[((hsi*3+2165)*1+lsi)*1]), &(stack[((hsi*3+1715)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2177)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2180)*1+lsi)*1]), &(stack[((hsi*3+2165)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+2177)*1+lsi)*1]), &(stack[((hsi*3+1381)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2186)*1+lsi)*1]), &(stack[((hsi*3+2168)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+2177)*1+lsi)*1]), &(stack[((hsi*3+1378)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*6+2171)*1+lsi)*1]), &(stack[((hsi*3+2162)*1+lsi)*1]), &(stack[((hsi*6+2186)*1+lsi)*1]), &(stack[((hsi*6+2180)*1+lsi)*1]), &(stack[((hsi*6+1718)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+1390)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2208)*1+lsi)*1]), &(stack[((hsi*6+2180)*1+lsi)*1]), &(stack[((hsi*3+2165)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*6+1399)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2218)*1+lsi)*1]), &(stack[((hsi*6+2186)*1+lsi)*1]), &(stack[((hsi*3+2168)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*6+1393)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2228)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*6+2171)*1+lsi)*1]), &(stack[((hsi*10+2218)*1+lsi)*1]), &(stack[((hsi*10+2208)*1+lsi)*1]), &(stack[((hsi*10+1724)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2253)*1+lsi)*1]), &(stack[((hsi*10+2208)*1+lsi)*1]), &(stack[((hsi*6+2180)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*10+1431)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2218)*1+lsi)*1]), &(stack[((hsi*6+2186)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*10+1421)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2351)*1+lsi)*1]), &(stack[((hsi*15+2228)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*15+2253)*1+lsi)*1]), &(stack[((hsi*15+1734)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2387)*1+lsi)*1]), &(stack[((hsi*15+2253)*1+lsi)*1]), &(stack[((hsi*10+2208)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*15+1481)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2408)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2218)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*15+1466)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2429)*1+lsi)*1]), &(stack[((hsi*21+2351)*1+lsi)*1]), &(stack[((hsi*15+2228)*1+lsi)*1]), &(stack[((hsi*21+2408)*1+lsi)*1]), &(stack[((hsi*21+2387)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2457)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*15+1517)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2478)*1+lsi)*1]), &(stack[((hsi*21+2387)*1+lsi)*1]), &(stack[((hsi*15+2253)*1+lsi)*1]), &(stack[((hsi*21+2457)*1+lsi)*1]), &(stack[((hsi*21+1553)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2506)*1+lsi)*1]), &(stack[((hsi*21+2408)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*21+2457)*1+lsi)*1]), &(stack[((hsi*21+1532)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2534)*1+lsi)*1]), &(stack[((hsi*28+2429)*1+lsi)*1]), &(stack[((hsi*21+2351)*1+lsi)*1]), &(stack[((hsi*28+2506)*1+lsi)*1]), &(stack[((hsi*28+2478)*1+lsi)*1]), &(stack[((hsi*28+1770)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2570)*1+lsi)*1]), &(stack[((hsi*21+2457)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*21+1602)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2598)*1+lsi)*1]), &(stack[((hsi*28+2478)*1+lsi)*1]), &(stack[((hsi*21+2387)*1+lsi)*1]), &(stack[((hsi*28+2570)*1+lsi)*1]), &(stack[((hsi*28+1651)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2634)*1+lsi)*1]), &(stack[((hsi*28+2506)*1+lsi)*1]), &(stack[((hsi*21+2408)*1+lsi)*1]), &(stack[((hsi*28+2570)*1+lsi)*1]), &(stack[((hsi*28+1623)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*36+2534)*1+lsi)*1]), &(stack[((hsi*28+2429)*1+lsi)*1]), &(stack[((hsi*36+2634)*1+lsi)*1]), &(stack[((hsi*36+2598)*1+lsi)*1]), &(stack[((hsi*36+1798)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1390)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*3+1390)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+2165)*1+lsi)*1]), &(stack[((hsi*3+2168)*1+lsi)*1]), &(stack[((hsi*3+1375)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*3+1390)*1+lsi)*1]), &(stack[((hsi*6+2180)*1+lsi)*1]), &(stack[((hsi*6+2186)*1+lsi)*1]), &(stack[((hsi*6+1384)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2715)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*10+2208)*1+lsi)*1]), &(stack[((hsi*10+2218)*1+lsi)*1]), &(stack[((hsi*10+1405)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2730)*1+lsi)*1]), &(stack[((hsi*15+2715)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*15+2253)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*15+1441)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2751)*1+lsi)*1]), &(stack[((hsi*21+2730)*1+lsi)*1]), &(stack[((hsi*15+2715)*1+lsi)*1]), &(stack[((hsi*21+2387)*1+lsi)*1]), &(stack[((hsi*21+2408)*1+lsi)*1]), &(stack[((hsi*21+1496)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2779)*1+lsi)*1]), &(stack[((hsi*28+2751)*1+lsi)*1]), &(stack[((hsi*21+2730)*1+lsi)*1]), &(stack[((hsi*28+2478)*1+lsi)*1]), &(stack[((hsi*28+2506)*1+lsi)*1]), &(stack[((hsi*28+1574)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2815)*1+lsi)*1]), &(stack[((hsi*36+2779)*1+lsi)*1]), &(stack[((hsi*28+2751)*1+lsi)*1]), &(stack[((hsi*36+2598)*1+lsi)*1]), &(stack[((hsi*36+2634)*1+lsi)*1]), &(stack[((hsi*36+1679)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2268)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2271)*1+lsi)*1]), &(stack[((hsi*3+2268)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+1390)*1+lsi)*1]), &(stack[((hsi*3+2162)*1+lsi)*1]), &(stack[((hsi*3+1998)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2860)*1+lsi)*1]), &(stack[((hsi*6+2271)*1+lsi)*1]), &(stack[((hsi*3+2268)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*6+2171)*1+lsi)*1]), &(stack[((hsi*6+2001)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2870)*1+lsi)*1]), &(stack[((hsi*10+2860)*1+lsi)*1]), &(stack[((hsi*6+2271)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*10+2007)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2885)*1+lsi)*1]), &(stack[((hsi*15+2870)*1+lsi)*1]), &(stack[((hsi*10+2860)*1+lsi)*1]), &(stack[((hsi*15+2715)*1+lsi)*1]), &(stack[((hsi*15+2228)*1+lsi)*1]), &(stack[((hsi*15+2017)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2906)*1+lsi)*1]), &(stack[((hsi*21+2885)*1+lsi)*1]), &(stack[((hsi*15+2870)*1+lsi)*1]), &(stack[((hsi*21+2730)*1+lsi)*1]), &(stack[((hsi*21+2351)*1+lsi)*1]), &(stack[((hsi*21+2032)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2934)*1+lsi)*1]), &(stack[((hsi*28+2906)*1+lsi)*1]), &(stack[((hsi*21+2885)*1+lsi)*1]), &(stack[((hsi*28+2751)*1+lsi)*1]), &(stack[((hsi*28+2429)*1+lsi)*1]), &(stack[((hsi*28+2053)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2860)*1+lsi)*1]), &(stack[((hsi*36+2934)*1+lsi)*1]), &(stack[((hsi*28+2906)*1+lsi)*1]), &(stack[((hsi*36+2779)*1+lsi)*1]), &(stack[((hsi*36+2534)*1+lsi)*1]), &(stack[((hsi*36+2081)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2970)*1+lsi)*1]), &(stack[((hsi*45+2860)*1+lsi)*1]), &(stack[((hsi*36+2934)*1+lsi)*1]), &(stack[((hsi*45+2815)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*45+2117)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1265)*1+lsi)*1]),&(stack[((hsi*55+2970)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2860)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2866)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+1715)*1+lsi)*1]), &(stack[((hsi*3+1375)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(stack[((hsi*3+2168)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+1381)*1+lsi)*1]), &(stack[((hsi*3+1378)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2878)*1+lsi)*1]), &(stack[((hsi*6+2866)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]), &(stack[((hsi*6+1718)*1+lsi)*1]), &(stack[((hsi*6+1384)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*6+2186)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(stack[((hsi*6+1399)*1+lsi)*1]), &(stack[((hsi*6+1393)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2898)*1+lsi)*1]), &(stack[((hsi*10+2878)*1+lsi)*1]), &(stack[((hsi*6+2866)*1+lsi)*1]), &(stack[((hsi*10+1724)*1+lsi)*1]), &(stack[((hsi*10+1405)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*10+2218)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2913)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*10+1431)*1+lsi)*1]), &(stack[((hsi*10+1421)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2928)*1+lsi)*1]), &(stack[((hsi*15+2898)*1+lsi)*1]), &(stack[((hsi*10+2878)*1+lsi)*1]), &(stack[((hsi*15+1734)*1+lsi)*1]), &(stack[((hsi*15+1441)*1+lsi)*1]), &(stack[((hsi*15+2913)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2913)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*15+1481)*1+lsi)*1]), &(stack[((hsi*15+1466)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1466)*1+lsi)*1]), &(stack[((hsi*21+2928)*1+lsi)*1]), &(stack[((hsi*15+2898)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1496)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*21+2408)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3025)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2913)*1+lsi)*1]), &(stack[((hsi*21+1553)*1+lsi)*1]), &(stack[((hsi*21+1532)*1+lsi)*1]), &(stack[((hsi*21+2457)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3053)*1+lsi)*1]), &(stack[((hsi*28+1466)*1+lsi)*1]), &(stack[((hsi*21+2928)*1+lsi)*1]), &(stack[((hsi*28+1770)*1+lsi)*1]), &(stack[((hsi*28+1574)*1+lsi)*1]), &(stack[((hsi*28+3025)*1+lsi)*1]), &(stack[((hsi*28+2506)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3089)*1+lsi)*1]), &(stack[((hsi*28+3025)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*28+1651)*1+lsi)*1]), &(stack[((hsi*28+1623)*1+lsi)*1]), &(stack[((hsi*28+2570)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*36+3053)*1+lsi)*1]), &(stack[((hsi*28+1466)*1+lsi)*1]), &(stack[((hsi*36+1798)*1+lsi)*1]), &(stack[((hsi*36+1679)*1+lsi)*1]), &(stack[((hsi*36+3089)*1+lsi)*1]), &(stack[((hsi*36+2634)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2177)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+1375)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(stack[((hsi*3+1715)*1+lsi)*1]), &(stack[((hsi*3+2165)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]), &(stack[((hsi*6+1384)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*6+1718)*1+lsi)*1]), &(stack[((hsi*6+2180)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*10+1405)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*10+1724)*1+lsi)*1]), &(stack[((hsi*10+2208)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1393)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*15+1441)*1+lsi)*1]), &(stack[((hsi*15+2913)*1+lsi)*1]), &(stack[((hsi*15+1734)*1+lsi)*1]), &(stack[((hsi*15+2253)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1421)*1+lsi)*1]), &(stack[((hsi*21+1393)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*21+1496)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+2387)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1715)*1+lsi)*1]), &(stack[((hsi*28+1421)*1+lsi)*1]), &(stack[((hsi*21+1393)*1+lsi)*1]), &(stack[((hsi*28+1574)*1+lsi)*1]), &(stack[((hsi*28+3025)*1+lsi)*1]), &(stack[((hsi*28+1770)*1+lsi)*1]), &(stack[((hsi*28+2478)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3170)*1+lsi)*1]), &(stack[((hsi*36+1715)*1+lsi)*1]), &(stack[((hsi*28+1421)*1+lsi)*1]), &(stack[((hsi*36+1679)*1+lsi)*1]), &(stack[((hsi*36+3089)*1+lsi)*1]), &(stack[((hsi*36+1798)*1+lsi)*1]), &(stack[((hsi*36+2598)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1494)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1497)*1+lsi)*1]), &(stack[((hsi*3+1494)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+1998)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]), &(stack[((hsi*3+1834)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]), &(stack[((hsi*3+1390)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1751)*1+lsi)*1]), &(stack[((hsi*6+1497)*1+lsi)*1]), &(stack[((hsi*3+1494)*1+lsi)*1]), &(stack[((hsi*6+2001)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*6+1837)*1+lsi)*1]), &(stack[((hsi*6+2866)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*10+1751)*1+lsi)*1]), &(stack[((hsi*6+1497)*1+lsi)*1]), &(stack[((hsi*10+2007)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*10+1843)*1+lsi)*1]), &(stack[((hsi*10+2878)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1494)*1+lsi)*1]), &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*10+1751)*1+lsi)*1]), &(stack[((hsi*15+2017)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*15+1853)*1+lsi)*1]), &(stack[((hsi*15+2898)*1+lsi)*1]), &(stack[((hsi*15+2715)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3215)*1+lsi)*1]), &(stack[((hsi*21+1494)*1+lsi)*1]), &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*21+2032)*1+lsi)*1]), &(stack[((hsi*21+1393)*1+lsi)*1]), &(stack[((hsi*21+1868)*1+lsi)*1]), &(stack[((hsi*21+2928)*1+lsi)*1]), &(stack[((hsi*21+2730)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3243)*1+lsi)*1]), &(stack[((hsi*28+3215)*1+lsi)*1]), &(stack[((hsi*21+1494)*1+lsi)*1]), &(stack[((hsi*28+2053)*1+lsi)*1]), &(stack[((hsi*28+1421)*1+lsi)*1]), &(stack[((hsi*28+1889)*1+lsi)*1]), &(stack[((hsi*28+1466)*1+lsi)*1]), &(stack[((hsi*28+2751)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3279)*1+lsi)*1]), &(stack[((hsi*36+3243)*1+lsi)*1]), &(stack[((hsi*28+3215)*1+lsi)*1]), &(stack[((hsi*36+2081)*1+lsi)*1]), &(stack[((hsi*36+1715)*1+lsi)*1]), &(stack[((hsi*36+1917)*1+lsi)*1]), &(stack[((hsi*36+3053)*1+lsi)*1]), &(stack[((hsi*36+2779)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3324)*1+lsi)*1]), &(stack[((hsi*45+3279)*1+lsi)*1]), &(stack[((hsi*36+3243)*1+lsi)*1]), &(stack[((hsi*45+2117)*1+lsi)*1]), &(stack[((hsi*45+3170)*1+lsi)*1]), &(stack[((hsi*45+1953)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*45+2815)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1210)*1+lsi)*1]),&(stack[((hsi*55+3324)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3215)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3218)*1+lsi)*1]), &(stack[((hsi*3+3215)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+2165)*1+lsi)*1]), &(stack[((hsi*3+2168)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3224)*1+lsi)*1]), &(stack[((hsi*6+3218)*1+lsi)*1]), &(stack[((hsi*3+3215)*1+lsi)*1]), &(stack[((hsi*6+2180)*1+lsi)*1]), &(stack[((hsi*6+2186)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*10+3224)*1+lsi)*1]), &(stack[((hsi*6+3218)*1+lsi)*1]), &(stack[((hsi*10+2208)*1+lsi)*1]), &(stack[((hsi*10+2218)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3234)*1+lsi)*1]), &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*10+3224)*1+lsi)*1]), &(stack[((hsi*15+2253)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*15+2913)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2253)*1+lsi)*1]), &(stack[((hsi*21+3234)*1+lsi)*1]), &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*21+2387)*1+lsi)*1]), &(stack[((hsi*21+2408)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3255)*1+lsi)*1]), &(stack[((hsi*28+2253)*1+lsi)*1]), &(stack[((hsi*21+3234)*1+lsi)*1]), &(stack[((hsi*28+2478)*1+lsi)*1]), &(stack[((hsi*28+2506)*1+lsi)*1]), &(stack[((hsi*28+3025)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*36+3255)*1+lsi)*1]), &(stack[((hsi*28+2253)*1+lsi)*1]), &(stack[((hsi*36+2598)*1+lsi)*1]), &(stack[((hsi*36+2634)*1+lsi)*1]), &(stack[((hsi*36+3089)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+1390)*1+lsi)*1]), &(stack[((hsi*3+3215)*1+lsi)*1]), &(stack[((hsi*3+2162)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*6+3218)*1+lsi)*1]), &(stack[((hsi*6+2171)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*10+3224)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*15+2715)*1+lsi)*1]), &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*15+2228)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2387)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*21+2730)*1+lsi)*1]), &(stack[((hsi*21+3234)*1+lsi)*1]), &(stack[((hsi*21+2351)*1+lsi)*1]), &(stack[((hsi*21+1393)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3424)*1+lsi)*1]), &(stack[((hsi*28+2387)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*28+2751)*1+lsi)*1]), &(stack[((hsi*28+2253)*1+lsi)*1]), &(stack[((hsi*28+2429)*1+lsi)*1]), &(stack[((hsi*28+1421)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3460)*1+lsi)*1]), &(stack[((hsi*36+3424)*1+lsi)*1]), &(stack[((hsi*28+2387)*1+lsi)*1]), &(stack[((hsi*36+2779)*1+lsi)*1]), &(stack[((hsi*36+3255)*1+lsi)*1]), &(stack[((hsi*36+2534)*1+lsi)*1]), &(stack[((hsi*36+1715)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3505)*1+lsi)*1]), &(stack[((hsi*45+3460)*1+lsi)*1]), &(stack[((hsi*36+3424)*1+lsi)*1]), &(stack[((hsi*45+2815)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*45+3170)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1155)*1+lsi)*1]),&(stack[((hsi*55+3505)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+2177)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]), &(stack[((hsi*3+3215)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*6+2866)*1+lsi)*1]), &(stack[((hsi*6+3218)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*10+2878)*1+lsi)*1]), &(stack[((hsi*10+3224)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*15+2898)*1+lsi)*1]), &(stack[((hsi*15+1375)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*21+1393)*1+lsi)*1]), &(stack[((hsi*21+2928)*1+lsi)*1]), &(stack[((hsi*21+3234)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3452)*1+lsi)*1]), &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*28+1421)*1+lsi)*1]), &(stack[((hsi*28+1466)*1+lsi)*1]), &(stack[((hsi*28+2253)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+3452)*1+lsi)*1]), &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*36+1715)*1+lsi)*1]), &(stack[((hsi*36+3053)*1+lsi)*1]), &(stack[((hsi*36+3255)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3605)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+3452)*1+lsi)*1]), &(stack[((hsi*45+3170)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1100)*1+lsi)*1]),&(stack[((hsi*55+3605)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+2162)*1+lsi)*1]), &(stack[((hsi*3+1390)*1+lsi)*1]), &(stack[((hsi*3+3215)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(stack[((hsi*6+2171)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*6+3218)*1+lsi)*1]), &(stack[((hsi*6+2866)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*10+3224)*1+lsi)*1]), &(stack[((hsi*10+2878)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*15+2228)*1+lsi)*1]), &(stack[((hsi*15+2715)*1+lsi)*1]), &(stack[((hsi*15+1375)*1+lsi)*1]), &(stack[((hsi*15+2898)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*21+2351)*1+lsi)*1]), &(stack[((hsi*21+2730)*1+lsi)*1]), &(stack[((hsi*21+3234)*1+lsi)*1]), &(stack[((hsi*21+2928)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3452)*1+lsi)*1]), &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*28+2429)*1+lsi)*1]), &(stack[((hsi*28+2751)*1+lsi)*1]), &(stack[((hsi*28+2253)*1+lsi)*1]), &(stack[((hsi*28+1466)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+3452)*1+lsi)*1]), &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*36+2534)*1+lsi)*1]), &(stack[((hsi*36+2779)*1+lsi)*1]), &(stack[((hsi*36+3255)*1+lsi)*1]), &(stack[((hsi*36+3053)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3660)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+3452)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*45+2815)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1045)*1+lsi)*1]),&(stack[((hsi*55+3660)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+1834)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]), &(stack[((hsi*3+1998)*1+lsi)*1]), &(stack[((hsi*3+2177)*1+lsi)*1]), &(stack[((hsi*3+2162)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*3+2863)*1+lsi)*1]), &(stack[((hsi*6+1837)*1+lsi)*1]), &(stack[((hsi*6+2866)*1+lsi)*1]), &(stack[((hsi*6+2001)*1+lsi)*1]), &(stack[((hsi*6+2202)*1+lsi)*1]), &(stack[((hsi*6+2171)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*6+2872)*1+lsi)*1]), &(stack[((hsi*10+1843)*1+lsi)*1]), &(stack[((hsi*10+2878)*1+lsi)*1]), &(stack[((hsi*10+2007)*1+lsi)*1]), &(stack[((hsi*10+2243)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2888)*1+lsi)*1]), &(stack[((hsi*15+1853)*1+lsi)*1]), &(stack[((hsi*15+2898)*1+lsi)*1]), &(stack[((hsi*15+2017)*1+lsi)*1]), &(stack[((hsi*15+2372)*1+lsi)*1]), &(stack[((hsi*15+2228)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*21+1868)*1+lsi)*1]), &(stack[((hsi*21+2928)*1+lsi)*1]), &(stack[((hsi*21+2032)*1+lsi)*1]), &(stack[((hsi*21+1393)*1+lsi)*1]), &(stack[((hsi*21+2351)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*21+2949)*1+lsi)*1]), &(stack[((hsi*28+1889)*1+lsi)*1]), &(stack[((hsi*28+1466)*1+lsi)*1]), &(stack[((hsi*28+2053)*1+lsi)*1]), &(stack[((hsi*28+1421)*1+lsi)*1]), &(stack[((hsi*28+2429)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*28+3424)*1+lsi)*1]), &(stack[((hsi*36+1917)*1+lsi)*1]), &(stack[((hsi*36+3053)*1+lsi)*1]), &(stack[((hsi*36+2081)*1+lsi)*1]), &(stack[((hsi*36+1715)*1+lsi)*1]), &(stack[((hsi*36+2534)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3424)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*45+1953)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*45+2117)*1+lsi)*1]), &(stack[((hsi*45+3170)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+990)*1+lsi)*1]),&(stack[((hsi*55+3424)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2860)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2165)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+2162)*1+lsi)*1]), &(stack[((hsi*3+1390)*1+lsi)*1]), &(stack[((hsi*3+1834)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2863)*1+lsi)*1]), &(stack[((hsi*6+2165)*1+lsi)*1]), &(stack[((hsi*3+2860)*1+lsi)*1]), &(stack[((hsi*6+2171)*1+lsi)*1]), &(stack[((hsi*6+1415)*1+lsi)*1]), &(stack[((hsi*6+1837)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2863)*1+lsi)*1]), &(stack[((hsi*6+2165)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*10+1456)*1+lsi)*1]), &(stack[((hsi*10+1843)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1375)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*10+2863)*1+lsi)*1]), &(stack[((hsi*15+2228)*1+lsi)*1]), &(stack[((hsi*15+2715)*1+lsi)*1]), &(stack[((hsi*15+1853)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1396)*1+lsi)*1]), &(stack[((hsi*21+1375)*1+lsi)*1]), &(stack[((hsi*15+2336)*1+lsi)*1]), &(stack[((hsi*21+2351)*1+lsi)*1]), &(stack[((hsi*21+2730)*1+lsi)*1]), &(stack[((hsi*21+1868)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2715)*1+lsi)*1]), &(stack[((hsi*28+1396)*1+lsi)*1]), &(stack[((hsi*21+1375)*1+lsi)*1]), &(stack[((hsi*28+2429)*1+lsi)*1]), &(stack[((hsi*28+2751)*1+lsi)*1]), &(stack[((hsi*28+1889)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+2715)*1+lsi)*1]), &(stack[((hsi*28+1396)*1+lsi)*1]), &(stack[((hsi*36+2534)*1+lsi)*1]), &(stack[((hsi*36+2779)*1+lsi)*1]), &(stack[((hsi*36+1917)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1375)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+2715)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*45+2815)*1+lsi)*1]), &(stack[((hsi*45+1953)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+935)*1+lsi)*1]),&(stack[((hsi*55+1375)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2336)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2162)*1+lsi)*1]), &(stack[((hsi*3+2336)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+1834)*1+lsi)*1]), &(stack[((hsi*3+1998)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2339)*1+lsi)*1]), &(stack[((hsi*6+2162)*1+lsi)*1]), &(stack[((hsi*3+2336)*1+lsi)*1]), &(stack[((hsi*6+1837)*1+lsi)*1]), &(stack[((hsi*6+2001)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2168)*1+lsi)*1]), &(stack[((hsi*10+2339)*1+lsi)*1]), &(stack[((hsi*6+2162)*1+lsi)*1]), &(stack[((hsi*10+1843)*1+lsi)*1]), &(stack[((hsi*10+2007)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2860)*1+lsi)*1]), &(stack[((hsi*15+2168)*1+lsi)*1]), &(stack[((hsi*10+2339)*1+lsi)*1]), &(stack[((hsi*15+1853)*1+lsi)*1]), &(stack[((hsi*15+2017)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2336)*1+lsi)*1]), &(stack[((hsi*21+2860)*1+lsi)*1]), &(stack[((hsi*15+2168)*1+lsi)*1]), &(stack[((hsi*21+1868)*1+lsi)*1]), &(stack[((hsi*21+2032)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2162)*1+lsi)*1]), &(stack[((hsi*28+2336)*1+lsi)*1]), &(stack[((hsi*21+2860)*1+lsi)*1]), &(stack[((hsi*28+1889)*1+lsi)*1]), &(stack[((hsi*28+2053)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+2162)*1+lsi)*1]), &(stack[((hsi*28+2336)*1+lsi)*1]), &(stack[((hsi*36+1917)*1+lsi)*1]), &(stack[((hsi*36+2081)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2336)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+2162)*1+lsi)*1]), &(stack[((hsi*45+1953)*1+lsi)*1]), &(stack[((hsi*45+2117)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+880)*1+lsi)*1]),&(stack[((hsi*55+2336)*1+lsi)*1]),55);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2162)*1+lsi)*1]), &(stack[((hsi*21+1602)*1+lsi)*1]), &(stack[((hsi*15+1517)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*28+1651)*1+lsi)*1]), &(stack[((hsi*21+1553)*1+lsi)*1]), &(stack[((hsi*28+2162)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1430)*1+lsi)*1]), &(stack[((hsi*28+1623)*1+lsi)*1]), &(stack[((hsi*21+1532)*1+lsi)*1]), &(stack[((hsi*28+2162)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+1798)*1+lsi)*1]), &(stack[((hsi*28+1770)*1+lsi)*1]), &(stack[((hsi*36+1430)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+1466)*1+lsi)*1]), &(stack[((hsi*36+1679)*1+lsi)*1]), &(stack[((hsi*28+1574)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*36+1430)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2190)*1+lsi)*1]), &(stack[((hsi*45+2117)*1+lsi)*1]), &(stack[((hsi*36+2081)*1+lsi)*1]), &(stack[((hsi*45+1466)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+825)*1+lsi)*1]),&(stack[((hsi*55+2190)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*28+2570)*1+lsi)*1]), &(stack[((hsi*21+2457)*1+lsi)*1]), &(stack[((hsi*28+2162)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+1998)*1+lsi)*1]), &(stack[((hsi*36+2634)*1+lsi)*1]), &(stack[((hsi*28+2506)*1+lsi)*1]), &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*36+1430)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2043)*1+lsi)*1]), &(stack[((hsi*36+2598)*1+lsi)*1]), &(stack[((hsi*28+2478)*1+lsi)*1]), &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2391)*1+lsi)*1]), &(stack[((hsi*45+2815)*1+lsi)*1]), &(stack[((hsi*36+2779)*1+lsi)*1]), &(stack[((hsi*45+2043)*1+lsi)*1]), &(stack[((hsi*45+1998)*1+lsi)*1]), &(stack[((hsi*45+1466)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+770)*1+lsi)*1]),&(stack[((hsi*55+2391)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2715)*1+lsi)*1]), &(stack[((hsi*36+3089)*1+lsi)*1]), &(stack[((hsi*28+3025)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*36+1430)*1+lsi)*1]), &(stack[((hsi*36+2245)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2760)*1+lsi)*1]), &(stack[((hsi*45+3170)*1+lsi)*1]), &(stack[((hsi*36+1715)*1+lsi)*1]), &(stack[((hsi*45+1466)*1+lsi)*1]), &(stack[((hsi*45+2715)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*45+2043)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+715)*1+lsi)*1]),&(stack[((hsi*55+2760)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1511)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*36+3255)*1+lsi)*1]), &(stack[((hsi*45+2043)*1+lsi)*1]), &(stack[((hsi*45+1998)*1+lsi)*1]), &(stack[((hsi*45+2715)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+660)*1+lsi)*1]),&(stack[((hsi*55+1511)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3170)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*36+3053)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*45+1466)*1+lsi)*1]), &(stack[((hsi*45+2715)*1+lsi)*1]), &(stack[((hsi*45+1998)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+605)*1+lsi)*1]),&(stack[((hsi*55+3170)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3225)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*36+2534)*1+lsi)*1]), &(stack[((hsi*45+1998)*1+lsi)*1]), &(stack[((hsi*45+2043)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+550)*1+lsi)*1]),&(stack[((hsi*55+3225)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2446)*1+lsi)*1]), &(stack[((hsi*45+1953)*1+lsi)*1]), &(stack[((hsi*36+1917)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*45+1466)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+495)*1+lsi)*1]),&(stack[((hsi*55+2446)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1566)*1+lsi)*1]), &(stack[((hsi*28+2162)*1+lsi)*1]), &(stack[((hsi*21+1602)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*36+1430)*1+lsi)*1]), &(stack[((hsi*28+1623)*1+lsi)*1]), &(stack[((hsi*36+1566)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*28+1651)*1+lsi)*1]), &(stack[((hsi*36+1566)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1834)*1+lsi)*1]), &(stack[((hsi*45+1466)*1+lsi)*1]), &(stack[((hsi*36+1679)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+440)*1+lsi)*1]),&(stack[((hsi*55+1834)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*28+2570)*1+lsi)*1]), &(stack[((hsi*36+1566)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1602)*1+lsi)*1]), &(stack[((hsi*45+2043)*1+lsi)*1]), &(stack[((hsi*36+2598)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+385)*1+lsi)*1]),&(stack[((hsi*55+1602)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1657)*1+lsi)*1]), &(stack[((hsi*45+2715)*1+lsi)*1]), &(stack[((hsi*36+3089)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+330)*1+lsi)*1]),&(stack[((hsi*55+1657)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2501)*1+lsi)*1]), &(stack[((hsi*45+1998)*1+lsi)*1]), &(stack[((hsi*36+2634)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+275)*1+lsi)*1]),&(stack[((hsi*55+2501)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1889)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+1798)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+220)*1+lsi)*1]),&(stack[((hsi*55+1889)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+1566)*1+lsi)*1]), &(stack[((hsi*28+2162)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1944)*1+lsi)*1]), &(stack[((hsi*45+3125)*1+lsi)*1]), &(stack[((hsi*36+2860)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+165)*1+lsi)*1]),&(stack[((hsi*55+1944)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1999)*1+lsi)*1]), &(stack[((hsi*45+3379)*1+lsi)*1]), &(stack[((hsi*36+2245)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+110)*1+lsi)*1]),&(stack[((hsi*55+1999)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2815)*1+lsi)*1]), &(stack[((hsi*45+2670)*1+lsi)*1]), &(stack[((hsi*36+1430)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+55)*1+lsi)*1]),&(stack[((hsi*55+2815)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2556)*1+lsi)*1]), &(stack[((hsi*45+3560)*1+lsi)*1]), &(stack[((hsi*36+1566)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+2556)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1375 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
