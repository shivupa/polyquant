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
#include <CR_aB_X3__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_F_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*28+2000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*28+2028)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*28+2056)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2084)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1900)*1+lsi)*1]),&(stack[((hsi*100+2084)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2184)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1800)*1+lsi)*1]),&(stack[((hsi*100+2184)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2284)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1700)*1+lsi)*1]),&(stack[((hsi*100+2284)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2384)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1600)*1+lsi)*1]),&(stack[((hsi*100+2384)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2484)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1500)*1+lsi)*1]),&(stack[((hsi*100+2484)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2584)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1400)*1+lsi)*1]),&(stack[((hsi*100+2584)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2684)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1300)*1+lsi)*1]),&(stack[((hsi*100+2684)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2784)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1200)*1+lsi)*1]),&(stack[((hsi*100+2784)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2884)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1100)*1+lsi)*1]),&(stack[((hsi*100+2884)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+2984)*1+lsi)*1]), &(stack[((hsi*28+2056)*1+lsi)*1]), &(stack[((hsi*28+2028)*1+lsi)*1]), &(stack[((hsi*28+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1000)*1+lsi)*1]),&(stack[((hsi*100+2984)*1+lsi)*1]),100);
CR_aB_Z3__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*24+2000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*24+2024)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*24+2048)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3084)*1+lsi)*1]), &(stack[((hsi*24+2048)*1+lsi)*1]), &(stack[((hsi*24+2024)*1+lsi)*1]), &(stack[((hsi*24+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+900)*1+lsi)*1]),&(stack[((hsi*100+3084)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3184)*1+lsi)*1]), &(stack[((hsi*24+2048)*1+lsi)*1]), &(stack[((hsi*24+2024)*1+lsi)*1]), &(stack[((hsi*24+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+800)*1+lsi)*1]),&(stack[((hsi*100+3184)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3284)*1+lsi)*1]), &(stack[((hsi*24+2048)*1+lsi)*1]), &(stack[((hsi*24+2024)*1+lsi)*1]), &(stack[((hsi*24+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+700)*1+lsi)*1]),&(stack[((hsi*100+3284)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3384)*1+lsi)*1]), &(stack[((hsi*24+2048)*1+lsi)*1]), &(stack[((hsi*24+2024)*1+lsi)*1]), &(stack[((hsi*24+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+600)*1+lsi)*1]),&(stack[((hsi*100+3384)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3484)*1+lsi)*1]), &(stack[((hsi*24+2048)*1+lsi)*1]), &(stack[((hsi*24+2024)*1+lsi)*1]), &(stack[((hsi*24+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+500)*1+lsi)*1]),&(stack[((hsi*100+3484)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3584)*1+lsi)*1]), &(stack[((hsi*24+2048)*1+lsi)*1]), &(stack[((hsi*24+2024)*1+lsi)*1]), &(stack[((hsi*24+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+400)*1+lsi)*1]),&(stack[((hsi*100+3584)*1+lsi)*1]),100);
CR_aB_Z3__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*20+2000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*20+2020)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*20+2040)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3684)*1+lsi)*1]), &(stack[((hsi*20+2040)*1+lsi)*1]), &(stack[((hsi*20+2020)*1+lsi)*1]), &(stack[((hsi*20+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+300)*1+lsi)*1]),&(stack[((hsi*100+3684)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3784)*1+lsi)*1]), &(stack[((hsi*20+2040)*1+lsi)*1]), &(stack[((hsi*20+2020)*1+lsi)*1]), &(stack[((hsi*20+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+200)*1+lsi)*1]),&(stack[((hsi*100+3784)*1+lsi)*1]),100);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3884)*1+lsi)*1]), &(stack[((hsi*20+2040)*1+lsi)*1]), &(stack[((hsi*20+2020)*1+lsi)*1]), &(stack[((hsi*20+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+100)*1+lsi)*1]),&(stack[((hsi*100+3884)*1+lsi)*1]),100);
CR_aB_Z3__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*16+2000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*16+2016)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*16+2032)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*100+3984)*1+lsi)*1]), &(stack[((hsi*16+2032)*1+lsi)*1]), &(stack[((hsi*16+2016)*1+lsi)*1]), &(stack[((hsi*16+2000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*100+0)*1+lsi)*1]),&(stack[((hsi*100+3984)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2000 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
