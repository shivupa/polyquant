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
#include <CR_aB_X3__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_F_PS_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*48+2640)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*48+2688)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*48+2736)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*660+2784)*1+lsi)*1]), &(stack[((hsi*48+2736)*1+lsi)*1]), &(stack[((hsi*48+2688)*1+lsi)*1]), &(stack[((hsi*48+2640)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+1980)*1+lsi)*1]),&(stack[((hsi*660+2784)*1+lsi)*1]),660);
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*660+3444)*1+lsi)*1]), &(stack[((hsi*48+2736)*1+lsi)*1]), &(stack[((hsi*48+2688)*1+lsi)*1]), &(stack[((hsi*48+2640)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+1320)*1+lsi)*1]),&(stack[((hsi*660+3444)*1+lsi)*1]),660);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*660+4104)*1+lsi)*1]), &(stack[((hsi*48+2736)*1+lsi)*1]), &(stack[((hsi*48+2688)*1+lsi)*1]), &(stack[((hsi*48+2640)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+660)*1+lsi)*1]),&(stack[((hsi*660+4104)*1+lsi)*1]),660);
CR_aB_Z3__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*44+2640)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*44+2684)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*44+2728)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*660+4764)*1+lsi)*1]), &(stack[((hsi*44+2728)*1+lsi)*1]), &(stack[((hsi*44+2684)*1+lsi)*1]), &(stack[((hsi*44+2640)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+0)*1+lsi)*1]),&(stack[((hsi*660+4764)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2640 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif