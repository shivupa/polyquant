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
#include <CR_aB_X1__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_P_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*24+1650)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*24+1674)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*24+1698)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+1722)*1+lsi)*1]), &(stack[((hsi*24+1698)*1+lsi)*1]), &(stack[((hsi*24+1674)*1+lsi)*1]), &(stack[((hsi*24+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1485)*1+lsi)*1]),&(stack[((hsi*165+1722)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+1887)*1+lsi)*1]), &(stack[((hsi*24+1698)*1+lsi)*1]), &(stack[((hsi*24+1674)*1+lsi)*1]), &(stack[((hsi*24+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1320)*1+lsi)*1]),&(stack[((hsi*165+1887)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+2052)*1+lsi)*1]), &(stack[((hsi*24+1698)*1+lsi)*1]), &(stack[((hsi*24+1674)*1+lsi)*1]), &(stack[((hsi*24+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+1155)*1+lsi)*1]),&(stack[((hsi*165+2052)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+2217)*1+lsi)*1]), &(stack[((hsi*24+1698)*1+lsi)*1]), &(stack[((hsi*24+1674)*1+lsi)*1]), &(stack[((hsi*24+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+990)*1+lsi)*1]),&(stack[((hsi*165+2217)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+2382)*1+lsi)*1]), &(stack[((hsi*24+1698)*1+lsi)*1]), &(stack[((hsi*24+1674)*1+lsi)*1]), &(stack[((hsi*24+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+825)*1+lsi)*1]),&(stack[((hsi*165+2382)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+2547)*1+lsi)*1]), &(stack[((hsi*24+1698)*1+lsi)*1]), &(stack[((hsi*24+1674)*1+lsi)*1]), &(stack[((hsi*24+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+660)*1+lsi)*1]),&(stack[((hsi*165+2547)*1+lsi)*1]),165);
CR_aB_Z1__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*22+1650)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*22+1672)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*22+1694)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+2712)*1+lsi)*1]), &(stack[((hsi*22+1694)*1+lsi)*1]), &(stack[((hsi*22+1672)*1+lsi)*1]), &(stack[((hsi*22+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+495)*1+lsi)*1]),&(stack[((hsi*165+2712)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+2877)*1+lsi)*1]), &(stack[((hsi*22+1694)*1+lsi)*1]), &(stack[((hsi*22+1672)*1+lsi)*1]), &(stack[((hsi*22+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+330)*1+lsi)*1]),&(stack[((hsi*165+2877)*1+lsi)*1]),165);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+3042)*1+lsi)*1]), &(stack[((hsi*22+1694)*1+lsi)*1]), &(stack[((hsi*22+1672)*1+lsi)*1]), &(stack[((hsi*22+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+165)*1+lsi)*1]),&(stack[((hsi*165+3042)*1+lsi)*1]),165);
CR_aB_Z1__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*20+1650)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*20+1670)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*20+1690)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*165+3207)*1+lsi)*1]), &(stack[((hsi*20+1690)*1+lsi)*1]), &(stack[((hsi*20+1670)*1+lsi)*1]), &(stack[((hsi*20+1650)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*165+0)*1+lsi)*1]),&(stack[((hsi*165+3207)*1+lsi)*1]),165);
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
