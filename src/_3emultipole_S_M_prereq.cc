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
#include <CR_aB_X0__0___Overlap_X12__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_S_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*13+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*13+1113)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*13+1126)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1139)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1045)*1+lsi)*1]),&(stack[((hsi*55+1139)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1194)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+990)*1+lsi)*1]),&(stack[((hsi*55+1194)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1249)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+935)*1+lsi)*1]),&(stack[((hsi*55+1249)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1304)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+880)*1+lsi)*1]),&(stack[((hsi*55+1304)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1359)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+825)*1+lsi)*1]),&(stack[((hsi*55+1359)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1414)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+770)*1+lsi)*1]),&(stack[((hsi*55+1414)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1469)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+715)*1+lsi)*1]),&(stack[((hsi*55+1469)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1524)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+660)*1+lsi)*1]),&(stack[((hsi*55+1524)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1579)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+605)*1+lsi)*1]),&(stack[((hsi*55+1579)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1634)*1+lsi)*1]), &(stack[((hsi*13+1126)*1+lsi)*1]), &(stack[((hsi*13+1113)*1+lsi)*1]), &(stack[((hsi*13+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+550)*1+lsi)*1]),&(stack[((hsi*55+1634)*1+lsi)*1]),55);
CR_aB_Z0__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*12+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*12+1112)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*12+1124)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1689)*1+lsi)*1]), &(stack[((hsi*12+1124)*1+lsi)*1]), &(stack[((hsi*12+1112)*1+lsi)*1]), &(stack[((hsi*12+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+495)*1+lsi)*1]),&(stack[((hsi*55+1689)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1744)*1+lsi)*1]), &(stack[((hsi*12+1124)*1+lsi)*1]), &(stack[((hsi*12+1112)*1+lsi)*1]), &(stack[((hsi*12+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+440)*1+lsi)*1]),&(stack[((hsi*55+1744)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1799)*1+lsi)*1]), &(stack[((hsi*12+1124)*1+lsi)*1]), &(stack[((hsi*12+1112)*1+lsi)*1]), &(stack[((hsi*12+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+385)*1+lsi)*1]),&(stack[((hsi*55+1799)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1854)*1+lsi)*1]), &(stack[((hsi*12+1124)*1+lsi)*1]), &(stack[((hsi*12+1112)*1+lsi)*1]), &(stack[((hsi*12+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+330)*1+lsi)*1]),&(stack[((hsi*55+1854)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1909)*1+lsi)*1]), &(stack[((hsi*12+1124)*1+lsi)*1]), &(stack[((hsi*12+1112)*1+lsi)*1]), &(stack[((hsi*12+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+275)*1+lsi)*1]),&(stack[((hsi*55+1909)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+1964)*1+lsi)*1]), &(stack[((hsi*12+1124)*1+lsi)*1]), &(stack[((hsi*12+1112)*1+lsi)*1]), &(stack[((hsi*12+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+220)*1+lsi)*1]),&(stack[((hsi*55+1964)*1+lsi)*1]),55);
CR_aB_Z0__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*11+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*11+1111)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*11+1122)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+2019)*1+lsi)*1]), &(stack[((hsi*11+1122)*1+lsi)*1]), &(stack[((hsi*11+1111)*1+lsi)*1]), &(stack[((hsi*11+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+165)*1+lsi)*1]),&(stack[((hsi*55+2019)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+2074)*1+lsi)*1]), &(stack[((hsi*11+1122)*1+lsi)*1]), &(stack[((hsi*11+1111)*1+lsi)*1]), &(stack[((hsi*11+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+110)*1+lsi)*1]),&(stack[((hsi*55+2074)*1+lsi)*1]),55);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+2129)*1+lsi)*1]), &(stack[((hsi*11+1122)*1+lsi)*1]), &(stack[((hsi*11+1111)*1+lsi)*1]), &(stack[((hsi*11+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+55)*1+lsi)*1]),&(stack[((hsi*55+2129)*1+lsi)*1]),55);
CR_aB_Z0__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*10+1100)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*10+1110)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*10+1120)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*55+2184)*1+lsi)*1]), &(stack[((hsi*10+1120)*1+lsi)*1]), &(stack[((hsi*10+1110)*1+lsi)*1]), &(stack[((hsi*10+1100)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+2184)*1+lsi)*1]),55);
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
