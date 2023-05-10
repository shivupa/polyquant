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
#include <CR_aB_X9__0___Overlap_X10__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y10__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z10__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_M_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z9__0___Overlap_Z10__0___Ab__up_(inteval, &(stack[((hsi*110+39600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y10__0___Ab__up_(inteval, &(stack[((hsi*110+39710)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X10__0___Ab__up_(inteval, &(stack[((hsi*110+39820)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+39930)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+37620)*1+lsi)*1]),&(stack[((hsi*1980+39930)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+41910)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+35640)*1+lsi)*1]),&(stack[((hsi*1980+41910)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+43890)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+33660)*1+lsi)*1]),&(stack[((hsi*1980+43890)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+45870)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+31680)*1+lsi)*1]),&(stack[((hsi*1980+45870)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_1_c_2_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+47850)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+29700)*1+lsi)*1]),&(stack[((hsi*1980+47850)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+49830)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+27720)*1+lsi)*1]),&(stack[((hsi*1980+49830)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_2_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+51810)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+25740)*1+lsi)*1]),&(stack[((hsi*1980+51810)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_3_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+53790)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+23760)*1+lsi)*1]),&(stack[((hsi*1980+53790)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_0_c_3_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+55770)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+21780)*1+lsi)*1]),&(stack[((hsi*1980+55770)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_3_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+57750)*1+lsi)*1]), &(stack[((hsi*110+39820)*1+lsi)*1]), &(stack[((hsi*110+39710)*1+lsi)*1]), &(stack[((hsi*110+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+19800)*1+lsi)*1]),&(stack[((hsi*1980+57750)*1+lsi)*1]),1980);
CR_aB_Z9__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*100+39600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*100+39700)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*100+39800)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+59730)*1+lsi)*1]), &(stack[((hsi*100+39800)*1+lsi)*1]), &(stack[((hsi*100+39700)*1+lsi)*1]), &(stack[((hsi*100+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+17820)*1+lsi)*1]),&(stack[((hsi*1980+59730)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+61710)*1+lsi)*1]), &(stack[((hsi*100+39800)*1+lsi)*1]), &(stack[((hsi*100+39700)*1+lsi)*1]), &(stack[((hsi*100+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+15840)*1+lsi)*1]),&(stack[((hsi*1980+61710)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_1_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+63690)*1+lsi)*1]), &(stack[((hsi*100+39800)*1+lsi)*1]), &(stack[((hsi*100+39700)*1+lsi)*1]), &(stack[((hsi*100+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+13860)*1+lsi)*1]),&(stack[((hsi*1980+63690)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_2_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+65670)*1+lsi)*1]), &(stack[((hsi*100+39800)*1+lsi)*1]), &(stack[((hsi*100+39700)*1+lsi)*1]), &(stack[((hsi*100+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+11880)*1+lsi)*1]),&(stack[((hsi*1980+65670)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_0_c_2_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+67650)*1+lsi)*1]), &(stack[((hsi*100+39800)*1+lsi)*1]), &(stack[((hsi*100+39700)*1+lsi)*1]), &(stack[((hsi*100+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+9900)*1+lsi)*1]),&(stack[((hsi*1980+67650)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_2_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+69630)*1+lsi)*1]), &(stack[((hsi*100+39800)*1+lsi)*1]), &(stack[((hsi*100+39700)*1+lsi)*1]), &(stack[((hsi*100+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+7920)*1+lsi)*1]),&(stack[((hsi*1980+69630)*1+lsi)*1]),1980);
CR_aB_Z9__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*90+39600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*90+39690)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*90+39780)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_1_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+71610)*1+lsi)*1]), &(stack[((hsi*90+39780)*1+lsi)*1]), &(stack[((hsi*90+39690)*1+lsi)*1]), &(stack[((hsi*90+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+5940)*1+lsi)*1]),&(stack[((hsi*1980+71610)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_0_c_1_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+73590)*1+lsi)*1]), &(stack[((hsi*90+39780)*1+lsi)*1]), &(stack[((hsi*90+39690)*1+lsi)*1]), &(stack[((hsi*90+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+3960)*1+lsi)*1]),&(stack[((hsi*1980+73590)*1+lsi)*1]),1980);
CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+75570)*1+lsi)*1]), &(stack[((hsi*90+39780)*1+lsi)*1]), &(stack[((hsi*90+39690)*1+lsi)*1]), &(stack[((hsi*90+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+1980)*1+lsi)*1]),&(stack[((hsi*1980+75570)*1+lsi)*1]),1980);
CR_aB_Z9__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*80+39600)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*80+39680)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*80+39760)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_m__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*1980+77550)*1+lsi)*1]), &(stack[((hsi*80+39760)*1+lsi)*1]), &(stack[((hsi*80+39680)*1+lsi)*1]), &(stack[((hsi*80+39600)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1980+0)*1+lsi)*1]),&(stack[((hsi*1980+77550)*1+lsi)*1]),1980);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 39600 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
