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
#include <CR_aB_X10__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_PS_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*55+3960)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*55+4015)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*55+4070)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+4125)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+3762)*1+lsi)*1]),&(stack[((hsi*198+4125)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+4323)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+3564)*1+lsi)*1]),&(stack[((hsi*198+4323)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+4521)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+3366)*1+lsi)*1]),&(stack[((hsi*198+4521)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+4719)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+3168)*1+lsi)*1]),&(stack[((hsi*198+4719)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+4917)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+2970)*1+lsi)*1]),&(stack[((hsi*198+4917)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+5115)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+2772)*1+lsi)*1]),&(stack[((hsi*198+5115)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+5313)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+2574)*1+lsi)*1]),&(stack[((hsi*198+5313)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+5511)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+2376)*1+lsi)*1]),&(stack[((hsi*198+5511)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+5709)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+2178)*1+lsi)*1]),&(stack[((hsi*198+5709)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+5907)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+1980)*1+lsi)*1]),&(stack[((hsi*198+5907)*1+lsi)*1]),198);
CR_aB_Z10__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*44+3960)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*44+4004)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*44+4048)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+6105)*1+lsi)*1]), &(stack[((hsi*44+4048)*1+lsi)*1]), &(stack[((hsi*44+4004)*1+lsi)*1]), &(stack[((hsi*44+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+1782)*1+lsi)*1]),&(stack[((hsi*198+6105)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+6303)*1+lsi)*1]), &(stack[((hsi*44+4048)*1+lsi)*1]), &(stack[((hsi*44+4004)*1+lsi)*1]), &(stack[((hsi*44+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+1584)*1+lsi)*1]),&(stack[((hsi*198+6303)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+6501)*1+lsi)*1]), &(stack[((hsi*44+4048)*1+lsi)*1]), &(stack[((hsi*44+4004)*1+lsi)*1]), &(stack[((hsi*44+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+1386)*1+lsi)*1]),&(stack[((hsi*198+6501)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+6699)*1+lsi)*1]), &(stack[((hsi*44+4048)*1+lsi)*1]), &(stack[((hsi*44+4004)*1+lsi)*1]), &(stack[((hsi*44+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+1188)*1+lsi)*1]),&(stack[((hsi*198+6699)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+6897)*1+lsi)*1]), &(stack[((hsi*44+4048)*1+lsi)*1]), &(stack[((hsi*44+4004)*1+lsi)*1]), &(stack[((hsi*44+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+990)*1+lsi)*1]),&(stack[((hsi*198+6897)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+7095)*1+lsi)*1]), &(stack[((hsi*44+4048)*1+lsi)*1]), &(stack[((hsi*44+4004)*1+lsi)*1]), &(stack[((hsi*44+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+792)*1+lsi)*1]),&(stack[((hsi*198+7095)*1+lsi)*1]),198);
CR_aB_Z10__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*33+3960)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*33+3993)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*33+4026)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+7293)*1+lsi)*1]), &(stack[((hsi*33+4026)*1+lsi)*1]), &(stack[((hsi*33+3993)*1+lsi)*1]), &(stack[((hsi*33+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+594)*1+lsi)*1]),&(stack[((hsi*198+7293)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+7491)*1+lsi)*1]), &(stack[((hsi*33+4026)*1+lsi)*1]), &(stack[((hsi*33+3993)*1+lsi)*1]), &(stack[((hsi*33+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+396)*1+lsi)*1]),&(stack[((hsi*198+7491)*1+lsi)*1]),198);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+7689)*1+lsi)*1]), &(stack[((hsi*33+4026)*1+lsi)*1]), &(stack[((hsi*33+3993)*1+lsi)*1]), &(stack[((hsi*33+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+198)*1+lsi)*1]),&(stack[((hsi*198+7689)*1+lsi)*1]),198);
CR_aB_Z10__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*22+3960)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*22+3982)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*22+4004)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*198+7887)*1+lsi)*1]), &(stack[((hsi*22+4004)*1+lsi)*1]), &(stack[((hsi*22+3982)*1+lsi)*1]), &(stack[((hsi*22+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*198+0)*1+lsi)*1]),&(stack[((hsi*198+7887)*1+lsi)*1]),198);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3960 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
