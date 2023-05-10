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
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_K_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*56+7200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*56+7256)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*56+7312)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+7368)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+6840)*1+lsi)*1]),&(stack[((hsi*360+7368)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+7728)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+6480)*1+lsi)*1]),&(stack[((hsi*360+7728)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+8088)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+6120)*1+lsi)*1]),&(stack[((hsi*360+8088)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+8448)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+5760)*1+lsi)*1]),&(stack[((hsi*360+8448)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+8808)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+5400)*1+lsi)*1]),&(stack[((hsi*360+8808)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+9168)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+5040)*1+lsi)*1]),&(stack[((hsi*360+9168)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+9528)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+4680)*1+lsi)*1]),&(stack[((hsi*360+9528)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+9888)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+4320)*1+lsi)*1]),&(stack[((hsi*360+9888)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+10248)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+3960)*1+lsi)*1]),&(stack[((hsi*360+10248)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+10608)*1+lsi)*1]), &(stack[((hsi*56+7312)*1+lsi)*1]), &(stack[((hsi*56+7256)*1+lsi)*1]), &(stack[((hsi*56+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+3600)*1+lsi)*1]),&(stack[((hsi*360+10608)*1+lsi)*1]),360);
CR_aB_Z7__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*48+7200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*48+7248)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*48+7296)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+10968)*1+lsi)*1]), &(stack[((hsi*48+7296)*1+lsi)*1]), &(stack[((hsi*48+7248)*1+lsi)*1]), &(stack[((hsi*48+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+3240)*1+lsi)*1]),&(stack[((hsi*360+10968)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+11328)*1+lsi)*1]), &(stack[((hsi*48+7296)*1+lsi)*1]), &(stack[((hsi*48+7248)*1+lsi)*1]), &(stack[((hsi*48+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+2880)*1+lsi)*1]),&(stack[((hsi*360+11328)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+11688)*1+lsi)*1]), &(stack[((hsi*48+7296)*1+lsi)*1]), &(stack[((hsi*48+7248)*1+lsi)*1]), &(stack[((hsi*48+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+2520)*1+lsi)*1]),&(stack[((hsi*360+11688)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+12048)*1+lsi)*1]), &(stack[((hsi*48+7296)*1+lsi)*1]), &(stack[((hsi*48+7248)*1+lsi)*1]), &(stack[((hsi*48+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+2160)*1+lsi)*1]),&(stack[((hsi*360+12048)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+12408)*1+lsi)*1]), &(stack[((hsi*48+7296)*1+lsi)*1]), &(stack[((hsi*48+7248)*1+lsi)*1]), &(stack[((hsi*48+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1800)*1+lsi)*1]),&(stack[((hsi*360+12408)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+12768)*1+lsi)*1]), &(stack[((hsi*48+7296)*1+lsi)*1]), &(stack[((hsi*48+7248)*1+lsi)*1]), &(stack[((hsi*48+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1440)*1+lsi)*1]),&(stack[((hsi*360+12768)*1+lsi)*1]),360);
CR_aB_Z7__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*40+7200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*40+7240)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*40+7280)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+13128)*1+lsi)*1]), &(stack[((hsi*40+7280)*1+lsi)*1]), &(stack[((hsi*40+7240)*1+lsi)*1]), &(stack[((hsi*40+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1080)*1+lsi)*1]),&(stack[((hsi*360+13128)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+13488)*1+lsi)*1]), &(stack[((hsi*40+7280)*1+lsi)*1]), &(stack[((hsi*40+7240)*1+lsi)*1]), &(stack[((hsi*40+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+720)*1+lsi)*1]),&(stack[((hsi*360+13488)*1+lsi)*1]),360);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+13848)*1+lsi)*1]), &(stack[((hsi*40+7280)*1+lsi)*1]), &(stack[((hsi*40+7240)*1+lsi)*1]), &(stack[((hsi*40+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+360)*1+lsi)*1]),&(stack[((hsi*360+13848)*1+lsi)*1]),360);
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+7200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+7232)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+7264)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*360+14208)*1+lsi)*1]), &(stack[((hsi*32+7264)*1+lsi)*1]), &(stack[((hsi*32+7232)*1+lsi)*1]), &(stack[((hsi*32+7200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+0)*1+lsi)*1]),&(stack[((hsi*360+14208)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 7200 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
