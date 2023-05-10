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
#include <CR_aB_X1__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_P_L_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*24+2700)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*24+2724)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*24+2748)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+2772)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+2565)*1+lsi)*1]),&(stack[((hsi*135+2772)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+2907)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+2430)*1+lsi)*1]),&(stack[((hsi*135+2907)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3042)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+2295)*1+lsi)*1]),&(stack[((hsi*135+3042)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3177)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+2160)*1+lsi)*1]),&(stack[((hsi*135+3177)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3312)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+2025)*1+lsi)*1]),&(stack[((hsi*135+3312)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3447)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+1890)*1+lsi)*1]),&(stack[((hsi*135+3447)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3582)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+1755)*1+lsi)*1]),&(stack[((hsi*135+3582)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_3_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3717)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+1620)*1+lsi)*1]),&(stack[((hsi*135+3717)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3852)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+1485)*1+lsi)*1]),&(stack[((hsi*135+3852)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+3987)*1+lsi)*1]), &(stack[((hsi*24+2748)*1+lsi)*1]), &(stack[((hsi*24+2724)*1+lsi)*1]), &(stack[((hsi*24+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+1350)*1+lsi)*1]),&(stack[((hsi*135+3987)*1+lsi)*1]),135);
CR_aB_Z1__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*22+2700)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*22+2722)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*22+2744)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+4122)*1+lsi)*1]), &(stack[((hsi*22+2744)*1+lsi)*1]), &(stack[((hsi*22+2722)*1+lsi)*1]), &(stack[((hsi*22+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+1215)*1+lsi)*1]),&(stack[((hsi*135+4122)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+4257)*1+lsi)*1]), &(stack[((hsi*22+2744)*1+lsi)*1]), &(stack[((hsi*22+2722)*1+lsi)*1]), &(stack[((hsi*22+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+1080)*1+lsi)*1]),&(stack[((hsi*135+4257)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+4392)*1+lsi)*1]), &(stack[((hsi*22+2744)*1+lsi)*1]), &(stack[((hsi*22+2722)*1+lsi)*1]), &(stack[((hsi*22+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+945)*1+lsi)*1]),&(stack[((hsi*135+4392)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+4527)*1+lsi)*1]), &(stack[((hsi*22+2744)*1+lsi)*1]), &(stack[((hsi*22+2722)*1+lsi)*1]), &(stack[((hsi*22+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+810)*1+lsi)*1]),&(stack[((hsi*135+4527)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+4662)*1+lsi)*1]), &(stack[((hsi*22+2744)*1+lsi)*1]), &(stack[((hsi*22+2722)*1+lsi)*1]), &(stack[((hsi*22+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+675)*1+lsi)*1]),&(stack[((hsi*135+4662)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+4797)*1+lsi)*1]), &(stack[((hsi*22+2744)*1+lsi)*1]), &(stack[((hsi*22+2722)*1+lsi)*1]), &(stack[((hsi*22+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+540)*1+lsi)*1]),&(stack[((hsi*135+4797)*1+lsi)*1]),135);
CR_aB_Z1__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*20+2700)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*20+2720)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*20+2740)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+4932)*1+lsi)*1]), &(stack[((hsi*20+2740)*1+lsi)*1]), &(stack[((hsi*20+2720)*1+lsi)*1]), &(stack[((hsi*20+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+405)*1+lsi)*1]),&(stack[((hsi*135+4932)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_0_c_1_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+5067)*1+lsi)*1]), &(stack[((hsi*20+2740)*1+lsi)*1]), &(stack[((hsi*20+2720)*1+lsi)*1]), &(stack[((hsi*20+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+270)*1+lsi)*1]),&(stack[((hsi*135+5067)*1+lsi)*1]),135);
CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+5202)*1+lsi)*1]), &(stack[((hsi*20+2740)*1+lsi)*1]), &(stack[((hsi*20+2720)*1+lsi)*1]), &(stack[((hsi*20+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+135)*1+lsi)*1]),&(stack[((hsi*135+5202)*1+lsi)*1]),135);
CR_aB_Z1__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*18+2700)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*18+2718)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*18+2736)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__l__0___Ab__up_(inteval, &(stack[((hsi*135+5337)*1+lsi)*1]), &(stack[((hsi*18+2736)*1+lsi)*1]), &(stack[((hsi*18+2718)*1+lsi)*1]), &(stack[((hsi*18+2700)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*135+0)*1+lsi)*1]),&(stack[((hsi*135+5337)*1+lsi)*1]),135);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2700 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
