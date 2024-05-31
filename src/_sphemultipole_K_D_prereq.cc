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
void _sphemultipole_K_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3400)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3403)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3406)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3409)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+3406)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3415)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3418)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+3415)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3424)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+3415)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3430)*1+lsi)*1]), &(stack[((hsi*6+3409)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]), &(stack[((hsi*6+3424)*1+lsi)*1]), &(stack[((hsi*6+3418)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*3+3415)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3446)*1+lsi)*1]), &(stack[((hsi*6+3418)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3456)*1+lsi)*1]), &(stack[((hsi*6+3424)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3466)*1+lsi)*1]), &(stack[((hsi*10+3430)*1+lsi)*1]), &(stack[((hsi*6+3409)*1+lsi)*1]), &(stack[((hsi*10+3456)*1+lsi)*1]), &(stack[((hsi*10+3446)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*3+3415)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3491)*1+lsi)*1]), &(stack[((hsi*10+3446)*1+lsi)*1]), &(stack[((hsi*6+3418)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3506)*1+lsi)*1]), &(stack[((hsi*10+3456)*1+lsi)*1]), &(stack[((hsi*6+3424)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3521)*1+lsi)*1]), &(stack[((hsi*15+3466)*1+lsi)*1]), &(stack[((hsi*10+3430)*1+lsi)*1]), &(stack[((hsi*15+3506)*1+lsi)*1]), &(stack[((hsi*15+3491)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3542)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3545)*1+lsi)*1]), &(stack[((hsi*3+3542)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3551)*1+lsi)*1]), &(stack[((hsi*6+3545)*1+lsi)*1]), &(stack[((hsi*3+3542)*1+lsi)*1]), &(stack[((hsi*6+3418)*1+lsi)*1]), &(stack[((hsi*6+3424)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3561)*1+lsi)*1]), &(stack[((hsi*10+3551)*1+lsi)*1]), &(stack[((hsi*6+3545)*1+lsi)*1]), &(stack[((hsi*10+3446)*1+lsi)*1]), &(stack[((hsi*10+3456)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3576)*1+lsi)*1]), &(stack[((hsi*15+3561)*1+lsi)*1]), &(stack[((hsi*10+3551)*1+lsi)*1]), &(stack[((hsi*15+3491)*1+lsi)*1]), &(stack[((hsi*15+3506)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3597)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3600)*1+lsi)*1]), &(stack[((hsi*3+3597)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+3542)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3606)*1+lsi)*1]), &(stack[((hsi*6+3600)*1+lsi)*1]), &(stack[((hsi*3+3597)*1+lsi)*1]), &(stack[((hsi*6+3545)*1+lsi)*1]), &(stack[((hsi*6+3409)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3616)*1+lsi)*1]), &(stack[((hsi*10+3606)*1+lsi)*1]), &(stack[((hsi*6+3600)*1+lsi)*1]), &(stack[((hsi*10+3551)*1+lsi)*1]), &(stack[((hsi*10+3430)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3631)*1+lsi)*1]), &(stack[((hsi*15+3616)*1+lsi)*1]), &(stack[((hsi*10+3606)*1+lsi)*1]), &(stack[((hsi*15+3561)*1+lsi)*1]), &(stack[((hsi*15+3466)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3652)*1+lsi)*1]), &(stack[((hsi*21+3631)*1+lsi)*1]), &(stack[((hsi*15+3616)*1+lsi)*1]), &(stack[((hsi*21+3576)*1+lsi)*1]), &(stack[((hsi*21+3521)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3680)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3683)*1+lsi)*1]), &(stack[((hsi*3+3680)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+3400)*1+lsi)*1]), &(stack[((hsi*3+3542)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3689)*1+lsi)*1]), &(stack[((hsi*6+3683)*1+lsi)*1]), &(stack[((hsi*3+3680)*1+lsi)*1]), &(stack[((hsi*6+3409)*1+lsi)*1]), &(stack[((hsi*6+3545)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3699)*1+lsi)*1]), &(stack[((hsi*10+3689)*1+lsi)*1]), &(stack[((hsi*6+3683)*1+lsi)*1]), &(stack[((hsi*10+3430)*1+lsi)*1]), &(stack[((hsi*10+3551)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3714)*1+lsi)*1]), &(stack[((hsi*15+3699)*1+lsi)*1]), &(stack[((hsi*10+3689)*1+lsi)*1]), &(stack[((hsi*15+3466)*1+lsi)*1]), &(stack[((hsi*15+3561)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3735)*1+lsi)*1]), &(stack[((hsi*21+3714)*1+lsi)*1]), &(stack[((hsi*15+3699)*1+lsi)*1]), &(stack[((hsi*21+3521)*1+lsi)*1]), &(stack[((hsi*21+3576)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3763)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3766)*1+lsi)*1]), &(stack[((hsi*3+3763)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+3680)*1+lsi)*1]), &(stack[((hsi*3+3597)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3772)*1+lsi)*1]), &(stack[((hsi*6+3766)*1+lsi)*1]), &(stack[((hsi*3+3763)*1+lsi)*1]), &(stack[((hsi*6+3683)*1+lsi)*1]), &(stack[((hsi*6+3600)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3782)*1+lsi)*1]), &(stack[((hsi*10+3772)*1+lsi)*1]), &(stack[((hsi*6+3766)*1+lsi)*1]), &(stack[((hsi*10+3689)*1+lsi)*1]), &(stack[((hsi*10+3606)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3797)*1+lsi)*1]), &(stack[((hsi*15+3782)*1+lsi)*1]), &(stack[((hsi*10+3772)*1+lsi)*1]), &(stack[((hsi*15+3699)*1+lsi)*1]), &(stack[((hsi*15+3616)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3818)*1+lsi)*1]), &(stack[((hsi*21+3797)*1+lsi)*1]), &(stack[((hsi*15+3782)*1+lsi)*1]), &(stack[((hsi*21+3714)*1+lsi)*1]), &(stack[((hsi*21+3631)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3846)*1+lsi)*1]), &(stack[((hsi*28+3818)*1+lsi)*1]), &(stack[((hsi*21+3797)*1+lsi)*1]), &(stack[((hsi*28+3735)*1+lsi)*1]), &(stack[((hsi*28+3652)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3364)*1+lsi)*1]),&(stack[((hsi*36+3846)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3763)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3778)*1+lsi)*1]), &(stack[((hsi*15+3491)*1+lsi)*1]), &(stack[((hsi*10+3446)*1+lsi)*1]), &(stack[((hsi*15+3763)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3882)*1+lsi)*1]), &(stack[((hsi*15+3506)*1+lsi)*1]), &(stack[((hsi*10+3456)*1+lsi)*1]), &(stack[((hsi*15+3763)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3903)*1+lsi)*1]), &(stack[((hsi*21+3521)*1+lsi)*1]), &(stack[((hsi*15+3466)*1+lsi)*1]), &(stack[((hsi*21+3882)*1+lsi)*1]), &(stack[((hsi*21+3778)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3931)*1+lsi)*1]), &(stack[((hsi*21+3576)*1+lsi)*1]), &(stack[((hsi*15+3561)*1+lsi)*1]), &(stack[((hsi*21+3778)*1+lsi)*1]), &(stack[((hsi*21+3882)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3959)*1+lsi)*1]), &(stack[((hsi*28+3652)*1+lsi)*1]), &(stack[((hsi*21+3631)*1+lsi)*1]), &(stack[((hsi*28+3931)*1+lsi)*1]), &(stack[((hsi*28+3903)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3995)*1+lsi)*1]), &(stack[((hsi*28+3735)*1+lsi)*1]), &(stack[((hsi*21+3714)*1+lsi)*1]), &(stack[((hsi*28+3903)*1+lsi)*1]), &(stack[((hsi*28+3931)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4031)*1+lsi)*1]), &(stack[((hsi*36+3846)*1+lsi)*1]), &(stack[((hsi*28+3818)*1+lsi)*1]), &(stack[((hsi*36+3995)*1+lsi)*1]), &(stack[((hsi*36+3959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3319)*1+lsi)*1]),&(stack[((hsi*45+4031)*1+lsi)*1]),45);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3799)*1+lsi)*1]), &(stack[((hsi*15+3763)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4076)*1+lsi)*1]), &(stack[((hsi*21+3778)*1+lsi)*1]), &(stack[((hsi*15+3491)*1+lsi)*1]), &(stack[((hsi*21+3799)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4104)*1+lsi)*1]), &(stack[((hsi*21+3882)*1+lsi)*1]), &(stack[((hsi*15+3506)*1+lsi)*1]), &(stack[((hsi*21+3799)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4132)*1+lsi)*1]), &(stack[((hsi*28+3903)*1+lsi)*1]), &(stack[((hsi*21+3521)*1+lsi)*1]), &(stack[((hsi*28+4104)*1+lsi)*1]), &(stack[((hsi*28+4076)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4168)*1+lsi)*1]), &(stack[((hsi*28+3931)*1+lsi)*1]), &(stack[((hsi*21+3576)*1+lsi)*1]), &(stack[((hsi*28+4076)*1+lsi)*1]), &(stack[((hsi*28+4104)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4204)*1+lsi)*1]), &(stack[((hsi*36+3959)*1+lsi)*1]), &(stack[((hsi*28+3652)*1+lsi)*1]), &(stack[((hsi*36+4168)*1+lsi)*1]), &(stack[((hsi*36+4132)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4249)*1+lsi)*1]), &(stack[((hsi*36+3995)*1+lsi)*1]), &(stack[((hsi*28+3735)*1+lsi)*1]), &(stack[((hsi*36+4132)*1+lsi)*1]), &(stack[((hsi*36+4168)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4294)*1+lsi)*1]), &(stack[((hsi*45+4031)*1+lsi)*1]), &(stack[((hsi*36+3846)*1+lsi)*1]), &(stack[((hsi*45+4249)*1+lsi)*1]), &(stack[((hsi*45+4204)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3264)*1+lsi)*1]),&(stack[((hsi*55+4294)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3820)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3823)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3826)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3829)*1+lsi)*1]), &(stack[((hsi*3+3820)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+3826)*1+lsi)*1]), &(stack[((hsi*3+3823)*1+lsi)*1]), &(stack[((hsi*3+3542)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3835)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3838)*1+lsi)*1]), &(stack[((hsi*3+3823)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+3835)*1+lsi)*1]), &(stack[((hsi*3+3406)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+3826)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+3835)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4355)*1+lsi)*1]), &(stack[((hsi*6+3829)*1+lsi)*1]), &(stack[((hsi*3+3820)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*6+3838)*1+lsi)*1]), &(stack[((hsi*6+3545)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+3415)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4371)*1+lsi)*1]), &(stack[((hsi*6+3838)*1+lsi)*1]), &(stack[((hsi*3+3823)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*6+3424)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4381)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+3826)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*6+3418)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4391)*1+lsi)*1]), &(stack[((hsi*10+4355)*1+lsi)*1]), &(stack[((hsi*6+3829)*1+lsi)*1]), &(stack[((hsi*10+4381)*1+lsi)*1]), &(stack[((hsi*10+4371)*1+lsi)*1]), &(stack[((hsi*10+3551)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4416)*1+lsi)*1]), &(stack[((hsi*10+4371)*1+lsi)*1]), &(stack[((hsi*6+3838)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*10+3456)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4431)*1+lsi)*1]), &(stack[((hsi*10+4381)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*10+3446)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4446)*1+lsi)*1]), &(stack[((hsi*15+4391)*1+lsi)*1]), &(stack[((hsi*10+4355)*1+lsi)*1]), &(stack[((hsi*15+4431)*1+lsi)*1]), &(stack[((hsi*15+4416)*1+lsi)*1]), &(stack[((hsi*15+3561)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4482)*1+lsi)*1]), &(stack[((hsi*15+4416)*1+lsi)*1]), &(stack[((hsi*10+4371)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*15+3506)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4503)*1+lsi)*1]), &(stack[((hsi*15+4431)*1+lsi)*1]), &(stack[((hsi*10+4381)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*15+3491)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4524)*1+lsi)*1]), &(stack[((hsi*21+4446)*1+lsi)*1]), &(stack[((hsi*15+4391)*1+lsi)*1]), &(stack[((hsi*21+4503)*1+lsi)*1]), &(stack[((hsi*21+4482)*1+lsi)*1]), &(stack[((hsi*21+3576)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3415)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*3+3415)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+3823)*1+lsi)*1]), &(stack[((hsi*3+3826)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*3+3415)*1+lsi)*1]), &(stack[((hsi*6+3838)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*6+3409)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4552)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*10+4371)*1+lsi)*1]), &(stack[((hsi*10+4381)*1+lsi)*1]), &(stack[((hsi*10+3430)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4567)*1+lsi)*1]), &(stack[((hsi*15+4552)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*15+4416)*1+lsi)*1]), &(stack[((hsi*15+4431)*1+lsi)*1]), &(stack[((hsi*15+3466)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*21+4567)*1+lsi)*1]), &(stack[((hsi*15+4552)*1+lsi)*1]), &(stack[((hsi*21+4482)*1+lsi)*1]), &(stack[((hsi*21+4503)*1+lsi)*1]), &(stack[((hsi*21+3521)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4616)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4619)*1+lsi)*1]), &(stack[((hsi*3+4616)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+3415)*1+lsi)*1]), &(stack[((hsi*3+3820)*1+lsi)*1]), &(stack[((hsi*3+3680)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4625)*1+lsi)*1]), &(stack[((hsi*6+4619)*1+lsi)*1]), &(stack[((hsi*3+4616)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*6+3829)*1+lsi)*1]), &(stack[((hsi*6+3683)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4635)*1+lsi)*1]), &(stack[((hsi*10+4625)*1+lsi)*1]), &(stack[((hsi*6+4619)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*10+4355)*1+lsi)*1]), &(stack[((hsi*10+3689)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4650)*1+lsi)*1]), &(stack[((hsi*15+4635)*1+lsi)*1]), &(stack[((hsi*10+4625)*1+lsi)*1]), &(stack[((hsi*15+4552)*1+lsi)*1]), &(stack[((hsi*15+4391)*1+lsi)*1]), &(stack[((hsi*15+3699)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4671)*1+lsi)*1]), &(stack[((hsi*21+4650)*1+lsi)*1]), &(stack[((hsi*15+4635)*1+lsi)*1]), &(stack[((hsi*21+4567)*1+lsi)*1]), &(stack[((hsi*21+4446)*1+lsi)*1]), &(stack[((hsi*21+3714)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4699)*1+lsi)*1]), &(stack[((hsi*28+4671)*1+lsi)*1]), &(stack[((hsi*21+4650)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*28+4524)*1+lsi)*1]), &(stack[((hsi*28+3735)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3228)*1+lsi)*1]),&(stack[((hsi*36+4699)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4616)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*15+3763)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4637)*1+lsi)*1]), &(stack[((hsi*21+4482)*1+lsi)*1]), &(stack[((hsi*15+4416)*1+lsi)*1]), &(stack[((hsi*21+4616)*1+lsi)*1]), &(stack[((hsi*21+3882)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4735)*1+lsi)*1]), &(stack[((hsi*21+4503)*1+lsi)*1]), &(stack[((hsi*15+4431)*1+lsi)*1]), &(stack[((hsi*21+4616)*1+lsi)*1]), &(stack[((hsi*21+3778)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4763)*1+lsi)*1]), &(stack[((hsi*28+4524)*1+lsi)*1]), &(stack[((hsi*21+4446)*1+lsi)*1]), &(stack[((hsi*28+4735)*1+lsi)*1]), &(stack[((hsi*28+4637)*1+lsi)*1]), &(stack[((hsi*28+3931)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4799)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*21+4567)*1+lsi)*1]), &(stack[((hsi*28+4637)*1+lsi)*1]), &(stack[((hsi*28+4735)*1+lsi)*1]), &(stack[((hsi*28+3903)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4835)*1+lsi)*1]), &(stack[((hsi*36+4699)*1+lsi)*1]), &(stack[((hsi*28+4671)*1+lsi)*1]), &(stack[((hsi*36+4799)*1+lsi)*1]), &(stack[((hsi*36+4763)*1+lsi)*1]), &(stack[((hsi*36+3995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3183)*1+lsi)*1]),&(stack[((hsi*45+4835)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4665)*1+lsi)*1]), &(stack[((hsi*21+4616)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*21+3799)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4880)*1+lsi)*1]), &(stack[((hsi*28+4637)*1+lsi)*1]), &(stack[((hsi*21+4482)*1+lsi)*1]), &(stack[((hsi*28+4665)*1+lsi)*1]), &(stack[((hsi*28+4104)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4916)*1+lsi)*1]), &(stack[((hsi*28+4735)*1+lsi)*1]), &(stack[((hsi*21+4503)*1+lsi)*1]), &(stack[((hsi*28+4665)*1+lsi)*1]), &(stack[((hsi*28+4076)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4952)*1+lsi)*1]), &(stack[((hsi*36+4763)*1+lsi)*1]), &(stack[((hsi*28+4524)*1+lsi)*1]), &(stack[((hsi*36+4916)*1+lsi)*1]), &(stack[((hsi*36+4880)*1+lsi)*1]), &(stack[((hsi*36+4168)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4997)*1+lsi)*1]), &(stack[((hsi*36+4799)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*36+4880)*1+lsi)*1]), &(stack[((hsi*36+4916)*1+lsi)*1]), &(stack[((hsi*36+4132)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5042)*1+lsi)*1]), &(stack[((hsi*45+4835)*1+lsi)*1]), &(stack[((hsi*36+4699)*1+lsi)*1]), &(stack[((hsi*45+4997)*1+lsi)*1]), &(stack[((hsi*45+4952)*1+lsi)*1]), &(stack[((hsi*45+4249)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+3128)*1+lsi)*1]),&(stack[((hsi*55+5042)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4693)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5097)*1+lsi)*1]), &(stack[((hsi*3+4693)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+3542)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(stack[((hsi*3+3826)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+5103)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+3406)*1+lsi)*1]), &(stack[((hsi*3+3403)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5109)*1+lsi)*1]), &(stack[((hsi*6+5097)*1+lsi)*1]), &(stack[((hsi*3+4693)*1+lsi)*1]), &(stack[((hsi*6+3545)*1+lsi)*1]), &(stack[((hsi*6+3409)*1+lsi)*1]), &(stack[((hsi*6+5103)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+5103)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(stack[((hsi*6+3424)*1+lsi)*1]), &(stack[((hsi*6+3418)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5129)*1+lsi)*1]), &(stack[((hsi*10+5109)*1+lsi)*1]), &(stack[((hsi*6+5097)*1+lsi)*1]), &(stack[((hsi*10+3551)*1+lsi)*1]), &(stack[((hsi*10+3430)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*10+4381)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+5103)*1+lsi)*1]), &(stack[((hsi*10+3456)*1+lsi)*1]), &(stack[((hsi*10+3446)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5159)*1+lsi)*1]), &(stack[((hsi*15+5129)*1+lsi)*1]), &(stack[((hsi*10+5109)*1+lsi)*1]), &(stack[((hsi*15+3561)*1+lsi)*1]), &(stack[((hsi*15+3466)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*15+4431)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*15+3506)*1+lsi)*1]), &(stack[((hsi*15+3491)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3491)*1+lsi)*1]), &(stack[((hsi*21+5159)*1+lsi)*1]), &(stack[((hsi*15+5129)*1+lsi)*1]), &(stack[((hsi*21+3576)*1+lsi)*1]), &(stack[((hsi*21+3521)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*21+4503)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3835)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+3400)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(stack[((hsi*3+3542)*1+lsi)*1]), &(stack[((hsi*3+3823)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]), &(stack[((hsi*6+3409)*1+lsi)*1]), &(stack[((hsi*6+5103)*1+lsi)*1]), &(stack[((hsi*6+3545)*1+lsi)*1]), &(stack[((hsi*6+3838)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*10+3430)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*10+3551)*1+lsi)*1]), &(stack[((hsi*10+4371)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3418)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*15+3466)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*15+3561)*1+lsi)*1]), &(stack[((hsi*15+4416)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3446)*1+lsi)*1]), &(stack[((hsi*21+3418)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*21+3521)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*21+3576)*1+lsi)*1]), &(stack[((hsi*21+4482)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3519)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3522)*1+lsi)*1]), &(stack[((hsi*3+3519)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+3680)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]), &(stack[((hsi*3+3597)*1+lsi)*1]), &(stack[((hsi*3+4693)*1+lsi)*1]), &(stack[((hsi*3+3415)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3528)*1+lsi)*1]), &(stack[((hsi*6+3522)*1+lsi)*1]), &(stack[((hsi*3+3519)*1+lsi)*1]), &(stack[((hsi*6+3683)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*6+3600)*1+lsi)*1]), &(stack[((hsi*6+5097)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3400)*1+lsi)*1]), &(stack[((hsi*10+3528)*1+lsi)*1]), &(stack[((hsi*6+3522)*1+lsi)*1]), &(stack[((hsi*10+3689)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*10+3606)*1+lsi)*1]), &(stack[((hsi*10+5109)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3538)*1+lsi)*1]), &(stack[((hsi*15+3400)*1+lsi)*1]), &(stack[((hsi*10+3528)*1+lsi)*1]), &(stack[((hsi*15+3699)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*15+3616)*1+lsi)*1]), &(stack[((hsi*15+5129)*1+lsi)*1]), &(stack[((hsi*15+4552)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3559)*1+lsi)*1]), &(stack[((hsi*21+3538)*1+lsi)*1]), &(stack[((hsi*15+3400)*1+lsi)*1]), &(stack[((hsi*21+3714)*1+lsi)*1]), &(stack[((hsi*21+3418)*1+lsi)*1]), &(stack[((hsi*21+3631)*1+lsi)*1]), &(stack[((hsi*21+5159)*1+lsi)*1]), &(stack[((hsi*21+4567)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5201)*1+lsi)*1]), &(stack[((hsi*28+3559)*1+lsi)*1]), &(stack[((hsi*21+3538)*1+lsi)*1]), &(stack[((hsi*28+3735)*1+lsi)*1]), &(stack[((hsi*28+3446)*1+lsi)*1]), &(stack[((hsi*28+3652)*1+lsi)*1]), &(stack[((hsi*28+3491)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3092)*1+lsi)*1]),&(stack[((hsi*36+5201)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3519)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*21+3882)*1+lsi)*1]), &(stack[((hsi*21+3778)*1+lsi)*1]), &(stack[((hsi*21+4616)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5237)*1+lsi)*1]), &(stack[((hsi*28+3491)*1+lsi)*1]), &(stack[((hsi*21+5159)*1+lsi)*1]), &(stack[((hsi*28+3931)*1+lsi)*1]), &(stack[((hsi*28+3903)*1+lsi)*1]), &(stack[((hsi*28+3519)*1+lsi)*1]), &(stack[((hsi*28+4735)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5273)*1+lsi)*1]), &(stack[((hsi*28+3446)*1+lsi)*1]), &(stack[((hsi*21+3418)*1+lsi)*1]), &(stack[((hsi*28+3903)*1+lsi)*1]), &(stack[((hsi*28+3519)*1+lsi)*1]), &(stack[((hsi*28+3931)*1+lsi)*1]), &(stack[((hsi*28+4637)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5309)*1+lsi)*1]), &(stack[((hsi*36+5201)*1+lsi)*1]), &(stack[((hsi*28+3559)*1+lsi)*1]), &(stack[((hsi*36+3995)*1+lsi)*1]), &(stack[((hsi*36+5273)*1+lsi)*1]), &(stack[((hsi*36+3959)*1+lsi)*1]), &(stack[((hsi*36+5237)*1+lsi)*1]), &(stack[((hsi*36+4799)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+3047)*1+lsi)*1]),&(stack[((hsi*45+5309)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3547)*1+lsi)*1]), &(stack[((hsi*28+3519)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*28+4104)*1+lsi)*1]), &(stack[((hsi*28+4076)*1+lsi)*1]), &(stack[((hsi*28+4665)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5354)*1+lsi)*1]), &(stack[((hsi*36+5237)*1+lsi)*1]), &(stack[((hsi*28+3491)*1+lsi)*1]), &(stack[((hsi*36+4168)*1+lsi)*1]), &(stack[((hsi*36+4132)*1+lsi)*1]), &(stack[((hsi*36+3547)*1+lsi)*1]), &(stack[((hsi*36+4916)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5399)*1+lsi)*1]), &(stack[((hsi*36+5273)*1+lsi)*1]), &(stack[((hsi*28+3446)*1+lsi)*1]), &(stack[((hsi*36+4132)*1+lsi)*1]), &(stack[((hsi*36+3547)*1+lsi)*1]), &(stack[((hsi*36+4168)*1+lsi)*1]), &(stack[((hsi*36+4880)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5444)*1+lsi)*1]), &(stack[((hsi*45+5309)*1+lsi)*1]), &(stack[((hsi*36+5201)*1+lsi)*1]), &(stack[((hsi*45+4249)*1+lsi)*1]), &(stack[((hsi*45+5399)*1+lsi)*1]), &(stack[((hsi*45+4204)*1+lsi)*1]), &(stack[((hsi*45+5354)*1+lsi)*1]), &(stack[((hsi*45+4997)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2992)*1+lsi)*1]),&(stack[((hsi*55+5444)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3400)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3583)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+3823)*1+lsi)*1]), &(stack[((hsi*3+3826)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3403)*1+lsi)*1]), &(stack[((hsi*6+3583)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]), &(stack[((hsi*6+3838)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*6+5103)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5499)*1+lsi)*1]), &(stack[((hsi*10+3403)*1+lsi)*1]), &(stack[((hsi*6+3583)*1+lsi)*1]), &(stack[((hsi*10+4371)*1+lsi)*1]), &(stack[((hsi*10+4381)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5514)*1+lsi)*1]), &(stack[((hsi*15+5499)*1+lsi)*1]), &(stack[((hsi*10+3403)*1+lsi)*1]), &(stack[((hsi*15+4416)*1+lsi)*1]), &(stack[((hsi*15+4431)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4416)*1+lsi)*1]), &(stack[((hsi*21+5514)*1+lsi)*1]), &(stack[((hsi*15+5499)*1+lsi)*1]), &(stack[((hsi*21+4482)*1+lsi)*1]), &(stack[((hsi*21+4503)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+3415)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]), &(stack[((hsi*3+3820)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*6+3583)*1+lsi)*1]), &(stack[((hsi*6+3829)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*10+3403)*1+lsi)*1]), &(stack[((hsi*10+4355)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*15+4552)*1+lsi)*1]), &(stack[((hsi*15+5499)*1+lsi)*1]), &(stack[((hsi*15+4391)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*21+4567)*1+lsi)*1]), &(stack[((hsi*21+5514)*1+lsi)*1]), &(stack[((hsi*21+4446)*1+lsi)*1]), &(stack[((hsi*21+3418)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5535)*1+lsi)*1]), &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*28+4416)*1+lsi)*1]), &(stack[((hsi*28+4524)*1+lsi)*1]), &(stack[((hsi*28+3446)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2956)*1+lsi)*1]),&(stack[((hsi*36+5535)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5571)*1+lsi)*1]), &(stack[((hsi*28+4416)*1+lsi)*1]), &(stack[((hsi*21+5514)*1+lsi)*1]), &(stack[((hsi*28+4637)*1+lsi)*1]), &(stack[((hsi*28+4735)*1+lsi)*1]), &(stack[((hsi*28+3519)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5607)*1+lsi)*1]), &(stack[((hsi*36+5535)*1+lsi)*1]), &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*36+4799)*1+lsi)*1]), &(stack[((hsi*36+5571)*1+lsi)*1]), &(stack[((hsi*36+4763)*1+lsi)*1]), &(stack[((hsi*36+5273)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2911)*1+lsi)*1]),&(stack[((hsi*45+5607)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5652)*1+lsi)*1]), &(stack[((hsi*36+5571)*1+lsi)*1]), &(stack[((hsi*28+4416)*1+lsi)*1]), &(stack[((hsi*36+4880)*1+lsi)*1]), &(stack[((hsi*36+4916)*1+lsi)*1]), &(stack[((hsi*36+3547)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5697)*1+lsi)*1]), &(stack[((hsi*45+5607)*1+lsi)*1]), &(stack[((hsi*36+5535)*1+lsi)*1]), &(stack[((hsi*45+4997)*1+lsi)*1]), &(stack[((hsi*45+5652)*1+lsi)*1]), &(stack[((hsi*45+4952)*1+lsi)*1]), &(stack[((hsi*45+5399)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2856)*1+lsi)*1]),&(stack[((hsi*55+5697)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+3835)*1+lsi)*1]), &(stack[((hsi*3+4693)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*6+5097)*1+lsi)*1]), &(stack[((hsi*6+3583)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*10+5109)*1+lsi)*1]), &(stack[((hsi*10+3403)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*15+5129)*1+lsi)*1]), &(stack[((hsi*15+5499)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*21+3418)*1+lsi)*1]), &(stack[((hsi*21+5159)*1+lsi)*1]), &(stack[((hsi*21+5514)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5752)*1+lsi)*1]), &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*28+3446)*1+lsi)*1]), &(stack[((hsi*28+3491)*1+lsi)*1]), &(stack[((hsi*28+4416)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2820)*1+lsi)*1]),&(stack[((hsi*36+5752)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5788)*1+lsi)*1]), &(stack[((hsi*36+5752)*1+lsi)*1]), &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*36+5273)*1+lsi)*1]), &(stack[((hsi*36+5237)*1+lsi)*1]), &(stack[((hsi*36+5571)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2775)*1+lsi)*1]),&(stack[((hsi*45+5788)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5833)*1+lsi)*1]), &(stack[((hsi*45+5788)*1+lsi)*1]), &(stack[((hsi*36+5752)*1+lsi)*1]), &(stack[((hsi*45+5399)*1+lsi)*1]), &(stack[((hsi*45+5354)*1+lsi)*1]), &(stack[((hsi*45+5652)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2720)*1+lsi)*1]),&(stack[((hsi*55+5833)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+3820)*1+lsi)*1]), &(stack[((hsi*3+3415)*1+lsi)*1]), &(stack[((hsi*3+3400)*1+lsi)*1]), &(stack[((hsi*3+4693)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(stack[((hsi*6+3829)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*6+3583)*1+lsi)*1]), &(stack[((hsi*6+5097)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*10+4355)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*10+3403)*1+lsi)*1]), &(stack[((hsi*10+5109)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*15+4391)*1+lsi)*1]), &(stack[((hsi*15+4552)*1+lsi)*1]), &(stack[((hsi*15+5499)*1+lsi)*1]), &(stack[((hsi*15+5129)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*21+4446)*1+lsi)*1]), &(stack[((hsi*21+4567)*1+lsi)*1]), &(stack[((hsi*21+5514)*1+lsi)*1]), &(stack[((hsi*21+5159)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5499)*1+lsi)*1]), &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*28+4524)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*28+4416)*1+lsi)*1]), &(stack[((hsi*28+3491)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2684)*1+lsi)*1]),&(stack[((hsi*36+5499)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5888)*1+lsi)*1]), &(stack[((hsi*36+5499)*1+lsi)*1]), &(stack[((hsi*28+4482)*1+lsi)*1]), &(stack[((hsi*36+4763)*1+lsi)*1]), &(stack[((hsi*36+4799)*1+lsi)*1]), &(stack[((hsi*36+5571)*1+lsi)*1]), &(stack[((hsi*36+5237)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2639)*1+lsi)*1]),&(stack[((hsi*45+5888)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+5933)*1+lsi)*1]), &(stack[((hsi*45+5888)*1+lsi)*1]), &(stack[((hsi*36+5499)*1+lsi)*1]), &(stack[((hsi*45+4952)*1+lsi)*1]), &(stack[((hsi*45+4997)*1+lsi)*1]), &(stack[((hsi*45+5652)*1+lsi)*1]), &(stack[((hsi*45+5354)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2584)*1+lsi)*1]),&(stack[((hsi*55+5933)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+3597)*1+lsi)*1]), &(stack[((hsi*3+4693)*1+lsi)*1]), &(stack[((hsi*3+3680)*1+lsi)*1]), &(stack[((hsi*3+3835)*1+lsi)*1]), &(stack[((hsi*3+3820)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4696)*1+lsi)*1]), &(stack[((hsi*6+3600)*1+lsi)*1]), &(stack[((hsi*6+5097)*1+lsi)*1]), &(stack[((hsi*6+3683)*1+lsi)*1]), &(stack[((hsi*6+4365)*1+lsi)*1]), &(stack[((hsi*6+3829)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*10+3606)*1+lsi)*1]), &(stack[((hsi*10+5109)*1+lsi)*1]), &(stack[((hsi*10+3689)*1+lsi)*1]), &(stack[((hsi*10+4406)*1+lsi)*1]), &(stack[((hsi*10+4355)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*10+5119)*1+lsi)*1]), &(stack[((hsi*15+3616)*1+lsi)*1]), &(stack[((hsi*15+5129)*1+lsi)*1]), &(stack[((hsi*15+3699)*1+lsi)*1]), &(stack[((hsi*15+4467)*1+lsi)*1]), &(stack[((hsi*15+4391)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4467)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*15+5144)*1+lsi)*1]), &(stack[((hsi*21+3631)*1+lsi)*1]), &(stack[((hsi*21+5159)*1+lsi)*1]), &(stack[((hsi*21+3714)*1+lsi)*1]), &(stack[((hsi*21+3418)*1+lsi)*1]), &(stack[((hsi*21+4446)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5097)*1+lsi)*1]), &(stack[((hsi*28+4467)*1+lsi)*1]), &(stack[((hsi*21+5180)*1+lsi)*1]), &(stack[((hsi*28+3652)*1+lsi)*1]), &(stack[((hsi*28+3491)*1+lsi)*1]), &(stack[((hsi*28+3735)*1+lsi)*1]), &(stack[((hsi*28+3446)*1+lsi)*1]), &(stack[((hsi*28+4524)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2548)*1+lsi)*1]),&(stack[((hsi*36+5097)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5133)*1+lsi)*1]), &(stack[((hsi*36+5097)*1+lsi)*1]), &(stack[((hsi*28+4467)*1+lsi)*1]), &(stack[((hsi*36+3959)*1+lsi)*1]), &(stack[((hsi*36+5237)*1+lsi)*1]), &(stack[((hsi*36+3995)*1+lsi)*1]), &(stack[((hsi*36+5273)*1+lsi)*1]), &(stack[((hsi*36+4763)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2503)*1+lsi)*1]),&(stack[((hsi*45+5133)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4467)*1+lsi)*1]), &(stack[((hsi*45+5133)*1+lsi)*1]), &(stack[((hsi*36+5097)*1+lsi)*1]), &(stack[((hsi*45+4204)*1+lsi)*1]), &(stack[((hsi*45+5354)*1+lsi)*1]), &(stack[((hsi*45+4249)*1+lsi)*1]), &(stack[((hsi*45+5399)*1+lsi)*1]), &(stack[((hsi*45+4952)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2448)*1+lsi)*1]),&(stack[((hsi*55+4467)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+4406)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4406)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+3820)*1+lsi)*1]), &(stack[((hsi*3+3415)*1+lsi)*1]), &(stack[((hsi*3+3597)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3400)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*3+4406)*1+lsi)*1]), &(stack[((hsi*6+3829)*1+lsi)*1]), &(stack[((hsi*6+3440)*1+lsi)*1]), &(stack[((hsi*6+3600)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3410)*1+lsi)*1]), &(stack[((hsi*10+3400)*1+lsi)*1]), &(stack[((hsi*6+4349)*1+lsi)*1]), &(stack[((hsi*10+4355)*1+lsi)*1]), &(stack[((hsi*10+3481)*1+lsi)*1]), &(stack[((hsi*10+3606)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3425)*1+lsi)*1]), &(stack[((hsi*15+3410)*1+lsi)*1]), &(stack[((hsi*10+3400)*1+lsi)*1]), &(stack[((hsi*15+4391)*1+lsi)*1]), &(stack[((hsi*15+4552)*1+lsi)*1]), &(stack[((hsi*15+3616)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4349)*1+lsi)*1]), &(stack[((hsi*21+3425)*1+lsi)*1]), &(stack[((hsi*15+3410)*1+lsi)*1]), &(stack[((hsi*21+4446)*1+lsi)*1]), &(stack[((hsi*21+4567)*1+lsi)*1]), &(stack[((hsi*21+3631)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4552)*1+lsi)*1]), &(stack[((hsi*28+4349)*1+lsi)*1]), &(stack[((hsi*21+3425)*1+lsi)*1]), &(stack[((hsi*28+4524)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*28+3652)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2412)*1+lsi)*1]),&(stack[((hsi*36+4552)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3400)*1+lsi)*1]), &(stack[((hsi*36+4552)*1+lsi)*1]), &(stack[((hsi*28+4349)*1+lsi)*1]), &(stack[((hsi*36+4763)*1+lsi)*1]), &(stack[((hsi*36+4799)*1+lsi)*1]), &(stack[((hsi*36+3959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2367)*1+lsi)*1]),&(stack[((hsi*45+3400)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4349)*1+lsi)*1]), &(stack[((hsi*45+3400)*1+lsi)*1]), &(stack[((hsi*36+4552)*1+lsi)*1]), &(stack[((hsi*45+4952)*1+lsi)*1]), &(stack[((hsi*45+4997)*1+lsi)*1]), &(stack[((hsi*45+4204)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2312)*1+lsi)*1]),&(stack[((hsi*55+4349)*1+lsi)*1]),55);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3445)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+4693)*1+lsi)*1]), &(stack[((hsi*3+3445)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+3597)*1+lsi)*1]), &(stack[((hsi*3+3680)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3448)*1+lsi)*1]), &(stack[((hsi*6+4693)*1+lsi)*1]), &(stack[((hsi*3+3445)*1+lsi)*1]), &(stack[((hsi*6+3600)*1+lsi)*1]), &(stack[((hsi*6+3683)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4404)*1+lsi)*1]), &(stack[((hsi*10+3448)*1+lsi)*1]), &(stack[((hsi*6+4693)*1+lsi)*1]), &(stack[((hsi*10+3606)*1+lsi)*1]), &(stack[((hsi*10+3689)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3458)*1+lsi)*1]), &(stack[((hsi*15+4404)*1+lsi)*1]), &(stack[((hsi*10+3448)*1+lsi)*1]), &(stack[((hsi*15+3616)*1+lsi)*1]), &(stack[((hsi*15+3699)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*21+3458)*1+lsi)*1]), &(stack[((hsi*15+4404)*1+lsi)*1]), &(stack[((hsi*21+3631)*1+lsi)*1]), &(stack[((hsi*21+3714)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3583)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*21+3458)*1+lsi)*1]), &(stack[((hsi*28+3652)*1+lsi)*1]), &(stack[((hsi*28+3735)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2276)*1+lsi)*1]),&(stack[((hsi*36+3583)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3619)*1+lsi)*1]), &(stack[((hsi*36+3583)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*36+3959)*1+lsi)*1]), &(stack[((hsi*36+3995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2231)*1+lsi)*1]),&(stack[((hsi*45+3619)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3664)*1+lsi)*1]), &(stack[((hsi*45+3619)*1+lsi)*1]), &(stack[((hsi*36+3583)*1+lsi)*1]), &(stack[((hsi*45+4204)*1+lsi)*1]), &(stack[((hsi*45+4249)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2176)*1+lsi)*1]),&(stack[((hsi*55+3664)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2140)*1+lsi)*1]),&(stack[((hsi*36+3995)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+2095)*1+lsi)*1]),&(stack[((hsi*45+4249)*1+lsi)*1]),45);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*21+3799)*1+lsi)*1]), &(stack[((hsi*15+3763)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3445)*1+lsi)*1]), &(stack[((hsi*28+4104)*1+lsi)*1]), &(stack[((hsi*21+3882)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4404)*1+lsi)*1]), &(stack[((hsi*28+4076)*1+lsi)*1]), &(stack[((hsi*21+3778)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3719)*1+lsi)*1]), &(stack[((hsi*36+4168)*1+lsi)*1]), &(stack[((hsi*28+3931)*1+lsi)*1]), &(stack[((hsi*36+4404)*1+lsi)*1]), &(stack[((hsi*36+3445)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+5988)*1+lsi)*1]), &(stack[((hsi*36+4132)*1+lsi)*1]), &(stack[((hsi*28+3903)*1+lsi)*1]), &(stack[((hsi*36+3445)*1+lsi)*1]), &(stack[((hsi*36+4404)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+3882)*1+lsi)*1]), &(stack[((hsi*45+4249)*1+lsi)*1]), &(stack[((hsi*36+3995)*1+lsi)*1]), &(stack[((hsi*45+5988)*1+lsi)*1]), &(stack[((hsi*45+3719)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+2040)*1+lsi)*1]),&(stack[((hsi*55+3882)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2004)*1+lsi)*1]),&(stack[((hsi*36+4799)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1959)*1+lsi)*1]),&(stack[((hsi*45+4997)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3481)*1+lsi)*1]), &(stack[((hsi*28+4665)*1+lsi)*1]), &(stack[((hsi*21+4616)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6033)*1+lsi)*1]), &(stack[((hsi*36+4916)*1+lsi)*1]), &(stack[((hsi*28+4735)*1+lsi)*1]), &(stack[((hsi*36+3481)*1+lsi)*1]), &(stack[((hsi*36+4404)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6078)*1+lsi)*1]), &(stack[((hsi*36+4880)*1+lsi)*1]), &(stack[((hsi*28+4637)*1+lsi)*1]), &(stack[((hsi*36+3481)*1+lsi)*1]), &(stack[((hsi*36+3445)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6123)*1+lsi)*1]), &(stack[((hsi*45+4997)*1+lsi)*1]), &(stack[((hsi*36+4799)*1+lsi)*1]), &(stack[((hsi*45+6078)*1+lsi)*1]), &(stack[((hsi*45+6033)*1+lsi)*1]), &(stack[((hsi*45+5988)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1904)*1+lsi)*1]),&(stack[((hsi*55+6123)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1868)*1+lsi)*1]),&(stack[((hsi*36+5273)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1823)*1+lsi)*1]),&(stack[((hsi*45+5399)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4616)*1+lsi)*1]), &(stack[((hsi*36+3547)*1+lsi)*1]), &(stack[((hsi*28+3519)*1+lsi)*1]), &(stack[((hsi*36+3445)*1+lsi)*1]), &(stack[((hsi*36+4404)*1+lsi)*1]), &(stack[((hsi*36+3481)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6178)*1+lsi)*1]), &(stack[((hsi*45+5399)*1+lsi)*1]), &(stack[((hsi*36+5273)*1+lsi)*1]), &(stack[((hsi*45+5988)*1+lsi)*1]), &(stack[((hsi*45+4616)*1+lsi)*1]), &(stack[((hsi*45+3719)*1+lsi)*1]), &(stack[((hsi*45+6078)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1768)*1+lsi)*1]),&(stack[((hsi*55+6178)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1732)*1+lsi)*1]),&(stack[((hsi*36+5571)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1687)*1+lsi)*1]),&(stack[((hsi*45+5652)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6233)*1+lsi)*1]), &(stack[((hsi*45+5652)*1+lsi)*1]), &(stack[((hsi*36+5571)*1+lsi)*1]), &(stack[((hsi*45+6078)*1+lsi)*1]), &(stack[((hsi*45+6033)*1+lsi)*1]), &(stack[((hsi*45+4616)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1632)*1+lsi)*1]),&(stack[((hsi*55+6233)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1596)*1+lsi)*1]),&(stack[((hsi*36+5237)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1551)*1+lsi)*1]),&(stack[((hsi*45+5354)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6288)*1+lsi)*1]), &(stack[((hsi*45+5354)*1+lsi)*1]), &(stack[((hsi*36+5237)*1+lsi)*1]), &(stack[((hsi*45+3719)*1+lsi)*1]), &(stack[((hsi*45+5988)*1+lsi)*1]), &(stack[((hsi*45+4616)*1+lsi)*1]), &(stack[((hsi*45+6033)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1496)*1+lsi)*1]),&(stack[((hsi*55+6288)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1460)*1+lsi)*1]),&(stack[((hsi*36+4763)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1415)*1+lsi)*1]),&(stack[((hsi*45+4952)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6343)*1+lsi)*1]), &(stack[((hsi*45+4952)*1+lsi)*1]), &(stack[((hsi*36+4763)*1+lsi)*1]), &(stack[((hsi*45+6033)*1+lsi)*1]), &(stack[((hsi*45+6078)*1+lsi)*1]), &(stack[((hsi*45+3719)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1360)*1+lsi)*1]),&(stack[((hsi*55+6343)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1324)*1+lsi)*1]),&(stack[((hsi*36+3959)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1279)*1+lsi)*1]),&(stack[((hsi*45+4204)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6398)*1+lsi)*1]), &(stack[((hsi*45+4204)*1+lsi)*1]), &(stack[((hsi*36+3959)*1+lsi)*1]), &(stack[((hsi*45+3719)*1+lsi)*1]), &(stack[((hsi*45+5988)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1224)*1+lsi)*1]),&(stack[((hsi*55+6398)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1188)*1+lsi)*1]),&(stack[((hsi*36+4132)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1143)*1+lsi)*1]),&(stack[((hsi*45+5988)*1+lsi)*1]),45);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+6453)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]), &(stack[((hsi*21+3799)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3764)*1+lsi)*1]), &(stack[((hsi*36+4404)*1+lsi)*1]), &(stack[((hsi*28+4076)*1+lsi)*1]), &(stack[((hsi*36+6453)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6489)*1+lsi)*1]), &(stack[((hsi*36+3445)*1+lsi)*1]), &(stack[((hsi*28+4104)*1+lsi)*1]), &(stack[((hsi*36+6453)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+4076)*1+lsi)*1]), &(stack[((hsi*45+5988)*1+lsi)*1]), &(stack[((hsi*36+4132)*1+lsi)*1]), &(stack[((hsi*45+6489)*1+lsi)*1]), &(stack[((hsi*45+3764)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1088)*1+lsi)*1]),&(stack[((hsi*55+4076)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1052)*1+lsi)*1]),&(stack[((hsi*36+4880)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1007)*1+lsi)*1]),&(stack[((hsi*45+6078)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6534)*1+lsi)*1]), &(stack[((hsi*36+3481)*1+lsi)*1]), &(stack[((hsi*28+4665)*1+lsi)*1]), &(stack[((hsi*36+6453)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6579)*1+lsi)*1]), &(stack[((hsi*45+6078)*1+lsi)*1]), &(stack[((hsi*36+4880)*1+lsi)*1]), &(stack[((hsi*45+6534)*1+lsi)*1]), &(stack[((hsi*45+6489)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+952)*1+lsi)*1]),&(stack[((hsi*55+6579)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+916)*1+lsi)*1]),&(stack[((hsi*36+3547)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+871)*1+lsi)*1]),&(stack[((hsi*45+4616)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6634)*1+lsi)*1]), &(stack[((hsi*45+4616)*1+lsi)*1]), &(stack[((hsi*36+3547)*1+lsi)*1]), &(stack[((hsi*45+6489)*1+lsi)*1]), &(stack[((hsi*45+3764)*1+lsi)*1]), &(stack[((hsi*45+6534)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+816)*1+lsi)*1]),&(stack[((hsi*55+6634)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+780)*1+lsi)*1]),&(stack[((hsi*36+4916)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+735)*1+lsi)*1]),&(stack[((hsi*45+6033)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6689)*1+lsi)*1]), &(stack[((hsi*45+6033)*1+lsi)*1]), &(stack[((hsi*36+4916)*1+lsi)*1]), &(stack[((hsi*45+6534)*1+lsi)*1]), &(stack[((hsi*45+3764)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+680)*1+lsi)*1]),&(stack[((hsi*55+6689)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+644)*1+lsi)*1]),&(stack[((hsi*36+4168)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+599)*1+lsi)*1]),&(stack[((hsi*45+3719)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6744)*1+lsi)*1]), &(stack[((hsi*45+3719)*1+lsi)*1]), &(stack[((hsi*36+4168)*1+lsi)*1]), &(stack[((hsi*45+3764)*1+lsi)*1]), &(stack[((hsi*45+6489)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+544)*1+lsi)*1]),&(stack[((hsi*55+6744)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+508)*1+lsi)*1]),&(stack[((hsi*36+3445)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+463)*1+lsi)*1]),&(stack[((hsi*45+6489)*1+lsi)*1]),45);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+6799)*1+lsi)*1]), &(stack[((hsi*36+6453)*1+lsi)*1]), &(stack[((hsi*28+4588)*1+lsi)*1]));
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6844)*1+lsi)*1]), &(stack[((hsi*45+6489)*1+lsi)*1]), &(stack[((hsi*36+3445)*1+lsi)*1]), &(stack[((hsi*45+6799)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+408)*1+lsi)*1]),&(stack[((hsi*55+6844)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+372)*1+lsi)*1]),&(stack[((hsi*36+3481)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+327)*1+lsi)*1]),&(stack[((hsi*45+6534)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6899)*1+lsi)*1]), &(stack[((hsi*45+6534)*1+lsi)*1]), &(stack[((hsi*36+3481)*1+lsi)*1]), &(stack[((hsi*45+6799)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+272)*1+lsi)*1]),&(stack[((hsi*55+6899)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+236)*1+lsi)*1]),&(stack[((hsi*36+4404)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+191)*1+lsi)*1]),&(stack[((hsi*45+3764)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+6954)*1+lsi)*1]), &(stack[((hsi*45+3764)*1+lsi)*1]), &(stack[((hsi*36+4404)*1+lsi)*1]), &(stack[((hsi*45+6799)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+136)*1+lsi)*1]),&(stack[((hsi*55+6954)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+100)*1+lsi)*1]),&(stack[((hsi*36+6453)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+55)*1+lsi)*1]),&(stack[((hsi*45+6799)*1+lsi)*1]),45);
OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+7009)*1+lsi)*1]), &(stack[((hsi*45+6799)*1+lsi)*1]), &(stack[((hsi*36+6453)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+7009)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3400 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
