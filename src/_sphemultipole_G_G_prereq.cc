/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
void _sphemultipole_G_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3628)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3631)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+3631)*1+lsi)*1]), &(stack[((hsi*3+3628)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3640)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3643)*1+lsi)*1]), &(stack[((hsi*3+3640)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+3628)*1+lsi)*1]), &(stack[((hsi*3+3631)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3649)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3652)*1+lsi)*1]), &(stack[((hsi*3+3649)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+3640)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3658)*1+lsi)*1]), &(stack[((hsi*6+3652)*1+lsi)*1]), &(stack[((hsi*3+3649)*1+lsi)*1]), &(stack[((hsi*6+3643)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3668)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3668)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*3+3640)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*3+3668)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*6+3643)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3687)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+3668)*1+lsi)*1]), &(stack[((hsi*3+3649)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3696)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*6+3652)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3706)*1+lsi)*1]), &(stack[((hsi*10+3696)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*10+3658)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3610)*1+lsi)*1]),&(stack[((hsi*15+3706)*1+lsi)*1]),15);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3687)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3628)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+3687)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3721)*1+lsi)*1]), &(stack[((hsi*3+3631)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+3687)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3727)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*6+3721)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3737)*1+lsi)*1]), &(stack[((hsi*6+3643)*1+lsi)*1]), &(stack[((hsi*3+3640)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*6+3721)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3747)*1+lsi)*1]), &(stack[((hsi*10+3658)*1+lsi)*1]), &(stack[((hsi*6+3652)*1+lsi)*1]), &(stack[((hsi*10+3737)*1+lsi)*1]), &(stack[((hsi*10+3727)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3762)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*10+3727)*1+lsi)*1]), &(stack[((hsi*10+3737)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3777)*1+lsi)*1]), &(stack[((hsi*15+3706)*1+lsi)*1]), &(stack[((hsi*10+3696)*1+lsi)*1]), &(stack[((hsi*15+3762)*1+lsi)*1]), &(stack[((hsi*15+3747)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3589)*1+lsi)*1]),&(stack[((hsi*21+3777)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3798)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3628)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3808)*1+lsi)*1]), &(stack[((hsi*6+3721)*1+lsi)*1]), &(stack[((hsi*3+3631)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3818)*1+lsi)*1]), &(stack[((hsi*10+3727)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*10+3808)*1+lsi)*1]), &(stack[((hsi*10+3798)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3833)*1+lsi)*1]), &(stack[((hsi*10+3737)*1+lsi)*1]), &(stack[((hsi*6+3643)*1+lsi)*1]), &(stack[((hsi*10+3798)*1+lsi)*1]), &(stack[((hsi*10+3808)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3848)*1+lsi)*1]), &(stack[((hsi*15+3747)*1+lsi)*1]), &(stack[((hsi*10+3658)*1+lsi)*1]), &(stack[((hsi*15+3833)*1+lsi)*1]), &(stack[((hsi*15+3818)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3869)*1+lsi)*1]), &(stack[((hsi*15+3762)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*15+3818)*1+lsi)*1]), &(stack[((hsi*15+3833)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3890)*1+lsi)*1]), &(stack[((hsi*21+3777)*1+lsi)*1]), &(stack[((hsi*15+3706)*1+lsi)*1]), &(stack[((hsi*21+3869)*1+lsi)*1]), &(stack[((hsi*21+3848)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3561)*1+lsi)*1]),&(stack[((hsi*28+3890)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3918)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3928)*1+lsi)*1]), &(stack[((hsi*10+3798)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*10+3918)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3943)*1+lsi)*1]), &(stack[((hsi*10+3808)*1+lsi)*1]), &(stack[((hsi*6+3721)*1+lsi)*1]), &(stack[((hsi*10+3918)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3958)*1+lsi)*1]), &(stack[((hsi*15+3818)*1+lsi)*1]), &(stack[((hsi*10+3727)*1+lsi)*1]), &(stack[((hsi*15+3943)*1+lsi)*1]), &(stack[((hsi*15+3928)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3979)*1+lsi)*1]), &(stack[((hsi*15+3833)*1+lsi)*1]), &(stack[((hsi*10+3737)*1+lsi)*1]), &(stack[((hsi*15+3928)*1+lsi)*1]), &(stack[((hsi*15+3943)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4000)*1+lsi)*1]), &(stack[((hsi*21+3848)*1+lsi)*1]), &(stack[((hsi*15+3747)*1+lsi)*1]), &(stack[((hsi*21+3979)*1+lsi)*1]), &(stack[((hsi*21+3958)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4028)*1+lsi)*1]), &(stack[((hsi*21+3869)*1+lsi)*1]), &(stack[((hsi*15+3762)*1+lsi)*1]), &(stack[((hsi*21+3958)*1+lsi)*1]), &(stack[((hsi*21+3979)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4056)*1+lsi)*1]), &(stack[((hsi*28+3890)*1+lsi)*1]), &(stack[((hsi*21+3777)*1+lsi)*1]), &(stack[((hsi*28+4028)*1+lsi)*1]), &(stack[((hsi*28+4000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3525)*1+lsi)*1]),&(stack[((hsi*36+4056)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4092)*1+lsi)*1]), &(stack[((hsi*10+3918)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4107)*1+lsi)*1]), &(stack[((hsi*15+3928)*1+lsi)*1]), &(stack[((hsi*10+3798)*1+lsi)*1]), &(stack[((hsi*15+4092)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4128)*1+lsi)*1]), &(stack[((hsi*15+3943)*1+lsi)*1]), &(stack[((hsi*10+3808)*1+lsi)*1]), &(stack[((hsi*15+4092)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4149)*1+lsi)*1]), &(stack[((hsi*21+3958)*1+lsi)*1]), &(stack[((hsi*15+3818)*1+lsi)*1]), &(stack[((hsi*21+4128)*1+lsi)*1]), &(stack[((hsi*21+4107)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4177)*1+lsi)*1]), &(stack[((hsi*21+3979)*1+lsi)*1]), &(stack[((hsi*15+3833)*1+lsi)*1]), &(stack[((hsi*21+4107)*1+lsi)*1]), &(stack[((hsi*21+4128)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4205)*1+lsi)*1]), &(stack[((hsi*28+4000)*1+lsi)*1]), &(stack[((hsi*21+3848)*1+lsi)*1]), &(stack[((hsi*28+4177)*1+lsi)*1]), &(stack[((hsi*28+4149)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4241)*1+lsi)*1]), &(stack[((hsi*28+4028)*1+lsi)*1]), &(stack[((hsi*21+3869)*1+lsi)*1]), &(stack[((hsi*28+4149)*1+lsi)*1]), &(stack[((hsi*28+4177)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4277)*1+lsi)*1]), &(stack[((hsi*36+4056)*1+lsi)*1]), &(stack[((hsi*28+3890)*1+lsi)*1]), &(stack[((hsi*36+4241)*1+lsi)*1]), &(stack[((hsi*36+4205)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3480)*1+lsi)*1]),&(stack[((hsi*45+4277)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3702)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4322)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4325)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*3+3702)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+4325)*1+lsi)*1]), &(stack[((hsi*3+4322)*1+lsi)*1]), &(stack[((hsi*3+3640)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4334)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4337)*1+lsi)*1]), &(stack[((hsi*3+4322)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+4334)*1+lsi)*1]), &(stack[((hsi*3+3631)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4343)*1+lsi)*1]), &(stack[((hsi*3+4325)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+4334)*1+lsi)*1]), &(stack[((hsi*3+3628)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4349)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*3+3702)*1+lsi)*1]), &(stack[((hsi*6+4343)*1+lsi)*1]), &(stack[((hsi*6+4337)*1+lsi)*1]), &(stack[((hsi*6+3643)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4359)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4362)*1+lsi)*1]), &(stack[((hsi*3+4359)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+4322)*1+lsi)*1]), &(stack[((hsi*3+4325)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4368)*1+lsi)*1]), &(stack[((hsi*6+4362)*1+lsi)*1]), &(stack[((hsi*3+4359)*1+lsi)*1]), &(stack[((hsi*6+4337)*1+lsi)*1]), &(stack[((hsi*6+4343)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4378)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4381)*1+lsi)*1]), &(stack[((hsi*3+4378)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+4359)*1+lsi)*1]), &(stack[((hsi*3+3702)*1+lsi)*1]), &(stack[((hsi*3+3668)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4387)*1+lsi)*1]), &(stack[((hsi*6+4381)*1+lsi)*1]), &(stack[((hsi*3+4378)*1+lsi)*1]), &(stack[((hsi*6+4362)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4397)*1+lsi)*1]), &(stack[((hsi*10+4387)*1+lsi)*1]), &(stack[((hsi*6+4381)*1+lsi)*1]), &(stack[((hsi*10+4368)*1+lsi)*1]), &(stack[((hsi*10+4349)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3465)*1+lsi)*1]),&(stack[((hsi*15+4397)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4378)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+3687)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4412)*1+lsi)*1]), &(stack[((hsi*6+4337)*1+lsi)*1]), &(stack[((hsi*3+4322)*1+lsi)*1]), &(stack[((hsi*6+4378)*1+lsi)*1]), &(stack[((hsi*6+3721)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4422)*1+lsi)*1]), &(stack[((hsi*6+4343)*1+lsi)*1]), &(stack[((hsi*3+4325)*1+lsi)*1]), &(stack[((hsi*6+4378)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4432)*1+lsi)*1]), &(stack[((hsi*10+4349)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*10+4422)*1+lsi)*1]), &(stack[((hsi*10+4412)*1+lsi)*1]), &(stack[((hsi*10+3737)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4447)*1+lsi)*1]), &(stack[((hsi*10+4368)*1+lsi)*1]), &(stack[((hsi*6+4362)*1+lsi)*1]), &(stack[((hsi*10+4412)*1+lsi)*1]), &(stack[((hsi*10+4422)*1+lsi)*1]), &(stack[((hsi*10+3727)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4462)*1+lsi)*1]), &(stack[((hsi*15+4397)*1+lsi)*1]), &(stack[((hsi*10+4387)*1+lsi)*1]), &(stack[((hsi*15+4447)*1+lsi)*1]), &(stack[((hsi*15+4432)*1+lsi)*1]), &(stack[((hsi*15+3762)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3444)*1+lsi)*1]),&(stack[((hsi*21+4462)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4384)*1+lsi)*1]), &(stack[((hsi*6+4378)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4483)*1+lsi)*1]), &(stack[((hsi*10+4412)*1+lsi)*1]), &(stack[((hsi*6+4337)*1+lsi)*1]), &(stack[((hsi*10+4384)*1+lsi)*1]), &(stack[((hsi*10+3808)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4498)*1+lsi)*1]), &(stack[((hsi*10+4422)*1+lsi)*1]), &(stack[((hsi*6+4343)*1+lsi)*1]), &(stack[((hsi*10+4384)*1+lsi)*1]), &(stack[((hsi*10+3798)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4513)*1+lsi)*1]), &(stack[((hsi*15+4432)*1+lsi)*1]), &(stack[((hsi*10+4349)*1+lsi)*1]), &(stack[((hsi*15+4498)*1+lsi)*1]), &(stack[((hsi*15+4483)*1+lsi)*1]), &(stack[((hsi*15+3833)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4534)*1+lsi)*1]), &(stack[((hsi*15+4447)*1+lsi)*1]), &(stack[((hsi*10+4368)*1+lsi)*1]), &(stack[((hsi*15+4483)*1+lsi)*1]), &(stack[((hsi*15+4498)*1+lsi)*1]), &(stack[((hsi*15+3818)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4555)*1+lsi)*1]), &(stack[((hsi*21+4462)*1+lsi)*1]), &(stack[((hsi*15+4397)*1+lsi)*1]), &(stack[((hsi*21+4534)*1+lsi)*1]), &(stack[((hsi*21+4513)*1+lsi)*1]), &(stack[((hsi*21+3869)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3416)*1+lsi)*1]),&(stack[((hsi*28+4555)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4583)*1+lsi)*1]), &(stack[((hsi*10+4384)*1+lsi)*1]), &(stack[((hsi*6+4378)*1+lsi)*1]), &(stack[((hsi*10+3918)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4598)*1+lsi)*1]), &(stack[((hsi*15+4483)*1+lsi)*1]), &(stack[((hsi*10+4412)*1+lsi)*1]), &(stack[((hsi*15+4583)*1+lsi)*1]), &(stack[((hsi*15+3943)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4619)*1+lsi)*1]), &(stack[((hsi*15+4498)*1+lsi)*1]), &(stack[((hsi*10+4422)*1+lsi)*1]), &(stack[((hsi*15+4583)*1+lsi)*1]), &(stack[((hsi*15+3928)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4640)*1+lsi)*1]), &(stack[((hsi*21+4513)*1+lsi)*1]), &(stack[((hsi*15+4432)*1+lsi)*1]), &(stack[((hsi*21+4619)*1+lsi)*1]), &(stack[((hsi*21+4598)*1+lsi)*1]), &(stack[((hsi*21+3979)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4668)*1+lsi)*1]), &(stack[((hsi*21+4534)*1+lsi)*1]), &(stack[((hsi*15+4447)*1+lsi)*1]), &(stack[((hsi*21+4598)*1+lsi)*1]), &(stack[((hsi*21+4619)*1+lsi)*1]), &(stack[((hsi*21+3958)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4696)*1+lsi)*1]), &(stack[((hsi*28+4555)*1+lsi)*1]), &(stack[((hsi*21+4462)*1+lsi)*1]), &(stack[((hsi*28+4668)*1+lsi)*1]), &(stack[((hsi*28+4640)*1+lsi)*1]), &(stack[((hsi*28+4028)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3380)*1+lsi)*1]),&(stack[((hsi*36+4696)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4732)*1+lsi)*1]), &(stack[((hsi*15+4583)*1+lsi)*1]), &(stack[((hsi*10+4384)*1+lsi)*1]), &(stack[((hsi*15+4092)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4753)*1+lsi)*1]), &(stack[((hsi*21+4598)*1+lsi)*1]), &(stack[((hsi*15+4483)*1+lsi)*1]), &(stack[((hsi*21+4732)*1+lsi)*1]), &(stack[((hsi*21+4128)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4781)*1+lsi)*1]), &(stack[((hsi*21+4619)*1+lsi)*1]), &(stack[((hsi*15+4498)*1+lsi)*1]), &(stack[((hsi*21+4732)*1+lsi)*1]), &(stack[((hsi*21+4107)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4809)*1+lsi)*1]), &(stack[((hsi*28+4640)*1+lsi)*1]), &(stack[((hsi*21+4513)*1+lsi)*1]), &(stack[((hsi*28+4781)*1+lsi)*1]), &(stack[((hsi*28+4753)*1+lsi)*1]), &(stack[((hsi*28+4177)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4845)*1+lsi)*1]), &(stack[((hsi*28+4668)*1+lsi)*1]), &(stack[((hsi*21+4534)*1+lsi)*1]), &(stack[((hsi*28+4753)*1+lsi)*1]), &(stack[((hsi*28+4781)*1+lsi)*1]), &(stack[((hsi*28+4149)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4881)*1+lsi)*1]), &(stack[((hsi*36+4696)*1+lsi)*1]), &(stack[((hsi*28+4555)*1+lsi)*1]), &(stack[((hsi*36+4845)*1+lsi)*1]), &(stack[((hsi*36+4809)*1+lsi)*1]), &(stack[((hsi*36+4241)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3335)*1+lsi)*1]),&(stack[((hsi*45+4881)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3687)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4394)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+3640)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*3+4394)*1+lsi)*1]), &(stack[((hsi*3+4325)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+4394)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+3631)*1+lsi)*1]), &(stack[((hsi*3+3628)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4932)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(stack[((hsi*6+3643)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*6+4343)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4334)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3628)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*3+4394)*1+lsi)*1]), &(stack[((hsi*3+3640)*1+lsi)*1]), &(stack[((hsi*3+4322)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4942)*1+lsi)*1]), &(stack[((hsi*6+3628)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*6+3643)*1+lsi)*1]), &(stack[((hsi*6+4337)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+3668)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]), &(stack[((hsi*3+3649)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(stack[((hsi*3+4359)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*6+3628)*1+lsi)*1]), &(stack[((hsi*6+3652)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*6+4362)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4962)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*6+3634)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*10+4942)*1+lsi)*1]), &(stack[((hsi*10+3658)*1+lsi)*1]), &(stack[((hsi*10+4932)*1+lsi)*1]), &(stack[((hsi*10+4368)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3320)*1+lsi)*1]),&(stack[((hsi*15+4962)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3634)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+4394)*1+lsi)*1]), &(stack[((hsi*6+3721)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*6+4378)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4977)*1+lsi)*1]), &(stack[((hsi*10+4932)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*10+3737)*1+lsi)*1]), &(stack[((hsi*10+3727)*1+lsi)*1]), &(stack[((hsi*10+3634)*1+lsi)*1]), &(stack[((hsi*10+4422)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4992)*1+lsi)*1]), &(stack[((hsi*10+4942)*1+lsi)*1]), &(stack[((hsi*6+3628)*1+lsi)*1]), &(stack[((hsi*10+3727)*1+lsi)*1]), &(stack[((hsi*10+3634)*1+lsi)*1]), &(stack[((hsi*10+3737)*1+lsi)*1]), &(stack[((hsi*10+4412)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*15+4962)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*15+3762)*1+lsi)*1]), &(stack[((hsi*15+4992)*1+lsi)*1]), &(stack[((hsi*15+3747)*1+lsi)*1]), &(stack[((hsi*15+4977)*1+lsi)*1]), &(stack[((hsi*15+4447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3299)*1+lsi)*1]),&(stack[((hsi*21+3721)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5007)*1+lsi)*1]), &(stack[((hsi*10+3634)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*10+3808)*1+lsi)*1]), &(stack[((hsi*10+3798)*1+lsi)*1]), &(stack[((hsi*10+4384)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5022)*1+lsi)*1]), &(stack[((hsi*15+4977)*1+lsi)*1]), &(stack[((hsi*10+4932)*1+lsi)*1]), &(stack[((hsi*15+3833)*1+lsi)*1]), &(stack[((hsi*15+3818)*1+lsi)*1]), &(stack[((hsi*15+5007)*1+lsi)*1]), &(stack[((hsi*15+4498)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5043)*1+lsi)*1]), &(stack[((hsi*15+4992)*1+lsi)*1]), &(stack[((hsi*10+4942)*1+lsi)*1]), &(stack[((hsi*15+3818)*1+lsi)*1]), &(stack[((hsi*15+5007)*1+lsi)*1]), &(stack[((hsi*15+3833)*1+lsi)*1]), &(stack[((hsi*15+4483)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5064)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*15+4962)*1+lsi)*1]), &(stack[((hsi*21+3869)*1+lsi)*1]), &(stack[((hsi*21+5043)*1+lsi)*1]), &(stack[((hsi*21+3848)*1+lsi)*1]), &(stack[((hsi*21+5022)*1+lsi)*1]), &(stack[((hsi*21+4534)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3271)*1+lsi)*1]),&(stack[((hsi*28+5064)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5092)*1+lsi)*1]), &(stack[((hsi*15+5007)*1+lsi)*1]), &(stack[((hsi*10+3634)*1+lsi)*1]), &(stack[((hsi*15+3943)*1+lsi)*1]), &(stack[((hsi*15+3928)*1+lsi)*1]), &(stack[((hsi*15+4583)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5113)*1+lsi)*1]), &(stack[((hsi*21+5022)*1+lsi)*1]), &(stack[((hsi*15+4977)*1+lsi)*1]), &(stack[((hsi*21+3979)*1+lsi)*1]), &(stack[((hsi*21+3958)*1+lsi)*1]), &(stack[((hsi*21+5092)*1+lsi)*1]), &(stack[((hsi*21+4619)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5141)*1+lsi)*1]), &(stack[((hsi*21+5043)*1+lsi)*1]), &(stack[((hsi*15+4992)*1+lsi)*1]), &(stack[((hsi*21+3958)*1+lsi)*1]), &(stack[((hsi*21+5092)*1+lsi)*1]), &(stack[((hsi*21+3979)*1+lsi)*1]), &(stack[((hsi*21+4598)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5169)*1+lsi)*1]), &(stack[((hsi*28+5064)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*28+4028)*1+lsi)*1]), &(stack[((hsi*28+5141)*1+lsi)*1]), &(stack[((hsi*28+4000)*1+lsi)*1]), &(stack[((hsi*28+5113)*1+lsi)*1]), &(stack[((hsi*28+4668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3235)*1+lsi)*1]),&(stack[((hsi*36+5169)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5205)*1+lsi)*1]), &(stack[((hsi*21+5092)*1+lsi)*1]), &(stack[((hsi*15+5007)*1+lsi)*1]), &(stack[((hsi*21+4128)*1+lsi)*1]), &(stack[((hsi*21+4107)*1+lsi)*1]), &(stack[((hsi*21+4732)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5233)*1+lsi)*1]), &(stack[((hsi*28+5113)*1+lsi)*1]), &(stack[((hsi*21+5022)*1+lsi)*1]), &(stack[((hsi*28+4177)*1+lsi)*1]), &(stack[((hsi*28+4149)*1+lsi)*1]), &(stack[((hsi*28+5205)*1+lsi)*1]), &(stack[((hsi*28+4781)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5269)*1+lsi)*1]), &(stack[((hsi*28+5141)*1+lsi)*1]), &(stack[((hsi*21+5043)*1+lsi)*1]), &(stack[((hsi*28+4149)*1+lsi)*1]), &(stack[((hsi*28+5205)*1+lsi)*1]), &(stack[((hsi*28+4177)*1+lsi)*1]), &(stack[((hsi*28+4753)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5305)*1+lsi)*1]), &(stack[((hsi*36+5169)*1+lsi)*1]), &(stack[((hsi*28+5064)*1+lsi)*1]), &(stack[((hsi*36+4241)*1+lsi)*1]), &(stack[((hsi*36+5269)*1+lsi)*1]), &(stack[((hsi*36+4205)*1+lsi)*1]), &(stack[((hsi*36+5233)*1+lsi)*1]), &(stack[((hsi*36+4845)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3190)*1+lsi)*1]),&(stack[((hsi*45+5305)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+4322)*1+lsi)*1]), &(stack[((hsi*3+4325)*1+lsi)*1]), &(stack[((hsi*3+4394)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*6+4337)*1+lsi)*1]), &(stack[((hsi*6+4343)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3798)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+3798)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+4359)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*3+3702)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+3798)*1+lsi)*1]), &(stack[((hsi*6+4362)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*6+3628)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3798)*1+lsi)*1]), &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*10+4368)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*10+4349)*1+lsi)*1]), &(stack[((hsi*10+4942)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3175)*1+lsi)*1]),&(stack[((hsi*15+3798)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5350)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*10+4412)*1+lsi)*1]), &(stack[((hsi*10+4422)*1+lsi)*1]), &(stack[((hsi*10+3634)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5365)*1+lsi)*1]), &(stack[((hsi*15+3798)*1+lsi)*1]), &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*15+4447)*1+lsi)*1]), &(stack[((hsi*15+5350)*1+lsi)*1]), &(stack[((hsi*15+4432)*1+lsi)*1]), &(stack[((hsi*15+4992)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3154)*1+lsi)*1]),&(stack[((hsi*21+5365)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5386)*1+lsi)*1]), &(stack[((hsi*15+5350)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*15+4483)*1+lsi)*1]), &(stack[((hsi*15+4498)*1+lsi)*1]), &(stack[((hsi*15+5007)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5407)*1+lsi)*1]), &(stack[((hsi*21+5365)*1+lsi)*1]), &(stack[((hsi*15+3798)*1+lsi)*1]), &(stack[((hsi*21+4534)*1+lsi)*1]), &(stack[((hsi*21+5386)*1+lsi)*1]), &(stack[((hsi*21+4513)*1+lsi)*1]), &(stack[((hsi*21+5043)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3126)*1+lsi)*1]),&(stack[((hsi*28+5407)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5435)*1+lsi)*1]), &(stack[((hsi*21+5386)*1+lsi)*1]), &(stack[((hsi*15+5350)*1+lsi)*1]), &(stack[((hsi*21+4598)*1+lsi)*1]), &(stack[((hsi*21+4619)*1+lsi)*1]), &(stack[((hsi*21+5092)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5463)*1+lsi)*1]), &(stack[((hsi*28+5407)*1+lsi)*1]), &(stack[((hsi*21+5365)*1+lsi)*1]), &(stack[((hsi*28+4668)*1+lsi)*1]), &(stack[((hsi*28+5435)*1+lsi)*1]), &(stack[((hsi*28+4640)*1+lsi)*1]), &(stack[((hsi*28+5141)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3090)*1+lsi)*1]),&(stack[((hsi*36+5463)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5499)*1+lsi)*1]), &(stack[((hsi*28+5435)*1+lsi)*1]), &(stack[((hsi*21+5386)*1+lsi)*1]), &(stack[((hsi*28+4753)*1+lsi)*1]), &(stack[((hsi*28+4781)*1+lsi)*1]), &(stack[((hsi*28+5205)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5535)*1+lsi)*1]), &(stack[((hsi*36+5463)*1+lsi)*1]), &(stack[((hsi*28+5407)*1+lsi)*1]), &(stack[((hsi*36+4845)*1+lsi)*1]), &(stack[((hsi*36+5499)*1+lsi)*1]), &(stack[((hsi*36+4809)*1+lsi)*1]), &(stack[((hsi*36+5269)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3045)*1+lsi)*1]),&(stack[((hsi*45+5535)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4412)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+4412)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+4334)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+4412)*1+lsi)*1]), &(stack[((hsi*6+3628)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3634)*1+lsi)*1]), &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*10+4942)*1+lsi)*1]), &(stack[((hsi*10+4932)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3030)*1+lsi)*1]),&(stack[((hsi*15+3634)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5580)*1+lsi)*1]), &(stack[((hsi*15+3634)*1+lsi)*1]), &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*15+4992)*1+lsi)*1]), &(stack[((hsi*15+4977)*1+lsi)*1]), &(stack[((hsi*15+5350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3009)*1+lsi)*1]),&(stack[((hsi*21+5580)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5601)*1+lsi)*1]), &(stack[((hsi*21+5580)*1+lsi)*1]), &(stack[((hsi*15+3634)*1+lsi)*1]), &(stack[((hsi*21+5043)*1+lsi)*1]), &(stack[((hsi*21+5022)*1+lsi)*1]), &(stack[((hsi*21+5386)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2981)*1+lsi)*1]),&(stack[((hsi*28+5601)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5629)*1+lsi)*1]), &(stack[((hsi*28+5601)*1+lsi)*1]), &(stack[((hsi*21+5580)*1+lsi)*1]), &(stack[((hsi*28+5141)*1+lsi)*1]), &(stack[((hsi*28+5113)*1+lsi)*1]), &(stack[((hsi*28+5435)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2945)*1+lsi)*1]),&(stack[((hsi*36+5629)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5665)*1+lsi)*1]), &(stack[((hsi*36+5629)*1+lsi)*1]), &(stack[((hsi*28+5601)*1+lsi)*1]), &(stack[((hsi*36+5269)*1+lsi)*1]), &(stack[((hsi*36+5233)*1+lsi)*1]), &(stack[((hsi*36+5499)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2900)*1+lsi)*1]),&(stack[((hsi*45+5665)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4412)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+4412)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+3702)*1+lsi)*1]), &(stack[((hsi*3+4359)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*3+4412)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*6+4362)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4412)*1+lsi)*1]), &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*6+4926)*1+lsi)*1]), &(stack[((hsi*10+4349)*1+lsi)*1]), &(stack[((hsi*10+4368)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*10+4932)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2885)*1+lsi)*1]),&(stack[((hsi*15+4412)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5710)*1+lsi)*1]), &(stack[((hsi*15+4412)*1+lsi)*1]), &(stack[((hsi*10+4378)*1+lsi)*1]), &(stack[((hsi*15+4432)*1+lsi)*1]), &(stack[((hsi*15+4447)*1+lsi)*1]), &(stack[((hsi*15+5350)*1+lsi)*1]), &(stack[((hsi*15+4977)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2864)*1+lsi)*1]),&(stack[((hsi*21+5710)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5731)*1+lsi)*1]), &(stack[((hsi*21+5710)*1+lsi)*1]), &(stack[((hsi*15+4412)*1+lsi)*1]), &(stack[((hsi*21+4513)*1+lsi)*1]), &(stack[((hsi*21+4534)*1+lsi)*1]), &(stack[((hsi*21+5386)*1+lsi)*1]), &(stack[((hsi*21+5022)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2836)*1+lsi)*1]),&(stack[((hsi*28+5731)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5759)*1+lsi)*1]), &(stack[((hsi*28+5731)*1+lsi)*1]), &(stack[((hsi*21+5710)*1+lsi)*1]), &(stack[((hsi*28+4640)*1+lsi)*1]), &(stack[((hsi*28+4668)*1+lsi)*1]), &(stack[((hsi*28+5435)*1+lsi)*1]), &(stack[((hsi*28+5113)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2800)*1+lsi)*1]),&(stack[((hsi*36+5759)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5795)*1+lsi)*1]), &(stack[((hsi*36+5759)*1+lsi)*1]), &(stack[((hsi*28+5731)*1+lsi)*1]), &(stack[((hsi*36+4809)*1+lsi)*1]), &(stack[((hsi*36+4845)*1+lsi)*1]), &(stack[((hsi*36+5499)*1+lsi)*1]), &(stack[((hsi*36+5233)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2755)*1+lsi)*1]),&(stack[((hsi*45+5795)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+3649)*1+lsi)*1]), &(stack[((hsi*3+3687)*1+lsi)*1]), &(stack[((hsi*3+3668)*1+lsi)*1]), &(stack[((hsi*3+4334)*1+lsi)*1]), &(stack[((hsi*3+3702)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*3+3625)*1+lsi)*1]), &(stack[((hsi*6+3652)*1+lsi)*1]), &(stack[((hsi*6+3696)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]), &(stack[((hsi*6+3628)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4334)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*6+3690)*1+lsi)*1]), &(stack[((hsi*10+3658)*1+lsi)*1]), &(stack[((hsi*10+4932)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]), &(stack[((hsi*10+4942)*1+lsi)*1]), &(stack[((hsi*10+4349)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2740)*1+lsi)*1]),&(stack[((hsi*15+4334)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4926)*1+lsi)*1]), &(stack[((hsi*15+4334)*1+lsi)*1]), &(stack[((hsi*10+4952)*1+lsi)*1]), &(stack[((hsi*15+3747)*1+lsi)*1]), &(stack[((hsi*15+4977)*1+lsi)*1]), &(stack[((hsi*15+3762)*1+lsi)*1]), &(stack[((hsi*15+4992)*1+lsi)*1]), &(stack[((hsi*15+4432)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2719)*1+lsi)*1]),&(stack[((hsi*21+4926)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5840)*1+lsi)*1]), &(stack[((hsi*21+4926)*1+lsi)*1]), &(stack[((hsi*15+4334)*1+lsi)*1]), &(stack[((hsi*21+3848)*1+lsi)*1]), &(stack[((hsi*21+5022)*1+lsi)*1]), &(stack[((hsi*21+3869)*1+lsi)*1]), &(stack[((hsi*21+5043)*1+lsi)*1]), &(stack[((hsi*21+4513)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2691)*1+lsi)*1]),&(stack[((hsi*28+5840)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5868)*1+lsi)*1]), &(stack[((hsi*28+5840)*1+lsi)*1]), &(stack[((hsi*21+4926)*1+lsi)*1]), &(stack[((hsi*28+4000)*1+lsi)*1]), &(stack[((hsi*28+5113)*1+lsi)*1]), &(stack[((hsi*28+4028)*1+lsi)*1]), &(stack[((hsi*28+5141)*1+lsi)*1]), &(stack[((hsi*28+4640)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2655)*1+lsi)*1]),&(stack[((hsi*36+5868)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5904)*1+lsi)*1]), &(stack[((hsi*36+5868)*1+lsi)*1]), &(stack[((hsi*28+5840)*1+lsi)*1]), &(stack[((hsi*36+4205)*1+lsi)*1]), &(stack[((hsi*36+5233)*1+lsi)*1]), &(stack[((hsi*36+4241)*1+lsi)*1]), &(stack[((hsi*36+5269)*1+lsi)*1]), &(stack[((hsi*36+4809)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2610)*1+lsi)*1]),&(stack[((hsi*45+5904)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4378)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4322)*1+lsi)*1]), &(stack[((hsi*3+4378)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+3702)*1+lsi)*1]), &(stack[((hsi*3+4359)*1+lsi)*1]), &(stack[((hsi*3+3649)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*6+4322)*1+lsi)*1]), &(stack[((hsi*3+4378)*1+lsi)*1]), &(stack[((hsi*6+4328)*1+lsi)*1]), &(stack[((hsi*6+4362)*1+lsi)*1]), &(stack[((hsi*6+3652)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4947)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*6+4322)*1+lsi)*1]), &(stack[((hsi*10+4349)*1+lsi)*1]), &(stack[((hsi*10+4368)*1+lsi)*1]), &(stack[((hsi*10+3658)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2595)*1+lsi)*1]),&(stack[((hsi*15+4947)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4349)*1+lsi)*1]), &(stack[((hsi*15+4947)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*15+4432)*1+lsi)*1]), &(stack[((hsi*15+4447)*1+lsi)*1]), &(stack[((hsi*15+3747)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2574)*1+lsi)*1]),&(stack[((hsi*21+4349)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5949)*1+lsi)*1]), &(stack[((hsi*21+4349)*1+lsi)*1]), &(stack[((hsi*15+4947)*1+lsi)*1]), &(stack[((hsi*21+4513)*1+lsi)*1]), &(stack[((hsi*21+4534)*1+lsi)*1]), &(stack[((hsi*21+3848)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2546)*1+lsi)*1]),&(stack[((hsi*28+5949)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5977)*1+lsi)*1]), &(stack[((hsi*28+5949)*1+lsi)*1]), &(stack[((hsi*21+4349)*1+lsi)*1]), &(stack[((hsi*28+4640)*1+lsi)*1]), &(stack[((hsi*28+4668)*1+lsi)*1]), &(stack[((hsi*28+4000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2510)*1+lsi)*1]),&(stack[((hsi*36+5977)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6013)*1+lsi)*1]), &(stack[((hsi*36+5977)*1+lsi)*1]), &(stack[((hsi*28+5949)*1+lsi)*1]), &(stack[((hsi*36+4809)*1+lsi)*1]), &(stack[((hsi*36+4845)*1+lsi)*1]), &(stack[((hsi*36+4205)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2465)*1+lsi)*1]),&(stack[((hsi*45+6013)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4370)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4373)*1+lsi)*1]), &(stack[((hsi*3+4370)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+3649)*1+lsi)*1]), &(stack[((hsi*3+3668)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*6+4373)*1+lsi)*1]), &(stack[((hsi*3+4370)*1+lsi)*1]), &(stack[((hsi*6+3652)*1+lsi)*1]), &(stack[((hsi*6+3671)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4379)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*6+4373)*1+lsi)*1]), &(stack[((hsi*10+3658)*1+lsi)*1]), &(stack[((hsi*10+3677)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2450)*1+lsi)*1]),&(stack[((hsi*15+4379)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3649)*1+lsi)*1]), &(stack[((hsi*15+4379)*1+lsi)*1]), &(stack[((hsi*10+3687)*1+lsi)*1]), &(stack[((hsi*15+3747)*1+lsi)*1]), &(stack[((hsi*15+3762)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2429)*1+lsi)*1]),&(stack[((hsi*21+3649)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*21+3649)*1+lsi)*1]), &(stack[((hsi*15+4379)*1+lsi)*1]), &(stack[((hsi*21+3848)*1+lsi)*1]), &(stack[((hsi*21+3869)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2401)*1+lsi)*1]),&(stack[((hsi*28+3670)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6058)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*21+3649)*1+lsi)*1]), &(stack[((hsi*28+4000)*1+lsi)*1]), &(stack[((hsi*28+4028)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2365)*1+lsi)*1]),&(stack[((hsi*36+6058)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6094)*1+lsi)*1]), &(stack[((hsi*36+6058)*1+lsi)*1]), &(stack[((hsi*28+3670)*1+lsi)*1]), &(stack[((hsi*36+4205)*1+lsi)*1]), &(stack[((hsi*36+4241)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2320)*1+lsi)*1]),&(stack[((hsi*45+6094)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2305)*1+lsi)*1]),&(stack[((hsi*15+3762)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2284)*1+lsi)*1]),&(stack[((hsi*21+3869)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2256)*1+lsi)*1]),&(stack[((hsi*28+4028)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2220)*1+lsi)*1]),&(stack[((hsi*36+4241)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6139)*1+lsi)*1]), &(stack[((hsi*15+4092)*1+lsi)*1]), &(stack[((hsi*10+3918)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6160)*1+lsi)*1]), &(stack[((hsi*21+4128)*1+lsi)*1]), &(stack[((hsi*15+3943)*1+lsi)*1]), &(stack[((hsi*21+6139)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6188)*1+lsi)*1]), &(stack[((hsi*21+4107)*1+lsi)*1]), &(stack[((hsi*15+3928)*1+lsi)*1]), &(stack[((hsi*21+6139)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6216)*1+lsi)*1]), &(stack[((hsi*28+4177)*1+lsi)*1]), &(stack[((hsi*21+3979)*1+lsi)*1]), &(stack[((hsi*28+6188)*1+lsi)*1]), &(stack[((hsi*28+6160)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6252)*1+lsi)*1]), &(stack[((hsi*28+4149)*1+lsi)*1]), &(stack[((hsi*21+3958)*1+lsi)*1]), &(stack[((hsi*28+6160)*1+lsi)*1]), &(stack[((hsi*28+6188)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6288)*1+lsi)*1]), &(stack[((hsi*36+4241)*1+lsi)*1]), &(stack[((hsi*28+4028)*1+lsi)*1]), &(stack[((hsi*36+6252)*1+lsi)*1]), &(stack[((hsi*36+6216)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2175)*1+lsi)*1]),&(stack[((hsi*45+6288)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2160)*1+lsi)*1]),&(stack[((hsi*15+4447)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2139)*1+lsi)*1]),&(stack[((hsi*21+4534)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2111)*1+lsi)*1]),&(stack[((hsi*28+4668)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2075)*1+lsi)*1]),&(stack[((hsi*36+4845)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6333)*1+lsi)*1]), &(stack[((hsi*21+4732)*1+lsi)*1]), &(stack[((hsi*15+4583)*1+lsi)*1]), &(stack[((hsi*21+6139)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6361)*1+lsi)*1]), &(stack[((hsi*28+4781)*1+lsi)*1]), &(stack[((hsi*21+4619)*1+lsi)*1]), &(stack[((hsi*28+6333)*1+lsi)*1]), &(stack[((hsi*28+6188)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6397)*1+lsi)*1]), &(stack[((hsi*28+4753)*1+lsi)*1]), &(stack[((hsi*21+4598)*1+lsi)*1]), &(stack[((hsi*28+6333)*1+lsi)*1]), &(stack[((hsi*28+6160)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6433)*1+lsi)*1]), &(stack[((hsi*36+4845)*1+lsi)*1]), &(stack[((hsi*28+4668)*1+lsi)*1]), &(stack[((hsi*36+6397)*1+lsi)*1]), &(stack[((hsi*36+6361)*1+lsi)*1]), &(stack[((hsi*36+6252)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2030)*1+lsi)*1]),&(stack[((hsi*45+6433)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2015)*1+lsi)*1]),&(stack[((hsi*15+4992)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1994)*1+lsi)*1]),&(stack[((hsi*21+5043)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1966)*1+lsi)*1]),&(stack[((hsi*28+5141)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1930)*1+lsi)*1]),&(stack[((hsi*36+5269)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6478)*1+lsi)*1]), &(stack[((hsi*28+5205)*1+lsi)*1]), &(stack[((hsi*21+5092)*1+lsi)*1]), &(stack[((hsi*28+6160)*1+lsi)*1]), &(stack[((hsi*28+6188)*1+lsi)*1]), &(stack[((hsi*28+6333)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6514)*1+lsi)*1]), &(stack[((hsi*36+5269)*1+lsi)*1]), &(stack[((hsi*28+5141)*1+lsi)*1]), &(stack[((hsi*36+6252)*1+lsi)*1]), &(stack[((hsi*36+6478)*1+lsi)*1]), &(stack[((hsi*36+6216)*1+lsi)*1]), &(stack[((hsi*36+6397)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1885)*1+lsi)*1]),&(stack[((hsi*45+6514)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1870)*1+lsi)*1]),&(stack[((hsi*15+5350)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1849)*1+lsi)*1]),&(stack[((hsi*21+5386)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1821)*1+lsi)*1]),&(stack[((hsi*28+5435)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1785)*1+lsi)*1]),&(stack[((hsi*36+5499)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6559)*1+lsi)*1]), &(stack[((hsi*36+5499)*1+lsi)*1]), &(stack[((hsi*28+5435)*1+lsi)*1]), &(stack[((hsi*36+6397)*1+lsi)*1]), &(stack[((hsi*36+6361)*1+lsi)*1]), &(stack[((hsi*36+6478)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1740)*1+lsi)*1]),&(stack[((hsi*45+6559)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1725)*1+lsi)*1]),&(stack[((hsi*15+4977)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1704)*1+lsi)*1]),&(stack[((hsi*21+5022)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1676)*1+lsi)*1]),&(stack[((hsi*28+5113)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1640)*1+lsi)*1]),&(stack[((hsi*36+5233)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6604)*1+lsi)*1]), &(stack[((hsi*36+5233)*1+lsi)*1]), &(stack[((hsi*28+5113)*1+lsi)*1]), &(stack[((hsi*36+6216)*1+lsi)*1]), &(stack[((hsi*36+6252)*1+lsi)*1]), &(stack[((hsi*36+6478)*1+lsi)*1]), &(stack[((hsi*36+6361)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1595)*1+lsi)*1]),&(stack[((hsi*45+6604)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1580)*1+lsi)*1]),&(stack[((hsi*15+4432)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1559)*1+lsi)*1]),&(stack[((hsi*21+4513)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1531)*1+lsi)*1]),&(stack[((hsi*28+4640)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1495)*1+lsi)*1]),&(stack[((hsi*36+4809)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6649)*1+lsi)*1]), &(stack[((hsi*36+4809)*1+lsi)*1]), &(stack[((hsi*28+4640)*1+lsi)*1]), &(stack[((hsi*36+6361)*1+lsi)*1]), &(stack[((hsi*36+6397)*1+lsi)*1]), &(stack[((hsi*36+6216)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1450)*1+lsi)*1]),&(stack[((hsi*45+6649)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1435)*1+lsi)*1]),&(stack[((hsi*15+3747)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1414)*1+lsi)*1]),&(stack[((hsi*21+3848)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1386)*1+lsi)*1]),&(stack[((hsi*28+4000)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1350)*1+lsi)*1]),&(stack[((hsi*36+4205)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6694)*1+lsi)*1]), &(stack[((hsi*36+4205)*1+lsi)*1]), &(stack[((hsi*28+4000)*1+lsi)*1]), &(stack[((hsi*36+6216)*1+lsi)*1]), &(stack[((hsi*36+6252)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1305)*1+lsi)*1]),&(stack[((hsi*45+6694)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1290)*1+lsi)*1]),&(stack[((hsi*15+3818)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1269)*1+lsi)*1]),&(stack[((hsi*21+3958)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1241)*1+lsi)*1]),&(stack[((hsi*28+4149)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1205)*1+lsi)*1]),&(stack[((hsi*36+6252)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6739)*1+lsi)*1]), &(stack[((hsi*21+6139)*1+lsi)*1]), &(stack[((hsi*15+4092)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6767)*1+lsi)*1]), &(stack[((hsi*28+6188)*1+lsi)*1]), &(stack[((hsi*21+4107)*1+lsi)*1]), &(stack[((hsi*28+6739)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6803)*1+lsi)*1]), &(stack[((hsi*28+6160)*1+lsi)*1]), &(stack[((hsi*21+4128)*1+lsi)*1]), &(stack[((hsi*28+6739)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6839)*1+lsi)*1]), &(stack[((hsi*36+6252)*1+lsi)*1]), &(stack[((hsi*28+4149)*1+lsi)*1]), &(stack[((hsi*36+6803)*1+lsi)*1]), &(stack[((hsi*36+6767)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1160)*1+lsi)*1]),&(stack[((hsi*45+6839)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1145)*1+lsi)*1]),&(stack[((hsi*15+4483)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1124)*1+lsi)*1]),&(stack[((hsi*21+4598)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1096)*1+lsi)*1]),&(stack[((hsi*28+4753)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1060)*1+lsi)*1]),&(stack[((hsi*36+6397)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6884)*1+lsi)*1]), &(stack[((hsi*28+6333)*1+lsi)*1]), &(stack[((hsi*21+4732)*1+lsi)*1]), &(stack[((hsi*28+6739)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6920)*1+lsi)*1]), &(stack[((hsi*36+6397)*1+lsi)*1]), &(stack[((hsi*28+4753)*1+lsi)*1]), &(stack[((hsi*36+6884)*1+lsi)*1]), &(stack[((hsi*36+6803)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1015)*1+lsi)*1]),&(stack[((hsi*45+6920)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1000)*1+lsi)*1]),&(stack[((hsi*15+5007)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+979)*1+lsi)*1]),&(stack[((hsi*21+5092)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+951)*1+lsi)*1]),&(stack[((hsi*28+5205)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+915)*1+lsi)*1]),&(stack[((hsi*36+6478)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6965)*1+lsi)*1]), &(stack[((hsi*36+6478)*1+lsi)*1]), &(stack[((hsi*28+5205)*1+lsi)*1]), &(stack[((hsi*36+6803)*1+lsi)*1]), &(stack[((hsi*36+6767)*1+lsi)*1]), &(stack[((hsi*36+6884)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+870)*1+lsi)*1]),&(stack[((hsi*45+6965)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+855)*1+lsi)*1]),&(stack[((hsi*15+4498)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+834)*1+lsi)*1]),&(stack[((hsi*21+4619)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+806)*1+lsi)*1]),&(stack[((hsi*28+4781)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+770)*1+lsi)*1]),&(stack[((hsi*36+6361)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7010)*1+lsi)*1]), &(stack[((hsi*36+6361)*1+lsi)*1]), &(stack[((hsi*28+4781)*1+lsi)*1]), &(stack[((hsi*36+6884)*1+lsi)*1]), &(stack[((hsi*36+6767)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+725)*1+lsi)*1]),&(stack[((hsi*45+7010)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+710)*1+lsi)*1]),&(stack[((hsi*15+3833)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+689)*1+lsi)*1]),&(stack[((hsi*21+3979)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+661)*1+lsi)*1]),&(stack[((hsi*28+4177)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+625)*1+lsi)*1]),&(stack[((hsi*36+6216)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7055)*1+lsi)*1]), &(stack[((hsi*36+6216)*1+lsi)*1]), &(stack[((hsi*28+4177)*1+lsi)*1]), &(stack[((hsi*36+6767)*1+lsi)*1]), &(stack[((hsi*36+6803)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+580)*1+lsi)*1]),&(stack[((hsi*45+7055)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+565)*1+lsi)*1]),&(stack[((hsi*15+3943)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+544)*1+lsi)*1]),&(stack[((hsi*21+4128)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+516)*1+lsi)*1]),&(stack[((hsi*28+6160)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+480)*1+lsi)*1]),&(stack[((hsi*36+6803)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7100)*1+lsi)*1]), &(stack[((hsi*28+6739)*1+lsi)*1]), &(stack[((hsi*21+6139)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7136)*1+lsi)*1]), &(stack[((hsi*36+6803)*1+lsi)*1]), &(stack[((hsi*28+6160)*1+lsi)*1]), &(stack[((hsi*36+7100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+435)*1+lsi)*1]),&(stack[((hsi*45+7136)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+420)*1+lsi)*1]),&(stack[((hsi*15+4583)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+399)*1+lsi)*1]),&(stack[((hsi*21+4732)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+371)*1+lsi)*1]),&(stack[((hsi*28+6333)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+335)*1+lsi)*1]),&(stack[((hsi*36+6884)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7181)*1+lsi)*1]), &(stack[((hsi*36+6884)*1+lsi)*1]), &(stack[((hsi*28+6333)*1+lsi)*1]), &(stack[((hsi*36+7100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+290)*1+lsi)*1]),&(stack[((hsi*45+7181)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+275)*1+lsi)*1]),&(stack[((hsi*15+3928)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+254)*1+lsi)*1]),&(stack[((hsi*21+4107)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+226)*1+lsi)*1]),&(stack[((hsi*28+6188)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+190)*1+lsi)*1]),&(stack[((hsi*36+6767)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7226)*1+lsi)*1]), &(stack[((hsi*36+6767)*1+lsi)*1]), &(stack[((hsi*28+6188)*1+lsi)*1]), &(stack[((hsi*36+7100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+145)*1+lsi)*1]),&(stack[((hsi*45+7226)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+130)*1+lsi)*1]),&(stack[((hsi*15+4092)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+109)*1+lsi)*1]),&(stack[((hsi*21+6139)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+81)*1+lsi)*1]),&(stack[((hsi*28+6739)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+7100)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7271)*1+lsi)*1]), &(stack[((hsi*36+7100)*1+lsi)*1]), &(stack[((hsi*28+6739)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+7271)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3625 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
