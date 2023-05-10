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
#include <CR_aB_X1__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X12__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_P_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*26+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*26+3326)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*26+3352)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+3378)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+3135)*1+lsi)*1]),&(stack[((hsi*165+3378)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+3543)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2970)*1+lsi)*1]),&(stack[((hsi*165+3543)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+3708)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2805)*1+lsi)*1]),&(stack[((hsi*165+3708)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+3873)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2640)*1+lsi)*1]),&(stack[((hsi*165+3873)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+4038)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2475)*1+lsi)*1]),&(stack[((hsi*165+4038)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+4203)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2310)*1+lsi)*1]),&(stack[((hsi*165+4203)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+4368)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+2145)*1+lsi)*1]),&(stack[((hsi*165+4368)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+4533)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1980)*1+lsi)*1]),&(stack[((hsi*165+4533)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+4698)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1815)*1+lsi)*1]),&(stack[((hsi*165+4698)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+4863)*1+lsi)*1]), &(stack[((hsi*26+3352)*1+lsi)*1]), &(stack[((hsi*26+3326)*1+lsi)*1]), &(stack[((hsi*26+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1650)*1+lsi)*1]),&(stack[((hsi*165+4863)*1+lsi)*1]),165);
CR_aB_Z1__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*24+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*24+3324)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*24+3348)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+5028)*1+lsi)*1]), &(stack[((hsi*24+3348)*1+lsi)*1]), &(stack[((hsi*24+3324)*1+lsi)*1]), &(stack[((hsi*24+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1485)*1+lsi)*1]),&(stack[((hsi*165+5028)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+5193)*1+lsi)*1]), &(stack[((hsi*24+3348)*1+lsi)*1]), &(stack[((hsi*24+3324)*1+lsi)*1]), &(stack[((hsi*24+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1320)*1+lsi)*1]),&(stack[((hsi*165+5193)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+5358)*1+lsi)*1]), &(stack[((hsi*24+3348)*1+lsi)*1]), &(stack[((hsi*24+3324)*1+lsi)*1]), &(stack[((hsi*24+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1155)*1+lsi)*1]),&(stack[((hsi*165+5358)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+5523)*1+lsi)*1]), &(stack[((hsi*24+3348)*1+lsi)*1]), &(stack[((hsi*24+3324)*1+lsi)*1]), &(stack[((hsi*24+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+990)*1+lsi)*1]),&(stack[((hsi*165+5523)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+5688)*1+lsi)*1]), &(stack[((hsi*24+3348)*1+lsi)*1]), &(stack[((hsi*24+3324)*1+lsi)*1]), &(stack[((hsi*24+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+825)*1+lsi)*1]),&(stack[((hsi*165+5688)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+5853)*1+lsi)*1]), &(stack[((hsi*24+3348)*1+lsi)*1]), &(stack[((hsi*24+3324)*1+lsi)*1]), &(stack[((hsi*24+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+660)*1+lsi)*1]),&(stack[((hsi*165+5853)*1+lsi)*1]),165);
CR_aB_Z1__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*22+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*22+3322)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*22+3344)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+6018)*1+lsi)*1]), &(stack[((hsi*22+3344)*1+lsi)*1]), &(stack[((hsi*22+3322)*1+lsi)*1]), &(stack[((hsi*22+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+495)*1+lsi)*1]),&(stack[((hsi*165+6018)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+6183)*1+lsi)*1]), &(stack[((hsi*22+3344)*1+lsi)*1]), &(stack[((hsi*22+3322)*1+lsi)*1]), &(stack[((hsi*22+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+330)*1+lsi)*1]),&(stack[((hsi*165+6183)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+6348)*1+lsi)*1]), &(stack[((hsi*22+3344)*1+lsi)*1]), &(stack[((hsi*22+3322)*1+lsi)*1]), &(stack[((hsi*22+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+165)*1+lsi)*1]),&(stack[((hsi*165+6348)*1+lsi)*1]),165);
CR_aB_Z1__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*20+3300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*20+3320)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*20+3340)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+6513)*1+lsi)*1]), &(stack[((hsi*20+3340)*1+lsi)*1]), &(stack[((hsi*20+3320)*1+lsi)*1]), &(stack[((hsi*20+3300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+0)*1+lsi)*1]),&(stack[((hsi*165+6513)*1+lsi)*1]),165);
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
