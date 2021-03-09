/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <CR_aB_X2__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_D_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*12+120)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*12+132)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*12+144)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+156)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+114)*1+lsi)*1]),&(stack[((hsi*6+156)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+162)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+108)*1+lsi)*1]),&(stack[((hsi*6+162)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+168)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+102)*1+lsi)*1]),&(stack[((hsi*6+168)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+174)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+96)*1+lsi)*1]),&(stack[((hsi*6+174)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+180)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+90)*1+lsi)*1]),&(stack[((hsi*6+180)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+186)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+84)*1+lsi)*1]),&(stack[((hsi*6+186)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+192)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+78)*1+lsi)*1]),&(stack[((hsi*6+192)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+198)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+72)*1+lsi)*1]),&(stack[((hsi*6+198)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+204)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+66)*1+lsi)*1]),&(stack[((hsi*6+204)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+210)*1+lsi)*1]), &(stack[((hsi*12+144)*1+lsi)*1]), &(stack[((hsi*12+132)*1+lsi)*1]), &(stack[((hsi*12+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+60)*1+lsi)*1]),&(stack[((hsi*6+210)*1+lsi)*1]),6);
CR_aB_Z2__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*9+120)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*9+129)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*9+138)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+147)*1+lsi)*1]), &(stack[((hsi*9+138)*1+lsi)*1]), &(stack[((hsi*9+129)*1+lsi)*1]), &(stack[((hsi*9+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+54)*1+lsi)*1]),&(stack[((hsi*6+147)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+216)*1+lsi)*1]), &(stack[((hsi*9+138)*1+lsi)*1]), &(stack[((hsi*9+129)*1+lsi)*1]), &(stack[((hsi*9+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+48)*1+lsi)*1]),&(stack[((hsi*6+216)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*9+138)*1+lsi)*1]), &(stack[((hsi*9+129)*1+lsi)*1]), &(stack[((hsi*9+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+42)*1+lsi)*1]),&(stack[((hsi*6+222)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+228)*1+lsi)*1]), &(stack[((hsi*9+138)*1+lsi)*1]), &(stack[((hsi*9+129)*1+lsi)*1]), &(stack[((hsi*9+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+36)*1+lsi)*1]),&(stack[((hsi*6+228)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+234)*1+lsi)*1]), &(stack[((hsi*9+138)*1+lsi)*1]), &(stack[((hsi*9+129)*1+lsi)*1]), &(stack[((hsi*9+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+30)*1+lsi)*1]),&(stack[((hsi*6+234)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+240)*1+lsi)*1]), &(stack[((hsi*9+138)*1+lsi)*1]), &(stack[((hsi*9+129)*1+lsi)*1]), &(stack[((hsi*9+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+24)*1+lsi)*1]),&(stack[((hsi*6+240)*1+lsi)*1]),6);
CR_aB_Z2__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*6+120)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*6+126)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*6+132)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+138)*1+lsi)*1]), &(stack[((hsi*6+132)*1+lsi)*1]), &(stack[((hsi*6+126)*1+lsi)*1]), &(stack[((hsi*6+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(stack[((hsi*6+138)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+246)*1+lsi)*1]), &(stack[((hsi*6+132)*1+lsi)*1]), &(stack[((hsi*6+126)*1+lsi)*1]), &(stack[((hsi*6+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(stack[((hsi*6+246)*1+lsi)*1]),6);
CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+252)*1+lsi)*1]), &(stack[((hsi*6+132)*1+lsi)*1]), &(stack[((hsi*6+126)*1+lsi)*1]), &(stack[((hsi*6+120)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(stack[((hsi*6+252)*1+lsi)*1]),6);
CR_aB_Z2__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*3+153)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*3+144)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*3+120)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*6+123)*1+lsi)*1]), &(stack[((hsi*3+120)*1+lsi)*1]), &(stack[((hsi*3+144)*1+lsi)*1]), &(stack[((hsi*3+153)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(stack[((hsi*6+123)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 120 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
