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
void _sphemultipole_F_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1150)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1153)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1156)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1159)*1+lsi)*1]), &(stack[((hsi*3+1156)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+1153)*1+lsi)*1]), &(stack[((hsi*3+1150)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1165)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1168)*1+lsi)*1]), &(stack[((hsi*3+1165)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+1150)*1+lsi)*1]), &(stack[((hsi*3+1153)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1174)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1177)*1+lsi)*1]), &(stack[((hsi*3+1174)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+1165)*1+lsi)*1]), &(stack[((hsi*3+1156)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1183)*1+lsi)*1]), &(stack[((hsi*6+1177)*1+lsi)*1]), &(stack[((hsi*3+1174)*1+lsi)*1]), &(stack[((hsi*6+1168)*1+lsi)*1]), &(stack[((hsi*6+1159)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1140)*1+lsi)*1]),&(stack[((hsi*10+1183)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1174)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1193)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1196)*1+lsi)*1]), &(stack[((hsi*3+1150)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+1193)*1+lsi)*1]), &(stack[((hsi*3+1174)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1202)*1+lsi)*1]), &(stack[((hsi*3+1153)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+1174)*1+lsi)*1]), &(stack[((hsi*3+1193)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1208)*1+lsi)*1]), &(stack[((hsi*6+1159)*1+lsi)*1]), &(stack[((hsi*3+1156)*1+lsi)*1]), &(stack[((hsi*6+1202)*1+lsi)*1]), &(stack[((hsi*6+1196)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1218)*1+lsi)*1]), &(stack[((hsi*6+1168)*1+lsi)*1]), &(stack[((hsi*3+1165)*1+lsi)*1]), &(stack[((hsi*6+1196)*1+lsi)*1]), &(stack[((hsi*6+1202)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1228)*1+lsi)*1]), &(stack[((hsi*10+1183)*1+lsi)*1]), &(stack[((hsi*6+1177)*1+lsi)*1]), &(stack[((hsi*10+1218)*1+lsi)*1]), &(stack[((hsi*10+1208)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1125)*1+lsi)*1]),&(stack[((hsi*15+1228)*1+lsi)*1]),15);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1177)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*3+1174)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+1177)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*3+1193)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+1177)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*6+1196)*1+lsi)*1]), &(stack[((hsi*3+1150)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1265)*1+lsi)*1]), &(stack[((hsi*6+1202)*1+lsi)*1]), &(stack[((hsi*3+1153)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1275)*1+lsi)*1]), &(stack[((hsi*10+1208)*1+lsi)*1]), &(stack[((hsi*6+1159)*1+lsi)*1]), &(stack[((hsi*10+1265)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1290)*1+lsi)*1]), &(stack[((hsi*10+1218)*1+lsi)*1]), &(stack[((hsi*6+1168)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*10+1265)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1305)*1+lsi)*1]), &(stack[((hsi*15+1228)*1+lsi)*1]), &(stack[((hsi*10+1183)*1+lsi)*1]), &(stack[((hsi*15+1290)*1+lsi)*1]), &(stack[((hsi*15+1275)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1104)*1+lsi)*1]),&(stack[((hsi*21+1305)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1180)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1326)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1329)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1332)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+1329)*1+lsi)*1]), &(stack[((hsi*3+1326)*1+lsi)*1]), &(stack[((hsi*3+1153)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1338)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1341)*1+lsi)*1]), &(stack[((hsi*3+1338)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+1326)*1+lsi)*1]), &(stack[((hsi*3+1329)*1+lsi)*1]), &(stack[((hsi*3+1150)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1347)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*3+1347)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+1338)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*3+1165)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1356)*1+lsi)*1]), &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*3+1347)*1+lsi)*1]), &(stack[((hsi*6+1341)*1+lsi)*1]), &(stack[((hsi*6+1332)*1+lsi)*1]), &(stack[((hsi*6+1168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1094)*1+lsi)*1]),&(stack[((hsi*10+1356)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1347)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1366)*1+lsi)*1]), &(stack[((hsi*3+1326)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+1347)*1+lsi)*1]), &(stack[((hsi*3+1193)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*3+1329)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+1347)*1+lsi)*1]), &(stack[((hsi*3+1174)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*6+1332)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*6+1366)*1+lsi)*1]), &(stack[((hsi*6+1202)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*6+1341)*1+lsi)*1]), &(stack[((hsi*3+1338)*1+lsi)*1]), &(stack[((hsi*6+1366)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*6+1196)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*10+1356)*1+lsi)*1]), &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*10+1218)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1079)*1+lsi)*1]),&(stack[((hsi*15+1398)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*3+1347)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+1177)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1413)*1+lsi)*1]), &(stack[((hsi*6+1366)*1+lsi)*1]), &(stack[((hsi*3+1326)*1+lsi)*1]), &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1423)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*3+1329)*1+lsi)*1]), &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1433)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*6+1332)*1+lsi)*1]), &(stack[((hsi*10+1423)*1+lsi)*1]), &(stack[((hsi*10+1413)*1+lsi)*1]), &(stack[((hsi*10+1265)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1448)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*6+1341)*1+lsi)*1]), &(stack[((hsi*10+1413)*1+lsi)*1]), &(stack[((hsi*10+1423)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1463)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*10+1356)*1+lsi)*1]), &(stack[((hsi*15+1448)*1+lsi)*1]), &(stack[((hsi*15+1433)*1+lsi)*1]), &(stack[((hsi*15+1290)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1058)*1+lsi)*1]),&(stack[((hsi*21+1463)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1484)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1490)*1+lsi)*1]), &(stack[((hsi*3+1484)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+1153)*1+lsi)*1]), &(stack[((hsi*3+1150)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(stack[((hsi*3+1329)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1496)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1499)*1+lsi)*1]), &(stack[((hsi*3+1496)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+1150)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(stack[((hsi*3+1153)*1+lsi)*1]), &(stack[((hsi*3+1326)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1150)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1505)*1+lsi)*1]), &(stack[((hsi*3+1150)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+1165)*1+lsi)*1]), &(stack[((hsi*3+1496)*1+lsi)*1]), &(stack[((hsi*3+1156)*1+lsi)*1]), &(stack[((hsi*3+1484)*1+lsi)*1]), &(stack[((hsi*3+1338)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1511)*1+lsi)*1]), &(stack[((hsi*6+1505)*1+lsi)*1]), &(stack[((hsi*3+1150)*1+lsi)*1]), &(stack[((hsi*6+1168)*1+lsi)*1]), &(stack[((hsi*6+1499)*1+lsi)*1]), &(stack[((hsi*6+1159)*1+lsi)*1]), &(stack[((hsi*6+1490)*1+lsi)*1]), &(stack[((hsi*6+1341)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1048)*1+lsi)*1]),&(stack[((hsi*10+1511)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1150)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+1193)*1+lsi)*1]), &(stack[((hsi*3+1174)*1+lsi)*1]), &(stack[((hsi*3+1347)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1521)*1+lsi)*1]), &(stack[((hsi*6+1490)*1+lsi)*1]), &(stack[((hsi*3+1484)*1+lsi)*1]), &(stack[((hsi*6+1202)*1+lsi)*1]), &(stack[((hsi*6+1196)*1+lsi)*1]), &(stack[((hsi*6+1150)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1531)*1+lsi)*1]), &(stack[((hsi*6+1499)*1+lsi)*1]), &(stack[((hsi*3+1496)*1+lsi)*1]), &(stack[((hsi*6+1196)*1+lsi)*1]), &(stack[((hsi*6+1150)*1+lsi)*1]), &(stack[((hsi*6+1202)*1+lsi)*1]), &(stack[((hsi*6+1366)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1541)*1+lsi)*1]), &(stack[((hsi*10+1511)*1+lsi)*1]), &(stack[((hsi*6+1505)*1+lsi)*1]), &(stack[((hsi*10+1218)*1+lsi)*1]), &(stack[((hsi*10+1531)*1+lsi)*1]), &(stack[((hsi*10+1208)*1+lsi)*1]), &(stack[((hsi*10+1521)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1033)*1+lsi)*1]),&(stack[((hsi*15+1541)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1556)*1+lsi)*1]), &(stack[((hsi*6+1150)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*6+1350)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1566)*1+lsi)*1]), &(stack[((hsi*10+1521)*1+lsi)*1]), &(stack[((hsi*6+1490)*1+lsi)*1]), &(stack[((hsi*10+1265)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*10+1556)*1+lsi)*1]), &(stack[((hsi*10+1423)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1581)*1+lsi)*1]), &(stack[((hsi*10+1531)*1+lsi)*1]), &(stack[((hsi*6+1499)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*10+1556)*1+lsi)*1]), &(stack[((hsi*10+1265)*1+lsi)*1]), &(stack[((hsi*10+1413)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1596)*1+lsi)*1]), &(stack[((hsi*15+1541)*1+lsi)*1]), &(stack[((hsi*10+1511)*1+lsi)*1]), &(stack[((hsi*15+1290)*1+lsi)*1]), &(stack[((hsi*15+1581)*1+lsi)*1]), &(stack[((hsi*15+1275)*1+lsi)*1]), &(stack[((hsi*15+1566)*1+lsi)*1]), &(stack[((hsi*15+1448)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+1012)*1+lsi)*1]),&(stack[((hsi*21+1596)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1505)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1505)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+1326)*1+lsi)*1]), &(stack[((hsi*3+1329)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+1338)*1+lsi)*1]), &(stack[((hsi*3+1505)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*3+1496)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1623)*1+lsi)*1]), &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(stack[((hsi*6+1341)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*6+1332)*1+lsi)*1]), &(stack[((hsi*6+1499)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1002)*1+lsi)*1]),&(stack[((hsi*10+1623)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1505)*1+lsi)*1]), &(stack[((hsi*6+1366)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*6+1150)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1643)*1+lsi)*1]), &(stack[((hsi*10+1623)*1+lsi)*1]), &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*10+1531)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+987)*1+lsi)*1]),&(stack[((hsi*15+1643)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1658)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*10+1413)*1+lsi)*1]), &(stack[((hsi*10+1423)*1+lsi)*1]), &(stack[((hsi*10+1556)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1673)*1+lsi)*1]), &(stack[((hsi*15+1643)*1+lsi)*1]), &(stack[((hsi*10+1623)*1+lsi)*1]), &(stack[((hsi*15+1448)*1+lsi)*1]), &(stack[((hsi*15+1658)*1+lsi)*1]), &(stack[((hsi*15+1433)*1+lsi)*1]), &(stack[((hsi*15+1581)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+966)*1+lsi)*1]),&(stack[((hsi*21+1673)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+1496)*1+lsi)*1]), &(stack[((hsi*3+1484)*1+lsi)*1]), &(stack[((hsi*3+1505)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1694)*1+lsi)*1]), &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(stack[((hsi*6+1499)*1+lsi)*1]), &(stack[((hsi*6+1490)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+956)*1+lsi)*1]),&(stack[((hsi*10+1694)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1704)*1+lsi)*1]), &(stack[((hsi*10+1694)*1+lsi)*1]), &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*10+1531)*1+lsi)*1]), &(stack[((hsi*10+1521)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+941)*1+lsi)*1]),&(stack[((hsi*15+1704)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1719)*1+lsi)*1]), &(stack[((hsi*15+1704)*1+lsi)*1]), &(stack[((hsi*10+1694)*1+lsi)*1]), &(stack[((hsi*15+1581)*1+lsi)*1]), &(stack[((hsi*15+1566)*1+lsi)*1]), &(stack[((hsi*15+1658)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+920)*1+lsi)*1]),&(stack[((hsi*21+1719)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*3+1338)*1+lsi)*1]), &(stack[((hsi*3+1505)*1+lsi)*1]), &(stack[((hsi*3+1484)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1740)*1+lsi)*1]), &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(stack[((hsi*6+1332)*1+lsi)*1]), &(stack[((hsi*6+1341)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*6+1490)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+910)*1+lsi)*1]),&(stack[((hsi*10+1740)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1750)*1+lsi)*1]), &(stack[((hsi*10+1740)*1+lsi)*1]), &(stack[((hsi*6+1326)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*10+1521)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+895)*1+lsi)*1]),&(stack[((hsi*15+1750)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1765)*1+lsi)*1]), &(stack[((hsi*15+1750)*1+lsi)*1]), &(stack[((hsi*10+1740)*1+lsi)*1]), &(stack[((hsi*15+1433)*1+lsi)*1]), &(stack[((hsi*15+1448)*1+lsi)*1]), &(stack[((hsi*15+1658)*1+lsi)*1]), &(stack[((hsi*15+1566)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+874)*1+lsi)*1]),&(stack[((hsi*21+1765)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+1156)*1+lsi)*1]), &(stack[((hsi*3+1484)*1+lsi)*1]), &(stack[((hsi*3+1165)*1+lsi)*1]), &(stack[((hsi*3+1496)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1786)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1487)*1+lsi)*1]), &(stack[((hsi*6+1159)*1+lsi)*1]), &(stack[((hsi*6+1490)*1+lsi)*1]), &(stack[((hsi*6+1168)*1+lsi)*1]), &(stack[((hsi*6+1499)*1+lsi)*1]), &(stack[((hsi*6+1332)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+864)*1+lsi)*1]),&(stack[((hsi*10+1786)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1484)*1+lsi)*1]), &(stack[((hsi*10+1786)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*10+1208)*1+lsi)*1]), &(stack[((hsi*10+1521)*1+lsi)*1]), &(stack[((hsi*10+1218)*1+lsi)*1]), &(stack[((hsi*10+1531)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+849)*1+lsi)*1]),&(stack[((hsi*15+1484)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1796)*1+lsi)*1]), &(stack[((hsi*15+1484)*1+lsi)*1]), &(stack[((hsi*10+1786)*1+lsi)*1]), &(stack[((hsi*15+1275)*1+lsi)*1]), &(stack[((hsi*15+1566)*1+lsi)*1]), &(stack[((hsi*15+1290)*1+lsi)*1]), &(stack[((hsi*15+1581)*1+lsi)*1]), &(stack[((hsi*15+1433)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+828)*1+lsi)*1]),&(stack[((hsi*21+1796)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1499)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1499)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*3+1338)*1+lsi)*1]), &(stack[((hsi*3+1156)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1817)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1499)*1+lsi)*1]), &(stack[((hsi*6+1332)*1+lsi)*1]), &(stack[((hsi*6+1341)*1+lsi)*1]), &(stack[((hsi*6+1159)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+818)*1+lsi)*1]),&(stack[((hsi*10+1817)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1326)*1+lsi)*1]), &(stack[((hsi*10+1817)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1208)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+803)*1+lsi)*1]),&(stack[((hsi*15+1326)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1827)*1+lsi)*1]), &(stack[((hsi*15+1326)*1+lsi)*1]), &(stack[((hsi*10+1817)*1+lsi)*1]), &(stack[((hsi*15+1433)*1+lsi)*1]), &(stack[((hsi*15+1448)*1+lsi)*1]), &(stack[((hsi*15+1275)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+782)*1+lsi)*1]),&(stack[((hsi*21+1827)*1+lsi)*1]),21);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1180)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+1156)*1+lsi)*1]), &(stack[((hsi*3+1165)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1499)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1180)*1+lsi)*1]), &(stack[((hsi*6+1159)*1+lsi)*1]), &(stack[((hsi*6+1168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+772)*1+lsi)*1]),&(stack[((hsi*10+1499)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1156)*1+lsi)*1]), &(stack[((hsi*10+1499)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*10+1208)*1+lsi)*1]), &(stack[((hsi*10+1218)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+757)*1+lsi)*1]),&(stack[((hsi*15+1156)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1848)*1+lsi)*1]), &(stack[((hsi*15+1156)*1+lsi)*1]), &(stack[((hsi*10+1499)*1+lsi)*1]), &(stack[((hsi*15+1275)*1+lsi)*1]), &(stack[((hsi*15+1290)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+736)*1+lsi)*1]),&(stack[((hsi*21+1848)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+726)*1+lsi)*1]),&(stack[((hsi*10+1218)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+711)*1+lsi)*1]),&(stack[((hsi*15+1290)*1+lsi)*1]),15);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1177)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1869)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*3+1193)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1879)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*3+1174)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1889)*1+lsi)*1]), &(stack[((hsi*10+1265)*1+lsi)*1]), &(stack[((hsi*6+1202)*1+lsi)*1]), &(stack[((hsi*10+1879)*1+lsi)*1]), &(stack[((hsi*10+1869)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1904)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*6+1196)*1+lsi)*1]), &(stack[((hsi*10+1869)*1+lsi)*1]), &(stack[((hsi*10+1879)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1919)*1+lsi)*1]), &(stack[((hsi*15+1290)*1+lsi)*1]), &(stack[((hsi*10+1218)*1+lsi)*1]), &(stack[((hsi*15+1904)*1+lsi)*1]), &(stack[((hsi*15+1889)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+690)*1+lsi)*1]),&(stack[((hsi*21+1919)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+680)*1+lsi)*1]),&(stack[((hsi*10+1388)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+665)*1+lsi)*1]),&(stack[((hsi*15+1448)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1193)*1+lsi)*1]), &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*3+1347)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1940)*1+lsi)*1]), &(stack[((hsi*10+1423)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*10+1193)*1+lsi)*1]), &(stack[((hsi*10+1879)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1955)*1+lsi)*1]), &(stack[((hsi*10+1413)*1+lsi)*1]), &(stack[((hsi*6+1366)*1+lsi)*1]), &(stack[((hsi*10+1193)*1+lsi)*1]), &(stack[((hsi*10+1869)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+1970)*1+lsi)*1]), &(stack[((hsi*15+1448)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*15+1955)*1+lsi)*1]), &(stack[((hsi*15+1940)*1+lsi)*1]), &(stack[((hsi*15+1904)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+644)*1+lsi)*1]),&(stack[((hsi*21+1970)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+634)*1+lsi)*1]),&(stack[((hsi*10+1531)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+619)*1+lsi)*1]),&(stack[((hsi*15+1581)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1991)*1+lsi)*1]), &(stack[((hsi*10+1556)*1+lsi)*1]), &(stack[((hsi*6+1150)*1+lsi)*1]), &(stack[((hsi*10+1869)*1+lsi)*1]), &(stack[((hsi*10+1879)*1+lsi)*1]), &(stack[((hsi*10+1193)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2006)*1+lsi)*1]), &(stack[((hsi*15+1581)*1+lsi)*1]), &(stack[((hsi*10+1531)*1+lsi)*1]), &(stack[((hsi*15+1904)*1+lsi)*1]), &(stack[((hsi*15+1991)*1+lsi)*1]), &(stack[((hsi*15+1889)*1+lsi)*1]), &(stack[((hsi*15+1955)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+598)*1+lsi)*1]),&(stack[((hsi*21+2006)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+588)*1+lsi)*1]),&(stack[((hsi*10+1633)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+573)*1+lsi)*1]),&(stack[((hsi*15+1658)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2027)*1+lsi)*1]), &(stack[((hsi*15+1658)*1+lsi)*1]), &(stack[((hsi*10+1633)*1+lsi)*1]), &(stack[((hsi*15+1955)*1+lsi)*1]), &(stack[((hsi*15+1940)*1+lsi)*1]), &(stack[((hsi*15+1991)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+552)*1+lsi)*1]),&(stack[((hsi*21+2027)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+542)*1+lsi)*1]),&(stack[((hsi*10+1521)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+527)*1+lsi)*1]),&(stack[((hsi*15+1566)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2048)*1+lsi)*1]), &(stack[((hsi*15+1566)*1+lsi)*1]), &(stack[((hsi*10+1521)*1+lsi)*1]), &(stack[((hsi*15+1889)*1+lsi)*1]), &(stack[((hsi*15+1904)*1+lsi)*1]), &(stack[((hsi*15+1991)*1+lsi)*1]), &(stack[((hsi*15+1940)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+506)*1+lsi)*1]),&(stack[((hsi*21+2048)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+496)*1+lsi)*1]),&(stack[((hsi*10+1378)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+481)*1+lsi)*1]),&(stack[((hsi*15+1433)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2069)*1+lsi)*1]), &(stack[((hsi*15+1433)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*15+1940)*1+lsi)*1]), &(stack[((hsi*15+1955)*1+lsi)*1]), &(stack[((hsi*15+1889)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+460)*1+lsi)*1]),&(stack[((hsi*21+2069)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+450)*1+lsi)*1]),&(stack[((hsi*10+1208)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+435)*1+lsi)*1]),&(stack[((hsi*15+1275)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2090)*1+lsi)*1]), &(stack[((hsi*15+1275)*1+lsi)*1]), &(stack[((hsi*10+1208)*1+lsi)*1]), &(stack[((hsi*15+1889)*1+lsi)*1]), &(stack[((hsi*15+1904)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+414)*1+lsi)*1]),&(stack[((hsi*21+2090)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+404)*1+lsi)*1]),&(stack[((hsi*10+1255)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+389)*1+lsi)*1]),&(stack[((hsi*15+1904)*1+lsi)*1]),15);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1366)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]), &(stack[((hsi*3+1177)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2111)*1+lsi)*1]), &(stack[((hsi*10+1879)*1+lsi)*1]), &(stack[((hsi*6+1243)*1+lsi)*1]), &(stack[((hsi*10+1366)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2126)*1+lsi)*1]), &(stack[((hsi*10+1869)*1+lsi)*1]), &(stack[((hsi*6+1249)*1+lsi)*1]), &(stack[((hsi*10+1366)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2141)*1+lsi)*1]), &(stack[((hsi*15+1904)*1+lsi)*1]), &(stack[((hsi*10+1255)*1+lsi)*1]), &(stack[((hsi*15+2126)*1+lsi)*1]), &(stack[((hsi*15+2111)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+368)*1+lsi)*1]),&(stack[((hsi*21+2141)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+358)*1+lsi)*1]),&(stack[((hsi*10+1413)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+343)*1+lsi)*1]),&(stack[((hsi*15+1955)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+2162)*1+lsi)*1]), &(stack[((hsi*10+1193)*1+lsi)*1]), &(stack[((hsi*6+1350)*1+lsi)*1]), &(stack[((hsi*10+1366)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2177)*1+lsi)*1]), &(stack[((hsi*15+1955)*1+lsi)*1]), &(stack[((hsi*10+1413)*1+lsi)*1]), &(stack[((hsi*15+2162)*1+lsi)*1]), &(stack[((hsi*15+2126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+322)*1+lsi)*1]),&(stack[((hsi*21+2177)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+312)*1+lsi)*1]),&(stack[((hsi*10+1556)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+297)*1+lsi)*1]),&(stack[((hsi*15+1991)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2198)*1+lsi)*1]), &(stack[((hsi*15+1991)*1+lsi)*1]), &(stack[((hsi*10+1556)*1+lsi)*1]), &(stack[((hsi*15+2126)*1+lsi)*1]), &(stack[((hsi*15+2111)*1+lsi)*1]), &(stack[((hsi*15+2162)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+276)*1+lsi)*1]),&(stack[((hsi*21+2198)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+266)*1+lsi)*1]),&(stack[((hsi*10+1423)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+251)*1+lsi)*1]),&(stack[((hsi*15+1940)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2219)*1+lsi)*1]), &(stack[((hsi*15+1940)*1+lsi)*1]), &(stack[((hsi*10+1423)*1+lsi)*1]), &(stack[((hsi*15+2162)*1+lsi)*1]), &(stack[((hsi*15+2111)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+230)*1+lsi)*1]),&(stack[((hsi*21+2219)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+220)*1+lsi)*1]),&(stack[((hsi*10+1265)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+205)*1+lsi)*1]),&(stack[((hsi*15+1889)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2240)*1+lsi)*1]), &(stack[((hsi*15+1889)*1+lsi)*1]), &(stack[((hsi*10+1265)*1+lsi)*1]), &(stack[((hsi*15+2111)*1+lsi)*1]), &(stack[((hsi*15+2126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+184)*1+lsi)*1]),&(stack[((hsi*21+2240)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+174)*1+lsi)*1]),&(stack[((hsi*10+1869)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+159)*1+lsi)*1]),&(stack[((hsi*15+2126)*1+lsi)*1]),15);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1341)*1+lsi)*1]), &(stack[((hsi*10+1366)*1+lsi)*1]), &(stack[((hsi*6+1617)*1+lsi)*1]));
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2261)*1+lsi)*1]), &(stack[((hsi*15+2126)*1+lsi)*1]), &(stack[((hsi*10+1869)*1+lsi)*1]), &(stack[((hsi*15+1341)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+138)*1+lsi)*1]),&(stack[((hsi*21+2261)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+128)*1+lsi)*1]),&(stack[((hsi*10+1193)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+113)*1+lsi)*1]),&(stack[((hsi*15+2162)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2282)*1+lsi)*1]), &(stack[((hsi*15+2162)*1+lsi)*1]), &(stack[((hsi*10+1193)*1+lsi)*1]), &(stack[((hsi*15+1341)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+92)*1+lsi)*1]),&(stack[((hsi*21+2282)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+82)*1+lsi)*1]),&(stack[((hsi*10+1879)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+67)*1+lsi)*1]),&(stack[((hsi*15+2111)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2303)*1+lsi)*1]), &(stack[((hsi*15+2111)*1+lsi)*1]), &(stack[((hsi*10+1879)*1+lsi)*1]), &(stack[((hsi*15+1341)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+46)*1+lsi)*1]),&(stack[((hsi*21+2303)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+36)*1+lsi)*1]),&(stack[((hsi*10+1366)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+21)*1+lsi)*1]),&(stack[((hsi*15+1341)*1+lsi)*1]),15);
OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*21+2324)*1+lsi)*1]), &(stack[((hsi*15+1341)*1+lsi)*1]), &(stack[((hsi*10+1366)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+2324)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
