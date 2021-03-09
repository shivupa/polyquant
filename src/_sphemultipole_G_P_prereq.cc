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
void _sphemultipole_G_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+915)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+903)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+924)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+927)*1+lsi)*1]), &(stack[((hsi*3+924)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*6+927)*1+lsi)*1]), &(stack[((hsi*3+924)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+943)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+946)*1+lsi)*1]), &(stack[((hsi*3+943)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+952)*1+lsi)*1]), &(stack[((hsi*6+946)*1+lsi)*1]), &(stack[((hsi*3+943)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+962)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*3+962)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+943)*1+lsi)*1]), &(stack[((hsi*3+924)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*3+962)*1+lsi)*1]), &(stack[((hsi*6+946)*1+lsi)*1]), &(stack[((hsi*6+927)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+981)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*10+952)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+885)*1+lsi)*1]),&(stack[((hsi*15+981)*1+lsi)*1]),15);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+962)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+962)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+996)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+962)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1002)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*6+996)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1012)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*6+996)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1022)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*6+927)*1+lsi)*1]), &(stack[((hsi*10+1012)*1+lsi)*1]), &(stack[((hsi*10+1002)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1037)*1+lsi)*1]), &(stack[((hsi*10+952)*1+lsi)*1]), &(stack[((hsi*6+946)*1+lsi)*1]), &(stack[((hsi*10+1002)*1+lsi)*1]), &(stack[((hsi*10+1012)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1052)*1+lsi)*1]), &(stack[((hsi*15+981)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*15+1037)*1+lsi)*1]), &(stack[((hsi*15+1022)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+864)*1+lsi)*1]),&(stack[((hsi*21+1052)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+971)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+974)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+977)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*3+971)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+977)*1+lsi)*1]), &(stack[((hsi*3+974)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1079)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1082)*1+lsi)*1]), &(stack[((hsi*3+974)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+1079)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*3+977)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+1079)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1094)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*3+971)*1+lsi)*1]), &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*6+1082)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1104)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1107)*1+lsi)*1]), &(stack[((hsi*3+1104)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+974)*1+lsi)*1]), &(stack[((hsi*3+977)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1113)*1+lsi)*1]), &(stack[((hsi*6+1107)*1+lsi)*1]), &(stack[((hsi*3+1104)*1+lsi)*1]), &(stack[((hsi*6+1082)*1+lsi)*1]), &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1123)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1126)*1+lsi)*1]), &(stack[((hsi*3+1123)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+1104)*1+lsi)*1]), &(stack[((hsi*3+971)*1+lsi)*1]), &(stack[((hsi*3+943)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1132)*1+lsi)*1]), &(stack[((hsi*6+1126)*1+lsi)*1]), &(stack[((hsi*3+1123)*1+lsi)*1]), &(stack[((hsi*6+1107)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*6+946)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1142)*1+lsi)*1]), &(stack[((hsi*10+1132)*1+lsi)*1]), &(stack[((hsi*6+1126)*1+lsi)*1]), &(stack[((hsi*10+1113)*1+lsi)*1]), &(stack[((hsi*10+1094)*1+lsi)*1]), &(stack[((hsi*10+952)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+849)*1+lsi)*1]),&(stack[((hsi*15+1142)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1123)*1+lsi)*1]), &(stack[((hsi*3+1079)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+962)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*6+1082)*1+lsi)*1]), &(stack[((hsi*3+974)*1+lsi)*1]), &(stack[((hsi*6+1123)*1+lsi)*1]), &(stack[((hsi*6+996)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1167)*1+lsi)*1]), &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*3+977)*1+lsi)*1]), &(stack[((hsi*6+1123)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1177)*1+lsi)*1]), &(stack[((hsi*10+1094)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*10+1167)*1+lsi)*1]), &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*10+1012)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1192)*1+lsi)*1]), &(stack[((hsi*10+1113)*1+lsi)*1]), &(stack[((hsi*6+1107)*1+lsi)*1]), &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*10+1167)*1+lsi)*1]), &(stack[((hsi*10+1002)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1207)*1+lsi)*1]), &(stack[((hsi*15+1142)*1+lsi)*1]), &(stack[((hsi*10+1132)*1+lsi)*1]), &(stack[((hsi*15+1192)*1+lsi)*1]), &(stack[((hsi*15+1177)*1+lsi)*1]), &(stack[((hsi*15+1037)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+828)*1+lsi)*1]),&(stack[((hsi*21+1207)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1129)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1132)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1135)*1+lsi)*1]), &(stack[((hsi*3+1129)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+1132)*1+lsi)*1]), &(stack[((hsi*3+977)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1228)*1+lsi)*1]), &(stack[((hsi*3+1132)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+906)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]), &(stack[((hsi*3+1079)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1234)*1+lsi)*1]), &(stack[((hsi*6+1135)*1+lsi)*1]), &(stack[((hsi*3+1129)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*6+1228)*1+lsi)*1]), &(stack[((hsi*6+1088)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1244)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1247)*1+lsi)*1]), &(stack[((hsi*3+1244)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+1132)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*3+974)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1253)*1+lsi)*1]), &(stack[((hsi*6+1247)*1+lsi)*1]), &(stack[((hsi*3+1244)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*6+1228)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*6+1082)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+943)*1+lsi)*1]), &(stack[((hsi*3+1244)*1+lsi)*1]), &(stack[((hsi*3+924)*1+lsi)*1]), &(stack[((hsi*3+1129)*1+lsi)*1]), &(stack[((hsi*3+1104)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*6+946)*1+lsi)*1]), &(stack[((hsi*6+1247)*1+lsi)*1]), &(stack[((hsi*6+927)*1+lsi)*1]), &(stack[((hsi*6+1135)*1+lsi)*1]), &(stack[((hsi*6+1107)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1279)*1+lsi)*1]), &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*10+952)*1+lsi)*1]), &(stack[((hsi*10+1253)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*10+1234)*1+lsi)*1]), &(stack[((hsi*10+1113)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+813)*1+lsi)*1]),&(stack[((hsi*15+1279)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1294)*1+lsi)*1]), &(stack[((hsi*6+1228)*1+lsi)*1]), &(stack[((hsi*3+1132)*1+lsi)*1]), &(stack[((hsi*6+996)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*6+1123)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1304)*1+lsi)*1]), &(stack[((hsi*10+1234)*1+lsi)*1]), &(stack[((hsi*6+1135)*1+lsi)*1]), &(stack[((hsi*10+1012)*1+lsi)*1]), &(stack[((hsi*10+1002)*1+lsi)*1]), &(stack[((hsi*10+1294)*1+lsi)*1]), &(stack[((hsi*10+1167)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1319)*1+lsi)*1]), &(stack[((hsi*10+1253)*1+lsi)*1]), &(stack[((hsi*6+1247)*1+lsi)*1]), &(stack[((hsi*10+1002)*1+lsi)*1]), &(stack[((hsi*10+1294)*1+lsi)*1]), &(stack[((hsi*10+1012)*1+lsi)*1]), &(stack[((hsi*10+1157)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1334)*1+lsi)*1]), &(stack[((hsi*15+1279)*1+lsi)*1]), &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*15+1037)*1+lsi)*1]), &(stack[((hsi*15+1319)*1+lsi)*1]), &(stack[((hsi*15+1022)*1+lsi)*1]), &(stack[((hsi*15+1304)*1+lsi)*1]), &(stack[((hsi*15+1192)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+792)*1+lsi)*1]),&(stack[((hsi*21+1334)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+974)*1+lsi)*1]), &(stack[((hsi*3+977)*1+lsi)*1]), &(stack[((hsi*3+1132)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*6+1082)*1+lsi)*1]), &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*6+1228)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+915)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+974)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+1104)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+971)*1+lsi)*1]), &(stack[((hsi*3+1244)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+974)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*6+1107)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*6+1247)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1365)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+974)*1+lsi)*1]), &(stack[((hsi*10+1113)*1+lsi)*1]), &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*10+1094)*1+lsi)*1]), &(stack[((hsi*10+1253)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+777)*1+lsi)*1]),&(stack[((hsi*15+1365)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1380)*1+lsi)*1]), &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*10+1167)*1+lsi)*1]), &(stack[((hsi*10+1294)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1395)*1+lsi)*1]), &(stack[((hsi*15+1365)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*15+1192)*1+lsi)*1]), &(stack[((hsi*15+1380)*1+lsi)*1]), &(stack[((hsi*15+1177)*1+lsi)*1]), &(stack[((hsi*15+1319)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+756)*1+lsi)*1]),&(stack[((hsi*21+1395)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+915)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1355)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+1244)*1+lsi)*1]), &(stack[((hsi*3+1129)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*6+1355)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*6+1247)*1+lsi)*1]), &(stack[((hsi*6+1135)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1426)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*6+1355)*1+lsi)*1]), &(stack[((hsi*10+1253)*1+lsi)*1]), &(stack[((hsi*10+1234)*1+lsi)*1]), &(stack[((hsi*10+1269)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+741)*1+lsi)*1]),&(stack[((hsi*15+1426)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1441)*1+lsi)*1]), &(stack[((hsi*15+1426)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*15+1319)*1+lsi)*1]), &(stack[((hsi*15+1304)*1+lsi)*1]), &(stack[((hsi*15+1380)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+720)*1+lsi)*1]),&(stack[((hsi*21+1441)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+915)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1416)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+971)*1+lsi)*1]), &(stack[((hsi*3+1104)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+1129)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1416)*1+lsi)*1]), &(stack[((hsi*3+915)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*6+1107)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*6+1135)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1462)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1416)*1+lsi)*1]), &(stack[((hsi*10+1094)*1+lsi)*1]), &(stack[((hsi*10+1113)*1+lsi)*1]), &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*10+1234)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+705)*1+lsi)*1]),&(stack[((hsi*15+1462)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1477)*1+lsi)*1]), &(stack[((hsi*15+1462)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*15+1177)*1+lsi)*1]), &(stack[((hsi*15+1192)*1+lsi)*1]), &(stack[((hsi*15+1380)*1+lsi)*1]), &(stack[((hsi*15+1304)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+684)*1+lsi)*1]),&(stack[((hsi*21+1477)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+924)*1+lsi)*1]), &(stack[((hsi*3+1129)*1+lsi)*1]), &(stack[((hsi*3+943)*1+lsi)*1]), &(stack[((hsi*3+1244)*1+lsi)*1]), &(stack[((hsi*3+971)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*6+927)*1+lsi)*1]), &(stack[((hsi*6+1135)*1+lsi)*1]), &(stack[((hsi*6+946)*1+lsi)*1]), &(stack[((hsi*6+1247)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1498)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*10+1234)*1+lsi)*1]), &(stack[((hsi*10+952)*1+lsi)*1]), &(stack[((hsi*10+1253)*1+lsi)*1]), &(stack[((hsi*10+1094)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+669)*1+lsi)*1]),&(stack[((hsi*15+1498)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1513)*1+lsi)*1]), &(stack[((hsi*15+1498)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*15+1022)*1+lsi)*1]), &(stack[((hsi*15+1304)*1+lsi)*1]), &(stack[((hsi*15+1037)*1+lsi)*1]), &(stack[((hsi*15+1319)*1+lsi)*1]), &(stack[((hsi*15+1177)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+648)*1+lsi)*1]),&(stack[((hsi*21+1513)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+971)*1+lsi)*1]), &(stack[((hsi*3+1104)*1+lsi)*1]), &(stack[((hsi*3+924)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*6+1107)*1+lsi)*1]), &(stack[((hsi*6+927)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1534)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1263)*1+lsi)*1]), &(stack[((hsi*10+1094)*1+lsi)*1]), &(stack[((hsi*10+1113)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+633)*1+lsi)*1]),&(stack[((hsi*15+1534)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1549)*1+lsi)*1]), &(stack[((hsi*15+1534)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*15+1177)*1+lsi)*1]), &(stack[((hsi*15+1192)*1+lsi)*1]), &(stack[((hsi*15+1022)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+612)*1+lsi)*1]),&(stack[((hsi*21+1549)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+924)*1+lsi)*1]), &(stack[((hsi*3+943)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*6+927)*1+lsi)*1]), &(stack[((hsi*6+946)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1570)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*10+952)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+597)*1+lsi)*1]),&(stack[((hsi*15+1570)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1585)*1+lsi)*1]), &(stack[((hsi*15+1570)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*15+1022)*1+lsi)*1]), &(stack[((hsi*15+1037)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+576)*1+lsi)*1]),&(stack[((hsi*21+1585)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+561)*1+lsi)*1]),&(stack[((hsi*15+1037)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*3+962)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+996)*1+lsi)*1]), &(stack[((hsi*3+906)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*3+903)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1606)*1+lsi)*1]), &(stack[((hsi*10+1012)*1+lsi)*1]), &(stack[((hsi*6+918)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*10+1002)*1+lsi)*1]), &(stack[((hsi*6+909)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1621)*1+lsi)*1]), &(stack[((hsi*15+1037)*1+lsi)*1]), &(stack[((hsi*10+952)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*15+1606)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+540)*1+lsi)*1]),&(stack[((hsi*21+1621)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+525)*1+lsi)*1]),&(stack[((hsi*15+1192)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*6+1123)*1+lsi)*1]), &(stack[((hsi*3+1079)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*10+1167)*1+lsi)*1]), &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+943)*1+lsi)*1]), &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*6+1082)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1642)*1+lsi)*1]), &(stack[((hsi*15+1192)*1+lsi)*1]), &(stack[((hsi*10+1113)*1+lsi)*1]), &(stack[((hsi*15+943)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+504)*1+lsi)*1]),&(stack[((hsi*21+1642)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+489)*1+lsi)*1]),&(stack[((hsi*15+1319)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1079)*1+lsi)*1]), &(stack[((hsi*10+1294)*1+lsi)*1]), &(stack[((hsi*6+1228)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1663)*1+lsi)*1]), &(stack[((hsi*15+1319)*1+lsi)*1]), &(stack[((hsi*10+1253)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*15+1079)*1+lsi)*1]), &(stack[((hsi*15+1606)*1+lsi)*1]), &(stack[((hsi*15+943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+468)*1+lsi)*1]),&(stack[((hsi*21+1663)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+453)*1+lsi)*1]),&(stack[((hsi*15+1380)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1244)*1+lsi)*1]), &(stack[((hsi*15+1380)*1+lsi)*1]), &(stack[((hsi*10+1269)*1+lsi)*1]), &(stack[((hsi*15+943)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*15+1079)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+432)*1+lsi)*1]),&(stack[((hsi*21+1244)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+417)*1+lsi)*1]),&(stack[((hsi*15+1304)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1684)*1+lsi)*1]), &(stack[((hsi*15+1304)*1+lsi)*1]), &(stack[((hsi*10+1234)*1+lsi)*1]), &(stack[((hsi*15+1606)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*15+1079)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+396)*1+lsi)*1]),&(stack[((hsi*21+1684)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+381)*1+lsi)*1]),&(stack[((hsi*15+1177)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1705)*1+lsi)*1]), &(stack[((hsi*15+1177)*1+lsi)*1]), &(stack[((hsi*10+1094)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*15+943)*1+lsi)*1]), &(stack[((hsi*15+1606)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+360)*1+lsi)*1]),&(stack[((hsi*21+1705)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+345)*1+lsi)*1]),&(stack[((hsi*15+1022)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1094)*1+lsi)*1]), &(stack[((hsi*15+1022)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*15+1606)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+324)*1+lsi)*1]),&(stack[((hsi*21+1094)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+309)*1+lsi)*1]),&(stack[((hsi*15+915)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1228)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]), &(stack[((hsi*3+962)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1726)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*6+965)*1+lsi)*1]), &(stack[((hsi*10+1228)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*6+996)*1+lsi)*1]), &(stack[((hsi*10+1228)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1756)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*10+1002)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*15+1726)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+288)*1+lsi)*1]),&(stack[((hsi*21+1756)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+273)*1+lsi)*1]),&(stack[((hsi*15+943)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+996)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*6+1123)*1+lsi)*1]), &(stack[((hsi*10+1228)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1115)*1+lsi)*1]), &(stack[((hsi*15+943)*1+lsi)*1]), &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*15+996)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+252)*1+lsi)*1]),&(stack[((hsi*21+1115)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+237)*1+lsi)*1]),&(stack[((hsi*15+1079)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1777)*1+lsi)*1]), &(stack[((hsi*15+1079)*1+lsi)*1]), &(stack[((hsi*10+1294)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*15+1726)*1+lsi)*1]), &(stack[((hsi*15+996)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+216)*1+lsi)*1]),&(stack[((hsi*21+1777)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+201)*1+lsi)*1]),&(stack[((hsi*15+900)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1798)*1+lsi)*1]), &(stack[((hsi*15+900)*1+lsi)*1]), &(stack[((hsi*10+1167)*1+lsi)*1]), &(stack[((hsi*15+996)*1+lsi)*1]), &(stack[((hsi*15+1726)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+180)*1+lsi)*1]),&(stack[((hsi*21+1798)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+165)*1+lsi)*1]),&(stack[((hsi*15+1606)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1819)*1+lsi)*1]), &(stack[((hsi*15+1606)*1+lsi)*1]), &(stack[((hsi*10+1012)*1+lsi)*1]), &(stack[((hsi*15+1726)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+144)*1+lsi)*1]),&(stack[((hsi*21+1819)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+129)*1+lsi)*1]),&(stack[((hsi*15+1741)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1157)*1+lsi)*1]), &(stack[((hsi*10+1228)*1+lsi)*1]), &(stack[((hsi*6+1073)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1840)*1+lsi)*1]), &(stack[((hsi*15+1741)*1+lsi)*1]), &(stack[((hsi*10+1355)*1+lsi)*1]), &(stack[((hsi*15+1157)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+108)*1+lsi)*1]),&(stack[((hsi*21+1840)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+93)*1+lsi)*1]),&(stack[((hsi*15+996)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1861)*1+lsi)*1]), &(stack[((hsi*15+996)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*15+1157)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+72)*1+lsi)*1]),&(stack[((hsi*21+1861)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+57)*1+lsi)*1]),&(stack[((hsi*15+1726)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+958)*1+lsi)*1]), &(stack[((hsi*15+1726)*1+lsi)*1]), &(stack[((hsi*10+1416)*1+lsi)*1]), &(stack[((hsi*15+1157)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+36)*1+lsi)*1]),&(stack[((hsi*21+958)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+21)*1+lsi)*1]),&(stack[((hsi*15+1157)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1882)*1+lsi)*1]), &(stack[((hsi*15+1157)*1+lsi)*1]), &(stack[((hsi*10+1228)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+1882)*1+lsi)*1]),21);
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
