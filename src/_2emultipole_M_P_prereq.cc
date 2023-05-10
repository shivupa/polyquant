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
#include <CR_aB_X9__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_M_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*40+1650)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*40+1690)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*40+1730)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+1770)*1+lsi)*1]), &(stack[((hsi*40+1730)*1+lsi)*1]), &(stack[((hsi*40+1690)*1+lsi)*1]), &(stack[((hsi*40+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1485)*1+lsi)*1]),&(stack[((hsi*165+1770)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+1935)*1+lsi)*1]), &(stack[((hsi*40+1730)*1+lsi)*1]), &(stack[((hsi*40+1690)*1+lsi)*1]), &(stack[((hsi*40+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1320)*1+lsi)*1]),&(stack[((hsi*165+1935)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+2100)*1+lsi)*1]), &(stack[((hsi*40+1730)*1+lsi)*1]), &(stack[((hsi*40+1690)*1+lsi)*1]), &(stack[((hsi*40+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1155)*1+lsi)*1]),&(stack[((hsi*165+2100)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+2265)*1+lsi)*1]), &(stack[((hsi*40+1730)*1+lsi)*1]), &(stack[((hsi*40+1690)*1+lsi)*1]), &(stack[((hsi*40+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+990)*1+lsi)*1]),&(stack[((hsi*165+2265)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+2430)*1+lsi)*1]), &(stack[((hsi*40+1730)*1+lsi)*1]), &(stack[((hsi*40+1690)*1+lsi)*1]), &(stack[((hsi*40+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+825)*1+lsi)*1]),&(stack[((hsi*165+2430)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+2595)*1+lsi)*1]), &(stack[((hsi*40+1730)*1+lsi)*1]), &(stack[((hsi*40+1690)*1+lsi)*1]), &(stack[((hsi*40+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+660)*1+lsi)*1]),&(stack[((hsi*165+2595)*1+lsi)*1]),165);
CR_aB_Z9__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*30+1650)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*30+1680)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*30+1710)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+2760)*1+lsi)*1]), &(stack[((hsi*30+1710)*1+lsi)*1]), &(stack[((hsi*30+1680)*1+lsi)*1]), &(stack[((hsi*30+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+495)*1+lsi)*1]),&(stack[((hsi*165+2760)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+2925)*1+lsi)*1]), &(stack[((hsi*30+1710)*1+lsi)*1]), &(stack[((hsi*30+1680)*1+lsi)*1]), &(stack[((hsi*30+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+330)*1+lsi)*1]),&(stack[((hsi*165+2925)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+3090)*1+lsi)*1]), &(stack[((hsi*30+1710)*1+lsi)*1]), &(stack[((hsi*30+1680)*1+lsi)*1]), &(stack[((hsi*30+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+165)*1+lsi)*1]),&(stack[((hsi*165+3090)*1+lsi)*1]),165);
CR_aB_Z9__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*20+1650)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*20+1670)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*20+1690)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+3255)*1+lsi)*1]), &(stack[((hsi*20+1690)*1+lsi)*1]), &(stack[((hsi*20+1670)*1+lsi)*1]), &(stack[((hsi*20+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+0)*1+lsi)*1]),&(stack[((hsi*165+3255)*1+lsi)*1]),165);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1650 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
