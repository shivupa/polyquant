/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__I__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,26896)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+105296)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18380)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20000)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+109184)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20000)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21296)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+112208)*1+lsi)*1]), &(inteval->stack[((hsi*3888+105296)*1+lsi)*1]), &(inteval->stack[((hsi*3024+109184)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+118256)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16400)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18380)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+123116)*1+lsi)*1]), &(inteval->stack[((hsi*4860+118256)*1+lsi)*1]), &(inteval->stack[((hsi*3888+105296)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+130892)*1+lsi)*1]), &(inteval->stack[((hsi*7776+123116)*1+lsi)*1]), &(inteval->stack[((hsi*6048+112208)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+105296)*1+lsi)*1]), &(inteval->stack[((hsi*2025+11495)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13520)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+110156)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13520)*1+lsi)*1]), &(inteval->stack[((hsi*1260+15140)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+113936)*1+lsi)*1]), &(inteval->stack[((hsi*4860+105296)*1+lsi)*1]), &(inteval->stack[((hsi*3780+110156)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+121496)*1+lsi)*1]), &(inteval->stack[((hsi*2475+9020)*1+lsi)*1]), &(inteval->stack[((hsi*2025+11495)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+9020)*1+lsi)*1]), &(inteval->stack[((hsi*6075+121496)*1+lsi)*1]), &(inteval->stack[((hsi*4860+105296)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+140972)*1+lsi)*1]), &(inteval->stack[((hsi*9720+9020)*1+lsi)*1]), &(inteval->stack[((hsi*7560+113936)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*30240+153572)*1+lsi)*1]), &(inteval->stack[((hsi*12600+140972)*1+lsi)*1]), &(inteval->stack[((hsi*10080+130892)*1+lsi)*1]),280);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+105296)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23844)*1+lsi)*1]), &(inteval->stack[((hsi*1008+25104)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+108320)*1+lsi)*1]), &(inteval->stack[((hsi*1008+25104)*1+lsi)*1]), &(inteval->stack[((hsi*784+26112)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+110672)*1+lsi)*1]), &(inteval->stack[((hsi*3024+105296)*1+lsi)*1]), &(inteval->stack[((hsi*2352+108320)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+115376)*1+lsi)*1]), &(inteval->stack[((hsi*1540+22304)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23844)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+9020)*1+lsi)*1]), &(inteval->stack[((hsi*3780+115376)*1+lsi)*1]), &(inteval->stack[((hsi*3024+105296)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+115376)*1+lsi)*1]), &(inteval->stack[((hsi*6048+9020)*1+lsi)*1]), &(inteval->stack[((hsi*4704+110672)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*23520+183812)*1+lsi)*1]), &(inteval->stack[((hsi*10080+130892)*1+lsi)*1]), &(inteval->stack[((hsi*7840+115376)*1+lsi)*1]),280);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*47040+207332)*1+lsi)*1]), &(inteval->stack[((hsi*30240+153572)*1+lsi)*1]), &(inteval->stack[((hsi*23520+183812)*1+lsi)*1]),280);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+105296)*1+lsi)*1]), &(inteval->stack[((hsi*2475+3025)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5500)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+111236)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5500)*1+lsi)*1]), &(inteval->stack[((hsi*1540+7480)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+115856)*1+lsi)*1]), &(inteval->stack[((hsi*5940+105296)*1+lsi)*1]), &(inteval->stack[((hsi*4620+111236)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+183812)*1+lsi)*1]), &(inteval->stack[((hsi*3025+0)*1+lsi)*1]), &(inteval->stack[((hsi*2475+3025)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+0)*1+lsi)*1]), &(inteval->stack[((hsi*7425+183812)*1+lsi)*1]), &(inteval->stack[((hsi*5940+105296)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+183812)*1+lsi)*1]), &(inteval->stack[((hsi*11880+0)*1+lsi)*1]), &(inteval->stack[((hsi*9240+115856)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*37800+254372)*1+lsi)*1]), &(inteval->stack[((hsi*15400+183812)*1+lsi)*1]), &(inteval->stack[((hsi*12600+140972)*1+lsi)*1]),280);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*60480+292172)*1+lsi)*1]), &(inteval->stack[((hsi*37800+254372)*1+lsi)*1]), &(inteval->stack[((hsi*30240+153572)*1+lsi)*1]),280);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*78400+26896)*1+lsi)*1]), &(inteval->stack[((hsi*60480+292172)*1+lsi)*1]), &(inteval->stack[((hsi*47040+207332)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*78400+26896)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
