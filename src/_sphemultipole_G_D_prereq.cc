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
void _sphemultipole_G_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1603)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1606)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+1606)*1+lsi)*1]), &(stack[((hsi*3+1603)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1615)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1618)*1+lsi)*1]), &(stack[((hsi*3+1615)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+1603)*1+lsi)*1]), &(stack[((hsi*3+1606)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1624)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1627)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+1615)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*6+1627)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*6+1618)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1643)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1646)*1+lsi)*1]), &(stack[((hsi*3+1643)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*3+1615)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1652)*1+lsi)*1]), &(stack[((hsi*6+1646)*1+lsi)*1]), &(stack[((hsi*3+1643)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*6+1618)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1662)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*3+1662)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+1643)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1671)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*3+1662)*1+lsi)*1]), &(stack[((hsi*6+1646)*1+lsi)*1]), &(stack[((hsi*6+1627)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1681)*1+lsi)*1]), &(stack[((hsi*10+1671)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*10+1652)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1585)*1+lsi)*1]),&(stack[((hsi*15+1681)*1+lsi)*1]),15);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1662)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*3+1603)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+1662)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1696)*1+lsi)*1]), &(stack[((hsi*3+1606)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+1662)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1702)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*6+1696)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1712)*1+lsi)*1]), &(stack[((hsi*6+1618)*1+lsi)*1]), &(stack[((hsi*3+1615)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*6+1696)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1722)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*6+1627)*1+lsi)*1]), &(stack[((hsi*10+1712)*1+lsi)*1]), &(stack[((hsi*10+1702)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1737)*1+lsi)*1]), &(stack[((hsi*10+1652)*1+lsi)*1]), &(stack[((hsi*6+1646)*1+lsi)*1]), &(stack[((hsi*10+1702)*1+lsi)*1]), &(stack[((hsi*10+1712)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1752)*1+lsi)*1]), &(stack[((hsi*15+1681)*1+lsi)*1]), &(stack[((hsi*10+1671)*1+lsi)*1]), &(stack[((hsi*15+1737)*1+lsi)*1]), &(stack[((hsi*15+1722)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1564)*1+lsi)*1]),&(stack[((hsi*21+1752)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1671)*1+lsi)*1]), &(stack[((hsi*3+1662)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1773)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*3+1603)*1+lsi)*1]), &(stack[((hsi*6+1671)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1783)*1+lsi)*1]), &(stack[((hsi*6+1696)*1+lsi)*1]), &(stack[((hsi*3+1606)*1+lsi)*1]), &(stack[((hsi*6+1671)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1793)*1+lsi)*1]), &(stack[((hsi*10+1702)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*10+1783)*1+lsi)*1]), &(stack[((hsi*10+1773)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1808)*1+lsi)*1]), &(stack[((hsi*10+1712)*1+lsi)*1]), &(stack[((hsi*6+1618)*1+lsi)*1]), &(stack[((hsi*10+1773)*1+lsi)*1]), &(stack[((hsi*10+1783)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1823)*1+lsi)*1]), &(stack[((hsi*15+1722)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*15+1808)*1+lsi)*1]), &(stack[((hsi*15+1793)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1844)*1+lsi)*1]), &(stack[((hsi*15+1737)*1+lsi)*1]), &(stack[((hsi*10+1652)*1+lsi)*1]), &(stack[((hsi*15+1793)*1+lsi)*1]), &(stack[((hsi*15+1808)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1865)*1+lsi)*1]), &(stack[((hsi*21+1752)*1+lsi)*1]), &(stack[((hsi*15+1681)*1+lsi)*1]), &(stack[((hsi*21+1844)*1+lsi)*1]), &(stack[((hsi*21+1823)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1536)*1+lsi)*1]),&(stack[((hsi*28+1865)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1677)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1893)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1896)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1899)*1+lsi)*1]), &(stack[((hsi*3+1677)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+1896)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]), &(stack[((hsi*3+1615)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1905)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1908)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+1905)*1+lsi)*1]), &(stack[((hsi*3+1606)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1914)*1+lsi)*1]), &(stack[((hsi*3+1896)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+1905)*1+lsi)*1]), &(stack[((hsi*3+1603)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1920)*1+lsi)*1]), &(stack[((hsi*6+1899)*1+lsi)*1]), &(stack[((hsi*3+1677)*1+lsi)*1]), &(stack[((hsi*6+1914)*1+lsi)*1]), &(stack[((hsi*6+1908)*1+lsi)*1]), &(stack[((hsi*6+1618)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1930)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1933)*1+lsi)*1]), &(stack[((hsi*3+1930)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+1893)*1+lsi)*1]), &(stack[((hsi*3+1896)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1939)*1+lsi)*1]), &(stack[((hsi*6+1933)*1+lsi)*1]), &(stack[((hsi*3+1930)*1+lsi)*1]), &(stack[((hsi*6+1908)*1+lsi)*1]), &(stack[((hsi*6+1914)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1949)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1952)*1+lsi)*1]), &(stack[((hsi*3+1949)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+1930)*1+lsi)*1]), &(stack[((hsi*3+1677)*1+lsi)*1]), &(stack[((hsi*3+1643)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1958)*1+lsi)*1]), &(stack[((hsi*6+1952)*1+lsi)*1]), &(stack[((hsi*3+1949)*1+lsi)*1]), &(stack[((hsi*6+1933)*1+lsi)*1]), &(stack[((hsi*6+1899)*1+lsi)*1]), &(stack[((hsi*6+1646)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1968)*1+lsi)*1]), &(stack[((hsi*10+1958)*1+lsi)*1]), &(stack[((hsi*6+1952)*1+lsi)*1]), &(stack[((hsi*10+1939)*1+lsi)*1]), &(stack[((hsi*10+1920)*1+lsi)*1]), &(stack[((hsi*10+1652)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1521)*1+lsi)*1]),&(stack[((hsi*15+1968)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+1662)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1983)*1+lsi)*1]), &(stack[((hsi*6+1908)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*6+1696)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1993)*1+lsi)*1]), &(stack[((hsi*6+1914)*1+lsi)*1]), &(stack[((hsi*3+1896)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2003)*1+lsi)*1]), &(stack[((hsi*10+1920)*1+lsi)*1]), &(stack[((hsi*6+1899)*1+lsi)*1]), &(stack[((hsi*10+1993)*1+lsi)*1]), &(stack[((hsi*10+1983)*1+lsi)*1]), &(stack[((hsi*10+1712)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2018)*1+lsi)*1]), &(stack[((hsi*10+1939)*1+lsi)*1]), &(stack[((hsi*6+1933)*1+lsi)*1]), &(stack[((hsi*10+1983)*1+lsi)*1]), &(stack[((hsi*10+1993)*1+lsi)*1]), &(stack[((hsi*10+1702)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2033)*1+lsi)*1]), &(stack[((hsi*15+1968)*1+lsi)*1]), &(stack[((hsi*10+1958)*1+lsi)*1]), &(stack[((hsi*15+2018)*1+lsi)*1]), &(stack[((hsi*15+2003)*1+lsi)*1]), &(stack[((hsi*15+1737)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1500)*1+lsi)*1]),&(stack[((hsi*21+2033)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]), &(stack[((hsi*6+1671)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2054)*1+lsi)*1]), &(stack[((hsi*10+1983)*1+lsi)*1]), &(stack[((hsi*6+1908)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*10+1783)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2069)*1+lsi)*1]), &(stack[((hsi*10+1993)*1+lsi)*1]), &(stack[((hsi*6+1914)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*10+1773)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2084)*1+lsi)*1]), &(stack[((hsi*15+2003)*1+lsi)*1]), &(stack[((hsi*10+1920)*1+lsi)*1]), &(stack[((hsi*15+2069)*1+lsi)*1]), &(stack[((hsi*15+2054)*1+lsi)*1]), &(stack[((hsi*15+1808)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2105)*1+lsi)*1]), &(stack[((hsi*15+2018)*1+lsi)*1]), &(stack[((hsi*10+1939)*1+lsi)*1]), &(stack[((hsi*15+2054)*1+lsi)*1]), &(stack[((hsi*15+2069)*1+lsi)*1]), &(stack[((hsi*15+1793)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2126)*1+lsi)*1]), &(stack[((hsi*21+2033)*1+lsi)*1]), &(stack[((hsi*15+1968)*1+lsi)*1]), &(stack[((hsi*21+2105)*1+lsi)*1]), &(stack[((hsi*21+2084)*1+lsi)*1]), &(stack[((hsi*21+1844)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1472)*1+lsi)*1]),&(stack[((hsi*28+2126)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1965)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2157)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+1615)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(stack[((hsi*3+1896)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+1606)*1+lsi)*1]), &(stack[((hsi*3+1603)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2169)*1+lsi)*1]), &(stack[((hsi*6+2157)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(stack[((hsi*6+1618)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*6+1914)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1905)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1603)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(stack[((hsi*3+1615)*1+lsi)*1]), &(stack[((hsi*3+1893)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2179)*1+lsi)*1]), &(stack[((hsi*6+1603)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*6+1618)*1+lsi)*1]), &(stack[((hsi*6+1908)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+1643)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(stack[((hsi*3+1930)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2189)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*6+1646)*1+lsi)*1]), &(stack[((hsi*6+1603)*1+lsi)*1]), &(stack[((hsi*6+1627)*1+lsi)*1]), &(stack[((hsi*6+2157)*1+lsi)*1]), &(stack[((hsi*6+1933)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2199)*1+lsi)*1]), &(stack[((hsi*10+2189)*1+lsi)*1]), &(stack[((hsi*6+1609)*1+lsi)*1]), &(stack[((hsi*10+1652)*1+lsi)*1]), &(stack[((hsi*10+2179)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*10+2169)*1+lsi)*1]), &(stack[((hsi*10+1939)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1457)*1+lsi)*1]),&(stack[((hsi*15+2199)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1609)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(stack[((hsi*6+1696)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2214)*1+lsi)*1]), &(stack[((hsi*10+2169)*1+lsi)*1]), &(stack[((hsi*6+2157)*1+lsi)*1]), &(stack[((hsi*10+1712)*1+lsi)*1]), &(stack[((hsi*10+1702)*1+lsi)*1]), &(stack[((hsi*10+1609)*1+lsi)*1]), &(stack[((hsi*10+1993)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2229)*1+lsi)*1]), &(stack[((hsi*10+2179)*1+lsi)*1]), &(stack[((hsi*6+1603)*1+lsi)*1]), &(stack[((hsi*10+1702)*1+lsi)*1]), &(stack[((hsi*10+1609)*1+lsi)*1]), &(stack[((hsi*10+1712)*1+lsi)*1]), &(stack[((hsi*10+1983)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2244)*1+lsi)*1]), &(stack[((hsi*15+2199)*1+lsi)*1]), &(stack[((hsi*10+2189)*1+lsi)*1]), &(stack[((hsi*15+1737)*1+lsi)*1]), &(stack[((hsi*15+2229)*1+lsi)*1]), &(stack[((hsi*15+1722)*1+lsi)*1]), &(stack[((hsi*15+2214)*1+lsi)*1]), &(stack[((hsi*15+2018)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1436)*1+lsi)*1]),&(stack[((hsi*21+2244)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2265)*1+lsi)*1]), &(stack[((hsi*10+1609)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*10+1783)*1+lsi)*1]), &(stack[((hsi*10+1773)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2280)*1+lsi)*1]), &(stack[((hsi*15+2214)*1+lsi)*1]), &(stack[((hsi*10+2169)*1+lsi)*1]), &(stack[((hsi*15+1808)*1+lsi)*1]), &(stack[((hsi*15+1793)*1+lsi)*1]), &(stack[((hsi*15+2265)*1+lsi)*1]), &(stack[((hsi*15+2069)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2301)*1+lsi)*1]), &(stack[((hsi*15+2229)*1+lsi)*1]), &(stack[((hsi*10+2179)*1+lsi)*1]), &(stack[((hsi*15+1793)*1+lsi)*1]), &(stack[((hsi*15+2265)*1+lsi)*1]), &(stack[((hsi*15+1808)*1+lsi)*1]), &(stack[((hsi*15+2054)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2322)*1+lsi)*1]), &(stack[((hsi*21+2244)*1+lsi)*1]), &(stack[((hsi*15+2199)*1+lsi)*1]), &(stack[((hsi*21+1844)*1+lsi)*1]), &(stack[((hsi*21+2301)*1+lsi)*1]), &(stack[((hsi*21+1823)*1+lsi)*1]), &(stack[((hsi*21+2280)*1+lsi)*1]), &(stack[((hsi*21+2105)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1408)*1+lsi)*1]),&(stack[((hsi*28+2322)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2189)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+1893)*1+lsi)*1]), &(stack[((hsi*3+1896)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+2189)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*6+1908)*1+lsi)*1]), &(stack[((hsi*6+1914)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+1930)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*3+1677)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(stack[((hsi*6+1933)*1+lsi)*1]), &(stack[((hsi*6+2189)*1+lsi)*1]), &(stack[((hsi*6+1899)*1+lsi)*1]), &(stack[((hsi*6+1603)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2360)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*10+1939)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*10+1920)*1+lsi)*1]), &(stack[((hsi*10+2179)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1393)*1+lsi)*1]),&(stack[((hsi*15+2360)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2375)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+2189)*1+lsi)*1]), &(stack[((hsi*10+1983)*1+lsi)*1]), &(stack[((hsi*10+1993)*1+lsi)*1]), &(stack[((hsi*10+1609)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2390)*1+lsi)*1]), &(stack[((hsi*15+2360)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*15+2018)*1+lsi)*1]), &(stack[((hsi*15+2375)*1+lsi)*1]), &(stack[((hsi*15+2003)*1+lsi)*1]), &(stack[((hsi*15+2229)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1372)*1+lsi)*1]),&(stack[((hsi*21+2390)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2411)*1+lsi)*1]), &(stack[((hsi*15+2375)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*15+2054)*1+lsi)*1]), &(stack[((hsi*15+2069)*1+lsi)*1]), &(stack[((hsi*15+2265)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2432)*1+lsi)*1]), &(stack[((hsi*21+2390)*1+lsi)*1]), &(stack[((hsi*15+2360)*1+lsi)*1]), &(stack[((hsi*21+2105)*1+lsi)*1]), &(stack[((hsi*21+2411)*1+lsi)*1]), &(stack[((hsi*21+2084)*1+lsi)*1]), &(stack[((hsi*21+2301)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1344)*1+lsi)*1]),&(stack[((hsi*28+2432)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+1905)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(stack[((hsi*6+1603)*1+lsi)*1]), &(stack[((hsi*6+2157)*1+lsi)*1]), &(stack[((hsi*6+2189)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2460)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*10+2179)*1+lsi)*1]), &(stack[((hsi*10+2169)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1329)*1+lsi)*1]),&(stack[((hsi*15+2460)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2475)*1+lsi)*1]), &(stack[((hsi*15+2460)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*15+2229)*1+lsi)*1]), &(stack[((hsi*15+2214)*1+lsi)*1]), &(stack[((hsi*15+2375)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1308)*1+lsi)*1]),&(stack[((hsi*21+2475)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2496)*1+lsi)*1]), &(stack[((hsi*21+2475)*1+lsi)*1]), &(stack[((hsi*15+2460)*1+lsi)*1]), &(stack[((hsi*21+2301)*1+lsi)*1]), &(stack[((hsi*21+2280)*1+lsi)*1]), &(stack[((hsi*21+2411)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1280)*1+lsi)*1]),&(stack[((hsi*28+2496)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+1677)*1+lsi)*1]), &(stack[((hsi*3+1930)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+2154)*1+lsi)*1]), &(stack[((hsi*6+1899)*1+lsi)*1]), &(stack[((hsi*6+1933)*1+lsi)*1]), &(stack[((hsi*6+2189)*1+lsi)*1]), &(stack[((hsi*6+2157)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2524)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*10+1920)*1+lsi)*1]), &(stack[((hsi*10+1939)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*10+2169)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1265)*1+lsi)*1]),&(stack[((hsi*15+2524)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2539)*1+lsi)*1]), &(stack[((hsi*15+2524)*1+lsi)*1]), &(stack[((hsi*10+1908)*1+lsi)*1]), &(stack[((hsi*15+2003)*1+lsi)*1]), &(stack[((hsi*15+2018)*1+lsi)*1]), &(stack[((hsi*15+2375)*1+lsi)*1]), &(stack[((hsi*15+2214)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1244)*1+lsi)*1]),&(stack[((hsi*21+2539)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2560)*1+lsi)*1]), &(stack[((hsi*21+2539)*1+lsi)*1]), &(stack[((hsi*15+2524)*1+lsi)*1]), &(stack[((hsi*21+2084)*1+lsi)*1]), &(stack[((hsi*21+2105)*1+lsi)*1]), &(stack[((hsi*21+2411)*1+lsi)*1]), &(stack[((hsi*21+2280)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1216)*1+lsi)*1]),&(stack[((hsi*28+2560)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(stack[((hsi*3+1643)*1+lsi)*1]), &(stack[((hsi*3+1905)*1+lsi)*1]), &(stack[((hsi*3+1677)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*3+1600)*1+lsi)*1]), &(stack[((hsi*6+1627)*1+lsi)*1]), &(stack[((hsi*6+2157)*1+lsi)*1]), &(stack[((hsi*6+1646)*1+lsi)*1]), &(stack[((hsi*6+1603)*1+lsi)*1]), &(stack[((hsi*6+1899)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1905)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+2163)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*10+2169)*1+lsi)*1]), &(stack[((hsi*10+1652)*1+lsi)*1]), &(stack[((hsi*10+2179)*1+lsi)*1]), &(stack[((hsi*10+1920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1201)*1+lsi)*1]),&(stack[((hsi*15+1905)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2154)*1+lsi)*1]), &(stack[((hsi*15+1905)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*15+1722)*1+lsi)*1]), &(stack[((hsi*15+2214)*1+lsi)*1]), &(stack[((hsi*15+1737)*1+lsi)*1]), &(stack[((hsi*15+2229)*1+lsi)*1]), &(stack[((hsi*15+2003)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1180)*1+lsi)*1]),&(stack[((hsi*21+2154)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2588)*1+lsi)*1]), &(stack[((hsi*21+2154)*1+lsi)*1]), &(stack[((hsi*15+1905)*1+lsi)*1]), &(stack[((hsi*21+1823)*1+lsi)*1]), &(stack[((hsi*21+2280)*1+lsi)*1]), &(stack[((hsi*21+1844)*1+lsi)*1]), &(stack[((hsi*21+2301)*1+lsi)*1]), &(stack[((hsi*21+2084)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1152)*1+lsi)*1]),&(stack[((hsi*28+2588)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1965)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1893)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+1677)*1+lsi)*1]), &(stack[((hsi*3+1930)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+1893)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(stack[((hsi*6+1899)*1+lsi)*1]), &(stack[((hsi*6+1933)*1+lsi)*1]), &(stack[((hsi*6+1627)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2175)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+1893)*1+lsi)*1]), &(stack[((hsi*10+1920)*1+lsi)*1]), &(stack[((hsi*10+1939)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1137)*1+lsi)*1]),&(stack[((hsi*15+2175)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1920)*1+lsi)*1]), &(stack[((hsi*15+2175)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*15+2003)*1+lsi)*1]), &(stack[((hsi*15+2018)*1+lsi)*1]), &(stack[((hsi*15+1722)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1116)*1+lsi)*1]),&(stack[((hsi*21+1920)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2616)*1+lsi)*1]), &(stack[((hsi*21+1920)*1+lsi)*1]), &(stack[((hsi*15+2175)*1+lsi)*1]), &(stack[((hsi*21+2084)*1+lsi)*1]), &(stack[((hsi*21+2105)*1+lsi)*1]), &(stack[((hsi*21+1823)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1088)*1+lsi)*1]),&(stack[((hsi*28+2616)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1965)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1893)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*3+1643)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+1893)*1+lsi)*1]), &(stack[((hsi*3+1965)*1+lsi)*1]), &(stack[((hsi*6+1627)*1+lsi)*1]), &(stack[((hsi*6+1646)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2644)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+1893)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*10+1652)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1073)*1+lsi)*1]),&(stack[((hsi*15+2644)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1619)*1+lsi)*1]), &(stack[((hsi*15+2644)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*15+1722)*1+lsi)*1]), &(stack[((hsi*15+1737)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1052)*1+lsi)*1]),&(stack[((hsi*21+1619)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2659)*1+lsi)*1]), &(stack[((hsi*21+1619)*1+lsi)*1]), &(stack[((hsi*15+2644)*1+lsi)*1]), &(stack[((hsi*21+1823)*1+lsi)*1]), &(stack[((hsi*21+1844)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1024)*1+lsi)*1]),&(stack[((hsi*28+2659)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1009)*1+lsi)*1]),&(stack[((hsi*15+1737)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+988)*1+lsi)*1]),&(stack[((hsi*21+1844)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+1671)*1+lsi)*1]), &(stack[((hsi*3+1662)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1640)*1+lsi)*1]), &(stack[((hsi*10+1783)*1+lsi)*1]), &(stack[((hsi*6+1696)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2687)*1+lsi)*1]), &(stack[((hsi*10+1773)*1+lsi)*1]), &(stack[((hsi*6+1665)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2702)*1+lsi)*1]), &(stack[((hsi*15+1808)*1+lsi)*1]), &(stack[((hsi*10+1712)*1+lsi)*1]), &(stack[((hsi*15+2687)*1+lsi)*1]), &(stack[((hsi*15+1640)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*15+1793)*1+lsi)*1]), &(stack[((hsi*10+1702)*1+lsi)*1]), &(stack[((hsi*15+1640)*1+lsi)*1]), &(stack[((hsi*15+2687)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2744)*1+lsi)*1]), &(stack[((hsi*21+1844)*1+lsi)*1]), &(stack[((hsi*15+1737)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*21+2702)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+960)*1+lsi)*1]),&(stack[((hsi*28+2744)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+945)*1+lsi)*1]),&(stack[((hsi*15+2018)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+924)*1+lsi)*1]),&(stack[((hsi*21+2105)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1696)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*6+1949)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2772)*1+lsi)*1]), &(stack[((hsi*15+2069)*1+lsi)*1]), &(stack[((hsi*10+1993)*1+lsi)*1]), &(stack[((hsi*15+1696)*1+lsi)*1]), &(stack[((hsi*15+2687)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2793)*1+lsi)*1]), &(stack[((hsi*15+2054)*1+lsi)*1]), &(stack[((hsi*10+1983)*1+lsi)*1]), &(stack[((hsi*15+1696)*1+lsi)*1]), &(stack[((hsi*15+1640)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2814)*1+lsi)*1]), &(stack[((hsi*21+2105)*1+lsi)*1]), &(stack[((hsi*15+2018)*1+lsi)*1]), &(stack[((hsi*21+2793)*1+lsi)*1]), &(stack[((hsi*21+2772)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+896)*1+lsi)*1]),&(stack[((hsi*28+2814)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+881)*1+lsi)*1]),&(stack[((hsi*15+2229)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+860)*1+lsi)*1]),&(stack[((hsi*21+2301)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2842)*1+lsi)*1]), &(stack[((hsi*15+2265)*1+lsi)*1]), &(stack[((hsi*10+1609)*1+lsi)*1]), &(stack[((hsi*15+1640)*1+lsi)*1]), &(stack[((hsi*15+2687)*1+lsi)*1]), &(stack[((hsi*15+1696)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2863)*1+lsi)*1]), &(stack[((hsi*21+2301)*1+lsi)*1]), &(stack[((hsi*15+2229)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*21+2842)*1+lsi)*1]), &(stack[((hsi*21+2702)*1+lsi)*1]), &(stack[((hsi*21+2793)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+832)*1+lsi)*1]),&(stack[((hsi*28+2863)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+817)*1+lsi)*1]),&(stack[((hsi*15+2375)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+796)*1+lsi)*1]),&(stack[((hsi*21+2411)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2891)*1+lsi)*1]), &(stack[((hsi*21+2411)*1+lsi)*1]), &(stack[((hsi*15+2375)*1+lsi)*1]), &(stack[((hsi*21+2793)*1+lsi)*1]), &(stack[((hsi*21+2772)*1+lsi)*1]), &(stack[((hsi*21+2842)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+768)*1+lsi)*1]),&(stack[((hsi*28+2891)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+753)*1+lsi)*1]),&(stack[((hsi*15+2214)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+732)*1+lsi)*1]),&(stack[((hsi*21+2280)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2919)*1+lsi)*1]), &(stack[((hsi*21+2280)*1+lsi)*1]), &(stack[((hsi*15+2214)*1+lsi)*1]), &(stack[((hsi*21+2702)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*21+2842)*1+lsi)*1]), &(stack[((hsi*21+2772)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+704)*1+lsi)*1]),&(stack[((hsi*28+2919)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+689)*1+lsi)*1]),&(stack[((hsi*15+2003)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+668)*1+lsi)*1]),&(stack[((hsi*21+2084)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2947)*1+lsi)*1]), &(stack[((hsi*21+2084)*1+lsi)*1]), &(stack[((hsi*15+2003)*1+lsi)*1]), &(stack[((hsi*21+2772)*1+lsi)*1]), &(stack[((hsi*21+2793)*1+lsi)*1]), &(stack[((hsi*21+2702)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+640)*1+lsi)*1]),&(stack[((hsi*28+2947)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+625)*1+lsi)*1]),&(stack[((hsi*15+1722)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+604)*1+lsi)*1]),&(stack[((hsi*21+1823)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2975)*1+lsi)*1]), &(stack[((hsi*21+1823)*1+lsi)*1]), &(stack[((hsi*15+1722)*1+lsi)*1]), &(stack[((hsi*21+2702)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+576)*1+lsi)*1]),&(stack[((hsi*28+2975)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+561)*1+lsi)*1]),&(stack[((hsi*15+1793)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+540)*1+lsi)*1]),&(stack[((hsi*21+2723)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1983)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]), &(stack[((hsi*6+1671)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1655)*1+lsi)*1]), &(stack[((hsi*15+2687)*1+lsi)*1]), &(stack[((hsi*10+1773)*1+lsi)*1]), &(stack[((hsi*15+1983)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3003)*1+lsi)*1]), &(stack[((hsi*15+1640)*1+lsi)*1]), &(stack[((hsi*10+1783)*1+lsi)*1]), &(stack[((hsi*15+1983)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3024)*1+lsi)*1]), &(stack[((hsi*21+2723)*1+lsi)*1]), &(stack[((hsi*15+1793)*1+lsi)*1]), &(stack[((hsi*21+3003)*1+lsi)*1]), &(stack[((hsi*21+1655)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+512)*1+lsi)*1]),&(stack[((hsi*28+3024)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+497)*1+lsi)*1]),&(stack[((hsi*15+2054)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+476)*1+lsi)*1]),&(stack[((hsi*21+2793)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+3052)*1+lsi)*1]), &(stack[((hsi*15+1696)*1+lsi)*1]), &(stack[((hsi*10+1955)*1+lsi)*1]), &(stack[((hsi*15+1983)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3073)*1+lsi)*1]), &(stack[((hsi*21+2793)*1+lsi)*1]), &(stack[((hsi*15+2054)*1+lsi)*1]), &(stack[((hsi*21+3052)*1+lsi)*1]), &(stack[((hsi*21+3003)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+448)*1+lsi)*1]),&(stack[((hsi*28+3073)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+433)*1+lsi)*1]),&(stack[((hsi*15+2265)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+412)*1+lsi)*1]),&(stack[((hsi*21+2842)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3101)*1+lsi)*1]), &(stack[((hsi*21+2842)*1+lsi)*1]), &(stack[((hsi*15+2265)*1+lsi)*1]), &(stack[((hsi*21+3003)*1+lsi)*1]), &(stack[((hsi*21+1655)*1+lsi)*1]), &(stack[((hsi*21+3052)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+384)*1+lsi)*1]),&(stack[((hsi*28+3101)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+369)*1+lsi)*1]),&(stack[((hsi*15+2069)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+348)*1+lsi)*1]),&(stack[((hsi*21+2772)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3129)*1+lsi)*1]), &(stack[((hsi*21+2772)*1+lsi)*1]), &(stack[((hsi*15+2069)*1+lsi)*1]), &(stack[((hsi*21+3052)*1+lsi)*1]), &(stack[((hsi*21+1655)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+320)*1+lsi)*1]),&(stack[((hsi*28+3129)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+305)*1+lsi)*1]),&(stack[((hsi*15+1808)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+284)*1+lsi)*1]),&(stack[((hsi*21+2702)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3157)*1+lsi)*1]), &(stack[((hsi*21+2702)*1+lsi)*1]), &(stack[((hsi*15+1808)*1+lsi)*1]), &(stack[((hsi*21+1655)*1+lsi)*1]), &(stack[((hsi*21+3003)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+256)*1+lsi)*1]),&(stack[((hsi*28+3157)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+241)*1+lsi)*1]),&(stack[((hsi*15+1640)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+220)*1+lsi)*1]),&(stack[((hsi*21+3003)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1941)*1+lsi)*1]), &(stack[((hsi*15+1983)*1+lsi)*1]), &(stack[((hsi*10+2350)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3185)*1+lsi)*1]), &(stack[((hsi*21+3003)*1+lsi)*1]), &(stack[((hsi*15+1640)*1+lsi)*1]), &(stack[((hsi*21+1941)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+192)*1+lsi)*1]),&(stack[((hsi*28+3185)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+177)*1+lsi)*1]),&(stack[((hsi*15+1696)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+156)*1+lsi)*1]),&(stack[((hsi*21+3052)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3213)*1+lsi)*1]), &(stack[((hsi*21+3052)*1+lsi)*1]), &(stack[((hsi*15+1696)*1+lsi)*1]), &(stack[((hsi*21+1941)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+128)*1+lsi)*1]),&(stack[((hsi*28+3213)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+113)*1+lsi)*1]),&(stack[((hsi*15+2687)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+92)*1+lsi)*1]),&(stack[((hsi*21+1655)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3241)*1+lsi)*1]), &(stack[((hsi*21+1655)*1+lsi)*1]), &(stack[((hsi*15+2687)*1+lsi)*1]), &(stack[((hsi*21+1941)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+64)*1+lsi)*1]),&(stack[((hsi*28+3241)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+49)*1+lsi)*1]),&(stack[((hsi*15+1983)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+28)*1+lsi)*1]),&(stack[((hsi*21+1941)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+3269)*1+lsi)*1]), &(stack[((hsi*21+1941)*1+lsi)*1]), &(stack[((hsi*15+1983)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+3269)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1600 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
