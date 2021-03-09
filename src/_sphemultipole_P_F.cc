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
#include <HRRPart0ket0bra0fp.h>
#include <_sphemultipole_P_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_P_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,625)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1345)*1+lsi)*1]), &(inteval->stack[((hsi*15+360)*1+lsi)*1]), &(inteval->stack[((hsi*10+615)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1315)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]), &(inteval->stack[((hsi*10+605)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1285)*1+lsi)*1]), &(inteval->stack[((hsi*15+330)*1+lsi)*1]), &(inteval->stack[((hsi*10+595)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1255)*1+lsi)*1]), &(inteval->stack[((hsi*15+315)*1+lsi)*1]), &(inteval->stack[((hsi*10+585)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1225)*1+lsi)*1]), &(inteval->stack[((hsi*15+300)*1+lsi)*1]), &(inteval->stack[((hsi*10+575)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1195)*1+lsi)*1]), &(inteval->stack[((hsi*15+285)*1+lsi)*1]), &(inteval->stack[((hsi*10+565)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1165)*1+lsi)*1]), &(inteval->stack[((hsi*15+270)*1+lsi)*1]), &(inteval->stack[((hsi*10+555)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1135)*1+lsi)*1]), &(inteval->stack[((hsi*15+255)*1+lsi)*1]), &(inteval->stack[((hsi*10+545)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1105)*1+lsi)*1]), &(inteval->stack[((hsi*15+240)*1+lsi)*1]), &(inteval->stack[((hsi*10+535)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1075)*1+lsi)*1]), &(inteval->stack[((hsi*15+225)*1+lsi)*1]), &(inteval->stack[((hsi*10+525)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1045)*1+lsi)*1]), &(inteval->stack[((hsi*15+210)*1+lsi)*1]), &(inteval->stack[((hsi*10+515)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1015)*1+lsi)*1]), &(inteval->stack[((hsi*15+195)*1+lsi)*1]), &(inteval->stack[((hsi*10+505)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+985)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*10+495)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+955)*1+lsi)*1]), &(inteval->stack[((hsi*15+165)*1+lsi)*1]), &(inteval->stack[((hsi*10+485)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+925)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]), &(inteval->stack[((hsi*10+475)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+895)*1+lsi)*1]), &(inteval->stack[((hsi*15+135)*1+lsi)*1]), &(inteval->stack[((hsi*10+465)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+865)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]), &(inteval->stack[((hsi*10+455)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+835)*1+lsi)*1]), &(inteval->stack[((hsi*15+105)*1+lsi)*1]), &(inteval->stack[((hsi*10+445)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+805)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*10+435)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+775)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*10+425)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+745)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*10+415)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+715)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]), &(inteval->stack[((hsi*10+405)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+685)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*10+395)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+655)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]), &(inteval->stack[((hsi*10+385)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+625)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]), &(inteval->stack[((hsi*10+375)*1+lsi)*1]),1);
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
