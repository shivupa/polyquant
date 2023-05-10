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
#include <CR_aB_X10__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X10__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y10__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z10__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_PS_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z10__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*121+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*121+47641)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*121+47762)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+47883)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+45144)*1+lsi)*1]),&(stack[((hsi*2376+47883)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+50259)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+42768)*1+lsi)*1]),&(stack[((hsi*2376+50259)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+52635)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+40392)*1+lsi)*1]),&(stack[((hsi*2376+52635)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+55011)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+38016)*1+lsi)*1]),&(stack[((hsi*2376+55011)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_1_c_2_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+57387)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+35640)*1+lsi)*1]),&(stack[((hsi*2376+57387)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+59763)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+33264)*1+lsi)*1]),&(stack[((hsi*2376+59763)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_2_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+62139)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+30888)*1+lsi)*1]),&(stack[((hsi*2376+62139)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+64515)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+28512)*1+lsi)*1]),&(stack[((hsi*2376+64515)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_0_c_3_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+66891)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+26136)*1+lsi)*1]),&(stack[((hsi*2376+66891)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_3_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+69267)*1+lsi)*1]), &(stack[((hsi*121+47762)*1+lsi)*1]), &(stack[((hsi*121+47641)*1+lsi)*1]), &(stack[((hsi*121+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+23760)*1+lsi)*1]),&(stack[((hsi*2376+69267)*1+lsi)*1]),2376);
CR_aB_Z10__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*110+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*110+47630)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*110+47740)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+71643)*1+lsi)*1]), &(stack[((hsi*110+47740)*1+lsi)*1]), &(stack[((hsi*110+47630)*1+lsi)*1]), &(stack[((hsi*110+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+21384)*1+lsi)*1]),&(stack[((hsi*2376+71643)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+74019)*1+lsi)*1]), &(stack[((hsi*110+47740)*1+lsi)*1]), &(stack[((hsi*110+47630)*1+lsi)*1]), &(stack[((hsi*110+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+19008)*1+lsi)*1]),&(stack[((hsi*2376+74019)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_1_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+76395)*1+lsi)*1]), &(stack[((hsi*110+47740)*1+lsi)*1]), &(stack[((hsi*110+47630)*1+lsi)*1]), &(stack[((hsi*110+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+16632)*1+lsi)*1]),&(stack[((hsi*2376+76395)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+78771)*1+lsi)*1]), &(stack[((hsi*110+47740)*1+lsi)*1]), &(stack[((hsi*110+47630)*1+lsi)*1]), &(stack[((hsi*110+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+14256)*1+lsi)*1]),&(stack[((hsi*2376+78771)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_0_c_2_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+81147)*1+lsi)*1]), &(stack[((hsi*110+47740)*1+lsi)*1]), &(stack[((hsi*110+47630)*1+lsi)*1]), &(stack[((hsi*110+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+11880)*1+lsi)*1]),&(stack[((hsi*2376+81147)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_2_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+83523)*1+lsi)*1]), &(stack[((hsi*110+47740)*1+lsi)*1]), &(stack[((hsi*110+47630)*1+lsi)*1]), &(stack[((hsi*110+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+9504)*1+lsi)*1]),&(stack[((hsi*2376+83523)*1+lsi)*1]),2376);
CR_aB_Z10__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*99+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*99+47619)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*99+47718)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+85899)*1+lsi)*1]), &(stack[((hsi*99+47718)*1+lsi)*1]), &(stack[((hsi*99+47619)*1+lsi)*1]), &(stack[((hsi*99+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+7128)*1+lsi)*1]),&(stack[((hsi*2376+85899)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_0_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+88275)*1+lsi)*1]), &(stack[((hsi*99+47718)*1+lsi)*1]), &(stack[((hsi*99+47619)*1+lsi)*1]), &(stack[((hsi*99+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+4752)*1+lsi)*1]),&(stack[((hsi*2376+88275)*1+lsi)*1]),2376);
CR_aB_ps__0___CartesianMultipole_sB_1_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+90651)*1+lsi)*1]), &(stack[((hsi*99+47718)*1+lsi)*1]), &(stack[((hsi*99+47619)*1+lsi)*1]), &(stack[((hsi*99+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+2376)*1+lsi)*1]),&(stack[((hsi*2376+90651)*1+lsi)*1]),2376);
CR_aB_Z10__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*88+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y10__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*88+47608)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X10__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*88+47696)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*2376+93027)*1+lsi)*1]), &(stack[((hsi*88+47696)*1+lsi)*1]), &(stack[((hsi*88+47608)*1+lsi)*1]), &(stack[((hsi*88+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+0)*1+lsi)*1]),&(stack[((hsi*2376+93027)*1+lsi)*1]),2376);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 47520 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
