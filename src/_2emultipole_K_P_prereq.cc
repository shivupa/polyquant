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
#include <CR_aB_X7__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_K_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+1080)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+1112)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+1144)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1176)*1+lsi)*1]), &(stack[((hsi*32+1144)*1+lsi)*1]), &(stack[((hsi*32+1112)*1+lsi)*1]), &(stack[((hsi*32+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+972)*1+lsi)*1]),&(stack[((hsi*108+1176)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1284)*1+lsi)*1]), &(stack[((hsi*32+1144)*1+lsi)*1]), &(stack[((hsi*32+1112)*1+lsi)*1]), &(stack[((hsi*32+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+864)*1+lsi)*1]),&(stack[((hsi*108+1284)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1392)*1+lsi)*1]), &(stack[((hsi*32+1144)*1+lsi)*1]), &(stack[((hsi*32+1112)*1+lsi)*1]), &(stack[((hsi*32+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+756)*1+lsi)*1]),&(stack[((hsi*108+1392)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1500)*1+lsi)*1]), &(stack[((hsi*32+1144)*1+lsi)*1]), &(stack[((hsi*32+1112)*1+lsi)*1]), &(stack[((hsi*32+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+648)*1+lsi)*1]),&(stack[((hsi*108+1500)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1608)*1+lsi)*1]), &(stack[((hsi*32+1144)*1+lsi)*1]), &(stack[((hsi*32+1112)*1+lsi)*1]), &(stack[((hsi*32+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+540)*1+lsi)*1]),&(stack[((hsi*108+1608)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1716)*1+lsi)*1]), &(stack[((hsi*32+1144)*1+lsi)*1]), &(stack[((hsi*32+1112)*1+lsi)*1]), &(stack[((hsi*32+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+432)*1+lsi)*1]),&(stack[((hsi*108+1716)*1+lsi)*1]),108);
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+1080)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+1104)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+1128)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1824)*1+lsi)*1]), &(stack[((hsi*24+1128)*1+lsi)*1]), &(stack[((hsi*24+1104)*1+lsi)*1]), &(stack[((hsi*24+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+324)*1+lsi)*1]),&(stack[((hsi*108+1824)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1932)*1+lsi)*1]), &(stack[((hsi*24+1128)*1+lsi)*1]), &(stack[((hsi*24+1104)*1+lsi)*1]), &(stack[((hsi*24+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+216)*1+lsi)*1]),&(stack[((hsi*108+1932)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+2040)*1+lsi)*1]), &(stack[((hsi*24+1128)*1+lsi)*1]), &(stack[((hsi*24+1104)*1+lsi)*1]), &(stack[((hsi*24+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+108)*1+lsi)*1]),&(stack[((hsi*108+2040)*1+lsi)*1]),108);
CR_aB_Z7__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*16+1080)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*16+1096)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*16+1112)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+2148)*1+lsi)*1]), &(stack[((hsi*16+1112)*1+lsi)*1]), &(stack[((hsi*16+1096)*1+lsi)*1]), &(stack[((hsi*16+1080)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+0)*1+lsi)*1]),&(stack[((hsi*108+2148)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1080 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
