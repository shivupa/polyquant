/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <CR_aB_X1__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_P_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*14+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*14+614)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*14+628)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+642)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+570)*1+lsi)*1]),&(stack[((hsi*30+642)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+672)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+540)*1+lsi)*1]),&(stack[((hsi*30+672)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+702)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+510)*1+lsi)*1]),&(stack[((hsi*30+702)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+732)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+480)*1+lsi)*1]),&(stack[((hsi*30+732)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+762)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+450)*1+lsi)*1]),&(stack[((hsi*30+762)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+792)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+420)*1+lsi)*1]),&(stack[((hsi*30+792)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+822)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+390)*1+lsi)*1]),&(stack[((hsi*30+822)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+852)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+360)*1+lsi)*1]),&(stack[((hsi*30+852)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+882)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+330)*1+lsi)*1]),&(stack[((hsi*30+882)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+912)*1+lsi)*1]), &(stack[((hsi*14+628)*1+lsi)*1]), &(stack[((hsi*14+614)*1+lsi)*1]), &(stack[((hsi*14+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+300)*1+lsi)*1]),&(stack[((hsi*30+912)*1+lsi)*1]),30);
CR_aB_Z1__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*12+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*12+612)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*12+624)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+942)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+270)*1+lsi)*1]),&(stack[((hsi*30+942)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+972)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+240)*1+lsi)*1]),&(stack[((hsi*30+972)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1002)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+210)*1+lsi)*1]),&(stack[((hsi*30+1002)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1032)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+180)*1+lsi)*1]),&(stack[((hsi*30+1032)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1062)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+150)*1+lsi)*1]),&(stack[((hsi*30+1062)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1092)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+120)*1+lsi)*1]),&(stack[((hsi*30+1092)*1+lsi)*1]),30);
CR_aB_Z1__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*10+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*10+610)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*10+620)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1122)*1+lsi)*1]), &(stack[((hsi*10+620)*1+lsi)*1]), &(stack[((hsi*10+610)*1+lsi)*1]), &(stack[((hsi*10+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+90)*1+lsi)*1]),&(stack[((hsi*30+1122)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1152)*1+lsi)*1]), &(stack[((hsi*10+620)*1+lsi)*1]), &(stack[((hsi*10+610)*1+lsi)*1]), &(stack[((hsi*10+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+60)*1+lsi)*1]),&(stack[((hsi*30+1152)*1+lsi)*1]),30);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1182)*1+lsi)*1]), &(stack[((hsi*10+620)*1+lsi)*1]), &(stack[((hsi*10+610)*1+lsi)*1]), &(stack[((hsi*10+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+30)*1+lsi)*1]),&(stack[((hsi*30+1182)*1+lsi)*1]),30);
CR_aB_Z1__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*8+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*8+608)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*8+616)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*30+1212)*1+lsi)*1]), &(stack[((hsi*8+616)*1+lsi)*1]), &(stack[((hsi*8+608)*1+lsi)*1]), &(stack[((hsi*8+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(stack[((hsi*30+1212)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 600 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
