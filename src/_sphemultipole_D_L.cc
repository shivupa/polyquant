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
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0mp.h>
#include <_sphemultipole_D_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4150)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10900)*1+lsi)*1]), &(inteval->stack[((hsi*55+4050)*1+lsi)*1]), &(inteval->stack[((hsi*45+4105)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+11035)*1+lsi)*1]), &(inteval->stack[((hsi*66+3984)*1+lsi)*1]), &(inteval->stack[((hsi*55+4050)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+10630)*1+lsi)*1]), &(inteval->stack[((hsi*165+11035)*1+lsi)*1]), &(inteval->stack[((hsi*135+10900)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3984)*1+lsi)*1]), &(inteval->stack[((hsi*55+3884)*1+lsi)*1]), &(inteval->stack[((hsi*45+3939)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+11200)*1+lsi)*1]), &(inteval->stack[((hsi*66+3818)*1+lsi)*1]), &(inteval->stack[((hsi*55+3884)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+10360)*1+lsi)*1]), &(inteval->stack[((hsi*165+11200)*1+lsi)*1]), &(inteval->stack[((hsi*135+3984)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3818)*1+lsi)*1]), &(inteval->stack[((hsi*55+3718)*1+lsi)*1]), &(inteval->stack[((hsi*45+3773)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+11365)*1+lsi)*1]), &(inteval->stack[((hsi*66+3652)*1+lsi)*1]), &(inteval->stack[((hsi*55+3718)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+10090)*1+lsi)*1]), &(inteval->stack[((hsi*165+11365)*1+lsi)*1]), &(inteval->stack[((hsi*135+3818)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3652)*1+lsi)*1]), &(inteval->stack[((hsi*55+3552)*1+lsi)*1]), &(inteval->stack[((hsi*45+3607)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+11530)*1+lsi)*1]), &(inteval->stack[((hsi*66+3486)*1+lsi)*1]), &(inteval->stack[((hsi*55+3552)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+9820)*1+lsi)*1]), &(inteval->stack[((hsi*165+11530)*1+lsi)*1]), &(inteval->stack[((hsi*135+3652)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3486)*1+lsi)*1]), &(inteval->stack[((hsi*55+3386)*1+lsi)*1]), &(inteval->stack[((hsi*45+3441)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+11695)*1+lsi)*1]), &(inteval->stack[((hsi*66+3320)*1+lsi)*1]), &(inteval->stack[((hsi*55+3386)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+9550)*1+lsi)*1]), &(inteval->stack[((hsi*165+11695)*1+lsi)*1]), &(inteval->stack[((hsi*135+3486)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3320)*1+lsi)*1]), &(inteval->stack[((hsi*55+3220)*1+lsi)*1]), &(inteval->stack[((hsi*45+3275)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+11860)*1+lsi)*1]), &(inteval->stack[((hsi*66+3154)*1+lsi)*1]), &(inteval->stack[((hsi*55+3220)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+9280)*1+lsi)*1]), &(inteval->stack[((hsi*165+11860)*1+lsi)*1]), &(inteval->stack[((hsi*135+3320)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3154)*1+lsi)*1]), &(inteval->stack[((hsi*55+3054)*1+lsi)*1]), &(inteval->stack[((hsi*45+3109)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12025)*1+lsi)*1]), &(inteval->stack[((hsi*66+2988)*1+lsi)*1]), &(inteval->stack[((hsi*55+3054)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+9010)*1+lsi)*1]), &(inteval->stack[((hsi*165+12025)*1+lsi)*1]), &(inteval->stack[((hsi*135+3154)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2988)*1+lsi)*1]), &(inteval->stack[((hsi*55+2888)*1+lsi)*1]), &(inteval->stack[((hsi*45+2943)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12190)*1+lsi)*1]), &(inteval->stack[((hsi*66+2822)*1+lsi)*1]), &(inteval->stack[((hsi*55+2888)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+8740)*1+lsi)*1]), &(inteval->stack[((hsi*165+12190)*1+lsi)*1]), &(inteval->stack[((hsi*135+2988)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2822)*1+lsi)*1]), &(inteval->stack[((hsi*55+2722)*1+lsi)*1]), &(inteval->stack[((hsi*45+2777)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12355)*1+lsi)*1]), &(inteval->stack[((hsi*66+2656)*1+lsi)*1]), &(inteval->stack[((hsi*55+2722)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+8470)*1+lsi)*1]), &(inteval->stack[((hsi*165+12355)*1+lsi)*1]), &(inteval->stack[((hsi*135+2822)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2656)*1+lsi)*1]), &(inteval->stack[((hsi*55+2556)*1+lsi)*1]), &(inteval->stack[((hsi*45+2611)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12520)*1+lsi)*1]), &(inteval->stack[((hsi*66+2490)*1+lsi)*1]), &(inteval->stack[((hsi*55+2556)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+8200)*1+lsi)*1]), &(inteval->stack[((hsi*165+12520)*1+lsi)*1]), &(inteval->stack[((hsi*135+2656)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2490)*1+lsi)*1]), &(inteval->stack[((hsi*55+2390)*1+lsi)*1]), &(inteval->stack[((hsi*45+2445)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12685)*1+lsi)*1]), &(inteval->stack[((hsi*66+2324)*1+lsi)*1]), &(inteval->stack[((hsi*55+2390)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+7930)*1+lsi)*1]), &(inteval->stack[((hsi*165+12685)*1+lsi)*1]), &(inteval->stack[((hsi*135+2490)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2324)*1+lsi)*1]), &(inteval->stack[((hsi*55+2224)*1+lsi)*1]), &(inteval->stack[((hsi*45+2279)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12850)*1+lsi)*1]), &(inteval->stack[((hsi*66+2158)*1+lsi)*1]), &(inteval->stack[((hsi*55+2224)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+7660)*1+lsi)*1]), &(inteval->stack[((hsi*165+12850)*1+lsi)*1]), &(inteval->stack[((hsi*135+2324)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2158)*1+lsi)*1]), &(inteval->stack[((hsi*55+2058)*1+lsi)*1]), &(inteval->stack[((hsi*45+2113)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+13015)*1+lsi)*1]), &(inteval->stack[((hsi*66+1992)*1+lsi)*1]), &(inteval->stack[((hsi*55+2058)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+7390)*1+lsi)*1]), &(inteval->stack[((hsi*165+13015)*1+lsi)*1]), &(inteval->stack[((hsi*135+2158)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1992)*1+lsi)*1]), &(inteval->stack[((hsi*55+1892)*1+lsi)*1]), &(inteval->stack[((hsi*45+1947)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+13180)*1+lsi)*1]), &(inteval->stack[((hsi*66+1826)*1+lsi)*1]), &(inteval->stack[((hsi*55+1892)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+7120)*1+lsi)*1]), &(inteval->stack[((hsi*165+13180)*1+lsi)*1]), &(inteval->stack[((hsi*135+1992)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1826)*1+lsi)*1]), &(inteval->stack[((hsi*55+1726)*1+lsi)*1]), &(inteval->stack[((hsi*45+1781)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+13345)*1+lsi)*1]), &(inteval->stack[((hsi*66+1660)*1+lsi)*1]), &(inteval->stack[((hsi*55+1726)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+6850)*1+lsi)*1]), &(inteval->stack[((hsi*165+13345)*1+lsi)*1]), &(inteval->stack[((hsi*135+1826)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1660)*1+lsi)*1]), &(inteval->stack[((hsi*55+1560)*1+lsi)*1]), &(inteval->stack[((hsi*45+1615)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+13510)*1+lsi)*1]), &(inteval->stack[((hsi*66+1494)*1+lsi)*1]), &(inteval->stack[((hsi*55+1560)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+6580)*1+lsi)*1]), &(inteval->stack[((hsi*165+13510)*1+lsi)*1]), &(inteval->stack[((hsi*135+1660)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1494)*1+lsi)*1]), &(inteval->stack[((hsi*55+1394)*1+lsi)*1]), &(inteval->stack[((hsi*45+1449)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+13675)*1+lsi)*1]), &(inteval->stack[((hsi*66+1328)*1+lsi)*1]), &(inteval->stack[((hsi*55+1394)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+6310)*1+lsi)*1]), &(inteval->stack[((hsi*165+13675)*1+lsi)*1]), &(inteval->stack[((hsi*135+1494)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1328)*1+lsi)*1]), &(inteval->stack[((hsi*55+1228)*1+lsi)*1]), &(inteval->stack[((hsi*45+1283)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+13840)*1+lsi)*1]), &(inteval->stack[((hsi*66+1162)*1+lsi)*1]), &(inteval->stack[((hsi*55+1228)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+6040)*1+lsi)*1]), &(inteval->stack[((hsi*165+13840)*1+lsi)*1]), &(inteval->stack[((hsi*135+1328)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1162)*1+lsi)*1]), &(inteval->stack[((hsi*55+1062)*1+lsi)*1]), &(inteval->stack[((hsi*45+1117)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+14005)*1+lsi)*1]), &(inteval->stack[((hsi*66+996)*1+lsi)*1]), &(inteval->stack[((hsi*55+1062)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+5770)*1+lsi)*1]), &(inteval->stack[((hsi*165+14005)*1+lsi)*1]), &(inteval->stack[((hsi*135+1162)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+996)*1+lsi)*1]), &(inteval->stack[((hsi*55+896)*1+lsi)*1]), &(inteval->stack[((hsi*45+951)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+14170)*1+lsi)*1]), &(inteval->stack[((hsi*66+830)*1+lsi)*1]), &(inteval->stack[((hsi*55+896)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+5500)*1+lsi)*1]), &(inteval->stack[((hsi*165+14170)*1+lsi)*1]), &(inteval->stack[((hsi*135+996)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+830)*1+lsi)*1]), &(inteval->stack[((hsi*55+730)*1+lsi)*1]), &(inteval->stack[((hsi*45+785)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+14335)*1+lsi)*1]), &(inteval->stack[((hsi*66+664)*1+lsi)*1]), &(inteval->stack[((hsi*55+730)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+5230)*1+lsi)*1]), &(inteval->stack[((hsi*165+14335)*1+lsi)*1]), &(inteval->stack[((hsi*135+830)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+664)*1+lsi)*1]), &(inteval->stack[((hsi*55+564)*1+lsi)*1]), &(inteval->stack[((hsi*45+619)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+14500)*1+lsi)*1]), &(inteval->stack[((hsi*66+498)*1+lsi)*1]), &(inteval->stack[((hsi*55+564)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+4960)*1+lsi)*1]), &(inteval->stack[((hsi*165+14500)*1+lsi)*1]), &(inteval->stack[((hsi*135+664)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+498)*1+lsi)*1]), &(inteval->stack[((hsi*55+398)*1+lsi)*1]), &(inteval->stack[((hsi*45+453)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+14665)*1+lsi)*1]), &(inteval->stack[((hsi*66+332)*1+lsi)*1]), &(inteval->stack[((hsi*55+398)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+4690)*1+lsi)*1]), &(inteval->stack[((hsi*165+14665)*1+lsi)*1]), &(inteval->stack[((hsi*135+498)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+332)*1+lsi)*1]), &(inteval->stack[((hsi*55+232)*1+lsi)*1]), &(inteval->stack[((hsi*45+287)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+14830)*1+lsi)*1]), &(inteval->stack[((hsi*66+166)*1+lsi)*1]), &(inteval->stack[((hsi*55+232)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+4420)*1+lsi)*1]), &(inteval->stack[((hsi*165+14830)*1+lsi)*1]), &(inteval->stack[((hsi*135+332)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+166)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+14995)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+4150)*1+lsi)*1]), &(inteval->stack[((hsi*165+14995)*1+lsi)*1]), &(inteval->stack[((hsi*135+166)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*270+4150)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*270+4420)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*270+4690)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*270+4960)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*270+5230)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*270+5500)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*270+5770)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*270+6040)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*270+6310)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*270+6580)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*270+6850)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*270+7120)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*270+7390)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*270+7660)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*270+7930)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*270+8200)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*270+8470)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*270+8740)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*270+9010)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*270+9280)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*270+9550)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*270+9820)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*270+10090)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*270+10360)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*270+10630)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
