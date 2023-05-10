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
#include <CR_aB_X7__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_K_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*64+10800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*64+10864)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*64+10928)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+10992)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+10260)*1+lsi)*1]),&(stack[((hsi*540+10992)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+11532)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+9720)*1+lsi)*1]),&(stack[((hsi*540+11532)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+12072)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+9180)*1+lsi)*1]),&(stack[((hsi*540+12072)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+12612)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+8640)*1+lsi)*1]),&(stack[((hsi*540+12612)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+13152)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+8100)*1+lsi)*1]),&(stack[((hsi*540+13152)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+13692)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+7560)*1+lsi)*1]),&(stack[((hsi*540+13692)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+14232)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+7020)*1+lsi)*1]),&(stack[((hsi*540+14232)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+14772)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+6480)*1+lsi)*1]),&(stack[((hsi*540+14772)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+15312)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+5940)*1+lsi)*1]),&(stack[((hsi*540+15312)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+15852)*1+lsi)*1]), &(stack[((hsi*64+10928)*1+lsi)*1]), &(stack[((hsi*64+10864)*1+lsi)*1]), &(stack[((hsi*64+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+5400)*1+lsi)*1]),&(stack[((hsi*540+15852)*1+lsi)*1]),540);
CR_aB_Z7__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*56+10800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*56+10856)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*56+10912)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+16392)*1+lsi)*1]), &(stack[((hsi*56+10912)*1+lsi)*1]), &(stack[((hsi*56+10856)*1+lsi)*1]), &(stack[((hsi*56+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+4860)*1+lsi)*1]),&(stack[((hsi*540+16392)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+16932)*1+lsi)*1]), &(stack[((hsi*56+10912)*1+lsi)*1]), &(stack[((hsi*56+10856)*1+lsi)*1]), &(stack[((hsi*56+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+4320)*1+lsi)*1]),&(stack[((hsi*540+16932)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+17472)*1+lsi)*1]), &(stack[((hsi*56+10912)*1+lsi)*1]), &(stack[((hsi*56+10856)*1+lsi)*1]), &(stack[((hsi*56+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+3780)*1+lsi)*1]),&(stack[((hsi*540+17472)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+18012)*1+lsi)*1]), &(stack[((hsi*56+10912)*1+lsi)*1]), &(stack[((hsi*56+10856)*1+lsi)*1]), &(stack[((hsi*56+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+3240)*1+lsi)*1]),&(stack[((hsi*540+18012)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+18552)*1+lsi)*1]), &(stack[((hsi*56+10912)*1+lsi)*1]), &(stack[((hsi*56+10856)*1+lsi)*1]), &(stack[((hsi*56+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+2700)*1+lsi)*1]),&(stack[((hsi*540+18552)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+19092)*1+lsi)*1]), &(stack[((hsi*56+10912)*1+lsi)*1]), &(stack[((hsi*56+10856)*1+lsi)*1]), &(stack[((hsi*56+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+2160)*1+lsi)*1]),&(stack[((hsi*540+19092)*1+lsi)*1]),540);
CR_aB_Z7__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*48+10800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*48+10848)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*48+10896)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+19632)*1+lsi)*1]), &(stack[((hsi*48+10896)*1+lsi)*1]), &(stack[((hsi*48+10848)*1+lsi)*1]), &(stack[((hsi*48+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+1620)*1+lsi)*1]),&(stack[((hsi*540+19632)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+20172)*1+lsi)*1]), &(stack[((hsi*48+10896)*1+lsi)*1]), &(stack[((hsi*48+10848)*1+lsi)*1]), &(stack[((hsi*48+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+1080)*1+lsi)*1]),&(stack[((hsi*540+20172)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+20712)*1+lsi)*1]), &(stack[((hsi*48+10896)*1+lsi)*1]), &(stack[((hsi*48+10848)*1+lsi)*1]), &(stack[((hsi*48+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+540)*1+lsi)*1]),&(stack[((hsi*540+20712)*1+lsi)*1]),540);
CR_aB_Z7__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*40+10800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*40+10840)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*40+10880)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+21252)*1+lsi)*1]), &(stack[((hsi*40+10880)*1+lsi)*1]), &(stack[((hsi*40+10840)*1+lsi)*1]), &(stack[((hsi*40+10800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+0)*1+lsi)*1]),&(stack[((hsi*540+21252)*1+lsi)*1]),540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 10800 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
