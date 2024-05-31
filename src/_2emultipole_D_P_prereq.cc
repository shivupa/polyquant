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
#include <CR_aB_X2__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_D_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*12+180)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*12+192)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*12+204)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+216)*1+lsi)*1]), &(stack[((hsi*12+204)*1+lsi)*1]), &(stack[((hsi*12+192)*1+lsi)*1]), &(stack[((hsi*12+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+162)*1+lsi)*1]),&(stack[((hsi*18+216)*1+lsi)*1]),18);
CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+234)*1+lsi)*1]), &(stack[((hsi*12+204)*1+lsi)*1]), &(stack[((hsi*12+192)*1+lsi)*1]), &(stack[((hsi*12+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+144)*1+lsi)*1]),&(stack[((hsi*18+234)*1+lsi)*1]),18);
CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+252)*1+lsi)*1]), &(stack[((hsi*12+204)*1+lsi)*1]), &(stack[((hsi*12+192)*1+lsi)*1]), &(stack[((hsi*12+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+126)*1+lsi)*1]),&(stack[((hsi*18+252)*1+lsi)*1]),18);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+270)*1+lsi)*1]), &(stack[((hsi*12+204)*1+lsi)*1]), &(stack[((hsi*12+192)*1+lsi)*1]), &(stack[((hsi*12+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+108)*1+lsi)*1]),&(stack[((hsi*18+270)*1+lsi)*1]),18);
CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+288)*1+lsi)*1]), &(stack[((hsi*12+204)*1+lsi)*1]), &(stack[((hsi*12+192)*1+lsi)*1]), &(stack[((hsi*12+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+90)*1+lsi)*1]),&(stack[((hsi*18+288)*1+lsi)*1]),18);
CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+306)*1+lsi)*1]), &(stack[((hsi*12+204)*1+lsi)*1]), &(stack[((hsi*12+192)*1+lsi)*1]), &(stack[((hsi*12+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+72)*1+lsi)*1]),&(stack[((hsi*18+306)*1+lsi)*1]),18);
CR_aB_Z2__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*9+180)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*9+189)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*9+198)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+324)*1+lsi)*1]), &(stack[((hsi*9+198)*1+lsi)*1]), &(stack[((hsi*9+189)*1+lsi)*1]), &(stack[((hsi*9+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+54)*1+lsi)*1]),&(stack[((hsi*18+324)*1+lsi)*1]),18);
CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+342)*1+lsi)*1]), &(stack[((hsi*9+198)*1+lsi)*1]), &(stack[((hsi*9+189)*1+lsi)*1]), &(stack[((hsi*9+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+36)*1+lsi)*1]),&(stack[((hsi*18+342)*1+lsi)*1]),18);
CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+360)*1+lsi)*1]), &(stack[((hsi*9+198)*1+lsi)*1]), &(stack[((hsi*9+189)*1+lsi)*1]), &(stack[((hsi*9+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+18)*1+lsi)*1]),&(stack[((hsi*18+360)*1+lsi)*1]),18);
CR_aB_Z2__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*6+180)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*6+186)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*6+192)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*18+198)*1+lsi)*1]), &(stack[((hsi*6+192)*1+lsi)*1]), &(stack[((hsi*6+186)*1+lsi)*1]), &(stack[((hsi*6+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(stack[((hsi*18+198)*1+lsi)*1]),18);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 180 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
