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
#include <CR_aB_X9__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_M_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*60+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*60+3360)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*60+3420)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*825+3480)*1+lsi)*1]), &(stack[((hsi*60+3420)*1+lsi)*1]), &(stack[((hsi*60+3360)*1+lsi)*1]), &(stack[((hsi*60+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+2475)*1+lsi)*1]),&(stack[((hsi*825+3480)*1+lsi)*1]),825);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*825+4305)*1+lsi)*1]), &(stack[((hsi*60+3420)*1+lsi)*1]), &(stack[((hsi*60+3360)*1+lsi)*1]), &(stack[((hsi*60+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+1650)*1+lsi)*1]),&(stack[((hsi*825+4305)*1+lsi)*1]),825);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*825+5130)*1+lsi)*1]), &(stack[((hsi*60+3420)*1+lsi)*1]), &(stack[((hsi*60+3360)*1+lsi)*1]), &(stack[((hsi*60+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+825)*1+lsi)*1]),&(stack[((hsi*825+5130)*1+lsi)*1]),825);
CR_aB_Z9__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*50+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*50+3350)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*50+3400)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*825+5955)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+0)*1+lsi)*1]),&(stack[((hsi*825+5955)*1+lsi)*1]),825);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3300 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif