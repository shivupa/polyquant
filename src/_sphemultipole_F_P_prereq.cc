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
void _sphemultipole_F_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+625)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+628)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+631)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*3+631)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+628)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+640)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+643)*1+lsi)*1]), &(stack[((hsi*3+640)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+625)*1+lsi)*1]), &(stack[((hsi*3+628)*1+lsi)*1]));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+649)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+652)*1+lsi)*1]), &(stack[((hsi*3+649)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+640)*1+lsi)*1]), &(stack[((hsi*3+631)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+658)*1+lsi)*1]), &(stack[((hsi*6+652)*1+lsi)*1]), &(stack[((hsi*3+649)*1+lsi)*1]), &(stack[((hsi*6+643)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+615)*1+lsi)*1]),&(stack[((hsi*10+658)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+649)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+668)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+671)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+668)*1+lsi)*1]), &(stack[((hsi*3+649)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+677)*1+lsi)*1]), &(stack[((hsi*3+628)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+649)*1+lsi)*1]), &(stack[((hsi*3+668)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+683)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*3+631)*1+lsi)*1]), &(stack[((hsi*6+677)*1+lsi)*1]), &(stack[((hsi*6+671)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+693)*1+lsi)*1]), &(stack[((hsi*6+643)*1+lsi)*1]), &(stack[((hsi*3+640)*1+lsi)*1]), &(stack[((hsi*6+671)*1+lsi)*1]), &(stack[((hsi*6+677)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+703)*1+lsi)*1]), &(stack[((hsi*10+658)*1+lsi)*1]), &(stack[((hsi*6+652)*1+lsi)*1]), &(stack[((hsi*10+693)*1+lsi)*1]), &(stack[((hsi*10+683)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+600)*1+lsi)*1]),&(stack[((hsi*15+703)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+652)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+655)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+718)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+721)*1+lsi)*1]), &(stack[((hsi*3+652)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*3+655)*1+lsi)*1]), &(stack[((hsi*3+628)*1+lsi)*1]));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+727)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+730)*1+lsi)*1]), &(stack[((hsi*3+727)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+655)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+736)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+739)*1+lsi)*1]), &(stack[((hsi*3+736)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+727)*1+lsi)*1]), &(stack[((hsi*3+652)*1+lsi)*1]), &(stack[((hsi*3+640)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+745)*1+lsi)*1]), &(stack[((hsi*6+739)*1+lsi)*1]), &(stack[((hsi*3+736)*1+lsi)*1]), &(stack[((hsi*6+730)*1+lsi)*1]), &(stack[((hsi*6+721)*1+lsi)*1]), &(stack[((hsi*6+643)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+590)*1+lsi)*1]),&(stack[((hsi*10+745)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+736)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+755)*1+lsi)*1]), &(stack[((hsi*3+655)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+736)*1+lsi)*1]), &(stack[((hsi*3+668)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+761)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+736)*1+lsi)*1]), &(stack[((hsi*3+649)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+767)*1+lsi)*1]), &(stack[((hsi*6+721)*1+lsi)*1]), &(stack[((hsi*3+652)*1+lsi)*1]), &(stack[((hsi*6+761)*1+lsi)*1]), &(stack[((hsi*6+755)*1+lsi)*1]), &(stack[((hsi*6+677)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*6+730)*1+lsi)*1]), &(stack[((hsi*3+727)*1+lsi)*1]), &(stack[((hsi*6+755)*1+lsi)*1]), &(stack[((hsi*6+761)*1+lsi)*1]), &(stack[((hsi*6+671)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+787)*1+lsi)*1]), &(stack[((hsi*10+745)*1+lsi)*1]), &(stack[((hsi*6+739)*1+lsi)*1]), &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*10+767)*1+lsi)*1]), &(stack[((hsi*10+693)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+575)*1+lsi)*1]),&(stack[((hsi*15+787)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+739)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+742)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+628)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]), &(stack[((hsi*3+742)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+808)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+811)*1+lsi)*1]), &(stack[((hsi*3+808)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+625)*1+lsi)*1]), &(stack[((hsi*3+742)*1+lsi)*1]), &(stack[((hsi*3+628)*1+lsi)*1]), &(stack[((hsi*3+655)*1+lsi)*1]));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+817)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+640)*1+lsi)*1]), &(stack[((hsi*3+808)*1+lsi)*1]), &(stack[((hsi*3+631)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]), &(stack[((hsi*3+727)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+826)*1+lsi)*1]), &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(stack[((hsi*6+643)*1+lsi)*1]), &(stack[((hsi*6+811)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*6+730)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+565)*1+lsi)*1]),&(stack[((hsi*10+826)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+836)*1+lsi)*1]), &(stack[((hsi*3+742)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+668)*1+lsi)*1]), &(stack[((hsi*3+649)*1+lsi)*1]), &(stack[((hsi*3+736)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+842)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]), &(stack[((hsi*6+677)*1+lsi)*1]), &(stack[((hsi*6+671)*1+lsi)*1]), &(stack[((hsi*6+836)*1+lsi)*1]), &(stack[((hsi*6+761)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+852)*1+lsi)*1]), &(stack[((hsi*6+811)*1+lsi)*1]), &(stack[((hsi*3+808)*1+lsi)*1]), &(stack[((hsi*6+671)*1+lsi)*1]), &(stack[((hsi*6+836)*1+lsi)*1]), &(stack[((hsi*6+677)*1+lsi)*1]), &(stack[((hsi*6+755)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+862)*1+lsi)*1]), &(stack[((hsi*10+826)*1+lsi)*1]), &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*10+693)*1+lsi)*1]), &(stack[((hsi*10+852)*1+lsi)*1]), &(stack[((hsi*10+683)*1+lsi)*1]), &(stack[((hsi*10+842)*1+lsi)*1]), &(stack[((hsi*10+777)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+550)*1+lsi)*1]),&(stack[((hsi*15+862)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+817)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+655)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*3+742)*1+lsi)*1]));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+877)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+727)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(stack[((hsi*3+652)*1+lsi)*1]), &(stack[((hsi*3+808)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+886)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(stack[((hsi*6+730)*1+lsi)*1]), &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*6+721)*1+lsi)*1]), &(stack[((hsi*6+811)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+540)*1+lsi)*1]),&(stack[((hsi*10+886)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+896)*1+lsi)*1]), &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(stack[((hsi*6+755)*1+lsi)*1]), &(stack[((hsi*6+761)*1+lsi)*1]), &(stack[((hsi*6+836)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+906)*1+lsi)*1]), &(stack[((hsi*10+886)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*10+896)*1+lsi)*1]), &(stack[((hsi*10+767)*1+lsi)*1]), &(stack[((hsi*10+852)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+525)*1+lsi)*1]),&(stack[((hsi*15+906)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+877)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+808)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+921)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(stack[((hsi*6+811)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*6+820)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+515)*1+lsi)*1]),&(stack[((hsi*10+921)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+931)*1+lsi)*1]), &(stack[((hsi*10+921)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*10+852)*1+lsi)*1]), &(stack[((hsi*10+842)*1+lsi)*1]), &(stack[((hsi*10+896)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+500)*1+lsi)*1]),&(stack[((hsi*15+931)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+877)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+652)*1+lsi)*1]), &(stack[((hsi*3+727)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+946)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(stack[((hsi*6+721)*1+lsi)*1]), &(stack[((hsi*6+730)*1+lsi)*1]), &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+490)*1+lsi)*1]),&(stack[((hsi*10+946)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+956)*1+lsi)*1]), &(stack[((hsi*10+946)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*10+767)*1+lsi)*1]), &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*10+896)*1+lsi)*1]), &(stack[((hsi*10+842)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+475)*1+lsi)*1]),&(stack[((hsi*15+956)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+817)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+631)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]), &(stack[((hsi*3+640)*1+lsi)*1]), &(stack[((hsi*3+808)*1+lsi)*1]), &(stack[((hsi*3+652)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+817)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*6+643)*1+lsi)*1]), &(stack[((hsi*6+811)*1+lsi)*1]), &(stack[((hsi*6+721)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+465)*1+lsi)*1]),&(stack[((hsi*10+971)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+981)*1+lsi)*1]), &(stack[((hsi*10+971)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*10+683)*1+lsi)*1]), &(stack[((hsi*10+842)*1+lsi)*1]), &(stack[((hsi*10+693)*1+lsi)*1]), &(stack[((hsi*10+852)*1+lsi)*1]), &(stack[((hsi*10+767)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+450)*1+lsi)*1]),&(stack[((hsi*15+981)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+739)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+652)*1+lsi)*1]), &(stack[((hsi*3+727)*1+lsi)*1]), &(stack[((hsi*3+631)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+996)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+739)*1+lsi)*1]), &(stack[((hsi*6+721)*1+lsi)*1]), &(stack[((hsi*6+730)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+440)*1+lsi)*1]),&(stack[((hsi*10+996)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*10+996)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*10+767)*1+lsi)*1]), &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*10+683)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+425)*1+lsi)*1]),&(stack[((hsi*15+1006)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+652)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+652)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+631)*1+lsi)*1]), &(stack[((hsi*3+640)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1021)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+652)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*6+643)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+415)*1+lsi)*1]),&(stack[((hsi*10+1021)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1031)*1+lsi)*1]), &(stack[((hsi*10+1021)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*10+683)*1+lsi)*1]), &(stack[((hsi*10+693)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+400)*1+lsi)*1]),&(stack[((hsi*15+1031)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+390)*1+lsi)*1]),&(stack[((hsi*10+693)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+631)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+668)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+631)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1046)*1+lsi)*1]), &(stack[((hsi*3+649)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+631)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1052)*1+lsi)*1]), &(stack[((hsi*6+677)*1+lsi)*1]), &(stack[((hsi*3+628)*1+lsi)*1]), &(stack[((hsi*6+1046)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1062)*1+lsi)*1]), &(stack[((hsi*6+671)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*6+1046)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1072)*1+lsi)*1]), &(stack[((hsi*10+693)*1+lsi)*1]), &(stack[((hsi*6+643)*1+lsi)*1]), &(stack[((hsi*10+1062)*1+lsi)*1]), &(stack[((hsi*10+1052)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+375)*1+lsi)*1]),&(stack[((hsi*15+1072)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+365)*1+lsi)*1]),&(stack[((hsi*10+777)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+625)*1+lsi)*1]), &(stack[((hsi*3+736)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+631)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1087)*1+lsi)*1]), &(stack[((hsi*6+761)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*6+625)*1+lsi)*1]), &(stack[((hsi*6+1046)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1097)*1+lsi)*1]), &(stack[((hsi*6+755)*1+lsi)*1]), &(stack[((hsi*3+655)*1+lsi)*1]), &(stack[((hsi*6+625)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1107)*1+lsi)*1]), &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*6+730)*1+lsi)*1]), &(stack[((hsi*10+1097)*1+lsi)*1]), &(stack[((hsi*10+1087)*1+lsi)*1]), &(stack[((hsi*10+1062)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+350)*1+lsi)*1]),&(stack[((hsi*15+1107)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+340)*1+lsi)*1]),&(stack[((hsi*10+852)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1122)*1+lsi)*1]), &(stack[((hsi*6+836)*1+lsi)*1]), &(stack[((hsi*3+742)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*6+1046)*1+lsi)*1]), &(stack[((hsi*6+625)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1132)*1+lsi)*1]), &(stack[((hsi*10+852)*1+lsi)*1]), &(stack[((hsi*6+811)*1+lsi)*1]), &(stack[((hsi*10+1062)*1+lsi)*1]), &(stack[((hsi*10+1122)*1+lsi)*1]), &(stack[((hsi*10+1052)*1+lsi)*1]), &(stack[((hsi*10+1097)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+325)*1+lsi)*1]),&(stack[((hsi*15+1132)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+315)*1+lsi)*1]),&(stack[((hsi*10+896)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1147)*1+lsi)*1]), &(stack[((hsi*10+896)*1+lsi)*1]), &(stack[((hsi*6+820)*1+lsi)*1]), &(stack[((hsi*10+1097)*1+lsi)*1]), &(stack[((hsi*10+1087)*1+lsi)*1]), &(stack[((hsi*10+1122)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+300)*1+lsi)*1]),&(stack[((hsi*15+1147)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+290)*1+lsi)*1]),&(stack[((hsi*10+842)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+808)*1+lsi)*1]), &(stack[((hsi*10+842)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*10+1052)*1+lsi)*1]), &(stack[((hsi*10+1062)*1+lsi)*1]), &(stack[((hsi*10+1122)*1+lsi)*1]), &(stack[((hsi*10+1087)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+275)*1+lsi)*1]),&(stack[((hsi*15+808)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+265)*1+lsi)*1]),&(stack[((hsi*10+767)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1162)*1+lsi)*1]), &(stack[((hsi*10+767)*1+lsi)*1]), &(stack[((hsi*6+721)*1+lsi)*1]), &(stack[((hsi*10+1087)*1+lsi)*1]), &(stack[((hsi*10+1097)*1+lsi)*1]), &(stack[((hsi*10+1052)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+250)*1+lsi)*1]),&(stack[((hsi*15+1162)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+240)*1+lsi)*1]),&(stack[((hsi*10+683)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+718)*1+lsi)*1]), &(stack[((hsi*10+683)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*10+1052)*1+lsi)*1]), &(stack[((hsi*10+1062)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+225)*1+lsi)*1]),&(stack[((hsi*15+718)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+215)*1+lsi)*1]),&(stack[((hsi*10+1062)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*3+631)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+634)*1+lsi)*1]), &(stack[((hsi*6+1046)*1+lsi)*1]), &(stack[((hsi*3+649)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+644)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+668)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1177)*1+lsi)*1]), &(stack[((hsi*10+1062)*1+lsi)*1]), &(stack[((hsi*6+671)*1+lsi)*1]), &(stack[((hsi*10+644)*1+lsi)*1]), &(stack[((hsi*10+634)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+200)*1+lsi)*1]),&(stack[((hsi*15+1177)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+190)*1+lsi)*1]),&(stack[((hsi*10+1097)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1192)*1+lsi)*1]), &(stack[((hsi*6+625)*1+lsi)*1]), &(stack[((hsi*3+736)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1202)*1+lsi)*1]), &(stack[((hsi*10+1097)*1+lsi)*1]), &(stack[((hsi*6+755)*1+lsi)*1]), &(stack[((hsi*10+1192)*1+lsi)*1]), &(stack[((hsi*10+644)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+175)*1+lsi)*1]),&(stack[((hsi*15+1202)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+165)*1+lsi)*1]),&(stack[((hsi*10+1122)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1217)*1+lsi)*1]), &(stack[((hsi*10+1122)*1+lsi)*1]), &(stack[((hsi*6+836)*1+lsi)*1]), &(stack[((hsi*10+644)*1+lsi)*1]), &(stack[((hsi*10+634)*1+lsi)*1]), &(stack[((hsi*10+1192)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+150)*1+lsi)*1]),&(stack[((hsi*15+1217)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+140)*1+lsi)*1]),&(stack[((hsi*10+1087)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1232)*1+lsi)*1]), &(stack[((hsi*10+1087)*1+lsi)*1]), &(stack[((hsi*6+761)*1+lsi)*1]), &(stack[((hsi*10+1192)*1+lsi)*1]), &(stack[((hsi*10+634)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+125)*1+lsi)*1]),&(stack[((hsi*15+1232)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+115)*1+lsi)*1]),&(stack[((hsi*10+1052)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1247)*1+lsi)*1]), &(stack[((hsi*10+1052)*1+lsi)*1]), &(stack[((hsi*6+677)*1+lsi)*1]), &(stack[((hsi*10+634)*1+lsi)*1]), &(stack[((hsi*10+644)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+100)*1+lsi)*1]),&(stack[((hsi*15+1247)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+90)*1+lsi)*1]),&(stack[((hsi*10+644)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+668)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*3+631)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1262)*1+lsi)*1]), &(stack[((hsi*10+644)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*10+668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+1262)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+65)*1+lsi)*1]),&(stack[((hsi*10+1192)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1277)*1+lsi)*1]), &(stack[((hsi*10+1192)*1+lsi)*1]), &(stack[((hsi*6+625)*1+lsi)*1]), &(stack[((hsi*10+668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+50)*1+lsi)*1]),&(stack[((hsi*15+1277)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+40)*1+lsi)*1]),&(stack[((hsi*10+634)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1292)*1+lsi)*1]), &(stack[((hsi*10+634)*1+lsi)*1]), &(stack[((hsi*6+1046)*1+lsi)*1]), &(stack[((hsi*10+668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+25)*1+lsi)*1]),&(stack[((hsi*15+1292)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(stack[((hsi*10+668)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1307)*1+lsi)*1]), &(stack[((hsi*10+668)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+1307)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 625 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
