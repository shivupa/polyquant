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
#include <CR_aB_X10__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__g__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_PS_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*66+3960)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*66+4026)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*66+4092)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*990+4158)*1+lsi)*1]), &(stack[((hsi*66+4092)*1+lsi)*1]), &(stack[((hsi*66+4026)*1+lsi)*1]), &(stack[((hsi*66+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*990+2970)*1+lsi)*1]),&(stack[((hsi*990+4158)*1+lsi)*1]),990);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*990+5148)*1+lsi)*1]), &(stack[((hsi*66+4092)*1+lsi)*1]), &(stack[((hsi*66+4026)*1+lsi)*1]), &(stack[((hsi*66+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*990+1980)*1+lsi)*1]),&(stack[((hsi*990+5148)*1+lsi)*1]),990);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*990+6138)*1+lsi)*1]), &(stack[((hsi*66+4092)*1+lsi)*1]), &(stack[((hsi*66+4026)*1+lsi)*1]), &(stack[((hsi*66+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*990+990)*1+lsi)*1]),&(stack[((hsi*990+6138)*1+lsi)*1]),990);
CR_aB_Z10__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*55+3960)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*55+4015)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*55+4070)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*990+7128)*1+lsi)*1]), &(stack[((hsi*55+4070)*1+lsi)*1]), &(stack[((hsi*55+4015)*1+lsi)*1]), &(stack[((hsi*55+3960)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*990+0)*1+lsi)*1]),&(stack[((hsi*990+7128)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3960 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif