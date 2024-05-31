/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <CR_aB_X7__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_K_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+752)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+784)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+816)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+684)*1+lsi)*1]),&(stack[((hsi*36+816)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+852)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+648)*1+lsi)*1]),&(stack[((hsi*36+852)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+888)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+612)*1+lsi)*1]),&(stack[((hsi*36+888)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+924)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+576)*1+lsi)*1]),&(stack[((hsi*36+924)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+960)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+540)*1+lsi)*1]),&(stack[((hsi*36+960)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+996)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+504)*1+lsi)*1]),&(stack[((hsi*36+996)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1032)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+468)*1+lsi)*1]),&(stack[((hsi*36+1032)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1068)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+432)*1+lsi)*1]),&(stack[((hsi*36+1068)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1104)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+396)*1+lsi)*1]),&(stack[((hsi*36+1104)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1140)*1+lsi)*1]), &(stack[((hsi*32+784)*1+lsi)*1]), &(stack[((hsi*32+752)*1+lsi)*1]), &(stack[((hsi*32+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+360)*1+lsi)*1]),&(stack[((hsi*36+1140)*1+lsi)*1]),36);
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+744)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+768)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1176)*1+lsi)*1]), &(stack[((hsi*24+768)*1+lsi)*1]), &(stack[((hsi*24+744)*1+lsi)*1]), &(stack[((hsi*24+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+324)*1+lsi)*1]),&(stack[((hsi*36+1176)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1212)*1+lsi)*1]), &(stack[((hsi*24+768)*1+lsi)*1]), &(stack[((hsi*24+744)*1+lsi)*1]), &(stack[((hsi*24+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+288)*1+lsi)*1]),&(stack[((hsi*36+1212)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1248)*1+lsi)*1]), &(stack[((hsi*24+768)*1+lsi)*1]), &(stack[((hsi*24+744)*1+lsi)*1]), &(stack[((hsi*24+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+252)*1+lsi)*1]),&(stack[((hsi*36+1248)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1284)*1+lsi)*1]), &(stack[((hsi*24+768)*1+lsi)*1]), &(stack[((hsi*24+744)*1+lsi)*1]), &(stack[((hsi*24+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+216)*1+lsi)*1]),&(stack[((hsi*36+1284)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1320)*1+lsi)*1]), &(stack[((hsi*24+768)*1+lsi)*1]), &(stack[((hsi*24+744)*1+lsi)*1]), &(stack[((hsi*24+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+180)*1+lsi)*1]),&(stack[((hsi*36+1320)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1356)*1+lsi)*1]), &(stack[((hsi*24+768)*1+lsi)*1]), &(stack[((hsi*24+744)*1+lsi)*1]), &(stack[((hsi*24+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+144)*1+lsi)*1]),&(stack[((hsi*36+1356)*1+lsi)*1]),36);
CR_aB_Z7__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*16+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*16+736)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*16+752)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+768)*1+lsi)*1]), &(stack[((hsi*16+752)*1+lsi)*1]), &(stack[((hsi*16+736)*1+lsi)*1]), &(stack[((hsi*16+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+108)*1+lsi)*1]),&(stack[((hsi*36+768)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1392)*1+lsi)*1]), &(stack[((hsi*16+752)*1+lsi)*1]), &(stack[((hsi*16+736)*1+lsi)*1]), &(stack[((hsi*16+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+72)*1+lsi)*1]),&(stack[((hsi*36+1392)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1428)*1+lsi)*1]), &(stack[((hsi*16+752)*1+lsi)*1]), &(stack[((hsi*16+736)*1+lsi)*1]), &(stack[((hsi*16+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+36)*1+lsi)*1]),&(stack[((hsi*36+1428)*1+lsi)*1]),36);
CR_aB_Z7__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*8+720)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*8+728)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*8+736)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+1464)*1+lsi)*1]), &(stack[((hsi*8+736)*1+lsi)*1]), &(stack[((hsi*8+728)*1+lsi)*1]), &(stack[((hsi*8+720)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+1464)*1+lsi)*1]),36);
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
