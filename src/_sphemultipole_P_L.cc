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
#include <HRRPart0ket0bra0lp.h>
#include <_sphemultipole_P_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_P_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5740)*1+lsi)*1]), &(inteval->stack[((hsi*55+1320)*1+lsi)*1]), &(inteval->stack[((hsi*45+2455)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5605)*1+lsi)*1]), &(inteval->stack[((hsi*55+1265)*1+lsi)*1]), &(inteval->stack[((hsi*45+2410)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5470)*1+lsi)*1]), &(inteval->stack[((hsi*55+1210)*1+lsi)*1]), &(inteval->stack[((hsi*45+2365)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5335)*1+lsi)*1]), &(inteval->stack[((hsi*55+1155)*1+lsi)*1]), &(inteval->stack[((hsi*45+2320)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5200)*1+lsi)*1]), &(inteval->stack[((hsi*55+1100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5065)*1+lsi)*1]), &(inteval->stack[((hsi*55+1045)*1+lsi)*1]), &(inteval->stack[((hsi*45+2230)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4930)*1+lsi)*1]), &(inteval->stack[((hsi*55+990)*1+lsi)*1]), &(inteval->stack[((hsi*45+2185)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4795)*1+lsi)*1]), &(inteval->stack[((hsi*55+935)*1+lsi)*1]), &(inteval->stack[((hsi*45+2140)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4660)*1+lsi)*1]), &(inteval->stack[((hsi*55+880)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4525)*1+lsi)*1]), &(inteval->stack[((hsi*55+825)*1+lsi)*1]), &(inteval->stack[((hsi*45+2050)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4390)*1+lsi)*1]), &(inteval->stack[((hsi*55+770)*1+lsi)*1]), &(inteval->stack[((hsi*45+2005)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4255)*1+lsi)*1]), &(inteval->stack[((hsi*55+715)*1+lsi)*1]), &(inteval->stack[((hsi*45+1960)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4120)*1+lsi)*1]), &(inteval->stack[((hsi*55+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+1915)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3985)*1+lsi)*1]), &(inteval->stack[((hsi*55+605)*1+lsi)*1]), &(inteval->stack[((hsi*45+1870)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3850)*1+lsi)*1]), &(inteval->stack[((hsi*55+550)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3715)*1+lsi)*1]), &(inteval->stack[((hsi*55+495)*1+lsi)*1]), &(inteval->stack[((hsi*45+1780)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3580)*1+lsi)*1]), &(inteval->stack[((hsi*55+440)*1+lsi)*1]), &(inteval->stack[((hsi*45+1735)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3445)*1+lsi)*1]), &(inteval->stack[((hsi*55+385)*1+lsi)*1]), &(inteval->stack[((hsi*45+1690)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3310)*1+lsi)*1]), &(inteval->stack[((hsi*55+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+1645)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3175)*1+lsi)*1]), &(inteval->stack[((hsi*55+275)*1+lsi)*1]), &(inteval->stack[((hsi*45+1600)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3040)*1+lsi)*1]), &(inteval->stack[((hsi*55+220)*1+lsi)*1]), &(inteval->stack[((hsi*45+1555)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2905)*1+lsi)*1]), &(inteval->stack[((hsi*55+165)*1+lsi)*1]), &(inteval->stack[((hsi*45+1510)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2770)*1+lsi)*1]), &(inteval->stack[((hsi*55+110)*1+lsi)*1]), &(inteval->stack[((hsi*45+1465)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2635)*1+lsi)*1]), &(inteval->stack[((hsi*55+55)*1+lsi)*1]), &(inteval->stack[((hsi*45+1420)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2500)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+1375)*1+lsi)*1]),1);
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
