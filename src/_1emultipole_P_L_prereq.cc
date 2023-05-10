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
#include <CR_aB_X1__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _1emultipole_P_L_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*20+540)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*20+560)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*20+580)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+600)*1+lsi)*1]), &(stack[((hsi*20+580)*1+lsi)*1]), &(stack[((hsi*20+560)*1+lsi)*1]), &(stack[((hsi*20+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+405)*1+lsi)*1]),&(stack[((hsi*135+600)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+735)*1+lsi)*1]), &(stack[((hsi*20+580)*1+lsi)*1]), &(stack[((hsi*20+560)*1+lsi)*1]), &(stack[((hsi*20+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+270)*1+lsi)*1]),&(stack[((hsi*135+735)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+870)*1+lsi)*1]), &(stack[((hsi*20+580)*1+lsi)*1]), &(stack[((hsi*20+560)*1+lsi)*1]), &(stack[((hsi*20+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+135)*1+lsi)*1]),&(stack[((hsi*135+870)*1+lsi)*1]),135);
CR_aB_Z1__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*18+540)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*18+558)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*18+576)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+1005)*1+lsi)*1]), &(stack[((hsi*18+576)*1+lsi)*1]), &(stack[((hsi*18+558)*1+lsi)*1]), &(stack[((hsi*18+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+0)*1+lsi)*1]),&(stack[((hsi*135+1005)*1+lsi)*1]),135);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 540 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
