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
#include <CR_aB_X3__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_F_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*16+200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*16+216)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*16+232)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+248)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+190)*1+lsi)*1]),&(stack[((hsi*10+248)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+258)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+180)*1+lsi)*1]),&(stack[((hsi*10+258)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+268)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+170)*1+lsi)*1]),&(stack[((hsi*10+268)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+278)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+160)*1+lsi)*1]),&(stack[((hsi*10+278)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+288)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+150)*1+lsi)*1]),&(stack[((hsi*10+288)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+298)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+140)*1+lsi)*1]),&(stack[((hsi*10+298)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+308)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+130)*1+lsi)*1]),&(stack[((hsi*10+308)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+318)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+120)*1+lsi)*1]),&(stack[((hsi*10+318)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+328)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+110)*1+lsi)*1]),&(stack[((hsi*10+328)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+338)*1+lsi)*1]), &(stack[((hsi*16+232)*1+lsi)*1]), &(stack[((hsi*16+216)*1+lsi)*1]), &(stack[((hsi*16+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+100)*1+lsi)*1]),&(stack[((hsi*10+338)*1+lsi)*1]),10);
CR_aB_Z3__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*12+200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*12+212)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*12+224)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+236)*1+lsi)*1]), &(stack[((hsi*12+224)*1+lsi)*1]), &(stack[((hsi*12+212)*1+lsi)*1]), &(stack[((hsi*12+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+90)*1+lsi)*1]),&(stack[((hsi*10+236)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+348)*1+lsi)*1]), &(stack[((hsi*12+224)*1+lsi)*1]), &(stack[((hsi*12+212)*1+lsi)*1]), &(stack[((hsi*12+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+80)*1+lsi)*1]),&(stack[((hsi*10+348)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+358)*1+lsi)*1]), &(stack[((hsi*12+224)*1+lsi)*1]), &(stack[((hsi*12+212)*1+lsi)*1]), &(stack[((hsi*12+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+70)*1+lsi)*1]),&(stack[((hsi*10+358)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+368)*1+lsi)*1]), &(stack[((hsi*12+224)*1+lsi)*1]), &(stack[((hsi*12+212)*1+lsi)*1]), &(stack[((hsi*12+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+60)*1+lsi)*1]),&(stack[((hsi*10+368)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+378)*1+lsi)*1]), &(stack[((hsi*12+224)*1+lsi)*1]), &(stack[((hsi*12+212)*1+lsi)*1]), &(stack[((hsi*12+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+50)*1+lsi)*1]),&(stack[((hsi*10+378)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+388)*1+lsi)*1]), &(stack[((hsi*12+224)*1+lsi)*1]), &(stack[((hsi*12+212)*1+lsi)*1]), &(stack[((hsi*12+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+40)*1+lsi)*1]),&(stack[((hsi*10+388)*1+lsi)*1]),10);
CR_aB_Z3__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*8+200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*8+208)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*8+216)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+224)*1+lsi)*1]), &(stack[((hsi*8+216)*1+lsi)*1]), &(stack[((hsi*8+208)*1+lsi)*1]), &(stack[((hsi*8+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+30)*1+lsi)*1]),&(stack[((hsi*10+224)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+398)*1+lsi)*1]), &(stack[((hsi*8+216)*1+lsi)*1]), &(stack[((hsi*8+208)*1+lsi)*1]), &(stack[((hsi*8+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(stack[((hsi*10+398)*1+lsi)*1]),10);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+408)*1+lsi)*1]), &(stack[((hsi*8+216)*1+lsi)*1]), &(stack[((hsi*8+208)*1+lsi)*1]), &(stack[((hsi*8+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(stack[((hsi*10+408)*1+lsi)*1]),10);
CR_aB_Z3__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*4+200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*4+204)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*4+208)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*10+212)*1+lsi)*1]), &(stack[((hsi*4+208)*1+lsi)*1]), &(stack[((hsi*4+204)*1+lsi)*1]), &(stack[((hsi*4+200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(stack[((hsi*10+212)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 200 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
