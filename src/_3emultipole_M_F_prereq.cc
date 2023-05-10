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
#include <CR_aB_X9__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_M_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*70+11000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*70+11070)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*70+11140)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+11210)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+10450)*1+lsi)*1]),&(stack[((hsi*550+11210)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+11760)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+9900)*1+lsi)*1]),&(stack[((hsi*550+11760)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+12310)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+9350)*1+lsi)*1]),&(stack[((hsi*550+12310)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+12860)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+8800)*1+lsi)*1]),&(stack[((hsi*550+12860)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+13410)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+8250)*1+lsi)*1]),&(stack[((hsi*550+13410)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+13960)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+7700)*1+lsi)*1]),&(stack[((hsi*550+13960)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+14510)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+7150)*1+lsi)*1]),&(stack[((hsi*550+14510)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+15060)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+6600)*1+lsi)*1]),&(stack[((hsi*550+15060)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+15610)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+6050)*1+lsi)*1]),&(stack[((hsi*550+15610)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+16160)*1+lsi)*1]), &(stack[((hsi*70+11140)*1+lsi)*1]), &(stack[((hsi*70+11070)*1+lsi)*1]), &(stack[((hsi*70+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+5500)*1+lsi)*1]),&(stack[((hsi*550+16160)*1+lsi)*1]),550);
CR_aB_Z9__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*60+11000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*60+11060)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*60+11120)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+16710)*1+lsi)*1]), &(stack[((hsi*60+11120)*1+lsi)*1]), &(stack[((hsi*60+11060)*1+lsi)*1]), &(stack[((hsi*60+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+4950)*1+lsi)*1]),&(stack[((hsi*550+16710)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+17260)*1+lsi)*1]), &(stack[((hsi*60+11120)*1+lsi)*1]), &(stack[((hsi*60+11060)*1+lsi)*1]), &(stack[((hsi*60+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+4400)*1+lsi)*1]),&(stack[((hsi*550+17260)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+17810)*1+lsi)*1]), &(stack[((hsi*60+11120)*1+lsi)*1]), &(stack[((hsi*60+11060)*1+lsi)*1]), &(stack[((hsi*60+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+3850)*1+lsi)*1]),&(stack[((hsi*550+17810)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+18360)*1+lsi)*1]), &(stack[((hsi*60+11120)*1+lsi)*1]), &(stack[((hsi*60+11060)*1+lsi)*1]), &(stack[((hsi*60+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+3300)*1+lsi)*1]),&(stack[((hsi*550+18360)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+18910)*1+lsi)*1]), &(stack[((hsi*60+11120)*1+lsi)*1]), &(stack[((hsi*60+11060)*1+lsi)*1]), &(stack[((hsi*60+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+2750)*1+lsi)*1]),&(stack[((hsi*550+18910)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+19460)*1+lsi)*1]), &(stack[((hsi*60+11120)*1+lsi)*1]), &(stack[((hsi*60+11060)*1+lsi)*1]), &(stack[((hsi*60+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+2200)*1+lsi)*1]),&(stack[((hsi*550+19460)*1+lsi)*1]),550);
CR_aB_Z9__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*50+11000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*50+11050)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*50+11100)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+20010)*1+lsi)*1]), &(stack[((hsi*50+11100)*1+lsi)*1]), &(stack[((hsi*50+11050)*1+lsi)*1]), &(stack[((hsi*50+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+1650)*1+lsi)*1]),&(stack[((hsi*550+20010)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+20560)*1+lsi)*1]), &(stack[((hsi*50+11100)*1+lsi)*1]), &(stack[((hsi*50+11050)*1+lsi)*1]), &(stack[((hsi*50+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+1100)*1+lsi)*1]),&(stack[((hsi*550+20560)*1+lsi)*1]),550);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+21110)*1+lsi)*1]), &(stack[((hsi*50+11100)*1+lsi)*1]), &(stack[((hsi*50+11050)*1+lsi)*1]), &(stack[((hsi*50+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+550)*1+lsi)*1]),&(stack[((hsi*550+21110)*1+lsi)*1]),550);
CR_aB_Z9__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*40+11000)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*40+11040)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*40+11080)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*550+21660)*1+lsi)*1]), &(stack[((hsi*40+11080)*1+lsi)*1]), &(stack[((hsi*40+11040)*1+lsi)*1]), &(stack[((hsi*40+11000)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*550+0)*1+lsi)*1]),&(stack[((hsi*550+21660)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 11000 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
