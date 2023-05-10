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
#include <HRRPart0bra0ket0lp.h>
#include <_sphemultipole_L_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_L_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_L_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5740)*1+lsi)*1]), &(inteval->stack[((hsi*55+2400)*1+lsi)*1]), &(inteval->stack[((hsi*45+2455)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5605)*1+lsi)*1]), &(inteval->stack[((hsi*55+2300)*1+lsi)*1]), &(inteval->stack[((hsi*45+2355)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5470)*1+lsi)*1]), &(inteval->stack[((hsi*55+2200)*1+lsi)*1]), &(inteval->stack[((hsi*45+2255)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5335)*1+lsi)*1]), &(inteval->stack[((hsi*55+2100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2155)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5200)*1+lsi)*1]), &(inteval->stack[((hsi*55+2000)*1+lsi)*1]), &(inteval->stack[((hsi*45+2055)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5065)*1+lsi)*1]), &(inteval->stack[((hsi*55+1900)*1+lsi)*1]), &(inteval->stack[((hsi*45+1955)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4930)*1+lsi)*1]), &(inteval->stack[((hsi*55+1800)*1+lsi)*1]), &(inteval->stack[((hsi*45+1855)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4795)*1+lsi)*1]), &(inteval->stack[((hsi*55+1700)*1+lsi)*1]), &(inteval->stack[((hsi*45+1755)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4660)*1+lsi)*1]), &(inteval->stack[((hsi*55+1600)*1+lsi)*1]), &(inteval->stack[((hsi*45+1655)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4525)*1+lsi)*1]), &(inteval->stack[((hsi*55+1500)*1+lsi)*1]), &(inteval->stack[((hsi*45+1555)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4390)*1+lsi)*1]), &(inteval->stack[((hsi*55+1400)*1+lsi)*1]), &(inteval->stack[((hsi*45+1455)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4255)*1+lsi)*1]), &(inteval->stack[((hsi*55+1300)*1+lsi)*1]), &(inteval->stack[((hsi*45+1355)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4120)*1+lsi)*1]), &(inteval->stack[((hsi*55+1200)*1+lsi)*1]), &(inteval->stack[((hsi*45+1255)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3985)*1+lsi)*1]), &(inteval->stack[((hsi*55+1100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1155)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3850)*1+lsi)*1]), &(inteval->stack[((hsi*55+1000)*1+lsi)*1]), &(inteval->stack[((hsi*45+1055)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3715)*1+lsi)*1]), &(inteval->stack[((hsi*55+900)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3580)*1+lsi)*1]), &(inteval->stack[((hsi*55+800)*1+lsi)*1]), &(inteval->stack[((hsi*45+855)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3445)*1+lsi)*1]), &(inteval->stack[((hsi*55+700)*1+lsi)*1]), &(inteval->stack[((hsi*45+755)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3310)*1+lsi)*1]), &(inteval->stack[((hsi*55+600)*1+lsi)*1]), &(inteval->stack[((hsi*45+655)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3175)*1+lsi)*1]), &(inteval->stack[((hsi*55+500)*1+lsi)*1]), &(inteval->stack[((hsi*45+555)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3040)*1+lsi)*1]), &(inteval->stack[((hsi*55+400)*1+lsi)*1]), &(inteval->stack[((hsi*45+455)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2905)*1+lsi)*1]), &(inteval->stack[((hsi*55+300)*1+lsi)*1]), &(inteval->stack[((hsi*45+355)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2770)*1+lsi)*1]), &(inteval->stack[((hsi*55+200)*1+lsi)*1]), &(inteval->stack[((hsi*45+255)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2635)*1+lsi)*1]), &(inteval->stack[((hsi*55+100)*1+lsi)*1]), &(inteval->stack[((hsi*45+155)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2500)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*135+2500)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*135+2635)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*135+2770)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*135+2905)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*135+3040)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*135+3175)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*135+3310)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*135+3445)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*135+3580)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*135+3715)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*135+3850)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*135+3985)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*135+4120)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*135+4255)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*135+4390)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*135+4525)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*135+4660)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*135+4795)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*135+4930)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*135+5065)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*135+5200)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*135+5335)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*135+5470)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*135+5605)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*135+5740)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
