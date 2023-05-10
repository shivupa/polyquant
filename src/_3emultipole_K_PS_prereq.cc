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
#include <CR_aB_X7__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X11__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X12__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X13__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y11__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y12__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y13__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z11__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z12__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z13__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__ps__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__ps__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_K_PS_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z13__0___Ab__up_(inteval, &(stack[((hsi*112+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y13__0___Ab__up_(inteval, &(stack[((hsi*112+47632)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X13__0___Ab__up_(inteval, &(stack[((hsi*112+47744)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+47856)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+45144)*1+lsi)*1]),&(stack[((hsi*2376+47856)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_2_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+50232)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+42768)*1+lsi)*1]),&(stack[((hsi*2376+50232)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_2_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+52608)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+40392)*1+lsi)*1]),&(stack[((hsi*2376+52608)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+54984)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+38016)*1+lsi)*1]),&(stack[((hsi*2376+54984)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_1_c_2_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+57360)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+35640)*1+lsi)*1]),&(stack[((hsi*2376+57360)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+59736)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+33264)*1+lsi)*1]),&(stack[((hsi*2376+59736)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_2_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+62112)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+30888)*1+lsi)*1]),&(stack[((hsi*2376+62112)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_3_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+64488)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+28512)*1+lsi)*1]),&(stack[((hsi*2376+64488)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_0_c_3_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+66864)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+26136)*1+lsi)*1]),&(stack[((hsi*2376+66864)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_3_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+69240)*1+lsi)*1]), &(stack[((hsi*112+47744)*1+lsi)*1]), &(stack[((hsi*112+47632)*1+lsi)*1]), &(stack[((hsi*112+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+23760)*1+lsi)*1]),&(stack[((hsi*2376+69240)*1+lsi)*1]),2376);
CR_aB_Z7__0___Overlap_Z12__0___Ab__up_(inteval, &(stack[((hsi*104+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y12__0___Ab__up_(inteval, &(stack[((hsi*104+47624)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X12__0___Ab__up_(inteval, &(stack[((hsi*104+47728)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+71616)*1+lsi)*1]), &(stack[((hsi*104+47728)*1+lsi)*1]), &(stack[((hsi*104+47624)*1+lsi)*1]), &(stack[((hsi*104+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+21384)*1+lsi)*1]),&(stack[((hsi*2376+71616)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+73992)*1+lsi)*1]), &(stack[((hsi*104+47728)*1+lsi)*1]), &(stack[((hsi*104+47624)*1+lsi)*1]), &(stack[((hsi*104+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+19008)*1+lsi)*1]),&(stack[((hsi*2376+73992)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_1_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+76368)*1+lsi)*1]), &(stack[((hsi*104+47728)*1+lsi)*1]), &(stack[((hsi*104+47624)*1+lsi)*1]), &(stack[((hsi*104+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+16632)*1+lsi)*1]),&(stack[((hsi*2376+76368)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+78744)*1+lsi)*1]), &(stack[((hsi*104+47728)*1+lsi)*1]), &(stack[((hsi*104+47624)*1+lsi)*1]), &(stack[((hsi*104+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+14256)*1+lsi)*1]),&(stack[((hsi*2376+78744)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+81120)*1+lsi)*1]), &(stack[((hsi*104+47728)*1+lsi)*1]), &(stack[((hsi*104+47624)*1+lsi)*1]), &(stack[((hsi*104+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+11880)*1+lsi)*1]),&(stack[((hsi*2376+81120)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_2_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+83496)*1+lsi)*1]), &(stack[((hsi*104+47728)*1+lsi)*1]), &(stack[((hsi*104+47624)*1+lsi)*1]), &(stack[((hsi*104+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+9504)*1+lsi)*1]),&(stack[((hsi*2376+83496)*1+lsi)*1]),2376);
CR_aB_Z7__0___Overlap_Z11__0___Ab__up_(inteval, &(stack[((hsi*96+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y11__0___Ab__up_(inteval, &(stack[((hsi*96+47616)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X11__0___Ab__up_(inteval, &(stack[((hsi*96+47712)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+85872)*1+lsi)*1]), &(stack[((hsi*96+47712)*1+lsi)*1]), &(stack[((hsi*96+47616)*1+lsi)*1]), &(stack[((hsi*96+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+7128)*1+lsi)*1]),&(stack[((hsi*2376+85872)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_0_c_1_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+88248)*1+lsi)*1]), &(stack[((hsi*96+47712)*1+lsi)*1]), &(stack[((hsi*96+47616)*1+lsi)*1]), &(stack[((hsi*96+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+4752)*1+lsi)*1]),&(stack[((hsi*2376+88248)*1+lsi)*1]),2376);
CR_aB_k__0___CartesianMultipole_sB_1_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+90624)*1+lsi)*1]), &(stack[((hsi*96+47712)*1+lsi)*1]), &(stack[((hsi*96+47616)*1+lsi)*1]), &(stack[((hsi*96+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+2376)*1+lsi)*1]),&(stack[((hsi*2376+90624)*1+lsi)*1]),2376);
CR_aB_Z7__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*88+47520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*88+47608)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*88+47696)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__ps__0___Ab__up_(inteval, &(stack[((hsi*2376+93000)*1+lsi)*1]), &(stack[((hsi*88+47696)*1+lsi)*1]), &(stack[((hsi*88+47608)*1+lsi)*1]), &(stack[((hsi*88+47520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*2376+0)*1+lsi)*1]),&(stack[((hsi*2376+93000)*1+lsi)*1]),2376);
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
