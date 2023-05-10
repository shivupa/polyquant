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
#include <CR_aB_X9__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_M_L_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*120+49500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*120+49620)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*120+49740)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+49860)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+47025)*1+lsi)*1]),&(stack[((hsi*2475+49860)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+52335)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+44550)*1+lsi)*1]),&(stack[((hsi*2475+52335)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+54810)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+42075)*1+lsi)*1]),&(stack[((hsi*2475+54810)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+57285)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+39600)*1+lsi)*1]),&(stack[((hsi*2475+57285)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+59760)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+37125)*1+lsi)*1]),&(stack[((hsi*2475+59760)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+62235)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+34650)*1+lsi)*1]),&(stack[((hsi*2475+62235)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+64710)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+32175)*1+lsi)*1]),&(stack[((hsi*2475+64710)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+67185)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+29700)*1+lsi)*1]),&(stack[((hsi*2475+67185)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+69660)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+27225)*1+lsi)*1]),&(stack[((hsi*2475+69660)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+72135)*1+lsi)*1]), &(stack[((hsi*120+49740)*1+lsi)*1]), &(stack[((hsi*120+49620)*1+lsi)*1]), &(stack[((hsi*120+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+24750)*1+lsi)*1]),&(stack[((hsi*2475+72135)*1+lsi)*1]),2475);
CR_aB_Z9__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*110+49500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*110+49610)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*110+49720)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+74610)*1+lsi)*1]), &(stack[((hsi*110+49720)*1+lsi)*1]), &(stack[((hsi*110+49610)*1+lsi)*1]), &(stack[((hsi*110+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+22275)*1+lsi)*1]),&(stack[((hsi*2475+74610)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+77085)*1+lsi)*1]), &(stack[((hsi*110+49720)*1+lsi)*1]), &(stack[((hsi*110+49610)*1+lsi)*1]), &(stack[((hsi*110+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+19800)*1+lsi)*1]),&(stack[((hsi*2475+77085)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+79560)*1+lsi)*1]), &(stack[((hsi*110+49720)*1+lsi)*1]), &(stack[((hsi*110+49610)*1+lsi)*1]), &(stack[((hsi*110+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+17325)*1+lsi)*1]),&(stack[((hsi*2475+79560)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+82035)*1+lsi)*1]), &(stack[((hsi*110+49720)*1+lsi)*1]), &(stack[((hsi*110+49610)*1+lsi)*1]), &(stack[((hsi*110+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+14850)*1+lsi)*1]),&(stack[((hsi*2475+82035)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+84510)*1+lsi)*1]), &(stack[((hsi*110+49720)*1+lsi)*1]), &(stack[((hsi*110+49610)*1+lsi)*1]), &(stack[((hsi*110+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+12375)*1+lsi)*1]),&(stack[((hsi*2475+84510)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+86985)*1+lsi)*1]), &(stack[((hsi*110+49720)*1+lsi)*1]), &(stack[((hsi*110+49610)*1+lsi)*1]), &(stack[((hsi*110+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+9900)*1+lsi)*1]),&(stack[((hsi*2475+86985)*1+lsi)*1]),2475);
CR_aB_Z9__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*100+49500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*100+49600)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*100+49700)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+89460)*1+lsi)*1]), &(stack[((hsi*100+49700)*1+lsi)*1]), &(stack[((hsi*100+49600)*1+lsi)*1]), &(stack[((hsi*100+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+7425)*1+lsi)*1]),&(stack[((hsi*2475+89460)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+91935)*1+lsi)*1]), &(stack[((hsi*100+49700)*1+lsi)*1]), &(stack[((hsi*100+49600)*1+lsi)*1]), &(stack[((hsi*100+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+4950)*1+lsi)*1]),&(stack[((hsi*2475+91935)*1+lsi)*1]),2475);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+94410)*1+lsi)*1]), &(stack[((hsi*100+49700)*1+lsi)*1]), &(stack[((hsi*100+49600)*1+lsi)*1]), &(stack[((hsi*100+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+2475)*1+lsi)*1]),&(stack[((hsi*2475+94410)*1+lsi)*1]),2475);
CR_aB_Z9__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*90+49500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*90+49590)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*90+49680)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2475+96885)*1+lsi)*1]), &(stack[((hsi*90+49680)*1+lsi)*1]), &(stack[((hsi*90+49590)*1+lsi)*1]), &(stack[((hsi*90+49500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2475+0)*1+lsi)*1]),&(stack[((hsi*2475+96885)*1+lsi)*1]),2475);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 49500 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
