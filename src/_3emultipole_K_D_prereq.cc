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
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_K_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*48+4320)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*48+4368)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*48+4416)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+4464)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+4104)*1+lsi)*1]),&(stack[((hsi*216+4464)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+4680)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+3888)*1+lsi)*1]),&(stack[((hsi*216+4680)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+4896)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+3672)*1+lsi)*1]),&(stack[((hsi*216+4896)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+5112)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+3456)*1+lsi)*1]),&(stack[((hsi*216+5112)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+5328)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+3240)*1+lsi)*1]),&(stack[((hsi*216+5328)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+5544)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+3024)*1+lsi)*1]),&(stack[((hsi*216+5544)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+5760)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+2808)*1+lsi)*1]),&(stack[((hsi*216+5760)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+5976)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+2592)*1+lsi)*1]),&(stack[((hsi*216+5976)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+6192)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+2376)*1+lsi)*1]),&(stack[((hsi*216+6192)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+6408)*1+lsi)*1]), &(stack[((hsi*48+4416)*1+lsi)*1]), &(stack[((hsi*48+4368)*1+lsi)*1]), &(stack[((hsi*48+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+2160)*1+lsi)*1]),&(stack[((hsi*216+6408)*1+lsi)*1]),216);
CR_aB_Z7__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*40+4320)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*40+4360)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*40+4400)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+6624)*1+lsi)*1]), &(stack[((hsi*40+4400)*1+lsi)*1]), &(stack[((hsi*40+4360)*1+lsi)*1]), &(stack[((hsi*40+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+1944)*1+lsi)*1]),&(stack[((hsi*216+6624)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+6840)*1+lsi)*1]), &(stack[((hsi*40+4400)*1+lsi)*1]), &(stack[((hsi*40+4360)*1+lsi)*1]), &(stack[((hsi*40+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+1728)*1+lsi)*1]),&(stack[((hsi*216+6840)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+7056)*1+lsi)*1]), &(stack[((hsi*40+4400)*1+lsi)*1]), &(stack[((hsi*40+4360)*1+lsi)*1]), &(stack[((hsi*40+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+1512)*1+lsi)*1]),&(stack[((hsi*216+7056)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+7272)*1+lsi)*1]), &(stack[((hsi*40+4400)*1+lsi)*1]), &(stack[((hsi*40+4360)*1+lsi)*1]), &(stack[((hsi*40+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+1296)*1+lsi)*1]),&(stack[((hsi*216+7272)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+7488)*1+lsi)*1]), &(stack[((hsi*40+4400)*1+lsi)*1]), &(stack[((hsi*40+4360)*1+lsi)*1]), &(stack[((hsi*40+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+1080)*1+lsi)*1]),&(stack[((hsi*216+7488)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+7704)*1+lsi)*1]), &(stack[((hsi*40+4400)*1+lsi)*1]), &(stack[((hsi*40+4360)*1+lsi)*1]), &(stack[((hsi*40+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+864)*1+lsi)*1]),&(stack[((hsi*216+7704)*1+lsi)*1]),216);
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+4320)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+4352)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+4384)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+7920)*1+lsi)*1]), &(stack[((hsi*32+4384)*1+lsi)*1]), &(stack[((hsi*32+4352)*1+lsi)*1]), &(stack[((hsi*32+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+648)*1+lsi)*1]),&(stack[((hsi*216+7920)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+8136)*1+lsi)*1]), &(stack[((hsi*32+4384)*1+lsi)*1]), &(stack[((hsi*32+4352)*1+lsi)*1]), &(stack[((hsi*32+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+432)*1+lsi)*1]),&(stack[((hsi*216+8136)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+8352)*1+lsi)*1]), &(stack[((hsi*32+4384)*1+lsi)*1]), &(stack[((hsi*32+4352)*1+lsi)*1]), &(stack[((hsi*32+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+216)*1+lsi)*1]),&(stack[((hsi*216+8352)*1+lsi)*1]),216);
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+4320)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+4344)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+4368)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+8568)*1+lsi)*1]), &(stack[((hsi*24+4368)*1+lsi)*1]), &(stack[((hsi*24+4344)*1+lsi)*1]), &(stack[((hsi*24+4320)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+0)*1+lsi)*1]),&(stack[((hsi*216+8568)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4320 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
