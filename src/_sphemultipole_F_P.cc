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
#include <HRRPart0bra0ket0fp.h>
#include <_sphemultipole_F_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_F_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,625)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1345)*1+lsi)*1]), &(inteval->stack[((hsi*15+600)*1+lsi)*1]), &(inteval->stack[((hsi*10+615)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1315)*1+lsi)*1]), &(inteval->stack[((hsi*15+575)*1+lsi)*1]), &(inteval->stack[((hsi*10+590)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1285)*1+lsi)*1]), &(inteval->stack[((hsi*15+550)*1+lsi)*1]), &(inteval->stack[((hsi*10+565)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1255)*1+lsi)*1]), &(inteval->stack[((hsi*15+525)*1+lsi)*1]), &(inteval->stack[((hsi*10+540)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1225)*1+lsi)*1]), &(inteval->stack[((hsi*15+500)*1+lsi)*1]), &(inteval->stack[((hsi*10+515)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1195)*1+lsi)*1]), &(inteval->stack[((hsi*15+475)*1+lsi)*1]), &(inteval->stack[((hsi*10+490)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1165)*1+lsi)*1]), &(inteval->stack[((hsi*15+450)*1+lsi)*1]), &(inteval->stack[((hsi*10+465)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1135)*1+lsi)*1]), &(inteval->stack[((hsi*15+425)*1+lsi)*1]), &(inteval->stack[((hsi*10+440)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1105)*1+lsi)*1]), &(inteval->stack[((hsi*15+400)*1+lsi)*1]), &(inteval->stack[((hsi*10+415)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1075)*1+lsi)*1]), &(inteval->stack[((hsi*15+375)*1+lsi)*1]), &(inteval->stack[((hsi*10+390)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1045)*1+lsi)*1]), &(inteval->stack[((hsi*15+350)*1+lsi)*1]), &(inteval->stack[((hsi*10+365)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1015)*1+lsi)*1]), &(inteval->stack[((hsi*15+325)*1+lsi)*1]), &(inteval->stack[((hsi*10+340)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+985)*1+lsi)*1]), &(inteval->stack[((hsi*15+300)*1+lsi)*1]), &(inteval->stack[((hsi*10+315)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+955)*1+lsi)*1]), &(inteval->stack[((hsi*15+275)*1+lsi)*1]), &(inteval->stack[((hsi*10+290)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+925)*1+lsi)*1]), &(inteval->stack[((hsi*15+250)*1+lsi)*1]), &(inteval->stack[((hsi*10+265)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+895)*1+lsi)*1]), &(inteval->stack[((hsi*15+225)*1+lsi)*1]), &(inteval->stack[((hsi*10+240)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+865)*1+lsi)*1]), &(inteval->stack[((hsi*15+200)*1+lsi)*1]), &(inteval->stack[((hsi*10+215)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+835)*1+lsi)*1]), &(inteval->stack[((hsi*15+175)*1+lsi)*1]), &(inteval->stack[((hsi*10+190)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+805)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]), &(inteval->stack[((hsi*10+165)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+775)*1+lsi)*1]), &(inteval->stack[((hsi*15+125)*1+lsi)*1]), &(inteval->stack[((hsi*10+140)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+745)*1+lsi)*1]), &(inteval->stack[((hsi*15+100)*1+lsi)*1]), &(inteval->stack[((hsi*10+115)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+715)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*10+90)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+685)*1+lsi)*1]), &(inteval->stack[((hsi*15+50)*1+lsi)*1]), &(inteval->stack[((hsi*10+65)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+655)*1+lsi)*1]), &(inteval->stack[((hsi*15+25)*1+lsi)*1]), &(inteval->stack[((hsi*10+40)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+625)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]), &(inteval->stack[((hsi*10+15)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*30+625)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*30+655)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*30+685)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*30+715)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*30+745)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*30+775)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*30+805)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*30+835)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*30+865)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*30+895)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*30+925)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*30+955)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*30+985)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*30+1015)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*30+1045)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*30+1075)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*30+1105)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*30+1135)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*30+1165)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*30+1195)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*30+1225)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*30+1255)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*30+1285)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*30+1315)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*30+1345)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
