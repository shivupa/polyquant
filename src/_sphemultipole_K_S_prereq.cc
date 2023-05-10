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
void _sphemultipole_K_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+903)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+906)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+906)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+915)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+915)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+924)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+915)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*6+924)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+940)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+946)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]), &(stack[((hsi*6+940)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+956)*1+lsi)*1]), &(stack[((hsi*6+924)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]), &(stack[((hsi*6+940)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+966)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*10+956)*1+lsi)*1]), &(stack[((hsi*10+946)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+981)*1+lsi)*1]), &(stack[((hsi*6+940)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+991)*1+lsi)*1]), &(stack[((hsi*10+946)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*10+981)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*10+956)*1+lsi)*1]), &(stack[((hsi*6+924)*1+lsi)*1]), &(stack[((hsi*10+981)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*15+966)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*15+991)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1042)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*3+1042)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+903)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*3+1042)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*6+924)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1061)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*10+946)*1+lsi)*1]), &(stack[((hsi*10+956)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1076)*1+lsi)*1]), &(stack[((hsi*15+1061)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*15+991)*1+lsi)*1]), &(stack[((hsi*15+1006)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1097)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1100)*1+lsi)*1]), &(stack[((hsi*3+1097)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+1042)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1106)*1+lsi)*1]), &(stack[((hsi*6+1100)*1+lsi)*1]), &(stack[((hsi*3+1097)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1116)*1+lsi)*1]), &(stack[((hsi*10+1106)*1+lsi)*1]), &(stack[((hsi*6+1100)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1131)*1+lsi)*1]), &(stack[((hsi*15+1116)*1+lsi)*1]), &(stack[((hsi*10+1106)*1+lsi)*1]), &(stack[((hsi*15+1061)*1+lsi)*1]), &(stack[((hsi*15+966)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1152)*1+lsi)*1]), &(stack[((hsi*21+1131)*1+lsi)*1]), &(stack[((hsi*15+1116)*1+lsi)*1]), &(stack[((hsi*21+1076)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1180)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1183)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+1042)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1189)*1+lsi)*1]), &(stack[((hsi*6+1183)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1199)*1+lsi)*1]), &(stack[((hsi*10+1189)*1+lsi)*1]), &(stack[((hsi*6+1183)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1214)*1+lsi)*1]), &(stack[((hsi*15+1199)*1+lsi)*1]), &(stack[((hsi*10+1189)*1+lsi)*1]), &(stack[((hsi*15+966)*1+lsi)*1]), &(stack[((hsi*15+1061)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1235)*1+lsi)*1]), &(stack[((hsi*21+1214)*1+lsi)*1]), &(stack[((hsi*15+1199)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*21+1076)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1263)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1266)*1+lsi)*1]), &(stack[((hsi*3+1263)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*3+1097)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1272)*1+lsi)*1]), &(stack[((hsi*6+1266)*1+lsi)*1]), &(stack[((hsi*3+1263)*1+lsi)*1]), &(stack[((hsi*6+1183)*1+lsi)*1]), &(stack[((hsi*6+1100)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1282)*1+lsi)*1]), &(stack[((hsi*10+1272)*1+lsi)*1]), &(stack[((hsi*6+1266)*1+lsi)*1]), &(stack[((hsi*10+1189)*1+lsi)*1]), &(stack[((hsi*10+1106)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1297)*1+lsi)*1]), &(stack[((hsi*15+1282)*1+lsi)*1]), &(stack[((hsi*10+1272)*1+lsi)*1]), &(stack[((hsi*15+1199)*1+lsi)*1]), &(stack[((hsi*15+1116)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1318)*1+lsi)*1]), &(stack[((hsi*21+1297)*1+lsi)*1]), &(stack[((hsi*15+1282)*1+lsi)*1]), &(stack[((hsi*21+1214)*1+lsi)*1]), &(stack[((hsi*21+1131)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1346)*1+lsi)*1]), &(stack[((hsi*28+1318)*1+lsi)*1]), &(stack[((hsi*21+1297)*1+lsi)*1]), &(stack[((hsi*28+1235)*1+lsi)*1]), &(stack[((hsi*28+1152)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+864)*1+lsi)*1]),&(stack[((hsi*36+1346)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1263)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1266)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1269)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1272)*1+lsi)*1]), &(stack[((hsi*3+1263)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+1269)*1+lsi)*1]), &(stack[((hsi*3+1266)*1+lsi)*1]), &(stack[((hsi*3+1042)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1278)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1281)*1+lsi)*1]), &(stack[((hsi*3+1266)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+1278)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*3+1269)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+1278)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*6+1272)*1+lsi)*1]), &(stack[((hsi*3+1263)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*6+1281)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+915)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1309)*1+lsi)*1]), &(stack[((hsi*6+1281)*1+lsi)*1]), &(stack[((hsi*3+1266)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*6+924)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1319)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*3+1269)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1329)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*6+1272)*1+lsi)*1]), &(stack[((hsi*10+1319)*1+lsi)*1]), &(stack[((hsi*10+1309)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1382)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]), &(stack[((hsi*6+940)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1392)*1+lsi)*1]), &(stack[((hsi*10+1309)*1+lsi)*1]), &(stack[((hsi*6+1281)*1+lsi)*1]), &(stack[((hsi*10+1382)*1+lsi)*1]), &(stack[((hsi*10+956)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1407)*1+lsi)*1]), &(stack[((hsi*10+1319)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*10+1382)*1+lsi)*1]), &(stack[((hsi*10+946)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1422)*1+lsi)*1]), &(stack[((hsi*15+1329)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*15+1407)*1+lsi)*1]), &(stack[((hsi*15+1392)*1+lsi)*1]), &(stack[((hsi*15+1061)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1443)*1+lsi)*1]), &(stack[((hsi*10+1382)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*10+981)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1458)*1+lsi)*1]), &(stack[((hsi*15+1392)*1+lsi)*1]), &(stack[((hsi*10+1309)*1+lsi)*1]), &(stack[((hsi*15+1443)*1+lsi)*1]), &(stack[((hsi*15+1006)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1479)*1+lsi)*1]), &(stack[((hsi*15+1407)*1+lsi)*1]), &(stack[((hsi*10+1319)*1+lsi)*1]), &(stack[((hsi*15+1443)*1+lsi)*1]), &(stack[((hsi*15+991)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*21+1422)*1+lsi)*1]), &(stack[((hsi*15+1329)*1+lsi)*1]), &(stack[((hsi*21+1479)*1+lsi)*1]), &(stack[((hsi*21+1458)*1+lsi)*1]), &(stack[((hsi*21+1076)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+915)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1528)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+1266)*1+lsi)*1]), &(stack[((hsi*3+1269)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1534)*1+lsi)*1]), &(stack[((hsi*6+1528)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*6+1281)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1544)*1+lsi)*1]), &(stack[((hsi*10+1534)*1+lsi)*1]), &(stack[((hsi*6+1528)*1+lsi)*1]), &(stack[((hsi*10+1309)*1+lsi)*1]), &(stack[((hsi*10+1319)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1559)*1+lsi)*1]), &(stack[((hsi*15+1544)*1+lsi)*1]), &(stack[((hsi*10+1534)*1+lsi)*1]), &(stack[((hsi*15+1392)*1+lsi)*1]), &(stack[((hsi*15+1407)*1+lsi)*1]), &(stack[((hsi*15+966)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1580)*1+lsi)*1]), &(stack[((hsi*21+1559)*1+lsi)*1]), &(stack[((hsi*15+1544)*1+lsi)*1]), &(stack[((hsi*21+1458)*1+lsi)*1]), &(stack[((hsi*21+1479)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1608)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1611)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*3+1263)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1617)*1+lsi)*1]), &(stack[((hsi*6+1611)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]), &(stack[((hsi*6+1528)*1+lsi)*1]), &(stack[((hsi*6+1272)*1+lsi)*1]), &(stack[((hsi*6+1183)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1627)*1+lsi)*1]), &(stack[((hsi*10+1617)*1+lsi)*1]), &(stack[((hsi*6+1611)*1+lsi)*1]), &(stack[((hsi*10+1534)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*10+1189)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1642)*1+lsi)*1]), &(stack[((hsi*15+1627)*1+lsi)*1]), &(stack[((hsi*10+1617)*1+lsi)*1]), &(stack[((hsi*15+1544)*1+lsi)*1]), &(stack[((hsi*15+1329)*1+lsi)*1]), &(stack[((hsi*15+1199)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1663)*1+lsi)*1]), &(stack[((hsi*21+1642)*1+lsi)*1]), &(stack[((hsi*15+1627)*1+lsi)*1]), &(stack[((hsi*21+1559)*1+lsi)*1]), &(stack[((hsi*21+1422)*1+lsi)*1]), &(stack[((hsi*21+1214)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1691)*1+lsi)*1]), &(stack[((hsi*28+1663)*1+lsi)*1]), &(stack[((hsi*21+1642)*1+lsi)*1]), &(stack[((hsi*28+1580)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*28+1235)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+828)*1+lsi)*1]),&(stack[((hsi*36+1691)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1608)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1614)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+1042)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(stack[((hsi*3+1269)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+906)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1626)*1+lsi)*1]), &(stack[((hsi*6+1614)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(stack[((hsi*6+924)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1646)*1+lsi)*1]), &(stack[((hsi*10+1626)*1+lsi)*1]), &(stack[((hsi*6+1614)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*10+1319)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1661)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*10+956)*1+lsi)*1]), &(stack[((hsi*10+946)*1+lsi)*1]), &(stack[((hsi*10+1382)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*15+1646)*1+lsi)*1]), &(stack[((hsi*10+1626)*1+lsi)*1]), &(stack[((hsi*15+1061)*1+lsi)*1]), &(stack[((hsi*15+966)*1+lsi)*1]), &(stack[((hsi*15+1661)*1+lsi)*1]), &(stack[((hsi*15+1407)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1748)*1+lsi)*1]), &(stack[((hsi*15+1661)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*15+991)*1+lsi)*1]), &(stack[((hsi*15+1443)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1769)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*15+1646)*1+lsi)*1]), &(stack[((hsi*21+1076)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*21+1748)*1+lsi)*1]), &(stack[((hsi*21+1479)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1278)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(stack[((hsi*3+1042)*1+lsi)*1]), &(stack[((hsi*3+1266)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1676)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*6+1281)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*10+1676)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*10+1309)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+918)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*10+1676)*1+lsi)*1]), &(stack[((hsi*15+966)*1+lsi)*1]), &(stack[((hsi*15+1661)*1+lsi)*1]), &(stack[((hsi*15+1061)*1+lsi)*1]), &(stack[((hsi*15+1392)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1797)*1+lsi)*1]), &(stack[((hsi*21+918)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*21+1748)*1+lsi)*1]), &(stack[((hsi*21+1076)*1+lsi)*1]), &(stack[((hsi*21+1458)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1042)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*3+1042)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]), &(stack[((hsi*3+1097)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*3+1042)*1+lsi)*1]), &(stack[((hsi*6+1183)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*6+1100)*1+lsi)*1]), &(stack[((hsi*6+1614)*1+lsi)*1]), &(stack[((hsi*6+1528)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1825)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*6+1045)*1+lsi)*1]), &(stack[((hsi*10+1189)*1+lsi)*1]), &(stack[((hsi*10+1676)*1+lsi)*1]), &(stack[((hsi*10+1106)*1+lsi)*1]), &(stack[((hsi*10+1626)*1+lsi)*1]), &(stack[((hsi*10+1534)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1840)*1+lsi)*1]), &(stack[((hsi*15+1825)*1+lsi)*1]), &(stack[((hsi*10+1051)*1+lsi)*1]), &(stack[((hsi*15+1199)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*15+1116)*1+lsi)*1]), &(stack[((hsi*15+1646)*1+lsi)*1]), &(stack[((hsi*15+1544)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1861)*1+lsi)*1]), &(stack[((hsi*21+1840)*1+lsi)*1]), &(stack[((hsi*15+1825)*1+lsi)*1]), &(stack[((hsi*21+1214)*1+lsi)*1]), &(stack[((hsi*21+918)*1+lsi)*1]), &(stack[((hsi*21+1131)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*21+1559)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1889)*1+lsi)*1]), &(stack[((hsi*28+1861)*1+lsi)*1]), &(stack[((hsi*21+1840)*1+lsi)*1]), &(stack[((hsi*28+1235)*1+lsi)*1]), &(stack[((hsi*28+1797)*1+lsi)*1]), &(stack[((hsi*28+1152)*1+lsi)*1]), &(stack[((hsi*28+1769)*1+lsi)*1]), &(stack[((hsi*28+1580)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+792)*1+lsi)*1]),&(stack[((hsi*36+1889)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1825)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1828)*1+lsi)*1]), &(stack[((hsi*3+1825)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+1266)*1+lsi)*1]), &(stack[((hsi*3+1269)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1834)*1+lsi)*1]), &(stack[((hsi*6+1828)*1+lsi)*1]), &(stack[((hsi*3+1825)*1+lsi)*1]), &(stack[((hsi*6+1281)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1844)*1+lsi)*1]), &(stack[((hsi*10+1834)*1+lsi)*1]), &(stack[((hsi*6+1828)*1+lsi)*1]), &(stack[((hsi*10+1309)*1+lsi)*1]), &(stack[((hsi*10+1319)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1859)*1+lsi)*1]), &(stack[((hsi*15+1844)*1+lsi)*1]), &(stack[((hsi*10+1834)*1+lsi)*1]), &(stack[((hsi*15+1392)*1+lsi)*1]), &(stack[((hsi*15+1407)*1+lsi)*1]), &(stack[((hsi*15+1661)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*21+1859)*1+lsi)*1]), &(stack[((hsi*15+1844)*1+lsi)*1]), &(stack[((hsi*21+1458)*1+lsi)*1]), &(stack[((hsi*21+1479)*1+lsi)*1]), &(stack[((hsi*21+1748)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*3+1825)*1+lsi)*1]), &(stack[((hsi*3+1263)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(stack[((hsi*6+1528)*1+lsi)*1]), &(stack[((hsi*6+1828)*1+lsi)*1]), &(stack[((hsi*6+1272)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1309)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*10+1534)*1+lsi)*1]), &(stack[((hsi*10+1834)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*10+1676)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1953)*1+lsi)*1]), &(stack[((hsi*15+1309)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*15+1544)*1+lsi)*1]), &(stack[((hsi*15+1844)*1+lsi)*1]), &(stack[((hsi*15+1329)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1974)*1+lsi)*1]), &(stack[((hsi*21+1953)*1+lsi)*1]), &(stack[((hsi*15+1309)*1+lsi)*1]), &(stack[((hsi*21+1559)*1+lsi)*1]), &(stack[((hsi*21+1859)*1+lsi)*1]), &(stack[((hsi*21+1422)*1+lsi)*1]), &(stack[((hsi*21+918)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2002)*1+lsi)*1]), &(stack[((hsi*28+1974)*1+lsi)*1]), &(stack[((hsi*21+1953)*1+lsi)*1]), &(stack[((hsi*28+1580)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*28+1797)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+756)*1+lsi)*1]),&(stack[((hsi*36+2002)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+1278)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]), &(stack[((hsi*3+1825)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*6+1614)*1+lsi)*1]), &(stack[((hsi*6+1828)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1953)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*10+1676)*1+lsi)*1]), &(stack[((hsi*10+1626)*1+lsi)*1]), &(stack[((hsi*10+1834)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1968)*1+lsi)*1]), &(stack[((hsi*15+1953)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*15+1646)*1+lsi)*1]), &(stack[((hsi*15+1844)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1968)*1+lsi)*1]), &(stack[((hsi*15+1953)*1+lsi)*1]), &(stack[((hsi*21+918)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*21+1859)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2066)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1968)*1+lsi)*1]), &(stack[((hsi*28+1797)*1+lsi)*1]), &(stack[((hsi*28+1769)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+720)*1+lsi)*1]),&(stack[((hsi*36+2066)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+1263)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*3+1825)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(stack[((hsi*6+1272)*1+lsi)*1]), &(stack[((hsi*6+1528)*1+lsi)*1]), &(stack[((hsi*6+1828)*1+lsi)*1]), &(stack[((hsi*6+1614)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1953)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*10+1534)*1+lsi)*1]), &(stack[((hsi*10+1834)*1+lsi)*1]), &(stack[((hsi*10+1626)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1968)*1+lsi)*1]), &(stack[((hsi*15+1953)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*15+1329)*1+lsi)*1]), &(stack[((hsi*15+1544)*1+lsi)*1]), &(stack[((hsi*15+1844)*1+lsi)*1]), &(stack[((hsi*15+1646)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1968)*1+lsi)*1]), &(stack[((hsi*15+1953)*1+lsi)*1]), &(stack[((hsi*21+1422)*1+lsi)*1]), &(stack[((hsi*21+1559)*1+lsi)*1]), &(stack[((hsi*21+1859)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2102)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1968)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*28+1580)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*28+1769)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+684)*1+lsi)*1]),&(stack[((hsi*36+2102)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+1097)*1+lsi)*1]), &(stack[((hsi*3+1608)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*3+1278)*1+lsi)*1]), &(stack[((hsi*3+1263)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*3+1611)*1+lsi)*1]), &(stack[((hsi*6+1100)*1+lsi)*1]), &(stack[((hsi*6+1614)*1+lsi)*1]), &(stack[((hsi*6+1183)*1+lsi)*1]), &(stack[((hsi*6+1303)*1+lsi)*1]), &(stack[((hsi*6+1272)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1278)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*6+1620)*1+lsi)*1]), &(stack[((hsi*10+1106)*1+lsi)*1]), &(stack[((hsi*10+1626)*1+lsi)*1]), &(stack[((hsi*10+1189)*1+lsi)*1]), &(stack[((hsi*10+1676)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1953)*1+lsi)*1]), &(stack[((hsi*15+1278)*1+lsi)*1]), &(stack[((hsi*10+1636)*1+lsi)*1]), &(stack[((hsi*15+1116)*1+lsi)*1]), &(stack[((hsi*15+1646)*1+lsi)*1]), &(stack[((hsi*15+1199)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*15+1329)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1953)*1+lsi)*1]), &(stack[((hsi*15+1278)*1+lsi)*1]), &(stack[((hsi*21+1131)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*21+1214)*1+lsi)*1]), &(stack[((hsi*21+918)*1+lsi)*1]), &(stack[((hsi*21+1422)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1608)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1953)*1+lsi)*1]), &(stack[((hsi*28+1152)*1+lsi)*1]), &(stack[((hsi*28+1769)*1+lsi)*1]), &(stack[((hsi*28+1235)*1+lsi)*1]), &(stack[((hsi*28+1797)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+648)*1+lsi)*1]),&(stack[((hsi*36+1608)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1953)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1266)*1+lsi)*1]), &(stack[((hsi*3+1953)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+1263)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*3+1097)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1956)*1+lsi)*1]), &(stack[((hsi*6+1266)*1+lsi)*1]), &(stack[((hsi*3+1953)*1+lsi)*1]), &(stack[((hsi*6+1272)*1+lsi)*1]), &(stack[((hsi*6+1528)*1+lsi)*1]), &(stack[((hsi*6+1100)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*10+1956)*1+lsi)*1]), &(stack[((hsi*6+1266)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*10+1534)*1+lsi)*1]), &(stack[((hsi*10+1106)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*10+1956)*1+lsi)*1]), &(stack[((hsi*15+1329)*1+lsi)*1]), &(stack[((hsi*15+1544)*1+lsi)*1]), &(stack[((hsi*15+1116)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*21+1422)*1+lsi)*1]), &(stack[((hsi*21+1559)*1+lsi)*1]), &(stack[((hsi*21+1131)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1284)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*28+1580)*1+lsi)*1]), &(stack[((hsi*28+1152)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+612)*1+lsi)*1]),&(stack[((hsi*36+1284)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1953)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1956)*1+lsi)*1]), &(stack[((hsi*3+1953)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+1097)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1962)*1+lsi)*1]), &(stack[((hsi*6+1956)*1+lsi)*1]), &(stack[((hsi*3+1953)*1+lsi)*1]), &(stack[((hsi*6+1100)*1+lsi)*1]), &(stack[((hsi*6+1183)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*10+1962)*1+lsi)*1]), &(stack[((hsi*6+1956)*1+lsi)*1]), &(stack[((hsi*10+1106)*1+lsi)*1]), &(stack[((hsi*10+1189)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*10+1962)*1+lsi)*1]), &(stack[((hsi*15+1116)*1+lsi)*1]), &(stack[((hsi*15+1199)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*21+1131)*1+lsi)*1]), &(stack[((hsi*21+1214)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1953)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*28+1152)*1+lsi)*1]), &(stack[((hsi*28+1235)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+576)*1+lsi)*1]),&(stack[((hsi*36+1953)*1+lsi)*1]),36);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*10+981)*1+lsi)*1]), &(stack[((hsi*6+940)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*10+956)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1825)*1+lsi)*1]), &(stack[((hsi*15+991)*1+lsi)*1]), &(stack[((hsi*10+946)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1076)*1+lsi)*1]), &(stack[((hsi*15+1061)*1+lsi)*1]), &(stack[((hsi*21+1825)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*15+966)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*21+1825)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+939)*1+lsi)*1]), &(stack[((hsi*28+1235)*1+lsi)*1]), &(stack[((hsi*21+1214)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+540)*1+lsi)*1]),&(stack[((hsi*36+939)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1180)*1+lsi)*1]), &(stack[((hsi*15+1443)*1+lsi)*1]), &(stack[((hsi*10+1382)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1201)*1+lsi)*1]), &(stack[((hsi*21+1479)*1+lsi)*1]), &(stack[((hsi*15+1407)*1+lsi)*1]), &(stack[((hsi*21+1180)*1+lsi)*1]), &(stack[((hsi*21+1825)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1042)*1+lsi)*1]), &(stack[((hsi*21+1458)*1+lsi)*1]), &(stack[((hsi*15+1392)*1+lsi)*1]), &(stack[((hsi*21+1180)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1382)*1+lsi)*1]), &(stack[((hsi*28+1580)*1+lsi)*1]), &(stack[((hsi*21+1559)*1+lsi)*1]), &(stack[((hsi*28+1042)*1+lsi)*1]), &(stack[((hsi*28+1201)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+504)*1+lsi)*1]),&(stack[((hsi*36+1382)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1528)*1+lsi)*1]), &(stack[((hsi*21+1748)*1+lsi)*1]), &(stack[((hsi*15+1661)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*21+1825)*1+lsi)*1]), &(stack[((hsi*21+1180)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1556)*1+lsi)*1]), &(stack[((hsi*28+1797)*1+lsi)*1]), &(stack[((hsi*21+918)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*28+1528)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*28+1042)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+468)*1+lsi)*1]),&(stack[((hsi*36+1556)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+900)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*21+1859)*1+lsi)*1]), &(stack[((hsi*28+1042)*1+lsi)*1]), &(stack[((hsi*28+1201)*1+lsi)*1]), &(stack[((hsi*28+1528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+432)*1+lsi)*1]),&(stack[((hsi*36+900)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1846)*1+lsi)*1]), &(stack[((hsi*28+1769)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*28+1528)*1+lsi)*1]), &(stack[((hsi*28+1201)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+396)*1+lsi)*1]),&(stack[((hsi*36+1846)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1769)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*21+1422)*1+lsi)*1]), &(stack[((hsi*28+1201)*1+lsi)*1]), &(stack[((hsi*28+1042)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+360)*1+lsi)*1]),&(stack[((hsi*36+1769)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2138)*1+lsi)*1]), &(stack[((hsi*28+1152)*1+lsi)*1]), &(stack[((hsi*21+1131)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+324)*1+lsi)*1]),&(stack[((hsi*36+2138)*1+lsi)*1]),36);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]), &(stack[((hsi*10+981)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*21+1825)*1+lsi)*1]), &(stack[((hsi*15+991)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1125)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+288)*1+lsi)*1]),&(stack[((hsi*36+1125)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*21+1180)*1+lsi)*1]), &(stack[((hsi*15+1443)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+975)*1+lsi)*1]), &(stack[((hsi*28+1042)*1+lsi)*1]), &(stack[((hsi*21+1458)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+252)*1+lsi)*1]),&(stack[((hsi*36+975)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1011)*1+lsi)*1]), &(stack[((hsi*28+1528)*1+lsi)*1]), &(stack[((hsi*21+1748)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+216)*1+lsi)*1]),&(stack[((hsi*36+1011)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1418)*1+lsi)*1]), &(stack[((hsi*28+1201)*1+lsi)*1]), &(stack[((hsi*21+1479)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+180)*1+lsi)*1]),&(stack[((hsi*36+1418)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1201)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1076)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+144)*1+lsi)*1]),&(stack[((hsi*36+1201)*1+lsi)*1]),36);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]), &(stack[((hsi*15+1676)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1047)*1+lsi)*1]), &(stack[((hsi*28+1925)*1+lsi)*1]), &(stack[((hsi*21+1263)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+108)*1+lsi)*1]),&(stack[((hsi*36+1047)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1644)*1+lsi)*1]), &(stack[((hsi*28+1097)*1+lsi)*1]), &(stack[((hsi*21+1180)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+72)*1+lsi)*1]),&(stack[((hsi*36+1644)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1237)*1+lsi)*1]), &(stack[((hsi*28+1500)*1+lsi)*1]), &(stack[((hsi*21+1825)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+36)*1+lsi)*1]),&(stack[((hsi*36+1237)*1+lsi)*1]),36);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1454)*1+lsi)*1]), &(stack[((hsi*28+2038)*1+lsi)*1]), &(stack[((hsi*21+1727)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+1454)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 900 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
