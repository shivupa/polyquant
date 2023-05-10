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
#include <CR_aB_X10__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_PS_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*33+660)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*33+693)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*33+726)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+759)*1+lsi)*1]), &(stack[((hsi*33+726)*1+lsi)*1]), &(stack[((hsi*33+693)*1+lsi)*1]), &(stack[((hsi*33+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+594)*1+lsi)*1]),&(stack[((hsi*66+759)*1+lsi)*1]),66);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+825)*1+lsi)*1]), &(stack[((hsi*33+726)*1+lsi)*1]), &(stack[((hsi*33+693)*1+lsi)*1]), &(stack[((hsi*33+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+528)*1+lsi)*1]),&(stack[((hsi*66+825)*1+lsi)*1]),66);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+891)*1+lsi)*1]), &(stack[((hsi*33+726)*1+lsi)*1]), &(stack[((hsi*33+693)*1+lsi)*1]), &(stack[((hsi*33+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+462)*1+lsi)*1]),&(stack[((hsi*66+891)*1+lsi)*1]),66);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+957)*1+lsi)*1]), &(stack[((hsi*33+726)*1+lsi)*1]), &(stack[((hsi*33+693)*1+lsi)*1]), &(stack[((hsi*33+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+396)*1+lsi)*1]),&(stack[((hsi*66+957)*1+lsi)*1]),66);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1023)*1+lsi)*1]), &(stack[((hsi*33+726)*1+lsi)*1]), &(stack[((hsi*33+693)*1+lsi)*1]), &(stack[((hsi*33+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+330)*1+lsi)*1]),&(stack[((hsi*66+1023)*1+lsi)*1]),66);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1089)*1+lsi)*1]), &(stack[((hsi*33+726)*1+lsi)*1]), &(stack[((hsi*33+693)*1+lsi)*1]), &(stack[((hsi*33+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+264)*1+lsi)*1]),&(stack[((hsi*66+1089)*1+lsi)*1]),66);
CR_aB_Z10__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*22+660)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*22+682)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*22+704)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1155)*1+lsi)*1]), &(stack[((hsi*22+704)*1+lsi)*1]), &(stack[((hsi*22+682)*1+lsi)*1]), &(stack[((hsi*22+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+198)*1+lsi)*1]),&(stack[((hsi*66+1155)*1+lsi)*1]),66);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1221)*1+lsi)*1]), &(stack[((hsi*22+704)*1+lsi)*1]), &(stack[((hsi*22+682)*1+lsi)*1]), &(stack[((hsi*22+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+132)*1+lsi)*1]),&(stack[((hsi*66+1221)*1+lsi)*1]),66);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+1287)*1+lsi)*1]), &(stack[((hsi*22+704)*1+lsi)*1]), &(stack[((hsi*22+682)*1+lsi)*1]), &(stack[((hsi*22+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+66)*1+lsi)*1]),&(stack[((hsi*66+1287)*1+lsi)*1]),66);
CR_aB_Z10__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*11+660)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*11+671)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*11+682)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*66+693)*1+lsi)*1]), &(stack[((hsi*11+682)*1+lsi)*1]), &(stack[((hsi*11+671)*1+lsi)*1]), &(stack[((hsi*11+660)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+0)*1+lsi)*1]),&(stack[((hsi*66+693)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 660 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
