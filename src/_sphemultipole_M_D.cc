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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_M_D_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_M_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4975)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_M_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+13225)*1+lsi)*1]), &(inteval->stack[((hsi*66+4854)*1+lsi)*1]), &(inteval->stack[((hsi*55+4920)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+13390)*1+lsi)*1]), &(inteval->stack[((hsi*78+4776)*1+lsi)*1]), &(inteval->stack[((hsi*66+4854)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+12895)*1+lsi)*1]), &(inteval->stack[((hsi*198+13390)*1+lsi)*1]), &(inteval->stack[((hsi*165+13225)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4776)*1+lsi)*1]), &(inteval->stack[((hsi*66+4655)*1+lsi)*1]), &(inteval->stack[((hsi*55+4721)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+13588)*1+lsi)*1]), &(inteval->stack[((hsi*78+4577)*1+lsi)*1]), &(inteval->stack[((hsi*66+4655)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+12565)*1+lsi)*1]), &(inteval->stack[((hsi*198+13588)*1+lsi)*1]), &(inteval->stack[((hsi*165+4776)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4577)*1+lsi)*1]), &(inteval->stack[((hsi*66+4456)*1+lsi)*1]), &(inteval->stack[((hsi*55+4522)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+13786)*1+lsi)*1]), &(inteval->stack[((hsi*78+4378)*1+lsi)*1]), &(inteval->stack[((hsi*66+4456)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+12235)*1+lsi)*1]), &(inteval->stack[((hsi*198+13786)*1+lsi)*1]), &(inteval->stack[((hsi*165+4577)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4378)*1+lsi)*1]), &(inteval->stack[((hsi*66+4257)*1+lsi)*1]), &(inteval->stack[((hsi*55+4323)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+13984)*1+lsi)*1]), &(inteval->stack[((hsi*78+4179)*1+lsi)*1]), &(inteval->stack[((hsi*66+4257)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+11905)*1+lsi)*1]), &(inteval->stack[((hsi*198+13984)*1+lsi)*1]), &(inteval->stack[((hsi*165+4378)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4179)*1+lsi)*1]), &(inteval->stack[((hsi*66+4058)*1+lsi)*1]), &(inteval->stack[((hsi*55+4124)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+14182)*1+lsi)*1]), &(inteval->stack[((hsi*78+3980)*1+lsi)*1]), &(inteval->stack[((hsi*66+4058)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+11575)*1+lsi)*1]), &(inteval->stack[((hsi*198+14182)*1+lsi)*1]), &(inteval->stack[((hsi*165+4179)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3980)*1+lsi)*1]), &(inteval->stack[((hsi*66+3859)*1+lsi)*1]), &(inteval->stack[((hsi*55+3925)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+14380)*1+lsi)*1]), &(inteval->stack[((hsi*78+3781)*1+lsi)*1]), &(inteval->stack[((hsi*66+3859)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+11245)*1+lsi)*1]), &(inteval->stack[((hsi*198+14380)*1+lsi)*1]), &(inteval->stack[((hsi*165+3980)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3781)*1+lsi)*1]), &(inteval->stack[((hsi*66+3660)*1+lsi)*1]), &(inteval->stack[((hsi*55+3726)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+14578)*1+lsi)*1]), &(inteval->stack[((hsi*78+3582)*1+lsi)*1]), &(inteval->stack[((hsi*66+3660)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+10915)*1+lsi)*1]), &(inteval->stack[((hsi*198+14578)*1+lsi)*1]), &(inteval->stack[((hsi*165+3781)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3582)*1+lsi)*1]), &(inteval->stack[((hsi*66+3461)*1+lsi)*1]), &(inteval->stack[((hsi*55+3527)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+14776)*1+lsi)*1]), &(inteval->stack[((hsi*78+3383)*1+lsi)*1]), &(inteval->stack[((hsi*66+3461)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+10585)*1+lsi)*1]), &(inteval->stack[((hsi*198+14776)*1+lsi)*1]), &(inteval->stack[((hsi*165+3582)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3383)*1+lsi)*1]), &(inteval->stack[((hsi*66+3262)*1+lsi)*1]), &(inteval->stack[((hsi*55+3328)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+14974)*1+lsi)*1]), &(inteval->stack[((hsi*78+3184)*1+lsi)*1]), &(inteval->stack[((hsi*66+3262)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+10255)*1+lsi)*1]), &(inteval->stack[((hsi*198+14974)*1+lsi)*1]), &(inteval->stack[((hsi*165+3383)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3184)*1+lsi)*1]), &(inteval->stack[((hsi*66+3063)*1+lsi)*1]), &(inteval->stack[((hsi*55+3129)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+15172)*1+lsi)*1]), &(inteval->stack[((hsi*78+2985)*1+lsi)*1]), &(inteval->stack[((hsi*66+3063)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+9925)*1+lsi)*1]), &(inteval->stack[((hsi*198+15172)*1+lsi)*1]), &(inteval->stack[((hsi*165+3184)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2985)*1+lsi)*1]), &(inteval->stack[((hsi*66+2864)*1+lsi)*1]), &(inteval->stack[((hsi*55+2930)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+15370)*1+lsi)*1]), &(inteval->stack[((hsi*78+2786)*1+lsi)*1]), &(inteval->stack[((hsi*66+2864)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+9595)*1+lsi)*1]), &(inteval->stack[((hsi*198+15370)*1+lsi)*1]), &(inteval->stack[((hsi*165+2985)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2786)*1+lsi)*1]), &(inteval->stack[((hsi*66+2665)*1+lsi)*1]), &(inteval->stack[((hsi*55+2731)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+15568)*1+lsi)*1]), &(inteval->stack[((hsi*78+2587)*1+lsi)*1]), &(inteval->stack[((hsi*66+2665)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+9265)*1+lsi)*1]), &(inteval->stack[((hsi*198+15568)*1+lsi)*1]), &(inteval->stack[((hsi*165+2786)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2587)*1+lsi)*1]), &(inteval->stack[((hsi*66+2466)*1+lsi)*1]), &(inteval->stack[((hsi*55+2532)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+15766)*1+lsi)*1]), &(inteval->stack[((hsi*78+2388)*1+lsi)*1]), &(inteval->stack[((hsi*66+2466)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+8935)*1+lsi)*1]), &(inteval->stack[((hsi*198+15766)*1+lsi)*1]), &(inteval->stack[((hsi*165+2587)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2388)*1+lsi)*1]), &(inteval->stack[((hsi*66+2267)*1+lsi)*1]), &(inteval->stack[((hsi*55+2333)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+15964)*1+lsi)*1]), &(inteval->stack[((hsi*78+2189)*1+lsi)*1]), &(inteval->stack[((hsi*66+2267)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+8605)*1+lsi)*1]), &(inteval->stack[((hsi*198+15964)*1+lsi)*1]), &(inteval->stack[((hsi*165+2388)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2189)*1+lsi)*1]), &(inteval->stack[((hsi*66+2068)*1+lsi)*1]), &(inteval->stack[((hsi*55+2134)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+16162)*1+lsi)*1]), &(inteval->stack[((hsi*78+1990)*1+lsi)*1]), &(inteval->stack[((hsi*66+2068)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+8275)*1+lsi)*1]), &(inteval->stack[((hsi*198+16162)*1+lsi)*1]), &(inteval->stack[((hsi*165+2189)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1990)*1+lsi)*1]), &(inteval->stack[((hsi*66+1869)*1+lsi)*1]), &(inteval->stack[((hsi*55+1935)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+16360)*1+lsi)*1]), &(inteval->stack[((hsi*78+1791)*1+lsi)*1]), &(inteval->stack[((hsi*66+1869)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+7945)*1+lsi)*1]), &(inteval->stack[((hsi*198+16360)*1+lsi)*1]), &(inteval->stack[((hsi*165+1990)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1791)*1+lsi)*1]), &(inteval->stack[((hsi*66+1670)*1+lsi)*1]), &(inteval->stack[((hsi*55+1736)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+16558)*1+lsi)*1]), &(inteval->stack[((hsi*78+1592)*1+lsi)*1]), &(inteval->stack[((hsi*66+1670)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+7615)*1+lsi)*1]), &(inteval->stack[((hsi*198+16558)*1+lsi)*1]), &(inteval->stack[((hsi*165+1791)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1592)*1+lsi)*1]), &(inteval->stack[((hsi*66+1471)*1+lsi)*1]), &(inteval->stack[((hsi*55+1537)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+16756)*1+lsi)*1]), &(inteval->stack[((hsi*78+1393)*1+lsi)*1]), &(inteval->stack[((hsi*66+1471)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+7285)*1+lsi)*1]), &(inteval->stack[((hsi*198+16756)*1+lsi)*1]), &(inteval->stack[((hsi*165+1592)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1393)*1+lsi)*1]), &(inteval->stack[((hsi*66+1272)*1+lsi)*1]), &(inteval->stack[((hsi*55+1338)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+16954)*1+lsi)*1]), &(inteval->stack[((hsi*78+1194)*1+lsi)*1]), &(inteval->stack[((hsi*66+1272)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+6955)*1+lsi)*1]), &(inteval->stack[((hsi*198+16954)*1+lsi)*1]), &(inteval->stack[((hsi*165+1393)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1194)*1+lsi)*1]), &(inteval->stack[((hsi*66+1073)*1+lsi)*1]), &(inteval->stack[((hsi*55+1139)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+17152)*1+lsi)*1]), &(inteval->stack[((hsi*78+995)*1+lsi)*1]), &(inteval->stack[((hsi*66+1073)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+6625)*1+lsi)*1]), &(inteval->stack[((hsi*198+17152)*1+lsi)*1]), &(inteval->stack[((hsi*165+1194)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+995)*1+lsi)*1]), &(inteval->stack[((hsi*66+874)*1+lsi)*1]), &(inteval->stack[((hsi*55+940)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+17350)*1+lsi)*1]), &(inteval->stack[((hsi*78+796)*1+lsi)*1]), &(inteval->stack[((hsi*66+874)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+6295)*1+lsi)*1]), &(inteval->stack[((hsi*198+17350)*1+lsi)*1]), &(inteval->stack[((hsi*165+995)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+796)*1+lsi)*1]), &(inteval->stack[((hsi*66+675)*1+lsi)*1]), &(inteval->stack[((hsi*55+741)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+17548)*1+lsi)*1]), &(inteval->stack[((hsi*78+597)*1+lsi)*1]), &(inteval->stack[((hsi*66+675)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+5965)*1+lsi)*1]), &(inteval->stack[((hsi*198+17548)*1+lsi)*1]), &(inteval->stack[((hsi*165+796)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+597)*1+lsi)*1]), &(inteval->stack[((hsi*66+476)*1+lsi)*1]), &(inteval->stack[((hsi*55+542)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+17746)*1+lsi)*1]), &(inteval->stack[((hsi*78+398)*1+lsi)*1]), &(inteval->stack[((hsi*66+476)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+5635)*1+lsi)*1]), &(inteval->stack[((hsi*198+17746)*1+lsi)*1]), &(inteval->stack[((hsi*165+597)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+398)*1+lsi)*1]), &(inteval->stack[((hsi*66+277)*1+lsi)*1]), &(inteval->stack[((hsi*55+343)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+17944)*1+lsi)*1]), &(inteval->stack[((hsi*78+199)*1+lsi)*1]), &(inteval->stack[((hsi*66+277)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+5305)*1+lsi)*1]), &(inteval->stack[((hsi*198+17944)*1+lsi)*1]), &(inteval->stack[((hsi*165+398)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+199)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+18142)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+4975)*1+lsi)*1]), &(inteval->stack[((hsi*198+18142)*1+lsi)*1]), &(inteval->stack[((hsi*165+199)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*330+4975)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*330+5305)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*330+5635)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*330+5965)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*330+6295)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*330+6625)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*330+6955)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*330+7285)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*330+7615)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*330+7945)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*330+8275)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*330+8605)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*330+8935)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*330+9265)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*330+9595)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*330+9925)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*330+10255)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*330+10585)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*330+10915)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*330+11245)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*330+11575)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*330+11905)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*330+12235)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*330+12565)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*330+12895)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
