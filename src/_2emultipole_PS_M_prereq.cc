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
#include <CR_aB_X10__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_PS_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*132+36300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*132+36432)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*132+36564)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+36696)*1+lsi)*1]), &(stack[((hsi*132+36564)*1+lsi)*1]), &(stack[((hsi*132+36432)*1+lsi)*1]), &(stack[((hsi*132+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+32670)*1+lsi)*1]),&(stack[((hsi*3630+36696)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+40326)*1+lsi)*1]), &(stack[((hsi*132+36564)*1+lsi)*1]), &(stack[((hsi*132+36432)*1+lsi)*1]), &(stack[((hsi*132+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+29040)*1+lsi)*1]),&(stack[((hsi*3630+40326)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+43956)*1+lsi)*1]), &(stack[((hsi*132+36564)*1+lsi)*1]), &(stack[((hsi*132+36432)*1+lsi)*1]), &(stack[((hsi*132+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+25410)*1+lsi)*1]),&(stack[((hsi*3630+43956)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+47586)*1+lsi)*1]), &(stack[((hsi*132+36564)*1+lsi)*1]), &(stack[((hsi*132+36432)*1+lsi)*1]), &(stack[((hsi*132+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+21780)*1+lsi)*1]),&(stack[((hsi*3630+47586)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+51216)*1+lsi)*1]), &(stack[((hsi*132+36564)*1+lsi)*1]), &(stack[((hsi*132+36432)*1+lsi)*1]), &(stack[((hsi*132+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+18150)*1+lsi)*1]),&(stack[((hsi*3630+51216)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+54846)*1+lsi)*1]), &(stack[((hsi*132+36564)*1+lsi)*1]), &(stack[((hsi*132+36432)*1+lsi)*1]), &(stack[((hsi*132+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+14520)*1+lsi)*1]),&(stack[((hsi*3630+54846)*1+lsi)*1]),3630);
CR_aB_Z10__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*121+36300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*121+36421)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*121+36542)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+58476)*1+lsi)*1]), &(stack[((hsi*121+36542)*1+lsi)*1]), &(stack[((hsi*121+36421)*1+lsi)*1]), &(stack[((hsi*121+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+10890)*1+lsi)*1]),&(stack[((hsi*3630+58476)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+62106)*1+lsi)*1]), &(stack[((hsi*121+36542)*1+lsi)*1]), &(stack[((hsi*121+36421)*1+lsi)*1]), &(stack[((hsi*121+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+7260)*1+lsi)*1]),&(stack[((hsi*3630+62106)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+65736)*1+lsi)*1]), &(stack[((hsi*121+36542)*1+lsi)*1]), &(stack[((hsi*121+36421)*1+lsi)*1]), &(stack[((hsi*121+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+3630)*1+lsi)*1]),&(stack[((hsi*3630+65736)*1+lsi)*1]),3630);
CR_aB_Z10__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*110+36300)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*110+36410)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*110+36520)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+69366)*1+lsi)*1]), &(stack[((hsi*110+36520)*1+lsi)*1]), &(stack[((hsi*110+36410)*1+lsi)*1]), &(stack[((hsi*110+36300)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+0)*1+lsi)*1]),&(stack[((hsi*3630+69366)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 36300 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
