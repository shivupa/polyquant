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
#include <CR_aB_Y10__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_PS_PS_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*143+43560)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*143+43703)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*143+43846)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+43989)*1+lsi)*1]), &(stack[((hsi*143+43846)*1+lsi)*1]), &(stack[((hsi*143+43703)*1+lsi)*1]), &(stack[((hsi*143+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+39204)*1+lsi)*1]),&(stack[((hsi*4356+43989)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+48345)*1+lsi)*1]), &(stack[((hsi*143+43846)*1+lsi)*1]), &(stack[((hsi*143+43703)*1+lsi)*1]), &(stack[((hsi*143+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+34848)*1+lsi)*1]),&(stack[((hsi*4356+48345)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+52701)*1+lsi)*1]), &(stack[((hsi*143+43846)*1+lsi)*1]), &(stack[((hsi*143+43703)*1+lsi)*1]), &(stack[((hsi*143+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+30492)*1+lsi)*1]),&(stack[((hsi*4356+52701)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+57057)*1+lsi)*1]), &(stack[((hsi*143+43846)*1+lsi)*1]), &(stack[((hsi*143+43703)*1+lsi)*1]), &(stack[((hsi*143+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+26136)*1+lsi)*1]),&(stack[((hsi*4356+57057)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+61413)*1+lsi)*1]), &(stack[((hsi*143+43846)*1+lsi)*1]), &(stack[((hsi*143+43703)*1+lsi)*1]), &(stack[((hsi*143+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+21780)*1+lsi)*1]),&(stack[((hsi*4356+61413)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+65769)*1+lsi)*1]), &(stack[((hsi*143+43846)*1+lsi)*1]), &(stack[((hsi*143+43703)*1+lsi)*1]), &(stack[((hsi*143+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+17424)*1+lsi)*1]),&(stack[((hsi*4356+65769)*1+lsi)*1]),4356);
CR_aB_Z10__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*132+43560)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*132+43692)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*132+43824)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+70125)*1+lsi)*1]), &(stack[((hsi*132+43824)*1+lsi)*1]), &(stack[((hsi*132+43692)*1+lsi)*1]), &(stack[((hsi*132+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+13068)*1+lsi)*1]),&(stack[((hsi*4356+70125)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+74481)*1+lsi)*1]), &(stack[((hsi*132+43824)*1+lsi)*1]), &(stack[((hsi*132+43692)*1+lsi)*1]), &(stack[((hsi*132+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+8712)*1+lsi)*1]),&(stack[((hsi*4356+74481)*1+lsi)*1]),4356);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+78837)*1+lsi)*1]), &(stack[((hsi*132+43824)*1+lsi)*1]), &(stack[((hsi*132+43692)*1+lsi)*1]), &(stack[((hsi*132+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+4356)*1+lsi)*1]),&(stack[((hsi*4356+78837)*1+lsi)*1]),4356);
CR_aB_Z10__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*121+43560)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*121+43681)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*121+43802)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*4356+83193)*1+lsi)*1]), &(stack[((hsi*121+43802)*1+lsi)*1]), &(stack[((hsi*121+43681)*1+lsi)*1]), &(stack[((hsi*121+43560)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*4356+0)*1+lsi)*1]),&(stack[((hsi*4356+83193)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 43560 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
