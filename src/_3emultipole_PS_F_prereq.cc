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
#include <CR_aB_X10__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_PS_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*77+13200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*77+13277)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*77+13354)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+13431)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+12540)*1+lsi)*1]),&(stack[((hsi*660+13431)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+14091)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+11880)*1+lsi)*1]),&(stack[((hsi*660+14091)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+14751)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+11220)*1+lsi)*1]),&(stack[((hsi*660+14751)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+15411)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+10560)*1+lsi)*1]),&(stack[((hsi*660+15411)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+16071)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+9900)*1+lsi)*1]),&(stack[((hsi*660+16071)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+16731)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+9240)*1+lsi)*1]),&(stack[((hsi*660+16731)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+17391)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+8580)*1+lsi)*1]),&(stack[((hsi*660+17391)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+18051)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+7920)*1+lsi)*1]),&(stack[((hsi*660+18051)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+18711)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+7260)*1+lsi)*1]),&(stack[((hsi*660+18711)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+19371)*1+lsi)*1]), &(stack[((hsi*77+13354)*1+lsi)*1]), &(stack[((hsi*77+13277)*1+lsi)*1]), &(stack[((hsi*77+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+6600)*1+lsi)*1]),&(stack[((hsi*660+19371)*1+lsi)*1]),660);
CR_aB_Z10__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*66+13200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*66+13266)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*66+13332)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+20031)*1+lsi)*1]), &(stack[((hsi*66+13332)*1+lsi)*1]), &(stack[((hsi*66+13266)*1+lsi)*1]), &(stack[((hsi*66+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+5940)*1+lsi)*1]),&(stack[((hsi*660+20031)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+20691)*1+lsi)*1]), &(stack[((hsi*66+13332)*1+lsi)*1]), &(stack[((hsi*66+13266)*1+lsi)*1]), &(stack[((hsi*66+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+5280)*1+lsi)*1]),&(stack[((hsi*660+20691)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+21351)*1+lsi)*1]), &(stack[((hsi*66+13332)*1+lsi)*1]), &(stack[((hsi*66+13266)*1+lsi)*1]), &(stack[((hsi*66+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+4620)*1+lsi)*1]),&(stack[((hsi*660+21351)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+22011)*1+lsi)*1]), &(stack[((hsi*66+13332)*1+lsi)*1]), &(stack[((hsi*66+13266)*1+lsi)*1]), &(stack[((hsi*66+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+3960)*1+lsi)*1]),&(stack[((hsi*660+22011)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+22671)*1+lsi)*1]), &(stack[((hsi*66+13332)*1+lsi)*1]), &(stack[((hsi*66+13266)*1+lsi)*1]), &(stack[((hsi*66+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+3300)*1+lsi)*1]),&(stack[((hsi*660+22671)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+23331)*1+lsi)*1]), &(stack[((hsi*66+13332)*1+lsi)*1]), &(stack[((hsi*66+13266)*1+lsi)*1]), &(stack[((hsi*66+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+2640)*1+lsi)*1]),&(stack[((hsi*660+23331)*1+lsi)*1]),660);
CR_aB_Z10__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*55+13200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*55+13255)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*55+13310)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+23991)*1+lsi)*1]), &(stack[((hsi*55+13310)*1+lsi)*1]), &(stack[((hsi*55+13255)*1+lsi)*1]), &(stack[((hsi*55+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+1980)*1+lsi)*1]),&(stack[((hsi*660+23991)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+24651)*1+lsi)*1]), &(stack[((hsi*55+13310)*1+lsi)*1]), &(stack[((hsi*55+13255)*1+lsi)*1]), &(stack[((hsi*55+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+1320)*1+lsi)*1]),&(stack[((hsi*660+24651)*1+lsi)*1]),660);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+25311)*1+lsi)*1]), &(stack[((hsi*55+13310)*1+lsi)*1]), &(stack[((hsi*55+13255)*1+lsi)*1]), &(stack[((hsi*55+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+660)*1+lsi)*1]),&(stack[((hsi*660+25311)*1+lsi)*1]),660);
CR_aB_Z10__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*44+13200)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*44+13244)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*44+13288)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*660+25971)*1+lsi)*1]), &(stack[((hsi*44+13288)*1+lsi)*1]), &(stack[((hsi*44+13244)*1+lsi)*1]), &(stack[((hsi*44+13200)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*660+0)*1+lsi)*1]),&(stack[((hsi*660+25971)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 13200 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
