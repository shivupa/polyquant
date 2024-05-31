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
#include <CR_aB_X6__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_I_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*28+840)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*28+868)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*28+896)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+924)*1+lsi)*1]), &(stack[((hsi*28+896)*1+lsi)*1]), &(stack[((hsi*28+868)*1+lsi)*1]), &(stack[((hsi*28+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+756)*1+lsi)*1]),&(stack[((hsi*84+924)*1+lsi)*1]),84);
CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1008)*1+lsi)*1]), &(stack[((hsi*28+896)*1+lsi)*1]), &(stack[((hsi*28+868)*1+lsi)*1]), &(stack[((hsi*28+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+672)*1+lsi)*1]),&(stack[((hsi*84+1008)*1+lsi)*1]),84);
CR_aB_i__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1092)*1+lsi)*1]), &(stack[((hsi*28+896)*1+lsi)*1]), &(stack[((hsi*28+868)*1+lsi)*1]), &(stack[((hsi*28+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+588)*1+lsi)*1]),&(stack[((hsi*84+1092)*1+lsi)*1]),84);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1176)*1+lsi)*1]), &(stack[((hsi*28+896)*1+lsi)*1]), &(stack[((hsi*28+868)*1+lsi)*1]), &(stack[((hsi*28+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+504)*1+lsi)*1]),&(stack[((hsi*84+1176)*1+lsi)*1]),84);
CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1260)*1+lsi)*1]), &(stack[((hsi*28+896)*1+lsi)*1]), &(stack[((hsi*28+868)*1+lsi)*1]), &(stack[((hsi*28+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+420)*1+lsi)*1]),&(stack[((hsi*84+1260)*1+lsi)*1]),84);
CR_aB_i__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1344)*1+lsi)*1]), &(stack[((hsi*28+896)*1+lsi)*1]), &(stack[((hsi*28+868)*1+lsi)*1]), &(stack[((hsi*28+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+336)*1+lsi)*1]),&(stack[((hsi*84+1344)*1+lsi)*1]),84);
CR_aB_Z6__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*21+840)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*21+861)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*21+882)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1428)*1+lsi)*1]), &(stack[((hsi*21+882)*1+lsi)*1]), &(stack[((hsi*21+861)*1+lsi)*1]), &(stack[((hsi*21+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+252)*1+lsi)*1]),&(stack[((hsi*84+1428)*1+lsi)*1]),84);
CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1512)*1+lsi)*1]), &(stack[((hsi*21+882)*1+lsi)*1]), &(stack[((hsi*21+861)*1+lsi)*1]), &(stack[((hsi*21+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+168)*1+lsi)*1]),&(stack[((hsi*84+1512)*1+lsi)*1]),84);
CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1596)*1+lsi)*1]), &(stack[((hsi*21+882)*1+lsi)*1]), &(stack[((hsi*21+861)*1+lsi)*1]), &(stack[((hsi*21+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+84)*1+lsi)*1]),&(stack[((hsi*84+1596)*1+lsi)*1]),84);
CR_aB_Z6__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*14+840)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*14+854)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*14+868)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*84+1680)*1+lsi)*1]), &(stack[((hsi*14+868)*1+lsi)*1]), &(stack[((hsi*14+854)*1+lsi)*1]), &(stack[((hsi*14+840)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+0)*1+lsi)*1]),&(stack[((hsi*84+1680)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 840 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
