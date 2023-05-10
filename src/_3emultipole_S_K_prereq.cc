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
#include <CR_aB_X0__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_S_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*11+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*11+731)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*11+742)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+753)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+684)*1+lsi)*1]),&(stack[((hsi*36+753)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+789)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+648)*1+lsi)*1]),&(stack[((hsi*36+789)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+825)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+612)*1+lsi)*1]),&(stack[((hsi*36+825)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+861)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+576)*1+lsi)*1]),&(stack[((hsi*36+861)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+897)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+540)*1+lsi)*1]),&(stack[((hsi*36+897)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+933)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+504)*1+lsi)*1]),&(stack[((hsi*36+933)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+969)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+468)*1+lsi)*1]),&(stack[((hsi*36+969)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1005)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+432)*1+lsi)*1]),&(stack[((hsi*36+1005)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1041)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+396)*1+lsi)*1]),&(stack[((hsi*36+1041)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1077)*1+lsi)*1]), &(stack[((hsi*11+742)*1+lsi)*1]), &(stack[((hsi*11+731)*1+lsi)*1]), &(stack[((hsi*11+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+360)*1+lsi)*1]),&(stack[((hsi*36+1077)*1+lsi)*1]),36);
CR_aB_Z0__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*10+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*10+730)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*10+740)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1113)*1+lsi)*1]), &(stack[((hsi*10+740)*1+lsi)*1]), &(stack[((hsi*10+730)*1+lsi)*1]), &(stack[((hsi*10+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+324)*1+lsi)*1]),&(stack[((hsi*36+1113)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1149)*1+lsi)*1]), &(stack[((hsi*10+740)*1+lsi)*1]), &(stack[((hsi*10+730)*1+lsi)*1]), &(stack[((hsi*10+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+288)*1+lsi)*1]),&(stack[((hsi*36+1149)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1185)*1+lsi)*1]), &(stack[((hsi*10+740)*1+lsi)*1]), &(stack[((hsi*10+730)*1+lsi)*1]), &(stack[((hsi*10+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+252)*1+lsi)*1]),&(stack[((hsi*36+1185)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1221)*1+lsi)*1]), &(stack[((hsi*10+740)*1+lsi)*1]), &(stack[((hsi*10+730)*1+lsi)*1]), &(stack[((hsi*10+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+216)*1+lsi)*1]),&(stack[((hsi*36+1221)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1257)*1+lsi)*1]), &(stack[((hsi*10+740)*1+lsi)*1]), &(stack[((hsi*10+730)*1+lsi)*1]), &(stack[((hsi*10+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+180)*1+lsi)*1]),&(stack[((hsi*36+1257)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1293)*1+lsi)*1]), &(stack[((hsi*10+740)*1+lsi)*1]), &(stack[((hsi*10+730)*1+lsi)*1]), &(stack[((hsi*10+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+144)*1+lsi)*1]),&(stack[((hsi*36+1293)*1+lsi)*1]),36);
CR_aB_Z0__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*9+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*9+729)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*9+738)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1329)*1+lsi)*1]), &(stack[((hsi*9+738)*1+lsi)*1]), &(stack[((hsi*9+729)*1+lsi)*1]), &(stack[((hsi*9+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+108)*1+lsi)*1]),&(stack[((hsi*36+1329)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1365)*1+lsi)*1]), &(stack[((hsi*9+738)*1+lsi)*1]), &(stack[((hsi*9+729)*1+lsi)*1]), &(stack[((hsi*9+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+72)*1+lsi)*1]),&(stack[((hsi*36+1365)*1+lsi)*1]),36);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1401)*1+lsi)*1]), &(stack[((hsi*9+738)*1+lsi)*1]), &(stack[((hsi*9+729)*1+lsi)*1]), &(stack[((hsi*9+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+36)*1+lsi)*1]),&(stack[((hsi*36+1401)*1+lsi)*1]),36);
CR_aB_Z0__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*8+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*8+728)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*8+736)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*36+1437)*1+lsi)*1]), &(stack[((hsi*8+736)*1+lsi)*1]), &(stack[((hsi*8+728)*1+lsi)*1]), &(stack[((hsi*8+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+1437)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 720 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
