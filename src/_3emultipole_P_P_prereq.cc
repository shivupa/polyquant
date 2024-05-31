/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <CR_aB_X1__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_P_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*10+180)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*10+190)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*10+200)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+210)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+171)*1+lsi)*1]),&(stack[((hsi*9+210)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+219)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+162)*1+lsi)*1]),&(stack[((hsi*9+219)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+228)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+153)*1+lsi)*1]),&(stack[((hsi*9+228)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+237)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+144)*1+lsi)*1]),&(stack[((hsi*9+237)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+246)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+135)*1+lsi)*1]),&(stack[((hsi*9+246)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+255)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+126)*1+lsi)*1]),&(stack[((hsi*9+255)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+264)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+117)*1+lsi)*1]),&(stack[((hsi*9+264)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+273)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+108)*1+lsi)*1]),&(stack[((hsi*9+273)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+282)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+99)*1+lsi)*1]),&(stack[((hsi*9+282)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+291)*1+lsi)*1]), &(stack[((hsi*10+200)*1+lsi)*1]), &(stack[((hsi*10+190)*1+lsi)*1]), &(stack[((hsi*10+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+90)*1+lsi)*1]),&(stack[((hsi*9+291)*1+lsi)*1]),9);
CR_aB_Z1__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*8+180)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*8+188)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*8+196)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+300)*1+lsi)*1]), &(stack[((hsi*8+196)*1+lsi)*1]), &(stack[((hsi*8+188)*1+lsi)*1]), &(stack[((hsi*8+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+81)*1+lsi)*1]),&(stack[((hsi*9+300)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+309)*1+lsi)*1]), &(stack[((hsi*8+196)*1+lsi)*1]), &(stack[((hsi*8+188)*1+lsi)*1]), &(stack[((hsi*8+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+72)*1+lsi)*1]),&(stack[((hsi*9+309)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+318)*1+lsi)*1]), &(stack[((hsi*8+196)*1+lsi)*1]), &(stack[((hsi*8+188)*1+lsi)*1]), &(stack[((hsi*8+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+63)*1+lsi)*1]),&(stack[((hsi*9+318)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+327)*1+lsi)*1]), &(stack[((hsi*8+196)*1+lsi)*1]), &(stack[((hsi*8+188)*1+lsi)*1]), &(stack[((hsi*8+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+54)*1+lsi)*1]),&(stack[((hsi*9+327)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+336)*1+lsi)*1]), &(stack[((hsi*8+196)*1+lsi)*1]), &(stack[((hsi*8+188)*1+lsi)*1]), &(stack[((hsi*8+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+45)*1+lsi)*1]),&(stack[((hsi*9+336)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+345)*1+lsi)*1]), &(stack[((hsi*8+196)*1+lsi)*1]), &(stack[((hsi*8+188)*1+lsi)*1]), &(stack[((hsi*8+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+36)*1+lsi)*1]),&(stack[((hsi*9+345)*1+lsi)*1]),9);
CR_aB_Z1__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*6+180)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*6+186)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*6+192)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+198)*1+lsi)*1]), &(stack[((hsi*6+192)*1+lsi)*1]), &(stack[((hsi*6+186)*1+lsi)*1]), &(stack[((hsi*6+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+27)*1+lsi)*1]),&(stack[((hsi*9+198)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+354)*1+lsi)*1]), &(stack[((hsi*6+192)*1+lsi)*1]), &(stack[((hsi*6+186)*1+lsi)*1]), &(stack[((hsi*6+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+18)*1+lsi)*1]),&(stack[((hsi*9+354)*1+lsi)*1]),9);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+363)*1+lsi)*1]), &(stack[((hsi*6+192)*1+lsi)*1]), &(stack[((hsi*6+186)*1+lsi)*1]), &(stack[((hsi*6+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+9)*1+lsi)*1]),&(stack[((hsi*9+363)*1+lsi)*1]),9);
CR_aB_Z1__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*4+180)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*4+184)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*4+188)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*9+372)*1+lsi)*1]), &(stack[((hsi*4+188)*1+lsi)*1]), &(stack[((hsi*4+184)*1+lsi)*1]), &(stack[((hsi*4+180)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*9+0)*1+lsi)*1]),&(stack[((hsi*9+372)*1+lsi)*1]),9);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 180 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
