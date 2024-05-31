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
void _sphemultipole_K_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2025)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2028)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2031)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2034)*1+lsi)*1]), &(stack[((hsi*3+2025)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+2031)*1+lsi)*1]), &(stack[((hsi*3+2028)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2040)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2043)*1+lsi)*1]), &(stack[((hsi*3+2028)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+2040)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2049)*1+lsi)*1]), &(stack[((hsi*3+2031)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+2040)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2055)*1+lsi)*1]), &(stack[((hsi*6+2034)*1+lsi)*1]), &(stack[((hsi*3+2025)*1+lsi)*1]), &(stack[((hsi*6+2049)*1+lsi)*1]), &(stack[((hsi*6+2043)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*3+2040)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2071)*1+lsi)*1]), &(stack[((hsi*6+2043)*1+lsi)*1]), &(stack[((hsi*3+2028)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2081)*1+lsi)*1]), &(stack[((hsi*6+2049)*1+lsi)*1]), &(stack[((hsi*3+2031)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2091)*1+lsi)*1]), &(stack[((hsi*10+2055)*1+lsi)*1]), &(stack[((hsi*6+2034)*1+lsi)*1]), &(stack[((hsi*10+2081)*1+lsi)*1]), &(stack[((hsi*10+2071)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2106)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*3+2040)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2116)*1+lsi)*1]), &(stack[((hsi*10+2071)*1+lsi)*1]), &(stack[((hsi*6+2043)*1+lsi)*1]), &(stack[((hsi*10+2106)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2131)*1+lsi)*1]), &(stack[((hsi*10+2081)*1+lsi)*1]), &(stack[((hsi*6+2049)*1+lsi)*1]), &(stack[((hsi*10+2106)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2146)*1+lsi)*1]), &(stack[((hsi*15+2091)*1+lsi)*1]), &(stack[((hsi*10+2055)*1+lsi)*1]), &(stack[((hsi*15+2131)*1+lsi)*1]), &(stack[((hsi*15+2116)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2167)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*3+2167)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+2028)*1+lsi)*1]), &(stack[((hsi*3+2031)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*3+2167)*1+lsi)*1]), &(stack[((hsi*6+2043)*1+lsi)*1]), &(stack[((hsi*6+2049)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*10+2071)*1+lsi)*1]), &(stack[((hsi*10+2081)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2201)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*15+2116)*1+lsi)*1]), &(stack[((hsi*15+2131)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2222)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2225)*1+lsi)*1]), &(stack[((hsi*3+2222)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+2167)*1+lsi)*1]), &(stack[((hsi*3+2025)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2231)*1+lsi)*1]), &(stack[((hsi*6+2225)*1+lsi)*1]), &(stack[((hsi*3+2222)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*6+2034)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2241)*1+lsi)*1]), &(stack[((hsi*10+2231)*1+lsi)*1]), &(stack[((hsi*6+2225)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*10+2055)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2256)*1+lsi)*1]), &(stack[((hsi*15+2241)*1+lsi)*1]), &(stack[((hsi*10+2231)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*15+2091)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2277)*1+lsi)*1]), &(stack[((hsi*21+2256)*1+lsi)*1]), &(stack[((hsi*15+2241)*1+lsi)*1]), &(stack[((hsi*21+2201)*1+lsi)*1]), &(stack[((hsi*21+2146)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2305)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2308)*1+lsi)*1]), &(stack[((hsi*3+2305)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+2025)*1+lsi)*1]), &(stack[((hsi*3+2167)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2314)*1+lsi)*1]), &(stack[((hsi*6+2308)*1+lsi)*1]), &(stack[((hsi*3+2305)*1+lsi)*1]), &(stack[((hsi*6+2034)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2324)*1+lsi)*1]), &(stack[((hsi*10+2314)*1+lsi)*1]), &(stack[((hsi*6+2308)*1+lsi)*1]), &(stack[((hsi*10+2055)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2339)*1+lsi)*1]), &(stack[((hsi*15+2324)*1+lsi)*1]), &(stack[((hsi*10+2314)*1+lsi)*1]), &(stack[((hsi*15+2091)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2360)*1+lsi)*1]), &(stack[((hsi*21+2339)*1+lsi)*1]), &(stack[((hsi*15+2324)*1+lsi)*1]), &(stack[((hsi*21+2146)*1+lsi)*1]), &(stack[((hsi*21+2201)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2388)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2391)*1+lsi)*1]), &(stack[((hsi*3+2388)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+2305)*1+lsi)*1]), &(stack[((hsi*3+2222)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2397)*1+lsi)*1]), &(stack[((hsi*6+2391)*1+lsi)*1]), &(stack[((hsi*3+2388)*1+lsi)*1]), &(stack[((hsi*6+2308)*1+lsi)*1]), &(stack[((hsi*6+2225)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2407)*1+lsi)*1]), &(stack[((hsi*10+2397)*1+lsi)*1]), &(stack[((hsi*6+2391)*1+lsi)*1]), &(stack[((hsi*10+2314)*1+lsi)*1]), &(stack[((hsi*10+2231)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2422)*1+lsi)*1]), &(stack[((hsi*15+2407)*1+lsi)*1]), &(stack[((hsi*10+2397)*1+lsi)*1]), &(stack[((hsi*15+2324)*1+lsi)*1]), &(stack[((hsi*15+2241)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2443)*1+lsi)*1]), &(stack[((hsi*21+2422)*1+lsi)*1]), &(stack[((hsi*15+2407)*1+lsi)*1]), &(stack[((hsi*21+2339)*1+lsi)*1]), &(stack[((hsi*21+2256)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2471)*1+lsi)*1]), &(stack[((hsi*28+2443)*1+lsi)*1]), &(stack[((hsi*21+2422)*1+lsi)*1]), &(stack[((hsi*28+2360)*1+lsi)*1]), &(stack[((hsi*28+2277)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1989)*1+lsi)*1]),&(stack[((hsi*36+2471)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2388)*1+lsi)*1]), &(stack[((hsi*10+2106)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2403)*1+lsi)*1]), &(stack[((hsi*15+2116)*1+lsi)*1]), &(stack[((hsi*10+2071)*1+lsi)*1]), &(stack[((hsi*15+2388)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2507)*1+lsi)*1]), &(stack[((hsi*15+2131)*1+lsi)*1]), &(stack[((hsi*10+2081)*1+lsi)*1]), &(stack[((hsi*15+2388)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2528)*1+lsi)*1]), &(stack[((hsi*21+2146)*1+lsi)*1]), &(stack[((hsi*15+2091)*1+lsi)*1]), &(stack[((hsi*21+2507)*1+lsi)*1]), &(stack[((hsi*21+2403)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2556)*1+lsi)*1]), &(stack[((hsi*21+2201)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*21+2403)*1+lsi)*1]), &(stack[((hsi*21+2507)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2584)*1+lsi)*1]), &(stack[((hsi*28+2277)*1+lsi)*1]), &(stack[((hsi*21+2256)*1+lsi)*1]), &(stack[((hsi*28+2556)*1+lsi)*1]), &(stack[((hsi*28+2528)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2620)*1+lsi)*1]), &(stack[((hsi*28+2360)*1+lsi)*1]), &(stack[((hsi*21+2339)*1+lsi)*1]), &(stack[((hsi*28+2528)*1+lsi)*1]), &(stack[((hsi*28+2556)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2656)*1+lsi)*1]), &(stack[((hsi*36+2471)*1+lsi)*1]), &(stack[((hsi*28+2443)*1+lsi)*1]), &(stack[((hsi*36+2620)*1+lsi)*1]), &(stack[((hsi*36+2584)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1944)*1+lsi)*1]),&(stack[((hsi*45+2656)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2424)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2427)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2430)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2433)*1+lsi)*1]), &(stack[((hsi*3+2424)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+2430)*1+lsi)*1]), &(stack[((hsi*3+2427)*1+lsi)*1]), &(stack[((hsi*3+2167)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2439)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2442)*1+lsi)*1]), &(stack[((hsi*3+2427)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+2439)*1+lsi)*1]), &(stack[((hsi*3+2031)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2448)*1+lsi)*1]), &(stack[((hsi*3+2430)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+2439)*1+lsi)*1]), &(stack[((hsi*3+2028)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2454)*1+lsi)*1]), &(stack[((hsi*6+2433)*1+lsi)*1]), &(stack[((hsi*3+2424)*1+lsi)*1]), &(stack[((hsi*6+2448)*1+lsi)*1]), &(stack[((hsi*6+2442)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2464)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+2040)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2701)*1+lsi)*1]), &(stack[((hsi*6+2442)*1+lsi)*1]), &(stack[((hsi*3+2427)*1+lsi)*1]), &(stack[((hsi*6+2464)*1+lsi)*1]), &(stack[((hsi*6+2049)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2711)*1+lsi)*1]), &(stack[((hsi*6+2448)*1+lsi)*1]), &(stack[((hsi*3+2430)*1+lsi)*1]), &(stack[((hsi*6+2464)*1+lsi)*1]), &(stack[((hsi*6+2043)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2721)*1+lsi)*1]), &(stack[((hsi*10+2454)*1+lsi)*1]), &(stack[((hsi*6+2433)*1+lsi)*1]), &(stack[((hsi*10+2711)*1+lsi)*1]), &(stack[((hsi*10+2701)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+2464)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*10+2701)*1+lsi)*1]), &(stack[((hsi*6+2442)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+2081)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2761)*1+lsi)*1]), &(stack[((hsi*10+2711)*1+lsi)*1]), &(stack[((hsi*6+2448)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+2071)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2776)*1+lsi)*1]), &(stack[((hsi*15+2721)*1+lsi)*1]), &(stack[((hsi*10+2454)*1+lsi)*1]), &(stack[((hsi*15+2761)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2797)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+2464)*1+lsi)*1]), &(stack[((hsi*10+2106)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2812)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*10+2701)*1+lsi)*1]), &(stack[((hsi*15+2797)*1+lsi)*1]), &(stack[((hsi*15+2131)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*15+2761)*1+lsi)*1]), &(stack[((hsi*10+2711)*1+lsi)*1]), &(stack[((hsi*15+2797)*1+lsi)*1]), &(stack[((hsi*15+2116)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2854)*1+lsi)*1]), &(stack[((hsi*21+2776)*1+lsi)*1]), &(stack[((hsi*15+2721)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*21+2812)*1+lsi)*1]), &(stack[((hsi*21+2201)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2040)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*3+2040)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+2427)*1+lsi)*1]), &(stack[((hsi*3+2430)*1+lsi)*1]), &(stack[((hsi*3+2025)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*3+2040)*1+lsi)*1]), &(stack[((hsi*6+2442)*1+lsi)*1]), &(stack[((hsi*6+2448)*1+lsi)*1]), &(stack[((hsi*6+2034)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2892)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*10+2701)*1+lsi)*1]), &(stack[((hsi*10+2711)*1+lsi)*1]), &(stack[((hsi*10+2055)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2907)*1+lsi)*1]), &(stack[((hsi*15+2892)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*15+2761)*1+lsi)*1]), &(stack[((hsi*15+2091)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2928)*1+lsi)*1]), &(stack[((hsi*21+2907)*1+lsi)*1]), &(stack[((hsi*15+2892)*1+lsi)*1]), &(stack[((hsi*21+2812)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*21+2146)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2956)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2959)*1+lsi)*1]), &(stack[((hsi*3+2956)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+2040)*1+lsi)*1]), &(stack[((hsi*3+2424)*1+lsi)*1]), &(stack[((hsi*3+2305)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2965)*1+lsi)*1]), &(stack[((hsi*6+2959)*1+lsi)*1]), &(stack[((hsi*3+2956)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*6+2433)*1+lsi)*1]), &(stack[((hsi*6+2308)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2975)*1+lsi)*1]), &(stack[((hsi*10+2965)*1+lsi)*1]), &(stack[((hsi*6+2959)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*10+2454)*1+lsi)*1]), &(stack[((hsi*10+2314)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2990)*1+lsi)*1]), &(stack[((hsi*15+2975)*1+lsi)*1]), &(stack[((hsi*10+2965)*1+lsi)*1]), &(stack[((hsi*15+2892)*1+lsi)*1]), &(stack[((hsi*15+2721)*1+lsi)*1]), &(stack[((hsi*15+2324)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3011)*1+lsi)*1]), &(stack[((hsi*21+2990)*1+lsi)*1]), &(stack[((hsi*15+2975)*1+lsi)*1]), &(stack[((hsi*21+2907)*1+lsi)*1]), &(stack[((hsi*21+2776)*1+lsi)*1]), &(stack[((hsi*21+2339)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3039)*1+lsi)*1]), &(stack[((hsi*28+3011)*1+lsi)*1]), &(stack[((hsi*21+2990)*1+lsi)*1]), &(stack[((hsi*28+2928)*1+lsi)*1]), &(stack[((hsi*28+2854)*1+lsi)*1]), &(stack[((hsi*28+2360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1908)*1+lsi)*1]),&(stack[((hsi*36+3039)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2956)*1+lsi)*1]), &(stack[((hsi*15+2797)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*15+2388)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2977)*1+lsi)*1]), &(stack[((hsi*21+2812)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*21+2956)*1+lsi)*1]), &(stack[((hsi*21+2507)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3075)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*15+2761)*1+lsi)*1]), &(stack[((hsi*21+2956)*1+lsi)*1]), &(stack[((hsi*21+2403)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3103)*1+lsi)*1]), &(stack[((hsi*28+2854)*1+lsi)*1]), &(stack[((hsi*21+2776)*1+lsi)*1]), &(stack[((hsi*28+3075)*1+lsi)*1]), &(stack[((hsi*28+2977)*1+lsi)*1]), &(stack[((hsi*28+2556)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3139)*1+lsi)*1]), &(stack[((hsi*28+2928)*1+lsi)*1]), &(stack[((hsi*21+2907)*1+lsi)*1]), &(stack[((hsi*28+2977)*1+lsi)*1]), &(stack[((hsi*28+3075)*1+lsi)*1]), &(stack[((hsi*28+2528)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3175)*1+lsi)*1]), &(stack[((hsi*36+3039)*1+lsi)*1]), &(stack[((hsi*28+3011)*1+lsi)*1]), &(stack[((hsi*36+3139)*1+lsi)*1]), &(stack[((hsi*36+3103)*1+lsi)*1]), &(stack[((hsi*36+2620)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1863)*1+lsi)*1]),&(stack[((hsi*45+3175)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3005)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3011)*1+lsi)*1]), &(stack[((hsi*3+3005)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+2167)*1+lsi)*1]), &(stack[((hsi*3+2025)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(stack[((hsi*3+2430)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+2031)*1+lsi)*1]), &(stack[((hsi*3+2028)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3023)*1+lsi)*1]), &(stack[((hsi*6+3011)*1+lsi)*1]), &(stack[((hsi*3+3005)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*6+2034)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*6+2448)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(stack[((hsi*6+2049)*1+lsi)*1]), &(stack[((hsi*6+2043)*1+lsi)*1]), &(stack[((hsi*6+2464)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3230)*1+lsi)*1]), &(stack[((hsi*10+3023)*1+lsi)*1]), &(stack[((hsi*6+3011)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*10+2055)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*10+2711)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*10+2081)*1+lsi)*1]), &(stack[((hsi*10+2071)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3260)*1+lsi)*1]), &(stack[((hsi*15+3230)*1+lsi)*1]), &(stack[((hsi*10+3023)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*15+2091)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*15+2761)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3281)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*15+2131)*1+lsi)*1]), &(stack[((hsi*15+2116)*1+lsi)*1]), &(stack[((hsi*15+2797)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3302)*1+lsi)*1]), &(stack[((hsi*21+3260)*1+lsi)*1]), &(stack[((hsi*15+3230)*1+lsi)*1]), &(stack[((hsi*21+2201)*1+lsi)*1]), &(stack[((hsi*21+2146)*1+lsi)*1]), &(stack[((hsi*21+3281)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2439)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3033)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+2025)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(stack[((hsi*3+2167)*1+lsi)*1]), &(stack[((hsi*3+2427)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+3033)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]), &(stack[((hsi*6+2034)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*6+2442)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2025)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+3033)*1+lsi)*1]), &(stack[((hsi*10+2055)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*10+2701)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2043)*1+lsi)*1]), &(stack[((hsi*15+2025)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*15+2091)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2071)*1+lsi)*1]), &(stack[((hsi*21+2043)*1+lsi)*1]), &(stack[((hsi*15+2025)*1+lsi)*1]), &(stack[((hsi*21+2146)*1+lsi)*1]), &(stack[((hsi*21+3281)*1+lsi)*1]), &(stack[((hsi*21+2201)*1+lsi)*1]), &(stack[((hsi*21+2812)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2167)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*3+2167)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+2305)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]), &(stack[((hsi*3+2222)*1+lsi)*1]), &(stack[((hsi*3+3005)*1+lsi)*1]), &(stack[((hsi*3+2040)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*3+2167)*1+lsi)*1]), &(stack[((hsi*6+2308)*1+lsi)*1]), &(stack[((hsi*6+3033)*1+lsi)*1]), &(stack[((hsi*6+2225)*1+lsi)*1]), &(stack[((hsi*6+3011)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*6+2170)*1+lsi)*1]), &(stack[((hsi*10+2314)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+2231)*1+lsi)*1]), &(stack[((hsi*10+3023)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3330)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*10+2176)*1+lsi)*1]), &(stack[((hsi*15+2324)*1+lsi)*1]), &(stack[((hsi*15+2025)*1+lsi)*1]), &(stack[((hsi*15+2241)*1+lsi)*1]), &(stack[((hsi*15+3230)*1+lsi)*1]), &(stack[((hsi*15+2892)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3351)*1+lsi)*1]), &(stack[((hsi*21+3330)*1+lsi)*1]), &(stack[((hsi*15+2186)*1+lsi)*1]), &(stack[((hsi*21+2339)*1+lsi)*1]), &(stack[((hsi*21+2043)*1+lsi)*1]), &(stack[((hsi*21+2256)*1+lsi)*1]), &(stack[((hsi*21+3260)*1+lsi)*1]), &(stack[((hsi*21+2907)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3379)*1+lsi)*1]), &(stack[((hsi*28+3351)*1+lsi)*1]), &(stack[((hsi*21+3330)*1+lsi)*1]), &(stack[((hsi*28+2360)*1+lsi)*1]), &(stack[((hsi*28+2071)*1+lsi)*1]), &(stack[((hsi*28+2277)*1+lsi)*1]), &(stack[((hsi*28+3302)*1+lsi)*1]), &(stack[((hsi*28+2928)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1827)*1+lsi)*1]),&(stack[((hsi*36+3379)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2167)*1+lsi)*1]), &(stack[((hsi*21+3281)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*21+2507)*1+lsi)*1]), &(stack[((hsi*21+2403)*1+lsi)*1]), &(stack[((hsi*21+2956)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3415)*1+lsi)*1]), &(stack[((hsi*28+3302)*1+lsi)*1]), &(stack[((hsi*21+3260)*1+lsi)*1]), &(stack[((hsi*28+2556)*1+lsi)*1]), &(stack[((hsi*28+2528)*1+lsi)*1]), &(stack[((hsi*28+2167)*1+lsi)*1]), &(stack[((hsi*28+3075)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3451)*1+lsi)*1]), &(stack[((hsi*28+2071)*1+lsi)*1]), &(stack[((hsi*21+2043)*1+lsi)*1]), &(stack[((hsi*28+2528)*1+lsi)*1]), &(stack[((hsi*28+2167)*1+lsi)*1]), &(stack[((hsi*28+2556)*1+lsi)*1]), &(stack[((hsi*28+2977)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3487)*1+lsi)*1]), &(stack[((hsi*36+3379)*1+lsi)*1]), &(stack[((hsi*28+3351)*1+lsi)*1]), &(stack[((hsi*36+2620)*1+lsi)*1]), &(stack[((hsi*36+3451)*1+lsi)*1]), &(stack[((hsi*36+2584)*1+lsi)*1]), &(stack[((hsi*36+3415)*1+lsi)*1]), &(stack[((hsi*36+3139)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1782)*1+lsi)*1]),&(stack[((hsi*45+3487)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3330)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*3+3330)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+2427)*1+lsi)*1]), &(stack[((hsi*3+2430)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3333)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*3+3330)*1+lsi)*1]), &(stack[((hsi*6+2442)*1+lsi)*1]), &(stack[((hsi*6+2448)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3343)*1+lsi)*1]), &(stack[((hsi*10+3333)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*10+2701)*1+lsi)*1]), &(stack[((hsi*10+2711)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3358)*1+lsi)*1]), &(stack[((hsi*15+3343)*1+lsi)*1]), &(stack[((hsi*10+3333)*1+lsi)*1]), &(stack[((hsi*15+2746)*1+lsi)*1]), &(stack[((hsi*15+2761)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2746)*1+lsi)*1]), &(stack[((hsi*21+3358)*1+lsi)*1]), &(stack[((hsi*15+3343)*1+lsi)*1]), &(stack[((hsi*21+2812)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*21+3281)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+2040)*1+lsi)*1]), &(stack[((hsi*3+3330)*1+lsi)*1]), &(stack[((hsi*3+2424)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*6+2433)*1+lsi)*1]), &(stack[((hsi*6+3033)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*10+3333)*1+lsi)*1]), &(stack[((hsi*10+2454)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*15+2892)*1+lsi)*1]), &(stack[((hsi*15+3343)*1+lsi)*1]), &(stack[((hsi*15+2721)*1+lsi)*1]), &(stack[((hsi*15+2025)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*21+2907)*1+lsi)*1]), &(stack[((hsi*21+3358)*1+lsi)*1]), &(stack[((hsi*21+2776)*1+lsi)*1]), &(stack[((hsi*21+2043)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3581)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*28+2928)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]), &(stack[((hsi*28+2854)*1+lsi)*1]), &(stack[((hsi*28+2071)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1746)*1+lsi)*1]),&(stack[((hsi*36+3581)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3617)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]), &(stack[((hsi*21+3358)*1+lsi)*1]), &(stack[((hsi*28+2977)*1+lsi)*1]), &(stack[((hsi*28+3075)*1+lsi)*1]), &(stack[((hsi*28+2167)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3653)*1+lsi)*1]), &(stack[((hsi*36+3581)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*36+3139)*1+lsi)*1]), &(stack[((hsi*36+3617)*1+lsi)*1]), &(stack[((hsi*36+3103)*1+lsi)*1]), &(stack[((hsi*36+3451)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1701)*1+lsi)*1]),&(stack[((hsi*45+3653)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+2439)*1+lsi)*1]), &(stack[((hsi*3+3005)*1+lsi)*1]), &(stack[((hsi*3+3330)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(stack[((hsi*6+3033)*1+lsi)*1]), &(stack[((hsi*6+3011)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+3023)*1+lsi)*1]), &(stack[((hsi*10+3333)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*15+2025)*1+lsi)*1]), &(stack[((hsi*15+3230)*1+lsi)*1]), &(stack[((hsi*15+3343)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*21+2043)*1+lsi)*1]), &(stack[((hsi*21+3260)*1+lsi)*1]), &(stack[((hsi*21+3358)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*28+2071)*1+lsi)*1]), &(stack[((hsi*28+3302)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1665)*1+lsi)*1]),&(stack[((hsi*36+3698)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3734)*1+lsi)*1]), &(stack[((hsi*36+3698)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*36+3451)*1+lsi)*1]), &(stack[((hsi*36+3415)*1+lsi)*1]), &(stack[((hsi*36+3617)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1620)*1+lsi)*1]),&(stack[((hsi*45+3734)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+2424)*1+lsi)*1]), &(stack[((hsi*3+2040)*1+lsi)*1]), &(stack[((hsi*3+3330)*1+lsi)*1]), &(stack[((hsi*3+3005)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(stack[((hsi*6+2433)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*6+3011)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*10+2454)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*10+3333)*1+lsi)*1]), &(stack[((hsi*10+3023)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*15+2721)*1+lsi)*1]), &(stack[((hsi*15+2892)*1+lsi)*1]), &(stack[((hsi*15+3343)*1+lsi)*1]), &(stack[((hsi*15+3230)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*21+2776)*1+lsi)*1]), &(stack[((hsi*21+2907)*1+lsi)*1]), &(stack[((hsi*21+3358)*1+lsi)*1]), &(stack[((hsi*21+3260)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3330)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*28+2854)*1+lsi)*1]), &(stack[((hsi*28+2928)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]), &(stack[((hsi*28+3302)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1584)*1+lsi)*1]),&(stack[((hsi*36+3330)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3779)*1+lsi)*1]), &(stack[((hsi*36+3330)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*36+3103)*1+lsi)*1]), &(stack[((hsi*36+3139)*1+lsi)*1]), &(stack[((hsi*36+3617)*1+lsi)*1]), &(stack[((hsi*36+3415)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1539)*1+lsi)*1]),&(stack[((hsi*45+3779)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+2222)*1+lsi)*1]), &(stack[((hsi*3+3005)*1+lsi)*1]), &(stack[((hsi*3+2305)*1+lsi)*1]), &(stack[((hsi*3+2439)*1+lsi)*1]), &(stack[((hsi*3+2424)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*3+3008)*1+lsi)*1]), &(stack[((hsi*6+2225)*1+lsi)*1]), &(stack[((hsi*6+3011)*1+lsi)*1]), &(stack[((hsi*6+2308)*1+lsi)*1]), &(stack[((hsi*6+3033)*1+lsi)*1]), &(stack[((hsi*6+2433)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*6+3017)*1+lsi)*1]), &(stack[((hsi*10+2231)*1+lsi)*1]), &(stack[((hsi*10+3023)*1+lsi)*1]), &(stack[((hsi*10+2314)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*10+2454)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*10+3220)*1+lsi)*1]), &(stack[((hsi*15+2241)*1+lsi)*1]), &(stack[((hsi*15+3230)*1+lsi)*1]), &(stack[((hsi*15+2324)*1+lsi)*1]), &(stack[((hsi*15+2025)*1+lsi)*1]), &(stack[((hsi*15+2721)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*15+3245)*1+lsi)*1]), &(stack[((hsi*21+2256)*1+lsi)*1]), &(stack[((hsi*21+3260)*1+lsi)*1]), &(stack[((hsi*21+2339)*1+lsi)*1]), &(stack[((hsi*21+2043)*1+lsi)*1]), &(stack[((hsi*21+2776)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3220)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*21+3532)*1+lsi)*1]), &(stack[((hsi*28+2277)*1+lsi)*1]), &(stack[((hsi*28+3302)*1+lsi)*1]), &(stack[((hsi*28+2360)*1+lsi)*1]), &(stack[((hsi*28+2071)*1+lsi)*1]), &(stack[((hsi*28+2854)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1503)*1+lsi)*1]),&(stack[((hsi*36+3220)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3824)*1+lsi)*1]), &(stack[((hsi*36+3220)*1+lsi)*1]), &(stack[((hsi*28+3553)*1+lsi)*1]), &(stack[((hsi*36+2584)*1+lsi)*1]), &(stack[((hsi*36+3415)*1+lsi)*1]), &(stack[((hsi*36+2620)*1+lsi)*1]), &(stack[((hsi*36+3451)*1+lsi)*1]), &(stack[((hsi*36+3103)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1458)*1+lsi)*1]),&(stack[((hsi*45+3824)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3532)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*3+3532)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+2424)*1+lsi)*1]), &(stack[((hsi*3+2040)*1+lsi)*1]), &(stack[((hsi*3+2222)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*3+3532)*1+lsi)*1]), &(stack[((hsi*6+2433)*1+lsi)*1]), &(stack[((hsi*6+2065)*1+lsi)*1]), &(stack[((hsi*6+2225)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3532)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*10+2454)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*10+2231)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2424)*1+lsi)*1]), &(stack[((hsi*15+3532)*1+lsi)*1]), &(stack[((hsi*10+2736)*1+lsi)*1]), &(stack[((hsi*15+2721)*1+lsi)*1]), &(stack[((hsi*15+2892)*1+lsi)*1]), &(stack[((hsi*15+2241)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*21+2424)*1+lsi)*1]), &(stack[((hsi*15+3532)*1+lsi)*1]), &(stack[((hsi*21+2776)*1+lsi)*1]), &(stack[((hsi*21+2907)*1+lsi)*1]), &(stack[((hsi*21+2256)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3532)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*21+2424)*1+lsi)*1]), &(stack[((hsi*28+2854)*1+lsi)*1]), &(stack[((hsi*28+2928)*1+lsi)*1]), &(stack[((hsi*28+2277)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1422)*1+lsi)*1]),&(stack[((hsi*36+3532)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2701)*1+lsi)*1]), &(stack[((hsi*36+3532)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*36+3103)*1+lsi)*1]), &(stack[((hsi*36+3139)*1+lsi)*1]), &(stack[((hsi*36+2584)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1377)*1+lsi)*1]),&(stack[((hsi*45+2701)*1+lsi)*1]),45);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2424)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*3+2424)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+2222)*1+lsi)*1]), &(stack[((hsi*3+2305)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*3+2424)*1+lsi)*1]), &(stack[((hsi*6+2225)*1+lsi)*1]), &(stack[((hsi*6+2308)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2424)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*6+2195)*1+lsi)*1]), &(stack[((hsi*10+2231)*1+lsi)*1]), &(stack[((hsi*10+2314)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2025)*1+lsi)*1]), &(stack[((hsi*15+2424)*1+lsi)*1]), &(stack[((hsi*10+2882)*1+lsi)*1]), &(stack[((hsi*15+2241)*1+lsi)*1]), &(stack[((hsi*15+2324)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*21+2025)*1+lsi)*1]), &(stack[((hsi*15+2424)*1+lsi)*1]), &(stack[((hsi*21+2256)*1+lsi)*1]), &(stack[((hsi*21+2339)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2222)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*21+2025)*1+lsi)*1]), &(stack[((hsi*28+2277)*1+lsi)*1]), &(stack[((hsi*28+2360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1341)*1+lsi)*1]),&(stack[((hsi*36+2222)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2305)*1+lsi)*1]), &(stack[((hsi*36+2222)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*36+2584)*1+lsi)*1]), &(stack[((hsi*36+2620)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1296)*1+lsi)*1]),&(stack[((hsi*45+2305)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1260)*1+lsi)*1]),&(stack[((hsi*36+2620)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2424)*1+lsi)*1]), &(stack[((hsi*15+2388)*1+lsi)*1]), &(stack[((hsi*10+2106)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*21+2507)*1+lsi)*1]), &(stack[((hsi*15+2131)*1+lsi)*1]), &(stack[((hsi*21+2424)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*21+2403)*1+lsi)*1]), &(stack[((hsi*15+2116)*1+lsi)*1]), &(stack[((hsi*21+2424)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2099)*1+lsi)*1]), &(stack[((hsi*28+2556)*1+lsi)*1]), &(stack[((hsi*21+2201)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3869)*1+lsi)*1]), &(stack[((hsi*28+2528)*1+lsi)*1]), &(stack[((hsi*21+2146)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3905)*1+lsi)*1]), &(stack[((hsi*36+2620)*1+lsi)*1]), &(stack[((hsi*28+2360)*1+lsi)*1]), &(stack[((hsi*36+3869)*1+lsi)*1]), &(stack[((hsi*36+2099)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1215)*1+lsi)*1]),&(stack[((hsi*45+3905)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1179)*1+lsi)*1]),&(stack[((hsi*36+3139)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2350)*1+lsi)*1]), &(stack[((hsi*21+2956)*1+lsi)*1]), &(stack[((hsi*15+2797)*1+lsi)*1]), &(stack[((hsi*21+2424)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2774)*1+lsi)*1]), &(stack[((hsi*28+3075)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*28+2350)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*28+2977)*1+lsi)*1]), &(stack[((hsi*21+2812)*1+lsi)*1]), &(stack[((hsi*28+2350)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3986)*1+lsi)*1]), &(stack[((hsi*36+3139)*1+lsi)*1]), &(stack[((hsi*28+2928)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*36+2774)*1+lsi)*1]), &(stack[((hsi*36+3869)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1134)*1+lsi)*1]),&(stack[((hsi*45+3986)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1098)*1+lsi)*1]),&(stack[((hsi*36+3451)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2910)*1+lsi)*1]), &(stack[((hsi*28+2167)*1+lsi)*1]), &(stack[((hsi*21+3281)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*28+2350)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+3256)*1+lsi)*1]), &(stack[((hsi*36+3451)*1+lsi)*1]), &(stack[((hsi*28+2071)*1+lsi)*1]), &(stack[((hsi*36+3869)*1+lsi)*1]), &(stack[((hsi*36+2910)*1+lsi)*1]), &(stack[((hsi*36+2099)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1053)*1+lsi)*1]),&(stack[((hsi*45+3256)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1017)*1+lsi)*1]),&(stack[((hsi*36+3617)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2053)*1+lsi)*1]), &(stack[((hsi*36+3617)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*36+2774)*1+lsi)*1]), &(stack[((hsi*36+2910)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+972)*1+lsi)*1]),&(stack[((hsi*45+2053)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+936)*1+lsi)*1]),&(stack[((hsi*36+3415)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4031)*1+lsi)*1]), &(stack[((hsi*36+3415)*1+lsi)*1]), &(stack[((hsi*28+3302)*1+lsi)*1]), &(stack[((hsi*36+2099)*1+lsi)*1]), &(stack[((hsi*36+3869)*1+lsi)*1]), &(stack[((hsi*36+2910)*1+lsi)*1]), &(stack[((hsi*36+2774)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+891)*1+lsi)*1]),&(stack[((hsi*45+4031)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+855)*1+lsi)*1]),&(stack[((hsi*36+3103)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4076)*1+lsi)*1]), &(stack[((hsi*36+3103)*1+lsi)*1]), &(stack[((hsi*28+2854)*1+lsi)*1]), &(stack[((hsi*36+2774)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*36+2099)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+810)*1+lsi)*1]),&(stack[((hsi*45+4076)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+774)*1+lsi)*1]),&(stack[((hsi*36+2584)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2810)*1+lsi)*1]), &(stack[((hsi*36+2584)*1+lsi)*1]), &(stack[((hsi*28+2277)*1+lsi)*1]), &(stack[((hsi*36+2099)*1+lsi)*1]), &(stack[((hsi*36+3869)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+729)*1+lsi)*1]),&(stack[((hsi*45+2810)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+693)*1+lsi)*1]),&(stack[((hsi*36+3869)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2746)*1+lsi)*1]), &(stack[((hsi*21+2424)*1+lsi)*1]), &(stack[((hsi*15+2388)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2258)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*21+2403)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2378)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*21+2507)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4121)*1+lsi)*1]), &(stack[((hsi*36+3869)*1+lsi)*1]), &(stack[((hsi*28+2528)*1+lsi)*1]), &(stack[((hsi*36+2378)*1+lsi)*1]), &(stack[((hsi*36+2258)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+648)*1+lsi)*1]),&(stack[((hsi*45+4121)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+612)*1+lsi)*1]),&(stack[((hsi*36+3950)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2507)*1+lsi)*1]), &(stack[((hsi*28+2350)*1+lsi)*1]), &(stack[((hsi*21+2956)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4166)*1+lsi)*1]), &(stack[((hsi*36+3950)*1+lsi)*1]), &(stack[((hsi*28+2977)*1+lsi)*1]), &(stack[((hsi*36+2507)*1+lsi)*1]), &(stack[((hsi*36+2378)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+567)*1+lsi)*1]),&(stack[((hsi*45+4166)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+531)*1+lsi)*1]),&(stack[((hsi*36+2910)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2946)*1+lsi)*1]), &(stack[((hsi*36+2910)*1+lsi)*1]), &(stack[((hsi*28+2167)*1+lsi)*1]), &(stack[((hsi*36+2378)*1+lsi)*1]), &(stack[((hsi*36+2258)*1+lsi)*1]), &(stack[((hsi*36+2507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+486)*1+lsi)*1]),&(stack[((hsi*45+2946)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+450)*1+lsi)*1]),&(stack[((hsi*36+2774)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2135)*1+lsi)*1]), &(stack[((hsi*36+2774)*1+lsi)*1]), &(stack[((hsi*28+3075)*1+lsi)*1]), &(stack[((hsi*36+2507)*1+lsi)*1]), &(stack[((hsi*36+2258)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+405)*1+lsi)*1]),&(stack[((hsi*45+2135)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+369)*1+lsi)*1]),&(stack[((hsi*36+2099)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2991)*1+lsi)*1]), &(stack[((hsi*36+2099)*1+lsi)*1]), &(stack[((hsi*28+2556)*1+lsi)*1]), &(stack[((hsi*36+2258)*1+lsi)*1]), &(stack[((hsi*36+2378)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+324)*1+lsi)*1]),&(stack[((hsi*45+2991)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+288)*1+lsi)*1]),&(stack[((hsi*36+2378)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2180)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]), &(stack[((hsi*21+2424)*1+lsi)*1]));
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2414)*1+lsi)*1]), &(stack[((hsi*36+2378)*1+lsi)*1]), &(stack[((hsi*28+2025)*1+lsi)*1]), &(stack[((hsi*36+2180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+243)*1+lsi)*1]),&(stack[((hsi*45+2414)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+207)*1+lsi)*1]),&(stack[((hsi*36+2507)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4211)*1+lsi)*1]), &(stack[((hsi*36+2507)*1+lsi)*1]), &(stack[((hsi*28+2350)*1+lsi)*1]), &(stack[((hsi*36+2180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+162)*1+lsi)*1]),&(stack[((hsi*45+4211)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+126)*1+lsi)*1]),&(stack[((hsi*36+2258)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+4256)*1+lsi)*1]), &(stack[((hsi*36+2258)*1+lsi)*1]), &(stack[((hsi*28+2882)*1+lsi)*1]), &(stack[((hsi*36+2180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+81)*1+lsi)*1]),&(stack[((hsi*45+4256)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+2180)*1+lsi)*1]),36);
OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*45+2855)*1+lsi)*1]), &(stack[((hsi*36+2180)*1+lsi)*1]), &(stack[((hsi*28+2746)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+2855)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2025 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
