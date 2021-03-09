/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <CR_aB_X1__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_P_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*12+360)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*12+372)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*12+384)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+396)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+342)*1+lsi)*1]),&(stack[((hsi*18+396)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+414)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+324)*1+lsi)*1]),&(stack[((hsi*18+414)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+432)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+306)*1+lsi)*1]),&(stack[((hsi*18+432)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+450)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+288)*1+lsi)*1]),&(stack[((hsi*18+450)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+468)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+270)*1+lsi)*1]),&(stack[((hsi*18+468)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+486)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+252)*1+lsi)*1]),&(stack[((hsi*18+486)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+504)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+234)*1+lsi)*1]),&(stack[((hsi*18+504)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+522)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+216)*1+lsi)*1]),&(stack[((hsi*18+522)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+540)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+198)*1+lsi)*1]),&(stack[((hsi*18+540)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+558)*1+lsi)*1]), &(stack[((hsi*12+384)*1+lsi)*1]), &(stack[((hsi*12+372)*1+lsi)*1]), &(stack[((hsi*12+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+180)*1+lsi)*1]),&(stack[((hsi*18+558)*1+lsi)*1]),18);
CR_aB_Z1__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*10+360)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*10+370)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*10+380)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+576)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+370)*1+lsi)*1]), &(stack[((hsi*10+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+162)*1+lsi)*1]),&(stack[((hsi*18+576)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+594)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+370)*1+lsi)*1]), &(stack[((hsi*10+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+144)*1+lsi)*1]),&(stack[((hsi*18+594)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+612)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+370)*1+lsi)*1]), &(stack[((hsi*10+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+126)*1+lsi)*1]),&(stack[((hsi*18+612)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+630)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+370)*1+lsi)*1]), &(stack[((hsi*10+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+108)*1+lsi)*1]),&(stack[((hsi*18+630)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+648)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+370)*1+lsi)*1]), &(stack[((hsi*10+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+90)*1+lsi)*1]),&(stack[((hsi*18+648)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+666)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+370)*1+lsi)*1]), &(stack[((hsi*10+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+72)*1+lsi)*1]),&(stack[((hsi*18+666)*1+lsi)*1]),18);
CR_aB_Z1__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*8+360)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*8+368)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*8+376)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+684)*1+lsi)*1]), &(stack[((hsi*8+376)*1+lsi)*1]), &(stack[((hsi*8+368)*1+lsi)*1]), &(stack[((hsi*8+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+54)*1+lsi)*1]),&(stack[((hsi*18+684)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+702)*1+lsi)*1]), &(stack[((hsi*8+376)*1+lsi)*1]), &(stack[((hsi*8+368)*1+lsi)*1]), &(stack[((hsi*8+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+36)*1+lsi)*1]),&(stack[((hsi*18+702)*1+lsi)*1]),18);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+720)*1+lsi)*1]), &(stack[((hsi*8+376)*1+lsi)*1]), &(stack[((hsi*8+368)*1+lsi)*1]), &(stack[((hsi*8+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+18)*1+lsi)*1]),&(stack[((hsi*18+720)*1+lsi)*1]),18);
CR_aB_Z1__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*6+360)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*6+366)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*6+372)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*18+378)*1+lsi)*1]), &(stack[((hsi*6+372)*1+lsi)*1]), &(stack[((hsi*6+366)*1+lsi)*1]), &(stack[((hsi*6+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(stack[((hsi*18+378)*1+lsi)*1]),18);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 360 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
