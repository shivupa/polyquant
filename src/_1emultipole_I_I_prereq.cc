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
#include <CR_aB_X6__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__i__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_I_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*56+3136)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*56+3192)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*56+3248)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*784+3304)*1+lsi)*1]), &(stack[((hsi*56+3248)*1+lsi)*1]), &(stack[((hsi*56+3192)*1+lsi)*1]), &(stack[((hsi*56+3136)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+2352)*1+lsi)*1]),&(stack[((hsi*784+3304)*1+lsi)*1]),784);
CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*784+4088)*1+lsi)*1]), &(stack[((hsi*56+3248)*1+lsi)*1]), &(stack[((hsi*56+3192)*1+lsi)*1]), &(stack[((hsi*56+3136)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+1568)*1+lsi)*1]),&(stack[((hsi*784+4088)*1+lsi)*1]),784);
CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*784+4872)*1+lsi)*1]), &(stack[((hsi*56+3248)*1+lsi)*1]), &(stack[((hsi*56+3192)*1+lsi)*1]), &(stack[((hsi*56+3136)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+784)*1+lsi)*1]),&(stack[((hsi*784+4872)*1+lsi)*1]),784);
CR_aB_Z6__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*49+3136)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*49+3185)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*49+3234)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*784+5656)*1+lsi)*1]), &(stack[((hsi*49+3234)*1+lsi)*1]), &(stack[((hsi*49+3185)*1+lsi)*1]), &(stack[((hsi*49+3136)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+0)*1+lsi)*1]),&(stack[((hsi*784+5656)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3136 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
