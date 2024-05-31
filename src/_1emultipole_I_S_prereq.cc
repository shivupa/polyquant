/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <CR_aB_X6__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_I_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*14+112)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*14+126)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*14+140)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+154)*1+lsi)*1]), &(stack[((hsi*14+140)*1+lsi)*1]), &(stack[((hsi*14+126)*1+lsi)*1]), &(stack[((hsi*14+112)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+84)*1+lsi)*1]),&(stack[((hsi*28+154)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+182)*1+lsi)*1]), &(stack[((hsi*14+140)*1+lsi)*1]), &(stack[((hsi*14+126)*1+lsi)*1]), &(stack[((hsi*14+112)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+56)*1+lsi)*1]),&(stack[((hsi*28+182)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+210)*1+lsi)*1]), &(stack[((hsi*14+140)*1+lsi)*1]), &(stack[((hsi*14+126)*1+lsi)*1]), &(stack[((hsi*14+112)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+28)*1+lsi)*1]),&(stack[((hsi*28+210)*1+lsi)*1]),28);
CR_aB_Z6__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*7+112)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*7+119)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*7+126)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+238)*1+lsi)*1]), &(stack[((hsi*7+126)*1+lsi)*1]), &(stack[((hsi*7+119)*1+lsi)*1]), &(stack[((hsi*7+112)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+238)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 112 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
