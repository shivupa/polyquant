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
#include <CR_aB_X9__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_M_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*50+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*50+3350)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*50+3400)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+3450)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+3135)*1+lsi)*1]),&(stack[((hsi*165+3450)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+3615)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2970)*1+lsi)*1]),&(stack[((hsi*165+3615)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+3780)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2805)*1+lsi)*1]),&(stack[((hsi*165+3780)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+3945)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2640)*1+lsi)*1]),&(stack[((hsi*165+3945)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+4110)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2475)*1+lsi)*1]),&(stack[((hsi*165+4110)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+4275)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2310)*1+lsi)*1]),&(stack[((hsi*165+4275)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+4440)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2145)*1+lsi)*1]),&(stack[((hsi*165+4440)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+4605)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1980)*1+lsi)*1]),&(stack[((hsi*165+4605)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+4770)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1815)*1+lsi)*1]),&(stack[((hsi*165+4770)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+4935)*1+lsi)*1]), &(stack[((hsi*50+3400)*1+lsi)*1]), &(stack[((hsi*50+3350)*1+lsi)*1]), &(stack[((hsi*50+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1650)*1+lsi)*1]),&(stack[((hsi*165+4935)*1+lsi)*1]),165);
CR_aB_Z9__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*40+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*40+3340)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*40+3380)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+5100)*1+lsi)*1]), &(stack[((hsi*40+3380)*1+lsi)*1]), &(stack[((hsi*40+3340)*1+lsi)*1]), &(stack[((hsi*40+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1485)*1+lsi)*1]),&(stack[((hsi*165+5100)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+5265)*1+lsi)*1]), &(stack[((hsi*40+3380)*1+lsi)*1]), &(stack[((hsi*40+3340)*1+lsi)*1]), &(stack[((hsi*40+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1320)*1+lsi)*1]),&(stack[((hsi*165+5265)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+5430)*1+lsi)*1]), &(stack[((hsi*40+3380)*1+lsi)*1]), &(stack[((hsi*40+3340)*1+lsi)*1]), &(stack[((hsi*40+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1155)*1+lsi)*1]),&(stack[((hsi*165+5430)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+5595)*1+lsi)*1]), &(stack[((hsi*40+3380)*1+lsi)*1]), &(stack[((hsi*40+3340)*1+lsi)*1]), &(stack[((hsi*40+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+990)*1+lsi)*1]),&(stack[((hsi*165+5595)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+5760)*1+lsi)*1]), &(stack[((hsi*40+3380)*1+lsi)*1]), &(stack[((hsi*40+3340)*1+lsi)*1]), &(stack[((hsi*40+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+825)*1+lsi)*1]),&(stack[((hsi*165+5760)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+5925)*1+lsi)*1]), &(stack[((hsi*40+3380)*1+lsi)*1]), &(stack[((hsi*40+3340)*1+lsi)*1]), &(stack[((hsi*40+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+660)*1+lsi)*1]),&(stack[((hsi*165+5925)*1+lsi)*1]),165);
CR_aB_Z9__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*30+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*30+3330)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*30+3360)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+6090)*1+lsi)*1]), &(stack[((hsi*30+3360)*1+lsi)*1]), &(stack[((hsi*30+3330)*1+lsi)*1]), &(stack[((hsi*30+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+495)*1+lsi)*1]),&(stack[((hsi*165+6090)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+6255)*1+lsi)*1]), &(stack[((hsi*30+3360)*1+lsi)*1]), &(stack[((hsi*30+3330)*1+lsi)*1]), &(stack[((hsi*30+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+330)*1+lsi)*1]),&(stack[((hsi*165+6255)*1+lsi)*1]),165);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+6420)*1+lsi)*1]), &(stack[((hsi*30+3360)*1+lsi)*1]), &(stack[((hsi*30+3330)*1+lsi)*1]), &(stack[((hsi*30+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+165)*1+lsi)*1]),&(stack[((hsi*165+6420)*1+lsi)*1]),165);
CR_aB_Z9__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*20+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*20+3320)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*20+3340)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*165+6585)*1+lsi)*1]), &(stack[((hsi*20+3340)*1+lsi)*1]), &(stack[((hsi*20+3320)*1+lsi)*1]), &(stack[((hsi*20+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+0)*1+lsi)*1]),&(stack[((hsi*165+6585)*1+lsi)*1]),165);
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
