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
#include <CR_aB_X9__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X12__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_M_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*130+60500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*130+60630)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*130+60760)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+60890)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+57475)*1+lsi)*1]),&(stack[((hsi*3025+60890)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+63915)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+54450)*1+lsi)*1]),&(stack[((hsi*3025+63915)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+66940)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+51425)*1+lsi)*1]),&(stack[((hsi*3025+66940)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+69965)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+48400)*1+lsi)*1]),&(stack[((hsi*3025+69965)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+72990)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+45375)*1+lsi)*1]),&(stack[((hsi*3025+72990)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+76015)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+42350)*1+lsi)*1]),&(stack[((hsi*3025+76015)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+79040)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+39325)*1+lsi)*1]),&(stack[((hsi*3025+79040)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+82065)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+36300)*1+lsi)*1]),&(stack[((hsi*3025+82065)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+85090)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+33275)*1+lsi)*1]),&(stack[((hsi*3025+85090)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+88115)*1+lsi)*1]), &(stack[((hsi*130+60760)*1+lsi)*1]), &(stack[((hsi*130+60630)*1+lsi)*1]), &(stack[((hsi*130+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+30250)*1+lsi)*1]),&(stack[((hsi*3025+88115)*1+lsi)*1]),3025);
CR_aB_Z9__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*120+60500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*120+60620)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*120+60740)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+91140)*1+lsi)*1]), &(stack[((hsi*120+60740)*1+lsi)*1]), &(stack[((hsi*120+60620)*1+lsi)*1]), &(stack[((hsi*120+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+27225)*1+lsi)*1]),&(stack[((hsi*3025+91140)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+94165)*1+lsi)*1]), &(stack[((hsi*120+60740)*1+lsi)*1]), &(stack[((hsi*120+60620)*1+lsi)*1]), &(stack[((hsi*120+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+24200)*1+lsi)*1]),&(stack[((hsi*3025+94165)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+97190)*1+lsi)*1]), &(stack[((hsi*120+60740)*1+lsi)*1]), &(stack[((hsi*120+60620)*1+lsi)*1]), &(stack[((hsi*120+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+21175)*1+lsi)*1]),&(stack[((hsi*3025+97190)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+100215)*1+lsi)*1]), &(stack[((hsi*120+60740)*1+lsi)*1]), &(stack[((hsi*120+60620)*1+lsi)*1]), &(stack[((hsi*120+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+18150)*1+lsi)*1]),&(stack[((hsi*3025+100215)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+103240)*1+lsi)*1]), &(stack[((hsi*120+60740)*1+lsi)*1]), &(stack[((hsi*120+60620)*1+lsi)*1]), &(stack[((hsi*120+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+15125)*1+lsi)*1]),&(stack[((hsi*3025+103240)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+106265)*1+lsi)*1]), &(stack[((hsi*120+60740)*1+lsi)*1]), &(stack[((hsi*120+60620)*1+lsi)*1]), &(stack[((hsi*120+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+12100)*1+lsi)*1]),&(stack[((hsi*3025+106265)*1+lsi)*1]),3025);
CR_aB_Z9__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*110+60500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*110+60610)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*110+60720)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+109290)*1+lsi)*1]), &(stack[((hsi*110+60720)*1+lsi)*1]), &(stack[((hsi*110+60610)*1+lsi)*1]), &(stack[((hsi*110+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+9075)*1+lsi)*1]),&(stack[((hsi*3025+109290)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+112315)*1+lsi)*1]), &(stack[((hsi*110+60720)*1+lsi)*1]), &(stack[((hsi*110+60610)*1+lsi)*1]), &(stack[((hsi*110+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+6050)*1+lsi)*1]),&(stack[((hsi*3025+112315)*1+lsi)*1]),3025);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+115340)*1+lsi)*1]), &(stack[((hsi*110+60720)*1+lsi)*1]), &(stack[((hsi*110+60610)*1+lsi)*1]), &(stack[((hsi*110+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+3025)*1+lsi)*1]),&(stack[((hsi*3025+115340)*1+lsi)*1]),3025);
CR_aB_Z9__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*100+60500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*100+60600)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*100+60700)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*3025+118365)*1+lsi)*1]), &(stack[((hsi*100+60700)*1+lsi)*1]), &(stack[((hsi*100+60600)*1+lsi)*1]), &(stack[((hsi*100+60500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*3025+0)*1+lsi)*1]),&(stack[((hsi*3025+118365)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 60500 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
