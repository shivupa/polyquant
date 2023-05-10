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
#include <CR_aB_X9__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_M_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*40+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*40+1140)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*40+1180)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1220)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1045)*1+lsi)*1]),&(stack[((hsi*55+1220)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1275)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+990)*1+lsi)*1]),&(stack[((hsi*55+1275)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1330)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+935)*1+lsi)*1]),&(stack[((hsi*55+1330)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1385)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+880)*1+lsi)*1]),&(stack[((hsi*55+1385)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1440)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+825)*1+lsi)*1]),&(stack[((hsi*55+1440)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1495)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+770)*1+lsi)*1]),&(stack[((hsi*55+1495)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1550)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+715)*1+lsi)*1]),&(stack[((hsi*55+1550)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1605)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+660)*1+lsi)*1]),&(stack[((hsi*55+1605)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1660)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+605)*1+lsi)*1]),&(stack[((hsi*55+1660)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1715)*1+lsi)*1]), &(stack[((hsi*40+1180)*1+lsi)*1]), &(stack[((hsi*40+1140)*1+lsi)*1]), &(stack[((hsi*40+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+550)*1+lsi)*1]),&(stack[((hsi*55+1715)*1+lsi)*1]),55);
CR_aB_Z9__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*30+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*30+1130)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*30+1160)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1770)*1+lsi)*1]), &(stack[((hsi*30+1160)*1+lsi)*1]), &(stack[((hsi*30+1130)*1+lsi)*1]), &(stack[((hsi*30+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+495)*1+lsi)*1]),&(stack[((hsi*55+1770)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1825)*1+lsi)*1]), &(stack[((hsi*30+1160)*1+lsi)*1]), &(stack[((hsi*30+1130)*1+lsi)*1]), &(stack[((hsi*30+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+440)*1+lsi)*1]),&(stack[((hsi*55+1825)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1880)*1+lsi)*1]), &(stack[((hsi*30+1160)*1+lsi)*1]), &(stack[((hsi*30+1130)*1+lsi)*1]), &(stack[((hsi*30+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+385)*1+lsi)*1]),&(stack[((hsi*55+1880)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1935)*1+lsi)*1]), &(stack[((hsi*30+1160)*1+lsi)*1]), &(stack[((hsi*30+1130)*1+lsi)*1]), &(stack[((hsi*30+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+330)*1+lsi)*1]),&(stack[((hsi*55+1935)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1990)*1+lsi)*1]), &(stack[((hsi*30+1160)*1+lsi)*1]), &(stack[((hsi*30+1130)*1+lsi)*1]), &(stack[((hsi*30+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+275)*1+lsi)*1]),&(stack[((hsi*55+1990)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2045)*1+lsi)*1]), &(stack[((hsi*30+1160)*1+lsi)*1]), &(stack[((hsi*30+1130)*1+lsi)*1]), &(stack[((hsi*30+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+220)*1+lsi)*1]),&(stack[((hsi*55+2045)*1+lsi)*1]),55);
CR_aB_Z9__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*20+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*20+1120)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*20+1140)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+1160)*1+lsi)*1]), &(stack[((hsi*20+1140)*1+lsi)*1]), &(stack[((hsi*20+1120)*1+lsi)*1]), &(stack[((hsi*20+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+165)*1+lsi)*1]),&(stack[((hsi*55+1160)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2100)*1+lsi)*1]), &(stack[((hsi*20+1140)*1+lsi)*1]), &(stack[((hsi*20+1120)*1+lsi)*1]), &(stack[((hsi*20+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+110)*1+lsi)*1]),&(stack[((hsi*55+2100)*1+lsi)*1]),55);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2155)*1+lsi)*1]), &(stack[((hsi*20+1140)*1+lsi)*1]), &(stack[((hsi*20+1120)*1+lsi)*1]), &(stack[((hsi*20+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+55)*1+lsi)*1]),&(stack[((hsi*55+2155)*1+lsi)*1]),55);
CR_aB_Z9__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*10+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*10+1110)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*10+1120)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*55+2210)*1+lsi)*1]), &(stack[((hsi*10+1120)*1+lsi)*1]), &(stack[((hsi*10+1110)*1+lsi)*1]), &(stack[((hsi*10+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+2210)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1100 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
