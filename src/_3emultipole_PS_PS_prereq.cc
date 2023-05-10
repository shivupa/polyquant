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
#include <CR_aB_X10__0___Overlap_X13__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y13__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z13__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_PS_PS_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z13__0___Ab__up_(inteval, &(stack[((hsi*154+87120)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y13__0___Ab__up_(inteval, &(stack[((hsi*154+87274)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X13__0___Ab__up_(inteval, &(stack[((hsi*154+87428)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+87582)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+82764)*1+lsi)*1]),&(stack[((hsi*4356+87582)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+91938)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+78408)*1+lsi)*1]),&(stack[((hsi*4356+91938)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+96294)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+74052)*1+lsi)*1]),&(stack[((hsi*4356+96294)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+100650)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+69696)*1+lsi)*1]),&(stack[((hsi*4356+100650)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+105006)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+65340)*1+lsi)*1]),&(stack[((hsi*4356+105006)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+109362)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+60984)*1+lsi)*1]),&(stack[((hsi*4356+109362)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+113718)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+56628)*1+lsi)*1]),&(stack[((hsi*4356+113718)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+118074)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+52272)*1+lsi)*1]),&(stack[((hsi*4356+118074)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+122430)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+47916)*1+lsi)*1]),&(stack[((hsi*4356+122430)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+126786)*1+lsi)*1]), &(stack[((hsi*154+87428)*1+lsi)*1]), &(stack[((hsi*154+87274)*1+lsi)*1]), &(stack[((hsi*154+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+43560)*1+lsi)*1]),&(stack[((hsi*4356+126786)*1+lsi)*1]),4356);
CR_aB_Z10__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*143+87120)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*143+87263)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*143+87406)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+131142)*1+lsi)*1]), &(stack[((hsi*143+87406)*1+lsi)*1]), &(stack[((hsi*143+87263)*1+lsi)*1]), &(stack[((hsi*143+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+39204)*1+lsi)*1]),&(stack[((hsi*4356+131142)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+135498)*1+lsi)*1]), &(stack[((hsi*143+87406)*1+lsi)*1]), &(stack[((hsi*143+87263)*1+lsi)*1]), &(stack[((hsi*143+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+34848)*1+lsi)*1]),&(stack[((hsi*4356+135498)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+139854)*1+lsi)*1]), &(stack[((hsi*143+87406)*1+lsi)*1]), &(stack[((hsi*143+87263)*1+lsi)*1]), &(stack[((hsi*143+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+30492)*1+lsi)*1]),&(stack[((hsi*4356+139854)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+144210)*1+lsi)*1]), &(stack[((hsi*143+87406)*1+lsi)*1]), &(stack[((hsi*143+87263)*1+lsi)*1]), &(stack[((hsi*143+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+26136)*1+lsi)*1]),&(stack[((hsi*4356+144210)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+148566)*1+lsi)*1]), &(stack[((hsi*143+87406)*1+lsi)*1]), &(stack[((hsi*143+87263)*1+lsi)*1]), &(stack[((hsi*143+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+21780)*1+lsi)*1]),&(stack[((hsi*4356+148566)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+152922)*1+lsi)*1]), &(stack[((hsi*143+87406)*1+lsi)*1]), &(stack[((hsi*143+87263)*1+lsi)*1]), &(stack[((hsi*143+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+17424)*1+lsi)*1]),&(stack[((hsi*4356+152922)*1+lsi)*1]),4356);
CR_aB_Z10__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*132+87120)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*132+87252)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*132+87384)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+157278)*1+lsi)*1]), &(stack[((hsi*132+87384)*1+lsi)*1]), &(stack[((hsi*132+87252)*1+lsi)*1]), &(stack[((hsi*132+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+13068)*1+lsi)*1]),&(stack[((hsi*4356+157278)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+161634)*1+lsi)*1]), &(stack[((hsi*132+87384)*1+lsi)*1]), &(stack[((hsi*132+87252)*1+lsi)*1]), &(stack[((hsi*132+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+8712)*1+lsi)*1]),&(stack[((hsi*4356+161634)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+165990)*1+lsi)*1]), &(stack[((hsi*132+87384)*1+lsi)*1]), &(stack[((hsi*132+87252)*1+lsi)*1]), &(stack[((hsi*132+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+4356)*1+lsi)*1]),&(stack[((hsi*4356+165990)*1+lsi)*1]),4356);
CR_aB_Z10__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*121+87120)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*121+87241)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*121+87362)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+170346)*1+lsi)*1]), &(stack[((hsi*121+87362)*1+lsi)*1]), &(stack[((hsi*121+87241)*1+lsi)*1]), &(stack[((hsi*121+87120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+0)*1+lsi)*1]),&(stack[((hsi*4356+170346)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 87120 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
