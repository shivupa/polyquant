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
#include <CR_aB_X10__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_PS_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*66+7920)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*66+7986)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*66+8052)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+8118)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+7524)*1+lsi)*1]),&(stack[((hsi*396+8118)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+8514)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+7128)*1+lsi)*1]),&(stack[((hsi*396+8514)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+8910)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+6732)*1+lsi)*1]),&(stack[((hsi*396+8910)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+9306)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+6336)*1+lsi)*1]),&(stack[((hsi*396+9306)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+9702)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+5940)*1+lsi)*1]),&(stack[((hsi*396+9702)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+10098)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+5544)*1+lsi)*1]),&(stack[((hsi*396+10098)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+10494)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+5148)*1+lsi)*1]),&(stack[((hsi*396+10494)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+10890)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+4752)*1+lsi)*1]),&(stack[((hsi*396+10890)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+11286)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+4356)*1+lsi)*1]),&(stack[((hsi*396+11286)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+11682)*1+lsi)*1]), &(stack[((hsi*66+8052)*1+lsi)*1]), &(stack[((hsi*66+7986)*1+lsi)*1]), &(stack[((hsi*66+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+3960)*1+lsi)*1]),&(stack[((hsi*396+11682)*1+lsi)*1]),396);
CR_aB_Z10__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*55+7920)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*55+7975)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*55+8030)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+12078)*1+lsi)*1]), &(stack[((hsi*55+8030)*1+lsi)*1]), &(stack[((hsi*55+7975)*1+lsi)*1]), &(stack[((hsi*55+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+3564)*1+lsi)*1]),&(stack[((hsi*396+12078)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+12474)*1+lsi)*1]), &(stack[((hsi*55+8030)*1+lsi)*1]), &(stack[((hsi*55+7975)*1+lsi)*1]), &(stack[((hsi*55+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+3168)*1+lsi)*1]),&(stack[((hsi*396+12474)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+12870)*1+lsi)*1]), &(stack[((hsi*55+8030)*1+lsi)*1]), &(stack[((hsi*55+7975)*1+lsi)*1]), &(stack[((hsi*55+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+2772)*1+lsi)*1]),&(stack[((hsi*396+12870)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+13266)*1+lsi)*1]), &(stack[((hsi*55+8030)*1+lsi)*1]), &(stack[((hsi*55+7975)*1+lsi)*1]), &(stack[((hsi*55+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+2376)*1+lsi)*1]),&(stack[((hsi*396+13266)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+13662)*1+lsi)*1]), &(stack[((hsi*55+8030)*1+lsi)*1]), &(stack[((hsi*55+7975)*1+lsi)*1]), &(stack[((hsi*55+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+1980)*1+lsi)*1]),&(stack[((hsi*396+13662)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+14058)*1+lsi)*1]), &(stack[((hsi*55+8030)*1+lsi)*1]), &(stack[((hsi*55+7975)*1+lsi)*1]), &(stack[((hsi*55+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+1584)*1+lsi)*1]),&(stack[((hsi*396+14058)*1+lsi)*1]),396);
CR_aB_Z10__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*44+7920)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*44+7964)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*44+8008)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+14454)*1+lsi)*1]), &(stack[((hsi*44+8008)*1+lsi)*1]), &(stack[((hsi*44+7964)*1+lsi)*1]), &(stack[((hsi*44+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+1188)*1+lsi)*1]),&(stack[((hsi*396+14454)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+14850)*1+lsi)*1]), &(stack[((hsi*44+8008)*1+lsi)*1]), &(stack[((hsi*44+7964)*1+lsi)*1]), &(stack[((hsi*44+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+792)*1+lsi)*1]),&(stack[((hsi*396+14850)*1+lsi)*1]),396);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+15246)*1+lsi)*1]), &(stack[((hsi*44+8008)*1+lsi)*1]), &(stack[((hsi*44+7964)*1+lsi)*1]), &(stack[((hsi*44+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+396)*1+lsi)*1]),&(stack[((hsi*396+15246)*1+lsi)*1]),396);
CR_aB_Z10__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*33+7920)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*33+7953)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*33+7986)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*396+15642)*1+lsi)*1]), &(stack[((hsi*33+7986)*1+lsi)*1]), &(stack[((hsi*33+7953)*1+lsi)*1]), &(stack[((hsi*33+7920)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*396+0)*1+lsi)*1]),&(stack[((hsi*396+15642)*1+lsi)*1]),396);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 7920 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
