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
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_K__0__K__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,40804)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+170404)*1+lsi)*1]), &(inteval->stack[((hsi*2475+27412)*1+lsi)*1]), &(inteval->stack[((hsi*2025+29887)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+176479)*1+lsi)*1]), &(inteval->stack[((hsi*2025+29887)*1+lsi)*1]), &(inteval->stack[((hsi*1620+31912)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+181339)*1+lsi)*1]), &(inteval->stack[((hsi*6075+170404)*1+lsi)*1]), &(inteval->stack[((hsi*4860+176479)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+191059)*1+lsi)*1]), &(inteval->stack[((hsi*2970+24442)*1+lsi)*1]), &(inteval->stack[((hsi*2475+27412)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+198484)*1+lsi)*1]), &(inteval->stack[((hsi*7425+191059)*1+lsi)*1]), &(inteval->stack[((hsi*6075+170404)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+210634)*1+lsi)*1]), &(inteval->stack[((hsi*12150+198484)*1+lsi)*1]), &(inteval->stack[((hsi*9720+181339)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+170404)*1+lsi)*1]), &(inteval->stack[((hsi*3025+16962)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19987)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+177829)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19987)*1+lsi)*1]), &(inteval->stack[((hsi*1980+22462)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+183769)*1+lsi)*1]), &(inteval->stack[((hsi*7425+170404)*1+lsi)*1]), &(inteval->stack[((hsi*5940+177829)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+195649)*1+lsi)*1]), &(inteval->stack[((hsi*3630+13332)*1+lsi)*1]), &(inteval->stack[((hsi*3025+16962)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+13332)*1+lsi)*1]), &(inteval->stack[((hsi*9075+195649)*1+lsi)*1]), &(inteval->stack[((hsi*7425+170404)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+226834)*1+lsi)*1]), &(inteval->stack[((hsi*14850+13332)*1+lsi)*1]), &(inteval->stack[((hsi*11880+183769)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*48600+246634)*1+lsi)*1]), &(inteval->stack[((hsi*19800+226834)*1+lsi)*1]), &(inteval->stack[((hsi*16200+210634)*1+lsi)*1]),360);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+170404)*1+lsi)*1]), &(inteval->stack[((hsi*1980+35908)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37888)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+175264)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37888)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39508)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+179152)*1+lsi)*1]), &(inteval->stack[((hsi*4860+170404)*1+lsi)*1]), &(inteval->stack[((hsi*3888+175264)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+186928)*1+lsi)*1]), &(inteval->stack[((hsi*2376+33532)*1+lsi)*1]), &(inteval->stack[((hsi*1980+35908)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+13332)*1+lsi)*1]), &(inteval->stack[((hsi*5940+186928)*1+lsi)*1]), &(inteval->stack[((hsi*4860+170404)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+186928)*1+lsi)*1]), &(inteval->stack[((hsi*9720+13332)*1+lsi)*1]), &(inteval->stack[((hsi*7776+179152)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*38880+295234)*1+lsi)*1]), &(inteval->stack[((hsi*16200+210634)*1+lsi)*1]), &(inteval->stack[((hsi*12960+186928)*1+lsi)*1]),360);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*77760+334114)*1+lsi)*1]), &(inteval->stack[((hsi*48600+246634)*1+lsi)*1]), &(inteval->stack[((hsi*38880+295234)*1+lsi)*1]),360);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+170404)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7986)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+179314)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7986)*1+lsi)*1]), &(inteval->stack[((hsi*2376+10956)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+186442)*1+lsi)*1]), &(inteval->stack[((hsi*8910+170404)*1+lsi)*1]), &(inteval->stack[((hsi*7128+179314)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+295234)*1+lsi)*1]), &(inteval->stack[((hsi*4356+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+0)*1+lsi)*1]), &(inteval->stack[((hsi*10890+295234)*1+lsi)*1]), &(inteval->stack[((hsi*8910+170404)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+295234)*1+lsi)*1]), &(inteval->stack[((hsi*17820+0)*1+lsi)*1]), &(inteval->stack[((hsi*14256+186442)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*59400+411874)*1+lsi)*1]), &(inteval->stack[((hsi*23760+295234)*1+lsi)*1]), &(inteval->stack[((hsi*19800+226834)*1+lsi)*1]),360);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*97200+471274)*1+lsi)*1]), &(inteval->stack[((hsi*59400+411874)*1+lsi)*1]), &(inteval->stack[((hsi*48600+246634)*1+lsi)*1]),360);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*129600+40804)*1+lsi)*1]), &(inteval->stack[((hsi*97200+471274)*1+lsi)*1]), &(inteval->stack[((hsi*77760+334114)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*129600+40804)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
