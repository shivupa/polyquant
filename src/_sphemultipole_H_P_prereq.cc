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
void _sphemultipole_H_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1225)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1228)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1231)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1234)*1+lsi)*1]), &(stack[((hsi*3+1225)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+1231)*1+lsi)*1]), &(stack[((hsi*3+1228)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1240)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*3+1228)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+1240)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*3+1231)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+1240)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*6+1234)*1+lsi)*1]), &(stack[((hsi*3+1225)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]));
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1265)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*3+1265)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+1228)*1+lsi)*1]), &(stack[((hsi*3+1231)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1274)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*3+1265)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1284)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*3+1284)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+1265)*1+lsi)*1]), &(stack[((hsi*3+1225)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*3+1284)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*6+1234)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1303)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*10+1274)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1318)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1321)*1+lsi)*1]), &(stack[((hsi*3+1318)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+1225)*1+lsi)*1]), &(stack[((hsi*3+1265)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1327)*1+lsi)*1]), &(stack[((hsi*6+1321)*1+lsi)*1]), &(stack[((hsi*3+1318)*1+lsi)*1]), &(stack[((hsi*6+1234)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1337)*1+lsi)*1]), &(stack[((hsi*10+1327)*1+lsi)*1]), &(stack[((hsi*6+1321)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*10+1274)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1352)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1355)*1+lsi)*1]), &(stack[((hsi*3+1352)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+1318)*1+lsi)*1]), &(stack[((hsi*3+1284)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1361)*1+lsi)*1]), &(stack[((hsi*6+1355)*1+lsi)*1]), &(stack[((hsi*3+1352)*1+lsi)*1]), &(stack[((hsi*6+1321)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1371)*1+lsi)*1]), &(stack[((hsi*10+1361)*1+lsi)*1]), &(stack[((hsi*6+1355)*1+lsi)*1]), &(stack[((hsi*10+1327)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1386)*1+lsi)*1]), &(stack[((hsi*15+1371)*1+lsi)*1]), &(stack[((hsi*10+1361)*1+lsi)*1]), &(stack[((hsi*15+1337)*1+lsi)*1]), &(stack[((hsi*15+1303)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1204)*1+lsi)*1]),&(stack[((hsi*21+1386)*1+lsi)*1]),21);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1352)*1+lsi)*1]), &(stack[((hsi*3+1240)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1358)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*3+1228)*1+lsi)*1]), &(stack[((hsi*6+1352)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1407)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*3+1231)*1+lsi)*1]), &(stack[((hsi*6+1352)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1417)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*6+1234)*1+lsi)*1]), &(stack[((hsi*10+1407)*1+lsi)*1]), &(stack[((hsi*10+1358)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1432)*1+lsi)*1]), &(stack[((hsi*10+1274)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*10+1358)*1+lsi)*1]), &(stack[((hsi*10+1407)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1447)*1+lsi)*1]), &(stack[((hsi*15+1303)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*15+1432)*1+lsi)*1]), &(stack[((hsi*15+1417)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*15+1337)*1+lsi)*1]), &(stack[((hsi*10+1327)*1+lsi)*1]), &(stack[((hsi*15+1417)*1+lsi)*1]), &(stack[((hsi*15+1432)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1489)*1+lsi)*1]), &(stack[((hsi*21+1386)*1+lsi)*1]), &(stack[((hsi*15+1371)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*21+1447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1176)*1+lsi)*1]),&(stack[((hsi*28+1489)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1368)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1371)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1374)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1377)*1+lsi)*1]), &(stack[((hsi*3+1368)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+1374)*1+lsi)*1]), &(stack[((hsi*3+1371)*1+lsi)*1]), &(stack[((hsi*3+1265)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1383)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1517)*1+lsi)*1]), &(stack[((hsi*3+1371)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*3+1231)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1523)*1+lsi)*1]), &(stack[((hsi*3+1374)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*3+1228)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1529)*1+lsi)*1]), &(stack[((hsi*6+1377)*1+lsi)*1]), &(stack[((hsi*3+1368)*1+lsi)*1]), &(stack[((hsi*6+1523)*1+lsi)*1]), &(stack[((hsi*6+1517)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+1240)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1545)*1+lsi)*1]), &(stack[((hsi*6+1517)*1+lsi)*1]), &(stack[((hsi*3+1371)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1555)*1+lsi)*1]), &(stack[((hsi*6+1523)*1+lsi)*1]), &(stack[((hsi*3+1374)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1565)*1+lsi)*1]), &(stack[((hsi*10+1529)*1+lsi)*1]), &(stack[((hsi*6+1377)*1+lsi)*1]), &(stack[((hsi*10+1555)*1+lsi)*1]), &(stack[((hsi*10+1545)*1+lsi)*1]), &(stack[((hsi*10+1274)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1580)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1583)*1+lsi)*1]), &(stack[((hsi*3+1580)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+1371)*1+lsi)*1]), &(stack[((hsi*3+1374)*1+lsi)*1]), &(stack[((hsi*3+1225)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1589)*1+lsi)*1]), &(stack[((hsi*6+1583)*1+lsi)*1]), &(stack[((hsi*3+1580)*1+lsi)*1]), &(stack[((hsi*6+1517)*1+lsi)*1]), &(stack[((hsi*6+1523)*1+lsi)*1]), &(stack[((hsi*6+1234)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1599)*1+lsi)*1]), &(stack[((hsi*10+1589)*1+lsi)*1]), &(stack[((hsi*6+1583)*1+lsi)*1]), &(stack[((hsi*10+1545)*1+lsi)*1]), &(stack[((hsi*10+1555)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1614)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1614)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+1580)*1+lsi)*1]), &(stack[((hsi*3+1368)*1+lsi)*1]), &(stack[((hsi*3+1318)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1623)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1614)*1+lsi)*1]), &(stack[((hsi*6+1583)*1+lsi)*1]), &(stack[((hsi*6+1377)*1+lsi)*1]), &(stack[((hsi*6+1321)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1633)*1+lsi)*1]), &(stack[((hsi*10+1623)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*10+1589)*1+lsi)*1]), &(stack[((hsi*10+1529)*1+lsi)*1]), &(stack[((hsi*10+1327)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1648)*1+lsi)*1]), &(stack[((hsi*15+1633)*1+lsi)*1]), &(stack[((hsi*10+1623)*1+lsi)*1]), &(stack[((hsi*15+1599)*1+lsi)*1]), &(stack[((hsi*15+1565)*1+lsi)*1]), &(stack[((hsi*15+1337)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1155)*1+lsi)*1]),&(stack[((hsi*21+1648)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1614)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*6+1352)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*10+1545)*1+lsi)*1]), &(stack[((hsi*6+1517)*1+lsi)*1]), &(stack[((hsi*10+1614)*1+lsi)*1]), &(stack[((hsi*10+1407)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1684)*1+lsi)*1]), &(stack[((hsi*10+1555)*1+lsi)*1]), &(stack[((hsi*6+1523)*1+lsi)*1]), &(stack[((hsi*10+1614)*1+lsi)*1]), &(stack[((hsi*10+1358)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1699)*1+lsi)*1]), &(stack[((hsi*15+1565)*1+lsi)*1]), &(stack[((hsi*10+1529)*1+lsi)*1]), &(stack[((hsi*15+1684)*1+lsi)*1]), &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*15+1432)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1720)*1+lsi)*1]), &(stack[((hsi*15+1599)*1+lsi)*1]), &(stack[((hsi*10+1589)*1+lsi)*1]), &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*15+1684)*1+lsi)*1]), &(stack[((hsi*15+1417)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1741)*1+lsi)*1]), &(stack[((hsi*21+1648)*1+lsi)*1]), &(stack[((hsi*15+1633)*1+lsi)*1]), &(stack[((hsi*21+1720)*1+lsi)*1]), &(stack[((hsi*21+1699)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1127)*1+lsi)*1]),&(stack[((hsi*28+1741)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1624)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1630)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+1265)*1+lsi)*1]), &(stack[((hsi*3+1225)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(stack[((hsi*3+1374)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+1231)*1+lsi)*1]), &(stack[((hsi*3+1228)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1630)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*6+1234)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*6+1523)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1779)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1789)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1630)*1+lsi)*1]), &(stack[((hsi*10+1274)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*10+1779)*1+lsi)*1]), &(stack[((hsi*10+1555)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1383)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1642)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+1225)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(stack[((hsi*3+1265)*1+lsi)*1]), &(stack[((hsi*3+1371)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1804)*1+lsi)*1]), &(stack[((hsi*6+1642)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*6+1234)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*6+1517)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*10+1804)*1+lsi)*1]), &(stack[((hsi*6+1642)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*10+1779)*1+lsi)*1]), &(stack[((hsi*10+1274)*1+lsi)*1]), &(stack[((hsi*10+1545)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1265)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*3+1265)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+1318)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*3+1284)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*3+1580)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1814)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*3+1265)*1+lsi)*1]), &(stack[((hsi*6+1321)*1+lsi)*1]), &(stack[((hsi*6+1642)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*6+1630)*1+lsi)*1]), &(stack[((hsi*6+1583)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1824)*1+lsi)*1]), &(stack[((hsi*10+1814)*1+lsi)*1]), &(stack[((hsi*6+1268)*1+lsi)*1]), &(stack[((hsi*10+1327)*1+lsi)*1]), &(stack[((hsi*10+1804)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*10+1589)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1839)*1+lsi)*1]), &(stack[((hsi*15+1824)*1+lsi)*1]), &(stack[((hsi*10+1814)*1+lsi)*1]), &(stack[((hsi*15+1337)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*15+1303)*1+lsi)*1]), &(stack[((hsi*15+1789)*1+lsi)*1]), &(stack[((hsi*15+1599)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1106)*1+lsi)*1]),&(stack[((hsi*21+1839)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1860)*1+lsi)*1]), &(stack[((hsi*10+1779)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*10+1407)*1+lsi)*1]), &(stack[((hsi*10+1358)*1+lsi)*1]), &(stack[((hsi*10+1614)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1875)*1+lsi)*1]), &(stack[((hsi*15+1789)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*15+1432)*1+lsi)*1]), &(stack[((hsi*15+1417)*1+lsi)*1]), &(stack[((hsi*15+1860)*1+lsi)*1]), &(stack[((hsi*15+1684)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1896)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*10+1804)*1+lsi)*1]), &(stack[((hsi*15+1417)*1+lsi)*1]), &(stack[((hsi*15+1860)*1+lsi)*1]), &(stack[((hsi*15+1432)*1+lsi)*1]), &(stack[((hsi*15+1669)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1917)*1+lsi)*1]), &(stack[((hsi*21+1839)*1+lsi)*1]), &(stack[((hsi*15+1824)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*21+1896)*1+lsi)*1]), &(stack[((hsi*21+1447)*1+lsi)*1]), &(stack[((hsi*21+1875)*1+lsi)*1]), &(stack[((hsi*21+1720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1078)*1+lsi)*1]),&(stack[((hsi*28+1917)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1814)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1817)*1+lsi)*1]), &(stack[((hsi*3+1814)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+1371)*1+lsi)*1]), &(stack[((hsi*3+1374)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1823)*1+lsi)*1]), &(stack[((hsi*6+1817)*1+lsi)*1]), &(stack[((hsi*3+1814)*1+lsi)*1]), &(stack[((hsi*6+1517)*1+lsi)*1]), &(stack[((hsi*6+1523)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1945)*1+lsi)*1]), &(stack[((hsi*10+1823)*1+lsi)*1]), &(stack[((hsi*6+1817)*1+lsi)*1]), &(stack[((hsi*10+1545)*1+lsi)*1]), &(stack[((hsi*10+1555)*1+lsi)*1]), &(stack[((hsi*10+1779)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+1580)*1+lsi)*1]), &(stack[((hsi*3+1814)*1+lsi)*1]), &(stack[((hsi*3+1368)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1517)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(stack[((hsi*6+1583)*1+lsi)*1]), &(stack[((hsi*6+1817)*1+lsi)*1]), &(stack[((hsi*6+1377)*1+lsi)*1]), &(stack[((hsi*6+1642)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*10+1517)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*10+1589)*1+lsi)*1]), &(stack[((hsi*10+1823)*1+lsi)*1]), &(stack[((hsi*10+1529)*1+lsi)*1]), &(stack[((hsi*10+1804)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1975)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*10+1517)*1+lsi)*1]), &(stack[((hsi*15+1599)*1+lsi)*1]), &(stack[((hsi*15+1945)*1+lsi)*1]), &(stack[((hsi*15+1565)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1057)*1+lsi)*1]),&(stack[((hsi*21+1975)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1996)*1+lsi)*1]), &(stack[((hsi*15+1945)*1+lsi)*1]), &(stack[((hsi*10+1823)*1+lsi)*1]), &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*15+1684)*1+lsi)*1]), &(stack[((hsi*15+1860)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2017)*1+lsi)*1]), &(stack[((hsi*21+1975)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*21+1720)*1+lsi)*1]), &(stack[((hsi*21+1996)*1+lsi)*1]), &(stack[((hsi*21+1699)*1+lsi)*1]), &(stack[((hsi*21+1896)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1029)*1+lsi)*1]),&(stack[((hsi*28+2017)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*3+1814)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1960)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(stack[((hsi*6+1642)*1+lsi)*1]), &(stack[((hsi*6+1630)*1+lsi)*1]), &(stack[((hsi*6+1817)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1960)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*10+1804)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*10+1823)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2060)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1960)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*15+1789)*1+lsi)*1]), &(stack[((hsi*15+1945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1008)*1+lsi)*1]),&(stack[((hsi*21+2060)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2081)*1+lsi)*1]), &(stack[((hsi*21+2060)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*21+1896)*1+lsi)*1]), &(stack[((hsi*21+1875)*1+lsi)*1]), &(stack[((hsi*21+1996)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+980)*1+lsi)*1]),&(stack[((hsi*28+2081)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+1368)*1+lsi)*1]), &(stack[((hsi*3+1580)*1+lsi)*1]), &(stack[((hsi*3+1814)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+2045)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(stack[((hsi*6+1377)*1+lsi)*1]), &(stack[((hsi*6+1583)*1+lsi)*1]), &(stack[((hsi*6+1817)*1+lsi)*1]), &(stack[((hsi*6+1630)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*10+2045)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*10+1529)*1+lsi)*1]), &(stack[((hsi*10+1589)*1+lsi)*1]), &(stack[((hsi*10+1823)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1814)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*10+2045)*1+lsi)*1]), &(stack[((hsi*15+1565)*1+lsi)*1]), &(stack[((hsi*15+1599)*1+lsi)*1]), &(stack[((hsi*15+1945)*1+lsi)*1]), &(stack[((hsi*15+1789)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+959)*1+lsi)*1]),&(stack[((hsi*21+1814)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2109)*1+lsi)*1]), &(stack[((hsi*21+1814)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*21+1699)*1+lsi)*1]), &(stack[((hsi*21+1720)*1+lsi)*1]), &(stack[((hsi*21+1996)*1+lsi)*1]), &(stack[((hsi*21+1875)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+931)*1+lsi)*1]),&(stack[((hsi*28+2109)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+1284)*1+lsi)*1]), &(stack[((hsi*3+1624)*1+lsi)*1]), &(stack[((hsi*3+1318)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*3+1368)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1960)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*3+1627)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*6+1630)*1+lsi)*1]), &(stack[((hsi*6+1321)*1+lsi)*1]), &(stack[((hsi*6+1642)*1+lsi)*1]), &(stack[((hsi*6+1377)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1960)*1+lsi)*1]), &(stack[((hsi*6+1636)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*10+1327)*1+lsi)*1]), &(stack[((hsi*10+1804)*1+lsi)*1]), &(stack[((hsi*10+1529)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1624)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1960)*1+lsi)*1]), &(stack[((hsi*15+1303)*1+lsi)*1]), &(stack[((hsi*15+1789)*1+lsi)*1]), &(stack[((hsi*15+1337)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*15+1565)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+910)*1+lsi)*1]),&(stack[((hsi*21+1624)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2137)*1+lsi)*1]), &(stack[((hsi*21+1624)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*21+1447)*1+lsi)*1]), &(stack[((hsi*21+1875)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*21+1896)*1+lsi)*1]), &(stack[((hsi*21+1699)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+882)*1+lsi)*1]),&(stack[((hsi*28+2137)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1383)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1371)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+1368)*1+lsi)*1]), &(stack[((hsi*3+1580)*1+lsi)*1]), &(stack[((hsi*3+1284)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1371)*1+lsi)*1]), &(stack[((hsi*3+1383)*1+lsi)*1]), &(stack[((hsi*6+1377)*1+lsi)*1]), &(stack[((hsi*6+1583)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1371)*1+lsi)*1]), &(stack[((hsi*10+1529)*1+lsi)*1]), &(stack[((hsi*10+1589)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1517)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*15+1565)*1+lsi)*1]), &(stack[((hsi*15+1599)*1+lsi)*1]), &(stack[((hsi*15+1303)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+861)*1+lsi)*1]),&(stack[((hsi*21+1517)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2165)*1+lsi)*1]), &(stack[((hsi*21+1517)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*21+1699)*1+lsi)*1]), &(stack[((hsi*21+1720)*1+lsi)*1]), &(stack[((hsi*21+1447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+833)*1+lsi)*1]),&(stack[((hsi*28+2165)*1+lsi)*1]),28);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1645)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1580)*1+lsi)*1]), &(stack[((hsi*3+1645)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+1284)*1+lsi)*1]), &(stack[((hsi*3+1318)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1580)*1+lsi)*1]), &(stack[((hsi*3+1645)*1+lsi)*1]), &(stack[((hsi*6+1287)*1+lsi)*1]), &(stack[((hsi*6+1321)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1580)*1+lsi)*1]), &(stack[((hsi*10+1293)*1+lsi)*1]), &(stack[((hsi*10+1327)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2193)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*15+1303)*1+lsi)*1]), &(stack[((hsi*15+1337)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+812)*1+lsi)*1]),&(stack[((hsi*21+2193)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2214)*1+lsi)*1]), &(stack[((hsi*21+2193)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*21+1447)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+784)*1+lsi)*1]),&(stack[((hsi*28+2214)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+763)*1+lsi)*1]),&(stack[((hsi*21+1468)*1+lsi)*1]),21);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1352)*1+lsi)*1]), &(stack[((hsi*3+1240)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1407)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*10+1358)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2242)*1+lsi)*1]), &(stack[((hsi*15+1432)*1+lsi)*1]), &(stack[((hsi*10+1274)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1265)*1+lsi)*1]), &(stack[((hsi*15+1417)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2263)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*15+1337)*1+lsi)*1]), &(stack[((hsi*21+1265)*1+lsi)*1]), &(stack[((hsi*21+2242)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+735)*1+lsi)*1]),&(stack[((hsi*28+2263)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+714)*1+lsi)*1]),&(stack[((hsi*21+1720)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1318)*1+lsi)*1]), &(stack[((hsi*10+1614)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1240)*1+lsi)*1]), &(stack[((hsi*15+1684)*1+lsi)*1]), &(stack[((hsi*10+1555)*1+lsi)*1]), &(stack[((hsi*15+1318)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2291)*1+lsi)*1]), &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*10+1545)*1+lsi)*1]), &(stack[((hsi*15+1318)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2312)*1+lsi)*1]), &(stack[((hsi*21+1720)*1+lsi)*1]), &(stack[((hsi*15+1599)*1+lsi)*1]), &(stack[((hsi*21+2291)*1+lsi)*1]), &(stack[((hsi*21+1240)*1+lsi)*1]), &(stack[((hsi*21+1265)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+686)*1+lsi)*1]),&(stack[((hsi*28+2312)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+665)*1+lsi)*1]),&(stack[((hsi*21+1896)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1580)*1+lsi)*1]), &(stack[((hsi*15+1860)*1+lsi)*1]), &(stack[((hsi*10+1779)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*15+1318)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2340)*1+lsi)*1]), &(stack[((hsi*21+1896)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*21+1265)*1+lsi)*1]), &(stack[((hsi*21+1580)*1+lsi)*1]), &(stack[((hsi*21+2242)*1+lsi)*1]), &(stack[((hsi*21+2291)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+637)*1+lsi)*1]),&(stack[((hsi*28+2340)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+616)*1+lsi)*1]),&(stack[((hsi*21+1996)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2368)*1+lsi)*1]), &(stack[((hsi*21+1996)*1+lsi)*1]), &(stack[((hsi*15+1945)*1+lsi)*1]), &(stack[((hsi*21+2291)*1+lsi)*1]), &(stack[((hsi*21+1240)*1+lsi)*1]), &(stack[((hsi*21+1580)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+588)*1+lsi)*1]),&(stack[((hsi*28+2368)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+567)*1+lsi)*1]),&(stack[((hsi*21+1875)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2396)*1+lsi)*1]), &(stack[((hsi*21+1875)*1+lsi)*1]), &(stack[((hsi*15+1789)*1+lsi)*1]), &(stack[((hsi*21+2242)*1+lsi)*1]), &(stack[((hsi*21+1265)*1+lsi)*1]), &(stack[((hsi*21+1580)*1+lsi)*1]), &(stack[((hsi*21+1240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+539)*1+lsi)*1]),&(stack[((hsi*28+2396)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+518)*1+lsi)*1]),&(stack[((hsi*21+1699)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1779)*1+lsi)*1]), &(stack[((hsi*21+1699)*1+lsi)*1]), &(stack[((hsi*15+1565)*1+lsi)*1]), &(stack[((hsi*21+1240)*1+lsi)*1]), &(stack[((hsi*21+2291)*1+lsi)*1]), &(stack[((hsi*21+2242)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+490)*1+lsi)*1]),&(stack[((hsi*28+1779)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+469)*1+lsi)*1]),&(stack[((hsi*21+1447)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1538)*1+lsi)*1]), &(stack[((hsi*21+1447)*1+lsi)*1]), &(stack[((hsi*15+1303)*1+lsi)*1]), &(stack[((hsi*21+2242)*1+lsi)*1]), &(stack[((hsi*21+1265)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+441)*1+lsi)*1]),&(stack[((hsi*28+1538)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+420)*1+lsi)*1]),&(stack[((hsi*21+1265)*1+lsi)*1]),21);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]), &(stack[((hsi*6+1352)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1286)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*10+1358)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1333)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*10+1407)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1354)*1+lsi)*1]), &(stack[((hsi*21+1265)*1+lsi)*1]), &(stack[((hsi*15+1417)*1+lsi)*1]), &(stack[((hsi*21+1333)*1+lsi)*1]), &(stack[((hsi*21+1286)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+392)*1+lsi)*1]),&(stack[((hsi*28+1354)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+371)*1+lsi)*1]),&(stack[((hsi*21+2291)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1407)*1+lsi)*1]), &(stack[((hsi*15+1318)*1+lsi)*1]), &(stack[((hsi*10+1614)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2424)*1+lsi)*1]), &(stack[((hsi*21+2291)*1+lsi)*1]), &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*21+1407)*1+lsi)*1]), &(stack[((hsi*21+1333)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+343)*1+lsi)*1]),&(stack[((hsi*28+2424)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+322)*1+lsi)*1]),&(stack[((hsi*21+1580)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2452)*1+lsi)*1]), &(stack[((hsi*21+1580)*1+lsi)*1]), &(stack[((hsi*15+1860)*1+lsi)*1]), &(stack[((hsi*21+1333)*1+lsi)*1]), &(stack[((hsi*21+1286)*1+lsi)*1]), &(stack[((hsi*21+1407)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+294)*1+lsi)*1]),&(stack[((hsi*28+2452)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+273)*1+lsi)*1]),&(stack[((hsi*21+1240)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2480)*1+lsi)*1]), &(stack[((hsi*21+1240)*1+lsi)*1]), &(stack[((hsi*15+1684)*1+lsi)*1]), &(stack[((hsi*21+1407)*1+lsi)*1]), &(stack[((hsi*21+1286)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+245)*1+lsi)*1]),&(stack[((hsi*28+2480)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+224)*1+lsi)*1]),&(stack[((hsi*21+2242)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1669)*1+lsi)*1]), &(stack[((hsi*21+2242)*1+lsi)*1]), &(stack[((hsi*15+1432)*1+lsi)*1]), &(stack[((hsi*21+1286)*1+lsi)*1]), &(stack[((hsi*21+1333)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+196)*1+lsi)*1]),&(stack[((hsi*28+1669)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+175)*1+lsi)*1]),&(stack[((hsi*21+1333)*1+lsi)*1]),21);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1601)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]), &(stack[((hsi*10+1769)*1+lsi)*1]));
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2508)*1+lsi)*1]), &(stack[((hsi*21+1333)*1+lsi)*1]), &(stack[((hsi*15+2045)*1+lsi)*1]), &(stack[((hsi*21+1601)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+147)*1+lsi)*1]),&(stack[((hsi*28+2508)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+126)*1+lsi)*1]),&(stack[((hsi*21+1407)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2536)*1+lsi)*1]), &(stack[((hsi*21+1407)*1+lsi)*1]), &(stack[((hsi*15+1318)*1+lsi)*1]), &(stack[((hsi*21+1601)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+98)*1+lsi)*1]),&(stack[((hsi*28+2536)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+77)*1+lsi)*1]),&(stack[((hsi*21+1286)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+2564)*1+lsi)*1]), &(stack[((hsi*21+1286)*1+lsi)*1]), &(stack[((hsi*15+1960)*1+lsi)*1]), &(stack[((hsi*21+1601)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+49)*1+lsi)*1]),&(stack[((hsi*28+2564)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+28)*1+lsi)*1]),&(stack[((hsi*21+1601)*1+lsi)*1]),21);
OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1945)*1+lsi)*1]), &(stack[((hsi*21+1601)*1+lsi)*1]), &(stack[((hsi*15+1225)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+1945)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1225 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
