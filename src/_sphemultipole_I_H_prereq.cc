/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
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
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
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
void _sphemultipole_I_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7700)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7703)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7706)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7709)*1+lsi)*1]), &(stack[((hsi*3+7700)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+7706)*1+lsi)*1]), &(stack[((hsi*3+7703)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7715)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7718)*1+lsi)*1]), &(stack[((hsi*3+7703)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+7715)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7724)*1+lsi)*1]), &(stack[((hsi*3+7706)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+7715)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7730)*1+lsi)*1]), &(stack[((hsi*6+7709)*1+lsi)*1]), &(stack[((hsi*3+7700)*1+lsi)*1]), &(stack[((hsi*6+7724)*1+lsi)*1]), &(stack[((hsi*6+7718)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*3+7715)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7746)*1+lsi)*1]), &(stack[((hsi*6+7718)*1+lsi)*1]), &(stack[((hsi*3+7703)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7756)*1+lsi)*1]), &(stack[((hsi*6+7724)*1+lsi)*1]), &(stack[((hsi*3+7706)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7766)*1+lsi)*1]), &(stack[((hsi*10+7730)*1+lsi)*1]), &(stack[((hsi*6+7709)*1+lsi)*1]), &(stack[((hsi*10+7756)*1+lsi)*1]), &(stack[((hsi*10+7746)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7781)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7784)*1+lsi)*1]), &(stack[((hsi*3+7781)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+7703)*1+lsi)*1]), &(stack[((hsi*3+7706)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7790)*1+lsi)*1]), &(stack[((hsi*6+7784)*1+lsi)*1]), &(stack[((hsi*3+7781)*1+lsi)*1]), &(stack[((hsi*6+7718)*1+lsi)*1]), &(stack[((hsi*6+7724)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7800)*1+lsi)*1]), &(stack[((hsi*10+7790)*1+lsi)*1]), &(stack[((hsi*6+7784)*1+lsi)*1]), &(stack[((hsi*10+7746)*1+lsi)*1]), &(stack[((hsi*10+7756)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7815)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7818)*1+lsi)*1]), &(stack[((hsi*3+7815)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+7781)*1+lsi)*1]), &(stack[((hsi*3+7700)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7824)*1+lsi)*1]), &(stack[((hsi*6+7818)*1+lsi)*1]), &(stack[((hsi*3+7815)*1+lsi)*1]), &(stack[((hsi*6+7784)*1+lsi)*1]), &(stack[((hsi*6+7709)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7834)*1+lsi)*1]), &(stack[((hsi*10+7824)*1+lsi)*1]), &(stack[((hsi*6+7818)*1+lsi)*1]), &(stack[((hsi*10+7790)*1+lsi)*1]), &(stack[((hsi*10+7730)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7849)*1+lsi)*1]), &(stack[((hsi*15+7834)*1+lsi)*1]), &(stack[((hsi*10+7824)*1+lsi)*1]), &(stack[((hsi*15+7800)*1+lsi)*1]), &(stack[((hsi*15+7766)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7870)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7873)*1+lsi)*1]), &(stack[((hsi*3+7870)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+7700)*1+lsi)*1]), &(stack[((hsi*3+7781)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7879)*1+lsi)*1]), &(stack[((hsi*6+7873)*1+lsi)*1]), &(stack[((hsi*3+7870)*1+lsi)*1]), &(stack[((hsi*6+7709)*1+lsi)*1]), &(stack[((hsi*6+7784)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7889)*1+lsi)*1]), &(stack[((hsi*10+7879)*1+lsi)*1]), &(stack[((hsi*6+7873)*1+lsi)*1]), &(stack[((hsi*10+7730)*1+lsi)*1]), &(stack[((hsi*10+7790)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7904)*1+lsi)*1]), &(stack[((hsi*15+7889)*1+lsi)*1]), &(stack[((hsi*10+7879)*1+lsi)*1]), &(stack[((hsi*15+7766)*1+lsi)*1]), &(stack[((hsi*15+7800)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7925)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7928)*1+lsi)*1]), &(stack[((hsi*3+7925)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+7870)*1+lsi)*1]), &(stack[((hsi*3+7815)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7934)*1+lsi)*1]), &(stack[((hsi*6+7928)*1+lsi)*1]), &(stack[((hsi*3+7925)*1+lsi)*1]), &(stack[((hsi*6+7873)*1+lsi)*1]), &(stack[((hsi*6+7818)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7944)*1+lsi)*1]), &(stack[((hsi*10+7934)*1+lsi)*1]), &(stack[((hsi*6+7928)*1+lsi)*1]), &(stack[((hsi*10+7879)*1+lsi)*1]), &(stack[((hsi*10+7824)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7959)*1+lsi)*1]), &(stack[((hsi*15+7944)*1+lsi)*1]), &(stack[((hsi*10+7934)*1+lsi)*1]), &(stack[((hsi*15+7889)*1+lsi)*1]), &(stack[((hsi*15+7834)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7980)*1+lsi)*1]), &(stack[((hsi*21+7959)*1+lsi)*1]), &(stack[((hsi*15+7944)*1+lsi)*1]), &(stack[((hsi*21+7904)*1+lsi)*1]), &(stack[((hsi*21+7849)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+7672)*1+lsi)*1]),&(stack[((hsi*28+7980)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*3+7715)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*10+7746)*1+lsi)*1]), &(stack[((hsi*6+7718)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+8008)*1+lsi)*1]), &(stack[((hsi*10+7756)*1+lsi)*1]), &(stack[((hsi*6+7724)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8023)*1+lsi)*1]), &(stack[((hsi*15+7766)*1+lsi)*1]), &(stack[((hsi*10+7730)*1+lsi)*1]), &(stack[((hsi*15+8008)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*15+7800)*1+lsi)*1]), &(stack[((hsi*10+7790)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*15+8008)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*21+7849)*1+lsi)*1]), &(stack[((hsi*15+7834)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*21+8023)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8093)*1+lsi)*1]), &(stack[((hsi*21+7904)*1+lsi)*1]), &(stack[((hsi*15+7889)*1+lsi)*1]), &(stack[((hsi*21+8023)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8121)*1+lsi)*1]), &(stack[((hsi*28+7980)*1+lsi)*1]), &(stack[((hsi*21+7959)*1+lsi)*1]), &(stack[((hsi*28+8093)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7636)*1+lsi)*1]),&(stack[((hsi*36+8121)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8157)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*10+7746)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8178)*1+lsi)*1]), &(stack[((hsi*15+8008)*1+lsi)*1]), &(stack[((hsi*10+7756)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8199)*1+lsi)*1]), &(stack[((hsi*21+8023)*1+lsi)*1]), &(stack[((hsi*15+7766)*1+lsi)*1]), &(stack[((hsi*21+8178)*1+lsi)*1]), &(stack[((hsi*21+8157)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8227)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*15+7800)*1+lsi)*1]), &(stack[((hsi*21+8157)*1+lsi)*1]), &(stack[((hsi*21+8178)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8255)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*21+7849)*1+lsi)*1]), &(stack[((hsi*28+8227)*1+lsi)*1]), &(stack[((hsi*28+8199)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8291)*1+lsi)*1]), &(stack[((hsi*28+8093)*1+lsi)*1]), &(stack[((hsi*21+7904)*1+lsi)*1]), &(stack[((hsi*28+8199)*1+lsi)*1]), &(stack[((hsi*28+8227)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8327)*1+lsi)*1]), &(stack[((hsi*36+8121)*1+lsi)*1]), &(stack[((hsi*28+7980)*1+lsi)*1]), &(stack[((hsi*36+8291)*1+lsi)*1]), &(stack[((hsi*36+8255)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+7591)*1+lsi)*1]),&(stack[((hsi*45+8327)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8372)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8393)*1+lsi)*1]), &(stack[((hsi*21+8157)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*21+8372)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8421)*1+lsi)*1]), &(stack[((hsi*21+8178)*1+lsi)*1]), &(stack[((hsi*15+8008)*1+lsi)*1]), &(stack[((hsi*21+8372)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8449)*1+lsi)*1]), &(stack[((hsi*28+8199)*1+lsi)*1]), &(stack[((hsi*21+8023)*1+lsi)*1]), &(stack[((hsi*28+8421)*1+lsi)*1]), &(stack[((hsi*28+8393)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8485)*1+lsi)*1]), &(stack[((hsi*28+8227)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*28+8393)*1+lsi)*1]), &(stack[((hsi*28+8421)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8521)*1+lsi)*1]), &(stack[((hsi*36+8255)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*36+8485)*1+lsi)*1]), &(stack[((hsi*36+8449)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8566)*1+lsi)*1]), &(stack[((hsi*36+8291)*1+lsi)*1]), &(stack[((hsi*28+8093)*1+lsi)*1]), &(stack[((hsi*36+8449)*1+lsi)*1]), &(stack[((hsi*36+8485)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8611)*1+lsi)*1]), &(stack[((hsi*45+8327)*1+lsi)*1]), &(stack[((hsi*36+8121)*1+lsi)*1]), &(stack[((hsi*45+8566)*1+lsi)*1]), &(stack[((hsi*45+8521)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7536)*1+lsi)*1]),&(stack[((hsi*55+8611)*1+lsi)*1]),55);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+8666)*1+lsi)*1]), &(stack[((hsi*21+8372)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8694)*1+lsi)*1]), &(stack[((hsi*28+8393)*1+lsi)*1]), &(stack[((hsi*21+8157)*1+lsi)*1]), &(stack[((hsi*28+8666)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8730)*1+lsi)*1]), &(stack[((hsi*28+8421)*1+lsi)*1]), &(stack[((hsi*21+8178)*1+lsi)*1]), &(stack[((hsi*28+8666)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8766)*1+lsi)*1]), &(stack[((hsi*36+8449)*1+lsi)*1]), &(stack[((hsi*28+8199)*1+lsi)*1]), &(stack[((hsi*36+8730)*1+lsi)*1]), &(stack[((hsi*36+8694)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+8811)*1+lsi)*1]), &(stack[((hsi*36+8485)*1+lsi)*1]), &(stack[((hsi*28+8227)*1+lsi)*1]), &(stack[((hsi*36+8694)*1+lsi)*1]), &(stack[((hsi*36+8730)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8856)*1+lsi)*1]), &(stack[((hsi*45+8521)*1+lsi)*1]), &(stack[((hsi*36+8255)*1+lsi)*1]), &(stack[((hsi*45+8811)*1+lsi)*1]), &(stack[((hsi*45+8766)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+8911)*1+lsi)*1]), &(stack[((hsi*45+8566)*1+lsi)*1]), &(stack[((hsi*36+8291)*1+lsi)*1]), &(stack[((hsi*45+8766)*1+lsi)*1]), &(stack[((hsi*45+8811)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+8966)*1+lsi)*1]), &(stack[((hsi*55+8611)*1+lsi)*1]), &(stack[((hsi*45+8327)*1+lsi)*1]), &(stack[((hsi*55+8911)*1+lsi)*1]), &(stack[((hsi*55+8856)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7470)*1+lsi)*1]),&(stack[((hsi*66+8966)*1+lsi)*1]),66);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9032)*1+lsi)*1]), &(stack[((hsi*28+8666)*1+lsi)*1]), &(stack[((hsi*21+8372)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9068)*1+lsi)*1]), &(stack[((hsi*36+8694)*1+lsi)*1]), &(stack[((hsi*28+8393)*1+lsi)*1]), &(stack[((hsi*36+9032)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9113)*1+lsi)*1]), &(stack[((hsi*36+8730)*1+lsi)*1]), &(stack[((hsi*28+8421)*1+lsi)*1]), &(stack[((hsi*36+9032)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9158)*1+lsi)*1]), &(stack[((hsi*45+8766)*1+lsi)*1]), &(stack[((hsi*36+8449)*1+lsi)*1]), &(stack[((hsi*45+9113)*1+lsi)*1]), &(stack[((hsi*45+9068)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+9213)*1+lsi)*1]), &(stack[((hsi*45+8811)*1+lsi)*1]), &(stack[((hsi*36+8485)*1+lsi)*1]), &(stack[((hsi*45+9068)*1+lsi)*1]), &(stack[((hsi*45+9113)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9268)*1+lsi)*1]), &(stack[((hsi*55+8856)*1+lsi)*1]), &(stack[((hsi*45+8521)*1+lsi)*1]), &(stack[((hsi*55+9213)*1+lsi)*1]), &(stack[((hsi*55+9158)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+9334)*1+lsi)*1]), &(stack[((hsi*55+8911)*1+lsi)*1]), &(stack[((hsi*45+8566)*1+lsi)*1]), &(stack[((hsi*55+9158)*1+lsi)*1]), &(stack[((hsi*55+9213)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+9400)*1+lsi)*1]), &(stack[((hsi*66+8966)*1+lsi)*1]), &(stack[((hsi*55+8611)*1+lsi)*1]), &(stack[((hsi*66+9334)*1+lsi)*1]), &(stack[((hsi*66+9268)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7392)*1+lsi)*1]),&(stack[((hsi*78+9400)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7965)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7968)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7971)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7974)*1+lsi)*1]), &(stack[((hsi*3+7965)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+7971)*1+lsi)*1]), &(stack[((hsi*3+7968)*1+lsi)*1]), &(stack[((hsi*3+7781)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9478)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9481)*1+lsi)*1]), &(stack[((hsi*3+7968)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+9478)*1+lsi)*1]), &(stack[((hsi*3+7706)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9487)*1+lsi)*1]), &(stack[((hsi*3+7971)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+9478)*1+lsi)*1]), &(stack[((hsi*3+7703)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9493)*1+lsi)*1]), &(stack[((hsi*6+7974)*1+lsi)*1]), &(stack[((hsi*3+7965)*1+lsi)*1]), &(stack[((hsi*6+9487)*1+lsi)*1]), &(stack[((hsi*6+9481)*1+lsi)*1]), &(stack[((hsi*6+7784)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+7715)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9509)*1+lsi)*1]), &(stack[((hsi*6+9481)*1+lsi)*1]), &(stack[((hsi*3+7968)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*6+7724)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9519)*1+lsi)*1]), &(stack[((hsi*6+9487)*1+lsi)*1]), &(stack[((hsi*3+7971)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*6+7718)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9529)*1+lsi)*1]), &(stack[((hsi*10+9493)*1+lsi)*1]), &(stack[((hsi*6+7974)*1+lsi)*1]), &(stack[((hsi*10+9519)*1+lsi)*1]), &(stack[((hsi*10+9509)*1+lsi)*1]), &(stack[((hsi*10+7790)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9554)*1+lsi)*1]), &(stack[((hsi*10+9509)*1+lsi)*1]), &(stack[((hsi*6+9481)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*10+7756)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9569)*1+lsi)*1]), &(stack[((hsi*10+9519)*1+lsi)*1]), &(stack[((hsi*6+9487)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*10+7746)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9584)*1+lsi)*1]), &(stack[((hsi*15+9529)*1+lsi)*1]), &(stack[((hsi*10+9493)*1+lsi)*1]), &(stack[((hsi*15+9569)*1+lsi)*1]), &(stack[((hsi*15+9554)*1+lsi)*1]), &(stack[((hsi*15+7800)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7715)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*3+7715)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+7968)*1+lsi)*1]), &(stack[((hsi*3+7971)*1+lsi)*1]), &(stack[((hsi*3+7700)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9605)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*3+7715)*1+lsi)*1]), &(stack[((hsi*6+9481)*1+lsi)*1]), &(stack[((hsi*6+9487)*1+lsi)*1]), &(stack[((hsi*6+7709)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9615)*1+lsi)*1]), &(stack[((hsi*10+9605)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*10+9509)*1+lsi)*1]), &(stack[((hsi*10+9519)*1+lsi)*1]), &(stack[((hsi*10+7730)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9630)*1+lsi)*1]), &(stack[((hsi*15+9615)*1+lsi)*1]), &(stack[((hsi*10+9605)*1+lsi)*1]), &(stack[((hsi*15+9554)*1+lsi)*1]), &(stack[((hsi*15+9569)*1+lsi)*1]), &(stack[((hsi*15+7766)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9651)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9654)*1+lsi)*1]), &(stack[((hsi*3+9651)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+7715)*1+lsi)*1]), &(stack[((hsi*3+7965)*1+lsi)*1]), &(stack[((hsi*3+7870)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9660)*1+lsi)*1]), &(stack[((hsi*6+9654)*1+lsi)*1]), &(stack[((hsi*3+9651)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*6+7974)*1+lsi)*1]), &(stack[((hsi*6+7873)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9670)*1+lsi)*1]), &(stack[((hsi*10+9660)*1+lsi)*1]), &(stack[((hsi*6+9654)*1+lsi)*1]), &(stack[((hsi*10+9605)*1+lsi)*1]), &(stack[((hsi*10+9493)*1+lsi)*1]), &(stack[((hsi*10+7879)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9685)*1+lsi)*1]), &(stack[((hsi*15+9670)*1+lsi)*1]), &(stack[((hsi*10+9660)*1+lsi)*1]), &(stack[((hsi*15+9615)*1+lsi)*1]), &(stack[((hsi*15+9529)*1+lsi)*1]), &(stack[((hsi*15+7889)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9706)*1+lsi)*1]), &(stack[((hsi*21+9685)*1+lsi)*1]), &(stack[((hsi*15+9670)*1+lsi)*1]), &(stack[((hsi*21+9630)*1+lsi)*1]), &(stack[((hsi*21+9584)*1+lsi)*1]), &(stack[((hsi*21+7904)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+7364)*1+lsi)*1]),&(stack[((hsi*28+9706)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9651)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9734)*1+lsi)*1]), &(stack[((hsi*15+9554)*1+lsi)*1]), &(stack[((hsi*10+9509)*1+lsi)*1]), &(stack[((hsi*15+9651)*1+lsi)*1]), &(stack[((hsi*15+8008)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9755)*1+lsi)*1]), &(stack[((hsi*15+9569)*1+lsi)*1]), &(stack[((hsi*10+9519)*1+lsi)*1]), &(stack[((hsi*15+9651)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9776)*1+lsi)*1]), &(stack[((hsi*21+9584)*1+lsi)*1]), &(stack[((hsi*15+9529)*1+lsi)*1]), &(stack[((hsi*21+9755)*1+lsi)*1]), &(stack[((hsi*21+9734)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9804)*1+lsi)*1]), &(stack[((hsi*21+9630)*1+lsi)*1]), &(stack[((hsi*15+9615)*1+lsi)*1]), &(stack[((hsi*21+9734)*1+lsi)*1]), &(stack[((hsi*21+9755)*1+lsi)*1]), &(stack[((hsi*21+8023)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9832)*1+lsi)*1]), &(stack[((hsi*28+9706)*1+lsi)*1]), &(stack[((hsi*21+9685)*1+lsi)*1]), &(stack[((hsi*28+9804)*1+lsi)*1]), &(stack[((hsi*28+9776)*1+lsi)*1]), &(stack[((hsi*28+8093)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7328)*1+lsi)*1]),&(stack[((hsi*36+9832)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9666)*1+lsi)*1]), &(stack[((hsi*15+9651)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9868)*1+lsi)*1]), &(stack[((hsi*21+9734)*1+lsi)*1]), &(stack[((hsi*15+9554)*1+lsi)*1]), &(stack[((hsi*21+9666)*1+lsi)*1]), &(stack[((hsi*21+8178)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9896)*1+lsi)*1]), &(stack[((hsi*21+9755)*1+lsi)*1]), &(stack[((hsi*15+9569)*1+lsi)*1]), &(stack[((hsi*21+9666)*1+lsi)*1]), &(stack[((hsi*21+8157)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9924)*1+lsi)*1]), &(stack[((hsi*28+9776)*1+lsi)*1]), &(stack[((hsi*21+9584)*1+lsi)*1]), &(stack[((hsi*28+9896)*1+lsi)*1]), &(stack[((hsi*28+9868)*1+lsi)*1]), &(stack[((hsi*28+8227)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9960)*1+lsi)*1]), &(stack[((hsi*28+9804)*1+lsi)*1]), &(stack[((hsi*21+9630)*1+lsi)*1]), &(stack[((hsi*28+9868)*1+lsi)*1]), &(stack[((hsi*28+9896)*1+lsi)*1]), &(stack[((hsi*28+8199)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9996)*1+lsi)*1]), &(stack[((hsi*36+9832)*1+lsi)*1]), &(stack[((hsi*28+9706)*1+lsi)*1]), &(stack[((hsi*36+9960)*1+lsi)*1]), &(stack[((hsi*36+9924)*1+lsi)*1]), &(stack[((hsi*36+8291)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+7283)*1+lsi)*1]),&(stack[((hsi*45+9996)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10041)*1+lsi)*1]), &(stack[((hsi*21+9666)*1+lsi)*1]), &(stack[((hsi*15+9651)*1+lsi)*1]), &(stack[((hsi*21+8372)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10069)*1+lsi)*1]), &(stack[((hsi*28+9868)*1+lsi)*1]), &(stack[((hsi*21+9734)*1+lsi)*1]), &(stack[((hsi*28+10041)*1+lsi)*1]), &(stack[((hsi*28+8421)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10105)*1+lsi)*1]), &(stack[((hsi*28+9896)*1+lsi)*1]), &(stack[((hsi*21+9755)*1+lsi)*1]), &(stack[((hsi*28+10041)*1+lsi)*1]), &(stack[((hsi*28+8393)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10141)*1+lsi)*1]), &(stack[((hsi*36+9924)*1+lsi)*1]), &(stack[((hsi*28+9776)*1+lsi)*1]), &(stack[((hsi*36+10105)*1+lsi)*1]), &(stack[((hsi*36+10069)*1+lsi)*1]), &(stack[((hsi*36+8485)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10186)*1+lsi)*1]), &(stack[((hsi*36+9960)*1+lsi)*1]), &(stack[((hsi*28+9804)*1+lsi)*1]), &(stack[((hsi*36+10069)*1+lsi)*1]), &(stack[((hsi*36+10105)*1+lsi)*1]), &(stack[((hsi*36+8449)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10231)*1+lsi)*1]), &(stack[((hsi*45+9996)*1+lsi)*1]), &(stack[((hsi*36+9832)*1+lsi)*1]), &(stack[((hsi*45+10186)*1+lsi)*1]), &(stack[((hsi*45+10141)*1+lsi)*1]), &(stack[((hsi*45+8566)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7228)*1+lsi)*1]),&(stack[((hsi*55+10231)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10286)*1+lsi)*1]), &(stack[((hsi*28+10041)*1+lsi)*1]), &(stack[((hsi*21+9666)*1+lsi)*1]), &(stack[((hsi*28+8666)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10322)*1+lsi)*1]), &(stack[((hsi*36+10069)*1+lsi)*1]), &(stack[((hsi*28+9868)*1+lsi)*1]), &(stack[((hsi*36+10286)*1+lsi)*1]), &(stack[((hsi*36+8730)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10367)*1+lsi)*1]), &(stack[((hsi*36+10105)*1+lsi)*1]), &(stack[((hsi*28+9896)*1+lsi)*1]), &(stack[((hsi*36+10286)*1+lsi)*1]), &(stack[((hsi*36+8694)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10412)*1+lsi)*1]), &(stack[((hsi*45+10141)*1+lsi)*1]), &(stack[((hsi*36+9924)*1+lsi)*1]), &(stack[((hsi*45+10367)*1+lsi)*1]), &(stack[((hsi*45+10322)*1+lsi)*1]), &(stack[((hsi*45+8811)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10467)*1+lsi)*1]), &(stack[((hsi*45+10186)*1+lsi)*1]), &(stack[((hsi*36+9960)*1+lsi)*1]), &(stack[((hsi*45+10322)*1+lsi)*1]), &(stack[((hsi*45+10367)*1+lsi)*1]), &(stack[((hsi*45+8766)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10522)*1+lsi)*1]), &(stack[((hsi*55+10231)*1+lsi)*1]), &(stack[((hsi*45+9996)*1+lsi)*1]), &(stack[((hsi*55+10467)*1+lsi)*1]), &(stack[((hsi*55+10412)*1+lsi)*1]), &(stack[((hsi*55+8911)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7162)*1+lsi)*1]),&(stack[((hsi*66+10522)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10588)*1+lsi)*1]), &(stack[((hsi*36+10286)*1+lsi)*1]), &(stack[((hsi*28+10041)*1+lsi)*1]), &(stack[((hsi*36+9032)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10633)*1+lsi)*1]), &(stack[((hsi*45+10322)*1+lsi)*1]), &(stack[((hsi*36+10069)*1+lsi)*1]), &(stack[((hsi*45+10588)*1+lsi)*1]), &(stack[((hsi*45+9113)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10688)*1+lsi)*1]), &(stack[((hsi*45+10367)*1+lsi)*1]), &(stack[((hsi*36+10105)*1+lsi)*1]), &(stack[((hsi*45+10588)*1+lsi)*1]), &(stack[((hsi*45+9068)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10743)*1+lsi)*1]), &(stack[((hsi*55+10412)*1+lsi)*1]), &(stack[((hsi*45+10141)*1+lsi)*1]), &(stack[((hsi*55+10688)*1+lsi)*1]), &(stack[((hsi*55+10633)*1+lsi)*1]), &(stack[((hsi*55+9213)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+10809)*1+lsi)*1]), &(stack[((hsi*55+10467)*1+lsi)*1]), &(stack[((hsi*45+10186)*1+lsi)*1]), &(stack[((hsi*55+10633)*1+lsi)*1]), &(stack[((hsi*55+10688)*1+lsi)*1]), &(stack[((hsi*55+9158)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+10875)*1+lsi)*1]), &(stack[((hsi*66+10522)*1+lsi)*1]), &(stack[((hsi*55+10231)*1+lsi)*1]), &(stack[((hsi*66+10809)*1+lsi)*1]), &(stack[((hsi*66+10743)*1+lsi)*1]), &(stack[((hsi*66+9334)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7084)*1+lsi)*1]),&(stack[((hsi*78+10875)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+8372)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9687)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+8375)*1+lsi)*1]), &(stack[((hsi*3+8372)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+7781)*1+lsi)*1]), &(stack[((hsi*3+7700)*1+lsi)*1]), &(stack[((hsi*3+9687)*1+lsi)*1]), &(stack[((hsi*3+7971)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9690)*1+lsi)*1]), &(stack[((hsi*3+9687)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+7706)*1+lsi)*1]), &(stack[((hsi*3+7703)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*6+8375)*1+lsi)*1]), &(stack[((hsi*3+8372)*1+lsi)*1]), &(stack[((hsi*6+7784)*1+lsi)*1]), &(stack[((hsi*6+7709)*1+lsi)*1]), &(stack[((hsi*6+9690)*1+lsi)*1]), &(stack[((hsi*6+9487)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9696)*1+lsi)*1]), &(stack[((hsi*6+9690)*1+lsi)*1]), &(stack[((hsi*3+9687)*1+lsi)*1]), &(stack[((hsi*6+7724)*1+lsi)*1]), &(stack[((hsi*6+7718)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*6+8375)*1+lsi)*1]), &(stack[((hsi*10+7790)*1+lsi)*1]), &(stack[((hsi*10+7730)*1+lsi)*1]), &(stack[((hsi*10+9696)*1+lsi)*1]), &(stack[((hsi*10+9519)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+9696)*1+lsi)*1]), &(stack[((hsi*6+9690)*1+lsi)*1]), &(stack[((hsi*10+7756)*1+lsi)*1]), &(stack[((hsi*10+7746)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10968)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*15+7800)*1+lsi)*1]), &(stack[((hsi*15+7766)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*15+9569)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9478)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+7700)*1+lsi)*1]), &(stack[((hsi*3+9687)*1+lsi)*1]), &(stack[((hsi*3+7781)*1+lsi)*1]), &(stack[((hsi*3+7968)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]), &(stack[((hsi*6+7709)*1+lsi)*1]), &(stack[((hsi*6+9690)*1+lsi)*1]), &(stack[((hsi*6+7784)*1+lsi)*1]), &(stack[((hsi*6+9481)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7700)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*10+7730)*1+lsi)*1]), &(stack[((hsi*10+9696)*1+lsi)*1]), &(stack[((hsi*10+7790)*1+lsi)*1]), &(stack[((hsi*10+9509)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7718)*1+lsi)*1]), &(stack[((hsi*15+7700)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*15+7766)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*15+7800)*1+lsi)*1]), &(stack[((hsi*15+9554)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7746)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7749)*1+lsi)*1]), &(stack[((hsi*3+7746)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+7870)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]), &(stack[((hsi*3+7815)*1+lsi)*1]), &(stack[((hsi*3+8372)*1+lsi)*1]), &(stack[((hsi*3+7715)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7755)*1+lsi)*1]), &(stack[((hsi*6+7749)*1+lsi)*1]), &(stack[((hsi*3+7746)*1+lsi)*1]), &(stack[((hsi*6+7873)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*6+7818)*1+lsi)*1]), &(stack[((hsi*6+8375)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7765)*1+lsi)*1]), &(stack[((hsi*10+7755)*1+lsi)*1]), &(stack[((hsi*6+7749)*1+lsi)*1]), &(stack[((hsi*10+7879)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*10+7824)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*10+9605)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7780)*1+lsi)*1]), &(stack[((hsi*15+7765)*1+lsi)*1]), &(stack[((hsi*10+7755)*1+lsi)*1]), &(stack[((hsi*15+7889)*1+lsi)*1]), &(stack[((hsi*15+7700)*1+lsi)*1]), &(stack[((hsi*15+7834)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*15+9615)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10989)*1+lsi)*1]), &(stack[((hsi*21+7780)*1+lsi)*1]), &(stack[((hsi*15+7765)*1+lsi)*1]), &(stack[((hsi*21+7904)*1+lsi)*1]), &(stack[((hsi*21+7718)*1+lsi)*1]), &(stack[((hsi*21+7849)*1+lsi)*1]), &(stack[((hsi*21+10968)*1+lsi)*1]), &(stack[((hsi*21+9630)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+7056)*1+lsi)*1]),&(stack[((hsi*28+10989)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+9696)*1+lsi)*1]), &(stack[((hsi*15+8008)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*15+9651)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11017)*1+lsi)*1]), &(stack[((hsi*21+10968)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*21+8023)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*21+9755)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11045)*1+lsi)*1]), &(stack[((hsi*21+7718)*1+lsi)*1]), &(stack[((hsi*15+7700)*1+lsi)*1]), &(stack[((hsi*21+8023)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*21+9734)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8008)*1+lsi)*1]), &(stack[((hsi*28+10989)*1+lsi)*1]), &(stack[((hsi*21+7780)*1+lsi)*1]), &(stack[((hsi*28+8093)*1+lsi)*1]), &(stack[((hsi*28+11045)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*28+11017)*1+lsi)*1]), &(stack[((hsi*28+9804)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7020)*1+lsi)*1]),&(stack[((hsi*36+8008)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7767)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*21+8178)*1+lsi)*1]), &(stack[((hsi*21+8157)*1+lsi)*1]), &(stack[((hsi*21+9666)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9651)*1+lsi)*1]), &(stack[((hsi*28+11017)*1+lsi)*1]), &(stack[((hsi*21+10968)*1+lsi)*1]), &(stack[((hsi*28+8227)*1+lsi)*1]), &(stack[((hsi*28+8199)*1+lsi)*1]), &(stack[((hsi*28+7767)*1+lsi)*1]), &(stack[((hsi*28+9896)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+8157)*1+lsi)*1]), &(stack[((hsi*28+11045)*1+lsi)*1]), &(stack[((hsi*21+7718)*1+lsi)*1]), &(stack[((hsi*28+8199)*1+lsi)*1]), &(stack[((hsi*28+7767)*1+lsi)*1]), &(stack[((hsi*28+8227)*1+lsi)*1]), &(stack[((hsi*28+9868)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11073)*1+lsi)*1]), &(stack[((hsi*36+8008)*1+lsi)*1]), &(stack[((hsi*28+10989)*1+lsi)*1]), &(stack[((hsi*36+8291)*1+lsi)*1]), &(stack[((hsi*36+8157)*1+lsi)*1]), &(stack[((hsi*36+8255)*1+lsi)*1]), &(stack[((hsi*36+9651)*1+lsi)*1]), &(stack[((hsi*36+9960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6975)*1+lsi)*1]),&(stack[((hsi*45+11073)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11118)*1+lsi)*1]), &(stack[((hsi*28+7767)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*28+8421)*1+lsi)*1]), &(stack[((hsi*28+8393)*1+lsi)*1]), &(stack[((hsi*28+10041)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11154)*1+lsi)*1]), &(stack[((hsi*36+9651)*1+lsi)*1]), &(stack[((hsi*28+11017)*1+lsi)*1]), &(stack[((hsi*36+8485)*1+lsi)*1]), &(stack[((hsi*36+8449)*1+lsi)*1]), &(stack[((hsi*36+11118)*1+lsi)*1]), &(stack[((hsi*36+10105)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11199)*1+lsi)*1]), &(stack[((hsi*36+8157)*1+lsi)*1]), &(stack[((hsi*28+11045)*1+lsi)*1]), &(stack[((hsi*36+8449)*1+lsi)*1]), &(stack[((hsi*36+11118)*1+lsi)*1]), &(stack[((hsi*36+8485)*1+lsi)*1]), &(stack[((hsi*36+10069)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11244)*1+lsi)*1]), &(stack[((hsi*45+11073)*1+lsi)*1]), &(stack[((hsi*36+8008)*1+lsi)*1]), &(stack[((hsi*45+8566)*1+lsi)*1]), &(stack[((hsi*45+11199)*1+lsi)*1]), &(stack[((hsi*45+8521)*1+lsi)*1]), &(stack[((hsi*45+11154)*1+lsi)*1]), &(stack[((hsi*45+10186)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6920)*1+lsi)*1]),&(stack[((hsi*55+11244)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11299)*1+lsi)*1]), &(stack[((hsi*36+11118)*1+lsi)*1]), &(stack[((hsi*28+7767)*1+lsi)*1]), &(stack[((hsi*36+8730)*1+lsi)*1]), &(stack[((hsi*36+8694)*1+lsi)*1]), &(stack[((hsi*36+10286)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11344)*1+lsi)*1]), &(stack[((hsi*45+11154)*1+lsi)*1]), &(stack[((hsi*36+9651)*1+lsi)*1]), &(stack[((hsi*45+8811)*1+lsi)*1]), &(stack[((hsi*45+8766)*1+lsi)*1]), &(stack[((hsi*45+11299)*1+lsi)*1]), &(stack[((hsi*45+10367)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11399)*1+lsi)*1]), &(stack[((hsi*45+11199)*1+lsi)*1]), &(stack[((hsi*36+8157)*1+lsi)*1]), &(stack[((hsi*45+8766)*1+lsi)*1]), &(stack[((hsi*45+11299)*1+lsi)*1]), &(stack[((hsi*45+8811)*1+lsi)*1]), &(stack[((hsi*45+10322)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11454)*1+lsi)*1]), &(stack[((hsi*55+11244)*1+lsi)*1]), &(stack[((hsi*45+11073)*1+lsi)*1]), &(stack[((hsi*55+8911)*1+lsi)*1]), &(stack[((hsi*55+11399)*1+lsi)*1]), &(stack[((hsi*55+8856)*1+lsi)*1]), &(stack[((hsi*55+11344)*1+lsi)*1]), &(stack[((hsi*55+10467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6854)*1+lsi)*1]),&(stack[((hsi*66+11454)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11520)*1+lsi)*1]), &(stack[((hsi*45+11299)*1+lsi)*1]), &(stack[((hsi*36+11118)*1+lsi)*1]), &(stack[((hsi*45+9113)*1+lsi)*1]), &(stack[((hsi*45+9068)*1+lsi)*1]), &(stack[((hsi*45+10588)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11575)*1+lsi)*1]), &(stack[((hsi*55+11344)*1+lsi)*1]), &(stack[((hsi*45+11154)*1+lsi)*1]), &(stack[((hsi*55+9213)*1+lsi)*1]), &(stack[((hsi*55+9158)*1+lsi)*1]), &(stack[((hsi*55+11520)*1+lsi)*1]), &(stack[((hsi*55+10688)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11641)*1+lsi)*1]), &(stack[((hsi*55+11399)*1+lsi)*1]), &(stack[((hsi*45+11199)*1+lsi)*1]), &(stack[((hsi*55+9158)*1+lsi)*1]), &(stack[((hsi*55+11520)*1+lsi)*1]), &(stack[((hsi*55+9213)*1+lsi)*1]), &(stack[((hsi*55+10633)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+11707)*1+lsi)*1]), &(stack[((hsi*66+11454)*1+lsi)*1]), &(stack[((hsi*55+11244)*1+lsi)*1]), &(stack[((hsi*66+9334)*1+lsi)*1]), &(stack[((hsi*66+11641)*1+lsi)*1]), &(stack[((hsi*66+9268)*1+lsi)*1]), &(stack[((hsi*66+11575)*1+lsi)*1]), &(stack[((hsi*66+10809)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6776)*1+lsi)*1]),&(stack[((hsi*78+11707)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+8044)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+8044)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+7968)*1+lsi)*1]), &(stack[((hsi*3+7971)*1+lsi)*1]), &(stack[((hsi*3+9687)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7795)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+8044)*1+lsi)*1]), &(stack[((hsi*6+9481)*1+lsi)*1]), &(stack[((hsi*6+9487)*1+lsi)*1]), &(stack[((hsi*6+9690)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*10+7795)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*10+9509)*1+lsi)*1]), &(stack[((hsi*10+9519)*1+lsi)*1]), &(stack[((hsi*10+9696)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*10+7795)*1+lsi)*1]), &(stack[((hsi*15+9554)*1+lsi)*1]), &(stack[((hsi*15+9569)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9554)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*3+9554)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+7715)*1+lsi)*1]), &(stack[((hsi*3+8044)*1+lsi)*1]), &(stack[((hsi*3+7965)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*3+9554)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*6+7974)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*10+9605)*1+lsi)*1]), &(stack[((hsi*10+7795)*1+lsi)*1]), &(stack[((hsi*10+9493)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9554)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*15+9615)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*15+9529)*1+lsi)*1]), &(stack[((hsi*15+7700)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11806)*1+lsi)*1]), &(stack[((hsi*21+9554)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*21+9630)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*21+9584)*1+lsi)*1]), &(stack[((hsi*21+7718)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+6748)*1+lsi)*1]),&(stack[((hsi*28+11806)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+11834)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*21+9734)*1+lsi)*1]), &(stack[((hsi*21+9755)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9734)*1+lsi)*1]), &(stack[((hsi*28+11806)*1+lsi)*1]), &(stack[((hsi*21+9554)*1+lsi)*1]), &(stack[((hsi*28+9804)*1+lsi)*1]), &(stack[((hsi*28+11834)*1+lsi)*1]), &(stack[((hsi*28+9776)*1+lsi)*1]), &(stack[((hsi*28+11045)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6712)*1+lsi)*1]),&(stack[((hsi*36+9734)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11862)*1+lsi)*1]), &(stack[((hsi*28+11834)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*28+9868)*1+lsi)*1]), &(stack[((hsi*28+9896)*1+lsi)*1]), &(stack[((hsi*28+7767)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11898)*1+lsi)*1]), &(stack[((hsi*36+9734)*1+lsi)*1]), &(stack[((hsi*28+11806)*1+lsi)*1]), &(stack[((hsi*36+9960)*1+lsi)*1]), &(stack[((hsi*36+11862)*1+lsi)*1]), &(stack[((hsi*36+9924)*1+lsi)*1]), &(stack[((hsi*36+8157)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6667)*1+lsi)*1]),&(stack[((hsi*45+11898)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11943)*1+lsi)*1]), &(stack[((hsi*36+11862)*1+lsi)*1]), &(stack[((hsi*28+11834)*1+lsi)*1]), &(stack[((hsi*36+10069)*1+lsi)*1]), &(stack[((hsi*36+10105)*1+lsi)*1]), &(stack[((hsi*36+11118)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11988)*1+lsi)*1]), &(stack[((hsi*45+11898)*1+lsi)*1]), &(stack[((hsi*36+9734)*1+lsi)*1]), &(stack[((hsi*45+10186)*1+lsi)*1]), &(stack[((hsi*45+11943)*1+lsi)*1]), &(stack[((hsi*45+10141)*1+lsi)*1]), &(stack[((hsi*45+11199)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6612)*1+lsi)*1]),&(stack[((hsi*55+11988)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12043)*1+lsi)*1]), &(stack[((hsi*45+11943)*1+lsi)*1]), &(stack[((hsi*36+11862)*1+lsi)*1]), &(stack[((hsi*45+10322)*1+lsi)*1]), &(stack[((hsi*45+10367)*1+lsi)*1]), &(stack[((hsi*45+11299)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12098)*1+lsi)*1]), &(stack[((hsi*55+11988)*1+lsi)*1]), &(stack[((hsi*45+11898)*1+lsi)*1]), &(stack[((hsi*55+10467)*1+lsi)*1]), &(stack[((hsi*55+12043)*1+lsi)*1]), &(stack[((hsi*55+10412)*1+lsi)*1]), &(stack[((hsi*55+11399)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6546)*1+lsi)*1]),&(stack[((hsi*66+12098)*1+lsi)*1]),66);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12164)*1+lsi)*1]), &(stack[((hsi*55+12043)*1+lsi)*1]), &(stack[((hsi*45+11943)*1+lsi)*1]), &(stack[((hsi*55+10633)*1+lsi)*1]), &(stack[((hsi*55+10688)*1+lsi)*1]), &(stack[((hsi*55+11520)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12230)*1+lsi)*1]), &(stack[((hsi*66+12098)*1+lsi)*1]), &(stack[((hsi*55+11988)*1+lsi)*1]), &(stack[((hsi*66+10809)*1+lsi)*1]), &(stack[((hsi*66+12164)*1+lsi)*1]), &(stack[((hsi*66+10743)*1+lsi)*1]), &(stack[((hsi*66+11641)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6468)*1+lsi)*1]),&(stack[((hsi*78+12230)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9554)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*3+9554)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+9478)*1+lsi)*1]), &(stack[((hsi*3+8372)*1+lsi)*1]), &(stack[((hsi*3+8044)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*3+9554)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*6+8375)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*10+7795)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*15+7700)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9554)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*21+7718)*1+lsi)*1]), &(stack[((hsi*21+10968)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+6440)*1+lsi)*1]),&(stack[((hsi*28+9554)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12308)*1+lsi)*1]), &(stack[((hsi*28+9554)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*28+11045)*1+lsi)*1]), &(stack[((hsi*28+11017)*1+lsi)*1]), &(stack[((hsi*28+11834)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6404)*1+lsi)*1]),&(stack[((hsi*36+12308)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12344)*1+lsi)*1]), &(stack[((hsi*36+12308)*1+lsi)*1]), &(stack[((hsi*28+9554)*1+lsi)*1]), &(stack[((hsi*36+8157)*1+lsi)*1]), &(stack[((hsi*36+9651)*1+lsi)*1]), &(stack[((hsi*36+11862)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6359)*1+lsi)*1]),&(stack[((hsi*45+12344)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12389)*1+lsi)*1]), &(stack[((hsi*45+12344)*1+lsi)*1]), &(stack[((hsi*36+12308)*1+lsi)*1]), &(stack[((hsi*45+11199)*1+lsi)*1]), &(stack[((hsi*45+11154)*1+lsi)*1]), &(stack[((hsi*45+11943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6304)*1+lsi)*1]),&(stack[((hsi*55+12389)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12444)*1+lsi)*1]), &(stack[((hsi*55+12389)*1+lsi)*1]), &(stack[((hsi*45+12344)*1+lsi)*1]), &(stack[((hsi*55+11399)*1+lsi)*1]), &(stack[((hsi*55+11344)*1+lsi)*1]), &(stack[((hsi*55+12043)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6238)*1+lsi)*1]),&(stack[((hsi*66+12444)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12510)*1+lsi)*1]), &(stack[((hsi*66+12444)*1+lsi)*1]), &(stack[((hsi*55+12389)*1+lsi)*1]), &(stack[((hsi*66+11641)*1+lsi)*1]), &(stack[((hsi*66+11575)*1+lsi)*1]), &(stack[((hsi*66+12164)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6160)*1+lsi)*1]),&(stack[((hsi*78+12510)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7746)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*3+7746)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+7965)*1+lsi)*1]), &(stack[((hsi*3+7715)*1+lsi)*1]), &(stack[((hsi*3+8044)*1+lsi)*1]), &(stack[((hsi*3+8372)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*3+7746)*1+lsi)*1]), &(stack[((hsi*6+7974)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*6+8375)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*6+7968)*1+lsi)*1]), &(stack[((hsi*10+9493)*1+lsi)*1]), &(stack[((hsi*10+9605)*1+lsi)*1]), &(stack[((hsi*10+7795)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*10+7805)*1+lsi)*1]), &(stack[((hsi*15+9529)*1+lsi)*1]), &(stack[((hsi*15+9615)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12588)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*15+10953)*1+lsi)*1]), &(stack[((hsi*21+9584)*1+lsi)*1]), &(stack[((hsi*21+9630)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*21+10968)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+6132)*1+lsi)*1]),&(stack[((hsi*28+12588)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12616)*1+lsi)*1]), &(stack[((hsi*28+12588)*1+lsi)*1]), &(stack[((hsi*21+8044)*1+lsi)*1]), &(stack[((hsi*28+9776)*1+lsi)*1]), &(stack[((hsi*28+9804)*1+lsi)*1]), &(stack[((hsi*28+11834)*1+lsi)*1]), &(stack[((hsi*28+11017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6096)*1+lsi)*1]),&(stack[((hsi*36+12616)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12652)*1+lsi)*1]), &(stack[((hsi*36+12616)*1+lsi)*1]), &(stack[((hsi*28+12588)*1+lsi)*1]), &(stack[((hsi*36+9924)*1+lsi)*1]), &(stack[((hsi*36+9960)*1+lsi)*1]), &(stack[((hsi*36+11862)*1+lsi)*1]), &(stack[((hsi*36+9651)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6051)*1+lsi)*1]),&(stack[((hsi*45+12652)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12697)*1+lsi)*1]), &(stack[((hsi*45+12652)*1+lsi)*1]), &(stack[((hsi*36+12616)*1+lsi)*1]), &(stack[((hsi*45+10141)*1+lsi)*1]), &(stack[((hsi*45+10186)*1+lsi)*1]), &(stack[((hsi*45+11943)*1+lsi)*1]), &(stack[((hsi*45+11154)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5996)*1+lsi)*1]),&(stack[((hsi*55+12697)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+12752)*1+lsi)*1]), &(stack[((hsi*55+12697)*1+lsi)*1]), &(stack[((hsi*45+12652)*1+lsi)*1]), &(stack[((hsi*55+10412)*1+lsi)*1]), &(stack[((hsi*55+10467)*1+lsi)*1]), &(stack[((hsi*55+12043)*1+lsi)*1]), &(stack[((hsi*55+11344)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5930)*1+lsi)*1]),&(stack[((hsi*66+12752)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12818)*1+lsi)*1]), &(stack[((hsi*66+12752)*1+lsi)*1]), &(stack[((hsi*55+12697)*1+lsi)*1]), &(stack[((hsi*66+10743)*1+lsi)*1]), &(stack[((hsi*66+10809)*1+lsi)*1]), &(stack[((hsi*66+12164)*1+lsi)*1]), &(stack[((hsi*66+11575)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5852)*1+lsi)*1]),&(stack[((hsi*78+12818)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+11785)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+11785)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+7815)*1+lsi)*1]), &(stack[((hsi*3+8372)*1+lsi)*1]), &(stack[((hsi*3+7870)*1+lsi)*1]), &(stack[((hsi*3+9478)*1+lsi)*1]), &(stack[((hsi*3+7965)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+8044)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+11785)*1+lsi)*1]), &(stack[((hsi*6+7818)*1+lsi)*1]), &(stack[((hsi*6+8375)*1+lsi)*1]), &(stack[((hsi*6+7873)*1+lsi)*1]), &(stack[((hsi*6+9503)*1+lsi)*1]), &(stack[((hsi*6+7974)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*10+8044)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*10+7824)*1+lsi)*1]), &(stack[((hsi*10+7925)*1+lsi)*1]), &(stack[((hsi*10+7879)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*10+9493)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*10+8044)*1+lsi)*1]), &(stack[((hsi*15+7834)*1+lsi)*1]), &(stack[((hsi*15+7950)*1+lsi)*1]), &(stack[((hsi*15+7889)*1+lsi)*1]), &(stack[((hsi*15+7700)*1+lsi)*1]), &(stack[((hsi*15+9529)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12896)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*15+7935)*1+lsi)*1]), &(stack[((hsi*21+7849)*1+lsi)*1]), &(stack[((hsi*21+10968)*1+lsi)*1]), &(stack[((hsi*21+7904)*1+lsi)*1]), &(stack[((hsi*21+7718)*1+lsi)*1]), &(stack[((hsi*21+9584)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5824)*1+lsi)*1]),&(stack[((hsi*28+12896)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10953)*1+lsi)*1]), &(stack[((hsi*28+12896)*1+lsi)*1]), &(stack[((hsi*21+7746)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*28+11017)*1+lsi)*1]), &(stack[((hsi*28+8093)*1+lsi)*1]), &(stack[((hsi*28+11045)*1+lsi)*1]), &(stack[((hsi*28+9776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5788)*1+lsi)*1]),&(stack[((hsi*36+10953)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12924)*1+lsi)*1]), &(stack[((hsi*36+10953)*1+lsi)*1]), &(stack[((hsi*28+12896)*1+lsi)*1]), &(stack[((hsi*36+8255)*1+lsi)*1]), &(stack[((hsi*36+9651)*1+lsi)*1]), &(stack[((hsi*36+8291)*1+lsi)*1]), &(stack[((hsi*36+8157)*1+lsi)*1]), &(stack[((hsi*36+9924)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5743)*1+lsi)*1]),&(stack[((hsi*45+12924)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+12969)*1+lsi)*1]), &(stack[((hsi*45+12924)*1+lsi)*1]), &(stack[((hsi*36+10953)*1+lsi)*1]), &(stack[((hsi*45+8521)*1+lsi)*1]), &(stack[((hsi*45+11154)*1+lsi)*1]), &(stack[((hsi*45+8566)*1+lsi)*1]), &(stack[((hsi*45+11199)*1+lsi)*1]), &(stack[((hsi*45+10141)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5688)*1+lsi)*1]),&(stack[((hsi*55+12969)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13024)*1+lsi)*1]), &(stack[((hsi*55+12969)*1+lsi)*1]), &(stack[((hsi*45+12924)*1+lsi)*1]), &(stack[((hsi*55+8856)*1+lsi)*1]), &(stack[((hsi*55+11344)*1+lsi)*1]), &(stack[((hsi*55+8911)*1+lsi)*1]), &(stack[((hsi*55+11399)*1+lsi)*1]), &(stack[((hsi*55+10412)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5622)*1+lsi)*1]),&(stack[((hsi*66+13024)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13090)*1+lsi)*1]), &(stack[((hsi*66+13024)*1+lsi)*1]), &(stack[((hsi*55+12969)*1+lsi)*1]), &(stack[((hsi*66+9268)*1+lsi)*1]), &(stack[((hsi*66+11575)*1+lsi)*1]), &(stack[((hsi*66+9334)*1+lsi)*1]), &(stack[((hsi*66+11641)*1+lsi)*1]), &(stack[((hsi*66+10743)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5544)*1+lsi)*1]),&(stack[((hsi*78+13090)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+7925)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+7925)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+7965)*1+lsi)*1]), &(stack[((hsi*3+7715)*1+lsi)*1]), &(stack[((hsi*3+7815)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+7925)*1+lsi)*1]), &(stack[((hsi*6+7974)*1+lsi)*1]), &(stack[((hsi*6+7740)*1+lsi)*1]), &(stack[((hsi*6+7818)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9478)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*10+9493)*1+lsi)*1]), &(stack[((hsi*10+9605)*1+lsi)*1]), &(stack[((hsi*10+7824)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*15+9478)*1+lsi)*1]), &(stack[((hsi*10+9544)*1+lsi)*1]), &(stack[((hsi*15+9529)*1+lsi)*1]), &(stack[((hsi*15+9615)*1+lsi)*1]), &(stack[((hsi*15+7834)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7700)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*15+9478)*1+lsi)*1]), &(stack[((hsi*21+9584)*1+lsi)*1]), &(stack[((hsi*21+9630)*1+lsi)*1]), &(stack[((hsi*21+7849)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5516)*1+lsi)*1]),&(stack[((hsi*28+7700)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+9478)*1+lsi)*1]), &(stack[((hsi*28+7700)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*28+9776)*1+lsi)*1]), &(stack[((hsi*28+9804)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5480)*1+lsi)*1]),&(stack[((hsi*36+9478)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+9582)*1+lsi)*1]), &(stack[((hsi*36+9478)*1+lsi)*1]), &(stack[((hsi*28+7700)*1+lsi)*1]), &(stack[((hsi*36+9924)*1+lsi)*1]), &(stack[((hsi*36+9960)*1+lsi)*1]), &(stack[((hsi*36+8255)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5435)*1+lsi)*1]),&(stack[((hsi*45+9582)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7925)*1+lsi)*1]), &(stack[((hsi*45+9582)*1+lsi)*1]), &(stack[((hsi*36+9478)*1+lsi)*1]), &(stack[((hsi*45+10141)*1+lsi)*1]), &(stack[((hsi*45+10186)*1+lsi)*1]), &(stack[((hsi*45+8521)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5380)*1+lsi)*1]),&(stack[((hsi*55+7925)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13168)*1+lsi)*1]), &(stack[((hsi*55+7925)*1+lsi)*1]), &(stack[((hsi*45+9582)*1+lsi)*1]), &(stack[((hsi*55+10412)*1+lsi)*1]), &(stack[((hsi*55+10467)*1+lsi)*1]), &(stack[((hsi*55+8856)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5314)*1+lsi)*1]),&(stack[((hsi*66+13168)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13234)*1+lsi)*1]), &(stack[((hsi*66+13168)*1+lsi)*1]), &(stack[((hsi*55+7925)*1+lsi)*1]), &(stack[((hsi*66+10743)*1+lsi)*1]), &(stack[((hsi*66+10809)*1+lsi)*1]), &(stack[((hsi*66+9268)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5236)*1+lsi)*1]),&(stack[((hsi*78+13234)*1+lsi)*1]),78);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9514)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+9514)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+7815)*1+lsi)*1]), &(stack[((hsi*3+7870)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+7728)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*3+9514)*1+lsi)*1]), &(stack[((hsi*6+7818)*1+lsi)*1]), &(stack[((hsi*6+7873)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9514)*1+lsi)*1]), &(stack[((hsi*10+7728)*1+lsi)*1]), &(stack[((hsi*6+8193)*1+lsi)*1]), &(stack[((hsi*10+7824)*1+lsi)*1]), &(stack[((hsi*10+7879)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*15+9514)*1+lsi)*1]), &(stack[((hsi*10+7728)*1+lsi)*1]), &(stack[((hsi*15+7834)*1+lsi)*1]), &(stack[((hsi*15+7889)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+7795)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*15+9514)*1+lsi)*1]), &(stack[((hsi*21+7849)*1+lsi)*1]), &(stack[((hsi*21+7904)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5208)*1+lsi)*1]),&(stack[((hsi*28+7795)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+7823)*1+lsi)*1]), &(stack[((hsi*28+7795)*1+lsi)*1]), &(stack[((hsi*21+11785)*1+lsi)*1]), &(stack[((hsi*28+8065)*1+lsi)*1]), &(stack[((hsi*28+8093)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5172)*1+lsi)*1]),&(stack[((hsi*36+7823)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+7859)*1+lsi)*1]), &(stack[((hsi*36+7823)*1+lsi)*1]), &(stack[((hsi*28+7795)*1+lsi)*1]), &(stack[((hsi*36+8255)*1+lsi)*1]), &(stack[((hsi*36+8291)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5127)*1+lsi)*1]),&(stack[((hsi*45+7859)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13312)*1+lsi)*1]), &(stack[((hsi*45+7859)*1+lsi)*1]), &(stack[((hsi*36+7823)*1+lsi)*1]), &(stack[((hsi*45+8521)*1+lsi)*1]), &(stack[((hsi*45+8566)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5072)*1+lsi)*1]),&(stack[((hsi*55+13312)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13367)*1+lsi)*1]), &(stack[((hsi*55+13312)*1+lsi)*1]), &(stack[((hsi*45+7859)*1+lsi)*1]), &(stack[((hsi*55+8856)*1+lsi)*1]), &(stack[((hsi*55+8911)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5006)*1+lsi)*1]),&(stack[((hsi*66+13367)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13433)*1+lsi)*1]), &(stack[((hsi*66+13367)*1+lsi)*1]), &(stack[((hsi*55+13312)*1+lsi)*1]), &(stack[((hsi*66+9268)*1+lsi)*1]), &(stack[((hsi*66+9334)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4928)*1+lsi)*1]),&(stack[((hsi*78+13433)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4900)*1+lsi)*1]),&(stack[((hsi*28+8093)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4864)*1+lsi)*1]),&(stack[((hsi*36+8291)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4819)*1+lsi)*1]),&(stack[((hsi*45+8566)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4764)*1+lsi)*1]),&(stack[((hsi*55+8911)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4698)*1+lsi)*1]),&(stack[((hsi*66+9334)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13511)*1+lsi)*1]), &(stack[((hsi*36+9032)*1+lsi)*1]), &(stack[((hsi*28+8666)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13556)*1+lsi)*1]), &(stack[((hsi*45+9113)*1+lsi)*1]), &(stack[((hsi*36+8730)*1+lsi)*1]), &(stack[((hsi*45+13511)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13611)*1+lsi)*1]), &(stack[((hsi*45+9068)*1+lsi)*1]), &(stack[((hsi*36+8694)*1+lsi)*1]), &(stack[((hsi*45+13511)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13666)*1+lsi)*1]), &(stack[((hsi*55+9213)*1+lsi)*1]), &(stack[((hsi*45+8811)*1+lsi)*1]), &(stack[((hsi*55+13611)*1+lsi)*1]), &(stack[((hsi*55+13556)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13732)*1+lsi)*1]), &(stack[((hsi*55+9158)*1+lsi)*1]), &(stack[((hsi*45+8766)*1+lsi)*1]), &(stack[((hsi*55+13556)*1+lsi)*1]), &(stack[((hsi*55+13611)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13798)*1+lsi)*1]), &(stack[((hsi*66+9334)*1+lsi)*1]), &(stack[((hsi*55+8911)*1+lsi)*1]), &(stack[((hsi*66+13732)*1+lsi)*1]), &(stack[((hsi*66+13666)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4620)*1+lsi)*1]),&(stack[((hsi*78+13798)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4592)*1+lsi)*1]),&(stack[((hsi*28+9804)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4556)*1+lsi)*1]),&(stack[((hsi*36+9960)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4511)*1+lsi)*1]),&(stack[((hsi*45+10186)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4456)*1+lsi)*1]),&(stack[((hsi*55+10467)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4390)*1+lsi)*1]),&(stack[((hsi*66+10809)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13876)*1+lsi)*1]), &(stack[((hsi*45+10588)*1+lsi)*1]), &(stack[((hsi*36+10286)*1+lsi)*1]), &(stack[((hsi*45+13511)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13931)*1+lsi)*1]), &(stack[((hsi*55+10688)*1+lsi)*1]), &(stack[((hsi*45+10367)*1+lsi)*1]), &(stack[((hsi*55+13876)*1+lsi)*1]), &(stack[((hsi*55+13611)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13997)*1+lsi)*1]), &(stack[((hsi*55+10633)*1+lsi)*1]), &(stack[((hsi*45+10322)*1+lsi)*1]), &(stack[((hsi*55+13876)*1+lsi)*1]), &(stack[((hsi*55+13556)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14063)*1+lsi)*1]), &(stack[((hsi*66+10809)*1+lsi)*1]), &(stack[((hsi*55+10467)*1+lsi)*1]), &(stack[((hsi*66+13997)*1+lsi)*1]), &(stack[((hsi*66+13931)*1+lsi)*1]), &(stack[((hsi*66+13732)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4312)*1+lsi)*1]),&(stack[((hsi*78+14063)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4284)*1+lsi)*1]),&(stack[((hsi*28+11045)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4248)*1+lsi)*1]),&(stack[((hsi*36+8157)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4203)*1+lsi)*1]),&(stack[((hsi*45+11199)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4148)*1+lsi)*1]),&(stack[((hsi*55+11399)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4082)*1+lsi)*1]),&(stack[((hsi*66+11641)*1+lsi)*1]),66);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14141)*1+lsi)*1]), &(stack[((hsi*55+11520)*1+lsi)*1]), &(stack[((hsi*45+11299)*1+lsi)*1]), &(stack[((hsi*55+13556)*1+lsi)*1]), &(stack[((hsi*55+13611)*1+lsi)*1]), &(stack[((hsi*55+13876)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14207)*1+lsi)*1]), &(stack[((hsi*66+11641)*1+lsi)*1]), &(stack[((hsi*55+11399)*1+lsi)*1]), &(stack[((hsi*66+13732)*1+lsi)*1]), &(stack[((hsi*66+14141)*1+lsi)*1]), &(stack[((hsi*66+13666)*1+lsi)*1]), &(stack[((hsi*66+13997)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4004)*1+lsi)*1]),&(stack[((hsi*78+14207)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3976)*1+lsi)*1]),&(stack[((hsi*28+11834)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3940)*1+lsi)*1]),&(stack[((hsi*36+11862)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3895)*1+lsi)*1]),&(stack[((hsi*45+11943)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3840)*1+lsi)*1]),&(stack[((hsi*55+12043)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3774)*1+lsi)*1]),&(stack[((hsi*66+12164)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14285)*1+lsi)*1]), &(stack[((hsi*66+12164)*1+lsi)*1]), &(stack[((hsi*55+12043)*1+lsi)*1]), &(stack[((hsi*66+13997)*1+lsi)*1]), &(stack[((hsi*66+13931)*1+lsi)*1]), &(stack[((hsi*66+14141)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3696)*1+lsi)*1]),&(stack[((hsi*78+14285)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3668)*1+lsi)*1]),&(stack[((hsi*28+11017)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3632)*1+lsi)*1]),&(stack[((hsi*36+9651)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3587)*1+lsi)*1]),&(stack[((hsi*45+11154)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3532)*1+lsi)*1]),&(stack[((hsi*55+11344)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3466)*1+lsi)*1]),&(stack[((hsi*66+11575)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14363)*1+lsi)*1]), &(stack[((hsi*66+11575)*1+lsi)*1]), &(stack[((hsi*55+11344)*1+lsi)*1]), &(stack[((hsi*66+13666)*1+lsi)*1]), &(stack[((hsi*66+13732)*1+lsi)*1]), &(stack[((hsi*66+14141)*1+lsi)*1]), &(stack[((hsi*66+13931)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3388)*1+lsi)*1]),&(stack[((hsi*78+14363)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3360)*1+lsi)*1]),&(stack[((hsi*28+9776)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3324)*1+lsi)*1]),&(stack[((hsi*36+9924)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3279)*1+lsi)*1]),&(stack[((hsi*45+10141)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3224)*1+lsi)*1]),&(stack[((hsi*55+10412)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3158)*1+lsi)*1]),&(stack[((hsi*66+10743)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14441)*1+lsi)*1]), &(stack[((hsi*66+10743)*1+lsi)*1]), &(stack[((hsi*55+10412)*1+lsi)*1]), &(stack[((hsi*66+13931)*1+lsi)*1]), &(stack[((hsi*66+13997)*1+lsi)*1]), &(stack[((hsi*66+13666)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3080)*1+lsi)*1]),&(stack[((hsi*78+14441)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3052)*1+lsi)*1]),&(stack[((hsi*28+8065)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3016)*1+lsi)*1]),&(stack[((hsi*36+8255)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2971)*1+lsi)*1]),&(stack[((hsi*45+8521)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2916)*1+lsi)*1]),&(stack[((hsi*55+8856)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2850)*1+lsi)*1]),&(stack[((hsi*66+9268)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14519)*1+lsi)*1]), &(stack[((hsi*66+9268)*1+lsi)*1]), &(stack[((hsi*55+8856)*1+lsi)*1]), &(stack[((hsi*66+13666)*1+lsi)*1]), &(stack[((hsi*66+13732)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2772)*1+lsi)*1]),&(stack[((hsi*78+14519)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2744)*1+lsi)*1]),&(stack[((hsi*28+8199)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2708)*1+lsi)*1]),&(stack[((hsi*36+8449)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2663)*1+lsi)*1]),&(stack[((hsi*45+8766)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2608)*1+lsi)*1]),&(stack[((hsi*55+9158)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2542)*1+lsi)*1]),&(stack[((hsi*66+13732)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14597)*1+lsi)*1]), &(stack[((hsi*45+13511)*1+lsi)*1]), &(stack[((hsi*36+9032)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14652)*1+lsi)*1]), &(stack[((hsi*55+13611)*1+lsi)*1]), &(stack[((hsi*45+9068)*1+lsi)*1]), &(stack[((hsi*55+14597)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14718)*1+lsi)*1]), &(stack[((hsi*55+13556)*1+lsi)*1]), &(stack[((hsi*45+9113)*1+lsi)*1]), &(stack[((hsi*55+14597)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14784)*1+lsi)*1]), &(stack[((hsi*66+13732)*1+lsi)*1]), &(stack[((hsi*55+9158)*1+lsi)*1]), &(stack[((hsi*66+14718)*1+lsi)*1]), &(stack[((hsi*66+14652)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2464)*1+lsi)*1]),&(stack[((hsi*78+14784)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2436)*1+lsi)*1]),&(stack[((hsi*28+9868)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2400)*1+lsi)*1]),&(stack[((hsi*36+10069)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2355)*1+lsi)*1]),&(stack[((hsi*45+10322)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2300)*1+lsi)*1]),&(stack[((hsi*55+10633)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2234)*1+lsi)*1]),&(stack[((hsi*66+13997)*1+lsi)*1]),66);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14862)*1+lsi)*1]), &(stack[((hsi*55+13876)*1+lsi)*1]), &(stack[((hsi*45+10588)*1+lsi)*1]), &(stack[((hsi*55+14597)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14928)*1+lsi)*1]), &(stack[((hsi*66+13997)*1+lsi)*1]), &(stack[((hsi*55+10633)*1+lsi)*1]), &(stack[((hsi*66+14862)*1+lsi)*1]), &(stack[((hsi*66+14718)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2156)*1+lsi)*1]),&(stack[((hsi*78+14928)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2128)*1+lsi)*1]),&(stack[((hsi*28+7767)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2092)*1+lsi)*1]),&(stack[((hsi*36+11118)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2047)*1+lsi)*1]),&(stack[((hsi*45+11299)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1992)*1+lsi)*1]),&(stack[((hsi*55+11520)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1926)*1+lsi)*1]),&(stack[((hsi*66+14141)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15006)*1+lsi)*1]), &(stack[((hsi*66+14141)*1+lsi)*1]), &(stack[((hsi*55+11520)*1+lsi)*1]), &(stack[((hsi*66+14718)*1+lsi)*1]), &(stack[((hsi*66+14652)*1+lsi)*1]), &(stack[((hsi*66+14862)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1848)*1+lsi)*1]),&(stack[((hsi*78+15006)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1820)*1+lsi)*1]),&(stack[((hsi*28+9896)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1784)*1+lsi)*1]),&(stack[((hsi*36+10105)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1739)*1+lsi)*1]),&(stack[((hsi*45+10367)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1684)*1+lsi)*1]),&(stack[((hsi*55+10688)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1618)*1+lsi)*1]),&(stack[((hsi*66+13931)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15084)*1+lsi)*1]), &(stack[((hsi*66+13931)*1+lsi)*1]), &(stack[((hsi*55+10688)*1+lsi)*1]), &(stack[((hsi*66+14862)*1+lsi)*1]), &(stack[((hsi*66+14652)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1540)*1+lsi)*1]),&(stack[((hsi*78+15084)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1512)*1+lsi)*1]),&(stack[((hsi*28+8227)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1476)*1+lsi)*1]),&(stack[((hsi*36+8485)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1431)*1+lsi)*1]),&(stack[((hsi*45+8811)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1376)*1+lsi)*1]),&(stack[((hsi*55+9213)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1310)*1+lsi)*1]),&(stack[((hsi*66+13666)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15162)*1+lsi)*1]), &(stack[((hsi*66+13666)*1+lsi)*1]), &(stack[((hsi*55+9213)*1+lsi)*1]), &(stack[((hsi*66+14652)*1+lsi)*1]), &(stack[((hsi*66+14718)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1232)*1+lsi)*1]),&(stack[((hsi*78+15162)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1204)*1+lsi)*1]),&(stack[((hsi*28+8421)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1168)*1+lsi)*1]),&(stack[((hsi*36+8730)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1123)*1+lsi)*1]),&(stack[((hsi*45+9113)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1068)*1+lsi)*1]),&(stack[((hsi*55+13556)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1002)*1+lsi)*1]),&(stack[((hsi*66+14718)*1+lsi)*1]),66);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15240)*1+lsi)*1]), &(stack[((hsi*55+14597)*1+lsi)*1]), &(stack[((hsi*45+13511)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15306)*1+lsi)*1]), &(stack[((hsi*66+14718)*1+lsi)*1]), &(stack[((hsi*55+13556)*1+lsi)*1]), &(stack[((hsi*66+15240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+924)*1+lsi)*1]),&(stack[((hsi*78+15306)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+896)*1+lsi)*1]),&(stack[((hsi*28+10041)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+860)*1+lsi)*1]),&(stack[((hsi*36+10286)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+815)*1+lsi)*1]),&(stack[((hsi*45+10588)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+760)*1+lsi)*1]),&(stack[((hsi*55+13876)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+694)*1+lsi)*1]),&(stack[((hsi*66+14862)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15384)*1+lsi)*1]), &(stack[((hsi*66+14862)*1+lsi)*1]), &(stack[((hsi*55+13876)*1+lsi)*1]), &(stack[((hsi*66+15240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+616)*1+lsi)*1]),&(stack[((hsi*78+15384)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+588)*1+lsi)*1]),&(stack[((hsi*28+8393)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+552)*1+lsi)*1]),&(stack[((hsi*36+8694)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+507)*1+lsi)*1]),&(stack[((hsi*45+9068)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+452)*1+lsi)*1]),&(stack[((hsi*55+13611)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+386)*1+lsi)*1]),&(stack[((hsi*66+14652)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15462)*1+lsi)*1]), &(stack[((hsi*66+14652)*1+lsi)*1]), &(stack[((hsi*55+13611)*1+lsi)*1]), &(stack[((hsi*66+15240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+308)*1+lsi)*1]),&(stack[((hsi*78+15462)*1+lsi)*1]),78);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+280)*1+lsi)*1]),&(stack[((hsi*28+8666)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+244)*1+lsi)*1]),&(stack[((hsi*36+9032)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+199)*1+lsi)*1]),&(stack[((hsi*45+13511)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+144)*1+lsi)*1]),&(stack[((hsi*55+14597)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+78)*1+lsi)*1]),&(stack[((hsi*66+15240)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15540)*1+lsi)*1]), &(stack[((hsi*66+15240)*1+lsi)*1]), &(stack[((hsi*55+14597)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+0)*1+lsi)*1]),&(stack[((hsi*78+15540)*1+lsi)*1]),78);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 7700 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
