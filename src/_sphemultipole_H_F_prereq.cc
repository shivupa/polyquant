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
void _sphemultipole_H_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3250)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3253)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3256)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3259)*1+lsi)*1]), &(stack[((hsi*3+3250)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+3256)*1+lsi)*1]), &(stack[((hsi*3+3253)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3265)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3268)*1+lsi)*1]), &(stack[((hsi*3+3253)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+3265)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3274)*1+lsi)*1]), &(stack[((hsi*3+3256)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+3265)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3280)*1+lsi)*1]), &(stack[((hsi*6+3259)*1+lsi)*1]), &(stack[((hsi*3+3250)*1+lsi)*1]), &(stack[((hsi*6+3274)*1+lsi)*1]), &(stack[((hsi*6+3268)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3290)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*3+3290)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+3253)*1+lsi)*1]), &(stack[((hsi*3+3256)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3299)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*3+3290)*1+lsi)*1]), &(stack[((hsi*6+3268)*1+lsi)*1]), &(stack[((hsi*6+3274)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3309)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3312)*1+lsi)*1]), &(stack[((hsi*3+3309)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+3290)*1+lsi)*1]), &(stack[((hsi*3+3250)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3318)*1+lsi)*1]), &(stack[((hsi*6+3312)*1+lsi)*1]), &(stack[((hsi*3+3309)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*6+3259)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3328)*1+lsi)*1]), &(stack[((hsi*10+3318)*1+lsi)*1]), &(stack[((hsi*6+3312)*1+lsi)*1]), &(stack[((hsi*10+3299)*1+lsi)*1]), &(stack[((hsi*10+3280)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3343)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3346)*1+lsi)*1]), &(stack[((hsi*3+3343)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+3250)*1+lsi)*1]), &(stack[((hsi*3+3290)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3352)*1+lsi)*1]), &(stack[((hsi*6+3346)*1+lsi)*1]), &(stack[((hsi*3+3343)*1+lsi)*1]), &(stack[((hsi*6+3259)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3362)*1+lsi)*1]), &(stack[((hsi*10+3352)*1+lsi)*1]), &(stack[((hsi*6+3346)*1+lsi)*1]), &(stack[((hsi*10+3280)*1+lsi)*1]), &(stack[((hsi*10+3299)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3377)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3380)*1+lsi)*1]), &(stack[((hsi*3+3377)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+3343)*1+lsi)*1]), &(stack[((hsi*3+3309)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3386)*1+lsi)*1]), &(stack[((hsi*6+3380)*1+lsi)*1]), &(stack[((hsi*3+3377)*1+lsi)*1]), &(stack[((hsi*6+3346)*1+lsi)*1]), &(stack[((hsi*6+3312)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3396)*1+lsi)*1]), &(stack[((hsi*10+3386)*1+lsi)*1]), &(stack[((hsi*6+3380)*1+lsi)*1]), &(stack[((hsi*10+3352)*1+lsi)*1]), &(stack[((hsi*10+3318)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3411)*1+lsi)*1]), &(stack[((hsi*15+3396)*1+lsi)*1]), &(stack[((hsi*10+3386)*1+lsi)*1]), &(stack[((hsi*15+3362)*1+lsi)*1]), &(stack[((hsi*15+3328)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3229)*1+lsi)*1]),&(stack[((hsi*21+3411)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*3+3265)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*6+3268)*1+lsi)*1]), &(stack[((hsi*3+3253)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3432)*1+lsi)*1]), &(stack[((hsi*6+3274)*1+lsi)*1]), &(stack[((hsi*3+3256)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3442)*1+lsi)*1]), &(stack[((hsi*10+3280)*1+lsi)*1]), &(stack[((hsi*6+3259)*1+lsi)*1]), &(stack[((hsi*10+3432)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3457)*1+lsi)*1]), &(stack[((hsi*10+3299)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*10+3432)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3472)*1+lsi)*1]), &(stack[((hsi*15+3328)*1+lsi)*1]), &(stack[((hsi*10+3318)*1+lsi)*1]), &(stack[((hsi*15+3457)*1+lsi)*1]), &(stack[((hsi*15+3442)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3493)*1+lsi)*1]), &(stack[((hsi*15+3362)*1+lsi)*1]), &(stack[((hsi*10+3352)*1+lsi)*1]), &(stack[((hsi*15+3442)*1+lsi)*1]), &(stack[((hsi*15+3457)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3514)*1+lsi)*1]), &(stack[((hsi*21+3411)*1+lsi)*1]), &(stack[((hsi*15+3396)*1+lsi)*1]), &(stack[((hsi*21+3493)*1+lsi)*1]), &(stack[((hsi*21+3472)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3201)*1+lsi)*1]),&(stack[((hsi*28+3514)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3393)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*3+3265)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3542)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*6+3268)*1+lsi)*1]), &(stack[((hsi*10+3393)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3557)*1+lsi)*1]), &(stack[((hsi*10+3432)*1+lsi)*1]), &(stack[((hsi*6+3274)*1+lsi)*1]), &(stack[((hsi*10+3393)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*15+3442)*1+lsi)*1]), &(stack[((hsi*10+3280)*1+lsi)*1]), &(stack[((hsi*15+3557)*1+lsi)*1]), &(stack[((hsi*15+3542)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3593)*1+lsi)*1]), &(stack[((hsi*15+3457)*1+lsi)*1]), &(stack[((hsi*10+3299)*1+lsi)*1]), &(stack[((hsi*15+3542)*1+lsi)*1]), &(stack[((hsi*15+3557)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3614)*1+lsi)*1]), &(stack[((hsi*21+3472)*1+lsi)*1]), &(stack[((hsi*15+3328)*1+lsi)*1]), &(stack[((hsi*21+3593)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*21+3493)*1+lsi)*1]), &(stack[((hsi*15+3362)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*21+3593)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3670)*1+lsi)*1]), &(stack[((hsi*28+3514)*1+lsi)*1]), &(stack[((hsi*21+3411)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*28+3614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3165)*1+lsi)*1]),&(stack[((hsi*36+3670)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3706)*1+lsi)*1]), &(stack[((hsi*10+3393)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*15+3542)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*15+3706)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3742)*1+lsi)*1]), &(stack[((hsi*15+3557)*1+lsi)*1]), &(stack[((hsi*10+3432)*1+lsi)*1]), &(stack[((hsi*15+3706)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3763)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*15+3442)*1+lsi)*1]), &(stack[((hsi*21+3742)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3791)*1+lsi)*1]), &(stack[((hsi*21+3593)*1+lsi)*1]), &(stack[((hsi*15+3457)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*21+3742)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3819)*1+lsi)*1]), &(stack[((hsi*28+3614)*1+lsi)*1]), &(stack[((hsi*21+3472)*1+lsi)*1]), &(stack[((hsi*28+3791)*1+lsi)*1]), &(stack[((hsi*28+3763)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3855)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*21+3493)*1+lsi)*1]), &(stack[((hsi*28+3763)*1+lsi)*1]), &(stack[((hsi*28+3791)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3891)*1+lsi)*1]), &(stack[((hsi*36+3670)*1+lsi)*1]), &(stack[((hsi*28+3514)*1+lsi)*1]), &(stack[((hsi*36+3855)*1+lsi)*1]), &(stack[((hsi*36+3819)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3120)*1+lsi)*1]),&(stack[((hsi*45+3891)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3403)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3406)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3939)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]), &(stack[((hsi*3+3290)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3945)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3948)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+3945)*1+lsi)*1]), &(stack[((hsi*3+3256)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3954)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+3945)*1+lsi)*1]), &(stack[((hsi*3+3253)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*6+3939)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*6+3954)*1+lsi)*1]), &(stack[((hsi*6+3948)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+3265)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3976)*1+lsi)*1]), &(stack[((hsi*6+3948)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*6+3274)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3986)*1+lsi)*1]), &(stack[((hsi*6+3954)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*6+3268)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3996)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*6+3939)*1+lsi)*1]), &(stack[((hsi*10+3986)*1+lsi)*1]), &(stack[((hsi*10+3976)*1+lsi)*1]), &(stack[((hsi*10+3299)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3265)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4011)*1+lsi)*1]), &(stack[((hsi*3+3265)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+3406)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*3+3250)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4017)*1+lsi)*1]), &(stack[((hsi*6+4011)*1+lsi)*1]), &(stack[((hsi*3+3265)*1+lsi)*1]), &(stack[((hsi*6+3948)*1+lsi)*1]), &(stack[((hsi*6+3954)*1+lsi)*1]), &(stack[((hsi*6+3259)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4027)*1+lsi)*1]), &(stack[((hsi*10+4017)*1+lsi)*1]), &(stack[((hsi*6+4011)*1+lsi)*1]), &(stack[((hsi*10+3976)*1+lsi)*1]), &(stack[((hsi*10+3986)*1+lsi)*1]), &(stack[((hsi*10+3280)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4042)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4045)*1+lsi)*1]), &(stack[((hsi*3+4042)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+3265)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*3+3343)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4051)*1+lsi)*1]), &(stack[((hsi*6+4045)*1+lsi)*1]), &(stack[((hsi*3+4042)*1+lsi)*1]), &(stack[((hsi*6+4011)*1+lsi)*1]), &(stack[((hsi*6+3939)*1+lsi)*1]), &(stack[((hsi*6+3346)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4061)*1+lsi)*1]), &(stack[((hsi*10+4051)*1+lsi)*1]), &(stack[((hsi*6+4045)*1+lsi)*1]), &(stack[((hsi*10+4017)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*10+3352)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4076)*1+lsi)*1]), &(stack[((hsi*15+4061)*1+lsi)*1]), &(stack[((hsi*10+4051)*1+lsi)*1]), &(stack[((hsi*15+4027)*1+lsi)*1]), &(stack[((hsi*15+3996)*1+lsi)*1]), &(stack[((hsi*15+3362)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3099)*1+lsi)*1]),&(stack[((hsi*21+4076)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4097)*1+lsi)*1]), &(stack[((hsi*10+3976)*1+lsi)*1]), &(stack[((hsi*6+3948)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*10+3432)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4112)*1+lsi)*1]), &(stack[((hsi*10+3986)*1+lsi)*1]), &(stack[((hsi*6+3954)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4127)*1+lsi)*1]), &(stack[((hsi*15+3996)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*15+4112)*1+lsi)*1]), &(stack[((hsi*15+4097)*1+lsi)*1]), &(stack[((hsi*15+3457)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4148)*1+lsi)*1]), &(stack[((hsi*15+4027)*1+lsi)*1]), &(stack[((hsi*10+4017)*1+lsi)*1]), &(stack[((hsi*15+4097)*1+lsi)*1]), &(stack[((hsi*15+4112)*1+lsi)*1]), &(stack[((hsi*15+3442)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4169)*1+lsi)*1]), &(stack[((hsi*21+4076)*1+lsi)*1]), &(stack[((hsi*15+4061)*1+lsi)*1]), &(stack[((hsi*21+4148)*1+lsi)*1]), &(stack[((hsi*21+4127)*1+lsi)*1]), &(stack[((hsi*21+3493)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3071)*1+lsi)*1]),&(stack[((hsi*28+4169)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4052)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*10+3393)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*15+4097)*1+lsi)*1]), &(stack[((hsi*10+3976)*1+lsi)*1]), &(stack[((hsi*15+4052)*1+lsi)*1]), &(stack[((hsi*15+3557)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4112)*1+lsi)*1]), &(stack[((hsi*10+3986)*1+lsi)*1]), &(stack[((hsi*15+4052)*1+lsi)*1]), &(stack[((hsi*15+3542)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*21+4127)*1+lsi)*1]), &(stack[((hsi*15+3996)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*21+3593)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4267)*1+lsi)*1]), &(stack[((hsi*21+4148)*1+lsi)*1]), &(stack[((hsi*15+4027)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4295)*1+lsi)*1]), &(stack[((hsi*28+4169)*1+lsi)*1]), &(stack[((hsi*21+4076)*1+lsi)*1]), &(stack[((hsi*28+4267)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3035)*1+lsi)*1]),&(stack[((hsi*36+4295)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4331)*1+lsi)*1]), &(stack[((hsi*15+4052)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*15+3706)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4352)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*15+4097)*1+lsi)*1]), &(stack[((hsi*21+4331)*1+lsi)*1]), &(stack[((hsi*21+3742)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*15+4112)*1+lsi)*1]), &(stack[((hsi*21+4331)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*21+4127)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*28+4352)*1+lsi)*1]), &(stack[((hsi*28+3791)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4444)*1+lsi)*1]), &(stack[((hsi*28+4267)*1+lsi)*1]), &(stack[((hsi*21+4148)*1+lsi)*1]), &(stack[((hsi*28+4352)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*28+3763)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4480)*1+lsi)*1]), &(stack[((hsi*36+4295)*1+lsi)*1]), &(stack[((hsi*28+4169)*1+lsi)*1]), &(stack[((hsi*36+4444)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*36+3855)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2990)*1+lsi)*1]),&(stack[((hsi*45+4480)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4067)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3377)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4070)*1+lsi)*1]), &(stack[((hsi*3+4067)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+3290)*1+lsi)*1]), &(stack[((hsi*3+3250)*1+lsi)*1]), &(stack[((hsi*3+3377)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3377)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+3256)*1+lsi)*1]), &(stack[((hsi*3+3253)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4531)*1+lsi)*1]), &(stack[((hsi*6+4070)*1+lsi)*1]), &(stack[((hsi*3+4067)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*6+3259)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*6+3954)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4541)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3377)*1+lsi)*1]), &(stack[((hsi*6+3274)*1+lsi)*1]), &(stack[((hsi*6+3268)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4551)*1+lsi)*1]), &(stack[((hsi*10+4531)*1+lsi)*1]), &(stack[((hsi*6+4070)*1+lsi)*1]), &(stack[((hsi*10+3299)*1+lsi)*1]), &(stack[((hsi*10+3280)*1+lsi)*1]), &(stack[((hsi*10+4541)*1+lsi)*1]), &(stack[((hsi*10+3986)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3380)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*3+3380)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+3250)*1+lsi)*1]), &(stack[((hsi*3+3377)*1+lsi)*1]), &(stack[((hsi*3+3290)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3268)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*3+3380)*1+lsi)*1]), &(stack[((hsi*6+3259)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*6+3948)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3250)*1+lsi)*1]), &(stack[((hsi*10+3268)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*10+3280)*1+lsi)*1]), &(stack[((hsi*10+4541)*1+lsi)*1]), &(stack[((hsi*10+3299)*1+lsi)*1]), &(stack[((hsi*10+3976)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3945)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3278)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+3343)*1+lsi)*1]), &(stack[((hsi*3+3380)*1+lsi)*1]), &(stack[((hsi*3+3309)*1+lsi)*1]), &(stack[((hsi*3+4067)*1+lsi)*1]), &(stack[((hsi*3+3265)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3284)*1+lsi)*1]), &(stack[((hsi*6+3278)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(stack[((hsi*6+3346)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*6+3312)*1+lsi)*1]), &(stack[((hsi*6+4070)*1+lsi)*1]), &(stack[((hsi*6+4011)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3294)*1+lsi)*1]), &(stack[((hsi*10+3284)*1+lsi)*1]), &(stack[((hsi*6+3278)*1+lsi)*1]), &(stack[((hsi*10+3352)*1+lsi)*1]), &(stack[((hsi*10+3268)*1+lsi)*1]), &(stack[((hsi*10+3318)*1+lsi)*1]), &(stack[((hsi*10+4531)*1+lsi)*1]), &(stack[((hsi*10+4017)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4566)*1+lsi)*1]), &(stack[((hsi*15+3294)*1+lsi)*1]), &(stack[((hsi*10+3284)*1+lsi)*1]), &(stack[((hsi*15+3362)*1+lsi)*1]), &(stack[((hsi*15+3250)*1+lsi)*1]), &(stack[((hsi*15+3328)*1+lsi)*1]), &(stack[((hsi*15+4551)*1+lsi)*1]), &(stack[((hsi*15+4027)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2969)*1+lsi)*1]),&(stack[((hsi*21+4566)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*10+4541)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*10+3432)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4587)*1+lsi)*1]), &(stack[((hsi*15+4551)*1+lsi)*1]), &(stack[((hsi*10+4531)*1+lsi)*1]), &(stack[((hsi*15+3457)*1+lsi)*1]), &(stack[((hsi*15+3442)*1+lsi)*1]), &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*15+4112)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4608)*1+lsi)*1]), &(stack[((hsi*15+3250)*1+lsi)*1]), &(stack[((hsi*10+3268)*1+lsi)*1]), &(stack[((hsi*15+3442)*1+lsi)*1]), &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*15+3457)*1+lsi)*1]), &(stack[((hsi*15+4097)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3432)*1+lsi)*1]), &(stack[((hsi*21+4566)*1+lsi)*1]), &(stack[((hsi*15+3294)*1+lsi)*1]), &(stack[((hsi*21+3493)*1+lsi)*1]), &(stack[((hsi*21+4608)*1+lsi)*1]), &(stack[((hsi*21+3472)*1+lsi)*1]), &(stack[((hsi*21+4587)*1+lsi)*1]), &(stack[((hsi*21+4148)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2941)*1+lsi)*1]),&(stack[((hsi*28+3432)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4629)*1+lsi)*1]), &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*10+4541)*1+lsi)*1]), &(stack[((hsi*15+3557)*1+lsi)*1]), &(stack[((hsi*15+3542)*1+lsi)*1]), &(stack[((hsi*15+4052)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4650)*1+lsi)*1]), &(stack[((hsi*21+4587)*1+lsi)*1]), &(stack[((hsi*15+4551)*1+lsi)*1]), &(stack[((hsi*21+3593)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*21+4629)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4678)*1+lsi)*1]), &(stack[((hsi*21+4608)*1+lsi)*1]), &(stack[((hsi*15+3250)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*21+4629)*1+lsi)*1]), &(stack[((hsi*21+3593)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4706)*1+lsi)*1]), &(stack[((hsi*28+3432)*1+lsi)*1]), &(stack[((hsi*21+4566)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*28+4678)*1+lsi)*1]), &(stack[((hsi*28+3614)*1+lsi)*1]), &(stack[((hsi*28+4650)*1+lsi)*1]), &(stack[((hsi*28+4267)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2905)*1+lsi)*1]),&(stack[((hsi*36+4706)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4742)*1+lsi)*1]), &(stack[((hsi*21+4629)*1+lsi)*1]), &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*21+3742)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*21+4331)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4770)*1+lsi)*1]), &(stack[((hsi*28+4650)*1+lsi)*1]), &(stack[((hsi*21+4587)*1+lsi)*1]), &(stack[((hsi*28+3791)*1+lsi)*1]), &(stack[((hsi*28+3763)*1+lsi)*1]), &(stack[((hsi*28+4742)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4806)*1+lsi)*1]), &(stack[((hsi*28+4678)*1+lsi)*1]), &(stack[((hsi*21+4608)*1+lsi)*1]), &(stack[((hsi*28+3763)*1+lsi)*1]), &(stack[((hsi*28+4742)*1+lsi)*1]), &(stack[((hsi*28+3791)*1+lsi)*1]), &(stack[((hsi*28+4352)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4842)*1+lsi)*1]), &(stack[((hsi*36+4706)*1+lsi)*1]), &(stack[((hsi*28+3432)*1+lsi)*1]), &(stack[((hsi*36+3855)*1+lsi)*1]), &(stack[((hsi*36+4806)*1+lsi)*1]), &(stack[((hsi*36+3819)*1+lsi)*1]), &(stack[((hsi*36+4770)*1+lsi)*1]), &(stack[((hsi*36+4444)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2860)*1+lsi)*1]),&(stack[((hsi*45+4842)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3945)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+3406)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*3+3377)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(stack[((hsi*6+3948)*1+lsi)*1]), &(stack[((hsi*6+3954)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*10+3976)*1+lsi)*1]), &(stack[((hsi*10+3986)*1+lsi)*1]), &(stack[((hsi*10+4541)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+3265)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*3+3380)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*6+4011)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*6+3939)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3976)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*10+4017)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*10+3268)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4902)*1+lsi)*1]), &(stack[((hsi*15+3976)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*15+4027)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*15+3996)*1+lsi)*1]), &(stack[((hsi*15+3250)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2839)*1+lsi)*1]),&(stack[((hsi*21+4902)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4923)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*15+4097)*1+lsi)*1]), &(stack[((hsi*15+4112)*1+lsi)*1]), &(stack[((hsi*15+3278)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4097)*1+lsi)*1]), &(stack[((hsi*21+4902)*1+lsi)*1]), &(stack[((hsi*15+3976)*1+lsi)*1]), &(stack[((hsi*21+4148)*1+lsi)*1]), &(stack[((hsi*21+4923)*1+lsi)*1]), &(stack[((hsi*21+4127)*1+lsi)*1]), &(stack[((hsi*21+4608)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2811)*1+lsi)*1]),&(stack[((hsi*28+4097)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4944)*1+lsi)*1]), &(stack[((hsi*21+4923)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*21+4629)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4972)*1+lsi)*1]), &(stack[((hsi*28+4097)*1+lsi)*1]), &(stack[((hsi*21+4902)*1+lsi)*1]), &(stack[((hsi*28+4267)*1+lsi)*1]), &(stack[((hsi*28+4944)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*28+4678)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2775)*1+lsi)*1]),&(stack[((hsi*36+4972)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5008)*1+lsi)*1]), &(stack[((hsi*28+4944)*1+lsi)*1]), &(stack[((hsi*21+4923)*1+lsi)*1]), &(stack[((hsi*28+4352)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*28+4742)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5044)*1+lsi)*1]), &(stack[((hsi*36+4972)*1+lsi)*1]), &(stack[((hsi*28+4097)*1+lsi)*1]), &(stack[((hsi*36+4444)*1+lsi)*1]), &(stack[((hsi*36+5008)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*36+4806)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2730)*1+lsi)*1]),&(stack[((hsi*45+5044)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+3380)*1+lsi)*1]), &(stack[((hsi*3+4067)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*6+4070)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*10+3268)*1+lsi)*1]), &(stack[((hsi*10+4531)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5089)*1+lsi)*1]), &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*15+3250)*1+lsi)*1]), &(stack[((hsi*15+4551)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2709)*1+lsi)*1]),&(stack[((hsi*21+5089)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5110)*1+lsi)*1]), &(stack[((hsi*21+5089)*1+lsi)*1]), &(stack[((hsi*15+3278)*1+lsi)*1]), &(stack[((hsi*21+4608)*1+lsi)*1]), &(stack[((hsi*21+4587)*1+lsi)*1]), &(stack[((hsi*21+4923)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2681)*1+lsi)*1]),&(stack[((hsi*28+5110)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5138)*1+lsi)*1]), &(stack[((hsi*28+5110)*1+lsi)*1]), &(stack[((hsi*21+5089)*1+lsi)*1]), &(stack[((hsi*28+4678)*1+lsi)*1]), &(stack[((hsi*28+4650)*1+lsi)*1]), &(stack[((hsi*28+4944)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2645)*1+lsi)*1]),&(stack[((hsi*36+5138)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5174)*1+lsi)*1]), &(stack[((hsi*36+5138)*1+lsi)*1]), &(stack[((hsi*28+5110)*1+lsi)*1]), &(stack[((hsi*36+4806)*1+lsi)*1]), &(stack[((hsi*36+4770)*1+lsi)*1]), &(stack[((hsi*36+5008)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2600)*1+lsi)*1]),&(stack[((hsi*45+5174)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*3+3265)*1+lsi)*1]), &(stack[((hsi*3+3945)*1+lsi)*1]), &(stack[((hsi*3+4067)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*6+3939)*1+lsi)*1]), &(stack[((hsi*6+4011)*1+lsi)*1]), &(stack[((hsi*6+3293)*1+lsi)*1]), &(stack[((hsi*6+4070)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3945)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*10+4017)*1+lsi)*1]), &(stack[((hsi*10+3383)*1+lsi)*1]), &(stack[((hsi*10+4531)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3278)*1+lsi)*1]), &(stack[((hsi*15+3945)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*15+3996)*1+lsi)*1]), &(stack[((hsi*15+4027)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*15+4551)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2579)*1+lsi)*1]),&(stack[((hsi*21+3278)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5219)*1+lsi)*1]), &(stack[((hsi*21+3278)*1+lsi)*1]), &(stack[((hsi*15+3945)*1+lsi)*1]), &(stack[((hsi*21+4127)*1+lsi)*1]), &(stack[((hsi*21+4148)*1+lsi)*1]), &(stack[((hsi*21+4923)*1+lsi)*1]), &(stack[((hsi*21+4587)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2551)*1+lsi)*1]),&(stack[((hsi*28+5219)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5247)*1+lsi)*1]), &(stack[((hsi*28+5219)*1+lsi)*1]), &(stack[((hsi*21+3278)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*28+4267)*1+lsi)*1]), &(stack[((hsi*28+4944)*1+lsi)*1]), &(stack[((hsi*28+4650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2515)*1+lsi)*1]),&(stack[((hsi*36+5247)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5283)*1+lsi)*1]), &(stack[((hsi*36+5247)*1+lsi)*1]), &(stack[((hsi*28+5219)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*36+4444)*1+lsi)*1]), &(stack[((hsi*36+5008)*1+lsi)*1]), &(stack[((hsi*36+4770)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2470)*1+lsi)*1]),&(stack[((hsi*45+5283)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+3309)*1+lsi)*1]), &(stack[((hsi*3+4067)*1+lsi)*1]), &(stack[((hsi*3+3343)*1+lsi)*1]), &(stack[((hsi*3+3380)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*6+3312)*1+lsi)*1]), &(stack[((hsi*6+4070)*1+lsi)*1]), &(stack[((hsi*6+3346)*1+lsi)*1]), &(stack[((hsi*6+3970)*1+lsi)*1]), &(stack[((hsi*6+3939)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+4525)*1+lsi)*1]), &(stack[((hsi*10+3318)*1+lsi)*1]), &(stack[((hsi*10+4531)*1+lsi)*1]), &(stack[((hsi*10+3352)*1+lsi)*1]), &(stack[((hsi*10+3268)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3970)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*15+3328)*1+lsi)*1]), &(stack[((hsi*15+4551)*1+lsi)*1]), &(stack[((hsi*15+3362)*1+lsi)*1]), &(stack[((hsi*15+3250)*1+lsi)*1]), &(stack[((hsi*15+3996)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2449)*1+lsi)*1]),&(stack[((hsi*21+3970)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4525)*1+lsi)*1]), &(stack[((hsi*21+3970)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*21+3472)*1+lsi)*1]), &(stack[((hsi*21+4587)*1+lsi)*1]), &(stack[((hsi*21+3493)*1+lsi)*1]), &(stack[((hsi*21+4608)*1+lsi)*1]), &(stack[((hsi*21+4127)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2421)*1+lsi)*1]),&(stack[((hsi*28+4525)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5328)*1+lsi)*1]), &(stack[((hsi*28+4525)*1+lsi)*1]), &(stack[((hsi*21+3970)*1+lsi)*1]), &(stack[((hsi*28+3614)*1+lsi)*1]), &(stack[((hsi*28+4650)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*28+4678)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2385)*1+lsi)*1]),&(stack[((hsi*36+5328)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5364)*1+lsi)*1]), &(stack[((hsi*36+5328)*1+lsi)*1]), &(stack[((hsi*28+4525)*1+lsi)*1]), &(stack[((hsi*36+3819)*1+lsi)*1]), &(stack[((hsi*36+4770)*1+lsi)*1]), &(stack[((hsi*36+3855)*1+lsi)*1]), &(stack[((hsi*36+4806)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2340)*1+lsi)*1]),&(stack[((hsi*45+5364)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*3+3265)*1+lsi)*1]), &(stack[((hsi*3+3309)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*3+3936)*1+lsi)*1]), &(stack[((hsi*6+3939)*1+lsi)*1]), &(stack[((hsi*6+4011)*1+lsi)*1]), &(stack[((hsi*6+3312)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*10+3960)*1+lsi)*1]), &(stack[((hsi*10+4017)*1+lsi)*1]), &(stack[((hsi*10+3318)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3936)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+4042)*1+lsi)*1]), &(stack[((hsi*15+3996)*1+lsi)*1]), &(stack[((hsi*15+4027)*1+lsi)*1]), &(stack[((hsi*15+3328)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2319)*1+lsi)*1]),&(stack[((hsi*21+3936)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3250)*1+lsi)*1]), &(stack[((hsi*21+3936)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*21+4127)*1+lsi)*1]), &(stack[((hsi*21+4148)*1+lsi)*1]), &(stack[((hsi*21+3472)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2291)*1+lsi)*1]),&(stack[((hsi*28+3250)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3991)*1+lsi)*1]), &(stack[((hsi*28+3250)*1+lsi)*1]), &(stack[((hsi*21+3936)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*28+4267)*1+lsi)*1]), &(stack[((hsi*28+3614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2255)*1+lsi)*1]),&(stack[((hsi*36+3991)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5409)*1+lsi)*1]), &(stack[((hsi*36+3991)*1+lsi)*1]), &(stack[((hsi*28+3250)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*36+4444)*1+lsi)*1]), &(stack[((hsi*36+3819)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2210)*1+lsi)*1]),&(stack[((hsi*45+5409)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4027)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4030)*1+lsi)*1]), &(stack[((hsi*3+4027)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+3309)*1+lsi)*1]), &(stack[((hsi*3+3343)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3377)*1+lsi)*1]), &(stack[((hsi*6+4030)*1+lsi)*1]), &(stack[((hsi*3+4027)*1+lsi)*1]), &(stack[((hsi*6+3312)*1+lsi)*1]), &(stack[((hsi*6+3346)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+3377)*1+lsi)*1]), &(stack[((hsi*6+4030)*1+lsi)*1]), &(stack[((hsi*10+3318)*1+lsi)*1]), &(stack[((hsi*10+3352)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3299)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*10+3377)*1+lsi)*1]), &(stack[((hsi*15+3328)*1+lsi)*1]), &(stack[((hsi*15+3362)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2189)*1+lsi)*1]),&(stack[((hsi*21+3299)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3320)*1+lsi)*1]), &(stack[((hsi*21+3299)*1+lsi)*1]), &(stack[((hsi*15+4887)*1+lsi)*1]), &(stack[((hsi*21+3472)*1+lsi)*1]), &(stack[((hsi*21+3493)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2161)*1+lsi)*1]),&(stack[((hsi*28+3320)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3348)*1+lsi)*1]), &(stack[((hsi*28+3320)*1+lsi)*1]), &(stack[((hsi*21+3299)*1+lsi)*1]), &(stack[((hsi*28+3614)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2125)*1+lsi)*1]),&(stack[((hsi*36+3348)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5454)*1+lsi)*1]), &(stack[((hsi*36+3348)*1+lsi)*1]), &(stack[((hsi*28+3320)*1+lsi)*1]), &(stack[((hsi*36+3819)*1+lsi)*1]), &(stack[((hsi*36+3855)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2080)*1+lsi)*1]),&(stack[((hsi*45+5454)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2059)*1+lsi)*1]),&(stack[((hsi*21+3493)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2031)*1+lsi)*1]),&(stack[((hsi*28+3642)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1995)*1+lsi)*1]),&(stack[((hsi*36+3855)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4027)*1+lsi)*1]), &(stack[((hsi*15+3706)*1+lsi)*1]), &(stack[((hsi*10+3393)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5499)*1+lsi)*1]), &(stack[((hsi*21+3742)*1+lsi)*1]), &(stack[((hsi*15+3557)*1+lsi)*1]), &(stack[((hsi*21+4027)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5527)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*15+3542)*1+lsi)*1]), &(stack[((hsi*21+4027)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5555)*1+lsi)*1]), &(stack[((hsi*28+3791)*1+lsi)*1]), &(stack[((hsi*21+3593)*1+lsi)*1]), &(stack[((hsi*28+5527)*1+lsi)*1]), &(stack[((hsi*28+5499)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5591)*1+lsi)*1]), &(stack[((hsi*28+3763)*1+lsi)*1]), &(stack[((hsi*21+3572)*1+lsi)*1]), &(stack[((hsi*28+5499)*1+lsi)*1]), &(stack[((hsi*28+5527)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5627)*1+lsi)*1]), &(stack[((hsi*36+3855)*1+lsi)*1]), &(stack[((hsi*28+3642)*1+lsi)*1]), &(stack[((hsi*36+5591)*1+lsi)*1]), &(stack[((hsi*36+5555)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1950)*1+lsi)*1]),&(stack[((hsi*45+5627)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1929)*1+lsi)*1]),&(stack[((hsi*21+4148)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1901)*1+lsi)*1]),&(stack[((hsi*28+4267)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1865)*1+lsi)*1]),&(stack[((hsi*36+4444)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3542)*1+lsi)*1]), &(stack[((hsi*21+4331)*1+lsi)*1]), &(stack[((hsi*15+4052)*1+lsi)*1]), &(stack[((hsi*21+4027)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5672)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*21+4218)*1+lsi)*1]), &(stack[((hsi*28+3542)*1+lsi)*1]), &(stack[((hsi*28+5527)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5708)*1+lsi)*1]), &(stack[((hsi*28+4352)*1+lsi)*1]), &(stack[((hsi*21+4197)*1+lsi)*1]), &(stack[((hsi*28+3542)*1+lsi)*1]), &(stack[((hsi*28+5499)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5744)*1+lsi)*1]), &(stack[((hsi*36+4444)*1+lsi)*1]), &(stack[((hsi*28+4267)*1+lsi)*1]), &(stack[((hsi*36+5708)*1+lsi)*1]), &(stack[((hsi*36+5672)*1+lsi)*1]), &(stack[((hsi*36+5591)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1820)*1+lsi)*1]),&(stack[((hsi*45+5744)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1799)*1+lsi)*1]),&(stack[((hsi*21+4608)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1771)*1+lsi)*1]),&(stack[((hsi*28+4678)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1735)*1+lsi)*1]),&(stack[((hsi*36+4806)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5789)*1+lsi)*1]), &(stack[((hsi*28+4742)*1+lsi)*1]), &(stack[((hsi*21+4629)*1+lsi)*1]), &(stack[((hsi*28+5499)*1+lsi)*1]), &(stack[((hsi*28+5527)*1+lsi)*1]), &(stack[((hsi*28+3542)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5825)*1+lsi)*1]), &(stack[((hsi*36+4806)*1+lsi)*1]), &(stack[((hsi*28+4678)*1+lsi)*1]), &(stack[((hsi*36+5591)*1+lsi)*1]), &(stack[((hsi*36+5789)*1+lsi)*1]), &(stack[((hsi*36+5555)*1+lsi)*1]), &(stack[((hsi*36+5708)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1690)*1+lsi)*1]),&(stack[((hsi*45+5825)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1669)*1+lsi)*1]),&(stack[((hsi*21+4923)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1641)*1+lsi)*1]),&(stack[((hsi*28+4944)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1605)*1+lsi)*1]),&(stack[((hsi*36+5008)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5870)*1+lsi)*1]), &(stack[((hsi*36+5008)*1+lsi)*1]), &(stack[((hsi*28+4944)*1+lsi)*1]), &(stack[((hsi*36+5708)*1+lsi)*1]), &(stack[((hsi*36+5672)*1+lsi)*1]), &(stack[((hsi*36+5789)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1560)*1+lsi)*1]),&(stack[((hsi*45+5870)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1539)*1+lsi)*1]),&(stack[((hsi*21+4587)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1511)*1+lsi)*1]),&(stack[((hsi*28+4650)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1475)*1+lsi)*1]),&(stack[((hsi*36+4770)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5915)*1+lsi)*1]), &(stack[((hsi*36+4770)*1+lsi)*1]), &(stack[((hsi*28+4650)*1+lsi)*1]), &(stack[((hsi*36+5555)*1+lsi)*1]), &(stack[((hsi*36+5591)*1+lsi)*1]), &(stack[((hsi*36+5789)*1+lsi)*1]), &(stack[((hsi*36+5672)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1430)*1+lsi)*1]),&(stack[((hsi*45+5915)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1409)*1+lsi)*1]),&(stack[((hsi*21+4127)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1381)*1+lsi)*1]),&(stack[((hsi*28+4239)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1345)*1+lsi)*1]),&(stack[((hsi*36+4408)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5960)*1+lsi)*1]), &(stack[((hsi*36+4408)*1+lsi)*1]), &(stack[((hsi*28+4239)*1+lsi)*1]), &(stack[((hsi*36+5672)*1+lsi)*1]), &(stack[((hsi*36+5708)*1+lsi)*1]), &(stack[((hsi*36+5555)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1300)*1+lsi)*1]),&(stack[((hsi*45+5960)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1279)*1+lsi)*1]),&(stack[((hsi*21+3472)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1251)*1+lsi)*1]),&(stack[((hsi*28+3614)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1215)*1+lsi)*1]),&(stack[((hsi*36+3819)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6005)*1+lsi)*1]), &(stack[((hsi*36+3819)*1+lsi)*1]), &(stack[((hsi*28+3614)*1+lsi)*1]), &(stack[((hsi*36+5555)*1+lsi)*1]), &(stack[((hsi*36+5591)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1170)*1+lsi)*1]),&(stack[((hsi*45+6005)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1149)*1+lsi)*1]),&(stack[((hsi*21+3572)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1121)*1+lsi)*1]),&(stack[((hsi*28+3763)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1085)*1+lsi)*1]),&(stack[((hsi*36+5591)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4048)*1+lsi)*1]), &(stack[((hsi*21+4027)*1+lsi)*1]), &(stack[((hsi*15+3706)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6050)*1+lsi)*1]), &(stack[((hsi*28+5527)*1+lsi)*1]), &(stack[((hsi*21+3721)*1+lsi)*1]), &(stack[((hsi*28+4048)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6086)*1+lsi)*1]), &(stack[((hsi*28+5499)*1+lsi)*1]), &(stack[((hsi*21+3742)*1+lsi)*1]), &(stack[((hsi*28+4048)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6122)*1+lsi)*1]), &(stack[((hsi*36+5591)*1+lsi)*1]), &(stack[((hsi*28+3763)*1+lsi)*1]), &(stack[((hsi*36+6086)*1+lsi)*1]), &(stack[((hsi*36+6050)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1040)*1+lsi)*1]),&(stack[((hsi*45+6122)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1019)*1+lsi)*1]),&(stack[((hsi*21+4197)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+991)*1+lsi)*1]),&(stack[((hsi*28+4352)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+955)*1+lsi)*1]),&(stack[((hsi*36+5708)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6167)*1+lsi)*1]), &(stack[((hsi*28+3542)*1+lsi)*1]), &(stack[((hsi*21+4331)*1+lsi)*1]), &(stack[((hsi*28+4048)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6203)*1+lsi)*1]), &(stack[((hsi*36+5708)*1+lsi)*1]), &(stack[((hsi*28+4352)*1+lsi)*1]), &(stack[((hsi*36+6167)*1+lsi)*1]), &(stack[((hsi*36+6086)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+910)*1+lsi)*1]),&(stack[((hsi*45+6203)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+889)*1+lsi)*1]),&(stack[((hsi*21+4629)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+861)*1+lsi)*1]),&(stack[((hsi*28+4742)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+825)*1+lsi)*1]),&(stack[((hsi*36+5789)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6248)*1+lsi)*1]), &(stack[((hsi*36+5789)*1+lsi)*1]), &(stack[((hsi*28+4742)*1+lsi)*1]), &(stack[((hsi*36+6086)*1+lsi)*1]), &(stack[((hsi*36+6050)*1+lsi)*1]), &(stack[((hsi*36+6167)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+780)*1+lsi)*1]),&(stack[((hsi*45+6248)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+759)*1+lsi)*1]),&(stack[((hsi*21+4218)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+731)*1+lsi)*1]),&(stack[((hsi*28+4380)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+695)*1+lsi)*1]),&(stack[((hsi*36+5672)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6293)*1+lsi)*1]), &(stack[((hsi*36+5672)*1+lsi)*1]), &(stack[((hsi*28+4380)*1+lsi)*1]), &(stack[((hsi*36+6167)*1+lsi)*1]), &(stack[((hsi*36+6050)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+650)*1+lsi)*1]),&(stack[((hsi*45+6293)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+629)*1+lsi)*1]),&(stack[((hsi*21+3593)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+601)*1+lsi)*1]),&(stack[((hsi*28+3791)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+565)*1+lsi)*1]),&(stack[((hsi*36+5555)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6338)*1+lsi)*1]), &(stack[((hsi*36+5555)*1+lsi)*1]), &(stack[((hsi*28+3791)*1+lsi)*1]), &(stack[((hsi*36+6050)*1+lsi)*1]), &(stack[((hsi*36+6086)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+520)*1+lsi)*1]),&(stack[((hsi*45+6338)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+499)*1+lsi)*1]),&(stack[((hsi*21+3742)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+471)*1+lsi)*1]),&(stack[((hsi*28+5499)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+435)*1+lsi)*1]),&(stack[((hsi*36+6086)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6383)*1+lsi)*1]), &(stack[((hsi*28+4048)*1+lsi)*1]), &(stack[((hsi*21+4027)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6419)*1+lsi)*1]), &(stack[((hsi*36+6086)*1+lsi)*1]), &(stack[((hsi*28+5499)*1+lsi)*1]), &(stack[((hsi*36+6383)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+390)*1+lsi)*1]),&(stack[((hsi*45+6419)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+369)*1+lsi)*1]),&(stack[((hsi*21+4331)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+341)*1+lsi)*1]),&(stack[((hsi*28+3542)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+305)*1+lsi)*1]),&(stack[((hsi*36+6167)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6464)*1+lsi)*1]), &(stack[((hsi*36+6167)*1+lsi)*1]), &(stack[((hsi*28+3542)*1+lsi)*1]), &(stack[((hsi*36+6383)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+260)*1+lsi)*1]),&(stack[((hsi*45+6464)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+239)*1+lsi)*1]),&(stack[((hsi*21+3721)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+211)*1+lsi)*1]),&(stack[((hsi*28+5527)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+175)*1+lsi)*1]),&(stack[((hsi*36+6050)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6509)*1+lsi)*1]), &(stack[((hsi*36+6050)*1+lsi)*1]), &(stack[((hsi*28+5527)*1+lsi)*1]), &(stack[((hsi*36+6383)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+130)*1+lsi)*1]),&(stack[((hsi*45+6509)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+109)*1+lsi)*1]),&(stack[((hsi*21+4027)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+81)*1+lsi)*1]),&(stack[((hsi*28+4048)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+6383)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6554)*1+lsi)*1]), &(stack[((hsi*36+6383)*1+lsi)*1]), &(stack[((hsi*28+4048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+6554)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3250 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
