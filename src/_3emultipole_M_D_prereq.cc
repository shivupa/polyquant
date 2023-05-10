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
#include <CR_aB_X9__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_M_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*60+6600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*60+6660)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*60+6720)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+6780)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+6270)*1+lsi)*1]),&(stack[((hsi*330+6780)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+7110)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+5940)*1+lsi)*1]),&(stack[((hsi*330+7110)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+7440)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+5610)*1+lsi)*1]),&(stack[((hsi*330+7440)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+7770)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+5280)*1+lsi)*1]),&(stack[((hsi*330+7770)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+8100)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+4950)*1+lsi)*1]),&(stack[((hsi*330+8100)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+8430)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+4620)*1+lsi)*1]),&(stack[((hsi*330+8430)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+8760)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+4290)*1+lsi)*1]),&(stack[((hsi*330+8760)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+9090)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+3960)*1+lsi)*1]),&(stack[((hsi*330+9090)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+9420)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+3630)*1+lsi)*1]),&(stack[((hsi*330+9420)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+9750)*1+lsi)*1]), &(stack[((hsi*60+6720)*1+lsi)*1]), &(stack[((hsi*60+6660)*1+lsi)*1]), &(stack[((hsi*60+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+3300)*1+lsi)*1]),&(stack[((hsi*330+9750)*1+lsi)*1]),330);
CR_aB_Z9__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*50+6600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*50+6650)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*50+6700)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+10080)*1+lsi)*1]), &(stack[((hsi*50+6700)*1+lsi)*1]), &(stack[((hsi*50+6650)*1+lsi)*1]), &(stack[((hsi*50+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+2970)*1+lsi)*1]),&(stack[((hsi*330+10080)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+10410)*1+lsi)*1]), &(stack[((hsi*50+6700)*1+lsi)*1]), &(stack[((hsi*50+6650)*1+lsi)*1]), &(stack[((hsi*50+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+2640)*1+lsi)*1]),&(stack[((hsi*330+10410)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+10740)*1+lsi)*1]), &(stack[((hsi*50+6700)*1+lsi)*1]), &(stack[((hsi*50+6650)*1+lsi)*1]), &(stack[((hsi*50+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+2310)*1+lsi)*1]),&(stack[((hsi*330+10740)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+11070)*1+lsi)*1]), &(stack[((hsi*50+6700)*1+lsi)*1]), &(stack[((hsi*50+6650)*1+lsi)*1]), &(stack[((hsi*50+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+1980)*1+lsi)*1]),&(stack[((hsi*330+11070)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+11400)*1+lsi)*1]), &(stack[((hsi*50+6700)*1+lsi)*1]), &(stack[((hsi*50+6650)*1+lsi)*1]), &(stack[((hsi*50+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+1650)*1+lsi)*1]),&(stack[((hsi*330+11400)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+11730)*1+lsi)*1]), &(stack[((hsi*50+6700)*1+lsi)*1]), &(stack[((hsi*50+6650)*1+lsi)*1]), &(stack[((hsi*50+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+1320)*1+lsi)*1]),&(stack[((hsi*330+11730)*1+lsi)*1]),330);
CR_aB_Z9__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*40+6600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*40+6640)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*40+6680)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+12060)*1+lsi)*1]), &(stack[((hsi*40+6680)*1+lsi)*1]), &(stack[((hsi*40+6640)*1+lsi)*1]), &(stack[((hsi*40+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+990)*1+lsi)*1]),&(stack[((hsi*330+12060)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+12390)*1+lsi)*1]), &(stack[((hsi*40+6680)*1+lsi)*1]), &(stack[((hsi*40+6640)*1+lsi)*1]), &(stack[((hsi*40+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+660)*1+lsi)*1]),&(stack[((hsi*330+12390)*1+lsi)*1]),330);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+12720)*1+lsi)*1]), &(stack[((hsi*40+6680)*1+lsi)*1]), &(stack[((hsi*40+6640)*1+lsi)*1]), &(stack[((hsi*40+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+330)*1+lsi)*1]),&(stack[((hsi*330+12720)*1+lsi)*1]),330);
CR_aB_Z9__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*30+6600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*30+6630)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*30+6660)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*330+13050)*1+lsi)*1]), &(stack[((hsi*30+6660)*1+lsi)*1]), &(stack[((hsi*30+6630)*1+lsi)*1]), &(stack[((hsi*30+6600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*330+0)*1+lsi)*1]),&(stack[((hsi*330+13050)*1+lsi)*1]),330);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 6600 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
