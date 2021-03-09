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
void _sphemultipole_F_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
LIBINT2_REALTYPE fp12;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(fp12), &(fp7), &(fp5));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1850)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1853)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1856)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1859)*1+lsi)*1]), &(stack[((hsi*3+1856)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+1853)*1+lsi)*1]), &(stack[((hsi*3+1850)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1865)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1868)*1+lsi)*1]), &(stack[((hsi*3+1865)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+1850)*1+lsi)*1]), &(stack[((hsi*3+1853)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1877)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+1865)*1+lsi)*1]), &(stack[((hsi*3+1856)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1883)*1+lsi)*1]), &(stack[((hsi*6+1877)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*6+1868)*1+lsi)*1]), &(stack[((hsi*6+1859)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1840)*1+lsi)*1]),&(stack[((hsi*10+1883)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1893)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1896)*1+lsi)*1]), &(stack[((hsi*3+1850)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+1893)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1902)*1+lsi)*1]), &(stack[((hsi*3+1853)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+1859)*1+lsi)*1]), &(stack[((hsi*3+1856)*1+lsi)*1]), &(stack[((hsi*6+1902)*1+lsi)*1]), &(stack[((hsi*6+1896)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1918)*1+lsi)*1]), &(stack[((hsi*6+1868)*1+lsi)*1]), &(stack[((hsi*3+1865)*1+lsi)*1]), &(stack[((hsi*6+1896)*1+lsi)*1]), &(stack[((hsi*6+1902)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1928)*1+lsi)*1]), &(stack[((hsi*10+1883)*1+lsi)*1]), &(stack[((hsi*6+1877)*1+lsi)*1]), &(stack[((hsi*10+1918)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1825)*1+lsi)*1]),&(stack[((hsi*15+1928)*1+lsi)*1]),15);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1877)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1943)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*6+1896)*1+lsi)*1]), &(stack[((hsi*3+1850)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*6+1943)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1965)*1+lsi)*1]), &(stack[((hsi*6+1902)*1+lsi)*1]), &(stack[((hsi*3+1853)*1+lsi)*1]), &(stack[((hsi*6+1943)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1975)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+1859)*1+lsi)*1]), &(stack[((hsi*10+1965)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1990)*1+lsi)*1]), &(stack[((hsi*10+1918)*1+lsi)*1]), &(stack[((hsi*6+1868)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*10+1965)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2005)*1+lsi)*1]), &(stack[((hsi*15+1928)*1+lsi)*1]), &(stack[((hsi*10+1883)*1+lsi)*1]), &(stack[((hsi*15+1990)*1+lsi)*1]), &(stack[((hsi*15+1975)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1804)*1+lsi)*1]),&(stack[((hsi*21+2005)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2026)*1+lsi)*1]), &(stack[((hsi*3+1877)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2032)*1+lsi)*1]), &(stack[((hsi*6+1943)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*6+2026)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2042)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]), &(stack[((hsi*6+2026)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2052)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*6+1896)*1+lsi)*1]), &(stack[((hsi*10+2042)*1+lsi)*1]), &(stack[((hsi*10+2032)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2067)*1+lsi)*1]), &(stack[((hsi*10+1965)*1+lsi)*1]), &(stack[((hsi*6+1902)*1+lsi)*1]), &(stack[((hsi*10+2032)*1+lsi)*1]), &(stack[((hsi*10+2042)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2082)*1+lsi)*1]), &(stack[((hsi*15+1975)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*15+2067)*1+lsi)*1]), &(stack[((hsi*15+2052)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2103)*1+lsi)*1]), &(stack[((hsi*15+1990)*1+lsi)*1]), &(stack[((hsi*10+1918)*1+lsi)*1]), &(stack[((hsi*15+2052)*1+lsi)*1]), &(stack[((hsi*15+2067)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2124)*1+lsi)*1]), &(stack[((hsi*21+2005)*1+lsi)*1]), &(stack[((hsi*15+1928)*1+lsi)*1]), &(stack[((hsi*21+2103)*1+lsi)*1]), &(stack[((hsi*21+2082)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1776)*1+lsi)*1]),&(stack[((hsi*28+2124)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1880)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2152)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2155)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2158)*1+lsi)*1]), &(stack[((hsi*3+1880)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+2155)*1+lsi)*1]), &(stack[((hsi*3+2152)*1+lsi)*1]), &(stack[((hsi*3+1853)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2164)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2167)*1+lsi)*1]), &(stack[((hsi*3+2164)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+2152)*1+lsi)*1]), &(stack[((hsi*3+2155)*1+lsi)*1]), &(stack[((hsi*3+1850)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+2164)*1+lsi)*1]), &(stack[((hsi*3+1880)*1+lsi)*1]), &(stack[((hsi*3+1865)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2182)*1+lsi)*1]), &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(stack[((hsi*6+2167)*1+lsi)*1]), &(stack[((hsi*6+2158)*1+lsi)*1]), &(stack[((hsi*6+1868)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1766)*1+lsi)*1]),&(stack[((hsi*10+2182)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2192)*1+lsi)*1]), &(stack[((hsi*3+2152)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+2173)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2198)*1+lsi)*1]), &(stack[((hsi*3+2155)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+2173)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2204)*1+lsi)*1]), &(stack[((hsi*6+2158)*1+lsi)*1]), &(stack[((hsi*3+1880)*1+lsi)*1]), &(stack[((hsi*6+2198)*1+lsi)*1]), &(stack[((hsi*6+2192)*1+lsi)*1]), &(stack[((hsi*6+1902)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2214)*1+lsi)*1]), &(stack[((hsi*6+2167)*1+lsi)*1]), &(stack[((hsi*3+2164)*1+lsi)*1]), &(stack[((hsi*6+2192)*1+lsi)*1]), &(stack[((hsi*6+2198)*1+lsi)*1]), &(stack[((hsi*6+1896)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2224)*1+lsi)*1]), &(stack[((hsi*10+2182)*1+lsi)*1]), &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*10+2214)*1+lsi)*1]), &(stack[((hsi*10+2204)*1+lsi)*1]), &(stack[((hsi*10+1918)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1751)*1+lsi)*1]),&(stack[((hsi*15+2224)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2239)*1+lsi)*1]), &(stack[((hsi*6+2192)*1+lsi)*1]), &(stack[((hsi*3+2152)*1+lsi)*1]), &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2249)*1+lsi)*1]), &(stack[((hsi*6+2198)*1+lsi)*1]), &(stack[((hsi*3+2155)*1+lsi)*1]), &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*6+1943)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2259)*1+lsi)*1]), &(stack[((hsi*10+2204)*1+lsi)*1]), &(stack[((hsi*6+2158)*1+lsi)*1]), &(stack[((hsi*10+2249)*1+lsi)*1]), &(stack[((hsi*10+2239)*1+lsi)*1]), &(stack[((hsi*10+1965)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2274)*1+lsi)*1]), &(stack[((hsi*10+2214)*1+lsi)*1]), &(stack[((hsi*6+2167)*1+lsi)*1]), &(stack[((hsi*10+2239)*1+lsi)*1]), &(stack[((hsi*10+2249)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2289)*1+lsi)*1]), &(stack[((hsi*15+2224)*1+lsi)*1]), &(stack[((hsi*10+2182)*1+lsi)*1]), &(stack[((hsi*15+2274)*1+lsi)*1]), &(stack[((hsi*15+2259)*1+lsi)*1]), &(stack[((hsi*15+1990)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1730)*1+lsi)*1]),&(stack[((hsi*21+2289)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2310)*1+lsi)*1]), &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(stack[((hsi*6+2026)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2320)*1+lsi)*1]), &(stack[((hsi*10+2239)*1+lsi)*1]), &(stack[((hsi*6+2192)*1+lsi)*1]), &(stack[((hsi*10+2310)*1+lsi)*1]), &(stack[((hsi*10+2042)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2335)*1+lsi)*1]), &(stack[((hsi*10+2249)*1+lsi)*1]), &(stack[((hsi*6+2198)*1+lsi)*1]), &(stack[((hsi*10+2310)*1+lsi)*1]), &(stack[((hsi*10+2032)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2350)*1+lsi)*1]), &(stack[((hsi*15+2259)*1+lsi)*1]), &(stack[((hsi*10+2204)*1+lsi)*1]), &(stack[((hsi*15+2335)*1+lsi)*1]), &(stack[((hsi*15+2320)*1+lsi)*1]), &(stack[((hsi*15+2067)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2371)*1+lsi)*1]), &(stack[((hsi*15+2274)*1+lsi)*1]), &(stack[((hsi*10+2214)*1+lsi)*1]), &(stack[((hsi*15+2320)*1+lsi)*1]), &(stack[((hsi*15+2335)*1+lsi)*1]), &(stack[((hsi*15+2052)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2392)*1+lsi)*1]), &(stack[((hsi*21+2289)*1+lsi)*1]), &(stack[((hsi*15+2224)*1+lsi)*1]), &(stack[((hsi*21+2371)*1+lsi)*1]), &(stack[((hsi*21+2350)*1+lsi)*1]), &(stack[((hsi*21+2103)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1702)*1+lsi)*1]),&(stack[((hsi*28+2392)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2420)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2423)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2426)*1+lsi)*1]), &(stack[((hsi*3+2420)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+1853)*1+lsi)*1]), &(stack[((hsi*3+1850)*1+lsi)*1]), &(stack[((hsi*3+2423)*1+lsi)*1]), &(stack[((hsi*3+2155)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2432)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2435)*1+lsi)*1]), &(stack[((hsi*3+2432)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+1850)*1+lsi)*1]), &(stack[((hsi*3+2423)*1+lsi)*1]), &(stack[((hsi*3+1853)*1+lsi)*1]), &(stack[((hsi*3+2152)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1850)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*3+1850)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+1865)*1+lsi)*1]), &(stack[((hsi*3+2432)*1+lsi)*1]), &(stack[((hsi*3+1856)*1+lsi)*1]), &(stack[((hsi*3+2420)*1+lsi)*1]), &(stack[((hsi*3+2164)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2447)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*3+1850)*1+lsi)*1]), &(stack[((hsi*6+1868)*1+lsi)*1]), &(stack[((hsi*6+2435)*1+lsi)*1]), &(stack[((hsi*6+1859)*1+lsi)*1]), &(stack[((hsi*6+2426)*1+lsi)*1]), &(stack[((hsi*6+2167)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1692)*1+lsi)*1]),&(stack[((hsi*10+2447)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+2423)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+1893)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2457)*1+lsi)*1]), &(stack[((hsi*6+2426)*1+lsi)*1]), &(stack[((hsi*3+2420)*1+lsi)*1]), &(stack[((hsi*6+1902)*1+lsi)*1]), &(stack[((hsi*6+1896)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*6+2198)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2467)*1+lsi)*1]), &(stack[((hsi*6+2435)*1+lsi)*1]), &(stack[((hsi*3+2432)*1+lsi)*1]), &(stack[((hsi*6+1896)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*6+1902)*1+lsi)*1]), &(stack[((hsi*6+2192)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1893)*1+lsi)*1]), &(stack[((hsi*10+2447)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*10+1918)*1+lsi)*1]), &(stack[((hsi*10+2467)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*10+2457)*1+lsi)*1]), &(stack[((hsi*10+2214)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1677)*1+lsi)*1]),&(stack[((hsi*15+1893)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2477)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+2423)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*6+1943)*1+lsi)*1]), &(stack[((hsi*6+2176)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2487)*1+lsi)*1]), &(stack[((hsi*10+2457)*1+lsi)*1]), &(stack[((hsi*6+2426)*1+lsi)*1]), &(stack[((hsi*10+1965)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*10+2477)*1+lsi)*1]), &(stack[((hsi*10+2249)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2502)*1+lsi)*1]), &(stack[((hsi*10+2467)*1+lsi)*1]), &(stack[((hsi*6+2435)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*10+2477)*1+lsi)*1]), &(stack[((hsi*10+1965)*1+lsi)*1]), &(stack[((hsi*10+2239)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2517)*1+lsi)*1]), &(stack[((hsi*15+1893)*1+lsi)*1]), &(stack[((hsi*10+2447)*1+lsi)*1]), &(stack[((hsi*15+1990)*1+lsi)*1]), &(stack[((hsi*15+2502)*1+lsi)*1]), &(stack[((hsi*15+1975)*1+lsi)*1]), &(stack[((hsi*15+2487)*1+lsi)*1]), &(stack[((hsi*15+2274)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1656)*1+lsi)*1]),&(stack[((hsi*21+2517)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2538)*1+lsi)*1]), &(stack[((hsi*10+2477)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*10+2042)*1+lsi)*1]), &(stack[((hsi*10+2032)*1+lsi)*1]), &(stack[((hsi*10+2310)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2553)*1+lsi)*1]), &(stack[((hsi*15+2487)*1+lsi)*1]), &(stack[((hsi*10+2457)*1+lsi)*1]), &(stack[((hsi*15+2067)*1+lsi)*1]), &(stack[((hsi*15+2052)*1+lsi)*1]), &(stack[((hsi*15+2538)*1+lsi)*1]), &(stack[((hsi*15+2335)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2574)*1+lsi)*1]), &(stack[((hsi*15+2502)*1+lsi)*1]), &(stack[((hsi*10+2467)*1+lsi)*1]), &(stack[((hsi*15+2052)*1+lsi)*1]), &(stack[((hsi*15+2538)*1+lsi)*1]), &(stack[((hsi*15+2067)*1+lsi)*1]), &(stack[((hsi*15+2320)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2595)*1+lsi)*1]), &(stack[((hsi*21+2517)*1+lsi)*1]), &(stack[((hsi*15+1893)*1+lsi)*1]), &(stack[((hsi*21+2103)*1+lsi)*1]), &(stack[((hsi*21+2574)*1+lsi)*1]), &(stack[((hsi*21+2082)*1+lsi)*1]), &(stack[((hsi*21+2553)*1+lsi)*1]), &(stack[((hsi*21+2371)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1628)*1+lsi)*1]),&(stack[((hsi*28+2595)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+2152)*1+lsi)*1]), &(stack[((hsi*3+2155)*1+lsi)*1]), &(stack[((hsi*3+2423)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2152)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+2164)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*3+1880)*1+lsi)*1]), &(stack[((hsi*3+2432)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2623)*1+lsi)*1]), &(stack[((hsi*6+2152)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(stack[((hsi*6+2167)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*6+2158)*1+lsi)*1]), &(stack[((hsi*6+2435)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1618)*1+lsi)*1]),&(stack[((hsi*10+2623)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2633)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*6+2192)*1+lsi)*1]), &(stack[((hsi*6+2198)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2643)*1+lsi)*1]), &(stack[((hsi*10+2623)*1+lsi)*1]), &(stack[((hsi*6+2152)*1+lsi)*1]), &(stack[((hsi*10+2214)*1+lsi)*1]), &(stack[((hsi*10+2633)*1+lsi)*1]), &(stack[((hsi*10+2204)*1+lsi)*1]), &(stack[((hsi*10+2467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1603)*1+lsi)*1]),&(stack[((hsi*15+2643)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2658)*1+lsi)*1]), &(stack[((hsi*10+2633)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*10+2239)*1+lsi)*1]), &(stack[((hsi*10+2249)*1+lsi)*1]), &(stack[((hsi*10+2477)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2673)*1+lsi)*1]), &(stack[((hsi*15+2643)*1+lsi)*1]), &(stack[((hsi*10+2623)*1+lsi)*1]), &(stack[((hsi*15+2274)*1+lsi)*1]), &(stack[((hsi*15+2658)*1+lsi)*1]), &(stack[((hsi*15+2259)*1+lsi)*1]), &(stack[((hsi*15+2502)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1582)*1+lsi)*1]),&(stack[((hsi*21+2673)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2694)*1+lsi)*1]), &(stack[((hsi*15+2658)*1+lsi)*1]), &(stack[((hsi*10+2633)*1+lsi)*1]), &(stack[((hsi*15+2320)*1+lsi)*1]), &(stack[((hsi*15+2335)*1+lsi)*1]), &(stack[((hsi*15+2538)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2715)*1+lsi)*1]), &(stack[((hsi*21+2673)*1+lsi)*1]), &(stack[((hsi*15+2643)*1+lsi)*1]), &(stack[((hsi*21+2371)*1+lsi)*1]), &(stack[((hsi*21+2694)*1+lsi)*1]), &(stack[((hsi*21+2350)*1+lsi)*1]), &(stack[((hsi*21+2574)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1554)*1+lsi)*1]),&(stack[((hsi*28+2715)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+2432)*1+lsi)*1]), &(stack[((hsi*3+2420)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(stack[((hsi*6+2435)*1+lsi)*1]), &(stack[((hsi*6+2426)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1544)*1+lsi)*1]),&(stack[((hsi*10+2192)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2743)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*10+2467)*1+lsi)*1]), &(stack[((hsi*10+2457)*1+lsi)*1]), &(stack[((hsi*10+2633)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1529)*1+lsi)*1]),&(stack[((hsi*15+2743)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2758)*1+lsi)*1]), &(stack[((hsi*15+2743)*1+lsi)*1]), &(stack[((hsi*10+2192)*1+lsi)*1]), &(stack[((hsi*15+2502)*1+lsi)*1]), &(stack[((hsi*15+2487)*1+lsi)*1]), &(stack[((hsi*15+2658)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1508)*1+lsi)*1]),&(stack[((hsi*21+2758)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2779)*1+lsi)*1]), &(stack[((hsi*21+2758)*1+lsi)*1]), &(stack[((hsi*15+2743)*1+lsi)*1]), &(stack[((hsi*21+2574)*1+lsi)*1]), &(stack[((hsi*21+2553)*1+lsi)*1]), &(stack[((hsi*21+2694)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1480)*1+lsi)*1]),&(stack[((hsi*28+2779)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+1880)*1+lsi)*1]), &(stack[((hsi*3+2164)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*3+2420)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2807)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+2173)*1+lsi)*1]), &(stack[((hsi*6+2158)*1+lsi)*1]), &(stack[((hsi*6+2167)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*6+2426)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1470)*1+lsi)*1]),&(stack[((hsi*10+2807)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2817)*1+lsi)*1]), &(stack[((hsi*10+2807)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*10+2204)*1+lsi)*1]), &(stack[((hsi*10+2214)*1+lsi)*1]), &(stack[((hsi*10+2633)*1+lsi)*1]), &(stack[((hsi*10+2457)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1455)*1+lsi)*1]),&(stack[((hsi*15+2817)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2832)*1+lsi)*1]), &(stack[((hsi*15+2817)*1+lsi)*1]), &(stack[((hsi*10+2807)*1+lsi)*1]), &(stack[((hsi*15+2259)*1+lsi)*1]), &(stack[((hsi*15+2274)*1+lsi)*1]), &(stack[((hsi*15+2658)*1+lsi)*1]), &(stack[((hsi*15+2487)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1434)*1+lsi)*1]),&(stack[((hsi*21+2832)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2853)*1+lsi)*1]), &(stack[((hsi*21+2832)*1+lsi)*1]), &(stack[((hsi*15+2817)*1+lsi)*1]), &(stack[((hsi*21+2350)*1+lsi)*1]), &(stack[((hsi*21+2371)*1+lsi)*1]), &(stack[((hsi*21+2694)*1+lsi)*1]), &(stack[((hsi*21+2553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1406)*1+lsi)*1]),&(stack[((hsi*28+2853)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+1856)*1+lsi)*1]), &(stack[((hsi*3+2420)*1+lsi)*1]), &(stack[((hsi*3+1865)*1+lsi)*1]), &(stack[((hsi*3+2432)*1+lsi)*1]), &(stack[((hsi*3+1880)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2881)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*6+1859)*1+lsi)*1]), &(stack[((hsi*6+2426)*1+lsi)*1]), &(stack[((hsi*6+1868)*1+lsi)*1]), &(stack[((hsi*6+2435)*1+lsi)*1]), &(stack[((hsi*6+2158)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1396)*1+lsi)*1]),&(stack[((hsi*10+2881)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2420)*1+lsi)*1]), &(stack[((hsi*10+2881)*1+lsi)*1]), &(stack[((hsi*6+2441)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*10+2457)*1+lsi)*1]), &(stack[((hsi*10+1918)*1+lsi)*1]), &(stack[((hsi*10+2467)*1+lsi)*1]), &(stack[((hsi*10+2204)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1381)*1+lsi)*1]),&(stack[((hsi*15+2420)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2891)*1+lsi)*1]), &(stack[((hsi*15+2420)*1+lsi)*1]), &(stack[((hsi*10+2881)*1+lsi)*1]), &(stack[((hsi*15+1975)*1+lsi)*1]), &(stack[((hsi*15+2487)*1+lsi)*1]), &(stack[((hsi*15+1990)*1+lsi)*1]), &(stack[((hsi*15+2502)*1+lsi)*1]), &(stack[((hsi*15+2259)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1360)*1+lsi)*1]),&(stack[((hsi*21+2891)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2912)*1+lsi)*1]), &(stack[((hsi*21+2891)*1+lsi)*1]), &(stack[((hsi*15+2420)*1+lsi)*1]), &(stack[((hsi*21+2082)*1+lsi)*1]), &(stack[((hsi*21+2553)*1+lsi)*1]), &(stack[((hsi*21+2103)*1+lsi)*1]), &(stack[((hsi*21+2574)*1+lsi)*1]), &(stack[((hsi*21+2350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1332)*1+lsi)*1]),&(stack[((hsi*28+2912)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+1880)*1+lsi)*1]), &(stack[((hsi*3+2164)*1+lsi)*1]), &(stack[((hsi*3+1856)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2435)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*6+2158)*1+lsi)*1]), &(stack[((hsi*6+2167)*1+lsi)*1]), &(stack[((hsi*6+1859)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1322)*1+lsi)*1]),&(stack[((hsi*10+2435)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2152)*1+lsi)*1]), &(stack[((hsi*10+2435)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*10+2204)*1+lsi)*1]), &(stack[((hsi*10+2214)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1307)*1+lsi)*1]),&(stack[((hsi*15+2152)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2940)*1+lsi)*1]), &(stack[((hsi*15+2152)*1+lsi)*1]), &(stack[((hsi*10+2435)*1+lsi)*1]), &(stack[((hsi*15+2259)*1+lsi)*1]), &(stack[((hsi*15+2274)*1+lsi)*1]), &(stack[((hsi*15+1975)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1286)*1+lsi)*1]),&(stack[((hsi*21+2940)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2961)*1+lsi)*1]), &(stack[((hsi*21+2940)*1+lsi)*1]), &(stack[((hsi*15+2152)*1+lsi)*1]), &(stack[((hsi*21+2350)*1+lsi)*1]), &(stack[((hsi*21+2371)*1+lsi)*1]), &(stack[((hsi*21+2082)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1258)*1+lsi)*1]),&(stack[((hsi*28+2961)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+1856)*1+lsi)*1]), &(stack[((hsi*3+1865)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2989)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*3+1874)*1+lsi)*1]), &(stack[((hsi*6+1859)*1+lsi)*1]), &(stack[((hsi*6+1868)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1248)*1+lsi)*1]),&(stack[((hsi*10+2989)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1856)*1+lsi)*1]), &(stack[((hsi*10+2989)*1+lsi)*1]), &(stack[((hsi*6+1850)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*10+1918)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1233)*1+lsi)*1]),&(stack[((hsi*15+1856)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2999)*1+lsi)*1]), &(stack[((hsi*15+1856)*1+lsi)*1]), &(stack[((hsi*10+2989)*1+lsi)*1]), &(stack[((hsi*15+1975)*1+lsi)*1]), &(stack[((hsi*15+1990)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1212)*1+lsi)*1]),&(stack[((hsi*21+2999)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3020)*1+lsi)*1]), &(stack[((hsi*21+2999)*1+lsi)*1]), &(stack[((hsi*15+1856)*1+lsi)*1]), &(stack[((hsi*21+2082)*1+lsi)*1]), &(stack[((hsi*21+2103)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1184)*1+lsi)*1]),&(stack[((hsi*28+3020)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1174)*1+lsi)*1]),&(stack[((hsi*10+1918)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1159)*1+lsi)*1]),&(stack[((hsi*15+1990)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1138)*1+lsi)*1]),&(stack[((hsi*21+2103)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+3048)*1+lsi)*1]), &(stack[((hsi*6+2026)*1+lsi)*1]), &(stack[((hsi*3+1877)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3058)*1+lsi)*1]), &(stack[((hsi*10+2042)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*10+3048)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3073)*1+lsi)*1]), &(stack[((hsi*10+2032)*1+lsi)*1]), &(stack[((hsi*6+1943)*1+lsi)*1]), &(stack[((hsi*10+3048)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3088)*1+lsi)*1]), &(stack[((hsi*15+2067)*1+lsi)*1]), &(stack[((hsi*10+1965)*1+lsi)*1]), &(stack[((hsi*15+3073)*1+lsi)*1]), &(stack[((hsi*15+3058)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3109)*1+lsi)*1]), &(stack[((hsi*15+2052)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*15+3058)*1+lsi)*1]), &(stack[((hsi*15+3073)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3130)*1+lsi)*1]), &(stack[((hsi*21+2103)*1+lsi)*1]), &(stack[((hsi*15+1990)*1+lsi)*1]), &(stack[((hsi*21+3109)*1+lsi)*1]), &(stack[((hsi*21+3088)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1110)*1+lsi)*1]),&(stack[((hsi*28+3130)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1100)*1+lsi)*1]),&(stack[((hsi*10+2214)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1085)*1+lsi)*1]),&(stack[((hsi*15+2274)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1064)*1+lsi)*1]),&(stack[((hsi*21+2371)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+3158)*1+lsi)*1]), &(stack[((hsi*10+2310)*1+lsi)*1]), &(stack[((hsi*6+2176)*1+lsi)*1]), &(stack[((hsi*10+3048)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3173)*1+lsi)*1]), &(stack[((hsi*15+2335)*1+lsi)*1]), &(stack[((hsi*10+2249)*1+lsi)*1]), &(stack[((hsi*15+3158)*1+lsi)*1]), &(stack[((hsi*15+3073)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3194)*1+lsi)*1]), &(stack[((hsi*15+2320)*1+lsi)*1]), &(stack[((hsi*10+2239)*1+lsi)*1]), &(stack[((hsi*15+3158)*1+lsi)*1]), &(stack[((hsi*15+3058)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3215)*1+lsi)*1]), &(stack[((hsi*21+2371)*1+lsi)*1]), &(stack[((hsi*15+2274)*1+lsi)*1]), &(stack[((hsi*21+3194)*1+lsi)*1]), &(stack[((hsi*21+3173)*1+lsi)*1]), &(stack[((hsi*21+3109)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1036)*1+lsi)*1]),&(stack[((hsi*28+3215)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1026)*1+lsi)*1]),&(stack[((hsi*10+2467)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1011)*1+lsi)*1]),&(stack[((hsi*15+2502)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+990)*1+lsi)*1]),&(stack[((hsi*21+2574)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*15+2538)*1+lsi)*1]), &(stack[((hsi*10+2477)*1+lsi)*1]), &(stack[((hsi*15+3058)*1+lsi)*1]), &(stack[((hsi*15+3073)*1+lsi)*1]), &(stack[((hsi*15+3158)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3264)*1+lsi)*1]), &(stack[((hsi*21+2574)*1+lsi)*1]), &(stack[((hsi*15+2502)*1+lsi)*1]), &(stack[((hsi*21+3109)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*21+3088)*1+lsi)*1]), &(stack[((hsi*21+3194)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+962)*1+lsi)*1]),&(stack[((hsi*28+3264)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+952)*1+lsi)*1]),&(stack[((hsi*10+2633)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+937)*1+lsi)*1]),&(stack[((hsi*15+2658)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+916)*1+lsi)*1]),&(stack[((hsi*21+2694)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3292)*1+lsi)*1]), &(stack[((hsi*21+2694)*1+lsi)*1]), &(stack[((hsi*15+2658)*1+lsi)*1]), &(stack[((hsi*21+3194)*1+lsi)*1]), &(stack[((hsi*21+3173)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+888)*1+lsi)*1]),&(stack[((hsi*28+3292)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+878)*1+lsi)*1]),&(stack[((hsi*10+2457)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+863)*1+lsi)*1]),&(stack[((hsi*15+2487)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+842)*1+lsi)*1]),&(stack[((hsi*21+2553)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3320)*1+lsi)*1]), &(stack[((hsi*21+2553)*1+lsi)*1]), &(stack[((hsi*15+2487)*1+lsi)*1]), &(stack[((hsi*21+3088)*1+lsi)*1]), &(stack[((hsi*21+3109)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*21+3173)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+814)*1+lsi)*1]),&(stack[((hsi*28+3320)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+804)*1+lsi)*1]),&(stack[((hsi*10+2204)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+789)*1+lsi)*1]),&(stack[((hsi*15+2259)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+768)*1+lsi)*1]),&(stack[((hsi*21+2350)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3348)*1+lsi)*1]), &(stack[((hsi*21+2350)*1+lsi)*1]), &(stack[((hsi*15+2259)*1+lsi)*1]), &(stack[((hsi*21+3173)*1+lsi)*1]), &(stack[((hsi*21+3194)*1+lsi)*1]), &(stack[((hsi*21+3088)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+740)*1+lsi)*1]),&(stack[((hsi*28+3348)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+730)*1+lsi)*1]),&(stack[((hsi*10+1908)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+715)*1+lsi)*1]),&(stack[((hsi*15+1975)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+694)*1+lsi)*1]),&(stack[((hsi*21+2082)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3376)*1+lsi)*1]), &(stack[((hsi*21+2082)*1+lsi)*1]), &(stack[((hsi*15+1975)*1+lsi)*1]), &(stack[((hsi*21+3088)*1+lsi)*1]), &(stack[((hsi*21+3109)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+666)*1+lsi)*1]),&(stack[((hsi*28+3376)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+656)*1+lsi)*1]),&(stack[((hsi*10+1955)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+641)*1+lsi)*1]),&(stack[((hsi*15+2052)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+620)*1+lsi)*1]),&(stack[((hsi*21+3109)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2167)*1+lsi)*1]), &(stack[((hsi*10+3048)*1+lsi)*1]), &(stack[((hsi*6+2026)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3404)*1+lsi)*1]), &(stack[((hsi*15+3073)*1+lsi)*1]), &(stack[((hsi*10+2032)*1+lsi)*1]), &(stack[((hsi*15+2167)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3425)*1+lsi)*1]), &(stack[((hsi*15+3058)*1+lsi)*1]), &(stack[((hsi*10+2042)*1+lsi)*1]), &(stack[((hsi*15+2167)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3446)*1+lsi)*1]), &(stack[((hsi*21+3109)*1+lsi)*1]), &(stack[((hsi*15+2052)*1+lsi)*1]), &(stack[((hsi*21+3425)*1+lsi)*1]), &(stack[((hsi*21+3404)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+592)*1+lsi)*1]),&(stack[((hsi*28+3446)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+582)*1+lsi)*1]),&(stack[((hsi*10+2239)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+567)*1+lsi)*1]),&(stack[((hsi*15+2320)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+546)*1+lsi)*1]),&(stack[((hsi*21+3194)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*15+3158)*1+lsi)*1]), &(stack[((hsi*10+2310)*1+lsi)*1]), &(stack[((hsi*15+2167)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3495)*1+lsi)*1]), &(stack[((hsi*21+3194)*1+lsi)*1]), &(stack[((hsi*15+2320)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*21+3425)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+518)*1+lsi)*1]),&(stack[((hsi*28+3495)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+508)*1+lsi)*1]),&(stack[((hsi*10+2477)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+493)*1+lsi)*1]),&(stack[((hsi*15+2538)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+472)*1+lsi)*1]),&(stack[((hsi*21+3243)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3523)*1+lsi)*1]), &(stack[((hsi*21+3243)*1+lsi)*1]), &(stack[((hsi*15+2538)*1+lsi)*1]), &(stack[((hsi*21+3425)*1+lsi)*1]), &(stack[((hsi*21+3404)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+444)*1+lsi)*1]),&(stack[((hsi*28+3523)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+434)*1+lsi)*1]),&(stack[((hsi*10+2249)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+419)*1+lsi)*1]),&(stack[((hsi*15+2335)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+398)*1+lsi)*1]),&(stack[((hsi*21+3173)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3551)*1+lsi)*1]), &(stack[((hsi*21+3173)*1+lsi)*1]), &(stack[((hsi*15+2335)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*21+3404)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+370)*1+lsi)*1]),&(stack[((hsi*28+3551)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+360)*1+lsi)*1]),&(stack[((hsi*10+1965)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+345)*1+lsi)*1]),&(stack[((hsi*15+2067)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+324)*1+lsi)*1]),&(stack[((hsi*21+3088)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3579)*1+lsi)*1]), &(stack[((hsi*21+3088)*1+lsi)*1]), &(stack[((hsi*15+2067)*1+lsi)*1]), &(stack[((hsi*21+3404)*1+lsi)*1]), &(stack[((hsi*21+3425)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+296)*1+lsi)*1]),&(stack[((hsi*28+3579)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+286)*1+lsi)*1]),&(stack[((hsi*10+2042)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+271)*1+lsi)*1]),&(stack[((hsi*15+3058)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+250)*1+lsi)*1]),&(stack[((hsi*21+3425)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3607)*1+lsi)*1]), &(stack[((hsi*15+2167)*1+lsi)*1]), &(stack[((hsi*10+3048)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3628)*1+lsi)*1]), &(stack[((hsi*21+3425)*1+lsi)*1]), &(stack[((hsi*15+3058)*1+lsi)*1]), &(stack[((hsi*21+3607)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+222)*1+lsi)*1]),&(stack[((hsi*28+3628)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+212)*1+lsi)*1]),&(stack[((hsi*10+2310)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+197)*1+lsi)*1]),&(stack[((hsi*15+3158)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+176)*1+lsi)*1]),&(stack[((hsi*21+3474)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3656)*1+lsi)*1]), &(stack[((hsi*21+3474)*1+lsi)*1]), &(stack[((hsi*15+3158)*1+lsi)*1]), &(stack[((hsi*21+3607)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+148)*1+lsi)*1]),&(stack[((hsi*28+3656)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+138)*1+lsi)*1]),&(stack[((hsi*10+2032)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+123)*1+lsi)*1]),&(stack[((hsi*15+3073)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+102)*1+lsi)*1]),&(stack[((hsi*21+3404)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3684)*1+lsi)*1]), &(stack[((hsi*21+3404)*1+lsi)*1]), &(stack[((hsi*15+3073)*1+lsi)*1]), &(stack[((hsi*21+3607)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+74)*1+lsi)*1]),&(stack[((hsi*28+3684)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+64)*1+lsi)*1]),&(stack[((hsi*10+3048)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+49)*1+lsi)*1]),&(stack[((hsi*15+2167)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+28)*1+lsi)*1]),&(stack[((hsi*21+3607)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3712)*1+lsi)*1]), &(stack[((hsi*21+3607)*1+lsi)*1]), &(stack[((hsi*15+2167)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+3712)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1850 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
