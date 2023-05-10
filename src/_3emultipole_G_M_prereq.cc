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
#include <CR_aB_X4__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X12__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_G_M_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*65+16500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*65+16565)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*65+16630)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+16695)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+15675)*1+lsi)*1]),&(stack[((hsi*825+16695)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+17520)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+14850)*1+lsi)*1]),&(stack[((hsi*825+17520)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+18345)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+14025)*1+lsi)*1]),&(stack[((hsi*825+18345)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+19170)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+13200)*1+lsi)*1]),&(stack[((hsi*825+19170)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_1_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+19995)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+12375)*1+lsi)*1]),&(stack[((hsi*825+19995)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+20820)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+11550)*1+lsi)*1]),&(stack[((hsi*825+20820)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_2_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+21645)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+10725)*1+lsi)*1]),&(stack[((hsi*825+21645)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_3_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+22470)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+9900)*1+lsi)*1]),&(stack[((hsi*825+22470)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_0_c_3_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+23295)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+9075)*1+lsi)*1]),&(stack[((hsi*825+23295)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_3_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+24120)*1+lsi)*1]), &(stack[((hsi*65+16630)*1+lsi)*1]), &(stack[((hsi*65+16565)*1+lsi)*1]), &(stack[((hsi*65+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+8250)*1+lsi)*1]),&(stack[((hsi*825+24120)*1+lsi)*1]),825);
CR_aB_Z4__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*60+16500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*60+16560)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*60+16620)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+24945)*1+lsi)*1]), &(stack[((hsi*60+16620)*1+lsi)*1]), &(stack[((hsi*60+16560)*1+lsi)*1]), &(stack[((hsi*60+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+7425)*1+lsi)*1]),&(stack[((hsi*825+24945)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+25770)*1+lsi)*1]), &(stack[((hsi*60+16620)*1+lsi)*1]), &(stack[((hsi*60+16560)*1+lsi)*1]), &(stack[((hsi*60+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+6600)*1+lsi)*1]),&(stack[((hsi*825+25770)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+26595)*1+lsi)*1]), &(stack[((hsi*60+16620)*1+lsi)*1]), &(stack[((hsi*60+16560)*1+lsi)*1]), &(stack[((hsi*60+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+5775)*1+lsi)*1]),&(stack[((hsi*825+26595)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_2_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+27420)*1+lsi)*1]), &(stack[((hsi*60+16620)*1+lsi)*1]), &(stack[((hsi*60+16560)*1+lsi)*1]), &(stack[((hsi*60+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+4950)*1+lsi)*1]),&(stack[((hsi*825+27420)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+28245)*1+lsi)*1]), &(stack[((hsi*60+16620)*1+lsi)*1]), &(stack[((hsi*60+16560)*1+lsi)*1]), &(stack[((hsi*60+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+4125)*1+lsi)*1]),&(stack[((hsi*825+28245)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+29070)*1+lsi)*1]), &(stack[((hsi*60+16620)*1+lsi)*1]), &(stack[((hsi*60+16560)*1+lsi)*1]), &(stack[((hsi*60+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+3300)*1+lsi)*1]),&(stack[((hsi*825+29070)*1+lsi)*1]),825);
CR_aB_Z4__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*55+16500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*55+16555)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*55+16610)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_1_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+29895)*1+lsi)*1]), &(stack[((hsi*55+16610)*1+lsi)*1]), &(stack[((hsi*55+16555)*1+lsi)*1]), &(stack[((hsi*55+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+2475)*1+lsi)*1]),&(stack[((hsi*825+29895)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+30720)*1+lsi)*1]), &(stack[((hsi*55+16610)*1+lsi)*1]), &(stack[((hsi*55+16555)*1+lsi)*1]), &(stack[((hsi*55+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+1650)*1+lsi)*1]),&(stack[((hsi*825+30720)*1+lsi)*1]),825);
CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+31545)*1+lsi)*1]), &(stack[((hsi*55+16610)*1+lsi)*1]), &(stack[((hsi*55+16555)*1+lsi)*1]), &(stack[((hsi*55+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+825)*1+lsi)*1]),&(stack[((hsi*825+31545)*1+lsi)*1]),825);
CR_aB_Z4__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*50+16500)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*50+16550)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*50+16600)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__m__0___Ab__up_(inteval, &(stack[((hsi*825+32370)*1+lsi)*1]), &(stack[((hsi*50+16600)*1+lsi)*1]), &(stack[((hsi*50+16550)*1+lsi)*1]), &(stack[((hsi*50+16500)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*825+0)*1+lsi)*1]),&(stack[((hsi*825+32370)*1+lsi)*1]),825);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 16500 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
