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
#include <CR_aB_X0__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_S_L_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*12+900)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*12+912)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*12+924)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+936)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+855)*1+lsi)*1]),&(stack[((hsi*45+936)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+981)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+810)*1+lsi)*1]),&(stack[((hsi*45+981)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1026)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+765)*1+lsi)*1]),&(stack[((hsi*45+1026)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1071)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+720)*1+lsi)*1]),&(stack[((hsi*45+1071)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1116)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+675)*1+lsi)*1]),&(stack[((hsi*45+1116)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1161)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+630)*1+lsi)*1]),&(stack[((hsi*45+1161)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1206)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+585)*1+lsi)*1]),&(stack[((hsi*45+1206)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1251)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+540)*1+lsi)*1]),&(stack[((hsi*45+1251)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1296)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+495)*1+lsi)*1]),&(stack[((hsi*45+1296)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1341)*1+lsi)*1]), &(stack[((hsi*12+924)*1+lsi)*1]), &(stack[((hsi*12+912)*1+lsi)*1]), &(stack[((hsi*12+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+450)*1+lsi)*1]),&(stack[((hsi*45+1341)*1+lsi)*1]),45);
CR_aB_Z0__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*11+900)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*11+911)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*11+922)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1386)*1+lsi)*1]), &(stack[((hsi*11+922)*1+lsi)*1]), &(stack[((hsi*11+911)*1+lsi)*1]), &(stack[((hsi*11+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+405)*1+lsi)*1]),&(stack[((hsi*45+1386)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1431)*1+lsi)*1]), &(stack[((hsi*11+922)*1+lsi)*1]), &(stack[((hsi*11+911)*1+lsi)*1]), &(stack[((hsi*11+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+360)*1+lsi)*1]),&(stack[((hsi*45+1431)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1476)*1+lsi)*1]), &(stack[((hsi*11+922)*1+lsi)*1]), &(stack[((hsi*11+911)*1+lsi)*1]), &(stack[((hsi*11+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+315)*1+lsi)*1]),&(stack[((hsi*45+1476)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1521)*1+lsi)*1]), &(stack[((hsi*11+922)*1+lsi)*1]), &(stack[((hsi*11+911)*1+lsi)*1]), &(stack[((hsi*11+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+270)*1+lsi)*1]),&(stack[((hsi*45+1521)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1566)*1+lsi)*1]), &(stack[((hsi*11+922)*1+lsi)*1]), &(stack[((hsi*11+911)*1+lsi)*1]), &(stack[((hsi*11+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+225)*1+lsi)*1]),&(stack[((hsi*45+1566)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1611)*1+lsi)*1]), &(stack[((hsi*11+922)*1+lsi)*1]), &(stack[((hsi*11+911)*1+lsi)*1]), &(stack[((hsi*11+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+180)*1+lsi)*1]),&(stack[((hsi*45+1611)*1+lsi)*1]),45);
CR_aB_Z0__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*10+900)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*10+910)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*10+920)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1656)*1+lsi)*1]), &(stack[((hsi*10+920)*1+lsi)*1]), &(stack[((hsi*10+910)*1+lsi)*1]), &(stack[((hsi*10+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+135)*1+lsi)*1]),&(stack[((hsi*45+1656)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1701)*1+lsi)*1]), &(stack[((hsi*10+920)*1+lsi)*1]), &(stack[((hsi*10+910)*1+lsi)*1]), &(stack[((hsi*10+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+90)*1+lsi)*1]),&(stack[((hsi*45+1701)*1+lsi)*1]),45);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1746)*1+lsi)*1]), &(stack[((hsi*10+920)*1+lsi)*1]), &(stack[((hsi*10+910)*1+lsi)*1]), &(stack[((hsi*10+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+45)*1+lsi)*1]),&(stack[((hsi*45+1746)*1+lsi)*1]),45);
CR_aB_Z0__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*9+900)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*9+909)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*9+918)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*45+1791)*1+lsi)*1]), &(stack[((hsi*9+918)*1+lsi)*1]), &(stack[((hsi*9+909)*1+lsi)*1]), &(stack[((hsi*9+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1791)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 900 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
