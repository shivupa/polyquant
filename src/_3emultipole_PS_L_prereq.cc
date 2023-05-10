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
#include <CR_aB_X10__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_PS_L_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*132+59400)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*132+59532)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*132+59664)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+59796)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+56430)*1+lsi)*1]),&(stack[((hsi*2970+59796)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+62766)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+53460)*1+lsi)*1]),&(stack[((hsi*2970+62766)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+65736)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+50490)*1+lsi)*1]),&(stack[((hsi*2970+65736)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+68706)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+47520)*1+lsi)*1]),&(stack[((hsi*2970+68706)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+71676)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+44550)*1+lsi)*1]),&(stack[((hsi*2970+71676)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+74646)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+41580)*1+lsi)*1]),&(stack[((hsi*2970+74646)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+77616)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+38610)*1+lsi)*1]),&(stack[((hsi*2970+77616)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+80586)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+35640)*1+lsi)*1]),&(stack[((hsi*2970+80586)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+83556)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+32670)*1+lsi)*1]),&(stack[((hsi*2970+83556)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+86526)*1+lsi)*1]), &(stack[((hsi*132+59664)*1+lsi)*1]), &(stack[((hsi*132+59532)*1+lsi)*1]), &(stack[((hsi*132+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+29700)*1+lsi)*1]),&(stack[((hsi*2970+86526)*1+lsi)*1]),2970);
CR_aB_Z10__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*121+59400)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*121+59521)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*121+59642)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+89496)*1+lsi)*1]), &(stack[((hsi*121+59642)*1+lsi)*1]), &(stack[((hsi*121+59521)*1+lsi)*1]), &(stack[((hsi*121+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+26730)*1+lsi)*1]),&(stack[((hsi*2970+89496)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+92466)*1+lsi)*1]), &(stack[((hsi*121+59642)*1+lsi)*1]), &(stack[((hsi*121+59521)*1+lsi)*1]), &(stack[((hsi*121+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+23760)*1+lsi)*1]),&(stack[((hsi*2970+92466)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+95436)*1+lsi)*1]), &(stack[((hsi*121+59642)*1+lsi)*1]), &(stack[((hsi*121+59521)*1+lsi)*1]), &(stack[((hsi*121+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+20790)*1+lsi)*1]),&(stack[((hsi*2970+95436)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+98406)*1+lsi)*1]), &(stack[((hsi*121+59642)*1+lsi)*1]), &(stack[((hsi*121+59521)*1+lsi)*1]), &(stack[((hsi*121+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+17820)*1+lsi)*1]),&(stack[((hsi*2970+98406)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+101376)*1+lsi)*1]), &(stack[((hsi*121+59642)*1+lsi)*1]), &(stack[((hsi*121+59521)*1+lsi)*1]), &(stack[((hsi*121+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+14850)*1+lsi)*1]),&(stack[((hsi*2970+101376)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+104346)*1+lsi)*1]), &(stack[((hsi*121+59642)*1+lsi)*1]), &(stack[((hsi*121+59521)*1+lsi)*1]), &(stack[((hsi*121+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+11880)*1+lsi)*1]),&(stack[((hsi*2970+104346)*1+lsi)*1]),2970);
CR_aB_Z10__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*110+59400)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*110+59510)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*110+59620)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+107316)*1+lsi)*1]), &(stack[((hsi*110+59620)*1+lsi)*1]), &(stack[((hsi*110+59510)*1+lsi)*1]), &(stack[((hsi*110+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+8910)*1+lsi)*1]),&(stack[((hsi*2970+107316)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+110286)*1+lsi)*1]), &(stack[((hsi*110+59620)*1+lsi)*1]), &(stack[((hsi*110+59510)*1+lsi)*1]), &(stack[((hsi*110+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+5940)*1+lsi)*1]),&(stack[((hsi*2970+110286)*1+lsi)*1]),2970);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+113256)*1+lsi)*1]), &(stack[((hsi*110+59620)*1+lsi)*1]), &(stack[((hsi*110+59510)*1+lsi)*1]), &(stack[((hsi*110+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+2970)*1+lsi)*1]),&(stack[((hsi*2970+113256)*1+lsi)*1]),2970);
CR_aB_Z10__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*99+59400)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*99+59499)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*99+59598)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*2970+116226)*1+lsi)*1]), &(stack[((hsi*99+59598)*1+lsi)*1]), &(stack[((hsi*99+59499)*1+lsi)*1]), &(stack[((hsi*99+59400)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2970+0)*1+lsi)*1]),&(stack[((hsi*2970+116226)*1+lsi)*1]),2970);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 59400 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
