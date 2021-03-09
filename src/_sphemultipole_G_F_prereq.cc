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
void _sphemultipole_G_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2503)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2506)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+2506)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2515)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+2503)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2524)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2527)*1+lsi)*1]), &(stack[((hsi*3+2524)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2533)*1+lsi)*1]), &(stack[((hsi*6+2527)*1+lsi)*1]), &(stack[((hsi*3+2524)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2543)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2546)*1+lsi)*1]), &(stack[((hsi*3+2543)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2552)*1+lsi)*1]), &(stack[((hsi*6+2546)*1+lsi)*1]), &(stack[((hsi*3+2543)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2562)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+2543)*1+lsi)*1]), &(stack[((hsi*3+2524)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2571)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(stack[((hsi*6+2546)*1+lsi)*1]), &(stack[((hsi*6+2527)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2581)*1+lsi)*1]), &(stack[((hsi*10+2571)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*10+2552)*1+lsi)*1]), &(stack[((hsi*10+2533)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2485)*1+lsi)*1]),&(stack[((hsi*15+2581)*1+lsi)*1]),15);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2562)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+2562)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2596)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+2562)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2602)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+2596)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2612)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*6+2596)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2622)*1+lsi)*1]), &(stack[((hsi*10+2533)*1+lsi)*1]), &(stack[((hsi*6+2527)*1+lsi)*1]), &(stack[((hsi*10+2612)*1+lsi)*1]), &(stack[((hsi*10+2602)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2637)*1+lsi)*1]), &(stack[((hsi*10+2552)*1+lsi)*1]), &(stack[((hsi*6+2546)*1+lsi)*1]), &(stack[((hsi*10+2602)*1+lsi)*1]), &(stack[((hsi*10+2612)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2652)*1+lsi)*1]), &(stack[((hsi*15+2581)*1+lsi)*1]), &(stack[((hsi*10+2571)*1+lsi)*1]), &(stack[((hsi*15+2637)*1+lsi)*1]), &(stack[((hsi*15+2622)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2464)*1+lsi)*1]),&(stack[((hsi*21+2652)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2571)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2673)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]), &(stack[((hsi*6+2571)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2683)*1+lsi)*1]), &(stack[((hsi*6+2596)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]), &(stack[((hsi*6+2571)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2693)*1+lsi)*1]), &(stack[((hsi*10+2602)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*10+2683)*1+lsi)*1]), &(stack[((hsi*10+2673)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2708)*1+lsi)*1]), &(stack[((hsi*10+2612)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*10+2673)*1+lsi)*1]), &(stack[((hsi*10+2683)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*15+2622)*1+lsi)*1]), &(stack[((hsi*10+2533)*1+lsi)*1]), &(stack[((hsi*15+2708)*1+lsi)*1]), &(stack[((hsi*15+2693)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2744)*1+lsi)*1]), &(stack[((hsi*15+2637)*1+lsi)*1]), &(stack[((hsi*10+2552)*1+lsi)*1]), &(stack[((hsi*15+2693)*1+lsi)*1]), &(stack[((hsi*15+2708)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2765)*1+lsi)*1]), &(stack[((hsi*21+2652)*1+lsi)*1]), &(stack[((hsi*15+2581)*1+lsi)*1]), &(stack[((hsi*21+2744)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2436)*1+lsi)*1]),&(stack[((hsi*28+2765)*1+lsi)*1]),28);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2793)*1+lsi)*1]), &(stack[((hsi*6+2571)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2803)*1+lsi)*1]), &(stack[((hsi*10+2673)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*10+2793)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2818)*1+lsi)*1]), &(stack[((hsi*10+2683)*1+lsi)*1]), &(stack[((hsi*6+2596)*1+lsi)*1]), &(stack[((hsi*10+2793)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*15+2693)*1+lsi)*1]), &(stack[((hsi*10+2602)*1+lsi)*1]), &(stack[((hsi*15+2818)*1+lsi)*1]), &(stack[((hsi*15+2803)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2854)*1+lsi)*1]), &(stack[((hsi*15+2708)*1+lsi)*1]), &(stack[((hsi*10+2612)*1+lsi)*1]), &(stack[((hsi*15+2803)*1+lsi)*1]), &(stack[((hsi*15+2818)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2875)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*15+2622)*1+lsi)*1]), &(stack[((hsi*21+2854)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2903)*1+lsi)*1]), &(stack[((hsi*21+2744)*1+lsi)*1]), &(stack[((hsi*15+2637)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*21+2854)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+2931)*1+lsi)*1]), &(stack[((hsi*28+2765)*1+lsi)*1]), &(stack[((hsi*21+2652)*1+lsi)*1]), &(stack[((hsi*28+2903)*1+lsi)*1]), &(stack[((hsi*28+2875)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2400)*1+lsi)*1]),&(stack[((hsi*36+2931)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2577)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2967)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2970)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2973)*1+lsi)*1]), &(stack[((hsi*3+2577)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+2970)*1+lsi)*1]), &(stack[((hsi*3+2967)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2979)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2982)*1+lsi)*1]), &(stack[((hsi*3+2967)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+2979)*1+lsi)*1]), &(stack[((hsi*3+2506)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2988)*1+lsi)*1]), &(stack[((hsi*3+2970)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+2979)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2994)*1+lsi)*1]), &(stack[((hsi*6+2973)*1+lsi)*1]), &(stack[((hsi*3+2577)*1+lsi)*1]), &(stack[((hsi*6+2988)*1+lsi)*1]), &(stack[((hsi*6+2982)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3004)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3007)*1+lsi)*1]), &(stack[((hsi*3+3004)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+2967)*1+lsi)*1]), &(stack[((hsi*3+2970)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3013)*1+lsi)*1]), &(stack[((hsi*6+3007)*1+lsi)*1]), &(stack[((hsi*3+3004)*1+lsi)*1]), &(stack[((hsi*6+2982)*1+lsi)*1]), &(stack[((hsi*6+2988)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3023)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3026)*1+lsi)*1]), &(stack[((hsi*3+3023)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+3004)*1+lsi)*1]), &(stack[((hsi*3+2577)*1+lsi)*1]), &(stack[((hsi*3+2543)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3032)*1+lsi)*1]), &(stack[((hsi*6+3026)*1+lsi)*1]), &(stack[((hsi*3+3023)*1+lsi)*1]), &(stack[((hsi*6+3007)*1+lsi)*1]), &(stack[((hsi*6+2973)*1+lsi)*1]), &(stack[((hsi*6+2546)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3042)*1+lsi)*1]), &(stack[((hsi*10+3032)*1+lsi)*1]), &(stack[((hsi*6+3026)*1+lsi)*1]), &(stack[((hsi*10+3013)*1+lsi)*1]), &(stack[((hsi*10+2994)*1+lsi)*1]), &(stack[((hsi*10+2552)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2385)*1+lsi)*1]),&(stack[((hsi*15+3042)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+2562)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+2982)*1+lsi)*1]), &(stack[((hsi*3+2967)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*6+2596)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3067)*1+lsi)*1]), &(stack[((hsi*6+2988)*1+lsi)*1]), &(stack[((hsi*3+2970)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3077)*1+lsi)*1]), &(stack[((hsi*10+2994)*1+lsi)*1]), &(stack[((hsi*6+2973)*1+lsi)*1]), &(stack[((hsi*10+3067)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*10+2612)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3092)*1+lsi)*1]), &(stack[((hsi*10+3013)*1+lsi)*1]), &(stack[((hsi*6+3007)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*10+3067)*1+lsi)*1]), &(stack[((hsi*10+2602)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3107)*1+lsi)*1]), &(stack[((hsi*15+3042)*1+lsi)*1]), &(stack[((hsi*10+3032)*1+lsi)*1]), &(stack[((hsi*15+3092)*1+lsi)*1]), &(stack[((hsi*15+3077)*1+lsi)*1]), &(stack[((hsi*15+2637)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2364)*1+lsi)*1]),&(stack[((hsi*21+3107)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3029)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]), &(stack[((hsi*6+2571)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3128)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+2982)*1+lsi)*1]), &(stack[((hsi*10+3029)*1+lsi)*1]), &(stack[((hsi*10+2683)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3143)*1+lsi)*1]), &(stack[((hsi*10+3067)*1+lsi)*1]), &(stack[((hsi*6+2988)*1+lsi)*1]), &(stack[((hsi*10+3029)*1+lsi)*1]), &(stack[((hsi*10+2673)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3158)*1+lsi)*1]), &(stack[((hsi*15+3077)*1+lsi)*1]), &(stack[((hsi*10+2994)*1+lsi)*1]), &(stack[((hsi*15+3143)*1+lsi)*1]), &(stack[((hsi*15+3128)*1+lsi)*1]), &(stack[((hsi*15+2708)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3179)*1+lsi)*1]), &(stack[((hsi*15+3092)*1+lsi)*1]), &(stack[((hsi*10+3013)*1+lsi)*1]), &(stack[((hsi*15+3128)*1+lsi)*1]), &(stack[((hsi*15+3143)*1+lsi)*1]), &(stack[((hsi*15+2693)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3200)*1+lsi)*1]), &(stack[((hsi*21+3107)*1+lsi)*1]), &(stack[((hsi*15+3042)*1+lsi)*1]), &(stack[((hsi*21+3179)*1+lsi)*1]), &(stack[((hsi*21+3158)*1+lsi)*1]), &(stack[((hsi*21+2744)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2336)*1+lsi)*1]),&(stack[((hsi*28+3200)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3228)*1+lsi)*1]), &(stack[((hsi*10+3029)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*10+2793)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*15+3128)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*15+3228)*1+lsi)*1]), &(stack[((hsi*15+2818)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3264)*1+lsi)*1]), &(stack[((hsi*15+3143)*1+lsi)*1]), &(stack[((hsi*10+3067)*1+lsi)*1]), &(stack[((hsi*15+3228)*1+lsi)*1]), &(stack[((hsi*15+2803)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3285)*1+lsi)*1]), &(stack[((hsi*21+3158)*1+lsi)*1]), &(stack[((hsi*15+3077)*1+lsi)*1]), &(stack[((hsi*21+3264)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*21+2854)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3313)*1+lsi)*1]), &(stack[((hsi*21+3179)*1+lsi)*1]), &(stack[((hsi*15+3092)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*21+3264)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3341)*1+lsi)*1]), &(stack[((hsi*28+3200)*1+lsi)*1]), &(stack[((hsi*21+3107)*1+lsi)*1]), &(stack[((hsi*28+3313)*1+lsi)*1]), &(stack[((hsi*28+3285)*1+lsi)*1]), &(stack[((hsi*28+2903)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2300)*1+lsi)*1]),&(stack[((hsi*36+3341)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2562)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*3+2970)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3383)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+2506)*1+lsi)*1]), &(stack[((hsi*3+2503)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3389)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+3383)*1+lsi)*1]), &(stack[((hsi*6+2988)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2979)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*3+2515)*1+lsi)*1]), &(stack[((hsi*3+2967)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3399)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*6+3383)*1+lsi)*1]), &(stack[((hsi*6+2518)*1+lsi)*1]), &(stack[((hsi*6+2982)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+2543)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]), &(stack[((hsi*3+2524)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(stack[((hsi*3+3004)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+2546)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*6+2527)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*6+3007)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3419)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*6+2509)*1+lsi)*1]), &(stack[((hsi*10+2552)*1+lsi)*1]), &(stack[((hsi*10+3399)*1+lsi)*1]), &(stack[((hsi*10+2533)*1+lsi)*1]), &(stack[((hsi*10+3389)*1+lsi)*1]), &(stack[((hsi*10+3013)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2285)*1+lsi)*1]),&(stack[((hsi*15+3419)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2509)*1+lsi)*1]), &(stack[((hsi*6+3383)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*6+2596)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3434)*1+lsi)*1]), &(stack[((hsi*10+3389)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*10+2612)*1+lsi)*1]), &(stack[((hsi*10+2602)*1+lsi)*1]), &(stack[((hsi*10+2509)*1+lsi)*1]), &(stack[((hsi*10+3067)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3449)*1+lsi)*1]), &(stack[((hsi*10+3399)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*10+2602)*1+lsi)*1]), &(stack[((hsi*10+2509)*1+lsi)*1]), &(stack[((hsi*10+2612)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2596)*1+lsi)*1]), &(stack[((hsi*15+3419)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*15+2637)*1+lsi)*1]), &(stack[((hsi*15+3449)*1+lsi)*1]), &(stack[((hsi*15+2622)*1+lsi)*1]), &(stack[((hsi*15+3434)*1+lsi)*1]), &(stack[((hsi*15+3092)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2264)*1+lsi)*1]),&(stack[((hsi*21+2596)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3464)*1+lsi)*1]), &(stack[((hsi*10+2509)*1+lsi)*1]), &(stack[((hsi*6+3383)*1+lsi)*1]), &(stack[((hsi*10+2683)*1+lsi)*1]), &(stack[((hsi*10+2673)*1+lsi)*1]), &(stack[((hsi*10+3029)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3479)*1+lsi)*1]), &(stack[((hsi*15+3434)*1+lsi)*1]), &(stack[((hsi*10+3389)*1+lsi)*1]), &(stack[((hsi*15+2708)*1+lsi)*1]), &(stack[((hsi*15+2693)*1+lsi)*1]), &(stack[((hsi*15+3464)*1+lsi)*1]), &(stack[((hsi*15+3143)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3500)*1+lsi)*1]), &(stack[((hsi*15+3449)*1+lsi)*1]), &(stack[((hsi*10+3399)*1+lsi)*1]), &(stack[((hsi*15+2693)*1+lsi)*1]), &(stack[((hsi*15+3464)*1+lsi)*1]), &(stack[((hsi*15+2708)*1+lsi)*1]), &(stack[((hsi*15+3128)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3521)*1+lsi)*1]), &(stack[((hsi*21+2596)*1+lsi)*1]), &(stack[((hsi*15+3419)*1+lsi)*1]), &(stack[((hsi*21+2744)*1+lsi)*1]), &(stack[((hsi*21+3500)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*21+3479)*1+lsi)*1]), &(stack[((hsi*21+3179)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2236)*1+lsi)*1]),&(stack[((hsi*28+3521)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*15+3464)*1+lsi)*1]), &(stack[((hsi*10+2509)*1+lsi)*1]), &(stack[((hsi*15+2818)*1+lsi)*1]), &(stack[((hsi*15+2803)*1+lsi)*1]), &(stack[((hsi*15+3228)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3570)*1+lsi)*1]), &(stack[((hsi*21+3479)*1+lsi)*1]), &(stack[((hsi*15+3434)*1+lsi)*1]), &(stack[((hsi*21+2854)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*21+3264)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3598)*1+lsi)*1]), &(stack[((hsi*21+3500)*1+lsi)*1]), &(stack[((hsi*15+3449)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*21+2854)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3626)*1+lsi)*1]), &(stack[((hsi*28+3521)*1+lsi)*1]), &(stack[((hsi*21+2596)*1+lsi)*1]), &(stack[((hsi*28+2903)*1+lsi)*1]), &(stack[((hsi*28+3598)*1+lsi)*1]), &(stack[((hsi*28+2875)*1+lsi)*1]), &(stack[((hsi*28+3570)*1+lsi)*1]), &(stack[((hsi*28+3313)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2200)*1+lsi)*1]),&(stack[((hsi*36+3626)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+2967)*1+lsi)*1]), &(stack[((hsi*3+2970)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+2982)*1+lsi)*1]), &(stack[((hsi*6+2988)*1+lsi)*1]), &(stack[((hsi*6+3383)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+3004)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+2577)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2982)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*6+3007)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*6+2973)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3662)*1+lsi)*1]), &(stack[((hsi*10+2982)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*10+3013)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*10+2994)*1+lsi)*1]), &(stack[((hsi*10+3399)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2185)*1+lsi)*1]),&(stack[((hsi*15+3662)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3677)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*10+3067)*1+lsi)*1]), &(stack[((hsi*10+2509)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3692)*1+lsi)*1]), &(stack[((hsi*15+3662)*1+lsi)*1]), &(stack[((hsi*10+2982)*1+lsi)*1]), &(stack[((hsi*15+3092)*1+lsi)*1]), &(stack[((hsi*15+3677)*1+lsi)*1]), &(stack[((hsi*15+3077)*1+lsi)*1]), &(stack[((hsi*15+3449)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2164)*1+lsi)*1]),&(stack[((hsi*21+3692)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3713)*1+lsi)*1]), &(stack[((hsi*15+3677)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*15+3128)*1+lsi)*1]), &(stack[((hsi*15+3143)*1+lsi)*1]), &(stack[((hsi*15+3464)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3734)*1+lsi)*1]), &(stack[((hsi*21+3692)*1+lsi)*1]), &(stack[((hsi*15+3662)*1+lsi)*1]), &(stack[((hsi*21+3179)*1+lsi)*1]), &(stack[((hsi*21+3713)*1+lsi)*1]), &(stack[((hsi*21+3158)*1+lsi)*1]), &(stack[((hsi*21+3500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2136)*1+lsi)*1]),&(stack[((hsi*28+3734)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3762)*1+lsi)*1]), &(stack[((hsi*21+3713)*1+lsi)*1]), &(stack[((hsi*15+3677)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*21+3264)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3790)*1+lsi)*1]), &(stack[((hsi*28+3734)*1+lsi)*1]), &(stack[((hsi*21+3692)*1+lsi)*1]), &(stack[((hsi*28+3313)*1+lsi)*1]), &(stack[((hsi*28+3762)*1+lsi)*1]), &(stack[((hsi*28+3285)*1+lsi)*1]), &(stack[((hsi*28+3598)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2100)*1+lsi)*1]),&(stack[((hsi*36+3790)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+2979)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2509)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*10+3399)*1+lsi)*1]), &(stack[((hsi*10+3389)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2085)*1+lsi)*1]),&(stack[((hsi*15+2509)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3826)*1+lsi)*1]), &(stack[((hsi*15+2509)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*15+3449)*1+lsi)*1]), &(stack[((hsi*15+3434)*1+lsi)*1]), &(stack[((hsi*15+3677)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+2064)*1+lsi)*1]),&(stack[((hsi*21+3826)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3847)*1+lsi)*1]), &(stack[((hsi*21+3826)*1+lsi)*1]), &(stack[((hsi*15+2509)*1+lsi)*1]), &(stack[((hsi*21+3500)*1+lsi)*1]), &(stack[((hsi*21+3479)*1+lsi)*1]), &(stack[((hsi*21+3713)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+2036)*1+lsi)*1]),&(stack[((hsi*28+3847)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3875)*1+lsi)*1]), &(stack[((hsi*28+3847)*1+lsi)*1]), &(stack[((hsi*21+3826)*1+lsi)*1]), &(stack[((hsi*28+3598)*1+lsi)*1]), &(stack[((hsi*28+3570)*1+lsi)*1]), &(stack[((hsi*28+3762)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2000)*1+lsi)*1]),&(stack[((hsi*36+3875)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+2577)*1+lsi)*1]), &(stack[((hsi*3+3004)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*6+2973)*1+lsi)*1]), &(stack[((hsi*6+3007)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3911)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*10+2994)*1+lsi)*1]), &(stack[((hsi*10+3013)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*10+3389)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1985)*1+lsi)*1]),&(stack[((hsi*15+3911)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3926)*1+lsi)*1]), &(stack[((hsi*15+3911)*1+lsi)*1]), &(stack[((hsi*10+3057)*1+lsi)*1]), &(stack[((hsi*15+3077)*1+lsi)*1]), &(stack[((hsi*15+3092)*1+lsi)*1]), &(stack[((hsi*15+3677)*1+lsi)*1]), &(stack[((hsi*15+3434)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1964)*1+lsi)*1]),&(stack[((hsi*21+3926)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3947)*1+lsi)*1]), &(stack[((hsi*21+3926)*1+lsi)*1]), &(stack[((hsi*15+3911)*1+lsi)*1]), &(stack[((hsi*21+3158)*1+lsi)*1]), &(stack[((hsi*21+3179)*1+lsi)*1]), &(stack[((hsi*21+3713)*1+lsi)*1]), &(stack[((hsi*21+3479)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1936)*1+lsi)*1]),&(stack[((hsi*28+3947)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+3975)*1+lsi)*1]), &(stack[((hsi*28+3947)*1+lsi)*1]), &(stack[((hsi*21+3926)*1+lsi)*1]), &(stack[((hsi*28+3285)*1+lsi)*1]), &(stack[((hsi*28+3313)*1+lsi)*1]), &(stack[((hsi*28+3762)*1+lsi)*1]), &(stack[((hsi*28+3570)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1900)*1+lsi)*1]),&(stack[((hsi*36+3975)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+2524)*1+lsi)*1]), &(stack[((hsi*3+2562)*1+lsi)*1]), &(stack[((hsi*3+2543)*1+lsi)*1]), &(stack[((hsi*3+2979)*1+lsi)*1]), &(stack[((hsi*3+2577)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*3+2500)*1+lsi)*1]), &(stack[((hsi*6+2527)*1+lsi)*1]), &(stack[((hsi*6+3377)*1+lsi)*1]), &(stack[((hsi*6+2546)*1+lsi)*1]), &(stack[((hsi*6+2503)*1+lsi)*1]), &(stack[((hsi*6+2973)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2979)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*6+2565)*1+lsi)*1]), &(stack[((hsi*10+2533)*1+lsi)*1]), &(stack[((hsi*10+3389)*1+lsi)*1]), &(stack[((hsi*10+2552)*1+lsi)*1]), &(stack[((hsi*10+3399)*1+lsi)*1]), &(stack[((hsi*10+2994)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1885)*1+lsi)*1]),&(stack[((hsi*15+2979)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3377)*1+lsi)*1]), &(stack[((hsi*15+2979)*1+lsi)*1]), &(stack[((hsi*10+3409)*1+lsi)*1]), &(stack[((hsi*15+2622)*1+lsi)*1]), &(stack[((hsi*15+3434)*1+lsi)*1]), &(stack[((hsi*15+2637)*1+lsi)*1]), &(stack[((hsi*15+3449)*1+lsi)*1]), &(stack[((hsi*15+3077)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1864)*1+lsi)*1]),&(stack[((hsi*21+3377)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4011)*1+lsi)*1]), &(stack[((hsi*21+3377)*1+lsi)*1]), &(stack[((hsi*15+2979)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*21+3479)*1+lsi)*1]), &(stack[((hsi*21+2744)*1+lsi)*1]), &(stack[((hsi*21+3500)*1+lsi)*1]), &(stack[((hsi*21+3158)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1836)*1+lsi)*1]),&(stack[((hsi*28+4011)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4039)*1+lsi)*1]), &(stack[((hsi*28+4011)*1+lsi)*1]), &(stack[((hsi*21+3377)*1+lsi)*1]), &(stack[((hsi*28+2875)*1+lsi)*1]), &(stack[((hsi*28+3570)*1+lsi)*1]), &(stack[((hsi*28+2903)*1+lsi)*1]), &(stack[((hsi*28+3598)*1+lsi)*1]), &(stack[((hsi*28+3285)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1800)*1+lsi)*1]),&(stack[((hsi*36+4039)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+2577)*1+lsi)*1]), &(stack[((hsi*3+3004)*1+lsi)*1]), &(stack[((hsi*3+2524)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3398)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*6+2973)*1+lsi)*1]), &(stack[((hsi*6+3007)*1+lsi)*1]), &(stack[((hsi*6+2527)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3057)*1+lsi)*1]), &(stack[((hsi*10+3398)*1+lsi)*1]), &(stack[((hsi*6+3023)*1+lsi)*1]), &(stack[((hsi*10+2994)*1+lsi)*1]), &(stack[((hsi*10+3013)*1+lsi)*1]), &(stack[((hsi*10+2533)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1785)*1+lsi)*1]),&(stack[((hsi*15+3057)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2994)*1+lsi)*1]), &(stack[((hsi*15+3057)*1+lsi)*1]), &(stack[((hsi*10+3398)*1+lsi)*1]), &(stack[((hsi*15+3077)*1+lsi)*1]), &(stack[((hsi*15+3092)*1+lsi)*1]), &(stack[((hsi*15+2622)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1764)*1+lsi)*1]),&(stack[((hsi*21+2994)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4075)*1+lsi)*1]), &(stack[((hsi*21+2994)*1+lsi)*1]), &(stack[((hsi*15+3057)*1+lsi)*1]), &(stack[((hsi*21+3158)*1+lsi)*1]), &(stack[((hsi*21+3179)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1736)*1+lsi)*1]),&(stack[((hsi*28+4075)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4103)*1+lsi)*1]), &(stack[((hsi*28+4075)*1+lsi)*1]), &(stack[((hsi*21+2994)*1+lsi)*1]), &(stack[((hsi*28+3285)*1+lsi)*1]), &(stack[((hsi*28+3313)*1+lsi)*1]), &(stack[((hsi*28+2875)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1700)*1+lsi)*1]),&(stack[((hsi*36+4103)*1+lsi)*1]),36);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+3398)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+2524)*1+lsi)*1]), &(stack[((hsi*3+2543)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3404)*1+lsi)*1]), &(stack[((hsi*6+3398)*1+lsi)*1]), &(stack[((hsi*3+3039)*1+lsi)*1]), &(stack[((hsi*6+2527)*1+lsi)*1]), &(stack[((hsi*6+2546)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+4139)*1+lsi)*1]), &(stack[((hsi*10+3404)*1+lsi)*1]), &(stack[((hsi*6+3398)*1+lsi)*1]), &(stack[((hsi*10+2533)*1+lsi)*1]), &(stack[((hsi*10+2552)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1685)*1+lsi)*1]),&(stack[((hsi*15+4139)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2524)*1+lsi)*1]), &(stack[((hsi*15+4139)*1+lsi)*1]), &(stack[((hsi*10+3404)*1+lsi)*1]), &(stack[((hsi*15+2622)*1+lsi)*1]), &(stack[((hsi*15+2637)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1664)*1+lsi)*1]),&(stack[((hsi*21+2524)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4154)*1+lsi)*1]), &(stack[((hsi*21+2524)*1+lsi)*1]), &(stack[((hsi*15+4139)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*21+2744)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1636)*1+lsi)*1]),&(stack[((hsi*28+4154)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4182)*1+lsi)*1]), &(stack[((hsi*28+4154)*1+lsi)*1]), &(stack[((hsi*21+2524)*1+lsi)*1]), &(stack[((hsi*28+2875)*1+lsi)*1]), &(stack[((hsi*28+2903)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1600)*1+lsi)*1]),&(stack[((hsi*36+4182)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1585)*1+lsi)*1]),&(stack[((hsi*15+2637)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1564)*1+lsi)*1]),&(stack[((hsi*21+2744)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1536)*1+lsi)*1]),&(stack[((hsi*28+2903)*1+lsi)*1]),28);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2545)*1+lsi)*1]), &(stack[((hsi*10+2793)*1+lsi)*1]), &(stack[((hsi*6+2571)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3398)*1+lsi)*1]), &(stack[((hsi*15+2818)*1+lsi)*1]), &(stack[((hsi*10+2683)*1+lsi)*1]), &(stack[((hsi*15+2545)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2560)*1+lsi)*1]), &(stack[((hsi*15+2803)*1+lsi)*1]), &(stack[((hsi*10+2673)*1+lsi)*1]), &(stack[((hsi*15+2545)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4218)*1+lsi)*1]), &(stack[((hsi*21+2854)*1+lsi)*1]), &(stack[((hsi*15+2708)*1+lsi)*1]), &(stack[((hsi*21+2560)*1+lsi)*1]), &(stack[((hsi*21+3398)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4246)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*15+2693)*1+lsi)*1]), &(stack[((hsi*21+3398)*1+lsi)*1]), &(stack[((hsi*21+2560)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4274)*1+lsi)*1]), &(stack[((hsi*28+2903)*1+lsi)*1]), &(stack[((hsi*21+2744)*1+lsi)*1]), &(stack[((hsi*28+4246)*1+lsi)*1]), &(stack[((hsi*28+4218)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1500)*1+lsi)*1]),&(stack[((hsi*36+4274)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1485)*1+lsi)*1]),&(stack[((hsi*15+3092)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1464)*1+lsi)*1]),&(stack[((hsi*21+3179)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1436)*1+lsi)*1]),&(stack[((hsi*28+3313)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+4310)*1+lsi)*1]), &(stack[((hsi*15+3228)*1+lsi)*1]), &(stack[((hsi*10+3029)*1+lsi)*1]), &(stack[((hsi*15+2545)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4331)*1+lsi)*1]), &(stack[((hsi*21+3264)*1+lsi)*1]), &(stack[((hsi*15+3143)*1+lsi)*1]), &(stack[((hsi*21+4310)*1+lsi)*1]), &(stack[((hsi*21+2560)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4359)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*15+3128)*1+lsi)*1]), &(stack[((hsi*21+4310)*1+lsi)*1]), &(stack[((hsi*21+3398)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4387)*1+lsi)*1]), &(stack[((hsi*28+3313)*1+lsi)*1]), &(stack[((hsi*21+3179)*1+lsi)*1]), &(stack[((hsi*28+4359)*1+lsi)*1]), &(stack[((hsi*28+4331)*1+lsi)*1]), &(stack[((hsi*28+4246)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1400)*1+lsi)*1]),&(stack[((hsi*36+4387)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1385)*1+lsi)*1]),&(stack[((hsi*15+3449)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1364)*1+lsi)*1]),&(stack[((hsi*21+3500)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1336)*1+lsi)*1]),&(stack[((hsi*28+3598)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4423)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*15+3464)*1+lsi)*1]), &(stack[((hsi*21+3398)*1+lsi)*1]), &(stack[((hsi*21+2560)*1+lsi)*1]), &(stack[((hsi*21+4310)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4451)*1+lsi)*1]), &(stack[((hsi*28+3598)*1+lsi)*1]), &(stack[((hsi*21+3500)*1+lsi)*1]), &(stack[((hsi*28+4246)*1+lsi)*1]), &(stack[((hsi*28+4423)*1+lsi)*1]), &(stack[((hsi*28+4218)*1+lsi)*1]), &(stack[((hsi*28+4359)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1300)*1+lsi)*1]),&(stack[((hsi*36+4451)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1285)*1+lsi)*1]),&(stack[((hsi*15+3677)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1264)*1+lsi)*1]),&(stack[((hsi*21+3713)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1236)*1+lsi)*1]),&(stack[((hsi*28+3762)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4487)*1+lsi)*1]), &(stack[((hsi*28+3762)*1+lsi)*1]), &(stack[((hsi*21+3713)*1+lsi)*1]), &(stack[((hsi*28+4359)*1+lsi)*1]), &(stack[((hsi*28+4331)*1+lsi)*1]), &(stack[((hsi*28+4423)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1200)*1+lsi)*1]),&(stack[((hsi*36+4487)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1185)*1+lsi)*1]),&(stack[((hsi*15+3434)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1164)*1+lsi)*1]),&(stack[((hsi*21+3479)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1136)*1+lsi)*1]),&(stack[((hsi*28+3570)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4523)*1+lsi)*1]), &(stack[((hsi*28+3570)*1+lsi)*1]), &(stack[((hsi*21+3479)*1+lsi)*1]), &(stack[((hsi*28+4218)*1+lsi)*1]), &(stack[((hsi*28+4246)*1+lsi)*1]), &(stack[((hsi*28+4423)*1+lsi)*1]), &(stack[((hsi*28+4331)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1100)*1+lsi)*1]),&(stack[((hsi*36+4523)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1085)*1+lsi)*1]),&(stack[((hsi*15+3077)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1064)*1+lsi)*1]),&(stack[((hsi*21+3158)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1036)*1+lsi)*1]),&(stack[((hsi*28+3285)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4559)*1+lsi)*1]), &(stack[((hsi*28+3285)*1+lsi)*1]), &(stack[((hsi*21+3158)*1+lsi)*1]), &(stack[((hsi*28+4331)*1+lsi)*1]), &(stack[((hsi*28+4359)*1+lsi)*1]), &(stack[((hsi*28+4218)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1000)*1+lsi)*1]),&(stack[((hsi*36+4559)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+985)*1+lsi)*1]),&(stack[((hsi*15+2622)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+964)*1+lsi)*1]),&(stack[((hsi*21+2723)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+936)*1+lsi)*1]),&(stack[((hsi*28+2875)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4595)*1+lsi)*1]), &(stack[((hsi*28+2875)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*28+4218)*1+lsi)*1]), &(stack[((hsi*28+4246)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+900)*1+lsi)*1]),&(stack[((hsi*36+4595)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+885)*1+lsi)*1]),&(stack[((hsi*15+2693)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+864)*1+lsi)*1]),&(stack[((hsi*21+2833)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+836)*1+lsi)*1]),&(stack[((hsi*28+4246)*1+lsi)*1]),28);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3015)*1+lsi)*1]), &(stack[((hsi*15+2545)*1+lsi)*1]), &(stack[((hsi*10+2793)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4631)*1+lsi)*1]), &(stack[((hsi*21+2560)*1+lsi)*1]), &(stack[((hsi*15+2803)*1+lsi)*1]), &(stack[((hsi*21+3015)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4659)*1+lsi)*1]), &(stack[((hsi*21+3398)*1+lsi)*1]), &(stack[((hsi*15+2818)*1+lsi)*1]), &(stack[((hsi*21+3015)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4687)*1+lsi)*1]), &(stack[((hsi*28+4246)*1+lsi)*1]), &(stack[((hsi*21+2833)*1+lsi)*1]), &(stack[((hsi*28+4659)*1+lsi)*1]), &(stack[((hsi*28+4631)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+800)*1+lsi)*1]),&(stack[((hsi*36+4687)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+785)*1+lsi)*1]),&(stack[((hsi*15+3128)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+764)*1+lsi)*1]),&(stack[((hsi*21+3243)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+736)*1+lsi)*1]),&(stack[((hsi*28+4359)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4723)*1+lsi)*1]), &(stack[((hsi*21+4310)*1+lsi)*1]), &(stack[((hsi*15+3228)*1+lsi)*1]), &(stack[((hsi*21+3015)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4751)*1+lsi)*1]), &(stack[((hsi*28+4359)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*28+4723)*1+lsi)*1]), &(stack[((hsi*28+4659)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+700)*1+lsi)*1]),&(stack[((hsi*36+4751)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+685)*1+lsi)*1]),&(stack[((hsi*15+3464)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+664)*1+lsi)*1]),&(stack[((hsi*21+3549)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+636)*1+lsi)*1]),&(stack[((hsi*28+4423)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4787)*1+lsi)*1]), &(stack[((hsi*28+4423)*1+lsi)*1]), &(stack[((hsi*21+3549)*1+lsi)*1]), &(stack[((hsi*28+4659)*1+lsi)*1]), &(stack[((hsi*28+4631)*1+lsi)*1]), &(stack[((hsi*28+4723)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+600)*1+lsi)*1]),&(stack[((hsi*36+4787)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+585)*1+lsi)*1]),&(stack[((hsi*15+3143)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+564)*1+lsi)*1]),&(stack[((hsi*21+3264)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+536)*1+lsi)*1]),&(stack[((hsi*28+4331)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4823)*1+lsi)*1]), &(stack[((hsi*28+4331)*1+lsi)*1]), &(stack[((hsi*21+3264)*1+lsi)*1]), &(stack[((hsi*28+4723)*1+lsi)*1]), &(stack[((hsi*28+4631)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+500)*1+lsi)*1]),&(stack[((hsi*36+4823)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+485)*1+lsi)*1]),&(stack[((hsi*15+2708)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+464)*1+lsi)*1]),&(stack[((hsi*21+2854)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+436)*1+lsi)*1]),&(stack[((hsi*28+4218)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4859)*1+lsi)*1]), &(stack[((hsi*28+4218)*1+lsi)*1]), &(stack[((hsi*21+2854)*1+lsi)*1]), &(stack[((hsi*28+4631)*1+lsi)*1]), &(stack[((hsi*28+4659)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+400)*1+lsi)*1]),&(stack[((hsi*36+4859)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+385)*1+lsi)*1]),&(stack[((hsi*15+2818)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+364)*1+lsi)*1]),&(stack[((hsi*21+3398)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+336)*1+lsi)*1]),&(stack[((hsi*28+4659)*1+lsi)*1]),28);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+4895)*1+lsi)*1]), &(stack[((hsi*21+3015)*1+lsi)*1]), &(stack[((hsi*15+2545)*1+lsi)*1]));
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4923)*1+lsi)*1]), &(stack[((hsi*28+4659)*1+lsi)*1]), &(stack[((hsi*21+3398)*1+lsi)*1]), &(stack[((hsi*28+4895)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+300)*1+lsi)*1]),&(stack[((hsi*36+4923)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+285)*1+lsi)*1]),&(stack[((hsi*15+3228)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+264)*1+lsi)*1]),&(stack[((hsi*21+4310)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+236)*1+lsi)*1]),&(stack[((hsi*28+4723)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4959)*1+lsi)*1]), &(stack[((hsi*28+4723)*1+lsi)*1]), &(stack[((hsi*21+4310)*1+lsi)*1]), &(stack[((hsi*28+4895)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+200)*1+lsi)*1]),&(stack[((hsi*36+4959)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+185)*1+lsi)*1]),&(stack[((hsi*15+2803)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+164)*1+lsi)*1]),&(stack[((hsi*21+2560)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+136)*1+lsi)*1]),&(stack[((hsi*28+4631)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+4995)*1+lsi)*1]), &(stack[((hsi*28+4631)*1+lsi)*1]), &(stack[((hsi*21+2560)*1+lsi)*1]), &(stack[((hsi*28+4895)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+100)*1+lsi)*1]),&(stack[((hsi*36+4995)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+85)*1+lsi)*1]),&(stack[((hsi*15+2545)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+64)*1+lsi)*1]),&(stack[((hsi*21+3015)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+36)*1+lsi)*1]),&(stack[((hsi*28+4895)*1+lsi)*1]),28);
OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+5031)*1+lsi)*1]), &(stack[((hsi*28+4895)*1+lsi)*1]), &(stack[((hsi*21+3015)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+5031)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2500 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
