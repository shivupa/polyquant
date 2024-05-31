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
#include <CR_aB_Y7__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_K_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+360)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+384)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+408)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+432)*1+lsi)*1]), &(stack[((hsi*24+408)*1+lsi)*1]), &(stack[((hsi*24+384)*1+lsi)*1]), &(stack[((hsi*24+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+324)*1+lsi)*1]),&(stack[((hsi*36+432)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+468)*1+lsi)*1]), &(stack[((hsi*24+408)*1+lsi)*1]), &(stack[((hsi*24+384)*1+lsi)*1]), &(stack[((hsi*24+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+288)*1+lsi)*1]),&(stack[((hsi*36+468)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+504)*1+lsi)*1]), &(stack[((hsi*24+408)*1+lsi)*1]), &(stack[((hsi*24+384)*1+lsi)*1]), &(stack[((hsi*24+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+252)*1+lsi)*1]),&(stack[((hsi*36+504)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+540)*1+lsi)*1]), &(stack[((hsi*24+408)*1+lsi)*1]), &(stack[((hsi*24+384)*1+lsi)*1]), &(stack[((hsi*24+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+216)*1+lsi)*1]),&(stack[((hsi*36+540)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+576)*1+lsi)*1]), &(stack[((hsi*24+408)*1+lsi)*1]), &(stack[((hsi*24+384)*1+lsi)*1]), &(stack[((hsi*24+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+180)*1+lsi)*1]),&(stack[((hsi*36+576)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+612)*1+lsi)*1]), &(stack[((hsi*24+408)*1+lsi)*1]), &(stack[((hsi*24+384)*1+lsi)*1]), &(stack[((hsi*24+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+144)*1+lsi)*1]),&(stack[((hsi*36+612)*1+lsi)*1]),36);
CR_aB_Z7__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*16+360)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*16+376)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*16+392)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+648)*1+lsi)*1]), &(stack[((hsi*16+392)*1+lsi)*1]), &(stack[((hsi*16+376)*1+lsi)*1]), &(stack[((hsi*16+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+108)*1+lsi)*1]),&(stack[((hsi*36+648)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+684)*1+lsi)*1]), &(stack[((hsi*16+392)*1+lsi)*1]), &(stack[((hsi*16+376)*1+lsi)*1]), &(stack[((hsi*16+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+72)*1+lsi)*1]),&(stack[((hsi*36+684)*1+lsi)*1]),36);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+720)*1+lsi)*1]), &(stack[((hsi*16+392)*1+lsi)*1]), &(stack[((hsi*16+376)*1+lsi)*1]), &(stack[((hsi*16+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+36)*1+lsi)*1]),&(stack[((hsi*36+720)*1+lsi)*1]),36);
CR_aB_Z7__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*8+360)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*8+368)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*8+376)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*36+384)*1+lsi)*1]), &(stack[((hsi*8+376)*1+lsi)*1]), &(stack[((hsi*8+368)*1+lsi)*1]), &(stack[((hsi*8+360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+384)*1+lsi)*1]),36);
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
