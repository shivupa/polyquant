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
#include <CR_aB_X9__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_M_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*50+2200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*50+2250)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*50+2300)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+2350)*1+lsi)*1]), &(stack[((hsi*50+2300)*1+lsi)*1]), &(stack[((hsi*50+2250)*1+lsi)*1]), &(stack[((hsi*50+2200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+1650)*1+lsi)*1]),&(stack[((hsi*550+2350)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+2900)*1+lsi)*1]), &(stack[((hsi*50+2300)*1+lsi)*1]), &(stack[((hsi*50+2250)*1+lsi)*1]), &(stack[((hsi*50+2200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+1100)*1+lsi)*1]),&(stack[((hsi*550+2900)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+3450)*1+lsi)*1]), &(stack[((hsi*50+2300)*1+lsi)*1]), &(stack[((hsi*50+2250)*1+lsi)*1]), &(stack[((hsi*50+2200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+550)*1+lsi)*1]),&(stack[((hsi*550+3450)*1+lsi)*1]),550);
CR_aB_Z9__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*40+2200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*40+2240)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*40+2280)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+4000)*1+lsi)*1]), &(stack[((hsi*40+2280)*1+lsi)*1]), &(stack[((hsi*40+2240)*1+lsi)*1]), &(stack[((hsi*40+2200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+0)*1+lsi)*1]),&(stack[((hsi*550+4000)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2200 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
