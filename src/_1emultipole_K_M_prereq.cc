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
#include <CR_aB_X7__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_K_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*88+7920)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*88+8008)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*88+8096)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*1980+8184)*1+lsi)*1]), &(stack[((hsi*88+8096)*1+lsi)*1]), &(stack[((hsi*88+8008)*1+lsi)*1]), &(stack[((hsi*88+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+5940)*1+lsi)*1]),&(stack[((hsi*1980+8184)*1+lsi)*1]),1980);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*1980+10164)*1+lsi)*1]), &(stack[((hsi*88+8096)*1+lsi)*1]), &(stack[((hsi*88+8008)*1+lsi)*1]), &(stack[((hsi*88+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+3960)*1+lsi)*1]),&(stack[((hsi*1980+10164)*1+lsi)*1]),1980);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*1980+12144)*1+lsi)*1]), &(stack[((hsi*88+8096)*1+lsi)*1]), &(stack[((hsi*88+8008)*1+lsi)*1]), &(stack[((hsi*88+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+1980)*1+lsi)*1]),&(stack[((hsi*1980+12144)*1+lsi)*1]),1980);
CR_aB_Z7__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*80+7920)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*80+8000)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*80+8080)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*1980+14124)*1+lsi)*1]), &(stack[((hsi*80+8080)*1+lsi)*1]), &(stack[((hsi*80+8000)*1+lsi)*1]), &(stack[((hsi*80+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+0)*1+lsi)*1]),&(stack[((hsi*1980+14124)*1+lsi)*1]),1980);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 7920 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
