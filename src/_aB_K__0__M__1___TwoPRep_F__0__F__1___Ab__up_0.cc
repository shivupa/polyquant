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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__M__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,58580)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+256580)*1+lsi)*1]), &(inteval->stack[((hsi*3630+38494)*1+lsi)*1]), &(inteval->stack[((hsi*2970+42124)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+265490)*1+lsi)*1]), &(inteval->stack[((hsi*2970+42124)*1+lsi)*1]), &(inteval->stack[((hsi*2376+45094)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+272618)*1+lsi)*1]), &(inteval->stack[((hsi*8910+256580)*1+lsi)*1]), &(inteval->stack[((hsi*7128+265490)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+286874)*1+lsi)*1]), &(inteval->stack[((hsi*4356+34138)*1+lsi)*1]), &(inteval->stack[((hsi*3630+38494)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+297764)*1+lsi)*1]), &(inteval->stack[((hsi*10890+286874)*1+lsi)*1]), &(inteval->stack[((hsi*8910+256580)*1+lsi)*1]),66);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+315584)*1+lsi)*1]), &(inteval->stack[((hsi*17820+297764)*1+lsi)*1]), &(inteval->stack[((hsi*14256+272618)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+256580)*1+lsi)*1]), &(inteval->stack[((hsi*4290+23530)*1+lsi)*1]), &(inteval->stack[((hsi*3510+27820)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+267110)*1+lsi)*1]), &(inteval->stack[((hsi*3510+27820)*1+lsi)*1]), &(inteval->stack[((hsi*2808+31330)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+275534)*1+lsi)*1]), &(inteval->stack[((hsi*10530+256580)*1+lsi)*1]), &(inteval->stack[((hsi*8424+267110)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+292382)*1+lsi)*1]), &(inteval->stack[((hsi*5148+18382)*1+lsi)*1]), &(inteval->stack[((hsi*4290+23530)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+18382)*1+lsi)*1]), &(inteval->stack[((hsi*12870+292382)*1+lsi)*1]), &(inteval->stack[((hsi*10530+256580)*1+lsi)*1]),78);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+339344)*1+lsi)*1]), &(inteval->stack[((hsi*21060+18382)*1+lsi)*1]), &(inteval->stack[((hsi*16848+275534)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*71280+367424)*1+lsi)*1]), &(inteval->stack[((hsi*28080+339344)*1+lsi)*1]), &(inteval->stack[((hsi*23760+315584)*1+lsi)*1]),360);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+256580)*1+lsi)*1]), &(inteval->stack[((hsi*3025+51100)*1+lsi)*1]), &(inteval->stack[((hsi*2475+54125)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+264005)*1+lsi)*1]), &(inteval->stack[((hsi*2475+54125)*1+lsi)*1]), &(inteval->stack[((hsi*1980+56600)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+269945)*1+lsi)*1]), &(inteval->stack[((hsi*7425+256580)*1+lsi)*1]), &(inteval->stack[((hsi*5940+264005)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+281825)*1+lsi)*1]), &(inteval->stack[((hsi*3630+47470)*1+lsi)*1]), &(inteval->stack[((hsi*3025+51100)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+18382)*1+lsi)*1]), &(inteval->stack[((hsi*9075+281825)*1+lsi)*1]), &(inteval->stack[((hsi*7425+256580)*1+lsi)*1]),55);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+281825)*1+lsi)*1]), &(inteval->stack[((hsi*14850+18382)*1+lsi)*1]), &(inteval->stack[((hsi*11880+269945)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*59400+438704)*1+lsi)*1]), &(inteval->stack[((hsi*23760+315584)*1+lsi)*1]), &(inteval->stack[((hsi*19800+281825)*1+lsi)*1]),360);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*118800+498104)*1+lsi)*1]), &(inteval->stack[((hsi*71280+367424)*1+lsi)*1]), &(inteval->stack[((hsi*59400+438704)*1+lsi)*1]),360);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+256580)*1+lsi)*1]), &(inteval->stack[((hsi*5005+6006)*1+lsi)*1]), &(inteval->stack[((hsi*4095+11011)*1+lsi)*1]),91);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*9828+268865)*1+lsi)*1]), &(inteval->stack[((hsi*4095+11011)*1+lsi)*1]), &(inteval->stack[((hsi*3276+15106)*1+lsi)*1]),91);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*19656+278693)*1+lsi)*1]), &(inteval->stack[((hsi*12285+256580)*1+lsi)*1]), &(inteval->stack[((hsi*9828+268865)*1+lsi)*1]),91);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+438704)*1+lsi)*1]), &(inteval->stack[((hsi*6006+0)*1+lsi)*1]), &(inteval->stack[((hsi*5005+6006)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*15015+438704)*1+lsi)*1]), &(inteval->stack[((hsi*12285+256580)*1+lsi)*1]),91);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*32760+438704)*1+lsi)*1]), &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*19656+278693)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*84240+616904)*1+lsi)*1]), &(inteval->stack[((hsi*32760+438704)*1+lsi)*1]), &(inteval->stack[((hsi*28080+339344)*1+lsi)*1]),360);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*142560+701144)*1+lsi)*1]), &(inteval->stack[((hsi*84240+616904)*1+lsi)*1]), &(inteval->stack[((hsi*71280+367424)*1+lsi)*1]),360);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*198000+58580)*1+lsi)*1]), &(inteval->stack[((hsi*142560+701144)*1+lsi)*1]), &(inteval->stack[((hsi*118800+498104)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*198000+58580)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif