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
void _sphemultipole_PS_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1650)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1653)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1656)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1659)*1+lsi)*1]), &(stack[((hsi*3+1650)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+1656)*1+lsi)*1]), &(stack[((hsi*3+1653)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1665)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1668)*1+lsi)*1]), &(stack[((hsi*3+1653)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+1665)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1674)*1+lsi)*1]), &(stack[((hsi*3+1656)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+1665)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1680)*1+lsi)*1]), &(stack[((hsi*6+1659)*1+lsi)*1]), &(stack[((hsi*3+1650)*1+lsi)*1]), &(stack[((hsi*6+1674)*1+lsi)*1]), &(stack[((hsi*6+1668)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*3+1665)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1696)*1+lsi)*1]), &(stack[((hsi*6+1668)*1+lsi)*1]), &(stack[((hsi*3+1653)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1706)*1+lsi)*1]), &(stack[((hsi*6+1674)*1+lsi)*1]), &(stack[((hsi*3+1656)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1716)*1+lsi)*1]), &(stack[((hsi*10+1680)*1+lsi)*1]), &(stack[((hsi*6+1659)*1+lsi)*1]), &(stack[((hsi*10+1706)*1+lsi)*1]), &(stack[((hsi*10+1696)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*3+1665)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*10+1696)*1+lsi)*1]), &(stack[((hsi*6+1668)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1756)*1+lsi)*1]), &(stack[((hsi*10+1706)*1+lsi)*1]), &(stack[((hsi*6+1674)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1771)*1+lsi)*1]), &(stack[((hsi*15+1716)*1+lsi)*1]), &(stack[((hsi*10+1680)*1+lsi)*1]), &(stack[((hsi*15+1756)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1807)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*10+1696)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1828)*1+lsi)*1]), &(stack[((hsi*15+1756)*1+lsi)*1]), &(stack[((hsi*10+1706)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1849)*1+lsi)*1]), &(stack[((hsi*21+1771)*1+lsi)*1]), &(stack[((hsi*15+1716)*1+lsi)*1]), &(stack[((hsi*21+1828)*1+lsi)*1]), &(stack[((hsi*21+1807)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1877)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1898)*1+lsi)*1]), &(stack[((hsi*21+1807)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*21+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1926)*1+lsi)*1]), &(stack[((hsi*21+1828)*1+lsi)*1]), &(stack[((hsi*15+1756)*1+lsi)*1]), &(stack[((hsi*21+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1954)*1+lsi)*1]), &(stack[((hsi*28+1849)*1+lsi)*1]), &(stack[((hsi*21+1771)*1+lsi)*1]), &(stack[((hsi*28+1926)*1+lsi)*1]), &(stack[((hsi*28+1898)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1990)*1+lsi)*1]), &(stack[((hsi*21+1877)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2018)*1+lsi)*1]), &(stack[((hsi*28+1898)*1+lsi)*1]), &(stack[((hsi*21+1807)*1+lsi)*1]), &(stack[((hsi*28+1990)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2054)*1+lsi)*1]), &(stack[((hsi*28+1926)*1+lsi)*1]), &(stack[((hsi*21+1828)*1+lsi)*1]), &(stack[((hsi*28+1990)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2090)*1+lsi)*1]), &(stack[((hsi*36+1954)*1+lsi)*1]), &(stack[((hsi*28+1849)*1+lsi)*1]), &(stack[((hsi*36+2054)*1+lsi)*1]), &(stack[((hsi*36+2018)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2135)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2138)*1+lsi)*1]), &(stack[((hsi*3+2135)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+1653)*1+lsi)*1]), &(stack[((hsi*3+1656)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2144)*1+lsi)*1]), &(stack[((hsi*6+2138)*1+lsi)*1]), &(stack[((hsi*3+2135)*1+lsi)*1]), &(stack[((hsi*6+1668)*1+lsi)*1]), &(stack[((hsi*6+1674)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2154)*1+lsi)*1]), &(stack[((hsi*10+2144)*1+lsi)*1]), &(stack[((hsi*6+2138)*1+lsi)*1]), &(stack[((hsi*10+1696)*1+lsi)*1]), &(stack[((hsi*10+1706)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2169)*1+lsi)*1]), &(stack[((hsi*15+2154)*1+lsi)*1]), &(stack[((hsi*10+2144)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*15+1756)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2190)*1+lsi)*1]), &(stack[((hsi*21+2169)*1+lsi)*1]), &(stack[((hsi*15+2154)*1+lsi)*1]), &(stack[((hsi*21+1807)*1+lsi)*1]), &(stack[((hsi*21+1828)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2218)*1+lsi)*1]), &(stack[((hsi*28+2190)*1+lsi)*1]), &(stack[((hsi*21+2169)*1+lsi)*1]), &(stack[((hsi*28+1898)*1+lsi)*1]), &(stack[((hsi*28+1926)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2254)*1+lsi)*1]), &(stack[((hsi*36+2218)*1+lsi)*1]), &(stack[((hsi*28+2190)*1+lsi)*1]), &(stack[((hsi*36+2018)*1+lsi)*1]), &(stack[((hsi*36+2054)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2299)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2302)*1+lsi)*1]), &(stack[((hsi*3+2299)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+2135)*1+lsi)*1]), &(stack[((hsi*3+1650)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2308)*1+lsi)*1]), &(stack[((hsi*6+2302)*1+lsi)*1]), &(stack[((hsi*3+2299)*1+lsi)*1]), &(stack[((hsi*6+2138)*1+lsi)*1]), &(stack[((hsi*6+1659)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2318)*1+lsi)*1]), &(stack[((hsi*10+2308)*1+lsi)*1]), &(stack[((hsi*6+2302)*1+lsi)*1]), &(stack[((hsi*10+2144)*1+lsi)*1]), &(stack[((hsi*10+1680)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2333)*1+lsi)*1]), &(stack[((hsi*15+2318)*1+lsi)*1]), &(stack[((hsi*10+2308)*1+lsi)*1]), &(stack[((hsi*15+2154)*1+lsi)*1]), &(stack[((hsi*15+1716)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2354)*1+lsi)*1]), &(stack[((hsi*21+2333)*1+lsi)*1]), &(stack[((hsi*15+2318)*1+lsi)*1]), &(stack[((hsi*21+2169)*1+lsi)*1]), &(stack[((hsi*21+1771)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2382)*1+lsi)*1]), &(stack[((hsi*28+2354)*1+lsi)*1]), &(stack[((hsi*21+2333)*1+lsi)*1]), &(stack[((hsi*28+2190)*1+lsi)*1]), &(stack[((hsi*28+1849)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2418)*1+lsi)*1]), &(stack[((hsi*36+2382)*1+lsi)*1]), &(stack[((hsi*28+2354)*1+lsi)*1]), &(stack[((hsi*36+2218)*1+lsi)*1]), &(stack[((hsi*36+1954)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2463)*1+lsi)*1]), &(stack[((hsi*45+2418)*1+lsi)*1]), &(stack[((hsi*36+2382)*1+lsi)*1]), &(stack[((hsi*45+2254)*1+lsi)*1]), &(stack[((hsi*45+2090)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2518)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2521)*1+lsi)*1]), &(stack[((hsi*3+2518)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+1650)*1+lsi)*1]), &(stack[((hsi*3+2135)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2527)*1+lsi)*1]), &(stack[((hsi*6+2521)*1+lsi)*1]), &(stack[((hsi*3+2518)*1+lsi)*1]), &(stack[((hsi*6+1659)*1+lsi)*1]), &(stack[((hsi*6+2138)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2537)*1+lsi)*1]), &(stack[((hsi*10+2527)*1+lsi)*1]), &(stack[((hsi*6+2521)*1+lsi)*1]), &(stack[((hsi*10+1680)*1+lsi)*1]), &(stack[((hsi*10+2144)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2552)*1+lsi)*1]), &(stack[((hsi*15+2537)*1+lsi)*1]), &(stack[((hsi*10+2527)*1+lsi)*1]), &(stack[((hsi*15+1716)*1+lsi)*1]), &(stack[((hsi*15+2154)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2573)*1+lsi)*1]), &(stack[((hsi*21+2552)*1+lsi)*1]), &(stack[((hsi*15+2537)*1+lsi)*1]), &(stack[((hsi*21+1771)*1+lsi)*1]), &(stack[((hsi*21+2169)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2601)*1+lsi)*1]), &(stack[((hsi*28+2573)*1+lsi)*1]), &(stack[((hsi*21+2552)*1+lsi)*1]), &(stack[((hsi*28+1849)*1+lsi)*1]), &(stack[((hsi*28+2190)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2637)*1+lsi)*1]), &(stack[((hsi*36+2601)*1+lsi)*1]), &(stack[((hsi*28+2573)*1+lsi)*1]), &(stack[((hsi*36+1954)*1+lsi)*1]), &(stack[((hsi*36+2218)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2682)*1+lsi)*1]), &(stack[((hsi*45+2637)*1+lsi)*1]), &(stack[((hsi*36+2601)*1+lsi)*1]), &(stack[((hsi*45+2090)*1+lsi)*1]), &(stack[((hsi*45+2254)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2737)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2740)*1+lsi)*1]), &(stack[((hsi*3+2737)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+2518)*1+lsi)*1]), &(stack[((hsi*3+2299)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2746)*1+lsi)*1]), &(stack[((hsi*6+2740)*1+lsi)*1]), &(stack[((hsi*3+2737)*1+lsi)*1]), &(stack[((hsi*6+2521)*1+lsi)*1]), &(stack[((hsi*6+2302)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2756)*1+lsi)*1]), &(stack[((hsi*10+2746)*1+lsi)*1]), &(stack[((hsi*6+2740)*1+lsi)*1]), &(stack[((hsi*10+2527)*1+lsi)*1]), &(stack[((hsi*10+2308)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*15+2756)*1+lsi)*1]), &(stack[((hsi*10+2746)*1+lsi)*1]), &(stack[((hsi*15+2537)*1+lsi)*1]), &(stack[((hsi*15+2318)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*15+2756)*1+lsi)*1]), &(stack[((hsi*21+2552)*1+lsi)*1]), &(stack[((hsi*21+2333)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2820)*1+lsi)*1]), &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*21+2771)*1+lsi)*1]), &(stack[((hsi*28+2573)*1+lsi)*1]), &(stack[((hsi*28+2354)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*36+2820)*1+lsi)*1]), &(stack[((hsi*28+2792)*1+lsi)*1]), &(stack[((hsi*36+2601)*1+lsi)*1]), &(stack[((hsi*36+2382)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2856)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*36+2820)*1+lsi)*1]), &(stack[((hsi*45+2637)*1+lsi)*1]), &(stack[((hsi*45+2418)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2782)*1+lsi)*1]), &(stack[((hsi*55+2856)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*55+2682)*1+lsi)*1]), &(stack[((hsi*55+2463)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1584)*1+lsi)*1]),&(stack[((hsi*66+2782)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2737)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2740)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2743)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2746)*1+lsi)*1]), &(stack[((hsi*3+2737)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+2743)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*3+2135)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2752)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2755)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+2752)*1+lsi)*1]), &(stack[((hsi*3+1656)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2761)*1+lsi)*1]), &(stack[((hsi*3+2743)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+2752)*1+lsi)*1]), &(stack[((hsi*3+1653)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2767)*1+lsi)*1]), &(stack[((hsi*6+2746)*1+lsi)*1]), &(stack[((hsi*3+2737)*1+lsi)*1]), &(stack[((hsi*6+2761)*1+lsi)*1]), &(stack[((hsi*6+2755)*1+lsi)*1]), &(stack[((hsi*6+2138)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+1665)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2854)*1+lsi)*1]), &(stack[((hsi*6+2755)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*6+1674)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2864)*1+lsi)*1]), &(stack[((hsi*6+2761)*1+lsi)*1]), &(stack[((hsi*3+2743)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*6+1668)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2874)*1+lsi)*1]), &(stack[((hsi*10+2767)*1+lsi)*1]), &(stack[((hsi*6+2746)*1+lsi)*1]), &(stack[((hsi*10+2864)*1+lsi)*1]), &(stack[((hsi*10+2854)*1+lsi)*1]), &(stack[((hsi*10+2144)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2899)*1+lsi)*1]), &(stack[((hsi*10+2854)*1+lsi)*1]), &(stack[((hsi*6+2755)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*10+1706)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*10+2864)*1+lsi)*1]), &(stack[((hsi*6+2761)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*10+1696)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*15+2874)*1+lsi)*1]), &(stack[((hsi*10+2767)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*15+2899)*1+lsi)*1]), &(stack[((hsi*15+2154)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*15+2899)*1+lsi)*1]), &(stack[((hsi*10+2854)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*15+1756)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2986)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*10+2864)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3007)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*15+2874)*1+lsi)*1]), &(stack[((hsi*21+2986)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*21+2169)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3056)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*15+2899)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*21+1828)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3084)*1+lsi)*1]), &(stack[((hsi*21+2986)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*21+1807)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3112)*1+lsi)*1]), &(stack[((hsi*28+3007)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*28+3084)*1+lsi)*1]), &(stack[((hsi*28+3056)*1+lsi)*1]), &(stack[((hsi*28+2190)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3148)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*21+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3176)*1+lsi)*1]), &(stack[((hsi*28+3056)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*28+3148)*1+lsi)*1]), &(stack[((hsi*28+1926)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3212)*1+lsi)*1]), &(stack[((hsi*28+3084)*1+lsi)*1]), &(stack[((hsi*21+2986)*1+lsi)*1]), &(stack[((hsi*28+3148)*1+lsi)*1]), &(stack[((hsi*28+1898)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3248)*1+lsi)*1]), &(stack[((hsi*36+3112)*1+lsi)*1]), &(stack[((hsi*28+3007)*1+lsi)*1]), &(stack[((hsi*36+3212)*1+lsi)*1]), &(stack[((hsi*36+3176)*1+lsi)*1]), &(stack[((hsi*36+2218)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3293)*1+lsi)*1]), &(stack[((hsi*28+3148)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*28+1990)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3329)*1+lsi)*1]), &(stack[((hsi*36+3176)*1+lsi)*1]), &(stack[((hsi*28+3056)*1+lsi)*1]), &(stack[((hsi*36+3293)*1+lsi)*1]), &(stack[((hsi*36+2054)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3374)*1+lsi)*1]), &(stack[((hsi*36+3212)*1+lsi)*1]), &(stack[((hsi*28+3084)*1+lsi)*1]), &(stack[((hsi*36+3293)*1+lsi)*1]), &(stack[((hsi*36+2018)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*45+3248)*1+lsi)*1]), &(stack[((hsi*36+3112)*1+lsi)*1]), &(stack[((hsi*45+3374)*1+lsi)*1]), &(stack[((hsi*45+3329)*1+lsi)*1]), &(stack[((hsi*45+2254)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1665)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*3+1665)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*3+2743)*1+lsi)*1]), &(stack[((hsi*3+1650)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*3+1665)*1+lsi)*1]), &(stack[((hsi*6+2755)*1+lsi)*1]), &(stack[((hsi*6+2761)*1+lsi)*1]), &(stack[((hsi*6+1659)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*10+2854)*1+lsi)*1]), &(stack[((hsi*10+2864)*1+lsi)*1]), &(stack[((hsi*10+1680)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*15+2899)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*15+1716)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*21+2986)*1+lsi)*1]), &(stack[((hsi*21+1771)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3523)*1+lsi)*1]), &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*28+3056)*1+lsi)*1]), &(stack[((hsi*28+3084)*1+lsi)*1]), &(stack[((hsi*28+1849)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3559)*1+lsi)*1]), &(stack[((hsi*36+3523)*1+lsi)*1]), &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*36+3176)*1+lsi)*1]), &(stack[((hsi*36+3212)*1+lsi)*1]), &(stack[((hsi*36+1954)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3604)*1+lsi)*1]), &(stack[((hsi*45+3559)*1+lsi)*1]), &(stack[((hsi*36+3523)*1+lsi)*1]), &(stack[((hsi*45+3329)*1+lsi)*1]), &(stack[((hsi*45+3374)*1+lsi)*1]), &(stack[((hsi*45+2090)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2777)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3659)*1+lsi)*1]), &(stack[((hsi*3+2777)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+1665)*1+lsi)*1]), &(stack[((hsi*3+2737)*1+lsi)*1]), &(stack[((hsi*3+2518)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3665)*1+lsi)*1]), &(stack[((hsi*6+3659)*1+lsi)*1]), &(stack[((hsi*3+2777)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*6+2746)*1+lsi)*1]), &(stack[((hsi*6+2521)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3675)*1+lsi)*1]), &(stack[((hsi*10+3665)*1+lsi)*1]), &(stack[((hsi*6+3659)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*10+2767)*1+lsi)*1]), &(stack[((hsi*10+2527)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3690)*1+lsi)*1]), &(stack[((hsi*15+3675)*1+lsi)*1]), &(stack[((hsi*10+3665)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*15+2874)*1+lsi)*1]), &(stack[((hsi*15+2537)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3711)*1+lsi)*1]), &(stack[((hsi*21+3690)*1+lsi)*1]), &(stack[((hsi*15+3675)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*21+2552)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3739)*1+lsi)*1]), &(stack[((hsi*28+3711)*1+lsi)*1]), &(stack[((hsi*21+3690)*1+lsi)*1]), &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*28+3007)*1+lsi)*1]), &(stack[((hsi*28+2573)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+3739)*1+lsi)*1]), &(stack[((hsi*28+3711)*1+lsi)*1]), &(stack[((hsi*36+3523)*1+lsi)*1]), &(stack[((hsi*36+3112)*1+lsi)*1]), &(stack[((hsi*36+2601)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3775)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+3739)*1+lsi)*1]), &(stack[((hsi*45+3559)*1+lsi)*1]), &(stack[((hsi*45+3248)*1+lsi)*1]), &(stack[((hsi*45+2637)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+3704)*1+lsi)*1]), &(stack[((hsi*55+3775)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*55+3604)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*55+2682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1518)*1+lsi)*1]),&(stack[((hsi*66+3704)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3659)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3665)*1+lsi)*1]), &(stack[((hsi*3+3659)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+2135)*1+lsi)*1]), &(stack[((hsi*3+1650)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(stack[((hsi*3+2743)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+1656)*1+lsi)*1]), &(stack[((hsi*3+1653)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*6+3665)*1+lsi)*1]), &(stack[((hsi*3+3659)*1+lsi)*1]), &(stack[((hsi*6+2138)*1+lsi)*1]), &(stack[((hsi*6+1659)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*6+2761)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(stack[((hsi*6+1674)*1+lsi)*1]), &(stack[((hsi*6+1668)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3770)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*6+3665)*1+lsi)*1]), &(stack[((hsi*10+2144)*1+lsi)*1]), &(stack[((hsi*10+1680)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*10+2864)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*10+1706)*1+lsi)*1]), &(stack[((hsi*10+1696)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3800)*1+lsi)*1]), &(stack[((hsi*15+3770)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*15+2154)*1+lsi)*1]), &(stack[((hsi*15+1716)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*15+1756)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1741)*1+lsi)*1]), &(stack[((hsi*21+3800)*1+lsi)*1]), &(stack[((hsi*15+3770)*1+lsi)*1]), &(stack[((hsi*21+2169)*1+lsi)*1]), &(stack[((hsi*21+1771)*1+lsi)*1]), &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*21+2986)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*21+1828)*1+lsi)*1]), &(stack[((hsi*21+1807)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1807)*1+lsi)*1]), &(stack[((hsi*28+1741)*1+lsi)*1]), &(stack[((hsi*21+3800)*1+lsi)*1]), &(stack[((hsi*28+2190)*1+lsi)*1]), &(stack[((hsi*28+1849)*1+lsi)*1]), &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*28+3084)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3870)*1+lsi)*1]), &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*28+1926)*1+lsi)*1]), &(stack[((hsi*28+1898)*1+lsi)*1]), &(stack[((hsi*28+3148)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3906)*1+lsi)*1]), &(stack[((hsi*36+1807)*1+lsi)*1]), &(stack[((hsi*28+1741)*1+lsi)*1]), &(stack[((hsi*36+2218)*1+lsi)*1]), &(stack[((hsi*36+1954)*1+lsi)*1]), &(stack[((hsi*36+3870)*1+lsi)*1]), &(stack[((hsi*36+3212)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3951)*1+lsi)*1]), &(stack[((hsi*36+3870)*1+lsi)*1]), &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*36+2054)*1+lsi)*1]), &(stack[((hsi*36+2018)*1+lsi)*1]), &(stack[((hsi*36+3293)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3996)*1+lsi)*1]), &(stack[((hsi*45+3906)*1+lsi)*1]), &(stack[((hsi*36+1807)*1+lsi)*1]), &(stack[((hsi*45+2254)*1+lsi)*1]), &(stack[((hsi*45+2090)*1+lsi)*1]), &(stack[((hsi*45+3951)*1+lsi)*1]), &(stack[((hsi*45+3374)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2752)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+1650)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(stack[((hsi*3+2135)*1+lsi)*1]), &(stack[((hsi*3+2740)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]), &(stack[((hsi*6+1659)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*6+2138)*1+lsi)*1]), &(stack[((hsi*6+2755)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*10+1680)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*10+2144)*1+lsi)*1]), &(stack[((hsi*10+2854)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*15+1716)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*15+2154)*1+lsi)*1]), &(stack[((hsi*15+2899)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1696)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*21+1771)*1+lsi)*1]), &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*21+2169)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+1696)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*28+1849)*1+lsi)*1]), &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*28+2190)*1+lsi)*1]), &(stack[((hsi*28+3056)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2171)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+1696)*1+lsi)*1]), &(stack[((hsi*36+1954)*1+lsi)*1]), &(stack[((hsi*36+3870)*1+lsi)*1]), &(stack[((hsi*36+2218)*1+lsi)*1]), &(stack[((hsi*36+3176)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4051)*1+lsi)*1]), &(stack[((hsi*45+2171)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*45+2090)*1+lsi)*1]), &(stack[((hsi*45+3951)*1+lsi)*1]), &(stack[((hsi*45+2254)*1+lsi)*1]), &(stack[((hsi*45+3329)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1843)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1846)*1+lsi)*1]), &(stack[((hsi*3+1843)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+2518)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]), &(stack[((hsi*3+2299)*1+lsi)*1]), &(stack[((hsi*3+3659)*1+lsi)*1]), &(stack[((hsi*3+1665)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1852)*1+lsi)*1]), &(stack[((hsi*6+1846)*1+lsi)*1]), &(stack[((hsi*3+1843)*1+lsi)*1]), &(stack[((hsi*6+2521)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*6+2302)*1+lsi)*1]), &(stack[((hsi*6+3665)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*10+1852)*1+lsi)*1]), &(stack[((hsi*6+1846)*1+lsi)*1]), &(stack[((hsi*10+2527)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*10+2308)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1769)*1+lsi)*1]), &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*10+1852)*1+lsi)*1]), &(stack[((hsi*15+2537)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*15+2318)*1+lsi)*1]), &(stack[((hsi*15+3770)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1843)*1+lsi)*1]), &(stack[((hsi*21+1769)*1+lsi)*1]), &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*21+2552)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*21+2333)*1+lsi)*1]), &(stack[((hsi*21+3800)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4106)*1+lsi)*1]), &(stack[((hsi*28+1843)*1+lsi)*1]), &(stack[((hsi*21+1769)*1+lsi)*1]), &(stack[((hsi*28+2573)*1+lsi)*1]), &(stack[((hsi*28+1696)*1+lsi)*1]), &(stack[((hsi*28+2354)*1+lsi)*1]), &(stack[((hsi*28+1741)*1+lsi)*1]), &(stack[((hsi*28+3495)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4142)*1+lsi)*1]), &(stack[((hsi*36+4106)*1+lsi)*1]), &(stack[((hsi*28+1843)*1+lsi)*1]), &(stack[((hsi*36+2601)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*36+2382)*1+lsi)*1]), &(stack[((hsi*36+1807)*1+lsi)*1]), &(stack[((hsi*36+3523)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4187)*1+lsi)*1]), &(stack[((hsi*45+4142)*1+lsi)*1]), &(stack[((hsi*36+4106)*1+lsi)*1]), &(stack[((hsi*45+2637)*1+lsi)*1]), &(stack[((hsi*45+2171)*1+lsi)*1]), &(stack[((hsi*45+2418)*1+lsi)*1]), &(stack[((hsi*45+3906)*1+lsi)*1]), &(stack[((hsi*45+3559)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+4242)*1+lsi)*1]), &(stack[((hsi*55+4187)*1+lsi)*1]), &(stack[((hsi*45+4142)*1+lsi)*1]), &(stack[((hsi*55+2682)*1+lsi)*1]), &(stack[((hsi*55+4051)*1+lsi)*1]), &(stack[((hsi*55+2463)*1+lsi)*1]), &(stack[((hsi*55+3996)*1+lsi)*1]), &(stack[((hsi*55+3604)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1452)*1+lsi)*1]),&(stack[((hsi*66+4242)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4106)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+2740)*1+lsi)*1]), &(stack[((hsi*3+2743)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4115)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]), &(stack[((hsi*6+2755)*1+lsi)*1]), &(stack[((hsi*6+2761)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*10+4115)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*10+2854)*1+lsi)*1]), &(stack[((hsi*10+2864)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4125)*1+lsi)*1]), &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*10+4115)*1+lsi)*1]), &(stack[((hsi*15+2899)*1+lsi)*1]), &(stack[((hsi*15+2914)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4146)*1+lsi)*1]), &(stack[((hsi*21+4125)*1+lsi)*1]), &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*21+2986)*1+lsi)*1]), &(stack[((hsi*21+3821)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4174)*1+lsi)*1]), &(stack[((hsi*28+4146)*1+lsi)*1]), &(stack[((hsi*21+4125)*1+lsi)*1]), &(stack[((hsi*28+3056)*1+lsi)*1]), &(stack[((hsi*28+3084)*1+lsi)*1]), &(stack[((hsi*28+3842)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3056)*1+lsi)*1]), &(stack[((hsi*36+4174)*1+lsi)*1]), &(stack[((hsi*28+4146)*1+lsi)*1]), &(stack[((hsi*36+3176)*1+lsi)*1]), &(stack[((hsi*36+3212)*1+lsi)*1]), &(stack[((hsi*36+3870)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*45+3056)*1+lsi)*1]), &(stack[((hsi*36+4174)*1+lsi)*1]), &(stack[((hsi*45+3329)*1+lsi)*1]), &(stack[((hsi*45+3374)*1+lsi)*1]), &(stack[((hsi*45+3951)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+1665)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]), &(stack[((hsi*3+2737)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3821)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*6+2746)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+3821)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*10+4115)*1+lsi)*1]), &(stack[((hsi*10+2767)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+3821)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*15+2874)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3821)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*21+4125)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4363)*1+lsi)*1]), &(stack[((hsi*28+3821)*1+lsi)*1]), &(stack[((hsi*21+2965)*1+lsi)*1]), &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*28+4146)*1+lsi)*1]), &(stack[((hsi*28+3007)*1+lsi)*1]), &(stack[((hsi*28+1696)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4399)*1+lsi)*1]), &(stack[((hsi*36+4363)*1+lsi)*1]), &(stack[((hsi*28+3821)*1+lsi)*1]), &(stack[((hsi*36+3523)*1+lsi)*1]), &(stack[((hsi*36+4174)*1+lsi)*1]), &(stack[((hsi*36+3112)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4444)*1+lsi)*1]), &(stack[((hsi*45+4399)*1+lsi)*1]), &(stack[((hsi*36+4363)*1+lsi)*1]), &(stack[((hsi*45+3559)*1+lsi)*1]), &(stack[((hsi*45+3056)*1+lsi)*1]), &(stack[((hsi*45+3248)*1+lsi)*1]), &(stack[((hsi*45+2171)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+4499)*1+lsi)*1]), &(stack[((hsi*55+4444)*1+lsi)*1]), &(stack[((hsi*45+4399)*1+lsi)*1]), &(stack[((hsi*55+3604)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*55+4051)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1386)*1+lsi)*1]),&(stack[((hsi*66+4499)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+2752)*1+lsi)*1]), &(stack[((hsi*3+3659)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4363)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*6+3665)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+4363)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*10+4115)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4373)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+4363)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*15+3770)*1+lsi)*1]), &(stack[((hsi*15+1650)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4394)*1+lsi)*1]), &(stack[((hsi*21+4373)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*21+3800)*1+lsi)*1]), &(stack[((hsi*21+4125)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4422)*1+lsi)*1]), &(stack[((hsi*28+4394)*1+lsi)*1]), &(stack[((hsi*21+4373)*1+lsi)*1]), &(stack[((hsi*28+1696)*1+lsi)*1]), &(stack[((hsi*28+1741)*1+lsi)*1]), &(stack[((hsi*28+4146)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3821)*1+lsi)*1]), &(stack[((hsi*36+4422)*1+lsi)*1]), &(stack[((hsi*28+4394)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*36+1807)*1+lsi)*1]), &(stack[((hsi*36+4174)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3821)*1+lsi)*1]), &(stack[((hsi*36+4422)*1+lsi)*1]), &(stack[((hsi*45+2171)*1+lsi)*1]), &(stack[((hsi*45+3906)*1+lsi)*1]), &(stack[((hsi*45+3056)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+4418)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3821)*1+lsi)*1]), &(stack[((hsi*55+4051)*1+lsi)*1]), &(stack[((hsi*55+3996)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1320)*1+lsi)*1]),&(stack[((hsi*66+4418)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+2737)*1+lsi)*1]), &(stack[((hsi*3+1665)*1+lsi)*1]), &(stack[((hsi*3+4106)*1+lsi)*1]), &(stack[((hsi*3+3659)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4363)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(stack[((hsi*6+2746)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*6+4109)*1+lsi)*1]), &(stack[((hsi*6+3665)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+4363)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*10+2767)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*10+4115)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+4363)*1+lsi)*1]), &(stack[((hsi*15+2874)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*15+1650)*1+lsi)*1]), &(stack[((hsi*15+3770)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*21+4125)*1+lsi)*1]), &(stack[((hsi*21+3800)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4363)*1+lsi)*1]), &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*21+3821)*1+lsi)*1]), &(stack[((hsi*28+3007)*1+lsi)*1]), &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*28+4146)*1+lsi)*1]), &(stack[((hsi*28+1741)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4106)*1+lsi)*1]), &(stack[((hsi*36+4363)*1+lsi)*1]), &(stack[((hsi*28+3842)*1+lsi)*1]), &(stack[((hsi*36+3112)*1+lsi)*1]), &(stack[((hsi*36+3523)*1+lsi)*1]), &(stack[((hsi*36+4174)*1+lsi)*1]), &(stack[((hsi*36+1807)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4151)*1+lsi)*1]), &(stack[((hsi*45+4106)*1+lsi)*1]), &(stack[((hsi*36+4363)*1+lsi)*1]), &(stack[((hsi*45+3248)*1+lsi)*1]), &(stack[((hsi*45+3559)*1+lsi)*1]), &(stack[((hsi*45+3056)*1+lsi)*1]), &(stack[((hsi*45+3906)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+4565)*1+lsi)*1]), &(stack[((hsi*55+4151)*1+lsi)*1]), &(stack[((hsi*45+4106)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*55+3604)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*55+3996)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1254)*1+lsi)*1]),&(stack[((hsi*66+4565)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+2299)*1+lsi)*1]), &(stack[((hsi*3+3659)*1+lsi)*1]), &(stack[((hsi*3+2518)*1+lsi)*1]), &(stack[((hsi*3+2752)*1+lsi)*1]), &(stack[((hsi*3+2737)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4106)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3662)*1+lsi)*1]), &(stack[((hsi*6+2302)*1+lsi)*1]), &(stack[((hsi*6+3665)*1+lsi)*1]), &(stack[((hsi*6+2521)*1+lsi)*1]), &(stack[((hsi*6+2848)*1+lsi)*1]), &(stack[((hsi*6+2746)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+4106)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*10+2308)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*10+2527)*1+lsi)*1]), &(stack[((hsi*10+2889)*1+lsi)*1]), &(stack[((hsi*10+2767)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4116)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*10+4106)*1+lsi)*1]), &(stack[((hsi*15+2318)*1+lsi)*1]), &(stack[((hsi*15+3770)*1+lsi)*1]), &(stack[((hsi*15+2537)*1+lsi)*1]), &(stack[((hsi*15+2950)*1+lsi)*1]), &(stack[((hsi*15+2874)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4137)*1+lsi)*1]), &(stack[((hsi*21+4116)*1+lsi)*1]), &(stack[((hsi*15+3785)*1+lsi)*1]), &(stack[((hsi*21+2333)*1+lsi)*1]), &(stack[((hsi*21+3800)*1+lsi)*1]), &(stack[((hsi*21+2552)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3770)*1+lsi)*1]), &(stack[((hsi*28+4137)*1+lsi)*1]), &(stack[((hsi*21+4116)*1+lsi)*1]), &(stack[((hsi*28+2354)*1+lsi)*1]), &(stack[((hsi*28+1741)*1+lsi)*1]), &(stack[((hsi*28+2573)*1+lsi)*1]), &(stack[((hsi*28+1696)*1+lsi)*1]), &(stack[((hsi*28+3007)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+3770)*1+lsi)*1]), &(stack[((hsi*28+4137)*1+lsi)*1]), &(stack[((hsi*36+2382)*1+lsi)*1]), &(stack[((hsi*36+1807)*1+lsi)*1]), &(stack[((hsi*36+2601)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*36+3112)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+3770)*1+lsi)*1]), &(stack[((hsi*45+2418)*1+lsi)*1]), &(stack[((hsi*45+3906)*1+lsi)*1]), &(stack[((hsi*45+2637)*1+lsi)*1]), &(stack[((hsi*45+2171)*1+lsi)*1]), &(stack[((hsi*45+3248)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+4106)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*55+2463)*1+lsi)*1]), &(stack[((hsi*55+3996)*1+lsi)*1]), &(stack[((hsi*55+2682)*1+lsi)*1]), &(stack[((hsi*55+4051)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1188)*1+lsi)*1]),&(stack[((hsi*66+4106)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3770)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2740)*1+lsi)*1]), &(stack[((hsi*3+3770)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+2737)*1+lsi)*1]), &(stack[((hsi*3+1665)*1+lsi)*1]), &(stack[((hsi*3+2299)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3773)*1+lsi)*1]), &(stack[((hsi*6+2740)*1+lsi)*1]), &(stack[((hsi*3+3770)*1+lsi)*1]), &(stack[((hsi*6+2746)*1+lsi)*1]), &(stack[((hsi*6+1690)*1+lsi)*1]), &(stack[((hsi*6+2302)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4484)*1+lsi)*1]), &(stack[((hsi*10+3773)*1+lsi)*1]), &(stack[((hsi*6+2740)*1+lsi)*1]), &(stack[((hsi*10+2767)*1+lsi)*1]), &(stack[((hsi*10+1731)*1+lsi)*1]), &(stack[((hsi*10+2308)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*15+4484)*1+lsi)*1]), &(stack[((hsi*10+3773)*1+lsi)*1]), &(stack[((hsi*15+2874)*1+lsi)*1]), &(stack[((hsi*15+1792)*1+lsi)*1]), &(stack[((hsi*15+2318)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1650)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*15+4484)*1+lsi)*1]), &(stack[((hsi*21+2929)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*21+2333)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+1650)*1+lsi)*1]), &(stack[((hsi*21+3035)*1+lsi)*1]), &(stack[((hsi*28+3007)*1+lsi)*1]), &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*28+2354)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+1650)*1+lsi)*1]), &(stack[((hsi*36+3112)*1+lsi)*1]), &(stack[((hsi*36+3523)*1+lsi)*1]), &(stack[((hsi*36+2382)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*45+3248)*1+lsi)*1]), &(stack[((hsi*45+3559)*1+lsi)*1]), &(stack[((hsi*45+2418)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1650)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*55+3604)*1+lsi)*1]), &(stack[((hsi*55+2463)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1122)*1+lsi)*1]),&(stack[((hsi*66+1650)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2848)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2851)*1+lsi)*1]), &(stack[((hsi*3+2848)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+2299)*1+lsi)*1]), &(stack[((hsi*3+2518)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2857)*1+lsi)*1]), &(stack[((hsi*6+2851)*1+lsi)*1]), &(stack[((hsi*3+2848)*1+lsi)*1]), &(stack[((hsi*6+2302)*1+lsi)*1]), &(stack[((hsi*6+2521)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4484)*1+lsi)*1]), &(stack[((hsi*10+2857)*1+lsi)*1]), &(stack[((hsi*6+2851)*1+lsi)*1]), &(stack[((hsi*10+2308)*1+lsi)*1]), &(stack[((hsi*10+2527)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2867)*1+lsi)*1]), &(stack[((hsi*15+4484)*1+lsi)*1]), &(stack[((hsi*10+2857)*1+lsi)*1]), &(stack[((hsi*15+2318)*1+lsi)*1]), &(stack[((hsi*15+2537)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2888)*1+lsi)*1]), &(stack[((hsi*21+2867)*1+lsi)*1]), &(stack[((hsi*15+4484)*1+lsi)*1]), &(stack[((hsi*21+2333)*1+lsi)*1]), &(stack[((hsi*21+2552)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+2888)*1+lsi)*1]), &(stack[((hsi*21+2867)*1+lsi)*1]), &(stack[((hsi*28+2354)*1+lsi)*1]), &(stack[((hsi*28+2573)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+2888)*1+lsi)*1]), &(stack[((hsi*36+2382)*1+lsi)*1]), &(stack[((hsi*36+2601)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*45+2418)*1+lsi)*1]), &(stack[((hsi*45+2637)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2848)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*55+2463)*1+lsi)*1]), &(stack[((hsi*55+2682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1056)*1+lsi)*1]),&(stack[((hsi*66+2848)*1+lsi)*1]),66);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+1990)*1+lsi)*1]), &(stack[((hsi*21+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+2054)*1+lsi)*1]), &(stack[((hsi*28+1926)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*36+2018)*1+lsi)*1]), &(stack[((hsi*28+1898)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+2254)*1+lsi)*1]), &(stack[((hsi*36+2218)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*45+2090)*1+lsi)*1]), &(stack[((hsi*36+1954)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1771)*1+lsi)*1]), &(stack[((hsi*55+2682)*1+lsi)*1]), &(stack[((hsi*45+2637)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+990)*1+lsi)*1]),&(stack[((hsi*66+1771)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2518)*1+lsi)*1]), &(stack[((hsi*36+3293)*1+lsi)*1]), &(stack[((hsi*28+3148)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2563)*1+lsi)*1]), &(stack[((hsi*45+3374)*1+lsi)*1]), &(stack[((hsi*36+3212)*1+lsi)*1]), &(stack[((hsi*45+2518)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1837)*1+lsi)*1]), &(stack[((hsi*45+3329)*1+lsi)*1]), &(stack[((hsi*36+3176)*1+lsi)*1]), &(stack[((hsi*45+2518)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+3101)*1+lsi)*1]), &(stack[((hsi*55+3604)*1+lsi)*1]), &(stack[((hsi*45+3559)*1+lsi)*1]), &(stack[((hsi*55+1837)*1+lsi)*1]), &(stack[((hsi*55+2563)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+924)*1+lsi)*1]),&(stack[((hsi*66+3101)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3474)*1+lsi)*1]), &(stack[((hsi*45+3951)*1+lsi)*1]), &(stack[((hsi*36+3870)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*45+2518)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2914)*1+lsi)*1]), &(stack[((hsi*55+4051)*1+lsi)*1]), &(stack[((hsi*45+2171)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*55+3474)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*55+1837)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+858)*1+lsi)*1]),&(stack[((hsi*66+2914)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+3770)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*45+3056)*1+lsi)*1]), &(stack[((hsi*55+1837)*1+lsi)*1]), &(stack[((hsi*55+2563)*1+lsi)*1]), &(stack[((hsi*55+3474)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+792)*1+lsi)*1]),&(stack[((hsi*66+3770)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+3529)*1+lsi)*1]), &(stack[((hsi*55+3996)*1+lsi)*1]), &(stack[((hsi*45+3906)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*55+3474)*1+lsi)*1]), &(stack[((hsi*55+2563)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+726)*1+lsi)*1]),&(stack[((hsi*66+3529)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2980)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*45+3248)*1+lsi)*1]), &(stack[((hsi*55+2563)*1+lsi)*1]), &(stack[((hsi*55+1837)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+660)*1+lsi)*1]),&(stack[((hsi*66+2980)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+3167)*1+lsi)*1]), &(stack[((hsi*55+2463)*1+lsi)*1]), &(stack[((hsi*45+2418)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+594)*1+lsi)*1]),&(stack[((hsi*66+3167)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2299)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]), &(stack[((hsi*28+1990)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*36+2018)*1+lsi)*1]), &(stack[((hsi*45+2299)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*36+2054)*1+lsi)*1]), &(stack[((hsi*45+2299)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1892)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*45+2090)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+528)*1+lsi)*1]),&(stack[((hsi*66+1892)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*45+2518)*1+lsi)*1]), &(stack[((hsi*36+3293)*1+lsi)*1]), &(stack[((hsi*45+2299)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1958)*1+lsi)*1]), &(stack[((hsi*55+1837)*1+lsi)*1]), &(stack[((hsi*45+3329)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+462)*1+lsi)*1]),&(stack[((hsi*66+1958)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2344)*1+lsi)*1]), &(stack[((hsi*55+3474)*1+lsi)*1]), &(stack[((hsi*45+3951)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+396)*1+lsi)*1]),&(stack[((hsi*66+2344)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+3836)*1+lsi)*1]), &(stack[((hsi*55+2563)*1+lsi)*1]), &(stack[((hsi*45+3374)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+330)*1+lsi)*1]),&(stack[((hsi*66+3836)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+3902)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+2254)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+264)*1+lsi)*1]),&(stack[((hsi*66+3902)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+2299)*1+lsi)*1]), &(stack[((hsi*36+2135)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2024)*1+lsi)*1]), &(stack[((hsi*55+4308)*1+lsi)*1]), &(stack[((hsi*45+3659)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+198)*1+lsi)*1]),&(stack[((hsi*66+2024)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2090)*1+lsi)*1]), &(stack[((hsi*55+1716)*1+lsi)*1]), &(stack[((hsi*45+2518)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+132)*1+lsi)*1]),&(stack[((hsi*66+2090)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2410)*1+lsi)*1]), &(stack[((hsi*55+3419)*1+lsi)*1]), &(stack[((hsi*45+2737)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+66)*1+lsi)*1]),&(stack[((hsi*66+2410)*1+lsi)*1]),66);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+2476)*1+lsi)*1]), &(stack[((hsi*55+4363)*1+lsi)*1]), &(stack[((hsi*45+2299)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+0)*1+lsi)*1]),&(stack[((hsi*66+2476)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1650 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
