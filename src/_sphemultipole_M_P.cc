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
#include <HRRPart0bra0ket0mp.h>
#include <_sphemultipole_M_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_M_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3025)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_M_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6985)*1+lsi)*1]), &(inteval->stack[((hsi*66+2904)*1+lsi)*1]), &(inteval->stack[((hsi*55+2970)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6820)*1+lsi)*1]), &(inteval->stack[((hsi*66+2783)*1+lsi)*1]), &(inteval->stack[((hsi*55+2849)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6655)*1+lsi)*1]), &(inteval->stack[((hsi*66+2662)*1+lsi)*1]), &(inteval->stack[((hsi*55+2728)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6490)*1+lsi)*1]), &(inteval->stack[((hsi*66+2541)*1+lsi)*1]), &(inteval->stack[((hsi*55+2607)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6325)*1+lsi)*1]), &(inteval->stack[((hsi*66+2420)*1+lsi)*1]), &(inteval->stack[((hsi*55+2486)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6160)*1+lsi)*1]), &(inteval->stack[((hsi*66+2299)*1+lsi)*1]), &(inteval->stack[((hsi*55+2365)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5995)*1+lsi)*1]), &(inteval->stack[((hsi*66+2178)*1+lsi)*1]), &(inteval->stack[((hsi*55+2244)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5830)*1+lsi)*1]), &(inteval->stack[((hsi*66+2057)*1+lsi)*1]), &(inteval->stack[((hsi*55+2123)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5665)*1+lsi)*1]), &(inteval->stack[((hsi*66+1936)*1+lsi)*1]), &(inteval->stack[((hsi*55+2002)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5500)*1+lsi)*1]), &(inteval->stack[((hsi*66+1815)*1+lsi)*1]), &(inteval->stack[((hsi*55+1881)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5335)*1+lsi)*1]), &(inteval->stack[((hsi*66+1694)*1+lsi)*1]), &(inteval->stack[((hsi*55+1760)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5170)*1+lsi)*1]), &(inteval->stack[((hsi*66+1573)*1+lsi)*1]), &(inteval->stack[((hsi*55+1639)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5005)*1+lsi)*1]), &(inteval->stack[((hsi*66+1452)*1+lsi)*1]), &(inteval->stack[((hsi*55+1518)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4840)*1+lsi)*1]), &(inteval->stack[((hsi*66+1331)*1+lsi)*1]), &(inteval->stack[((hsi*55+1397)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4675)*1+lsi)*1]), &(inteval->stack[((hsi*66+1210)*1+lsi)*1]), &(inteval->stack[((hsi*55+1276)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4510)*1+lsi)*1]), &(inteval->stack[((hsi*66+1089)*1+lsi)*1]), &(inteval->stack[((hsi*55+1155)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4345)*1+lsi)*1]), &(inteval->stack[((hsi*66+968)*1+lsi)*1]), &(inteval->stack[((hsi*55+1034)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4180)*1+lsi)*1]), &(inteval->stack[((hsi*66+847)*1+lsi)*1]), &(inteval->stack[((hsi*55+913)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4015)*1+lsi)*1]), &(inteval->stack[((hsi*66+726)*1+lsi)*1]), &(inteval->stack[((hsi*55+792)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3850)*1+lsi)*1]), &(inteval->stack[((hsi*66+605)*1+lsi)*1]), &(inteval->stack[((hsi*55+671)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3685)*1+lsi)*1]), &(inteval->stack[((hsi*66+484)*1+lsi)*1]), &(inteval->stack[((hsi*55+550)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3520)*1+lsi)*1]), &(inteval->stack[((hsi*66+363)*1+lsi)*1]), &(inteval->stack[((hsi*55+429)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3355)*1+lsi)*1]), &(inteval->stack[((hsi*66+242)*1+lsi)*1]), &(inteval->stack[((hsi*55+308)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3190)*1+lsi)*1]), &(inteval->stack[((hsi*66+121)*1+lsi)*1]), &(inteval->stack[((hsi*55+187)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3025)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*165+3025)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*165+3190)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*165+3355)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*165+3520)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*165+3685)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*165+3850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*165+4015)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*165+4180)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*165+4345)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*165+4510)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*165+4675)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*165+4840)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*165+5005)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*165+5170)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*165+5335)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*165+5500)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*165+5665)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*165+5830)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*165+5995)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*165+6160)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*165+6325)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*165+6490)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*165+6655)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*165+6820)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*165+6985)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
