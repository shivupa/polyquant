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
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_.h>
#include <OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_.h>
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
void _sphemultipole_I_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9975)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9978)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9981)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9984)*1+lsi)*1]), &(stack[((hsi*3+9975)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+9981)*1+lsi)*1]), &(stack[((hsi*3+9978)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9990)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9993)*1+lsi)*1]), &(stack[((hsi*3+9978)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+9990)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+9999)*1+lsi)*1]), &(stack[((hsi*3+9981)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+9990)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10005)*1+lsi)*1]), &(stack[((hsi*6+9984)*1+lsi)*1]), &(stack[((hsi*3+9975)*1+lsi)*1]), &(stack[((hsi*6+9999)*1+lsi)*1]), &(stack[((hsi*6+9993)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*3+9990)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10021)*1+lsi)*1]), &(stack[((hsi*6+9993)*1+lsi)*1]), &(stack[((hsi*3+9978)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10031)*1+lsi)*1]), &(stack[((hsi*6+9999)*1+lsi)*1]), &(stack[((hsi*3+9981)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10041)*1+lsi)*1]), &(stack[((hsi*10+10005)*1+lsi)*1]), &(stack[((hsi*6+9984)*1+lsi)*1]), &(stack[((hsi*10+10031)*1+lsi)*1]), &(stack[((hsi*10+10021)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10056)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10059)*1+lsi)*1]), &(stack[((hsi*3+10056)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+9978)*1+lsi)*1]), &(stack[((hsi*3+9981)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10065)*1+lsi)*1]), &(stack[((hsi*6+10059)*1+lsi)*1]), &(stack[((hsi*3+10056)*1+lsi)*1]), &(stack[((hsi*6+9993)*1+lsi)*1]), &(stack[((hsi*6+9999)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10075)*1+lsi)*1]), &(stack[((hsi*10+10065)*1+lsi)*1]), &(stack[((hsi*6+10059)*1+lsi)*1]), &(stack[((hsi*10+10021)*1+lsi)*1]), &(stack[((hsi*10+10031)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10090)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10093)*1+lsi)*1]), &(stack[((hsi*3+10090)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+10056)*1+lsi)*1]), &(stack[((hsi*3+9975)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10099)*1+lsi)*1]), &(stack[((hsi*6+10093)*1+lsi)*1]), &(stack[((hsi*3+10090)*1+lsi)*1]), &(stack[((hsi*6+10059)*1+lsi)*1]), &(stack[((hsi*6+9984)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10109)*1+lsi)*1]), &(stack[((hsi*10+10099)*1+lsi)*1]), &(stack[((hsi*6+10093)*1+lsi)*1]), &(stack[((hsi*10+10065)*1+lsi)*1]), &(stack[((hsi*10+10005)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10124)*1+lsi)*1]), &(stack[((hsi*15+10109)*1+lsi)*1]), &(stack[((hsi*10+10099)*1+lsi)*1]), &(stack[((hsi*15+10075)*1+lsi)*1]), &(stack[((hsi*15+10041)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10145)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10148)*1+lsi)*1]), &(stack[((hsi*3+10145)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+9975)*1+lsi)*1]), &(stack[((hsi*3+10056)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10154)*1+lsi)*1]), &(stack[((hsi*6+10148)*1+lsi)*1]), &(stack[((hsi*3+10145)*1+lsi)*1]), &(stack[((hsi*6+9984)*1+lsi)*1]), &(stack[((hsi*6+10059)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10164)*1+lsi)*1]), &(stack[((hsi*10+10154)*1+lsi)*1]), &(stack[((hsi*6+10148)*1+lsi)*1]), &(stack[((hsi*10+10005)*1+lsi)*1]), &(stack[((hsi*10+10065)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10179)*1+lsi)*1]), &(stack[((hsi*15+10164)*1+lsi)*1]), &(stack[((hsi*10+10154)*1+lsi)*1]), &(stack[((hsi*15+10041)*1+lsi)*1]), &(stack[((hsi*15+10075)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10200)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10203)*1+lsi)*1]), &(stack[((hsi*3+10200)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+10145)*1+lsi)*1]), &(stack[((hsi*3+10090)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10209)*1+lsi)*1]), &(stack[((hsi*6+10203)*1+lsi)*1]), &(stack[((hsi*3+10200)*1+lsi)*1]), &(stack[((hsi*6+10148)*1+lsi)*1]), &(stack[((hsi*6+10093)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10219)*1+lsi)*1]), &(stack[((hsi*10+10209)*1+lsi)*1]), &(stack[((hsi*6+10203)*1+lsi)*1]), &(stack[((hsi*10+10154)*1+lsi)*1]), &(stack[((hsi*10+10099)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10234)*1+lsi)*1]), &(stack[((hsi*15+10219)*1+lsi)*1]), &(stack[((hsi*10+10209)*1+lsi)*1]), &(stack[((hsi*15+10164)*1+lsi)*1]), &(stack[((hsi*15+10109)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10255)*1+lsi)*1]), &(stack[((hsi*21+10234)*1+lsi)*1]), &(stack[((hsi*15+10219)*1+lsi)*1]), &(stack[((hsi*21+10179)*1+lsi)*1]), &(stack[((hsi*21+10124)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+9947)*1+lsi)*1]),&(stack[((hsi*28+10255)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*3+9990)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*10+10021)*1+lsi)*1]), &(stack[((hsi*6+9993)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10283)*1+lsi)*1]), &(stack[((hsi*10+10031)*1+lsi)*1]), &(stack[((hsi*6+9999)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10298)*1+lsi)*1]), &(stack[((hsi*15+10041)*1+lsi)*1]), &(stack[((hsi*10+10005)*1+lsi)*1]), &(stack[((hsi*15+10283)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*15+10075)*1+lsi)*1]), &(stack[((hsi*10+10065)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*15+10283)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10340)*1+lsi)*1]), &(stack[((hsi*21+10124)*1+lsi)*1]), &(stack[((hsi*15+10109)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*21+10298)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10368)*1+lsi)*1]), &(stack[((hsi*21+10179)*1+lsi)*1]), &(stack[((hsi*15+10164)*1+lsi)*1]), &(stack[((hsi*21+10298)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10396)*1+lsi)*1]), &(stack[((hsi*28+10255)*1+lsi)*1]), &(stack[((hsi*21+10234)*1+lsi)*1]), &(stack[((hsi*28+10368)*1+lsi)*1]), &(stack[((hsi*28+10340)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+9911)*1+lsi)*1]),&(stack[((hsi*36+10396)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10432)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*10+10021)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10453)*1+lsi)*1]), &(stack[((hsi*15+10283)*1+lsi)*1]), &(stack[((hsi*10+10031)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10474)*1+lsi)*1]), &(stack[((hsi*21+10298)*1+lsi)*1]), &(stack[((hsi*15+10041)*1+lsi)*1]), &(stack[((hsi*21+10453)*1+lsi)*1]), &(stack[((hsi*21+10432)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10502)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*15+10075)*1+lsi)*1]), &(stack[((hsi*21+10432)*1+lsi)*1]), &(stack[((hsi*21+10453)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10530)*1+lsi)*1]), &(stack[((hsi*28+10340)*1+lsi)*1]), &(stack[((hsi*21+10124)*1+lsi)*1]), &(stack[((hsi*28+10502)*1+lsi)*1]), &(stack[((hsi*28+10474)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10566)*1+lsi)*1]), &(stack[((hsi*28+10368)*1+lsi)*1]), &(stack[((hsi*21+10179)*1+lsi)*1]), &(stack[((hsi*28+10474)*1+lsi)*1]), &(stack[((hsi*28+10502)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10602)*1+lsi)*1]), &(stack[((hsi*36+10396)*1+lsi)*1]), &(stack[((hsi*28+10255)*1+lsi)*1]), &(stack[((hsi*36+10566)*1+lsi)*1]), &(stack[((hsi*36+10530)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+9866)*1+lsi)*1]),&(stack[((hsi*45+10602)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10647)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10668)*1+lsi)*1]), &(stack[((hsi*21+10432)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*21+10647)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10696)*1+lsi)*1]), &(stack[((hsi*21+10453)*1+lsi)*1]), &(stack[((hsi*15+10283)*1+lsi)*1]), &(stack[((hsi*21+10647)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10724)*1+lsi)*1]), &(stack[((hsi*28+10474)*1+lsi)*1]), &(stack[((hsi*21+10298)*1+lsi)*1]), &(stack[((hsi*28+10696)*1+lsi)*1]), &(stack[((hsi*28+10668)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10760)*1+lsi)*1]), &(stack[((hsi*28+10502)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*28+10668)*1+lsi)*1]), &(stack[((hsi*28+10696)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10796)*1+lsi)*1]), &(stack[((hsi*36+10530)*1+lsi)*1]), &(stack[((hsi*28+10340)*1+lsi)*1]), &(stack[((hsi*36+10760)*1+lsi)*1]), &(stack[((hsi*36+10724)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10841)*1+lsi)*1]), &(stack[((hsi*36+10566)*1+lsi)*1]), &(stack[((hsi*28+10368)*1+lsi)*1]), &(stack[((hsi*36+10724)*1+lsi)*1]), &(stack[((hsi*36+10760)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10886)*1+lsi)*1]), &(stack[((hsi*45+10602)*1+lsi)*1]), &(stack[((hsi*36+10396)*1+lsi)*1]), &(stack[((hsi*45+10841)*1+lsi)*1]), &(stack[((hsi*45+10796)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9811)*1+lsi)*1]),&(stack[((hsi*55+10886)*1+lsi)*1]),55);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10941)*1+lsi)*1]), &(stack[((hsi*21+10647)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10969)*1+lsi)*1]), &(stack[((hsi*28+10668)*1+lsi)*1]), &(stack[((hsi*21+10432)*1+lsi)*1]), &(stack[((hsi*28+10941)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11005)*1+lsi)*1]), &(stack[((hsi*28+10696)*1+lsi)*1]), &(stack[((hsi*21+10453)*1+lsi)*1]), &(stack[((hsi*28+10941)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11041)*1+lsi)*1]), &(stack[((hsi*36+10724)*1+lsi)*1]), &(stack[((hsi*28+10474)*1+lsi)*1]), &(stack[((hsi*36+11005)*1+lsi)*1]), &(stack[((hsi*36+10969)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11086)*1+lsi)*1]), &(stack[((hsi*36+10760)*1+lsi)*1]), &(stack[((hsi*28+10502)*1+lsi)*1]), &(stack[((hsi*36+10969)*1+lsi)*1]), &(stack[((hsi*36+11005)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11131)*1+lsi)*1]), &(stack[((hsi*45+10796)*1+lsi)*1]), &(stack[((hsi*36+10530)*1+lsi)*1]), &(stack[((hsi*45+11086)*1+lsi)*1]), &(stack[((hsi*45+11041)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11186)*1+lsi)*1]), &(stack[((hsi*45+10841)*1+lsi)*1]), &(stack[((hsi*36+10566)*1+lsi)*1]), &(stack[((hsi*45+11041)*1+lsi)*1]), &(stack[((hsi*45+11086)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11241)*1+lsi)*1]), &(stack[((hsi*55+10886)*1+lsi)*1]), &(stack[((hsi*45+10602)*1+lsi)*1]), &(stack[((hsi*55+11186)*1+lsi)*1]), &(stack[((hsi*55+11131)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+9745)*1+lsi)*1]),&(stack[((hsi*66+11241)*1+lsi)*1]),66);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+11307)*1+lsi)*1]), &(stack[((hsi*28+10941)*1+lsi)*1]), &(stack[((hsi*21+10647)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11343)*1+lsi)*1]), &(stack[((hsi*36+10969)*1+lsi)*1]), &(stack[((hsi*28+10668)*1+lsi)*1]), &(stack[((hsi*36+11307)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11388)*1+lsi)*1]), &(stack[((hsi*36+11005)*1+lsi)*1]), &(stack[((hsi*28+10696)*1+lsi)*1]), &(stack[((hsi*36+11307)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11433)*1+lsi)*1]), &(stack[((hsi*45+11041)*1+lsi)*1]), &(stack[((hsi*36+10724)*1+lsi)*1]), &(stack[((hsi*45+11388)*1+lsi)*1]), &(stack[((hsi*45+11343)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11488)*1+lsi)*1]), &(stack[((hsi*45+11086)*1+lsi)*1]), &(stack[((hsi*36+10760)*1+lsi)*1]), &(stack[((hsi*45+11343)*1+lsi)*1]), &(stack[((hsi*45+11388)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11543)*1+lsi)*1]), &(stack[((hsi*55+11131)*1+lsi)*1]), &(stack[((hsi*45+10796)*1+lsi)*1]), &(stack[((hsi*55+11488)*1+lsi)*1]), &(stack[((hsi*55+11433)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11609)*1+lsi)*1]), &(stack[((hsi*55+11186)*1+lsi)*1]), &(stack[((hsi*45+10841)*1+lsi)*1]), &(stack[((hsi*55+11433)*1+lsi)*1]), &(stack[((hsi*55+11488)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+11675)*1+lsi)*1]), &(stack[((hsi*66+11241)*1+lsi)*1]), &(stack[((hsi*55+10886)*1+lsi)*1]), &(stack[((hsi*66+11609)*1+lsi)*1]), &(stack[((hsi*66+11543)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+9667)*1+lsi)*1]),&(stack[((hsi*78+11675)*1+lsi)*1]),78);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+11753)*1+lsi)*1]), &(stack[((hsi*36+11307)*1+lsi)*1]), &(stack[((hsi*28+10941)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11798)*1+lsi)*1]), &(stack[((hsi*45+11343)*1+lsi)*1]), &(stack[((hsi*36+10969)*1+lsi)*1]), &(stack[((hsi*45+11753)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+11853)*1+lsi)*1]), &(stack[((hsi*45+11388)*1+lsi)*1]), &(stack[((hsi*36+11005)*1+lsi)*1]), &(stack[((hsi*45+11753)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11908)*1+lsi)*1]), &(stack[((hsi*55+11433)*1+lsi)*1]), &(stack[((hsi*45+11041)*1+lsi)*1]), &(stack[((hsi*55+11853)*1+lsi)*1]), &(stack[((hsi*55+11798)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+11974)*1+lsi)*1]), &(stack[((hsi*55+11488)*1+lsi)*1]), &(stack[((hsi*45+11086)*1+lsi)*1]), &(stack[((hsi*55+11798)*1+lsi)*1]), &(stack[((hsi*55+11853)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12040)*1+lsi)*1]), &(stack[((hsi*66+11543)*1+lsi)*1]), &(stack[((hsi*55+11131)*1+lsi)*1]), &(stack[((hsi*66+11974)*1+lsi)*1]), &(stack[((hsi*66+11908)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+12118)*1+lsi)*1]), &(stack[((hsi*66+11609)*1+lsi)*1]), &(stack[((hsi*55+11186)*1+lsi)*1]), &(stack[((hsi*66+11908)*1+lsi)*1]), &(stack[((hsi*66+11974)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+12196)*1+lsi)*1]), &(stack[((hsi*78+11675)*1+lsi)*1]), &(stack[((hsi*66+11241)*1+lsi)*1]), &(stack[((hsi*78+12118)*1+lsi)*1]), &(stack[((hsi*78+12040)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+9576)*1+lsi)*1]),&(stack[((hsi*91+12196)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10240)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10243)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10246)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10249)*1+lsi)*1]), &(stack[((hsi*3+10240)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+10246)*1+lsi)*1]), &(stack[((hsi*3+10243)*1+lsi)*1]), &(stack[((hsi*3+10056)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12287)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*3+10243)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+12287)*1+lsi)*1]), &(stack[((hsi*3+9981)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12296)*1+lsi)*1]), &(stack[((hsi*3+10246)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+12287)*1+lsi)*1]), &(stack[((hsi*3+9978)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12302)*1+lsi)*1]), &(stack[((hsi*6+10249)*1+lsi)*1]), &(stack[((hsi*3+10240)*1+lsi)*1]), &(stack[((hsi*6+12296)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*6+10059)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+9990)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12318)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*3+10243)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*6+9999)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12328)*1+lsi)*1]), &(stack[((hsi*6+12296)*1+lsi)*1]), &(stack[((hsi*3+10246)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*6+9993)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12338)*1+lsi)*1]), &(stack[((hsi*10+12302)*1+lsi)*1]), &(stack[((hsi*6+10249)*1+lsi)*1]), &(stack[((hsi*10+12328)*1+lsi)*1]), &(stack[((hsi*10+12318)*1+lsi)*1]), &(stack[((hsi*10+10065)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12363)*1+lsi)*1]), &(stack[((hsi*10+12318)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*10+10031)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12378)*1+lsi)*1]), &(stack[((hsi*10+12328)*1+lsi)*1]), &(stack[((hsi*6+12296)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*10+10021)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12393)*1+lsi)*1]), &(stack[((hsi*15+12338)*1+lsi)*1]), &(stack[((hsi*10+12302)*1+lsi)*1]), &(stack[((hsi*15+12378)*1+lsi)*1]), &(stack[((hsi*15+12363)*1+lsi)*1]), &(stack[((hsi*15+10075)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+9990)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*3+9990)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+10243)*1+lsi)*1]), &(stack[((hsi*3+10246)*1+lsi)*1]), &(stack[((hsi*3+9975)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12414)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*3+9990)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*6+12296)*1+lsi)*1]), &(stack[((hsi*6+9984)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12424)*1+lsi)*1]), &(stack[((hsi*10+12414)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*10+12318)*1+lsi)*1]), &(stack[((hsi*10+12328)*1+lsi)*1]), &(stack[((hsi*10+10005)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12439)*1+lsi)*1]), &(stack[((hsi*15+12424)*1+lsi)*1]), &(stack[((hsi*10+12414)*1+lsi)*1]), &(stack[((hsi*15+12363)*1+lsi)*1]), &(stack[((hsi*15+12378)*1+lsi)*1]), &(stack[((hsi*15+10041)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12460)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12463)*1+lsi)*1]), &(stack[((hsi*3+12460)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+9990)*1+lsi)*1]), &(stack[((hsi*3+10240)*1+lsi)*1]), &(stack[((hsi*3+10145)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12469)*1+lsi)*1]), &(stack[((hsi*6+12463)*1+lsi)*1]), &(stack[((hsi*3+12460)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*6+10249)*1+lsi)*1]), &(stack[((hsi*6+10148)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12479)*1+lsi)*1]), &(stack[((hsi*10+12469)*1+lsi)*1]), &(stack[((hsi*6+12463)*1+lsi)*1]), &(stack[((hsi*10+12414)*1+lsi)*1]), &(stack[((hsi*10+12302)*1+lsi)*1]), &(stack[((hsi*10+10154)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12494)*1+lsi)*1]), &(stack[((hsi*15+12479)*1+lsi)*1]), &(stack[((hsi*10+12469)*1+lsi)*1]), &(stack[((hsi*15+12424)*1+lsi)*1]), &(stack[((hsi*15+12338)*1+lsi)*1]), &(stack[((hsi*15+10164)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12515)*1+lsi)*1]), &(stack[((hsi*21+12494)*1+lsi)*1]), &(stack[((hsi*15+12479)*1+lsi)*1]), &(stack[((hsi*21+12439)*1+lsi)*1]), &(stack[((hsi*21+12393)*1+lsi)*1]), &(stack[((hsi*21+10179)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+9548)*1+lsi)*1]),&(stack[((hsi*28+12515)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12460)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12543)*1+lsi)*1]), &(stack[((hsi*15+12363)*1+lsi)*1]), &(stack[((hsi*10+12318)*1+lsi)*1]), &(stack[((hsi*15+12460)*1+lsi)*1]), &(stack[((hsi*15+10283)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12564)*1+lsi)*1]), &(stack[((hsi*15+12378)*1+lsi)*1]), &(stack[((hsi*10+12328)*1+lsi)*1]), &(stack[((hsi*15+12460)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12585)*1+lsi)*1]), &(stack[((hsi*21+12393)*1+lsi)*1]), &(stack[((hsi*15+12338)*1+lsi)*1]), &(stack[((hsi*21+12564)*1+lsi)*1]), &(stack[((hsi*21+12543)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12613)*1+lsi)*1]), &(stack[((hsi*21+12439)*1+lsi)*1]), &(stack[((hsi*15+12424)*1+lsi)*1]), &(stack[((hsi*21+12543)*1+lsi)*1]), &(stack[((hsi*21+12564)*1+lsi)*1]), &(stack[((hsi*21+10298)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12641)*1+lsi)*1]), &(stack[((hsi*28+12515)*1+lsi)*1]), &(stack[((hsi*21+12494)*1+lsi)*1]), &(stack[((hsi*28+12613)*1+lsi)*1]), &(stack[((hsi*28+12585)*1+lsi)*1]), &(stack[((hsi*28+10368)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+9512)*1+lsi)*1]),&(stack[((hsi*36+12641)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12475)*1+lsi)*1]), &(stack[((hsi*15+12460)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12677)*1+lsi)*1]), &(stack[((hsi*21+12543)*1+lsi)*1]), &(stack[((hsi*15+12363)*1+lsi)*1]), &(stack[((hsi*21+12475)*1+lsi)*1]), &(stack[((hsi*21+10453)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12705)*1+lsi)*1]), &(stack[((hsi*21+12564)*1+lsi)*1]), &(stack[((hsi*15+12378)*1+lsi)*1]), &(stack[((hsi*21+12475)*1+lsi)*1]), &(stack[((hsi*21+10432)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12733)*1+lsi)*1]), &(stack[((hsi*28+12585)*1+lsi)*1]), &(stack[((hsi*21+12393)*1+lsi)*1]), &(stack[((hsi*28+12705)*1+lsi)*1]), &(stack[((hsi*28+12677)*1+lsi)*1]), &(stack[((hsi*28+10502)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12769)*1+lsi)*1]), &(stack[((hsi*28+12613)*1+lsi)*1]), &(stack[((hsi*21+12439)*1+lsi)*1]), &(stack[((hsi*28+12677)*1+lsi)*1]), &(stack[((hsi*28+12705)*1+lsi)*1]), &(stack[((hsi*28+10474)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12805)*1+lsi)*1]), &(stack[((hsi*36+12641)*1+lsi)*1]), &(stack[((hsi*28+12515)*1+lsi)*1]), &(stack[((hsi*36+12769)*1+lsi)*1]), &(stack[((hsi*36+12733)*1+lsi)*1]), &(stack[((hsi*36+10566)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+9467)*1+lsi)*1]),&(stack[((hsi*45+12805)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12850)*1+lsi)*1]), &(stack[((hsi*21+12475)*1+lsi)*1]), &(stack[((hsi*15+12460)*1+lsi)*1]), &(stack[((hsi*21+10647)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12878)*1+lsi)*1]), &(stack[((hsi*28+12677)*1+lsi)*1]), &(stack[((hsi*21+12543)*1+lsi)*1]), &(stack[((hsi*28+12850)*1+lsi)*1]), &(stack[((hsi*28+10696)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12914)*1+lsi)*1]), &(stack[((hsi*28+12705)*1+lsi)*1]), &(stack[((hsi*21+12564)*1+lsi)*1]), &(stack[((hsi*28+12850)*1+lsi)*1]), &(stack[((hsi*28+10668)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12950)*1+lsi)*1]), &(stack[((hsi*36+12733)*1+lsi)*1]), &(stack[((hsi*28+12585)*1+lsi)*1]), &(stack[((hsi*36+12914)*1+lsi)*1]), &(stack[((hsi*36+12878)*1+lsi)*1]), &(stack[((hsi*36+10760)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12995)*1+lsi)*1]), &(stack[((hsi*36+12769)*1+lsi)*1]), &(stack[((hsi*28+12613)*1+lsi)*1]), &(stack[((hsi*36+12878)*1+lsi)*1]), &(stack[((hsi*36+12914)*1+lsi)*1]), &(stack[((hsi*36+10724)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13040)*1+lsi)*1]), &(stack[((hsi*45+12805)*1+lsi)*1]), &(stack[((hsi*36+12641)*1+lsi)*1]), &(stack[((hsi*45+12995)*1+lsi)*1]), &(stack[((hsi*45+12950)*1+lsi)*1]), &(stack[((hsi*45+10841)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9412)*1+lsi)*1]),&(stack[((hsi*55+13040)*1+lsi)*1]),55);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+13095)*1+lsi)*1]), &(stack[((hsi*28+12850)*1+lsi)*1]), &(stack[((hsi*21+12475)*1+lsi)*1]), &(stack[((hsi*28+10941)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13131)*1+lsi)*1]), &(stack[((hsi*36+12878)*1+lsi)*1]), &(stack[((hsi*28+12677)*1+lsi)*1]), &(stack[((hsi*36+13095)*1+lsi)*1]), &(stack[((hsi*36+11005)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13176)*1+lsi)*1]), &(stack[((hsi*36+12914)*1+lsi)*1]), &(stack[((hsi*28+12705)*1+lsi)*1]), &(stack[((hsi*36+13095)*1+lsi)*1]), &(stack[((hsi*36+10969)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13221)*1+lsi)*1]), &(stack[((hsi*45+12950)*1+lsi)*1]), &(stack[((hsi*36+12733)*1+lsi)*1]), &(stack[((hsi*45+13176)*1+lsi)*1]), &(stack[((hsi*45+13131)*1+lsi)*1]), &(stack[((hsi*45+11086)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13276)*1+lsi)*1]), &(stack[((hsi*45+12995)*1+lsi)*1]), &(stack[((hsi*36+12769)*1+lsi)*1]), &(stack[((hsi*45+13131)*1+lsi)*1]), &(stack[((hsi*45+13176)*1+lsi)*1]), &(stack[((hsi*45+11041)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13331)*1+lsi)*1]), &(stack[((hsi*55+13040)*1+lsi)*1]), &(stack[((hsi*45+12805)*1+lsi)*1]), &(stack[((hsi*55+13276)*1+lsi)*1]), &(stack[((hsi*55+13221)*1+lsi)*1]), &(stack[((hsi*55+11186)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+9346)*1+lsi)*1]),&(stack[((hsi*66+13331)*1+lsi)*1]),66);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+13397)*1+lsi)*1]), &(stack[((hsi*36+13095)*1+lsi)*1]), &(stack[((hsi*28+12850)*1+lsi)*1]), &(stack[((hsi*36+11307)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13442)*1+lsi)*1]), &(stack[((hsi*45+13131)*1+lsi)*1]), &(stack[((hsi*36+12878)*1+lsi)*1]), &(stack[((hsi*45+13397)*1+lsi)*1]), &(stack[((hsi*45+11388)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13497)*1+lsi)*1]), &(stack[((hsi*45+13176)*1+lsi)*1]), &(stack[((hsi*36+12914)*1+lsi)*1]), &(stack[((hsi*45+13397)*1+lsi)*1]), &(stack[((hsi*45+11343)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13552)*1+lsi)*1]), &(stack[((hsi*55+13221)*1+lsi)*1]), &(stack[((hsi*45+12950)*1+lsi)*1]), &(stack[((hsi*55+13497)*1+lsi)*1]), &(stack[((hsi*55+13442)*1+lsi)*1]), &(stack[((hsi*55+11488)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13618)*1+lsi)*1]), &(stack[((hsi*55+13276)*1+lsi)*1]), &(stack[((hsi*45+12995)*1+lsi)*1]), &(stack[((hsi*55+13442)*1+lsi)*1]), &(stack[((hsi*55+13497)*1+lsi)*1]), &(stack[((hsi*55+11433)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13684)*1+lsi)*1]), &(stack[((hsi*66+13331)*1+lsi)*1]), &(stack[((hsi*55+13040)*1+lsi)*1]), &(stack[((hsi*66+13618)*1+lsi)*1]), &(stack[((hsi*66+13552)*1+lsi)*1]), &(stack[((hsi*66+11609)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+9268)*1+lsi)*1]),&(stack[((hsi*78+13684)*1+lsi)*1]),78);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+13762)*1+lsi)*1]), &(stack[((hsi*45+13397)*1+lsi)*1]), &(stack[((hsi*36+13095)*1+lsi)*1]), &(stack[((hsi*45+11753)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13817)*1+lsi)*1]), &(stack[((hsi*55+13442)*1+lsi)*1]), &(stack[((hsi*45+13131)*1+lsi)*1]), &(stack[((hsi*55+13762)*1+lsi)*1]), &(stack[((hsi*55+11853)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+13883)*1+lsi)*1]), &(stack[((hsi*55+13497)*1+lsi)*1]), &(stack[((hsi*45+13176)*1+lsi)*1]), &(stack[((hsi*55+13762)*1+lsi)*1]), &(stack[((hsi*55+11798)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+13949)*1+lsi)*1]), &(stack[((hsi*66+13552)*1+lsi)*1]), &(stack[((hsi*55+13221)*1+lsi)*1]), &(stack[((hsi*66+13883)*1+lsi)*1]), &(stack[((hsi*66+13817)*1+lsi)*1]), &(stack[((hsi*66+11974)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14027)*1+lsi)*1]), &(stack[((hsi*66+13618)*1+lsi)*1]), &(stack[((hsi*55+13276)*1+lsi)*1]), &(stack[((hsi*66+13817)*1+lsi)*1]), &(stack[((hsi*66+13883)*1+lsi)*1]), &(stack[((hsi*66+11908)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+14105)*1+lsi)*1]), &(stack[((hsi*78+13684)*1+lsi)*1]), &(stack[((hsi*66+13331)*1+lsi)*1]), &(stack[((hsi*78+14027)*1+lsi)*1]), &(stack[((hsi*78+13949)*1+lsi)*1]), &(stack[((hsi*78+12118)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+9177)*1+lsi)*1]),&(stack[((hsi*91+14105)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10647)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12496)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10650)*1+lsi)*1]), &(stack[((hsi*3+10647)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+10056)*1+lsi)*1]), &(stack[((hsi*3+9975)*1+lsi)*1]), &(stack[((hsi*3+12496)*1+lsi)*1]), &(stack[((hsi*3+10246)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12499)*1+lsi)*1]), &(stack[((hsi*3+12496)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+9981)*1+lsi)*1]), &(stack[((hsi*3+9978)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*6+10650)*1+lsi)*1]), &(stack[((hsi*3+10647)*1+lsi)*1]), &(stack[((hsi*6+10059)*1+lsi)*1]), &(stack[((hsi*6+9984)*1+lsi)*1]), &(stack[((hsi*6+12499)*1+lsi)*1]), &(stack[((hsi*6+12296)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12505)*1+lsi)*1]), &(stack[((hsi*6+12499)*1+lsi)*1]), &(stack[((hsi*3+12496)*1+lsi)*1]), &(stack[((hsi*6+9999)*1+lsi)*1]), &(stack[((hsi*6+9993)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*6+10650)*1+lsi)*1]), &(stack[((hsi*10+10065)*1+lsi)*1]), &(stack[((hsi*10+10005)*1+lsi)*1]), &(stack[((hsi*10+12505)*1+lsi)*1]), &(stack[((hsi*10+12328)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+12505)*1+lsi)*1]), &(stack[((hsi*6+12499)*1+lsi)*1]), &(stack[((hsi*10+10031)*1+lsi)*1]), &(stack[((hsi*10+10021)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+14211)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*15+10075)*1+lsi)*1]), &(stack[((hsi*15+10041)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*15+12378)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12287)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+9975)*1+lsi)*1]), &(stack[((hsi*3+12496)*1+lsi)*1]), &(stack[((hsi*3+10056)*1+lsi)*1]), &(stack[((hsi*3+10243)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]), &(stack[((hsi*6+9984)*1+lsi)*1]), &(stack[((hsi*6+12499)*1+lsi)*1]), &(stack[((hsi*6+10059)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+9975)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*10+10005)*1+lsi)*1]), &(stack[((hsi*10+12505)*1+lsi)*1]), &(stack[((hsi*10+10065)*1+lsi)*1]), &(stack[((hsi*10+12318)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+9993)*1+lsi)*1]), &(stack[((hsi*15+9975)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*15+10041)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*15+10075)*1+lsi)*1]), &(stack[((hsi*15+12363)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10021)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10024)*1+lsi)*1]), &(stack[((hsi*3+10021)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+10145)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]), &(stack[((hsi*3+10090)*1+lsi)*1]), &(stack[((hsi*3+10647)*1+lsi)*1]), &(stack[((hsi*3+9990)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10030)*1+lsi)*1]), &(stack[((hsi*6+10024)*1+lsi)*1]), &(stack[((hsi*3+10021)*1+lsi)*1]), &(stack[((hsi*6+10148)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*6+10093)*1+lsi)*1]), &(stack[((hsi*6+10650)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10040)*1+lsi)*1]), &(stack[((hsi*10+10030)*1+lsi)*1]), &(stack[((hsi*6+10024)*1+lsi)*1]), &(stack[((hsi*10+10154)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*10+10099)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*10+12414)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10055)*1+lsi)*1]), &(stack[((hsi*15+10040)*1+lsi)*1]), &(stack[((hsi*10+10030)*1+lsi)*1]), &(stack[((hsi*15+10164)*1+lsi)*1]), &(stack[((hsi*15+9975)*1+lsi)*1]), &(stack[((hsi*15+10109)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*15+12424)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14232)*1+lsi)*1]), &(stack[((hsi*21+10055)*1+lsi)*1]), &(stack[((hsi*15+10040)*1+lsi)*1]), &(stack[((hsi*21+10179)*1+lsi)*1]), &(stack[((hsi*21+9993)*1+lsi)*1]), &(stack[((hsi*21+10124)*1+lsi)*1]), &(stack[((hsi*21+14211)*1+lsi)*1]), &(stack[((hsi*21+12439)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+9149)*1+lsi)*1]),&(stack[((hsi*28+14232)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+12505)*1+lsi)*1]), &(stack[((hsi*15+10283)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*15+12460)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14260)*1+lsi)*1]), &(stack[((hsi*21+14211)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*21+10298)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*21+12564)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+14288)*1+lsi)*1]), &(stack[((hsi*21+9993)*1+lsi)*1]), &(stack[((hsi*15+9975)*1+lsi)*1]), &(stack[((hsi*21+10298)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*21+12543)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10283)*1+lsi)*1]), &(stack[((hsi*28+14232)*1+lsi)*1]), &(stack[((hsi*21+10055)*1+lsi)*1]), &(stack[((hsi*28+10368)*1+lsi)*1]), &(stack[((hsi*28+14288)*1+lsi)*1]), &(stack[((hsi*28+10340)*1+lsi)*1]), &(stack[((hsi*28+14260)*1+lsi)*1]), &(stack[((hsi*28+12613)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+9113)*1+lsi)*1]),&(stack[((hsi*36+10283)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10042)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*21+10453)*1+lsi)*1]), &(stack[((hsi*21+10432)*1+lsi)*1]), &(stack[((hsi*21+12475)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12460)*1+lsi)*1]), &(stack[((hsi*28+14260)*1+lsi)*1]), &(stack[((hsi*21+14211)*1+lsi)*1]), &(stack[((hsi*28+10502)*1+lsi)*1]), &(stack[((hsi*28+10474)*1+lsi)*1]), &(stack[((hsi*28+10042)*1+lsi)*1]), &(stack[((hsi*28+12705)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10432)*1+lsi)*1]), &(stack[((hsi*28+14288)*1+lsi)*1]), &(stack[((hsi*21+9993)*1+lsi)*1]), &(stack[((hsi*28+10474)*1+lsi)*1]), &(stack[((hsi*28+10042)*1+lsi)*1]), &(stack[((hsi*28+10502)*1+lsi)*1]), &(stack[((hsi*28+12677)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14316)*1+lsi)*1]), &(stack[((hsi*36+10283)*1+lsi)*1]), &(stack[((hsi*28+14232)*1+lsi)*1]), &(stack[((hsi*36+10566)*1+lsi)*1]), &(stack[((hsi*36+10432)*1+lsi)*1]), &(stack[((hsi*36+10530)*1+lsi)*1]), &(stack[((hsi*36+12460)*1+lsi)*1]), &(stack[((hsi*36+12769)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+9068)*1+lsi)*1]),&(stack[((hsi*45+14316)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14361)*1+lsi)*1]), &(stack[((hsi*28+10042)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*28+10696)*1+lsi)*1]), &(stack[((hsi*28+10668)*1+lsi)*1]), &(stack[((hsi*28+12850)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14397)*1+lsi)*1]), &(stack[((hsi*36+12460)*1+lsi)*1]), &(stack[((hsi*28+14260)*1+lsi)*1]), &(stack[((hsi*36+10760)*1+lsi)*1]), &(stack[((hsi*36+10724)*1+lsi)*1]), &(stack[((hsi*36+14361)*1+lsi)*1]), &(stack[((hsi*36+12914)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14442)*1+lsi)*1]), &(stack[((hsi*36+10432)*1+lsi)*1]), &(stack[((hsi*28+14288)*1+lsi)*1]), &(stack[((hsi*36+10724)*1+lsi)*1]), &(stack[((hsi*36+14361)*1+lsi)*1]), &(stack[((hsi*36+10760)*1+lsi)*1]), &(stack[((hsi*36+12878)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14487)*1+lsi)*1]), &(stack[((hsi*45+14316)*1+lsi)*1]), &(stack[((hsi*36+10283)*1+lsi)*1]), &(stack[((hsi*45+10841)*1+lsi)*1]), &(stack[((hsi*45+14442)*1+lsi)*1]), &(stack[((hsi*45+10796)*1+lsi)*1]), &(stack[((hsi*45+14397)*1+lsi)*1]), &(stack[((hsi*45+12995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+9013)*1+lsi)*1]),&(stack[((hsi*55+14487)*1+lsi)*1]),55);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+14542)*1+lsi)*1]), &(stack[((hsi*36+14361)*1+lsi)*1]), &(stack[((hsi*28+10042)*1+lsi)*1]), &(stack[((hsi*36+11005)*1+lsi)*1]), &(stack[((hsi*36+10969)*1+lsi)*1]), &(stack[((hsi*36+13095)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14587)*1+lsi)*1]), &(stack[((hsi*45+14397)*1+lsi)*1]), &(stack[((hsi*36+12460)*1+lsi)*1]), &(stack[((hsi*45+11086)*1+lsi)*1]), &(stack[((hsi*45+11041)*1+lsi)*1]), &(stack[((hsi*45+14542)*1+lsi)*1]), &(stack[((hsi*45+13176)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14642)*1+lsi)*1]), &(stack[((hsi*45+14442)*1+lsi)*1]), &(stack[((hsi*36+10432)*1+lsi)*1]), &(stack[((hsi*45+11041)*1+lsi)*1]), &(stack[((hsi*45+14542)*1+lsi)*1]), &(stack[((hsi*45+11086)*1+lsi)*1]), &(stack[((hsi*45+13131)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14697)*1+lsi)*1]), &(stack[((hsi*55+14487)*1+lsi)*1]), &(stack[((hsi*45+14316)*1+lsi)*1]), &(stack[((hsi*55+11186)*1+lsi)*1]), &(stack[((hsi*55+14642)*1+lsi)*1]), &(stack[((hsi*55+11131)*1+lsi)*1]), &(stack[((hsi*55+14587)*1+lsi)*1]), &(stack[((hsi*55+13276)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8947)*1+lsi)*1]),&(stack[((hsi*66+14697)*1+lsi)*1]),66);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+14763)*1+lsi)*1]), &(stack[((hsi*45+14542)*1+lsi)*1]), &(stack[((hsi*36+14361)*1+lsi)*1]), &(stack[((hsi*45+11388)*1+lsi)*1]), &(stack[((hsi*45+11343)*1+lsi)*1]), &(stack[((hsi*45+13397)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14818)*1+lsi)*1]), &(stack[((hsi*55+14587)*1+lsi)*1]), &(stack[((hsi*45+14397)*1+lsi)*1]), &(stack[((hsi*55+11488)*1+lsi)*1]), &(stack[((hsi*55+11433)*1+lsi)*1]), &(stack[((hsi*55+14763)*1+lsi)*1]), &(stack[((hsi*55+13497)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+14884)*1+lsi)*1]), &(stack[((hsi*55+14642)*1+lsi)*1]), &(stack[((hsi*45+14442)*1+lsi)*1]), &(stack[((hsi*55+11433)*1+lsi)*1]), &(stack[((hsi*55+14763)*1+lsi)*1]), &(stack[((hsi*55+11488)*1+lsi)*1]), &(stack[((hsi*55+13442)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+14950)*1+lsi)*1]), &(stack[((hsi*66+14697)*1+lsi)*1]), &(stack[((hsi*55+14487)*1+lsi)*1]), &(stack[((hsi*66+11609)*1+lsi)*1]), &(stack[((hsi*66+14884)*1+lsi)*1]), &(stack[((hsi*66+11543)*1+lsi)*1]), &(stack[((hsi*66+14818)*1+lsi)*1]), &(stack[((hsi*66+13618)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8869)*1+lsi)*1]),&(stack[((hsi*78+14950)*1+lsi)*1]),78);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15028)*1+lsi)*1]), &(stack[((hsi*55+14763)*1+lsi)*1]), &(stack[((hsi*45+14542)*1+lsi)*1]), &(stack[((hsi*55+11853)*1+lsi)*1]), &(stack[((hsi*55+11798)*1+lsi)*1]), &(stack[((hsi*55+13762)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15094)*1+lsi)*1]), &(stack[((hsi*66+14818)*1+lsi)*1]), &(stack[((hsi*55+14587)*1+lsi)*1]), &(stack[((hsi*66+11974)*1+lsi)*1]), &(stack[((hsi*66+11908)*1+lsi)*1]), &(stack[((hsi*66+15028)*1+lsi)*1]), &(stack[((hsi*66+13883)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15172)*1+lsi)*1]), &(stack[((hsi*66+14884)*1+lsi)*1]), &(stack[((hsi*55+14642)*1+lsi)*1]), &(stack[((hsi*66+11908)*1+lsi)*1]), &(stack[((hsi*66+15028)*1+lsi)*1]), &(stack[((hsi*66+11974)*1+lsi)*1]), &(stack[((hsi*66+13817)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15250)*1+lsi)*1]), &(stack[((hsi*78+14950)*1+lsi)*1]), &(stack[((hsi*66+14697)*1+lsi)*1]), &(stack[((hsi*78+12118)*1+lsi)*1]), &(stack[((hsi*78+15172)*1+lsi)*1]), &(stack[((hsi*78+12040)*1+lsi)*1]), &(stack[((hsi*78+15094)*1+lsi)*1]), &(stack[((hsi*78+14027)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8778)*1+lsi)*1]),&(stack[((hsi*91+15250)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10319)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+10319)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+10243)*1+lsi)*1]), &(stack[((hsi*3+10246)*1+lsi)*1]), &(stack[((hsi*3+12496)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10070)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+10319)*1+lsi)*1]), &(stack[((hsi*6+12290)*1+lsi)*1]), &(stack[((hsi*6+12296)*1+lsi)*1]), &(stack[((hsi*6+12499)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*10+10070)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*10+12318)*1+lsi)*1]), &(stack[((hsi*10+12328)*1+lsi)*1]), &(stack[((hsi*10+12505)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*10+10070)*1+lsi)*1]), &(stack[((hsi*15+12363)*1+lsi)*1]), &(stack[((hsi*15+12378)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12363)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*3+12363)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+9990)*1+lsi)*1]), &(stack[((hsi*3+10319)*1+lsi)*1]), &(stack[((hsi*3+10240)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*3+12363)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*6+10249)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*10+12414)*1+lsi)*1]), &(stack[((hsi*10+10070)*1+lsi)*1]), &(stack[((hsi*10+12302)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+12363)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*15+12424)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*15+12338)*1+lsi)*1]), &(stack[((hsi*15+9975)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+15362)*1+lsi)*1]), &(stack[((hsi*21+12363)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*21+12439)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*21+12393)*1+lsi)*1]), &(stack[((hsi*21+9993)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+8750)*1+lsi)*1]),&(stack[((hsi*28+15362)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+15390)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*21+12543)*1+lsi)*1]), &(stack[((hsi*21+12564)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12543)*1+lsi)*1]), &(stack[((hsi*28+15362)*1+lsi)*1]), &(stack[((hsi*21+12363)*1+lsi)*1]), &(stack[((hsi*28+12613)*1+lsi)*1]), &(stack[((hsi*28+15390)*1+lsi)*1]), &(stack[((hsi*28+12585)*1+lsi)*1]), &(stack[((hsi*28+14288)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+8714)*1+lsi)*1]),&(stack[((hsi*36+12543)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+15418)*1+lsi)*1]), &(stack[((hsi*28+15390)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*28+12677)*1+lsi)*1]), &(stack[((hsi*28+12705)*1+lsi)*1]), &(stack[((hsi*28+10042)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+15454)*1+lsi)*1]), &(stack[((hsi*36+12543)*1+lsi)*1]), &(stack[((hsi*28+15362)*1+lsi)*1]), &(stack[((hsi*36+12769)*1+lsi)*1]), &(stack[((hsi*36+15418)*1+lsi)*1]), &(stack[((hsi*36+12733)*1+lsi)*1]), &(stack[((hsi*36+10432)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+8669)*1+lsi)*1]),&(stack[((hsi*45+15454)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+15499)*1+lsi)*1]), &(stack[((hsi*36+15418)*1+lsi)*1]), &(stack[((hsi*28+15390)*1+lsi)*1]), &(stack[((hsi*36+12878)*1+lsi)*1]), &(stack[((hsi*36+12914)*1+lsi)*1]), &(stack[((hsi*36+14361)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+15544)*1+lsi)*1]), &(stack[((hsi*45+15454)*1+lsi)*1]), &(stack[((hsi*36+12543)*1+lsi)*1]), &(stack[((hsi*45+12995)*1+lsi)*1]), &(stack[((hsi*45+15499)*1+lsi)*1]), &(stack[((hsi*45+12950)*1+lsi)*1]), &(stack[((hsi*45+14442)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+8614)*1+lsi)*1]),&(stack[((hsi*55+15544)*1+lsi)*1]),55);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+15599)*1+lsi)*1]), &(stack[((hsi*45+15499)*1+lsi)*1]), &(stack[((hsi*36+15418)*1+lsi)*1]), &(stack[((hsi*45+13131)*1+lsi)*1]), &(stack[((hsi*45+13176)*1+lsi)*1]), &(stack[((hsi*45+14542)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15654)*1+lsi)*1]), &(stack[((hsi*55+15544)*1+lsi)*1]), &(stack[((hsi*45+15454)*1+lsi)*1]), &(stack[((hsi*55+13276)*1+lsi)*1]), &(stack[((hsi*55+15599)*1+lsi)*1]), &(stack[((hsi*55+13221)*1+lsi)*1]), &(stack[((hsi*55+14642)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8548)*1+lsi)*1]),&(stack[((hsi*66+15654)*1+lsi)*1]),66);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+15720)*1+lsi)*1]), &(stack[((hsi*55+15599)*1+lsi)*1]), &(stack[((hsi*45+15499)*1+lsi)*1]), &(stack[((hsi*55+13442)*1+lsi)*1]), &(stack[((hsi*55+13497)*1+lsi)*1]), &(stack[((hsi*55+14763)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15786)*1+lsi)*1]), &(stack[((hsi*66+15654)*1+lsi)*1]), &(stack[((hsi*55+15544)*1+lsi)*1]), &(stack[((hsi*66+13618)*1+lsi)*1]), &(stack[((hsi*66+15720)*1+lsi)*1]), &(stack[((hsi*66+13552)*1+lsi)*1]), &(stack[((hsi*66+14884)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8470)*1+lsi)*1]),&(stack[((hsi*78+15786)*1+lsi)*1]),78);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+15864)*1+lsi)*1]), &(stack[((hsi*66+15720)*1+lsi)*1]), &(stack[((hsi*55+15599)*1+lsi)*1]), &(stack[((hsi*66+13817)*1+lsi)*1]), &(stack[((hsi*66+13883)*1+lsi)*1]), &(stack[((hsi*66+15028)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+15942)*1+lsi)*1]), &(stack[((hsi*78+15786)*1+lsi)*1]), &(stack[((hsi*66+15654)*1+lsi)*1]), &(stack[((hsi*78+14027)*1+lsi)*1]), &(stack[((hsi*78+15864)*1+lsi)*1]), &(stack[((hsi*78+13949)*1+lsi)*1]), &(stack[((hsi*78+15172)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+8379)*1+lsi)*1]),&(stack[((hsi*91+15942)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12363)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*3+12363)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+12287)*1+lsi)*1]), &(stack[((hsi*3+10647)*1+lsi)*1]), &(stack[((hsi*3+10319)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*3+12363)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*6+10650)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*10+10070)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*15+9975)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+12363)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*21+9993)*1+lsi)*1]), &(stack[((hsi*21+14211)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+8351)*1+lsi)*1]),&(stack[((hsi*28+12363)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+16033)*1+lsi)*1]), &(stack[((hsi*28+12363)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*28+14288)*1+lsi)*1]), &(stack[((hsi*28+14260)*1+lsi)*1]), &(stack[((hsi*28+15390)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+8315)*1+lsi)*1]),&(stack[((hsi*36+16033)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16069)*1+lsi)*1]), &(stack[((hsi*36+16033)*1+lsi)*1]), &(stack[((hsi*28+12363)*1+lsi)*1]), &(stack[((hsi*36+10432)*1+lsi)*1]), &(stack[((hsi*36+12460)*1+lsi)*1]), &(stack[((hsi*36+15418)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+8270)*1+lsi)*1]),&(stack[((hsi*45+16069)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+16114)*1+lsi)*1]), &(stack[((hsi*45+16069)*1+lsi)*1]), &(stack[((hsi*36+16033)*1+lsi)*1]), &(stack[((hsi*45+14442)*1+lsi)*1]), &(stack[((hsi*45+14397)*1+lsi)*1]), &(stack[((hsi*45+15499)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+8215)*1+lsi)*1]),&(stack[((hsi*55+16114)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16169)*1+lsi)*1]), &(stack[((hsi*55+16114)*1+lsi)*1]), &(stack[((hsi*45+16069)*1+lsi)*1]), &(stack[((hsi*55+14642)*1+lsi)*1]), &(stack[((hsi*55+14587)*1+lsi)*1]), &(stack[((hsi*55+15599)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+8149)*1+lsi)*1]),&(stack[((hsi*66+16169)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16235)*1+lsi)*1]), &(stack[((hsi*66+16169)*1+lsi)*1]), &(stack[((hsi*55+16114)*1+lsi)*1]), &(stack[((hsi*66+14884)*1+lsi)*1]), &(stack[((hsi*66+14818)*1+lsi)*1]), &(stack[((hsi*66+15720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+8071)*1+lsi)*1]),&(stack[((hsi*78+16235)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+16313)*1+lsi)*1]), &(stack[((hsi*78+16235)*1+lsi)*1]), &(stack[((hsi*66+16169)*1+lsi)*1]), &(stack[((hsi*78+15172)*1+lsi)*1]), &(stack[((hsi*78+15094)*1+lsi)*1]), &(stack[((hsi*78+15864)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+7980)*1+lsi)*1]),&(stack[((hsi*91+16313)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10021)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*3+10021)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+10240)*1+lsi)*1]), &(stack[((hsi*3+9990)*1+lsi)*1]), &(stack[((hsi*3+10319)*1+lsi)*1]), &(stack[((hsi*3+10647)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*3+10021)*1+lsi)*1]), &(stack[((hsi*6+10249)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*6+10650)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*6+10243)*1+lsi)*1]), &(stack[((hsi*10+12302)*1+lsi)*1]), &(stack[((hsi*10+12414)*1+lsi)*1]), &(stack[((hsi*10+10070)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*10+10080)*1+lsi)*1]), &(stack[((hsi*15+12338)*1+lsi)*1]), &(stack[((hsi*15+12424)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+16404)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*15+14196)*1+lsi)*1]), &(stack[((hsi*21+12393)*1+lsi)*1]), &(stack[((hsi*21+12439)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*21+14211)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+7952)*1+lsi)*1]),&(stack[((hsi*28+16404)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+16432)*1+lsi)*1]), &(stack[((hsi*28+16404)*1+lsi)*1]), &(stack[((hsi*21+10319)*1+lsi)*1]), &(stack[((hsi*28+12585)*1+lsi)*1]), &(stack[((hsi*28+12613)*1+lsi)*1]), &(stack[((hsi*28+15390)*1+lsi)*1]), &(stack[((hsi*28+14260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7916)*1+lsi)*1]),&(stack[((hsi*36+16432)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16468)*1+lsi)*1]), &(stack[((hsi*36+16432)*1+lsi)*1]), &(stack[((hsi*28+16404)*1+lsi)*1]), &(stack[((hsi*36+12733)*1+lsi)*1]), &(stack[((hsi*36+12769)*1+lsi)*1]), &(stack[((hsi*36+15418)*1+lsi)*1]), &(stack[((hsi*36+12460)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+7871)*1+lsi)*1]),&(stack[((hsi*45+16468)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+16513)*1+lsi)*1]), &(stack[((hsi*45+16468)*1+lsi)*1]), &(stack[((hsi*36+16432)*1+lsi)*1]), &(stack[((hsi*45+12950)*1+lsi)*1]), &(stack[((hsi*45+12995)*1+lsi)*1]), &(stack[((hsi*45+15499)*1+lsi)*1]), &(stack[((hsi*45+14397)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7816)*1+lsi)*1]),&(stack[((hsi*55+16513)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16568)*1+lsi)*1]), &(stack[((hsi*55+16513)*1+lsi)*1]), &(stack[((hsi*45+16468)*1+lsi)*1]), &(stack[((hsi*55+13221)*1+lsi)*1]), &(stack[((hsi*55+13276)*1+lsi)*1]), &(stack[((hsi*55+15599)*1+lsi)*1]), &(stack[((hsi*55+14587)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7750)*1+lsi)*1]),&(stack[((hsi*66+16568)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16634)*1+lsi)*1]), &(stack[((hsi*66+16568)*1+lsi)*1]), &(stack[((hsi*55+16513)*1+lsi)*1]), &(stack[((hsi*66+13552)*1+lsi)*1]), &(stack[((hsi*66+13618)*1+lsi)*1]), &(stack[((hsi*66+15720)*1+lsi)*1]), &(stack[((hsi*66+14818)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7672)*1+lsi)*1]),&(stack[((hsi*78+16634)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+16712)*1+lsi)*1]), &(stack[((hsi*78+16634)*1+lsi)*1]), &(stack[((hsi*66+16568)*1+lsi)*1]), &(stack[((hsi*78+13949)*1+lsi)*1]), &(stack[((hsi*78+14027)*1+lsi)*1]), &(stack[((hsi*78+15864)*1+lsi)*1]), &(stack[((hsi*78+15094)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+7581)*1+lsi)*1]),&(stack[((hsi*91+16712)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+15341)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+15341)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+10090)*1+lsi)*1]), &(stack[((hsi*3+10647)*1+lsi)*1]), &(stack[((hsi*3+10145)*1+lsi)*1]), &(stack[((hsi*3+12287)*1+lsi)*1]), &(stack[((hsi*3+10240)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10319)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+15341)*1+lsi)*1]), &(stack[((hsi*6+10093)*1+lsi)*1]), &(stack[((hsi*6+10650)*1+lsi)*1]), &(stack[((hsi*6+10148)*1+lsi)*1]), &(stack[((hsi*6+12312)*1+lsi)*1]), &(stack[((hsi*6+10249)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*10+10319)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*10+10099)*1+lsi)*1]), &(stack[((hsi*10+10200)*1+lsi)*1]), &(stack[((hsi*10+10154)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*10+12302)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*10+10319)*1+lsi)*1]), &(stack[((hsi*15+10109)*1+lsi)*1]), &(stack[((hsi*15+10225)*1+lsi)*1]), &(stack[((hsi*15+10164)*1+lsi)*1]), &(stack[((hsi*15+9975)*1+lsi)*1]), &(stack[((hsi*15+12338)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+16803)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*15+10210)*1+lsi)*1]), &(stack[((hsi*21+10124)*1+lsi)*1]), &(stack[((hsi*21+14211)*1+lsi)*1]), &(stack[((hsi*21+10179)*1+lsi)*1]), &(stack[((hsi*21+9993)*1+lsi)*1]), &(stack[((hsi*21+12393)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+7553)*1+lsi)*1]),&(stack[((hsi*28+16803)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+14196)*1+lsi)*1]), &(stack[((hsi*28+16803)*1+lsi)*1]), &(stack[((hsi*21+10021)*1+lsi)*1]), &(stack[((hsi*28+10340)*1+lsi)*1]), &(stack[((hsi*28+14260)*1+lsi)*1]), &(stack[((hsi*28+10368)*1+lsi)*1]), &(stack[((hsi*28+14288)*1+lsi)*1]), &(stack[((hsi*28+12585)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7517)*1+lsi)*1]),&(stack[((hsi*36+14196)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+16831)*1+lsi)*1]), &(stack[((hsi*36+14196)*1+lsi)*1]), &(stack[((hsi*28+16803)*1+lsi)*1]), &(stack[((hsi*36+10530)*1+lsi)*1]), &(stack[((hsi*36+12460)*1+lsi)*1]), &(stack[((hsi*36+10566)*1+lsi)*1]), &(stack[((hsi*36+10432)*1+lsi)*1]), &(stack[((hsi*36+12733)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+7472)*1+lsi)*1]),&(stack[((hsi*45+16831)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+16876)*1+lsi)*1]), &(stack[((hsi*45+16831)*1+lsi)*1]), &(stack[((hsi*36+14196)*1+lsi)*1]), &(stack[((hsi*45+10796)*1+lsi)*1]), &(stack[((hsi*45+14397)*1+lsi)*1]), &(stack[((hsi*45+10841)*1+lsi)*1]), &(stack[((hsi*45+14442)*1+lsi)*1]), &(stack[((hsi*45+12950)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7417)*1+lsi)*1]),&(stack[((hsi*55+16876)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+16931)*1+lsi)*1]), &(stack[((hsi*55+16876)*1+lsi)*1]), &(stack[((hsi*45+16831)*1+lsi)*1]), &(stack[((hsi*55+11131)*1+lsi)*1]), &(stack[((hsi*55+14587)*1+lsi)*1]), &(stack[((hsi*55+11186)*1+lsi)*1]), &(stack[((hsi*55+14642)*1+lsi)*1]), &(stack[((hsi*55+13221)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+7351)*1+lsi)*1]),&(stack[((hsi*66+16931)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+16997)*1+lsi)*1]), &(stack[((hsi*66+16931)*1+lsi)*1]), &(stack[((hsi*55+16876)*1+lsi)*1]), &(stack[((hsi*66+11543)*1+lsi)*1]), &(stack[((hsi*66+14818)*1+lsi)*1]), &(stack[((hsi*66+11609)*1+lsi)*1]), &(stack[((hsi*66+14884)*1+lsi)*1]), &(stack[((hsi*66+13552)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+7273)*1+lsi)*1]),&(stack[((hsi*78+16997)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17075)*1+lsi)*1]), &(stack[((hsi*78+16997)*1+lsi)*1]), &(stack[((hsi*66+16931)*1+lsi)*1]), &(stack[((hsi*78+12040)*1+lsi)*1]), &(stack[((hsi*78+15094)*1+lsi)*1]), &(stack[((hsi*78+12118)*1+lsi)*1]), &(stack[((hsi*78+15172)*1+lsi)*1]), &(stack[((hsi*78+13949)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+7182)*1+lsi)*1]),&(stack[((hsi*91+17075)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+10200)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+10200)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+10240)*1+lsi)*1]), &(stack[((hsi*3+9990)*1+lsi)*1]), &(stack[((hsi*3+10090)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+10200)*1+lsi)*1]), &(stack[((hsi*6+10249)*1+lsi)*1]), &(stack[((hsi*6+10015)*1+lsi)*1]), &(stack[((hsi*6+10093)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12287)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*10+12302)*1+lsi)*1]), &(stack[((hsi*10+12414)*1+lsi)*1]), &(stack[((hsi*10+10099)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*15+12287)*1+lsi)*1]), &(stack[((hsi*10+12353)*1+lsi)*1]), &(stack[((hsi*15+12338)*1+lsi)*1]), &(stack[((hsi*15+12424)*1+lsi)*1]), &(stack[((hsi*15+10109)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+9975)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*15+12287)*1+lsi)*1]), &(stack[((hsi*21+12393)*1+lsi)*1]), &(stack[((hsi*21+12439)*1+lsi)*1]), &(stack[((hsi*21+10124)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+7154)*1+lsi)*1]),&(stack[((hsi*28+9975)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+12287)*1+lsi)*1]), &(stack[((hsi*28+9975)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*28+12585)*1+lsi)*1]), &(stack[((hsi*28+12613)*1+lsi)*1]), &(stack[((hsi*28+10340)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7118)*1+lsi)*1]),&(stack[((hsi*36+12287)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+12391)*1+lsi)*1]), &(stack[((hsi*36+12287)*1+lsi)*1]), &(stack[((hsi*28+9975)*1+lsi)*1]), &(stack[((hsi*36+12733)*1+lsi)*1]), &(stack[((hsi*36+12769)*1+lsi)*1]), &(stack[((hsi*36+10530)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+7073)*1+lsi)*1]),&(stack[((hsi*45+12391)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+10200)*1+lsi)*1]), &(stack[((hsi*45+12391)*1+lsi)*1]), &(stack[((hsi*36+12287)*1+lsi)*1]), &(stack[((hsi*45+12950)*1+lsi)*1]), &(stack[((hsi*45+12995)*1+lsi)*1]), &(stack[((hsi*45+10796)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+7018)*1+lsi)*1]),&(stack[((hsi*55+10200)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+17166)*1+lsi)*1]), &(stack[((hsi*55+10200)*1+lsi)*1]), &(stack[((hsi*45+12391)*1+lsi)*1]), &(stack[((hsi*55+13221)*1+lsi)*1]), &(stack[((hsi*55+13276)*1+lsi)*1]), &(stack[((hsi*55+11131)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6952)*1+lsi)*1]),&(stack[((hsi*66+17166)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17232)*1+lsi)*1]), &(stack[((hsi*66+17166)*1+lsi)*1]), &(stack[((hsi*55+10200)*1+lsi)*1]), &(stack[((hsi*66+13552)*1+lsi)*1]), &(stack[((hsi*66+13618)*1+lsi)*1]), &(stack[((hsi*66+11543)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6874)*1+lsi)*1]),&(stack[((hsi*78+17232)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17310)*1+lsi)*1]), &(stack[((hsi*78+17232)*1+lsi)*1]), &(stack[((hsi*66+17166)*1+lsi)*1]), &(stack[((hsi*78+13949)*1+lsi)*1]), &(stack[((hsi*78+14027)*1+lsi)*1]), &(stack[((hsi*78+12040)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+6783)*1+lsi)*1]),&(stack[((hsi*91+17310)*1+lsi)*1]),91);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+12323)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+12323)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+10090)*1+lsi)*1]), &(stack[((hsi*3+10145)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+10003)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*3+12323)*1+lsi)*1]), &(stack[((hsi*6+10093)*1+lsi)*1]), &(stack[((hsi*6+10148)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+12323)*1+lsi)*1]), &(stack[((hsi*10+10003)*1+lsi)*1]), &(stack[((hsi*6+10468)*1+lsi)*1]), &(stack[((hsi*10+10099)*1+lsi)*1]), &(stack[((hsi*10+10154)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*15+12323)*1+lsi)*1]), &(stack[((hsi*10+10003)*1+lsi)*1]), &(stack[((hsi*15+10109)*1+lsi)*1]), &(stack[((hsi*15+10164)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+10070)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*15+12323)*1+lsi)*1]), &(stack[((hsi*21+10124)*1+lsi)*1]), &(stack[((hsi*21+10179)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+6755)*1+lsi)*1]),&(stack[((hsi*28+10070)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+10098)*1+lsi)*1]), &(stack[((hsi*28+10070)*1+lsi)*1]), &(stack[((hsi*21+15341)*1+lsi)*1]), &(stack[((hsi*28+10340)*1+lsi)*1]), &(stack[((hsi*28+10368)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6719)*1+lsi)*1]),&(stack[((hsi*36+10098)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+10134)*1+lsi)*1]), &(stack[((hsi*36+10098)*1+lsi)*1]), &(stack[((hsi*28+10070)*1+lsi)*1]), &(stack[((hsi*36+10530)*1+lsi)*1]), &(stack[((hsi*36+10566)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6674)*1+lsi)*1]),&(stack[((hsi*45+10134)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+17401)*1+lsi)*1]), &(stack[((hsi*45+10134)*1+lsi)*1]), &(stack[((hsi*36+10098)*1+lsi)*1]), &(stack[((hsi*45+10796)*1+lsi)*1]), &(stack[((hsi*45+10841)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6619)*1+lsi)*1]),&(stack[((hsi*55+17401)*1+lsi)*1]),55);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+17456)*1+lsi)*1]), &(stack[((hsi*55+17401)*1+lsi)*1]), &(stack[((hsi*45+10134)*1+lsi)*1]), &(stack[((hsi*55+11131)*1+lsi)*1]), &(stack[((hsi*55+11186)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6553)*1+lsi)*1]),&(stack[((hsi*66+17456)*1+lsi)*1]),66);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17522)*1+lsi)*1]), &(stack[((hsi*66+17456)*1+lsi)*1]), &(stack[((hsi*55+17401)*1+lsi)*1]), &(stack[((hsi*66+11543)*1+lsi)*1]), &(stack[((hsi*66+11609)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6475)*1+lsi)*1]),&(stack[((hsi*78+17522)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+17600)*1+lsi)*1]), &(stack[((hsi*78+17522)*1+lsi)*1]), &(stack[((hsi*66+17456)*1+lsi)*1]), &(stack[((hsi*78+12040)*1+lsi)*1]), &(stack[((hsi*78+12118)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+6384)*1+lsi)*1]),&(stack[((hsi*91+17600)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+6356)*1+lsi)*1]),&(stack[((hsi*28+10368)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6320)*1+lsi)*1]),&(stack[((hsi*36+10566)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+6275)*1+lsi)*1]),&(stack[((hsi*45+10841)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+6220)*1+lsi)*1]),&(stack[((hsi*55+11186)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+6154)*1+lsi)*1]),&(stack[((hsi*66+11609)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+6076)*1+lsi)*1]),&(stack[((hsi*78+12118)*1+lsi)*1]),78);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+17691)*1+lsi)*1]), &(stack[((hsi*45+11753)*1+lsi)*1]), &(stack[((hsi*36+11307)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+17746)*1+lsi)*1]), &(stack[((hsi*55+11853)*1+lsi)*1]), &(stack[((hsi*45+11388)*1+lsi)*1]), &(stack[((hsi*55+17691)*1+lsi)*1]));
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+17812)*1+lsi)*1]), &(stack[((hsi*55+11798)*1+lsi)*1]), &(stack[((hsi*45+11343)*1+lsi)*1]), &(stack[((hsi*55+17691)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17878)*1+lsi)*1]), &(stack[((hsi*66+11974)*1+lsi)*1]), &(stack[((hsi*55+11488)*1+lsi)*1]), &(stack[((hsi*66+17812)*1+lsi)*1]), &(stack[((hsi*66+17746)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+17956)*1+lsi)*1]), &(stack[((hsi*66+11908)*1+lsi)*1]), &(stack[((hsi*55+11433)*1+lsi)*1]), &(stack[((hsi*66+17746)*1+lsi)*1]), &(stack[((hsi*66+17812)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18034)*1+lsi)*1]), &(stack[((hsi*78+12118)*1+lsi)*1]), &(stack[((hsi*66+11609)*1+lsi)*1]), &(stack[((hsi*78+17956)*1+lsi)*1]), &(stack[((hsi*78+17878)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+5985)*1+lsi)*1]),&(stack[((hsi*91+18034)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5957)*1+lsi)*1]),&(stack[((hsi*28+12613)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5921)*1+lsi)*1]),&(stack[((hsi*36+12769)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5876)*1+lsi)*1]),&(stack[((hsi*45+12995)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5821)*1+lsi)*1]),&(stack[((hsi*55+13276)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5755)*1+lsi)*1]),&(stack[((hsi*66+13618)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5677)*1+lsi)*1]),&(stack[((hsi*78+14027)*1+lsi)*1]),78);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+18125)*1+lsi)*1]), &(stack[((hsi*55+13762)*1+lsi)*1]), &(stack[((hsi*45+13397)*1+lsi)*1]), &(stack[((hsi*55+17691)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+18191)*1+lsi)*1]), &(stack[((hsi*66+13883)*1+lsi)*1]), &(stack[((hsi*55+13497)*1+lsi)*1]), &(stack[((hsi*66+18125)*1+lsi)*1]), &(stack[((hsi*66+17812)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+18269)*1+lsi)*1]), &(stack[((hsi*66+13817)*1+lsi)*1]), &(stack[((hsi*55+13442)*1+lsi)*1]), &(stack[((hsi*66+18125)*1+lsi)*1]), &(stack[((hsi*66+17746)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18347)*1+lsi)*1]), &(stack[((hsi*78+14027)*1+lsi)*1]), &(stack[((hsi*66+13618)*1+lsi)*1]), &(stack[((hsi*78+18269)*1+lsi)*1]), &(stack[((hsi*78+18191)*1+lsi)*1]), &(stack[((hsi*78+17956)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+5586)*1+lsi)*1]),&(stack[((hsi*91+18347)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5558)*1+lsi)*1]),&(stack[((hsi*28+14288)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5522)*1+lsi)*1]),&(stack[((hsi*36+10432)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5477)*1+lsi)*1]),&(stack[((hsi*45+14442)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5422)*1+lsi)*1]),&(stack[((hsi*55+14642)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+5356)*1+lsi)*1]),&(stack[((hsi*66+14884)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+5278)*1+lsi)*1]),&(stack[((hsi*78+15172)*1+lsi)*1]),78);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+18438)*1+lsi)*1]), &(stack[((hsi*66+15028)*1+lsi)*1]), &(stack[((hsi*55+14763)*1+lsi)*1]), &(stack[((hsi*66+17746)*1+lsi)*1]), &(stack[((hsi*66+17812)*1+lsi)*1]), &(stack[((hsi*66+18125)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18516)*1+lsi)*1]), &(stack[((hsi*78+15172)*1+lsi)*1]), &(stack[((hsi*66+14884)*1+lsi)*1]), &(stack[((hsi*78+17956)*1+lsi)*1]), &(stack[((hsi*78+18438)*1+lsi)*1]), &(stack[((hsi*78+17878)*1+lsi)*1]), &(stack[((hsi*78+18269)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+5187)*1+lsi)*1]),&(stack[((hsi*91+18516)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+5159)*1+lsi)*1]),&(stack[((hsi*28+15390)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5123)*1+lsi)*1]),&(stack[((hsi*36+15418)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+5078)*1+lsi)*1]),&(stack[((hsi*45+15499)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+5023)*1+lsi)*1]),&(stack[((hsi*55+15599)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4957)*1+lsi)*1]),&(stack[((hsi*66+15720)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4879)*1+lsi)*1]),&(stack[((hsi*78+15864)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18607)*1+lsi)*1]), &(stack[((hsi*78+15864)*1+lsi)*1]), &(stack[((hsi*66+15720)*1+lsi)*1]), &(stack[((hsi*78+18269)*1+lsi)*1]), &(stack[((hsi*78+18191)*1+lsi)*1]), &(stack[((hsi*78+18438)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4788)*1+lsi)*1]),&(stack[((hsi*91+18607)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4760)*1+lsi)*1]),&(stack[((hsi*28+14260)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4724)*1+lsi)*1]),&(stack[((hsi*36+12460)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4679)*1+lsi)*1]),&(stack[((hsi*45+14397)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4624)*1+lsi)*1]),&(stack[((hsi*55+14587)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4558)*1+lsi)*1]),&(stack[((hsi*66+14818)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4480)*1+lsi)*1]),&(stack[((hsi*78+15094)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18698)*1+lsi)*1]), &(stack[((hsi*78+15094)*1+lsi)*1]), &(stack[((hsi*66+14818)*1+lsi)*1]), &(stack[((hsi*78+17878)*1+lsi)*1]), &(stack[((hsi*78+17956)*1+lsi)*1]), &(stack[((hsi*78+18438)*1+lsi)*1]), &(stack[((hsi*78+18191)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+4389)*1+lsi)*1]),&(stack[((hsi*91+18698)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+4361)*1+lsi)*1]),&(stack[((hsi*28+12585)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4325)*1+lsi)*1]),&(stack[((hsi*36+12733)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+4280)*1+lsi)*1]),&(stack[((hsi*45+12950)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+4225)*1+lsi)*1]),&(stack[((hsi*55+13221)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+4159)*1+lsi)*1]),&(stack[((hsi*66+13552)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+4081)*1+lsi)*1]),&(stack[((hsi*78+13949)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18789)*1+lsi)*1]), &(stack[((hsi*78+13949)*1+lsi)*1]), &(stack[((hsi*66+13552)*1+lsi)*1]), &(stack[((hsi*78+18191)*1+lsi)*1]), &(stack[((hsi*78+18269)*1+lsi)*1]), &(stack[((hsi*78+17878)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+3990)*1+lsi)*1]),&(stack[((hsi*91+18789)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3962)*1+lsi)*1]),&(stack[((hsi*28+10340)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3926)*1+lsi)*1]),&(stack[((hsi*36+10530)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3881)*1+lsi)*1]),&(stack[((hsi*45+10796)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3826)*1+lsi)*1]),&(stack[((hsi*55+11131)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3760)*1+lsi)*1]),&(stack[((hsi*66+11543)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3682)*1+lsi)*1]),&(stack[((hsi*78+12040)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+18880)*1+lsi)*1]), &(stack[((hsi*78+12040)*1+lsi)*1]), &(stack[((hsi*66+11543)*1+lsi)*1]), &(stack[((hsi*78+17878)*1+lsi)*1]), &(stack[((hsi*78+17956)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+3591)*1+lsi)*1]),&(stack[((hsi*91+18880)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3563)*1+lsi)*1]),&(stack[((hsi*28+10474)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3527)*1+lsi)*1]),&(stack[((hsi*36+10724)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3482)*1+lsi)*1]),&(stack[((hsi*45+11041)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3427)*1+lsi)*1]),&(stack[((hsi*55+11433)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+3361)*1+lsi)*1]),&(stack[((hsi*66+11908)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+3283)*1+lsi)*1]),&(stack[((hsi*78+17956)*1+lsi)*1]),78);
OSVRRSMultipole_aB_n__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+18971)*1+lsi)*1]), &(stack[((hsi*55+17691)*1+lsi)*1]), &(stack[((hsi*45+11753)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19037)*1+lsi)*1]), &(stack[((hsi*66+17812)*1+lsi)*1]), &(stack[((hsi*55+11798)*1+lsi)*1]), &(stack[((hsi*66+18971)*1+lsi)*1]));
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19115)*1+lsi)*1]), &(stack[((hsi*66+17746)*1+lsi)*1]), &(stack[((hsi*55+11853)*1+lsi)*1]), &(stack[((hsi*66+18971)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19193)*1+lsi)*1]), &(stack[((hsi*78+17956)*1+lsi)*1]), &(stack[((hsi*66+11908)*1+lsi)*1]), &(stack[((hsi*78+19115)*1+lsi)*1]), &(stack[((hsi*78+19037)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+3192)*1+lsi)*1]),&(stack[((hsi*91+19193)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+3164)*1+lsi)*1]),&(stack[((hsi*28+12677)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3128)*1+lsi)*1]),&(stack[((hsi*36+12878)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3083)*1+lsi)*1]),&(stack[((hsi*45+13131)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3028)*1+lsi)*1]),&(stack[((hsi*55+13442)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2962)*1+lsi)*1]),&(stack[((hsi*66+13817)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2884)*1+lsi)*1]),&(stack[((hsi*78+18269)*1+lsi)*1]),78);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19284)*1+lsi)*1]), &(stack[((hsi*66+18125)*1+lsi)*1]), &(stack[((hsi*55+13762)*1+lsi)*1]), &(stack[((hsi*66+18971)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19362)*1+lsi)*1]), &(stack[((hsi*78+18269)*1+lsi)*1]), &(stack[((hsi*66+13817)*1+lsi)*1]), &(stack[((hsi*78+19284)*1+lsi)*1]), &(stack[((hsi*78+19115)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+2793)*1+lsi)*1]),&(stack[((hsi*91+19362)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2765)*1+lsi)*1]),&(stack[((hsi*28+10042)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2729)*1+lsi)*1]),&(stack[((hsi*36+14361)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2684)*1+lsi)*1]),&(stack[((hsi*45+14542)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2629)*1+lsi)*1]),&(stack[((hsi*55+14763)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2563)*1+lsi)*1]),&(stack[((hsi*66+15028)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2485)*1+lsi)*1]),&(stack[((hsi*78+18438)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19453)*1+lsi)*1]), &(stack[((hsi*78+18438)*1+lsi)*1]), &(stack[((hsi*66+15028)*1+lsi)*1]), &(stack[((hsi*78+19115)*1+lsi)*1]), &(stack[((hsi*78+19037)*1+lsi)*1]), &(stack[((hsi*78+19284)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+2394)*1+lsi)*1]),&(stack[((hsi*91+19453)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2366)*1+lsi)*1]),&(stack[((hsi*28+12705)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2330)*1+lsi)*1]),&(stack[((hsi*36+12914)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2285)*1+lsi)*1]),&(stack[((hsi*45+13176)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2230)*1+lsi)*1]),&(stack[((hsi*55+13497)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+2164)*1+lsi)*1]),&(stack[((hsi*66+13883)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+2086)*1+lsi)*1]),&(stack[((hsi*78+18191)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19544)*1+lsi)*1]), &(stack[((hsi*78+18191)*1+lsi)*1]), &(stack[((hsi*66+13883)*1+lsi)*1]), &(stack[((hsi*78+19284)*1+lsi)*1]), &(stack[((hsi*78+19037)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+1995)*1+lsi)*1]),&(stack[((hsi*91+19544)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1967)*1+lsi)*1]),&(stack[((hsi*28+10502)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1931)*1+lsi)*1]),&(stack[((hsi*36+10760)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1886)*1+lsi)*1]),&(stack[((hsi*45+11086)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1831)*1+lsi)*1]),&(stack[((hsi*55+11488)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1765)*1+lsi)*1]),&(stack[((hsi*66+11974)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1687)*1+lsi)*1]),&(stack[((hsi*78+17878)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19635)*1+lsi)*1]), &(stack[((hsi*78+17878)*1+lsi)*1]), &(stack[((hsi*66+11974)*1+lsi)*1]), &(stack[((hsi*78+19037)*1+lsi)*1]), &(stack[((hsi*78+19115)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+1596)*1+lsi)*1]),&(stack[((hsi*91+19635)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1568)*1+lsi)*1]),&(stack[((hsi*28+10696)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1532)*1+lsi)*1]),&(stack[((hsi*36+11005)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1487)*1+lsi)*1]),&(stack[((hsi*45+11388)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1432)*1+lsi)*1]),&(stack[((hsi*55+11853)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1366)*1+lsi)*1]),&(stack[((hsi*66+17746)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+1288)*1+lsi)*1]),&(stack[((hsi*78+19115)*1+lsi)*1]),78);
OSVRRSMultipole_aB_o__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*78+19726)*1+lsi)*1]), &(stack[((hsi*66+18971)*1+lsi)*1]), &(stack[((hsi*55+17691)*1+lsi)*1]));
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19804)*1+lsi)*1]), &(stack[((hsi*78+19115)*1+lsi)*1]), &(stack[((hsi*66+17746)*1+lsi)*1]), &(stack[((hsi*78+19726)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+1197)*1+lsi)*1]),&(stack[((hsi*91+19804)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1169)*1+lsi)*1]),&(stack[((hsi*28+12850)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1133)*1+lsi)*1]),&(stack[((hsi*36+13095)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1088)*1+lsi)*1]),&(stack[((hsi*45+13397)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1033)*1+lsi)*1]),&(stack[((hsi*55+13762)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+967)*1+lsi)*1]),&(stack[((hsi*66+18125)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+889)*1+lsi)*1]),&(stack[((hsi*78+19284)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19895)*1+lsi)*1]), &(stack[((hsi*78+19284)*1+lsi)*1]), &(stack[((hsi*66+18125)*1+lsi)*1]), &(stack[((hsi*78+19726)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+798)*1+lsi)*1]),&(stack[((hsi*91+19895)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+770)*1+lsi)*1]),&(stack[((hsi*28+10668)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+734)*1+lsi)*1]),&(stack[((hsi*36+10969)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+689)*1+lsi)*1]),&(stack[((hsi*45+11343)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+634)*1+lsi)*1]),&(stack[((hsi*55+11798)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+568)*1+lsi)*1]),&(stack[((hsi*66+17812)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+490)*1+lsi)*1]),&(stack[((hsi*78+19037)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+19986)*1+lsi)*1]), &(stack[((hsi*78+19037)*1+lsi)*1]), &(stack[((hsi*66+17812)*1+lsi)*1]), &(stack[((hsi*78+19726)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+399)*1+lsi)*1]),&(stack[((hsi*91+19986)*1+lsi)*1]),91);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+371)*1+lsi)*1]),&(stack[((hsi*28+10941)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+335)*1+lsi)*1]),&(stack[((hsi*36+11307)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+290)*1+lsi)*1]),&(stack[((hsi*45+11753)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+235)*1+lsi)*1]),&(stack[((hsi*55+17691)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*66+169)*1+lsi)*1]),&(stack[((hsi*66+18971)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*78+91)*1+lsi)*1]),&(stack[((hsi*78+19726)*1+lsi)*1]),78);
OSVRRSMultipole_aB_q__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*91+20077)*1+lsi)*1]), &(stack[((hsi*78+19726)*1+lsi)*1]), &(stack[((hsi*66+18971)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*91+0)*1+lsi)*1]),&(stack[((hsi*91+20077)*1+lsi)*1]),91);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 9975 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
