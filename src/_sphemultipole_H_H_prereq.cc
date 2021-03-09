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
void _sphemultipole_H_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6275)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6278)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6281)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6284)*1+lsi)*1]), &(stack[((hsi*3+6275)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+6281)*1+lsi)*1]), &(stack[((hsi*3+6278)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6290)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6293)*1+lsi)*1]), &(stack[((hsi*3+6278)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+6290)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6299)*1+lsi)*1]), &(stack[((hsi*3+6281)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+6290)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6305)*1+lsi)*1]), &(stack[((hsi*6+6284)*1+lsi)*1]), &(stack[((hsi*3+6275)*1+lsi)*1]), &(stack[((hsi*6+6299)*1+lsi)*1]), &(stack[((hsi*6+6293)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6315)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6318)*1+lsi)*1]), &(stack[((hsi*3+6315)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+6278)*1+lsi)*1]), &(stack[((hsi*3+6281)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*6+6318)*1+lsi)*1]), &(stack[((hsi*3+6315)*1+lsi)*1]), &(stack[((hsi*6+6293)*1+lsi)*1]), &(stack[((hsi*6+6299)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6334)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6337)*1+lsi)*1]), &(stack[((hsi*3+6334)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+6315)*1+lsi)*1]), &(stack[((hsi*3+6275)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6343)*1+lsi)*1]), &(stack[((hsi*6+6337)*1+lsi)*1]), &(stack[((hsi*3+6334)*1+lsi)*1]), &(stack[((hsi*6+6318)*1+lsi)*1]), &(stack[((hsi*6+6284)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6353)*1+lsi)*1]), &(stack[((hsi*10+6343)*1+lsi)*1]), &(stack[((hsi*6+6337)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*10+6305)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6368)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6371)*1+lsi)*1]), &(stack[((hsi*3+6368)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+6275)*1+lsi)*1]), &(stack[((hsi*3+6315)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6377)*1+lsi)*1]), &(stack[((hsi*6+6371)*1+lsi)*1]), &(stack[((hsi*3+6368)*1+lsi)*1]), &(stack[((hsi*6+6284)*1+lsi)*1]), &(stack[((hsi*6+6318)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6387)*1+lsi)*1]), &(stack[((hsi*10+6377)*1+lsi)*1]), &(stack[((hsi*6+6371)*1+lsi)*1]), &(stack[((hsi*10+6305)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6402)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6405)*1+lsi)*1]), &(stack[((hsi*3+6402)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+6368)*1+lsi)*1]), &(stack[((hsi*3+6334)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6411)*1+lsi)*1]), &(stack[((hsi*6+6405)*1+lsi)*1]), &(stack[((hsi*3+6402)*1+lsi)*1]), &(stack[((hsi*6+6371)*1+lsi)*1]), &(stack[((hsi*6+6337)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6421)*1+lsi)*1]), &(stack[((hsi*10+6411)*1+lsi)*1]), &(stack[((hsi*6+6405)*1+lsi)*1]), &(stack[((hsi*10+6377)*1+lsi)*1]), &(stack[((hsi*10+6343)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6436)*1+lsi)*1]), &(stack[((hsi*15+6421)*1+lsi)*1]), &(stack[((hsi*10+6411)*1+lsi)*1]), &(stack[((hsi*15+6387)*1+lsi)*1]), &(stack[((hsi*15+6353)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+6254)*1+lsi)*1]),&(stack[((hsi*21+6436)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*3+6290)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*6+6293)*1+lsi)*1]), &(stack[((hsi*3+6278)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6457)*1+lsi)*1]), &(stack[((hsi*6+6299)*1+lsi)*1]), &(stack[((hsi*3+6281)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6467)*1+lsi)*1]), &(stack[((hsi*10+6305)*1+lsi)*1]), &(stack[((hsi*6+6284)*1+lsi)*1]), &(stack[((hsi*10+6457)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6482)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*6+6318)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*10+6457)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6497)*1+lsi)*1]), &(stack[((hsi*15+6353)*1+lsi)*1]), &(stack[((hsi*10+6343)*1+lsi)*1]), &(stack[((hsi*15+6482)*1+lsi)*1]), &(stack[((hsi*15+6467)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6518)*1+lsi)*1]), &(stack[((hsi*15+6387)*1+lsi)*1]), &(stack[((hsi*10+6377)*1+lsi)*1]), &(stack[((hsi*15+6467)*1+lsi)*1]), &(stack[((hsi*15+6482)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6539)*1+lsi)*1]), &(stack[((hsi*21+6436)*1+lsi)*1]), &(stack[((hsi*15+6421)*1+lsi)*1]), &(stack[((hsi*21+6518)*1+lsi)*1]), &(stack[((hsi*21+6497)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+6226)*1+lsi)*1]),&(stack[((hsi*28+6539)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6418)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*3+6290)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6567)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*6+6293)*1+lsi)*1]), &(stack[((hsi*10+6418)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6582)*1+lsi)*1]), &(stack[((hsi*10+6457)*1+lsi)*1]), &(stack[((hsi*6+6299)*1+lsi)*1]), &(stack[((hsi*10+6418)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6597)*1+lsi)*1]), &(stack[((hsi*15+6467)*1+lsi)*1]), &(stack[((hsi*10+6305)*1+lsi)*1]), &(stack[((hsi*15+6582)*1+lsi)*1]), &(stack[((hsi*15+6567)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6618)*1+lsi)*1]), &(stack[((hsi*15+6482)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*15+6567)*1+lsi)*1]), &(stack[((hsi*15+6582)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6639)*1+lsi)*1]), &(stack[((hsi*21+6497)*1+lsi)*1]), &(stack[((hsi*15+6353)*1+lsi)*1]), &(stack[((hsi*21+6618)*1+lsi)*1]), &(stack[((hsi*21+6597)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6667)*1+lsi)*1]), &(stack[((hsi*21+6518)*1+lsi)*1]), &(stack[((hsi*15+6387)*1+lsi)*1]), &(stack[((hsi*21+6597)*1+lsi)*1]), &(stack[((hsi*21+6618)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6695)*1+lsi)*1]), &(stack[((hsi*28+6539)*1+lsi)*1]), &(stack[((hsi*21+6436)*1+lsi)*1]), &(stack[((hsi*28+6667)*1+lsi)*1]), &(stack[((hsi*28+6639)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6190)*1+lsi)*1]),&(stack[((hsi*36+6695)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6731)*1+lsi)*1]), &(stack[((hsi*10+6418)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6746)*1+lsi)*1]), &(stack[((hsi*15+6567)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*15+6731)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6767)*1+lsi)*1]), &(stack[((hsi*15+6582)*1+lsi)*1]), &(stack[((hsi*10+6457)*1+lsi)*1]), &(stack[((hsi*15+6731)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6788)*1+lsi)*1]), &(stack[((hsi*21+6597)*1+lsi)*1]), &(stack[((hsi*15+6467)*1+lsi)*1]), &(stack[((hsi*21+6767)*1+lsi)*1]), &(stack[((hsi*21+6746)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6816)*1+lsi)*1]), &(stack[((hsi*21+6618)*1+lsi)*1]), &(stack[((hsi*15+6482)*1+lsi)*1]), &(stack[((hsi*21+6746)*1+lsi)*1]), &(stack[((hsi*21+6767)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6844)*1+lsi)*1]), &(stack[((hsi*28+6639)*1+lsi)*1]), &(stack[((hsi*21+6497)*1+lsi)*1]), &(stack[((hsi*28+6816)*1+lsi)*1]), &(stack[((hsi*28+6788)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6880)*1+lsi)*1]), &(stack[((hsi*28+6667)*1+lsi)*1]), &(stack[((hsi*21+6518)*1+lsi)*1]), &(stack[((hsi*28+6788)*1+lsi)*1]), &(stack[((hsi*28+6816)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6916)*1+lsi)*1]), &(stack[((hsi*36+6695)*1+lsi)*1]), &(stack[((hsi*28+6539)*1+lsi)*1]), &(stack[((hsi*36+6880)*1+lsi)*1]), &(stack[((hsi*36+6844)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6145)*1+lsi)*1]),&(stack[((hsi*45+6916)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6961)*1+lsi)*1]), &(stack[((hsi*15+6731)*1+lsi)*1]), &(stack[((hsi*10+6418)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6982)*1+lsi)*1]), &(stack[((hsi*21+6746)*1+lsi)*1]), &(stack[((hsi*15+6567)*1+lsi)*1]), &(stack[((hsi*21+6961)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7010)*1+lsi)*1]), &(stack[((hsi*21+6767)*1+lsi)*1]), &(stack[((hsi*15+6582)*1+lsi)*1]), &(stack[((hsi*21+6961)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7038)*1+lsi)*1]), &(stack[((hsi*28+6788)*1+lsi)*1]), &(stack[((hsi*21+6597)*1+lsi)*1]), &(stack[((hsi*28+7010)*1+lsi)*1]), &(stack[((hsi*28+6982)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7074)*1+lsi)*1]), &(stack[((hsi*28+6816)*1+lsi)*1]), &(stack[((hsi*21+6618)*1+lsi)*1]), &(stack[((hsi*28+6982)*1+lsi)*1]), &(stack[((hsi*28+7010)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7110)*1+lsi)*1]), &(stack[((hsi*36+6844)*1+lsi)*1]), &(stack[((hsi*28+6639)*1+lsi)*1]), &(stack[((hsi*36+7074)*1+lsi)*1]), &(stack[((hsi*36+7038)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7155)*1+lsi)*1]), &(stack[((hsi*36+6880)*1+lsi)*1]), &(stack[((hsi*28+6667)*1+lsi)*1]), &(stack[((hsi*36+7038)*1+lsi)*1]), &(stack[((hsi*36+7074)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7200)*1+lsi)*1]), &(stack[((hsi*45+6916)*1+lsi)*1]), &(stack[((hsi*36+6695)*1+lsi)*1]), &(stack[((hsi*45+7155)*1+lsi)*1]), &(stack[((hsi*45+7110)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6090)*1+lsi)*1]),&(stack[((hsi*55+7200)*1+lsi)*1]),55);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7255)*1+lsi)*1]), &(stack[((hsi*21+6961)*1+lsi)*1]), &(stack[((hsi*15+6731)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7283)*1+lsi)*1]), &(stack[((hsi*28+6982)*1+lsi)*1]), &(stack[((hsi*21+6746)*1+lsi)*1]), &(stack[((hsi*28+7255)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7319)*1+lsi)*1]), &(stack[((hsi*28+7010)*1+lsi)*1]), &(stack[((hsi*21+6767)*1+lsi)*1]), &(stack[((hsi*28+7255)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7355)*1+lsi)*1]), &(stack[((hsi*36+7038)*1+lsi)*1]), &(stack[((hsi*28+6788)*1+lsi)*1]), &(stack[((hsi*36+7319)*1+lsi)*1]), &(stack[((hsi*36+7283)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7400)*1+lsi)*1]), &(stack[((hsi*36+7074)*1+lsi)*1]), &(stack[((hsi*28+6816)*1+lsi)*1]), &(stack[((hsi*36+7283)*1+lsi)*1]), &(stack[((hsi*36+7319)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7445)*1+lsi)*1]), &(stack[((hsi*45+7110)*1+lsi)*1]), &(stack[((hsi*36+6844)*1+lsi)*1]), &(stack[((hsi*45+7400)*1+lsi)*1]), &(stack[((hsi*45+7355)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7500)*1+lsi)*1]), &(stack[((hsi*45+7155)*1+lsi)*1]), &(stack[((hsi*36+6880)*1+lsi)*1]), &(stack[((hsi*45+7355)*1+lsi)*1]), &(stack[((hsi*45+7400)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+7555)*1+lsi)*1]), &(stack[((hsi*55+7200)*1+lsi)*1]), &(stack[((hsi*45+6916)*1+lsi)*1]), &(stack[((hsi*55+7500)*1+lsi)*1]), &(stack[((hsi*55+7445)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6024)*1+lsi)*1]),&(stack[((hsi*66+7555)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6428)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6431)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7624)*1+lsi)*1]), &(stack[((hsi*3+6428)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*3+6431)*1+lsi)*1]), &(stack[((hsi*3+6315)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7630)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7633)*1+lsi)*1]), &(stack[((hsi*3+6431)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+7630)*1+lsi)*1]), &(stack[((hsi*3+6281)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7639)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+7630)*1+lsi)*1]), &(stack[((hsi*3+6278)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7645)*1+lsi)*1]), &(stack[((hsi*6+7624)*1+lsi)*1]), &(stack[((hsi*3+6428)*1+lsi)*1]), &(stack[((hsi*6+7639)*1+lsi)*1]), &(stack[((hsi*6+7633)*1+lsi)*1]), &(stack[((hsi*6+6318)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+6290)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7661)*1+lsi)*1]), &(stack[((hsi*6+7633)*1+lsi)*1]), &(stack[((hsi*3+6431)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*6+6299)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7671)*1+lsi)*1]), &(stack[((hsi*6+7639)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*6+6293)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7681)*1+lsi)*1]), &(stack[((hsi*10+7645)*1+lsi)*1]), &(stack[((hsi*6+7624)*1+lsi)*1]), &(stack[((hsi*10+7671)*1+lsi)*1]), &(stack[((hsi*10+7661)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6290)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7696)*1+lsi)*1]), &(stack[((hsi*3+6290)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+6431)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*3+6275)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7702)*1+lsi)*1]), &(stack[((hsi*6+7696)*1+lsi)*1]), &(stack[((hsi*3+6290)*1+lsi)*1]), &(stack[((hsi*6+7633)*1+lsi)*1]), &(stack[((hsi*6+7639)*1+lsi)*1]), &(stack[((hsi*6+6284)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7712)*1+lsi)*1]), &(stack[((hsi*10+7702)*1+lsi)*1]), &(stack[((hsi*6+7696)*1+lsi)*1]), &(stack[((hsi*10+7661)*1+lsi)*1]), &(stack[((hsi*10+7671)*1+lsi)*1]), &(stack[((hsi*10+6305)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7727)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7730)*1+lsi)*1]), &(stack[((hsi*3+7727)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+6290)*1+lsi)*1]), &(stack[((hsi*3+6428)*1+lsi)*1]), &(stack[((hsi*3+6368)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7736)*1+lsi)*1]), &(stack[((hsi*6+7730)*1+lsi)*1]), &(stack[((hsi*3+7727)*1+lsi)*1]), &(stack[((hsi*6+7696)*1+lsi)*1]), &(stack[((hsi*6+7624)*1+lsi)*1]), &(stack[((hsi*6+6371)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7746)*1+lsi)*1]), &(stack[((hsi*10+7736)*1+lsi)*1]), &(stack[((hsi*6+7730)*1+lsi)*1]), &(stack[((hsi*10+7702)*1+lsi)*1]), &(stack[((hsi*10+7645)*1+lsi)*1]), &(stack[((hsi*10+6377)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7761)*1+lsi)*1]), &(stack[((hsi*15+7746)*1+lsi)*1]), &(stack[((hsi*10+7736)*1+lsi)*1]), &(stack[((hsi*15+7712)*1+lsi)*1]), &(stack[((hsi*15+7681)*1+lsi)*1]), &(stack[((hsi*15+6387)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+6003)*1+lsi)*1]),&(stack[((hsi*21+7761)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7727)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7782)*1+lsi)*1]), &(stack[((hsi*10+7661)*1+lsi)*1]), &(stack[((hsi*6+7633)*1+lsi)*1]), &(stack[((hsi*10+7727)*1+lsi)*1]), &(stack[((hsi*10+6457)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7797)*1+lsi)*1]), &(stack[((hsi*10+7671)*1+lsi)*1]), &(stack[((hsi*6+7639)*1+lsi)*1]), &(stack[((hsi*10+7727)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7812)*1+lsi)*1]), &(stack[((hsi*15+7681)*1+lsi)*1]), &(stack[((hsi*10+7645)*1+lsi)*1]), &(stack[((hsi*15+7797)*1+lsi)*1]), &(stack[((hsi*15+7782)*1+lsi)*1]), &(stack[((hsi*15+6482)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7833)*1+lsi)*1]), &(stack[((hsi*15+7712)*1+lsi)*1]), &(stack[((hsi*10+7702)*1+lsi)*1]), &(stack[((hsi*15+7782)*1+lsi)*1]), &(stack[((hsi*15+7797)*1+lsi)*1]), &(stack[((hsi*15+6467)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7854)*1+lsi)*1]), &(stack[((hsi*21+7761)*1+lsi)*1]), &(stack[((hsi*15+7746)*1+lsi)*1]), &(stack[((hsi*21+7833)*1+lsi)*1]), &(stack[((hsi*21+7812)*1+lsi)*1]), &(stack[((hsi*21+6518)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5975)*1+lsi)*1]),&(stack[((hsi*28+7854)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7737)*1+lsi)*1]), &(stack[((hsi*10+7727)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*10+6418)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7882)*1+lsi)*1]), &(stack[((hsi*15+7782)*1+lsi)*1]), &(stack[((hsi*10+7661)*1+lsi)*1]), &(stack[((hsi*15+7737)*1+lsi)*1]), &(stack[((hsi*15+6582)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7903)*1+lsi)*1]), &(stack[((hsi*15+7797)*1+lsi)*1]), &(stack[((hsi*10+7671)*1+lsi)*1]), &(stack[((hsi*15+7737)*1+lsi)*1]), &(stack[((hsi*15+6567)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7924)*1+lsi)*1]), &(stack[((hsi*21+7812)*1+lsi)*1]), &(stack[((hsi*15+7681)*1+lsi)*1]), &(stack[((hsi*21+7903)*1+lsi)*1]), &(stack[((hsi*21+7882)*1+lsi)*1]), &(stack[((hsi*21+6618)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7952)*1+lsi)*1]), &(stack[((hsi*21+7833)*1+lsi)*1]), &(stack[((hsi*15+7712)*1+lsi)*1]), &(stack[((hsi*21+7882)*1+lsi)*1]), &(stack[((hsi*21+7903)*1+lsi)*1]), &(stack[((hsi*21+6597)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7980)*1+lsi)*1]), &(stack[((hsi*28+7854)*1+lsi)*1]), &(stack[((hsi*21+7761)*1+lsi)*1]), &(stack[((hsi*28+7952)*1+lsi)*1]), &(stack[((hsi*28+7924)*1+lsi)*1]), &(stack[((hsi*28+6667)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5939)*1+lsi)*1]),&(stack[((hsi*36+7980)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8016)*1+lsi)*1]), &(stack[((hsi*15+7737)*1+lsi)*1]), &(stack[((hsi*10+7727)*1+lsi)*1]), &(stack[((hsi*15+6731)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8037)*1+lsi)*1]), &(stack[((hsi*21+7882)*1+lsi)*1]), &(stack[((hsi*15+7782)*1+lsi)*1]), &(stack[((hsi*21+8016)*1+lsi)*1]), &(stack[((hsi*21+6767)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*21+7903)*1+lsi)*1]), &(stack[((hsi*15+7797)*1+lsi)*1]), &(stack[((hsi*21+8016)*1+lsi)*1]), &(stack[((hsi*21+6746)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8093)*1+lsi)*1]), &(stack[((hsi*28+7924)*1+lsi)*1]), &(stack[((hsi*21+7812)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*28+8037)*1+lsi)*1]), &(stack[((hsi*28+6816)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8129)*1+lsi)*1]), &(stack[((hsi*28+7952)*1+lsi)*1]), &(stack[((hsi*21+7833)*1+lsi)*1]), &(stack[((hsi*28+8037)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*28+6788)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8165)*1+lsi)*1]), &(stack[((hsi*36+7980)*1+lsi)*1]), &(stack[((hsi*28+7854)*1+lsi)*1]), &(stack[((hsi*36+8129)*1+lsi)*1]), &(stack[((hsi*36+8093)*1+lsi)*1]), &(stack[((hsi*36+6880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5894)*1+lsi)*1]),&(stack[((hsi*45+8165)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8210)*1+lsi)*1]), &(stack[((hsi*21+8016)*1+lsi)*1]), &(stack[((hsi*15+7737)*1+lsi)*1]), &(stack[((hsi*21+6961)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8238)*1+lsi)*1]), &(stack[((hsi*28+8037)*1+lsi)*1]), &(stack[((hsi*21+7882)*1+lsi)*1]), &(stack[((hsi*28+8210)*1+lsi)*1]), &(stack[((hsi*28+7010)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8274)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*21+7903)*1+lsi)*1]), &(stack[((hsi*28+8210)*1+lsi)*1]), &(stack[((hsi*28+6982)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8310)*1+lsi)*1]), &(stack[((hsi*36+8093)*1+lsi)*1]), &(stack[((hsi*28+7924)*1+lsi)*1]), &(stack[((hsi*36+8274)*1+lsi)*1]), &(stack[((hsi*36+8238)*1+lsi)*1]), &(stack[((hsi*36+7074)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8355)*1+lsi)*1]), &(stack[((hsi*36+8129)*1+lsi)*1]), &(stack[((hsi*28+7952)*1+lsi)*1]), &(stack[((hsi*36+8238)*1+lsi)*1]), &(stack[((hsi*36+8274)*1+lsi)*1]), &(stack[((hsi*36+7038)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8400)*1+lsi)*1]), &(stack[((hsi*45+8165)*1+lsi)*1]), &(stack[((hsi*36+7980)*1+lsi)*1]), &(stack[((hsi*45+8355)*1+lsi)*1]), &(stack[((hsi*45+8310)*1+lsi)*1]), &(stack[((hsi*45+7155)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5839)*1+lsi)*1]),&(stack[((hsi*55+8400)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8455)*1+lsi)*1]), &(stack[((hsi*28+8210)*1+lsi)*1]), &(stack[((hsi*21+8016)*1+lsi)*1]), &(stack[((hsi*28+7255)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8491)*1+lsi)*1]), &(stack[((hsi*36+8238)*1+lsi)*1]), &(stack[((hsi*28+8037)*1+lsi)*1]), &(stack[((hsi*36+8455)*1+lsi)*1]), &(stack[((hsi*36+7319)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8536)*1+lsi)*1]), &(stack[((hsi*36+8274)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*36+8455)*1+lsi)*1]), &(stack[((hsi*36+7283)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8581)*1+lsi)*1]), &(stack[((hsi*45+8310)*1+lsi)*1]), &(stack[((hsi*36+8093)*1+lsi)*1]), &(stack[((hsi*45+8536)*1+lsi)*1]), &(stack[((hsi*45+8491)*1+lsi)*1]), &(stack[((hsi*45+7400)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8636)*1+lsi)*1]), &(stack[((hsi*45+8355)*1+lsi)*1]), &(stack[((hsi*36+8129)*1+lsi)*1]), &(stack[((hsi*45+8491)*1+lsi)*1]), &(stack[((hsi*45+8536)*1+lsi)*1]), &(stack[((hsi*45+7355)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+8691)*1+lsi)*1]), &(stack[((hsi*55+8400)*1+lsi)*1]), &(stack[((hsi*45+8165)*1+lsi)*1]), &(stack[((hsi*55+8636)*1+lsi)*1]), &(stack[((hsi*55+8581)*1+lsi)*1]), &(stack[((hsi*55+7500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5773)*1+lsi)*1]),&(stack[((hsi*66+8691)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6731)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6734)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*3+6731)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+6315)*1+lsi)*1]), &(stack[((hsi*3+6275)*1+lsi)*1]), &(stack[((hsi*3+6734)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6418)*1+lsi)*1]), &(stack[((hsi*3+6734)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+6281)*1+lsi)*1]), &(stack[((hsi*3+6278)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8757)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*3+6731)*1+lsi)*1]), &(stack[((hsi*6+6318)*1+lsi)*1]), &(stack[((hsi*6+6284)*1+lsi)*1]), &(stack[((hsi*6+6418)*1+lsi)*1]), &(stack[((hsi*6+7639)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+6418)*1+lsi)*1]), &(stack[((hsi*3+6734)*1+lsi)*1]), &(stack[((hsi*6+6299)*1+lsi)*1]), &(stack[((hsi*6+6293)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+8777)*1+lsi)*1]), &(stack[((hsi*10+8757)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*10+6305)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*10+7671)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7630)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+6275)*1+lsi)*1]), &(stack[((hsi*3+6734)*1+lsi)*1]), &(stack[((hsi*3+6315)*1+lsi)*1]), &(stack[((hsi*3+6431)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6293)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]), &(stack[((hsi*6+6284)*1+lsi)*1]), &(stack[((hsi*6+6418)*1+lsi)*1]), &(stack[((hsi*6+6318)*1+lsi)*1]), &(stack[((hsi*6+7633)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6275)*1+lsi)*1]), &(stack[((hsi*10+6293)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*10+6305)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*10+7661)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6303)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+6306)*1+lsi)*1]), &(stack[((hsi*3+6303)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+6368)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]), &(stack[((hsi*3+6334)*1+lsi)*1]), &(stack[((hsi*3+6731)*1+lsi)*1]), &(stack[((hsi*3+6290)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6312)*1+lsi)*1]), &(stack[((hsi*6+6306)*1+lsi)*1]), &(stack[((hsi*3+6303)*1+lsi)*1]), &(stack[((hsi*6+6371)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*6+6337)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*6+7696)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*10+6312)*1+lsi)*1]), &(stack[((hsi*6+6306)*1+lsi)*1]), &(stack[((hsi*10+6377)*1+lsi)*1]), &(stack[((hsi*10+6293)*1+lsi)*1]), &(stack[((hsi*10+6343)*1+lsi)*1]), &(stack[((hsi*10+8757)*1+lsi)*1]), &(stack[((hsi*10+7702)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8807)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*10+6312)*1+lsi)*1]), &(stack[((hsi*15+6387)*1+lsi)*1]), &(stack[((hsi*15+6275)*1+lsi)*1]), &(stack[((hsi*15+6353)*1+lsi)*1]), &(stack[((hsi*15+8777)*1+lsi)*1]), &(stack[((hsi*15+7712)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+5752)*1+lsi)*1]),&(stack[((hsi*21+8807)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+6418)*1+lsi)*1]), &(stack[((hsi*10+6457)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*10+7727)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8828)*1+lsi)*1]), &(stack[((hsi*15+8777)*1+lsi)*1]), &(stack[((hsi*10+8757)*1+lsi)*1]), &(stack[((hsi*15+6482)*1+lsi)*1]), &(stack[((hsi*15+6467)*1+lsi)*1]), &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*15+7797)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8849)*1+lsi)*1]), &(stack[((hsi*15+6275)*1+lsi)*1]), &(stack[((hsi*10+6293)*1+lsi)*1]), &(stack[((hsi*15+6467)*1+lsi)*1]), &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*15+6482)*1+lsi)*1]), &(stack[((hsi*15+7782)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6457)*1+lsi)*1]), &(stack[((hsi*21+8807)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*21+6518)*1+lsi)*1]), &(stack[((hsi*21+8849)*1+lsi)*1]), &(stack[((hsi*21+6497)*1+lsi)*1]), &(stack[((hsi*21+8828)*1+lsi)*1]), &(stack[((hsi*21+7833)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5724)*1+lsi)*1]),&(stack[((hsi*28+6457)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8870)*1+lsi)*1]), &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*15+6582)*1+lsi)*1]), &(stack[((hsi*15+6567)*1+lsi)*1]), &(stack[((hsi*15+7737)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7727)*1+lsi)*1]), &(stack[((hsi*21+8828)*1+lsi)*1]), &(stack[((hsi*15+8777)*1+lsi)*1]), &(stack[((hsi*21+6618)*1+lsi)*1]), &(stack[((hsi*21+6597)*1+lsi)*1]), &(stack[((hsi*21+8870)*1+lsi)*1]), &(stack[((hsi*21+7903)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6567)*1+lsi)*1]), &(stack[((hsi*21+8849)*1+lsi)*1]), &(stack[((hsi*15+6275)*1+lsi)*1]), &(stack[((hsi*21+6597)*1+lsi)*1]), &(stack[((hsi*21+8870)*1+lsi)*1]), &(stack[((hsi*21+6618)*1+lsi)*1]), &(stack[((hsi*21+7882)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8891)*1+lsi)*1]), &(stack[((hsi*28+6457)*1+lsi)*1]), &(stack[((hsi*21+8807)*1+lsi)*1]), &(stack[((hsi*28+6667)*1+lsi)*1]), &(stack[((hsi*28+6567)*1+lsi)*1]), &(stack[((hsi*28+6639)*1+lsi)*1]), &(stack[((hsi*28+7727)*1+lsi)*1]), &(stack[((hsi*28+7952)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5688)*1+lsi)*1]),&(stack[((hsi*36+8891)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8927)*1+lsi)*1]), &(stack[((hsi*21+8870)*1+lsi)*1]), &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*21+6767)*1+lsi)*1]), &(stack[((hsi*21+6746)*1+lsi)*1]), &(stack[((hsi*21+8016)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8955)*1+lsi)*1]), &(stack[((hsi*28+7727)*1+lsi)*1]), &(stack[((hsi*21+8828)*1+lsi)*1]), &(stack[((hsi*28+6816)*1+lsi)*1]), &(stack[((hsi*28+6788)*1+lsi)*1]), &(stack[((hsi*28+8927)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8991)*1+lsi)*1]), &(stack[((hsi*28+6567)*1+lsi)*1]), &(stack[((hsi*21+8849)*1+lsi)*1]), &(stack[((hsi*28+6788)*1+lsi)*1]), &(stack[((hsi*28+8927)*1+lsi)*1]), &(stack[((hsi*28+6816)*1+lsi)*1]), &(stack[((hsi*28+8037)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9027)*1+lsi)*1]), &(stack[((hsi*36+8891)*1+lsi)*1]), &(stack[((hsi*28+6457)*1+lsi)*1]), &(stack[((hsi*36+6880)*1+lsi)*1]), &(stack[((hsi*36+8991)*1+lsi)*1]), &(stack[((hsi*36+6844)*1+lsi)*1]), &(stack[((hsi*36+8955)*1+lsi)*1]), &(stack[((hsi*36+8129)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5643)*1+lsi)*1]),&(stack[((hsi*45+9027)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9072)*1+lsi)*1]), &(stack[((hsi*28+8927)*1+lsi)*1]), &(stack[((hsi*21+8870)*1+lsi)*1]), &(stack[((hsi*28+7010)*1+lsi)*1]), &(stack[((hsi*28+6982)*1+lsi)*1]), &(stack[((hsi*28+8210)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9108)*1+lsi)*1]), &(stack[((hsi*36+8955)*1+lsi)*1]), &(stack[((hsi*28+7727)*1+lsi)*1]), &(stack[((hsi*36+7074)*1+lsi)*1]), &(stack[((hsi*36+7038)*1+lsi)*1]), &(stack[((hsi*36+9072)*1+lsi)*1]), &(stack[((hsi*36+8274)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9153)*1+lsi)*1]), &(stack[((hsi*36+8991)*1+lsi)*1]), &(stack[((hsi*28+6567)*1+lsi)*1]), &(stack[((hsi*36+7038)*1+lsi)*1]), &(stack[((hsi*36+9072)*1+lsi)*1]), &(stack[((hsi*36+7074)*1+lsi)*1]), &(stack[((hsi*36+8238)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9198)*1+lsi)*1]), &(stack[((hsi*45+9027)*1+lsi)*1]), &(stack[((hsi*36+8891)*1+lsi)*1]), &(stack[((hsi*45+7155)*1+lsi)*1]), &(stack[((hsi*45+9153)*1+lsi)*1]), &(stack[((hsi*45+7110)*1+lsi)*1]), &(stack[((hsi*45+9108)*1+lsi)*1]), &(stack[((hsi*45+8355)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5588)*1+lsi)*1]),&(stack[((hsi*55+9198)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9253)*1+lsi)*1]), &(stack[((hsi*36+9072)*1+lsi)*1]), &(stack[((hsi*28+8927)*1+lsi)*1]), &(stack[((hsi*36+7319)*1+lsi)*1]), &(stack[((hsi*36+7283)*1+lsi)*1]), &(stack[((hsi*36+8455)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9298)*1+lsi)*1]), &(stack[((hsi*45+9108)*1+lsi)*1]), &(stack[((hsi*36+8955)*1+lsi)*1]), &(stack[((hsi*45+7400)*1+lsi)*1]), &(stack[((hsi*45+7355)*1+lsi)*1]), &(stack[((hsi*45+9253)*1+lsi)*1]), &(stack[((hsi*45+8536)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9353)*1+lsi)*1]), &(stack[((hsi*45+9153)*1+lsi)*1]), &(stack[((hsi*36+8991)*1+lsi)*1]), &(stack[((hsi*45+7355)*1+lsi)*1]), &(stack[((hsi*45+9253)*1+lsi)*1]), &(stack[((hsi*45+7400)*1+lsi)*1]), &(stack[((hsi*45+8491)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9408)*1+lsi)*1]), &(stack[((hsi*55+9198)*1+lsi)*1]), &(stack[((hsi*45+9027)*1+lsi)*1]), &(stack[((hsi*55+7500)*1+lsi)*1]), &(stack[((hsi*55+9353)*1+lsi)*1]), &(stack[((hsi*55+7445)*1+lsi)*1]), &(stack[((hsi*55+9298)*1+lsi)*1]), &(stack[((hsi*55+8636)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5522)*1+lsi)*1]),&(stack[((hsi*66+9408)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+6318)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+6318)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+6431)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*3+6734)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+6318)*1+lsi)*1]), &(stack[((hsi*6+7633)*1+lsi)*1]), &(stack[((hsi*6+7639)*1+lsi)*1]), &(stack[((hsi*6+6418)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*10+7661)*1+lsi)*1]), &(stack[((hsi*10+7671)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+6290)*1+lsi)*1]), &(stack[((hsi*3+6318)*1+lsi)*1]), &(stack[((hsi*3+6428)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*6+7696)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*6+7624)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*10+7702)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*10+7645)*1+lsi)*1]), &(stack[((hsi*10+6293)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9489)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*15+7712)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*15+7681)*1+lsi)*1]), &(stack[((hsi*15+6275)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+5501)*1+lsi)*1]),&(stack[((hsi*21+9489)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9510)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*15+7782)*1+lsi)*1]), &(stack[((hsi*15+7797)*1+lsi)*1]), &(stack[((hsi*15+6303)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7782)*1+lsi)*1]), &(stack[((hsi*21+9489)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*21+7833)*1+lsi)*1]), &(stack[((hsi*21+9510)*1+lsi)*1]), &(stack[((hsi*21+7812)*1+lsi)*1]), &(stack[((hsi*21+8849)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5473)*1+lsi)*1]),&(stack[((hsi*28+7782)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9531)*1+lsi)*1]), &(stack[((hsi*21+9510)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*21+7882)*1+lsi)*1]), &(stack[((hsi*21+7903)*1+lsi)*1]), &(stack[((hsi*21+8870)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9559)*1+lsi)*1]), &(stack[((hsi*28+7782)*1+lsi)*1]), &(stack[((hsi*21+9489)*1+lsi)*1]), &(stack[((hsi*28+7952)*1+lsi)*1]), &(stack[((hsi*28+9531)*1+lsi)*1]), &(stack[((hsi*28+7924)*1+lsi)*1]), &(stack[((hsi*28+6567)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5437)*1+lsi)*1]),&(stack[((hsi*36+9559)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9595)*1+lsi)*1]), &(stack[((hsi*28+9531)*1+lsi)*1]), &(stack[((hsi*21+9510)*1+lsi)*1]), &(stack[((hsi*28+8037)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*28+8927)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9631)*1+lsi)*1]), &(stack[((hsi*36+9559)*1+lsi)*1]), &(stack[((hsi*28+7782)*1+lsi)*1]), &(stack[((hsi*36+8129)*1+lsi)*1]), &(stack[((hsi*36+9595)*1+lsi)*1]), &(stack[((hsi*36+8093)*1+lsi)*1]), &(stack[((hsi*36+8991)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5392)*1+lsi)*1]),&(stack[((hsi*45+9631)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9676)*1+lsi)*1]), &(stack[((hsi*36+9595)*1+lsi)*1]), &(stack[((hsi*28+9531)*1+lsi)*1]), &(stack[((hsi*36+8238)*1+lsi)*1]), &(stack[((hsi*36+8274)*1+lsi)*1]), &(stack[((hsi*36+9072)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9721)*1+lsi)*1]), &(stack[((hsi*45+9631)*1+lsi)*1]), &(stack[((hsi*36+9559)*1+lsi)*1]), &(stack[((hsi*45+8355)*1+lsi)*1]), &(stack[((hsi*45+9676)*1+lsi)*1]), &(stack[((hsi*45+8310)*1+lsi)*1]), &(stack[((hsi*45+9153)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5337)*1+lsi)*1]),&(stack[((hsi*55+9721)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9776)*1+lsi)*1]), &(stack[((hsi*45+9676)*1+lsi)*1]), &(stack[((hsi*36+9595)*1+lsi)*1]), &(stack[((hsi*45+8491)*1+lsi)*1]), &(stack[((hsi*45+8536)*1+lsi)*1]), &(stack[((hsi*45+9253)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9831)*1+lsi)*1]), &(stack[((hsi*55+9721)*1+lsi)*1]), &(stack[((hsi*45+9631)*1+lsi)*1]), &(stack[((hsi*55+8636)*1+lsi)*1]), &(stack[((hsi*55+9776)*1+lsi)*1]), &(stack[((hsi*55+8581)*1+lsi)*1]), &(stack[((hsi*55+9353)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5271)*1+lsi)*1]),&(stack[((hsi*66+9831)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+7630)*1+lsi)*1]), &(stack[((hsi*3+6731)*1+lsi)*1]), &(stack[((hsi*3+6318)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*10+6293)*1+lsi)*1]), &(stack[((hsi*10+8757)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9897)*1+lsi)*1]), &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*15+6275)*1+lsi)*1]), &(stack[((hsi*15+8777)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+5250)*1+lsi)*1]),&(stack[((hsi*21+9897)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9918)*1+lsi)*1]), &(stack[((hsi*21+9897)*1+lsi)*1]), &(stack[((hsi*15+6303)*1+lsi)*1]), &(stack[((hsi*21+8849)*1+lsi)*1]), &(stack[((hsi*21+8828)*1+lsi)*1]), &(stack[((hsi*21+9510)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5222)*1+lsi)*1]),&(stack[((hsi*28+9918)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9946)*1+lsi)*1]), &(stack[((hsi*28+9918)*1+lsi)*1]), &(stack[((hsi*21+9897)*1+lsi)*1]), &(stack[((hsi*28+6567)*1+lsi)*1]), &(stack[((hsi*28+7727)*1+lsi)*1]), &(stack[((hsi*28+9531)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5186)*1+lsi)*1]),&(stack[((hsi*36+9946)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9982)*1+lsi)*1]), &(stack[((hsi*36+9946)*1+lsi)*1]), &(stack[((hsi*28+9918)*1+lsi)*1]), &(stack[((hsi*36+8991)*1+lsi)*1]), &(stack[((hsi*36+8955)*1+lsi)*1]), &(stack[((hsi*36+9595)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5141)*1+lsi)*1]),&(stack[((hsi*45+9982)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10027)*1+lsi)*1]), &(stack[((hsi*45+9982)*1+lsi)*1]), &(stack[((hsi*36+9946)*1+lsi)*1]), &(stack[((hsi*45+9153)*1+lsi)*1]), &(stack[((hsi*45+9108)*1+lsi)*1]), &(stack[((hsi*45+9676)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5086)*1+lsi)*1]),&(stack[((hsi*55+10027)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10082)*1+lsi)*1]), &(stack[((hsi*55+10027)*1+lsi)*1]), &(stack[((hsi*45+9982)*1+lsi)*1]), &(stack[((hsi*55+9353)*1+lsi)*1]), &(stack[((hsi*55+9298)*1+lsi)*1]), &(stack[((hsi*55+9776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5020)*1+lsi)*1]),&(stack[((hsi*66+10082)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+6428)*1+lsi)*1]), &(stack[((hsi*3+6290)*1+lsi)*1]), &(stack[((hsi*3+6318)*1+lsi)*1]), &(stack[((hsi*3+6731)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*6+7624)*1+lsi)*1]), &(stack[((hsi*6+7696)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7661)*1+lsi)*1]), &(stack[((hsi*10+7645)*1+lsi)*1]), &(stack[((hsi*10+7702)*1+lsi)*1]), &(stack[((hsi*10+6408)*1+lsi)*1]), &(stack[((hsi*10+8757)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6303)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*15+7681)*1+lsi)*1]), &(stack[((hsi*15+7712)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*15+8777)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4999)*1+lsi)*1]),&(stack[((hsi*21+6303)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10148)*1+lsi)*1]), &(stack[((hsi*21+6303)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*21+7812)*1+lsi)*1]), &(stack[((hsi*21+7833)*1+lsi)*1]), &(stack[((hsi*21+9510)*1+lsi)*1]), &(stack[((hsi*21+8828)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4971)*1+lsi)*1]),&(stack[((hsi*28+10148)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10176)*1+lsi)*1]), &(stack[((hsi*28+10148)*1+lsi)*1]), &(stack[((hsi*21+6303)*1+lsi)*1]), &(stack[((hsi*28+7924)*1+lsi)*1]), &(stack[((hsi*28+7952)*1+lsi)*1]), &(stack[((hsi*28+9531)*1+lsi)*1]), &(stack[((hsi*28+7727)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4935)*1+lsi)*1]),&(stack[((hsi*36+10176)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10212)*1+lsi)*1]), &(stack[((hsi*36+10176)*1+lsi)*1]), &(stack[((hsi*28+10148)*1+lsi)*1]), &(stack[((hsi*36+8093)*1+lsi)*1]), &(stack[((hsi*36+8129)*1+lsi)*1]), &(stack[((hsi*36+9595)*1+lsi)*1]), &(stack[((hsi*36+8955)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4890)*1+lsi)*1]),&(stack[((hsi*45+10212)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10257)*1+lsi)*1]), &(stack[((hsi*45+10212)*1+lsi)*1]), &(stack[((hsi*36+10176)*1+lsi)*1]), &(stack[((hsi*45+8310)*1+lsi)*1]), &(stack[((hsi*45+8355)*1+lsi)*1]), &(stack[((hsi*45+9676)*1+lsi)*1]), &(stack[((hsi*45+9108)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4835)*1+lsi)*1]),&(stack[((hsi*55+10257)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10312)*1+lsi)*1]), &(stack[((hsi*55+10257)*1+lsi)*1]), &(stack[((hsi*45+10212)*1+lsi)*1]), &(stack[((hsi*55+8581)*1+lsi)*1]), &(stack[((hsi*55+8636)*1+lsi)*1]), &(stack[((hsi*55+9776)*1+lsi)*1]), &(stack[((hsi*55+9298)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4769)*1+lsi)*1]),&(stack[((hsi*66+10312)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+6334)*1+lsi)*1]), &(stack[((hsi*3+6731)*1+lsi)*1]), &(stack[((hsi*3+6368)*1+lsi)*1]), &(stack[((hsi*3+7630)*1+lsi)*1]), &(stack[((hsi*3+6428)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*6+6337)*1+lsi)*1]), &(stack[((hsi*6+6402)*1+lsi)*1]), &(stack[((hsi*6+6371)*1+lsi)*1]), &(stack[((hsi*6+7655)*1+lsi)*1]), &(stack[((hsi*6+7624)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*10+6343)*1+lsi)*1]), &(stack[((hsi*10+8757)*1+lsi)*1]), &(stack[((hsi*10+6377)*1+lsi)*1]), &(stack[((hsi*10+6293)*1+lsi)*1]), &(stack[((hsi*10+7645)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6402)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*10+8767)*1+lsi)*1]), &(stack[((hsi*15+6353)*1+lsi)*1]), &(stack[((hsi*15+8777)*1+lsi)*1]), &(stack[((hsi*15+6387)*1+lsi)*1]), &(stack[((hsi*15+6275)*1+lsi)*1]), &(stack[((hsi*15+7681)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4748)*1+lsi)*1]),&(stack[((hsi*21+6402)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8757)*1+lsi)*1]), &(stack[((hsi*21+6402)*1+lsi)*1]), &(stack[((hsi*15+8792)*1+lsi)*1]), &(stack[((hsi*21+6497)*1+lsi)*1]), &(stack[((hsi*21+8828)*1+lsi)*1]), &(stack[((hsi*21+6518)*1+lsi)*1]), &(stack[((hsi*21+8849)*1+lsi)*1]), &(stack[((hsi*21+7812)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4720)*1+lsi)*1]),&(stack[((hsi*28+8757)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10378)*1+lsi)*1]), &(stack[((hsi*28+8757)*1+lsi)*1]), &(stack[((hsi*21+6402)*1+lsi)*1]), &(stack[((hsi*28+6639)*1+lsi)*1]), &(stack[((hsi*28+7727)*1+lsi)*1]), &(stack[((hsi*28+6667)*1+lsi)*1]), &(stack[((hsi*28+6567)*1+lsi)*1]), &(stack[((hsi*28+7924)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4684)*1+lsi)*1]),&(stack[((hsi*36+10378)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10414)*1+lsi)*1]), &(stack[((hsi*36+10378)*1+lsi)*1]), &(stack[((hsi*28+8757)*1+lsi)*1]), &(stack[((hsi*36+6844)*1+lsi)*1]), &(stack[((hsi*36+8955)*1+lsi)*1]), &(stack[((hsi*36+6880)*1+lsi)*1]), &(stack[((hsi*36+8991)*1+lsi)*1]), &(stack[((hsi*36+8093)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4639)*1+lsi)*1]),&(stack[((hsi*45+10414)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10459)*1+lsi)*1]), &(stack[((hsi*45+10414)*1+lsi)*1]), &(stack[((hsi*36+10378)*1+lsi)*1]), &(stack[((hsi*45+7110)*1+lsi)*1]), &(stack[((hsi*45+9108)*1+lsi)*1]), &(stack[((hsi*45+7155)*1+lsi)*1]), &(stack[((hsi*45+9153)*1+lsi)*1]), &(stack[((hsi*45+8310)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4584)*1+lsi)*1]),&(stack[((hsi*55+10459)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10514)*1+lsi)*1]), &(stack[((hsi*55+10459)*1+lsi)*1]), &(stack[((hsi*45+10414)*1+lsi)*1]), &(stack[((hsi*55+7445)*1+lsi)*1]), &(stack[((hsi*55+9298)*1+lsi)*1]), &(stack[((hsi*55+7500)*1+lsi)*1]), &(stack[((hsi*55+9353)*1+lsi)*1]), &(stack[((hsi*55+8581)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4518)*1+lsi)*1]),&(stack[((hsi*66+10514)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+6428)*1+lsi)*1]), &(stack[((hsi*3+6290)*1+lsi)*1]), &(stack[((hsi*3+6334)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+7621)*1+lsi)*1]), &(stack[((hsi*6+7624)*1+lsi)*1]), &(stack[((hsi*6+7696)*1+lsi)*1]), &(stack[((hsi*6+6337)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*10+7645)*1+lsi)*1]), &(stack[((hsi*10+7702)*1+lsi)*1]), &(stack[((hsi*10+6343)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7621)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+6324)*1+lsi)*1]), &(stack[((hsi*15+7681)*1+lsi)*1]), &(stack[((hsi*15+7712)*1+lsi)*1]), &(stack[((hsi*15+6353)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4497)*1+lsi)*1]),&(stack[((hsi*21+7621)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6275)*1+lsi)*1]), &(stack[((hsi*21+7621)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*21+7812)*1+lsi)*1]), &(stack[((hsi*21+7833)*1+lsi)*1]), &(stack[((hsi*21+6497)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4469)*1+lsi)*1]),&(stack[((hsi*28+6275)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7642)*1+lsi)*1]), &(stack[((hsi*28+6275)*1+lsi)*1]), &(stack[((hsi*21+7621)*1+lsi)*1]), &(stack[((hsi*28+7924)*1+lsi)*1]), &(stack[((hsi*28+7952)*1+lsi)*1]), &(stack[((hsi*28+6639)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4433)*1+lsi)*1]),&(stack[((hsi*36+7642)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7678)*1+lsi)*1]), &(stack[((hsi*36+7642)*1+lsi)*1]), &(stack[((hsi*28+6275)*1+lsi)*1]), &(stack[((hsi*36+8093)*1+lsi)*1]), &(stack[((hsi*36+8129)*1+lsi)*1]), &(stack[((hsi*36+6844)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4388)*1+lsi)*1]),&(stack[((hsi*45+7678)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10580)*1+lsi)*1]), &(stack[((hsi*45+7678)*1+lsi)*1]), &(stack[((hsi*36+7642)*1+lsi)*1]), &(stack[((hsi*45+8310)*1+lsi)*1]), &(stack[((hsi*45+8355)*1+lsi)*1]), &(stack[((hsi*45+7110)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4333)*1+lsi)*1]),&(stack[((hsi*55+10580)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10635)*1+lsi)*1]), &(stack[((hsi*55+10580)*1+lsi)*1]), &(stack[((hsi*45+7678)*1+lsi)*1]), &(stack[((hsi*55+8581)*1+lsi)*1]), &(stack[((hsi*55+8636)*1+lsi)*1]), &(stack[((hsi*55+7445)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4267)*1+lsi)*1]),&(stack[((hsi*66+10635)*1+lsi)*1]),66);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+8785)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+8785)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+6334)*1+lsi)*1]), &(stack[((hsi*3+6368)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8788)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*3+8785)*1+lsi)*1]), &(stack[((hsi*6+6337)*1+lsi)*1]), &(stack[((hsi*6+6371)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+8788)*1+lsi)*1]), &(stack[((hsi*6+7755)*1+lsi)*1]), &(stack[((hsi*10+6343)*1+lsi)*1]), &(stack[((hsi*10+6377)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+6324)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*10+8788)*1+lsi)*1]), &(stack[((hsi*15+6353)*1+lsi)*1]), &(stack[((hsi*15+6387)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+4246)*1+lsi)*1]),&(stack[((hsi*21+6324)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+6345)*1+lsi)*1]), &(stack[((hsi*21+6324)*1+lsi)*1]), &(stack[((hsi*15+9474)*1+lsi)*1]), &(stack[((hsi*21+6497)*1+lsi)*1]), &(stack[((hsi*21+6518)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4218)*1+lsi)*1]),&(stack[((hsi*28+6345)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10701)*1+lsi)*1]), &(stack[((hsi*28+6345)*1+lsi)*1]), &(stack[((hsi*21+6324)*1+lsi)*1]), &(stack[((hsi*28+6639)*1+lsi)*1]), &(stack[((hsi*28+6667)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4182)*1+lsi)*1]),&(stack[((hsi*36+10701)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10737)*1+lsi)*1]), &(stack[((hsi*36+10701)*1+lsi)*1]), &(stack[((hsi*28+6345)*1+lsi)*1]), &(stack[((hsi*36+6844)*1+lsi)*1]), &(stack[((hsi*36+6880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4137)*1+lsi)*1]),&(stack[((hsi*45+10737)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10782)*1+lsi)*1]), &(stack[((hsi*45+10737)*1+lsi)*1]), &(stack[((hsi*36+10701)*1+lsi)*1]), &(stack[((hsi*45+7110)*1+lsi)*1]), &(stack[((hsi*45+7155)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4082)*1+lsi)*1]),&(stack[((hsi*55+10782)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10837)*1+lsi)*1]), &(stack[((hsi*55+10782)*1+lsi)*1]), &(stack[((hsi*45+10737)*1+lsi)*1]), &(stack[((hsi*55+7445)*1+lsi)*1]), &(stack[((hsi*55+7500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4016)*1+lsi)*1]),&(stack[((hsi*66+10837)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3995)*1+lsi)*1]),&(stack[((hsi*21+6518)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3967)*1+lsi)*1]),&(stack[((hsi*28+6667)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3931)*1+lsi)*1]),&(stack[((hsi*36+6880)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3886)*1+lsi)*1]),&(stack[((hsi*45+7155)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3831)*1+lsi)*1]),&(stack[((hsi*55+7500)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10903)*1+lsi)*1]), &(stack[((hsi*28+7255)*1+lsi)*1]), &(stack[((hsi*21+6961)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10939)*1+lsi)*1]), &(stack[((hsi*36+7319)*1+lsi)*1]), &(stack[((hsi*28+7010)*1+lsi)*1]), &(stack[((hsi*36+10903)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10984)*1+lsi)*1]), &(stack[((hsi*36+7283)*1+lsi)*1]), &(stack[((hsi*28+6982)*1+lsi)*1]), &(stack[((hsi*36+10903)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11029)*1+lsi)*1]), &(stack[((hsi*45+7400)*1+lsi)*1]), &(stack[((hsi*36+7074)*1+lsi)*1]), &(stack[((hsi*45+10984)*1+lsi)*1]), &(stack[((hsi*45+10939)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11084)*1+lsi)*1]), &(stack[((hsi*45+7355)*1+lsi)*1]), &(stack[((hsi*36+7038)*1+lsi)*1]), &(stack[((hsi*45+10939)*1+lsi)*1]), &(stack[((hsi*45+10984)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11139)*1+lsi)*1]), &(stack[((hsi*55+7500)*1+lsi)*1]), &(stack[((hsi*45+7155)*1+lsi)*1]), &(stack[((hsi*55+11084)*1+lsi)*1]), &(stack[((hsi*55+11029)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3765)*1+lsi)*1]),&(stack[((hsi*66+11139)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3744)*1+lsi)*1]),&(stack[((hsi*21+7833)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3716)*1+lsi)*1]),&(stack[((hsi*28+7952)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3680)*1+lsi)*1]),&(stack[((hsi*36+8129)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3635)*1+lsi)*1]),&(stack[((hsi*45+8355)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3580)*1+lsi)*1]),&(stack[((hsi*55+8636)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11205)*1+lsi)*1]), &(stack[((hsi*36+8455)*1+lsi)*1]), &(stack[((hsi*28+8210)*1+lsi)*1]), &(stack[((hsi*36+10903)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11250)*1+lsi)*1]), &(stack[((hsi*45+8536)*1+lsi)*1]), &(stack[((hsi*36+8274)*1+lsi)*1]), &(stack[((hsi*45+11205)*1+lsi)*1]), &(stack[((hsi*45+10984)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11305)*1+lsi)*1]), &(stack[((hsi*45+8491)*1+lsi)*1]), &(stack[((hsi*36+8238)*1+lsi)*1]), &(stack[((hsi*45+11205)*1+lsi)*1]), &(stack[((hsi*45+10939)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11360)*1+lsi)*1]), &(stack[((hsi*55+8636)*1+lsi)*1]), &(stack[((hsi*45+8355)*1+lsi)*1]), &(stack[((hsi*55+11305)*1+lsi)*1]), &(stack[((hsi*55+11250)*1+lsi)*1]), &(stack[((hsi*55+11084)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3514)*1+lsi)*1]),&(stack[((hsi*66+11360)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3493)*1+lsi)*1]),&(stack[((hsi*21+8849)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3465)*1+lsi)*1]),&(stack[((hsi*28+6567)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3429)*1+lsi)*1]),&(stack[((hsi*36+8991)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3384)*1+lsi)*1]),&(stack[((hsi*45+9153)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3329)*1+lsi)*1]),&(stack[((hsi*55+9353)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11426)*1+lsi)*1]), &(stack[((hsi*45+9253)*1+lsi)*1]), &(stack[((hsi*36+9072)*1+lsi)*1]), &(stack[((hsi*45+10939)*1+lsi)*1]), &(stack[((hsi*45+10984)*1+lsi)*1]), &(stack[((hsi*45+11205)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11481)*1+lsi)*1]), &(stack[((hsi*55+9353)*1+lsi)*1]), &(stack[((hsi*45+9153)*1+lsi)*1]), &(stack[((hsi*55+11084)*1+lsi)*1]), &(stack[((hsi*55+11426)*1+lsi)*1]), &(stack[((hsi*55+11029)*1+lsi)*1]), &(stack[((hsi*55+11305)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3263)*1+lsi)*1]),&(stack[((hsi*66+11481)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+3242)*1+lsi)*1]),&(stack[((hsi*21+9510)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3214)*1+lsi)*1]),&(stack[((hsi*28+9531)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3178)*1+lsi)*1]),&(stack[((hsi*36+9595)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3133)*1+lsi)*1]),&(stack[((hsi*45+9676)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3078)*1+lsi)*1]),&(stack[((hsi*55+9776)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11547)*1+lsi)*1]), &(stack[((hsi*55+9776)*1+lsi)*1]), &(stack[((hsi*45+9676)*1+lsi)*1]), &(stack[((hsi*55+11305)*1+lsi)*1]), &(stack[((hsi*55+11250)*1+lsi)*1]), &(stack[((hsi*55+11426)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3012)*1+lsi)*1]),&(stack[((hsi*66+11547)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2991)*1+lsi)*1]),&(stack[((hsi*21+8828)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2963)*1+lsi)*1]),&(stack[((hsi*28+7727)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2927)*1+lsi)*1]),&(stack[((hsi*36+8955)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2882)*1+lsi)*1]),&(stack[((hsi*45+9108)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2827)*1+lsi)*1]),&(stack[((hsi*55+9298)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11613)*1+lsi)*1]), &(stack[((hsi*55+9298)*1+lsi)*1]), &(stack[((hsi*45+9108)*1+lsi)*1]), &(stack[((hsi*55+11029)*1+lsi)*1]), &(stack[((hsi*55+11084)*1+lsi)*1]), &(stack[((hsi*55+11426)*1+lsi)*1]), &(stack[((hsi*55+11250)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2761)*1+lsi)*1]),&(stack[((hsi*66+11613)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2740)*1+lsi)*1]),&(stack[((hsi*21+7812)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2712)*1+lsi)*1]),&(stack[((hsi*28+7924)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2676)*1+lsi)*1]),&(stack[((hsi*36+8093)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2631)*1+lsi)*1]),&(stack[((hsi*45+8310)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2576)*1+lsi)*1]),&(stack[((hsi*55+8581)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11679)*1+lsi)*1]), &(stack[((hsi*55+8581)*1+lsi)*1]), &(stack[((hsi*45+8310)*1+lsi)*1]), &(stack[((hsi*55+11250)*1+lsi)*1]), &(stack[((hsi*55+11305)*1+lsi)*1]), &(stack[((hsi*55+11029)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2510)*1+lsi)*1]),&(stack[((hsi*66+11679)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2489)*1+lsi)*1]),&(stack[((hsi*21+6497)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2461)*1+lsi)*1]),&(stack[((hsi*28+6639)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2425)*1+lsi)*1]),&(stack[((hsi*36+6844)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2380)*1+lsi)*1]),&(stack[((hsi*45+7110)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2325)*1+lsi)*1]),&(stack[((hsi*55+7445)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11745)*1+lsi)*1]), &(stack[((hsi*55+7445)*1+lsi)*1]), &(stack[((hsi*45+7110)*1+lsi)*1]), &(stack[((hsi*55+11029)*1+lsi)*1]), &(stack[((hsi*55+11084)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2259)*1+lsi)*1]),&(stack[((hsi*66+11745)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2238)*1+lsi)*1]),&(stack[((hsi*21+6597)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2210)*1+lsi)*1]),&(stack[((hsi*28+6788)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2174)*1+lsi)*1]),&(stack[((hsi*36+7038)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2129)*1+lsi)*1]),&(stack[((hsi*45+7355)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2074)*1+lsi)*1]),&(stack[((hsi*55+11084)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11811)*1+lsi)*1]), &(stack[((hsi*36+10903)*1+lsi)*1]), &(stack[((hsi*28+7255)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11856)*1+lsi)*1]), &(stack[((hsi*45+10984)*1+lsi)*1]), &(stack[((hsi*36+7283)*1+lsi)*1]), &(stack[((hsi*45+11811)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11911)*1+lsi)*1]), &(stack[((hsi*45+10939)*1+lsi)*1]), &(stack[((hsi*36+7319)*1+lsi)*1]), &(stack[((hsi*45+11811)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11966)*1+lsi)*1]), &(stack[((hsi*55+11084)*1+lsi)*1]), &(stack[((hsi*45+7355)*1+lsi)*1]), &(stack[((hsi*55+11911)*1+lsi)*1]), &(stack[((hsi*55+11856)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2008)*1+lsi)*1]),&(stack[((hsi*66+11966)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1987)*1+lsi)*1]),&(stack[((hsi*21+7882)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1959)*1+lsi)*1]),&(stack[((hsi*28+8037)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1923)*1+lsi)*1]),&(stack[((hsi*36+8238)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1878)*1+lsi)*1]),&(stack[((hsi*45+8491)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1823)*1+lsi)*1]),&(stack[((hsi*55+11305)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12032)*1+lsi)*1]), &(stack[((hsi*45+11205)*1+lsi)*1]), &(stack[((hsi*36+8455)*1+lsi)*1]), &(stack[((hsi*45+11811)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12087)*1+lsi)*1]), &(stack[((hsi*55+11305)*1+lsi)*1]), &(stack[((hsi*45+8491)*1+lsi)*1]), &(stack[((hsi*55+12032)*1+lsi)*1]), &(stack[((hsi*55+11911)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1757)*1+lsi)*1]),&(stack[((hsi*66+12087)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1736)*1+lsi)*1]),&(stack[((hsi*21+8870)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1708)*1+lsi)*1]),&(stack[((hsi*28+8927)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1672)*1+lsi)*1]),&(stack[((hsi*36+9072)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1627)*1+lsi)*1]),&(stack[((hsi*45+9253)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1572)*1+lsi)*1]),&(stack[((hsi*55+11426)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12153)*1+lsi)*1]), &(stack[((hsi*55+11426)*1+lsi)*1]), &(stack[((hsi*45+9253)*1+lsi)*1]), &(stack[((hsi*55+11911)*1+lsi)*1]), &(stack[((hsi*55+11856)*1+lsi)*1]), &(stack[((hsi*55+12032)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1506)*1+lsi)*1]),&(stack[((hsi*66+12153)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1485)*1+lsi)*1]),&(stack[((hsi*21+7903)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1457)*1+lsi)*1]),&(stack[((hsi*28+8065)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1421)*1+lsi)*1]),&(stack[((hsi*36+8274)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1376)*1+lsi)*1]),&(stack[((hsi*45+8536)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1321)*1+lsi)*1]),&(stack[((hsi*55+11250)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12219)*1+lsi)*1]), &(stack[((hsi*55+11250)*1+lsi)*1]), &(stack[((hsi*45+8536)*1+lsi)*1]), &(stack[((hsi*55+12032)*1+lsi)*1]), &(stack[((hsi*55+11856)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1255)*1+lsi)*1]),&(stack[((hsi*66+12219)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1234)*1+lsi)*1]),&(stack[((hsi*21+6618)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1206)*1+lsi)*1]),&(stack[((hsi*28+6816)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1170)*1+lsi)*1]),&(stack[((hsi*36+7074)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1125)*1+lsi)*1]),&(stack[((hsi*45+7400)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1070)*1+lsi)*1]),&(stack[((hsi*55+11029)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12285)*1+lsi)*1]), &(stack[((hsi*55+11029)*1+lsi)*1]), &(stack[((hsi*45+7400)*1+lsi)*1]), &(stack[((hsi*55+11856)*1+lsi)*1]), &(stack[((hsi*55+11911)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1004)*1+lsi)*1]),&(stack[((hsi*66+12285)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+983)*1+lsi)*1]),&(stack[((hsi*21+6767)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+955)*1+lsi)*1]),&(stack[((hsi*28+7010)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+919)*1+lsi)*1]),&(stack[((hsi*36+7319)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+874)*1+lsi)*1]),&(stack[((hsi*45+10939)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+819)*1+lsi)*1]),&(stack[((hsi*55+11911)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12351)*1+lsi)*1]), &(stack[((hsi*45+11811)*1+lsi)*1]), &(stack[((hsi*36+10903)*1+lsi)*1]));
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12406)*1+lsi)*1]), &(stack[((hsi*55+11911)*1+lsi)*1]), &(stack[((hsi*45+10939)*1+lsi)*1]), &(stack[((hsi*55+12351)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+753)*1+lsi)*1]),&(stack[((hsi*66+12406)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+732)*1+lsi)*1]),&(stack[((hsi*21+8016)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+704)*1+lsi)*1]),&(stack[((hsi*28+8210)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+668)*1+lsi)*1]),&(stack[((hsi*36+8455)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+623)*1+lsi)*1]),&(stack[((hsi*45+11205)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+568)*1+lsi)*1]),&(stack[((hsi*55+12032)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12472)*1+lsi)*1]), &(stack[((hsi*55+12032)*1+lsi)*1]), &(stack[((hsi*45+11205)*1+lsi)*1]), &(stack[((hsi*55+12351)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+502)*1+lsi)*1]),&(stack[((hsi*66+12472)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+481)*1+lsi)*1]),&(stack[((hsi*21+6746)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+453)*1+lsi)*1]),&(stack[((hsi*28+6982)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+417)*1+lsi)*1]),&(stack[((hsi*36+7283)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+372)*1+lsi)*1]),&(stack[((hsi*45+10984)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+317)*1+lsi)*1]),&(stack[((hsi*55+11856)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12538)*1+lsi)*1]), &(stack[((hsi*55+11856)*1+lsi)*1]), &(stack[((hsi*45+10984)*1+lsi)*1]), &(stack[((hsi*55+12351)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+251)*1+lsi)*1]),&(stack[((hsi*66+12538)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+230)*1+lsi)*1]),&(stack[((hsi*21+6961)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+202)*1+lsi)*1]),&(stack[((hsi*28+7255)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+166)*1+lsi)*1]),&(stack[((hsi*36+10903)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+121)*1+lsi)*1]),&(stack[((hsi*45+11811)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+66)*1+lsi)*1]),&(stack[((hsi*55+12351)*1+lsi)*1]),55);
OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12604)*1+lsi)*1]), &(stack[((hsi*55+12351)*1+lsi)*1]), &(stack[((hsi*45+11811)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+0)*1+lsi)*1]),&(stack[((hsi*66+12604)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 6275 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
