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
void _sphemultipole_D_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+775)*1+lsi)*1]), &(fp13), &(fp8), &(fp12));
LIBINT2_REALTYPE fp19;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(fp12), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+778)*1+lsi)*1]), &(fp19), &(fp12), &(fp8));
LIBINT2_REALTYPE fp28;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+781)*1+lsi)*1]), &(fp28), &(fp19), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+784)*1+lsi)*1]), &(stack[((hsi*3+781)*1+lsi)*1]), &(fp28), &(stack[((hsi*3+778)*1+lsi)*1]), &(stack[((hsi*3+775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+769)*1+lsi)*1]),&(stack[((hsi*6+784)*1+lsi)*1]),6);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+790)*1+lsi)*1]), &(fp12), &(fp7), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+793)*1+lsi)*1]), &(fp8), &(fp5), &(fp7));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+796)*1+lsi)*1]), &(stack[((hsi*3+775)*1+lsi)*1]), &(fp13), &(stack[((hsi*3+793)*1+lsi)*1]), &(stack[((hsi*3+790)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*3+778)*1+lsi)*1]), &(fp19), &(stack[((hsi*3+790)*1+lsi)*1]), &(stack[((hsi*3+793)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+808)*1+lsi)*1]), &(stack[((hsi*6+784)*1+lsi)*1]), &(stack[((hsi*3+781)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*6+796)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+759)*1+lsi)*1]),&(stack[((hsi*10+808)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+781)*1+lsi)*1]), &(fp5), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+818)*1+lsi)*1]), &(fp7), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+821)*1+lsi)*1]), &(stack[((hsi*3+790)*1+lsi)*1]), &(fp12), &(stack[((hsi*3+818)*1+lsi)*1]), &(stack[((hsi*3+781)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+827)*1+lsi)*1]), &(stack[((hsi*3+793)*1+lsi)*1]), &(fp8), &(stack[((hsi*3+781)*1+lsi)*1]), &(stack[((hsi*3+818)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+833)*1+lsi)*1]), &(stack[((hsi*6+796)*1+lsi)*1]), &(stack[((hsi*3+775)*1+lsi)*1]), &(stack[((hsi*6+827)*1+lsi)*1]), &(stack[((hsi*6+821)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+843)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*3+778)*1+lsi)*1]), &(stack[((hsi*6+821)*1+lsi)*1]), &(stack[((hsi*6+827)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+853)*1+lsi)*1]), &(stack[((hsi*10+808)*1+lsi)*1]), &(stack[((hsi*6+784)*1+lsi)*1]), &(stack[((hsi*10+843)*1+lsi)*1]), &(stack[((hsi*10+833)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+744)*1+lsi)*1]),&(stack[((hsi*15+853)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp11;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp11), &(fp7));
LIBINT2_REALTYPE fp9;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp9), &(fp5));
LIBINT2_REALTYPE fp14;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+868)*1+lsi)*1]), &(fp14), &(fp9), &(fp11), &(fp8));
LIBINT2_REALTYPE fp18;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+871)*1+lsi)*1]), &(fp18), &(fp11), &(fp9), &(fp12));
LIBINT2_REALTYPE fp27;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(fp27), &(fp19));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+874)*1+lsi)*1]), &(fp27), &(fp18), &(fp14), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+874)*1+lsi)*1]), &(fp27), &(stack[((hsi*3+871)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+778)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+738)*1+lsi)*1]),&(stack[((hsi*6+877)*1+lsi)*1]),6);
LIBINT2_REALTYPE fp6;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp6), &(fp4));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+883)*1+lsi)*1]), &(fp11), &(fp6), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+886)*1+lsi)*1]), &(fp9), &(fp6), &(fp5));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+889)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(fp14), &(stack[((hsi*3+886)*1+lsi)*1]), &(stack[((hsi*3+883)*1+lsi)*1]), &(stack[((hsi*3+793)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+895)*1+lsi)*1]), &(stack[((hsi*3+871)*1+lsi)*1]), &(fp18), &(stack[((hsi*3+883)*1+lsi)*1]), &(stack[((hsi*3+886)*1+lsi)*1]), &(stack[((hsi*3+790)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+901)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+874)*1+lsi)*1]), &(stack[((hsi*6+895)*1+lsi)*1]), &(stack[((hsi*6+889)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+728)*1+lsi)*1]),&(stack[((hsi*10+901)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+874)*1+lsi)*1]), &(fp6), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+911)*1+lsi)*1]), &(stack[((hsi*3+883)*1+lsi)*1]), &(fp11), &(stack[((hsi*3+874)*1+lsi)*1]), &(stack[((hsi*3+818)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+917)*1+lsi)*1]), &(stack[((hsi*3+886)*1+lsi)*1]), &(fp9), &(stack[((hsi*3+874)*1+lsi)*1]), &(stack[((hsi*3+781)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+923)*1+lsi)*1]), &(stack[((hsi*6+889)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*6+917)*1+lsi)*1]), &(stack[((hsi*6+911)*1+lsi)*1]), &(stack[((hsi*6+827)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*6+895)*1+lsi)*1]), &(stack[((hsi*3+871)*1+lsi)*1]), &(stack[((hsi*6+911)*1+lsi)*1]), &(stack[((hsi*6+917)*1+lsi)*1]), &(stack[((hsi*6+821)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+943)*1+lsi)*1]), &(stack[((hsi*10+901)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*10+923)*1+lsi)*1]), &(stack[((hsi*10+843)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+713)*1+lsi)*1]),&(stack[((hsi*15+943)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp10;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(fp6), &(fp4));
LIBINT2_REALTYPE fp15;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp15), &(fp9), &(fp5));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+958)*1+lsi)*1]), &(fp15), &(fp8), &(fp12), &(fp10), &(fp9));
LIBINT2_REALTYPE fp17;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(fp11), &(fp7));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+961)*1+lsi)*1]), &(fp17), &(fp12), &(fp10), &(fp8), &(fp11));
LIBINT2_REALTYPE fp26;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(fp26), &(fp18), &(fp12));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+964)*1+lsi)*1]), &(fp26), &(fp19), &(fp17), &(fp13), &(fp15), &(fp18));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+967)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(fp26), &(stack[((hsi*3+778)*1+lsi)*1]), &(stack[((hsi*3+961)*1+lsi)*1]), &(stack[((hsi*3+775)*1+lsi)*1]), &(stack[((hsi*3+958)*1+lsi)*1]), &(stack[((hsi*3+871)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+707)*1+lsi)*1]),&(stack[((hsi*6+967)*1+lsi)*1]),6);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+973)*1+lsi)*1]), &(fp10), &(fp7), &(fp5), &(fp6));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+958)*1+lsi)*1]), &(fp15), &(stack[((hsi*3+793)*1+lsi)*1]), &(stack[((hsi*3+790)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(stack[((hsi*3+886)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+982)*1+lsi)*1]), &(stack[((hsi*3+961)*1+lsi)*1]), &(fp17), &(stack[((hsi*3+790)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(stack[((hsi*3+793)*1+lsi)*1]), &(stack[((hsi*3+883)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+988)*1+lsi)*1]), &(stack[((hsi*6+967)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*6+982)*1+lsi)*1]), &(stack[((hsi*6+796)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*6+895)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+697)*1+lsi)*1]),&(stack[((hsi*10+988)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+998)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(fp10), &(stack[((hsi*3+818)*1+lsi)*1]), &(stack[((hsi*3+781)*1+lsi)*1]), &(stack[((hsi*3+874)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1004)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+958)*1+lsi)*1]), &(stack[((hsi*6+827)*1+lsi)*1]), &(stack[((hsi*6+821)*1+lsi)*1]), &(stack[((hsi*6+998)*1+lsi)*1]), &(stack[((hsi*6+917)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*6+982)*1+lsi)*1]), &(stack[((hsi*3+961)*1+lsi)*1]), &(stack[((hsi*6+821)*1+lsi)*1]), &(stack[((hsi*6+998)*1+lsi)*1]), &(stack[((hsi*6+827)*1+lsi)*1]), &(stack[((hsi*6+911)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1024)*1+lsi)*1]), &(stack[((hsi*10+988)*1+lsi)*1]), &(stack[((hsi*6+967)*1+lsi)*1]), &(stack[((hsi*10+843)*1+lsi)*1]), &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*10+833)*1+lsi)*1]), &(stack[((hsi*10+1004)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+682)*1+lsi)*1]),&(stack[((hsi*15+1024)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp16;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(fp10), &(fp6));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+964)*1+lsi)*1]), &(fp16), &(fp11), &(fp9), &(fp10));
LIBINT2_REALTYPE fp25;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(fp25), &(fp17), &(fp11));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp25), &(fp18), &(fp16), &(fp14), &(fp17));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1042)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp25), &(stack[((hsi*3+871)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+961)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+676)*1+lsi)*1]),&(stack[((hsi*6+1042)*1+lsi)*1]),6);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1048)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(fp16), &(stack[((hsi*3+883)*1+lsi)*1]), &(stack[((hsi*3+886)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1054)*1+lsi)*1]), &(stack[((hsi*6+1042)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(stack[((hsi*6+895)*1+lsi)*1]), &(stack[((hsi*6+1048)*1+lsi)*1]), &(stack[((hsi*6+889)*1+lsi)*1]), &(stack[((hsi*6+982)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+666)*1+lsi)*1]),&(stack[((hsi*10+1054)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1064)*1+lsi)*1]), &(stack[((hsi*6+1048)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(stack[((hsi*6+911)*1+lsi)*1]), &(stack[((hsi*6+917)*1+lsi)*1]), &(stack[((hsi*6+998)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1074)*1+lsi)*1]), &(stack[((hsi*10+1054)*1+lsi)*1]), &(stack[((hsi*6+1042)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*10+1064)*1+lsi)*1]), &(stack[((hsi*10+923)*1+lsi)*1]), &(stack[((hsi*10+1014)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+651)*1+lsi)*1]),&(stack[((hsi*15+1074)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp24;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(fp24), &(fp16), &(fp10));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp24), &(fp17), &(fp15), &(fp16));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1089)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp24), &(stack[((hsi*3+961)*1+lsi)*1]), &(stack[((hsi*3+958)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+645)*1+lsi)*1]),&(stack[((hsi*6+1089)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1095)*1+lsi)*1]), &(stack[((hsi*6+1089)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(stack[((hsi*6+982)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*6+1048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+635)*1+lsi)*1]),&(stack[((hsi*10+1095)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1105)*1+lsi)*1]), &(stack[((hsi*10+1095)*1+lsi)*1]), &(stack[((hsi*6+1089)*1+lsi)*1]), &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*10+1004)*1+lsi)*1]), &(stack[((hsi*10+1064)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+620)*1+lsi)*1]),&(stack[((hsi*15+1105)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp23;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(fp23), &(fp15), &(fp9));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp23), &(fp14), &(fp18), &(fp16), &(fp15));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1120)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp23), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+871)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(stack[((hsi*3+958)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+614)*1+lsi)*1]),&(stack[((hsi*6+1120)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1126)*1+lsi)*1]), &(stack[((hsi*6+1120)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(stack[((hsi*6+889)*1+lsi)*1]), &(stack[((hsi*6+895)*1+lsi)*1]), &(stack[((hsi*6+1048)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+604)*1+lsi)*1]),&(stack[((hsi*10+1126)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1136)*1+lsi)*1]), &(stack[((hsi*10+1126)*1+lsi)*1]), &(stack[((hsi*6+1120)*1+lsi)*1]), &(stack[((hsi*10+923)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*10+1064)*1+lsi)*1]), &(stack[((hsi*10+1004)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+589)*1+lsi)*1]),&(stack[((hsi*15+1136)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp22;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(fp22), &(fp14), &(fp8));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+964)*1+lsi)*1]), &(fp22), &(fp13), &(fp15), &(fp19), &(fp17), &(fp14));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1151)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(fp22), &(stack[((hsi*3+775)*1+lsi)*1]), &(stack[((hsi*3+958)*1+lsi)*1]), &(stack[((hsi*3+778)*1+lsi)*1]), &(stack[((hsi*3+961)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+583)*1+lsi)*1]),&(stack[((hsi*6+1151)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*6+1151)*1+lsi)*1]), &(stack[((hsi*3+964)*1+lsi)*1]), &(stack[((hsi*6+796)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*6+982)*1+lsi)*1]), &(stack[((hsi*6+889)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+573)*1+lsi)*1]),&(stack[((hsi*10+1157)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1167)*1+lsi)*1]), &(stack[((hsi*10+1157)*1+lsi)*1]), &(stack[((hsi*6+1151)*1+lsi)*1]), &(stack[((hsi*10+833)*1+lsi)*1]), &(stack[((hsi*10+1004)*1+lsi)*1]), &(stack[((hsi*10+843)*1+lsi)*1]), &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*10+923)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+558)*1+lsi)*1]),&(stack[((hsi*15+1167)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp21;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(fp21), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp21), &(fp14), &(fp18), &(fp13));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+958)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp21), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+871)*1+lsi)*1]), &(stack[((hsi*3+775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+552)*1+lsi)*1]),&(stack[((hsi*6+958)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1182)*1+lsi)*1]), &(stack[((hsi*6+958)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(stack[((hsi*6+889)*1+lsi)*1]), &(stack[((hsi*6+895)*1+lsi)*1]), &(stack[((hsi*6+796)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+542)*1+lsi)*1]),&(stack[((hsi*10+1182)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1192)*1+lsi)*1]), &(stack[((hsi*10+1182)*1+lsi)*1]), &(stack[((hsi*6+958)*1+lsi)*1]), &(stack[((hsi*10+923)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*10+833)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+527)*1+lsi)*1]),&(stack[((hsi*15+1192)*1+lsi)*1]),15);
LIBINT2_REALTYPE fp20;
OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(fp20), &(fp19), &(fp13));
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp20), &(fp13), &(fp19));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+868)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp20), &(stack[((hsi*3+775)*1+lsi)*1]), &(stack[((hsi*3+778)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+521)*1+lsi)*1]),&(stack[((hsi*6+868)*1+lsi)*1]),6);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1207)*1+lsi)*1]), &(stack[((hsi*6+868)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(stack[((hsi*6+796)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+511)*1+lsi)*1]),&(stack[((hsi*10+1207)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_4_c__minus_4_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1217)*1+lsi)*1]), &(stack[((hsi*10+1207)*1+lsi)*1]), &(stack[((hsi*6+868)*1+lsi)*1]), &(stack[((hsi*10+833)*1+lsi)*1]), &(stack[((hsi*10+843)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+496)*1+lsi)*1]),&(stack[((hsi*15+1217)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+490)*1+lsi)*1]),&(stack[((hsi*6+802)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+480)*1+lsi)*1]),&(stack[((hsi*10+843)*1+lsi)*1]),10);
OSVRRSMultipole_aB_p__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+775)*1+lsi)*1]), &(stack[((hsi*3+818)*1+lsi)*1]), &(fp7), &(stack[((hsi*3+1039)*1+lsi)*1]));
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+1232)*1+lsi)*1]), &(stack[((hsi*3+781)*1+lsi)*1]), &(fp5), &(stack[((hsi*3+1039)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1238)*1+lsi)*1]), &(stack[((hsi*6+827)*1+lsi)*1]), &(stack[((hsi*3+793)*1+lsi)*1]), &(stack[((hsi*6+1232)*1+lsi)*1]), &(stack[((hsi*6+775)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1248)*1+lsi)*1]), &(stack[((hsi*6+821)*1+lsi)*1]), &(stack[((hsi*3+790)*1+lsi)*1]), &(stack[((hsi*6+775)*1+lsi)*1]), &(stack[((hsi*6+1232)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1258)*1+lsi)*1]), &(stack[((hsi*10+843)*1+lsi)*1]), &(stack[((hsi*6+802)*1+lsi)*1]), &(stack[((hsi*10+1248)*1+lsi)*1]), &(stack[((hsi*10+1238)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+465)*1+lsi)*1]),&(stack[((hsi*15+1258)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+459)*1+lsi)*1]),&(stack[((hsi*6+895)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+449)*1+lsi)*1]),&(stack[((hsi*10+933)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+790)*1+lsi)*1]), &(stack[((hsi*3+874)*1+lsi)*1]), &(fp6), &(stack[((hsi*3+1039)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1273)*1+lsi)*1]), &(stack[((hsi*6+917)*1+lsi)*1]), &(stack[((hsi*3+886)*1+lsi)*1]), &(stack[((hsi*6+790)*1+lsi)*1]), &(stack[((hsi*6+1232)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1283)*1+lsi)*1]), &(stack[((hsi*6+911)*1+lsi)*1]), &(stack[((hsi*3+883)*1+lsi)*1]), &(stack[((hsi*6+790)*1+lsi)*1]), &(stack[((hsi*6+775)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1293)*1+lsi)*1]), &(stack[((hsi*10+933)*1+lsi)*1]), &(stack[((hsi*6+895)*1+lsi)*1]), &(stack[((hsi*10+1283)*1+lsi)*1]), &(stack[((hsi*10+1273)*1+lsi)*1]), &(stack[((hsi*10+1248)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+434)*1+lsi)*1]),&(stack[((hsi*15+1293)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+428)*1+lsi)*1]),&(stack[((hsi*6+982)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+418)*1+lsi)*1]),&(stack[((hsi*10+1014)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1308)*1+lsi)*1]), &(stack[((hsi*6+998)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(stack[((hsi*6+775)*1+lsi)*1]), &(stack[((hsi*6+1232)*1+lsi)*1]), &(stack[((hsi*6+790)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1318)*1+lsi)*1]), &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*6+982)*1+lsi)*1]), &(stack[((hsi*10+1248)*1+lsi)*1]), &(stack[((hsi*10+1308)*1+lsi)*1]), &(stack[((hsi*10+1238)*1+lsi)*1]), &(stack[((hsi*10+1283)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+403)*1+lsi)*1]),&(stack[((hsi*15+1318)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+397)*1+lsi)*1]),&(stack[((hsi*6+1048)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+387)*1+lsi)*1]),&(stack[((hsi*10+1064)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1333)*1+lsi)*1]), &(stack[((hsi*10+1064)*1+lsi)*1]), &(stack[((hsi*6+1048)*1+lsi)*1]), &(stack[((hsi*10+1283)*1+lsi)*1]), &(stack[((hsi*10+1273)*1+lsi)*1]), &(stack[((hsi*10+1308)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+372)*1+lsi)*1]),&(stack[((hsi*15+1333)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+366)*1+lsi)*1]),&(stack[((hsi*6+976)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+356)*1+lsi)*1]),&(stack[((hsi*10+1004)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1348)*1+lsi)*1]), &(stack[((hsi*10+1004)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*10+1238)*1+lsi)*1]), &(stack[((hsi*10+1248)*1+lsi)*1]), &(stack[((hsi*10+1308)*1+lsi)*1]), &(stack[((hsi*10+1273)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+341)*1+lsi)*1]),&(stack[((hsi*15+1348)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+335)*1+lsi)*1]),&(stack[((hsi*6+889)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+325)*1+lsi)*1]),&(stack[((hsi*10+923)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1363)*1+lsi)*1]), &(stack[((hsi*10+923)*1+lsi)*1]), &(stack[((hsi*6+889)*1+lsi)*1]), &(stack[((hsi*10+1273)*1+lsi)*1]), &(stack[((hsi*10+1283)*1+lsi)*1]), &(stack[((hsi*10+1238)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+310)*1+lsi)*1]),&(stack[((hsi*15+1363)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+304)*1+lsi)*1]),&(stack[((hsi*6+796)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+294)*1+lsi)*1]),&(stack[((hsi*10+833)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1378)*1+lsi)*1]), &(stack[((hsi*10+833)*1+lsi)*1]), &(stack[((hsi*6+796)*1+lsi)*1]), &(stack[((hsi*10+1238)*1+lsi)*1]), &(stack[((hsi*10+1248)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+279)*1+lsi)*1]),&(stack[((hsi*15+1378)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+273)*1+lsi)*1]),&(stack[((hsi*6+821)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+263)*1+lsi)*1]),&(stack[((hsi*10+1248)*1+lsi)*1]),10);
OSVRRSMultipole_aB_d__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+883)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]), &(fp4));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1393)*1+lsi)*1]), &(stack[((hsi*6+1232)*1+lsi)*1]), &(stack[((hsi*3+781)*1+lsi)*1]), &(stack[((hsi*6+883)*1+lsi)*1]));
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1403)*1+lsi)*1]), &(stack[((hsi*6+775)*1+lsi)*1]), &(stack[((hsi*3+818)*1+lsi)*1]), &(stack[((hsi*6+883)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1413)*1+lsi)*1]), &(stack[((hsi*10+1248)*1+lsi)*1]), &(stack[((hsi*6+821)*1+lsi)*1]), &(stack[((hsi*10+1403)*1+lsi)*1]), &(stack[((hsi*10+1393)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+248)*1+lsi)*1]),&(stack[((hsi*15+1413)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+242)*1+lsi)*1]),&(stack[((hsi*6+911)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+232)*1+lsi)*1]),&(stack[((hsi*10+1283)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1428)*1+lsi)*1]), &(stack[((hsi*6+790)*1+lsi)*1]), &(stack[((hsi*3+874)*1+lsi)*1]), &(stack[((hsi*6+883)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1438)*1+lsi)*1]), &(stack[((hsi*10+1283)*1+lsi)*1]), &(stack[((hsi*6+911)*1+lsi)*1]), &(stack[((hsi*10+1428)*1+lsi)*1]), &(stack[((hsi*10+1403)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+217)*1+lsi)*1]),&(stack[((hsi*15+1438)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+211)*1+lsi)*1]),&(stack[((hsi*6+998)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+201)*1+lsi)*1]),&(stack[((hsi*10+1308)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1453)*1+lsi)*1]), &(stack[((hsi*10+1308)*1+lsi)*1]), &(stack[((hsi*6+998)*1+lsi)*1]), &(stack[((hsi*10+1403)*1+lsi)*1]), &(stack[((hsi*10+1393)*1+lsi)*1]), &(stack[((hsi*10+1428)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+186)*1+lsi)*1]),&(stack[((hsi*15+1453)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+180)*1+lsi)*1]),&(stack[((hsi*6+917)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+170)*1+lsi)*1]),&(stack[((hsi*10+1273)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1468)*1+lsi)*1]), &(stack[((hsi*10+1273)*1+lsi)*1]), &(stack[((hsi*6+917)*1+lsi)*1]), &(stack[((hsi*10+1428)*1+lsi)*1]), &(stack[((hsi*10+1393)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+155)*1+lsi)*1]),&(stack[((hsi*15+1468)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+149)*1+lsi)*1]),&(stack[((hsi*6+827)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+139)*1+lsi)*1]),&(stack[((hsi*10+1238)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c__minus_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1483)*1+lsi)*1]), &(stack[((hsi*10+1238)*1+lsi)*1]), &(stack[((hsi*6+827)*1+lsi)*1]), &(stack[((hsi*10+1393)*1+lsi)*1]), &(stack[((hsi*10+1403)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+124)*1+lsi)*1]),&(stack[((hsi*15+1483)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+118)*1+lsi)*1]),&(stack[((hsi*6+775)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+108)*1+lsi)*1]),&(stack[((hsi*10+1403)*1+lsi)*1]),10);
OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+1498)*1+lsi)*1]), &(stack[((hsi*6+883)*1+lsi)*1]), &(stack[((hsi*3+1039)*1+lsi)*1]));
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1508)*1+lsi)*1]), &(stack[((hsi*10+1403)*1+lsi)*1]), &(stack[((hsi*6+775)*1+lsi)*1]), &(stack[((hsi*10+1498)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+93)*1+lsi)*1]),&(stack[((hsi*15+1508)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+87)*1+lsi)*1]),&(stack[((hsi*6+790)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+77)*1+lsi)*1]),&(stack[((hsi*10+1428)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1523)*1+lsi)*1]), &(stack[((hsi*10+1428)*1+lsi)*1]), &(stack[((hsi*6+790)*1+lsi)*1]), &(stack[((hsi*10+1498)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+62)*1+lsi)*1]),&(stack[((hsi*15+1523)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+56)*1+lsi)*1]),&(stack[((hsi*6+1232)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+46)*1+lsi)*1]),&(stack[((hsi*10+1393)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1538)*1+lsi)*1]), &(stack[((hsi*10+1393)*1+lsi)*1]), &(stack[((hsi*6+1232)*1+lsi)*1]), &(stack[((hsi*10+1498)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+31)*1+lsi)*1]),&(stack[((hsi*15+1538)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*6+25)*1+lsi)*1]),&(stack[((hsi*6+883)*1+lsi)*1]),6);
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(stack[((hsi*10+1498)*1+lsi)*1]),10);
OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*15+1553)*1+lsi)*1]), &(stack[((hsi*10+1498)*1+lsi)*1]), &(stack[((hsi*6+883)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+1553)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 775 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
