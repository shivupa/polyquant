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
void _sphemultipole_H_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4625)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4628)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4631)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4634)*1+lsi)*1]), &(stack[((hsi*3+4625)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+4631)*1+lsi)*1]), &(stack[((hsi*3+4628)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4640)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4643)*1+lsi)*1]), &(stack[((hsi*3+4628)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+4640)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4649)*1+lsi)*1]), &(stack[((hsi*3+4631)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+4640)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4655)*1+lsi)*1]), &(stack[((hsi*6+4634)*1+lsi)*1]), &(stack[((hsi*3+4625)*1+lsi)*1]), &(stack[((hsi*6+4649)*1+lsi)*1]), &(stack[((hsi*6+4643)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4665)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4668)*1+lsi)*1]), &(stack[((hsi*3+4665)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+4628)*1+lsi)*1]), &(stack[((hsi*3+4631)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4674)*1+lsi)*1]), &(stack[((hsi*6+4668)*1+lsi)*1]), &(stack[((hsi*3+4665)*1+lsi)*1]), &(stack[((hsi*6+4643)*1+lsi)*1]), &(stack[((hsi*6+4649)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4684)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4687)*1+lsi)*1]), &(stack[((hsi*3+4684)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+4665)*1+lsi)*1]), &(stack[((hsi*3+4625)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4693)*1+lsi)*1]), &(stack[((hsi*6+4687)*1+lsi)*1]), &(stack[((hsi*3+4684)*1+lsi)*1]), &(stack[((hsi*6+4668)*1+lsi)*1]), &(stack[((hsi*6+4634)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4703)*1+lsi)*1]), &(stack[((hsi*10+4693)*1+lsi)*1]), &(stack[((hsi*6+4687)*1+lsi)*1]), &(stack[((hsi*10+4674)*1+lsi)*1]), &(stack[((hsi*10+4655)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4718)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4721)*1+lsi)*1]), &(stack[((hsi*3+4718)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+4625)*1+lsi)*1]), &(stack[((hsi*3+4665)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4727)*1+lsi)*1]), &(stack[((hsi*6+4721)*1+lsi)*1]), &(stack[((hsi*3+4718)*1+lsi)*1]), &(stack[((hsi*6+4634)*1+lsi)*1]), &(stack[((hsi*6+4668)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4737)*1+lsi)*1]), &(stack[((hsi*10+4727)*1+lsi)*1]), &(stack[((hsi*6+4721)*1+lsi)*1]), &(stack[((hsi*10+4655)*1+lsi)*1]), &(stack[((hsi*10+4674)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4752)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4755)*1+lsi)*1]), &(stack[((hsi*3+4752)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+4718)*1+lsi)*1]), &(stack[((hsi*3+4684)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4761)*1+lsi)*1]), &(stack[((hsi*6+4755)*1+lsi)*1]), &(stack[((hsi*3+4752)*1+lsi)*1]), &(stack[((hsi*6+4721)*1+lsi)*1]), &(stack[((hsi*6+4687)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4771)*1+lsi)*1]), &(stack[((hsi*10+4761)*1+lsi)*1]), &(stack[((hsi*6+4755)*1+lsi)*1]), &(stack[((hsi*10+4727)*1+lsi)*1]), &(stack[((hsi*10+4693)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4786)*1+lsi)*1]), &(stack[((hsi*15+4771)*1+lsi)*1]), &(stack[((hsi*10+4761)*1+lsi)*1]), &(stack[((hsi*15+4737)*1+lsi)*1]), &(stack[((hsi*15+4703)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4604)*1+lsi)*1]),&(stack[((hsi*21+4786)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*3+4640)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*6+4643)*1+lsi)*1]), &(stack[((hsi*3+4628)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4807)*1+lsi)*1]), &(stack[((hsi*6+4649)*1+lsi)*1]), &(stack[((hsi*3+4631)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4817)*1+lsi)*1]), &(stack[((hsi*10+4655)*1+lsi)*1]), &(stack[((hsi*6+4634)*1+lsi)*1]), &(stack[((hsi*10+4807)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4832)*1+lsi)*1]), &(stack[((hsi*10+4674)*1+lsi)*1]), &(stack[((hsi*6+4668)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*10+4807)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4847)*1+lsi)*1]), &(stack[((hsi*15+4703)*1+lsi)*1]), &(stack[((hsi*10+4693)*1+lsi)*1]), &(stack[((hsi*15+4832)*1+lsi)*1]), &(stack[((hsi*15+4817)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4868)*1+lsi)*1]), &(stack[((hsi*15+4737)*1+lsi)*1]), &(stack[((hsi*10+4727)*1+lsi)*1]), &(stack[((hsi*15+4817)*1+lsi)*1]), &(stack[((hsi*15+4832)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4889)*1+lsi)*1]), &(stack[((hsi*21+4786)*1+lsi)*1]), &(stack[((hsi*15+4771)*1+lsi)*1]), &(stack[((hsi*21+4868)*1+lsi)*1]), &(stack[((hsi*21+4847)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4576)*1+lsi)*1]),&(stack[((hsi*28+4889)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4768)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*3+4640)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4917)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*6+4643)*1+lsi)*1]), &(stack[((hsi*10+4768)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4932)*1+lsi)*1]), &(stack[((hsi*10+4807)*1+lsi)*1]), &(stack[((hsi*6+4649)*1+lsi)*1]), &(stack[((hsi*10+4768)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4947)*1+lsi)*1]), &(stack[((hsi*15+4817)*1+lsi)*1]), &(stack[((hsi*10+4655)*1+lsi)*1]), &(stack[((hsi*15+4932)*1+lsi)*1]), &(stack[((hsi*15+4917)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4968)*1+lsi)*1]), &(stack[((hsi*15+4832)*1+lsi)*1]), &(stack[((hsi*10+4674)*1+lsi)*1]), &(stack[((hsi*15+4917)*1+lsi)*1]), &(stack[((hsi*15+4932)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4989)*1+lsi)*1]), &(stack[((hsi*21+4847)*1+lsi)*1]), &(stack[((hsi*15+4703)*1+lsi)*1]), &(stack[((hsi*21+4968)*1+lsi)*1]), &(stack[((hsi*21+4947)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5017)*1+lsi)*1]), &(stack[((hsi*21+4868)*1+lsi)*1]), &(stack[((hsi*15+4737)*1+lsi)*1]), &(stack[((hsi*21+4947)*1+lsi)*1]), &(stack[((hsi*21+4968)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5045)*1+lsi)*1]), &(stack[((hsi*28+4889)*1+lsi)*1]), &(stack[((hsi*21+4786)*1+lsi)*1]), &(stack[((hsi*28+5017)*1+lsi)*1]), &(stack[((hsi*28+4989)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4540)*1+lsi)*1]),&(stack[((hsi*36+5045)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5081)*1+lsi)*1]), &(stack[((hsi*10+4768)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*15+4917)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5117)*1+lsi)*1]), &(stack[((hsi*15+4932)*1+lsi)*1]), &(stack[((hsi*10+4807)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5138)*1+lsi)*1]), &(stack[((hsi*21+4947)*1+lsi)*1]), &(stack[((hsi*15+4817)*1+lsi)*1]), &(stack[((hsi*21+5117)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5166)*1+lsi)*1]), &(stack[((hsi*21+4968)*1+lsi)*1]), &(stack[((hsi*15+4832)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*21+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5194)*1+lsi)*1]), &(stack[((hsi*28+4989)*1+lsi)*1]), &(stack[((hsi*21+4847)*1+lsi)*1]), &(stack[((hsi*28+5166)*1+lsi)*1]), &(stack[((hsi*28+5138)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5230)*1+lsi)*1]), &(stack[((hsi*28+5017)*1+lsi)*1]), &(stack[((hsi*21+4868)*1+lsi)*1]), &(stack[((hsi*28+5138)*1+lsi)*1]), &(stack[((hsi*28+5166)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5266)*1+lsi)*1]), &(stack[((hsi*36+5045)*1+lsi)*1]), &(stack[((hsi*28+4889)*1+lsi)*1]), &(stack[((hsi*36+5230)*1+lsi)*1]), &(stack[((hsi*36+5194)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4495)*1+lsi)*1]),&(stack[((hsi*45+5266)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5311)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]), &(stack[((hsi*10+4768)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5332)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*15+4917)*1+lsi)*1]), &(stack[((hsi*21+5311)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5360)*1+lsi)*1]), &(stack[((hsi*21+5117)*1+lsi)*1]), &(stack[((hsi*15+4932)*1+lsi)*1]), &(stack[((hsi*21+5311)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5388)*1+lsi)*1]), &(stack[((hsi*28+5138)*1+lsi)*1]), &(stack[((hsi*21+4947)*1+lsi)*1]), &(stack[((hsi*28+5360)*1+lsi)*1]), &(stack[((hsi*28+5332)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5424)*1+lsi)*1]), &(stack[((hsi*28+5166)*1+lsi)*1]), &(stack[((hsi*21+4968)*1+lsi)*1]), &(stack[((hsi*28+5332)*1+lsi)*1]), &(stack[((hsi*28+5360)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5460)*1+lsi)*1]), &(stack[((hsi*36+5194)*1+lsi)*1]), &(stack[((hsi*28+4989)*1+lsi)*1]), &(stack[((hsi*36+5424)*1+lsi)*1]), &(stack[((hsi*36+5388)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5505)*1+lsi)*1]), &(stack[((hsi*36+5230)*1+lsi)*1]), &(stack[((hsi*28+5017)*1+lsi)*1]), &(stack[((hsi*36+5388)*1+lsi)*1]), &(stack[((hsi*36+5424)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5550)*1+lsi)*1]), &(stack[((hsi*45+5266)*1+lsi)*1]), &(stack[((hsi*36+5045)*1+lsi)*1]), &(stack[((hsi*45+5505)*1+lsi)*1]), &(stack[((hsi*45+5460)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4440)*1+lsi)*1]),&(stack[((hsi*55+5550)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4778)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4781)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5608)*1+lsi)*1]), &(stack[((hsi*3+4778)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*3+4781)*1+lsi)*1]), &(stack[((hsi*3+4665)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5614)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5617)*1+lsi)*1]), &(stack[((hsi*3+4781)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+5614)*1+lsi)*1]), &(stack[((hsi*3+4631)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5623)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+5614)*1+lsi)*1]), &(stack[((hsi*3+4628)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5629)*1+lsi)*1]), &(stack[((hsi*6+5608)*1+lsi)*1]), &(stack[((hsi*3+4778)*1+lsi)*1]), &(stack[((hsi*6+5623)*1+lsi)*1]), &(stack[((hsi*6+5617)*1+lsi)*1]), &(stack[((hsi*6+4668)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+4640)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5645)*1+lsi)*1]), &(stack[((hsi*6+5617)*1+lsi)*1]), &(stack[((hsi*3+4781)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*6+4649)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5655)*1+lsi)*1]), &(stack[((hsi*6+5623)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*6+4643)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5665)*1+lsi)*1]), &(stack[((hsi*10+5629)*1+lsi)*1]), &(stack[((hsi*6+5608)*1+lsi)*1]), &(stack[((hsi*10+5655)*1+lsi)*1]), &(stack[((hsi*10+5645)*1+lsi)*1]), &(stack[((hsi*10+4674)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4640)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5680)*1+lsi)*1]), &(stack[((hsi*3+4640)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+4781)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*3+4625)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5686)*1+lsi)*1]), &(stack[((hsi*6+5680)*1+lsi)*1]), &(stack[((hsi*3+4640)*1+lsi)*1]), &(stack[((hsi*6+5617)*1+lsi)*1]), &(stack[((hsi*6+5623)*1+lsi)*1]), &(stack[((hsi*6+4634)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5696)*1+lsi)*1]), &(stack[((hsi*10+5686)*1+lsi)*1]), &(stack[((hsi*6+5680)*1+lsi)*1]), &(stack[((hsi*10+5645)*1+lsi)*1]), &(stack[((hsi*10+5655)*1+lsi)*1]), &(stack[((hsi*10+4655)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5711)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*3+5711)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+4640)*1+lsi)*1]), &(stack[((hsi*3+4778)*1+lsi)*1]), &(stack[((hsi*3+4718)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5720)*1+lsi)*1]), &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*3+5711)*1+lsi)*1]), &(stack[((hsi*6+5680)*1+lsi)*1]), &(stack[((hsi*6+5608)*1+lsi)*1]), &(stack[((hsi*6+4721)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5730)*1+lsi)*1]), &(stack[((hsi*10+5720)*1+lsi)*1]), &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*10+5686)*1+lsi)*1]), &(stack[((hsi*10+5629)*1+lsi)*1]), &(stack[((hsi*10+4727)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5745)*1+lsi)*1]), &(stack[((hsi*15+5730)*1+lsi)*1]), &(stack[((hsi*10+5720)*1+lsi)*1]), &(stack[((hsi*15+5696)*1+lsi)*1]), &(stack[((hsi*15+5665)*1+lsi)*1]), &(stack[((hsi*15+4737)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4419)*1+lsi)*1]),&(stack[((hsi*21+5745)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5711)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5766)*1+lsi)*1]), &(stack[((hsi*10+5645)*1+lsi)*1]), &(stack[((hsi*6+5617)*1+lsi)*1]), &(stack[((hsi*10+5711)*1+lsi)*1]), &(stack[((hsi*10+4807)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*10+5655)*1+lsi)*1]), &(stack[((hsi*6+5623)*1+lsi)*1]), &(stack[((hsi*10+5711)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*15+5665)*1+lsi)*1]), &(stack[((hsi*10+5629)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*15+5766)*1+lsi)*1]), &(stack[((hsi*15+4832)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5817)*1+lsi)*1]), &(stack[((hsi*15+5696)*1+lsi)*1]), &(stack[((hsi*10+5686)*1+lsi)*1]), &(stack[((hsi*15+5766)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*15+4817)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5838)*1+lsi)*1]), &(stack[((hsi*21+5745)*1+lsi)*1]), &(stack[((hsi*15+5730)*1+lsi)*1]), &(stack[((hsi*21+5817)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*21+4868)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4391)*1+lsi)*1]),&(stack[((hsi*28+5838)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5721)*1+lsi)*1]), &(stack[((hsi*10+5711)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*10+4768)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5866)*1+lsi)*1]), &(stack[((hsi*15+5766)*1+lsi)*1]), &(stack[((hsi*10+5645)*1+lsi)*1]), &(stack[((hsi*15+5721)*1+lsi)*1]), &(stack[((hsi*15+4932)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5887)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*10+5655)*1+lsi)*1]), &(stack[((hsi*15+5721)*1+lsi)*1]), &(stack[((hsi*15+4917)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5908)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*15+5665)*1+lsi)*1]), &(stack[((hsi*21+5887)*1+lsi)*1]), &(stack[((hsi*21+5866)*1+lsi)*1]), &(stack[((hsi*21+4968)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5936)*1+lsi)*1]), &(stack[((hsi*21+5817)*1+lsi)*1]), &(stack[((hsi*15+5696)*1+lsi)*1]), &(stack[((hsi*21+5866)*1+lsi)*1]), &(stack[((hsi*21+5887)*1+lsi)*1]), &(stack[((hsi*21+4947)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5964)*1+lsi)*1]), &(stack[((hsi*28+5838)*1+lsi)*1]), &(stack[((hsi*21+5745)*1+lsi)*1]), &(stack[((hsi*28+5936)*1+lsi)*1]), &(stack[((hsi*28+5908)*1+lsi)*1]), &(stack[((hsi*28+5017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4355)*1+lsi)*1]),&(stack[((hsi*36+5964)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6000)*1+lsi)*1]), &(stack[((hsi*15+5721)*1+lsi)*1]), &(stack[((hsi*10+5711)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6021)*1+lsi)*1]), &(stack[((hsi*21+5866)*1+lsi)*1]), &(stack[((hsi*15+5766)*1+lsi)*1]), &(stack[((hsi*21+6000)*1+lsi)*1]), &(stack[((hsi*21+5117)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6049)*1+lsi)*1]), &(stack[((hsi*21+5887)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*21+6000)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6077)*1+lsi)*1]), &(stack[((hsi*28+5908)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*28+6049)*1+lsi)*1]), &(stack[((hsi*28+6021)*1+lsi)*1]), &(stack[((hsi*28+5166)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6113)*1+lsi)*1]), &(stack[((hsi*28+5936)*1+lsi)*1]), &(stack[((hsi*21+5817)*1+lsi)*1]), &(stack[((hsi*28+6021)*1+lsi)*1]), &(stack[((hsi*28+6049)*1+lsi)*1]), &(stack[((hsi*28+5138)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6149)*1+lsi)*1]), &(stack[((hsi*36+5964)*1+lsi)*1]), &(stack[((hsi*28+5838)*1+lsi)*1]), &(stack[((hsi*36+6113)*1+lsi)*1]), &(stack[((hsi*36+6077)*1+lsi)*1]), &(stack[((hsi*36+5230)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4310)*1+lsi)*1]),&(stack[((hsi*45+6149)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6194)*1+lsi)*1]), &(stack[((hsi*21+6000)*1+lsi)*1]), &(stack[((hsi*15+5721)*1+lsi)*1]), &(stack[((hsi*21+5311)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6222)*1+lsi)*1]), &(stack[((hsi*28+6021)*1+lsi)*1]), &(stack[((hsi*21+5866)*1+lsi)*1]), &(stack[((hsi*28+6194)*1+lsi)*1]), &(stack[((hsi*28+5360)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6258)*1+lsi)*1]), &(stack[((hsi*28+6049)*1+lsi)*1]), &(stack[((hsi*21+5887)*1+lsi)*1]), &(stack[((hsi*28+6194)*1+lsi)*1]), &(stack[((hsi*28+5332)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6294)*1+lsi)*1]), &(stack[((hsi*36+6077)*1+lsi)*1]), &(stack[((hsi*28+5908)*1+lsi)*1]), &(stack[((hsi*36+6258)*1+lsi)*1]), &(stack[((hsi*36+6222)*1+lsi)*1]), &(stack[((hsi*36+5424)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6339)*1+lsi)*1]), &(stack[((hsi*36+6113)*1+lsi)*1]), &(stack[((hsi*28+5936)*1+lsi)*1]), &(stack[((hsi*36+6222)*1+lsi)*1]), &(stack[((hsi*36+6258)*1+lsi)*1]), &(stack[((hsi*36+5388)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6384)*1+lsi)*1]), &(stack[((hsi*45+6149)*1+lsi)*1]), &(stack[((hsi*36+5964)*1+lsi)*1]), &(stack[((hsi*45+6339)*1+lsi)*1]), &(stack[((hsi*45+6294)*1+lsi)*1]), &(stack[((hsi*45+5505)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4255)*1+lsi)*1]),&(stack[((hsi*55+6384)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4768)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5736)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*3+4768)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+4665)*1+lsi)*1]), &(stack[((hsi*3+4625)*1+lsi)*1]), &(stack[((hsi*3+5736)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5739)*1+lsi)*1]), &(stack[((hsi*3+5736)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+4631)*1+lsi)*1]), &(stack[((hsi*3+4628)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6439)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*3+4768)*1+lsi)*1]), &(stack[((hsi*6+4668)*1+lsi)*1]), &(stack[((hsi*6+4634)*1+lsi)*1]), &(stack[((hsi*6+5739)*1+lsi)*1]), &(stack[((hsi*6+5623)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5739)*1+lsi)*1]), &(stack[((hsi*3+5736)*1+lsi)*1]), &(stack[((hsi*6+4649)*1+lsi)*1]), &(stack[((hsi*6+4643)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6459)*1+lsi)*1]), &(stack[((hsi*10+6439)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*10+4674)*1+lsi)*1]), &(stack[((hsi*10+4655)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*10+5655)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5614)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+4625)*1+lsi)*1]), &(stack[((hsi*3+5736)*1+lsi)*1]), &(stack[((hsi*3+4665)*1+lsi)*1]), &(stack[((hsi*3+4781)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4643)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]), &(stack[((hsi*6+4634)*1+lsi)*1]), &(stack[((hsi*6+5739)*1+lsi)*1]), &(stack[((hsi*6+4668)*1+lsi)*1]), &(stack[((hsi*6+5617)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4625)*1+lsi)*1]), &(stack[((hsi*10+4643)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*10+4655)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*10+4674)*1+lsi)*1]), &(stack[((hsi*10+5645)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4653)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4656)*1+lsi)*1]), &(stack[((hsi*3+4653)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+4718)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]), &(stack[((hsi*3+4684)*1+lsi)*1]), &(stack[((hsi*3+4768)*1+lsi)*1]), &(stack[((hsi*3+4640)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4662)*1+lsi)*1]), &(stack[((hsi*6+4656)*1+lsi)*1]), &(stack[((hsi*3+4653)*1+lsi)*1]), &(stack[((hsi*6+4721)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*6+4687)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*6+5680)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*10+4662)*1+lsi)*1]), &(stack[((hsi*6+4656)*1+lsi)*1]), &(stack[((hsi*10+4727)*1+lsi)*1]), &(stack[((hsi*10+4643)*1+lsi)*1]), &(stack[((hsi*10+4693)*1+lsi)*1]), &(stack[((hsi*10+6439)*1+lsi)*1]), &(stack[((hsi*10+5686)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6489)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*10+4662)*1+lsi)*1]), &(stack[((hsi*15+4737)*1+lsi)*1]), &(stack[((hsi*15+4625)*1+lsi)*1]), &(stack[((hsi*15+4703)*1+lsi)*1]), &(stack[((hsi*15+6459)*1+lsi)*1]), &(stack[((hsi*15+5696)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4234)*1+lsi)*1]),&(stack[((hsi*21+6489)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4653)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5739)*1+lsi)*1]), &(stack[((hsi*10+4807)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*10+5711)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6510)*1+lsi)*1]), &(stack[((hsi*15+6459)*1+lsi)*1]), &(stack[((hsi*10+6439)*1+lsi)*1]), &(stack[((hsi*15+4832)*1+lsi)*1]), &(stack[((hsi*15+4817)*1+lsi)*1]), &(stack[((hsi*15+4653)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6531)*1+lsi)*1]), &(stack[((hsi*15+4625)*1+lsi)*1]), &(stack[((hsi*10+4643)*1+lsi)*1]), &(stack[((hsi*15+4817)*1+lsi)*1]), &(stack[((hsi*15+4653)*1+lsi)*1]), &(stack[((hsi*15+4832)*1+lsi)*1]), &(stack[((hsi*15+5766)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4807)*1+lsi)*1]), &(stack[((hsi*21+6489)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*21+4868)*1+lsi)*1]), &(stack[((hsi*21+6531)*1+lsi)*1]), &(stack[((hsi*21+4847)*1+lsi)*1]), &(stack[((hsi*21+6510)*1+lsi)*1]), &(stack[((hsi*21+5817)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4206)*1+lsi)*1]),&(stack[((hsi*28+4807)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6552)*1+lsi)*1]), &(stack[((hsi*15+4653)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*15+4932)*1+lsi)*1]), &(stack[((hsi*15+4917)*1+lsi)*1]), &(stack[((hsi*15+5721)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4917)*1+lsi)*1]), &(stack[((hsi*21+6510)*1+lsi)*1]), &(stack[((hsi*15+6459)*1+lsi)*1]), &(stack[((hsi*21+4968)*1+lsi)*1]), &(stack[((hsi*21+4947)*1+lsi)*1]), &(stack[((hsi*21+6552)*1+lsi)*1]), &(stack[((hsi*21+5887)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6573)*1+lsi)*1]), &(stack[((hsi*21+6531)*1+lsi)*1]), &(stack[((hsi*15+4625)*1+lsi)*1]), &(stack[((hsi*21+4947)*1+lsi)*1]), &(stack[((hsi*21+6552)*1+lsi)*1]), &(stack[((hsi*21+4968)*1+lsi)*1]), &(stack[((hsi*21+5866)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6601)*1+lsi)*1]), &(stack[((hsi*28+4807)*1+lsi)*1]), &(stack[((hsi*21+6489)*1+lsi)*1]), &(stack[((hsi*28+5017)*1+lsi)*1]), &(stack[((hsi*28+6573)*1+lsi)*1]), &(stack[((hsi*28+4989)*1+lsi)*1]), &(stack[((hsi*28+4917)*1+lsi)*1]), &(stack[((hsi*28+5936)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4170)*1+lsi)*1]),&(stack[((hsi*36+6601)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6637)*1+lsi)*1]), &(stack[((hsi*21+6552)*1+lsi)*1]), &(stack[((hsi*15+4653)*1+lsi)*1]), &(stack[((hsi*21+5117)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*21+6000)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6665)*1+lsi)*1]), &(stack[((hsi*28+4917)*1+lsi)*1]), &(stack[((hsi*21+6510)*1+lsi)*1]), &(stack[((hsi*28+5166)*1+lsi)*1]), &(stack[((hsi*28+5138)*1+lsi)*1]), &(stack[((hsi*28+6637)*1+lsi)*1]), &(stack[((hsi*28+6049)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6701)*1+lsi)*1]), &(stack[((hsi*28+6573)*1+lsi)*1]), &(stack[((hsi*21+6531)*1+lsi)*1]), &(stack[((hsi*28+5138)*1+lsi)*1]), &(stack[((hsi*28+6637)*1+lsi)*1]), &(stack[((hsi*28+5166)*1+lsi)*1]), &(stack[((hsi*28+6021)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6737)*1+lsi)*1]), &(stack[((hsi*36+6601)*1+lsi)*1]), &(stack[((hsi*28+4807)*1+lsi)*1]), &(stack[((hsi*36+5230)*1+lsi)*1]), &(stack[((hsi*36+6701)*1+lsi)*1]), &(stack[((hsi*36+5194)*1+lsi)*1]), &(stack[((hsi*36+6665)*1+lsi)*1]), &(stack[((hsi*36+6113)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4125)*1+lsi)*1]),&(stack[((hsi*45+6737)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6782)*1+lsi)*1]), &(stack[((hsi*28+6637)*1+lsi)*1]), &(stack[((hsi*21+6552)*1+lsi)*1]), &(stack[((hsi*28+5360)*1+lsi)*1]), &(stack[((hsi*28+5332)*1+lsi)*1]), &(stack[((hsi*28+6194)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6818)*1+lsi)*1]), &(stack[((hsi*36+6665)*1+lsi)*1]), &(stack[((hsi*28+4917)*1+lsi)*1]), &(stack[((hsi*36+5424)*1+lsi)*1]), &(stack[((hsi*36+5388)*1+lsi)*1]), &(stack[((hsi*36+6782)*1+lsi)*1]), &(stack[((hsi*36+6258)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6863)*1+lsi)*1]), &(stack[((hsi*36+6701)*1+lsi)*1]), &(stack[((hsi*28+6573)*1+lsi)*1]), &(stack[((hsi*36+5388)*1+lsi)*1]), &(stack[((hsi*36+6782)*1+lsi)*1]), &(stack[((hsi*36+5424)*1+lsi)*1]), &(stack[((hsi*36+6222)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6908)*1+lsi)*1]), &(stack[((hsi*45+6737)*1+lsi)*1]), &(stack[((hsi*36+6601)*1+lsi)*1]), &(stack[((hsi*45+5505)*1+lsi)*1]), &(stack[((hsi*45+6863)*1+lsi)*1]), &(stack[((hsi*45+5460)*1+lsi)*1]), &(stack[((hsi*45+6818)*1+lsi)*1]), &(stack[((hsi*45+6339)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4070)*1+lsi)*1]),&(stack[((hsi*55+6908)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5711)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*3+5711)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+4781)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*3+5736)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*3+5711)*1+lsi)*1]), &(stack[((hsi*6+5617)*1+lsi)*1]), &(stack[((hsi*6+5623)*1+lsi)*1]), &(stack[((hsi*6+5739)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*10+5645)*1+lsi)*1]), &(stack[((hsi*10+5655)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5720)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+4640)*1+lsi)*1]), &(stack[((hsi*3+5711)*1+lsi)*1]), &(stack[((hsi*3+4778)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5720)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*6+5680)*1+lsi)*1]), &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*6+5608)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5645)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5720)*1+lsi)*1]), &(stack[((hsi*10+5686)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*10+5629)*1+lsi)*1]), &(stack[((hsi*10+4643)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5720)*1+lsi)*1]), &(stack[((hsi*15+5645)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*15+5696)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*15+5665)*1+lsi)*1]), &(stack[((hsi*15+4625)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4049)*1+lsi)*1]),&(stack[((hsi*21+5720)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6963)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*15+5766)*1+lsi)*1]), &(stack[((hsi*15+5781)*1+lsi)*1]), &(stack[((hsi*15+4653)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4653)*1+lsi)*1]), &(stack[((hsi*21+5720)*1+lsi)*1]), &(stack[((hsi*15+5645)*1+lsi)*1]), &(stack[((hsi*21+5817)*1+lsi)*1]), &(stack[((hsi*21+6963)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*21+6531)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4021)*1+lsi)*1]),&(stack[((hsi*28+4653)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+5766)*1+lsi)*1]), &(stack[((hsi*21+6963)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*21+5866)*1+lsi)*1]), &(stack[((hsi*21+5887)*1+lsi)*1]), &(stack[((hsi*21+6552)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6984)*1+lsi)*1]), &(stack[((hsi*28+4653)*1+lsi)*1]), &(stack[((hsi*21+5720)*1+lsi)*1]), &(stack[((hsi*28+5936)*1+lsi)*1]), &(stack[((hsi*28+5766)*1+lsi)*1]), &(stack[((hsi*28+5908)*1+lsi)*1]), &(stack[((hsi*28+6573)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3985)*1+lsi)*1]),&(stack[((hsi*36+6984)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7020)*1+lsi)*1]), &(stack[((hsi*28+5766)*1+lsi)*1]), &(stack[((hsi*21+6963)*1+lsi)*1]), &(stack[((hsi*28+6021)*1+lsi)*1]), &(stack[((hsi*28+6049)*1+lsi)*1]), &(stack[((hsi*28+6637)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7056)*1+lsi)*1]), &(stack[((hsi*36+6984)*1+lsi)*1]), &(stack[((hsi*28+4653)*1+lsi)*1]), &(stack[((hsi*36+6113)*1+lsi)*1]), &(stack[((hsi*36+7020)*1+lsi)*1]), &(stack[((hsi*36+6077)*1+lsi)*1]), &(stack[((hsi*36+6701)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3940)*1+lsi)*1]),&(stack[((hsi*45+7056)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7101)*1+lsi)*1]), &(stack[((hsi*36+7020)*1+lsi)*1]), &(stack[((hsi*28+5766)*1+lsi)*1]), &(stack[((hsi*36+6222)*1+lsi)*1]), &(stack[((hsi*36+6258)*1+lsi)*1]), &(stack[((hsi*36+6782)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7146)*1+lsi)*1]), &(stack[((hsi*45+7056)*1+lsi)*1]), &(stack[((hsi*36+6984)*1+lsi)*1]), &(stack[((hsi*45+6339)*1+lsi)*1]), &(stack[((hsi*45+7101)*1+lsi)*1]), &(stack[((hsi*45+6294)*1+lsi)*1]), &(stack[((hsi*45+6863)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3885)*1+lsi)*1]),&(stack[((hsi*55+7146)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+5614)*1+lsi)*1]), &(stack[((hsi*3+4768)*1+lsi)*1]), &(stack[((hsi*3+5711)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*6+5714)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*10+4643)*1+lsi)*1]), &(stack[((hsi*10+6439)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7216)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*15+4625)*1+lsi)*1]), &(stack[((hsi*15+6459)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3864)*1+lsi)*1]),&(stack[((hsi*21+7216)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7237)*1+lsi)*1]), &(stack[((hsi*21+7216)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*21+6531)*1+lsi)*1]), &(stack[((hsi*21+6510)*1+lsi)*1]), &(stack[((hsi*21+6963)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3836)*1+lsi)*1]),&(stack[((hsi*28+7237)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7265)*1+lsi)*1]), &(stack[((hsi*28+7237)*1+lsi)*1]), &(stack[((hsi*21+7216)*1+lsi)*1]), &(stack[((hsi*28+6573)*1+lsi)*1]), &(stack[((hsi*28+4917)*1+lsi)*1]), &(stack[((hsi*28+5766)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3800)*1+lsi)*1]),&(stack[((hsi*36+7265)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7301)*1+lsi)*1]), &(stack[((hsi*36+7265)*1+lsi)*1]), &(stack[((hsi*28+7237)*1+lsi)*1]), &(stack[((hsi*36+6701)*1+lsi)*1]), &(stack[((hsi*36+6665)*1+lsi)*1]), &(stack[((hsi*36+7020)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3755)*1+lsi)*1]),&(stack[((hsi*45+7301)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7346)*1+lsi)*1]), &(stack[((hsi*45+7301)*1+lsi)*1]), &(stack[((hsi*36+7265)*1+lsi)*1]), &(stack[((hsi*45+6863)*1+lsi)*1]), &(stack[((hsi*45+6818)*1+lsi)*1]), &(stack[((hsi*45+7101)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3700)*1+lsi)*1]),&(stack[((hsi*55+7346)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+4778)*1+lsi)*1]), &(stack[((hsi*3+4640)*1+lsi)*1]), &(stack[((hsi*3+5711)*1+lsi)*1]), &(stack[((hsi*3+4768)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*6+5608)*1+lsi)*1]), &(stack[((hsi*6+5680)*1+lsi)*1]), &(stack[((hsi*6+5714)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*10+5629)*1+lsi)*1]), &(stack[((hsi*10+5686)*1+lsi)*1]), &(stack[((hsi*10+4758)*1+lsi)*1]), &(stack[((hsi*10+6439)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7401)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*15+5665)*1+lsi)*1]), &(stack[((hsi*15+5696)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*15+6459)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3679)*1+lsi)*1]),&(stack[((hsi*21+7401)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7422)*1+lsi)*1]), &(stack[((hsi*21+7401)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*21+5817)*1+lsi)*1]), &(stack[((hsi*21+6963)*1+lsi)*1]), &(stack[((hsi*21+6510)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3651)*1+lsi)*1]),&(stack[((hsi*28+7422)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7450)*1+lsi)*1]), &(stack[((hsi*28+7422)*1+lsi)*1]), &(stack[((hsi*21+7401)*1+lsi)*1]), &(stack[((hsi*28+5908)*1+lsi)*1]), &(stack[((hsi*28+5936)*1+lsi)*1]), &(stack[((hsi*28+5766)*1+lsi)*1]), &(stack[((hsi*28+4917)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3615)*1+lsi)*1]),&(stack[((hsi*36+7450)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7486)*1+lsi)*1]), &(stack[((hsi*36+7450)*1+lsi)*1]), &(stack[((hsi*28+7422)*1+lsi)*1]), &(stack[((hsi*36+6077)*1+lsi)*1]), &(stack[((hsi*36+6113)*1+lsi)*1]), &(stack[((hsi*36+7020)*1+lsi)*1]), &(stack[((hsi*36+6665)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3570)*1+lsi)*1]),&(stack[((hsi*45+7486)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7531)*1+lsi)*1]), &(stack[((hsi*45+7486)*1+lsi)*1]), &(stack[((hsi*36+7450)*1+lsi)*1]), &(stack[((hsi*45+6294)*1+lsi)*1]), &(stack[((hsi*45+6339)*1+lsi)*1]), &(stack[((hsi*45+7101)*1+lsi)*1]), &(stack[((hsi*45+6818)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3515)*1+lsi)*1]),&(stack[((hsi*55+7531)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+4684)*1+lsi)*1]), &(stack[((hsi*3+4768)*1+lsi)*1]), &(stack[((hsi*3+4718)*1+lsi)*1]), &(stack[((hsi*3+5614)*1+lsi)*1]), &(stack[((hsi*3+4778)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*6+4687)*1+lsi)*1]), &(stack[((hsi*6+4752)*1+lsi)*1]), &(stack[((hsi*6+4721)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*6+5608)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*6+5645)*1+lsi)*1]), &(stack[((hsi*10+4693)*1+lsi)*1]), &(stack[((hsi*10+6439)*1+lsi)*1]), &(stack[((hsi*10+4727)*1+lsi)*1]), &(stack[((hsi*10+4643)*1+lsi)*1]), &(stack[((hsi*10+5629)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4752)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*10+6449)*1+lsi)*1]), &(stack[((hsi*15+4703)*1+lsi)*1]), &(stack[((hsi*15+6459)*1+lsi)*1]), &(stack[((hsi*15+4737)*1+lsi)*1]), &(stack[((hsi*15+4625)*1+lsi)*1]), &(stack[((hsi*15+5665)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3494)*1+lsi)*1]),&(stack[((hsi*21+4752)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6439)*1+lsi)*1]), &(stack[((hsi*21+4752)*1+lsi)*1]), &(stack[((hsi*15+6474)*1+lsi)*1]), &(stack[((hsi*21+4847)*1+lsi)*1]), &(stack[((hsi*21+6510)*1+lsi)*1]), &(stack[((hsi*21+4868)*1+lsi)*1]), &(stack[((hsi*21+6531)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3466)*1+lsi)*1]),&(stack[((hsi*28+6439)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7586)*1+lsi)*1]), &(stack[((hsi*28+6439)*1+lsi)*1]), &(stack[((hsi*21+4752)*1+lsi)*1]), &(stack[((hsi*28+4989)*1+lsi)*1]), &(stack[((hsi*28+4917)*1+lsi)*1]), &(stack[((hsi*28+5017)*1+lsi)*1]), &(stack[((hsi*28+6573)*1+lsi)*1]), &(stack[((hsi*28+5908)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3430)*1+lsi)*1]),&(stack[((hsi*36+7586)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7622)*1+lsi)*1]), &(stack[((hsi*36+7586)*1+lsi)*1]), &(stack[((hsi*28+6439)*1+lsi)*1]), &(stack[((hsi*36+5194)*1+lsi)*1]), &(stack[((hsi*36+6665)*1+lsi)*1]), &(stack[((hsi*36+5230)*1+lsi)*1]), &(stack[((hsi*36+6701)*1+lsi)*1]), &(stack[((hsi*36+6077)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3385)*1+lsi)*1]),&(stack[((hsi*45+7622)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7667)*1+lsi)*1]), &(stack[((hsi*45+7622)*1+lsi)*1]), &(stack[((hsi*36+7586)*1+lsi)*1]), &(stack[((hsi*45+5460)*1+lsi)*1]), &(stack[((hsi*45+6818)*1+lsi)*1]), &(stack[((hsi*45+5505)*1+lsi)*1]), &(stack[((hsi*45+6863)*1+lsi)*1]), &(stack[((hsi*45+6294)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3330)*1+lsi)*1]),&(stack[((hsi*55+7667)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+4778)*1+lsi)*1]), &(stack[((hsi*3+4640)*1+lsi)*1]), &(stack[((hsi*3+4684)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4625)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*3+5605)*1+lsi)*1]), &(stack[((hsi*6+5608)*1+lsi)*1]), &(stack[((hsi*6+5680)*1+lsi)*1]), &(stack[((hsi*6+4687)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+4625)*1+lsi)*1]), &(stack[((hsi*6+5639)*1+lsi)*1]), &(stack[((hsi*10+5629)*1+lsi)*1]), &(stack[((hsi*10+5686)*1+lsi)*1]), &(stack[((hsi*10+4693)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5605)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+4625)*1+lsi)*1]), &(stack[((hsi*15+5665)*1+lsi)*1]), &(stack[((hsi*15+5696)*1+lsi)*1]), &(stack[((hsi*15+4703)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3309)*1+lsi)*1]),&(stack[((hsi*21+5605)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4625)*1+lsi)*1]), &(stack[((hsi*21+5605)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*21+5796)*1+lsi)*1]), &(stack[((hsi*21+5817)*1+lsi)*1]), &(stack[((hsi*21+4847)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3281)*1+lsi)*1]),&(stack[((hsi*28+4625)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5626)*1+lsi)*1]), &(stack[((hsi*28+4625)*1+lsi)*1]), &(stack[((hsi*21+5605)*1+lsi)*1]), &(stack[((hsi*28+5908)*1+lsi)*1]), &(stack[((hsi*28+5936)*1+lsi)*1]), &(stack[((hsi*28+4989)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3245)*1+lsi)*1]),&(stack[((hsi*36+5626)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5662)*1+lsi)*1]), &(stack[((hsi*36+5626)*1+lsi)*1]), &(stack[((hsi*28+4625)*1+lsi)*1]), &(stack[((hsi*36+6077)*1+lsi)*1]), &(stack[((hsi*36+6113)*1+lsi)*1]), &(stack[((hsi*36+5194)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3200)*1+lsi)*1]),&(stack[((hsi*45+5662)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7722)*1+lsi)*1]), &(stack[((hsi*45+5662)*1+lsi)*1]), &(stack[((hsi*36+5626)*1+lsi)*1]), &(stack[((hsi*45+6294)*1+lsi)*1]), &(stack[((hsi*45+6339)*1+lsi)*1]), &(stack[((hsi*45+5460)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3145)*1+lsi)*1]),&(stack[((hsi*55+7722)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4681)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6467)*1+lsi)*1]), &(stack[((hsi*3+4681)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+4684)*1+lsi)*1]), &(stack[((hsi*3+4718)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6473)*1+lsi)*1]), &(stack[((hsi*6+6467)*1+lsi)*1]), &(stack[((hsi*3+4681)*1+lsi)*1]), &(stack[((hsi*6+4687)*1+lsi)*1]), &(stack[((hsi*6+4721)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+6473)*1+lsi)*1]), &(stack[((hsi*6+6467)*1+lsi)*1]), &(stack[((hsi*10+4693)*1+lsi)*1]), &(stack[((hsi*10+4727)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4681)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*10+6473)*1+lsi)*1]), &(stack[((hsi*15+4703)*1+lsi)*1]), &(stack[((hsi*15+4737)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3124)*1+lsi)*1]),&(stack[((hsi*21+4681)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4702)*1+lsi)*1]), &(stack[((hsi*21+4681)*1+lsi)*1]), &(stack[((hsi*15+7201)*1+lsi)*1]), &(stack[((hsi*21+4847)*1+lsi)*1]), &(stack[((hsi*21+4868)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3096)*1+lsi)*1]),&(stack[((hsi*28+4702)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7777)*1+lsi)*1]), &(stack[((hsi*28+4702)*1+lsi)*1]), &(stack[((hsi*21+4681)*1+lsi)*1]), &(stack[((hsi*28+4989)*1+lsi)*1]), &(stack[((hsi*28+5017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3060)*1+lsi)*1]),&(stack[((hsi*36+7777)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7813)*1+lsi)*1]), &(stack[((hsi*36+7777)*1+lsi)*1]), &(stack[((hsi*28+4702)*1+lsi)*1]), &(stack[((hsi*36+5194)*1+lsi)*1]), &(stack[((hsi*36+5230)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3015)*1+lsi)*1]),&(stack[((hsi*45+7813)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7858)*1+lsi)*1]), &(stack[((hsi*45+7813)*1+lsi)*1]), &(stack[((hsi*36+7777)*1+lsi)*1]), &(stack[((hsi*45+5460)*1+lsi)*1]), &(stack[((hsi*45+5505)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2960)*1+lsi)*1]),&(stack[((hsi*55+7858)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2939)*1+lsi)*1]),&(stack[((hsi*21+4868)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2911)*1+lsi)*1]),&(stack[((hsi*28+5017)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2875)*1+lsi)*1]),&(stack[((hsi*36+5230)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2830)*1+lsi)*1]),&(stack[((hsi*45+5505)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7913)*1+lsi)*1]), &(stack[((hsi*21+5311)*1+lsi)*1]), &(stack[((hsi*15+5081)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7941)*1+lsi)*1]), &(stack[((hsi*28+5360)*1+lsi)*1]), &(stack[((hsi*21+5117)*1+lsi)*1]), &(stack[((hsi*28+7913)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7977)*1+lsi)*1]), &(stack[((hsi*28+5332)*1+lsi)*1]), &(stack[((hsi*21+5096)*1+lsi)*1]), &(stack[((hsi*28+7913)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8013)*1+lsi)*1]), &(stack[((hsi*36+5424)*1+lsi)*1]), &(stack[((hsi*28+5166)*1+lsi)*1]), &(stack[((hsi*36+7977)*1+lsi)*1]), &(stack[((hsi*36+7941)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8058)*1+lsi)*1]), &(stack[((hsi*36+5388)*1+lsi)*1]), &(stack[((hsi*28+5138)*1+lsi)*1]), &(stack[((hsi*36+7941)*1+lsi)*1]), &(stack[((hsi*36+7977)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8103)*1+lsi)*1]), &(stack[((hsi*45+5505)*1+lsi)*1]), &(stack[((hsi*36+5230)*1+lsi)*1]), &(stack[((hsi*45+8058)*1+lsi)*1]), &(stack[((hsi*45+8013)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2775)*1+lsi)*1]),&(stack[((hsi*55+8103)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2754)*1+lsi)*1]),&(stack[((hsi*21+5817)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2726)*1+lsi)*1]),&(stack[((hsi*28+5936)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2690)*1+lsi)*1]),&(stack[((hsi*36+6113)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2645)*1+lsi)*1]),&(stack[((hsi*45+6339)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8158)*1+lsi)*1]), &(stack[((hsi*28+6194)*1+lsi)*1]), &(stack[((hsi*21+6000)*1+lsi)*1]), &(stack[((hsi*28+7913)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8194)*1+lsi)*1]), &(stack[((hsi*36+6258)*1+lsi)*1]), &(stack[((hsi*28+6049)*1+lsi)*1]), &(stack[((hsi*36+8158)*1+lsi)*1]), &(stack[((hsi*36+7977)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8239)*1+lsi)*1]), &(stack[((hsi*36+6222)*1+lsi)*1]), &(stack[((hsi*28+6021)*1+lsi)*1]), &(stack[((hsi*36+8158)*1+lsi)*1]), &(stack[((hsi*36+7941)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8284)*1+lsi)*1]), &(stack[((hsi*45+6339)*1+lsi)*1]), &(stack[((hsi*36+6113)*1+lsi)*1]), &(stack[((hsi*45+8239)*1+lsi)*1]), &(stack[((hsi*45+8194)*1+lsi)*1]), &(stack[((hsi*45+8058)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2590)*1+lsi)*1]),&(stack[((hsi*55+8284)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2569)*1+lsi)*1]),&(stack[((hsi*21+6531)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2541)*1+lsi)*1]),&(stack[((hsi*28+6573)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2505)*1+lsi)*1]),&(stack[((hsi*36+6701)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2460)*1+lsi)*1]),&(stack[((hsi*45+6863)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8339)*1+lsi)*1]), &(stack[((hsi*36+6782)*1+lsi)*1]), &(stack[((hsi*28+6637)*1+lsi)*1]), &(stack[((hsi*36+7941)*1+lsi)*1]), &(stack[((hsi*36+7977)*1+lsi)*1]), &(stack[((hsi*36+8158)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8384)*1+lsi)*1]), &(stack[((hsi*45+6863)*1+lsi)*1]), &(stack[((hsi*36+6701)*1+lsi)*1]), &(stack[((hsi*45+8058)*1+lsi)*1]), &(stack[((hsi*45+8339)*1+lsi)*1]), &(stack[((hsi*45+8013)*1+lsi)*1]), &(stack[((hsi*45+8239)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2405)*1+lsi)*1]),&(stack[((hsi*55+8384)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2384)*1+lsi)*1]),&(stack[((hsi*21+6963)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2356)*1+lsi)*1]),&(stack[((hsi*28+5766)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2320)*1+lsi)*1]),&(stack[((hsi*36+7020)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2275)*1+lsi)*1]),&(stack[((hsi*45+7101)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8439)*1+lsi)*1]), &(stack[((hsi*45+7101)*1+lsi)*1]), &(stack[((hsi*36+7020)*1+lsi)*1]), &(stack[((hsi*45+8239)*1+lsi)*1]), &(stack[((hsi*45+8194)*1+lsi)*1]), &(stack[((hsi*45+8339)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2220)*1+lsi)*1]),&(stack[((hsi*55+8439)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2199)*1+lsi)*1]),&(stack[((hsi*21+6510)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2171)*1+lsi)*1]),&(stack[((hsi*28+4917)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2135)*1+lsi)*1]),&(stack[((hsi*36+6665)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2090)*1+lsi)*1]),&(stack[((hsi*45+6818)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8494)*1+lsi)*1]), &(stack[((hsi*45+6818)*1+lsi)*1]), &(stack[((hsi*36+6665)*1+lsi)*1]), &(stack[((hsi*45+8013)*1+lsi)*1]), &(stack[((hsi*45+8058)*1+lsi)*1]), &(stack[((hsi*45+8339)*1+lsi)*1]), &(stack[((hsi*45+8194)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2035)*1+lsi)*1]),&(stack[((hsi*55+8494)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2014)*1+lsi)*1]),&(stack[((hsi*21+5796)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1986)*1+lsi)*1]),&(stack[((hsi*28+5908)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1950)*1+lsi)*1]),&(stack[((hsi*36+6077)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1905)*1+lsi)*1]),&(stack[((hsi*45+6294)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8549)*1+lsi)*1]), &(stack[((hsi*45+6294)*1+lsi)*1]), &(stack[((hsi*36+6077)*1+lsi)*1]), &(stack[((hsi*45+8194)*1+lsi)*1]), &(stack[((hsi*45+8239)*1+lsi)*1]), &(stack[((hsi*45+8013)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1850)*1+lsi)*1]),&(stack[((hsi*55+8549)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1829)*1+lsi)*1]),&(stack[((hsi*21+4847)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1801)*1+lsi)*1]),&(stack[((hsi*28+4989)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1765)*1+lsi)*1]),&(stack[((hsi*36+5194)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1720)*1+lsi)*1]),&(stack[((hsi*45+5460)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8604)*1+lsi)*1]), &(stack[((hsi*45+5460)*1+lsi)*1]), &(stack[((hsi*36+5194)*1+lsi)*1]), &(stack[((hsi*45+8013)*1+lsi)*1]), &(stack[((hsi*45+8058)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1665)*1+lsi)*1]),&(stack[((hsi*55+8604)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1644)*1+lsi)*1]),&(stack[((hsi*21+4947)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1616)*1+lsi)*1]),&(stack[((hsi*28+5138)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1580)*1+lsi)*1]),&(stack[((hsi*36+5388)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1535)*1+lsi)*1]),&(stack[((hsi*45+8058)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8659)*1+lsi)*1]), &(stack[((hsi*28+7913)*1+lsi)*1]), &(stack[((hsi*21+5311)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8695)*1+lsi)*1]), &(stack[((hsi*36+7977)*1+lsi)*1]), &(stack[((hsi*28+5332)*1+lsi)*1]), &(stack[((hsi*36+8659)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8740)*1+lsi)*1]), &(stack[((hsi*36+7941)*1+lsi)*1]), &(stack[((hsi*28+5360)*1+lsi)*1]), &(stack[((hsi*36+8659)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8785)*1+lsi)*1]), &(stack[((hsi*45+8058)*1+lsi)*1]), &(stack[((hsi*36+5388)*1+lsi)*1]), &(stack[((hsi*45+8740)*1+lsi)*1]), &(stack[((hsi*45+8695)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1480)*1+lsi)*1]),&(stack[((hsi*55+8785)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1459)*1+lsi)*1]),&(stack[((hsi*21+5866)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1431)*1+lsi)*1]),&(stack[((hsi*28+6021)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1395)*1+lsi)*1]),&(stack[((hsi*36+6222)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1350)*1+lsi)*1]),&(stack[((hsi*45+8239)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8840)*1+lsi)*1]), &(stack[((hsi*36+8158)*1+lsi)*1]), &(stack[((hsi*28+6194)*1+lsi)*1]), &(stack[((hsi*36+8659)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8885)*1+lsi)*1]), &(stack[((hsi*45+8239)*1+lsi)*1]), &(stack[((hsi*36+6222)*1+lsi)*1]), &(stack[((hsi*45+8840)*1+lsi)*1]), &(stack[((hsi*45+8740)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1295)*1+lsi)*1]),&(stack[((hsi*55+8885)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1274)*1+lsi)*1]),&(stack[((hsi*21+6552)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1246)*1+lsi)*1]),&(stack[((hsi*28+6637)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1210)*1+lsi)*1]),&(stack[((hsi*36+6782)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1165)*1+lsi)*1]),&(stack[((hsi*45+8339)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8940)*1+lsi)*1]), &(stack[((hsi*45+8339)*1+lsi)*1]), &(stack[((hsi*36+6782)*1+lsi)*1]), &(stack[((hsi*45+8740)*1+lsi)*1]), &(stack[((hsi*45+8695)*1+lsi)*1]), &(stack[((hsi*45+8840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1110)*1+lsi)*1]),&(stack[((hsi*55+8940)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1089)*1+lsi)*1]),&(stack[((hsi*21+5887)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1061)*1+lsi)*1]),&(stack[((hsi*28+6049)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1025)*1+lsi)*1]),&(stack[((hsi*36+6258)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+980)*1+lsi)*1]),&(stack[((hsi*45+8194)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8995)*1+lsi)*1]), &(stack[((hsi*45+8194)*1+lsi)*1]), &(stack[((hsi*36+6258)*1+lsi)*1]), &(stack[((hsi*45+8840)*1+lsi)*1]), &(stack[((hsi*45+8695)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+925)*1+lsi)*1]),&(stack[((hsi*55+8995)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+904)*1+lsi)*1]),&(stack[((hsi*21+4968)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+876)*1+lsi)*1]),&(stack[((hsi*28+5166)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+840)*1+lsi)*1]),&(stack[((hsi*36+5424)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+795)*1+lsi)*1]),&(stack[((hsi*45+8013)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9050)*1+lsi)*1]), &(stack[((hsi*45+8013)*1+lsi)*1]), &(stack[((hsi*36+5424)*1+lsi)*1]), &(stack[((hsi*45+8695)*1+lsi)*1]), &(stack[((hsi*45+8740)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+740)*1+lsi)*1]),&(stack[((hsi*55+9050)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+719)*1+lsi)*1]),&(stack[((hsi*21+5117)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+691)*1+lsi)*1]),&(stack[((hsi*28+5360)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+655)*1+lsi)*1]),&(stack[((hsi*36+7941)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+610)*1+lsi)*1]),&(stack[((hsi*45+8740)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9105)*1+lsi)*1]), &(stack[((hsi*36+8659)*1+lsi)*1]), &(stack[((hsi*28+7913)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9150)*1+lsi)*1]), &(stack[((hsi*45+8740)*1+lsi)*1]), &(stack[((hsi*36+7941)*1+lsi)*1]), &(stack[((hsi*45+9105)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+555)*1+lsi)*1]),&(stack[((hsi*55+9150)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+534)*1+lsi)*1]),&(stack[((hsi*21+6000)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+506)*1+lsi)*1]),&(stack[((hsi*28+6194)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+470)*1+lsi)*1]),&(stack[((hsi*36+8158)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+425)*1+lsi)*1]),&(stack[((hsi*45+8840)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9205)*1+lsi)*1]), &(stack[((hsi*45+8840)*1+lsi)*1]), &(stack[((hsi*36+8158)*1+lsi)*1]), &(stack[((hsi*45+9105)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+370)*1+lsi)*1]),&(stack[((hsi*55+9205)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+349)*1+lsi)*1]),&(stack[((hsi*21+5096)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+321)*1+lsi)*1]),&(stack[((hsi*28+5332)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+285)*1+lsi)*1]),&(stack[((hsi*36+7977)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+240)*1+lsi)*1]),&(stack[((hsi*45+8695)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9260)*1+lsi)*1]), &(stack[((hsi*45+8695)*1+lsi)*1]), &(stack[((hsi*36+7977)*1+lsi)*1]), &(stack[((hsi*45+9105)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+185)*1+lsi)*1]),&(stack[((hsi*55+9260)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+164)*1+lsi)*1]),&(stack[((hsi*21+5311)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+136)*1+lsi)*1]),&(stack[((hsi*28+7913)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+100)*1+lsi)*1]),&(stack[((hsi*36+8659)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+55)*1+lsi)*1]),&(stack[((hsi*45+9105)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9315)*1+lsi)*1]), &(stack[((hsi*45+9105)*1+lsi)*1]), &(stack[((hsi*36+8659)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+9315)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4625 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
