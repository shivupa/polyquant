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
#include <CR_aB_X6__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_I_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*28+560)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*28+588)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*28+616)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+644)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+532)*1+lsi)*1]),&(stack[((hsi*28+644)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+672)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+504)*1+lsi)*1]),&(stack[((hsi*28+672)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+700)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+476)*1+lsi)*1]),&(stack[((hsi*28+700)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+728)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+448)*1+lsi)*1]),&(stack[((hsi*28+728)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+756)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+420)*1+lsi)*1]),&(stack[((hsi*28+756)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+784)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+392)*1+lsi)*1]),&(stack[((hsi*28+784)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+812)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+364)*1+lsi)*1]),&(stack[((hsi*28+812)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+840)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+336)*1+lsi)*1]),&(stack[((hsi*28+840)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+868)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+308)*1+lsi)*1]),&(stack[((hsi*28+868)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+896)*1+lsi)*1]), &(stack[((hsi*28+616)*1+lsi)*1]), &(stack[((hsi*28+588)*1+lsi)*1]), &(stack[((hsi*28+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+280)*1+lsi)*1]),&(stack[((hsi*28+896)*1+lsi)*1]),28);
CR_aB_Z6__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*21+560)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*21+581)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*21+602)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+924)*1+lsi)*1]), &(stack[((hsi*21+602)*1+lsi)*1]), &(stack[((hsi*21+581)*1+lsi)*1]), &(stack[((hsi*21+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+252)*1+lsi)*1]),&(stack[((hsi*28+924)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+952)*1+lsi)*1]), &(stack[((hsi*21+602)*1+lsi)*1]), &(stack[((hsi*21+581)*1+lsi)*1]), &(stack[((hsi*21+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+224)*1+lsi)*1]),&(stack[((hsi*28+952)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+980)*1+lsi)*1]), &(stack[((hsi*21+602)*1+lsi)*1]), &(stack[((hsi*21+581)*1+lsi)*1]), &(stack[((hsi*21+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+196)*1+lsi)*1]),&(stack[((hsi*28+980)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1008)*1+lsi)*1]), &(stack[((hsi*21+602)*1+lsi)*1]), &(stack[((hsi*21+581)*1+lsi)*1]), &(stack[((hsi*21+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+168)*1+lsi)*1]),&(stack[((hsi*28+1008)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1036)*1+lsi)*1]), &(stack[((hsi*21+602)*1+lsi)*1]), &(stack[((hsi*21+581)*1+lsi)*1]), &(stack[((hsi*21+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+140)*1+lsi)*1]),&(stack[((hsi*28+1036)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1064)*1+lsi)*1]), &(stack[((hsi*21+602)*1+lsi)*1]), &(stack[((hsi*21+581)*1+lsi)*1]), &(stack[((hsi*21+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+112)*1+lsi)*1]),&(stack[((hsi*28+1064)*1+lsi)*1]),28);
CR_aB_Z6__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*14+560)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*14+574)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*14+588)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+602)*1+lsi)*1]), &(stack[((hsi*14+588)*1+lsi)*1]), &(stack[((hsi*14+574)*1+lsi)*1]), &(stack[((hsi*14+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+84)*1+lsi)*1]),&(stack[((hsi*28+602)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1092)*1+lsi)*1]), &(stack[((hsi*14+588)*1+lsi)*1]), &(stack[((hsi*14+574)*1+lsi)*1]), &(stack[((hsi*14+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+56)*1+lsi)*1]),&(stack[((hsi*28+1092)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1120)*1+lsi)*1]), &(stack[((hsi*14+588)*1+lsi)*1]), &(stack[((hsi*14+574)*1+lsi)*1]), &(stack[((hsi*14+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+28)*1+lsi)*1]),&(stack[((hsi*28+1120)*1+lsi)*1]),28);
CR_aB_Z6__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*7+560)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*7+567)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*7+574)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+1148)*1+lsi)*1]), &(stack[((hsi*7+574)*1+lsi)*1]), &(stack[((hsi*7+567)*1+lsi)*1]), &(stack[((hsi*7+560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+1148)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 560 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
