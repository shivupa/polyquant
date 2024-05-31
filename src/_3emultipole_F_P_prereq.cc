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
#include <CR_aB_X3__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_F_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*20+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*20+620)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*20+640)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+660)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+570)*1+lsi)*1]),&(stack[((hsi*30+660)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+690)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+540)*1+lsi)*1]),&(stack[((hsi*30+690)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+720)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+510)*1+lsi)*1]),&(stack[((hsi*30+720)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+750)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+480)*1+lsi)*1]),&(stack[((hsi*30+750)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+780)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+450)*1+lsi)*1]),&(stack[((hsi*30+780)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+810)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+420)*1+lsi)*1]),&(stack[((hsi*30+810)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+840)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+390)*1+lsi)*1]),&(stack[((hsi*30+840)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+870)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+360)*1+lsi)*1]),&(stack[((hsi*30+870)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+900)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+330)*1+lsi)*1]),&(stack[((hsi*30+900)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+930)*1+lsi)*1]), &(stack[((hsi*20+640)*1+lsi)*1]), &(stack[((hsi*20+620)*1+lsi)*1]), &(stack[((hsi*20+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+300)*1+lsi)*1]),&(stack[((hsi*30+930)*1+lsi)*1]),30);
CR_aB_Z3__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*16+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*16+616)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*16+632)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+960)*1+lsi)*1]), &(stack[((hsi*16+632)*1+lsi)*1]), &(stack[((hsi*16+616)*1+lsi)*1]), &(stack[((hsi*16+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+270)*1+lsi)*1]),&(stack[((hsi*30+960)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+990)*1+lsi)*1]), &(stack[((hsi*16+632)*1+lsi)*1]), &(stack[((hsi*16+616)*1+lsi)*1]), &(stack[((hsi*16+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+240)*1+lsi)*1]),&(stack[((hsi*30+990)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+1020)*1+lsi)*1]), &(stack[((hsi*16+632)*1+lsi)*1]), &(stack[((hsi*16+616)*1+lsi)*1]), &(stack[((hsi*16+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+210)*1+lsi)*1]),&(stack[((hsi*30+1020)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+1050)*1+lsi)*1]), &(stack[((hsi*16+632)*1+lsi)*1]), &(stack[((hsi*16+616)*1+lsi)*1]), &(stack[((hsi*16+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+180)*1+lsi)*1]),&(stack[((hsi*30+1050)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+1080)*1+lsi)*1]), &(stack[((hsi*16+632)*1+lsi)*1]), &(stack[((hsi*16+616)*1+lsi)*1]), &(stack[((hsi*16+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+150)*1+lsi)*1]),&(stack[((hsi*30+1080)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+1110)*1+lsi)*1]), &(stack[((hsi*16+632)*1+lsi)*1]), &(stack[((hsi*16+616)*1+lsi)*1]), &(stack[((hsi*16+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+120)*1+lsi)*1]),&(stack[((hsi*30+1110)*1+lsi)*1]),30);
CR_aB_Z3__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*12+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*12+612)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*12+624)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+1140)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+90)*1+lsi)*1]),&(stack[((hsi*30+1140)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+1170)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+60)*1+lsi)*1]),&(stack[((hsi*30+1170)*1+lsi)*1]),30);
CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+1200)*1+lsi)*1]), &(stack[((hsi*12+624)*1+lsi)*1]), &(stack[((hsi*12+612)*1+lsi)*1]), &(stack[((hsi*12+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+30)*1+lsi)*1]),&(stack[((hsi*30+1200)*1+lsi)*1]),30);
CR_aB_Z3__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*8+600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*8+608)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*8+616)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*30+624)*1+lsi)*1]), &(stack[((hsi*8+616)*1+lsi)*1]), &(stack[((hsi*8+608)*1+lsi)*1]), &(stack[((hsi*8+600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(stack[((hsi*30+624)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 600 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
