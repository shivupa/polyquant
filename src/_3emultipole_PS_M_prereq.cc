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
#include <CR_aB_X10__0___Overlap_X12__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_PS_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*143+72600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*143+72743)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*143+72886)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+73029)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+68970)*1+lsi)*1]),&(stack[((hsi*3630+73029)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+76659)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+65340)*1+lsi)*1]),&(stack[((hsi*3630+76659)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+80289)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+61710)*1+lsi)*1]),&(stack[((hsi*3630+80289)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+83919)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+58080)*1+lsi)*1]),&(stack[((hsi*3630+83919)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+87549)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+54450)*1+lsi)*1]),&(stack[((hsi*3630+87549)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+91179)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+50820)*1+lsi)*1]),&(stack[((hsi*3630+91179)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+94809)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+47190)*1+lsi)*1]),&(stack[((hsi*3630+94809)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+98439)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+43560)*1+lsi)*1]),&(stack[((hsi*3630+98439)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+102069)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+39930)*1+lsi)*1]),&(stack[((hsi*3630+102069)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+105699)*1+lsi)*1]), &(stack[((hsi*143+72886)*1+lsi)*1]), &(stack[((hsi*143+72743)*1+lsi)*1]), &(stack[((hsi*143+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+36300)*1+lsi)*1]),&(stack[((hsi*3630+105699)*1+lsi)*1]),3630);
CR_aB_Z10__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*132+72600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*132+72732)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*132+72864)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+109329)*1+lsi)*1]), &(stack[((hsi*132+72864)*1+lsi)*1]), &(stack[((hsi*132+72732)*1+lsi)*1]), &(stack[((hsi*132+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+32670)*1+lsi)*1]),&(stack[((hsi*3630+109329)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+112959)*1+lsi)*1]), &(stack[((hsi*132+72864)*1+lsi)*1]), &(stack[((hsi*132+72732)*1+lsi)*1]), &(stack[((hsi*132+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+29040)*1+lsi)*1]),&(stack[((hsi*3630+112959)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+116589)*1+lsi)*1]), &(stack[((hsi*132+72864)*1+lsi)*1]), &(stack[((hsi*132+72732)*1+lsi)*1]), &(stack[((hsi*132+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+25410)*1+lsi)*1]),&(stack[((hsi*3630+116589)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+120219)*1+lsi)*1]), &(stack[((hsi*132+72864)*1+lsi)*1]), &(stack[((hsi*132+72732)*1+lsi)*1]), &(stack[((hsi*132+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+21780)*1+lsi)*1]),&(stack[((hsi*3630+120219)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+123849)*1+lsi)*1]), &(stack[((hsi*132+72864)*1+lsi)*1]), &(stack[((hsi*132+72732)*1+lsi)*1]), &(stack[((hsi*132+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+18150)*1+lsi)*1]),&(stack[((hsi*3630+123849)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+127479)*1+lsi)*1]), &(stack[((hsi*132+72864)*1+lsi)*1]), &(stack[((hsi*132+72732)*1+lsi)*1]), &(stack[((hsi*132+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+14520)*1+lsi)*1]),&(stack[((hsi*3630+127479)*1+lsi)*1]),3630);
CR_aB_Z10__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*121+72600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*121+72721)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*121+72842)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+131109)*1+lsi)*1]), &(stack[((hsi*121+72842)*1+lsi)*1]), &(stack[((hsi*121+72721)*1+lsi)*1]), &(stack[((hsi*121+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+10890)*1+lsi)*1]),&(stack[((hsi*3630+131109)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+134739)*1+lsi)*1]), &(stack[((hsi*121+72842)*1+lsi)*1]), &(stack[((hsi*121+72721)*1+lsi)*1]), &(stack[((hsi*121+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+7260)*1+lsi)*1]),&(stack[((hsi*3630+134739)*1+lsi)*1]),3630);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+138369)*1+lsi)*1]), &(stack[((hsi*121+72842)*1+lsi)*1]), &(stack[((hsi*121+72721)*1+lsi)*1]), &(stack[((hsi*121+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+3630)*1+lsi)*1]),&(stack[((hsi*3630+138369)*1+lsi)*1]),3630);
CR_aB_Z10__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*110+72600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*110+72710)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*110+72820)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3630+141999)*1+lsi)*1]), &(stack[((hsi*110+72820)*1+lsi)*1]), &(stack[((hsi*110+72710)*1+lsi)*1]), &(stack[((hsi*110+72600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3630+0)*1+lsi)*1]),&(stack[((hsi*3630+141999)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 72600 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
