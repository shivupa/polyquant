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
void _sphemultipole_D_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
LIBINT2_REALTYPE fp8;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp8), &(fp7), &(fp5));
LIBINT2_REALTYPE fp13;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp13), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+400)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+403)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+406)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+409)*1+lsi)*1]), &(stack[((hsi*3+406)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+403)*1+lsi)*1]), &(stack[((hsi*3+400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+394)*1+lsi)*1]),&(stack[((hsi*6+409)*1+lsi)*1]),6);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+415)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+418)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*3+400)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+418)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+415)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*6+409)*1+lsi)*1]), &(stack[((hsi*3+406)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+384)*1+lsi)*1]),&(stack[((hsi*10+433)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+406)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+443)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+446)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+449)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+443)*1+lsi)*1]), &(stack[((hsi*3+406)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+378)*1+lsi)*1]),&(stack[((hsi*6+449)*1+lsi)*1]),6);
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+455)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+458)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+461)*1+lsi)*1]), &(stack[((hsi*3+406)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+458)*1+lsi)*1]), &(stack[((hsi*3+455)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+467)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+455)*1+lsi)*1]), &(stack[((hsi*3+458)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+473)*1+lsi)*1]), &(stack[((hsi*6+449)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]), &(stack[((hsi*6+467)*1+lsi)*1]), &(stack[((hsi*6+461)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+368)*1+lsi)*1]),&(stack[((hsi*10+473)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+446)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+483)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+486)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+489)*1+lsi)*1]), &(stack[((hsi*3+486)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+403)*1+lsi)*1]), &(stack[((hsi*3+483)*1+lsi)*1]), &(stack[((hsi*3+400)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+362)*1+lsi)*1]),&(stack[((hsi*6+489)*1+lsi)*1]),6);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+495)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+498)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+418)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]), &(stack[((hsi*3+495)*1+lsi)*1]), &(stack[((hsi*3+458)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+504)*1+lsi)*1]), &(stack[((hsi*3+483)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+415)*1+lsi)*1]), &(stack[((hsi*3+495)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]), &(stack[((hsi*3+455)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+510)*1+lsi)*1]), &(stack[((hsi*6+489)*1+lsi)*1]), &(stack[((hsi*3+486)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*6+504)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*6+498)*1+lsi)*1]), &(stack[((hsi*6+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+352)*1+lsi)*1]),&(stack[((hsi*10+510)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+486)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+520)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+523)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+443)*1+lsi)*1]), &(stack[((hsi*3+486)*1+lsi)*1]), &(stack[((hsi*3+406)*1+lsi)*1]), &(stack[((hsi*3+483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+346)*1+lsi)*1]),&(stack[((hsi*6+523)*1+lsi)*1]),6);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+529)*1+lsi)*1]), &(stack[((hsi*3+486)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+455)*1+lsi)*1]), &(stack[((hsi*3+458)*1+lsi)*1]), &(stack[((hsi*3+495)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+535)*1+lsi)*1]), &(stack[((hsi*6+523)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*6+467)*1+lsi)*1]), &(stack[((hsi*6+529)*1+lsi)*1]), &(stack[((hsi*6+461)*1+lsi)*1]), &(stack[((hsi*6+504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+336)*1+lsi)*1]),&(stack[((hsi*10+535)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+520)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+545)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+483)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]), &(stack[((hsi*3+486)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+330)*1+lsi)*1]),&(stack[((hsi*6+545)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+551)*1+lsi)*1]), &(stack[((hsi*6+545)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*6+504)*1+lsi)*1]), &(stack[((hsi*6+498)*1+lsi)*1]), &(stack[((hsi*6+529)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+320)*1+lsi)*1]),&(stack[((hsi*10+551)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+520)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+561)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+406)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]), &(stack[((hsi*3+486)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+314)*1+lsi)*1]),&(stack[((hsi*6+561)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+567)*1+lsi)*1]), &(stack[((hsi*6+561)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*6+461)*1+lsi)*1]), &(stack[((hsi*6+467)*1+lsi)*1]), &(stack[((hsi*6+529)*1+lsi)*1]), &(stack[((hsi*6+498)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+304)*1+lsi)*1]),&(stack[((hsi*10+567)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+520)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+577)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+400)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]), &(stack[((hsi*3+483)*1+lsi)*1]), &(stack[((hsi*3+406)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+298)*1+lsi)*1]),&(stack[((hsi*6+577)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+583)*1+lsi)*1]), &(stack[((hsi*6+577)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*6+498)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*6+504)*1+lsi)*1]), &(stack[((hsi*6+461)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+288)*1+lsi)*1]),&(stack[((hsi*10+583)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+520)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+593)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+406)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]), &(stack[((hsi*3+400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+282)*1+lsi)*1]),&(stack[((hsi*6+593)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+599)*1+lsi)*1]), &(stack[((hsi*6+593)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*6+461)*1+lsi)*1]), &(stack[((hsi*6+467)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+272)*1+lsi)*1]),&(stack[((hsi*10+599)*1+lsi)*1]),10);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+520)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+609)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+400)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+266)*1+lsi)*1]),&(stack[((hsi*6+609)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+615)*1+lsi)*1]), &(stack[((hsi*6+609)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+256)*1+lsi)*1]),&(stack[((hsi*10+615)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+250)*1+lsi)*1]),&(stack[((hsi*6+427)*1+lsi)*1]),6);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+520)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+625)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+628)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+625)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+640)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*6+628)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+240)*1+lsi)*1]),&(stack[((hsi*10+640)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+234)*1+lsi)*1]),&(stack[((hsi*6+467)*1+lsi)*1]),6);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+403)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+650)*1+lsi)*1]), &(stack[((hsi*3+458)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+403)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+656)*1+lsi)*1]), &(stack[((hsi*3+455)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+403)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+662)*1+lsi)*1]), &(stack[((hsi*6+467)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]), &(stack[((hsi*6+656)*1+lsi)*1]), &(stack[((hsi*6+650)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+224)*1+lsi)*1]),&(stack[((hsi*10+662)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+218)*1+lsi)*1]),&(stack[((hsi*6+504)*1+lsi)*1]),6);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+672)*1+lsi)*1]), &(stack[((hsi*3+495)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+678)*1+lsi)*1]), &(stack[((hsi*6+504)*1+lsi)*1]), &(stack[((hsi*3+483)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*6+672)*1+lsi)*1]), &(stack[((hsi*6+628)*1+lsi)*1]), &(stack[((hsi*6+656)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+208)*1+lsi)*1]),&(stack[((hsi*10+678)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+202)*1+lsi)*1]),&(stack[((hsi*6+529)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+688)*1+lsi)*1]), &(stack[((hsi*6+529)*1+lsi)*1]), &(stack[((hsi*3+486)*1+lsi)*1]), &(stack[((hsi*6+656)*1+lsi)*1]), &(stack[((hsi*6+650)*1+lsi)*1]), &(stack[((hsi*6+672)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+192)*1+lsi)*1]),&(stack[((hsi*10+688)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+186)*1+lsi)*1]),&(stack[((hsi*6+498)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+698)*1+lsi)*1]), &(stack[((hsi*6+498)*1+lsi)*1]), &(stack[((hsi*3+446)*1+lsi)*1]), &(stack[((hsi*6+628)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*6+672)*1+lsi)*1]), &(stack[((hsi*6+650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+176)*1+lsi)*1]),&(stack[((hsi*10+698)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+170)*1+lsi)*1]),&(stack[((hsi*6+461)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+708)*1+lsi)*1]), &(stack[((hsi*6+461)*1+lsi)*1]), &(stack[((hsi*3+406)*1+lsi)*1]), &(stack[((hsi*6+650)*1+lsi)*1]), &(stack[((hsi*6+656)*1+lsi)*1]), &(stack[((hsi*6+628)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+160)*1+lsi)*1]),&(stack[((hsi*10+708)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+154)*1+lsi)*1]),&(stack[((hsi*6+421)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+718)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*3+400)*1+lsi)*1]), &(stack[((hsi*6+628)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+144)*1+lsi)*1]),&(stack[((hsi*10+718)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+138)*1+lsi)*1]),&(stack[((hsi*6+634)*1+lsi)*1]),6);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+400)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+483)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+400)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+443)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+400)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+728)*1+lsi)*1]), &(stack[((hsi*6+634)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]), &(stack[((hsi*6+443)*1+lsi)*1]), &(stack[((hsi*6+483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+128)*1+lsi)*1]),&(stack[((hsi*10+728)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+122)*1+lsi)*1]),&(stack[((hsi*6+656)*1+lsi)*1]),6);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+738)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+400)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+744)*1+lsi)*1]), &(stack[((hsi*6+656)*1+lsi)*1]), &(stack[((hsi*3+455)*1+lsi)*1]), &(stack[((hsi*6+738)*1+lsi)*1]), &(stack[((hsi*6+443)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+112)*1+lsi)*1]),&(stack[((hsi*10+744)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+106)*1+lsi)*1]),&(stack[((hsi*6+672)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+754)*1+lsi)*1]), &(stack[((hsi*6+672)*1+lsi)*1]), &(stack[((hsi*3+495)*1+lsi)*1]), &(stack[((hsi*6+443)*1+lsi)*1]), &(stack[((hsi*6+483)*1+lsi)*1]), &(stack[((hsi*6+738)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+96)*1+lsi)*1]),&(stack[((hsi*10+754)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+90)*1+lsi)*1]),&(stack[((hsi*6+650)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+764)*1+lsi)*1]), &(stack[((hsi*6+650)*1+lsi)*1]), &(stack[((hsi*3+458)*1+lsi)*1]), &(stack[((hsi*6+738)*1+lsi)*1]), &(stack[((hsi*6+483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+80)*1+lsi)*1]),&(stack[((hsi*10+764)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+74)*1+lsi)*1]),&(stack[((hsi*6+628)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+774)*1+lsi)*1]), &(stack[((hsi*6+628)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]), &(stack[((hsi*6+483)*1+lsi)*1]), &(stack[((hsi*6+443)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+64)*1+lsi)*1]),&(stack[((hsi*10+774)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+58)*1+lsi)*1]),&(stack[((hsi*6+443)*1+lsi)*1]),6);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+455)*1+lsi)*1]), &(stack[((hsi*3+400)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+784)*1+lsi)*1]), &(stack[((hsi*6+443)*1+lsi)*1]), &(stack[((hsi*3+520)*1+lsi)*1]), &(stack[((hsi*6+455)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+48)*1+lsi)*1]),&(stack[((hsi*10+784)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+42)*1+lsi)*1]),&(stack[((hsi*6+738)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+794)*1+lsi)*1]), &(stack[((hsi*6+738)*1+lsi)*1]), &(stack[((hsi*3+403)*1+lsi)*1]), &(stack[((hsi*6+455)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+32)*1+lsi)*1]),&(stack[((hsi*10+794)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+26)*1+lsi)*1]),&(stack[((hsi*6+483)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+804)*1+lsi)*1]), &(stack[((hsi*6+483)*1+lsi)*1]), &(stack[((hsi*3+625)*1+lsi)*1]), &(stack[((hsi*6+455)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(stack[((hsi*10+804)*1+lsi)*1]),10);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(stack[((hsi*6+455)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+814)*1+lsi)*1]), &(stack[((hsi*6+455)*1+lsi)*1]), &(stack[((hsi*3+400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(stack[((hsi*10+814)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 400 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
