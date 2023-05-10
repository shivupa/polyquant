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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_K__0__L__1___TwoPRep_F__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_F__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,33532)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_F__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+130732)*1+lsi)*1]), &(inteval->stack[((hsi*3025+16962)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19987)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+138157)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19987)*1+lsi)*1]), &(inteval->stack[((hsi*1980+22462)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+144097)*1+lsi)*1]), &(inteval->stack[((hsi*7425+130732)*1+lsi)*1]), &(inteval->stack[((hsi*5940+138157)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+155977)*1+lsi)*1]), &(inteval->stack[((hsi*3630+13332)*1+lsi)*1]), &(inteval->stack[((hsi*3025+16962)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+165052)*1+lsi)*1]), &(inteval->stack[((hsi*9075+155977)*1+lsi)*1]), &(inteval->stack[((hsi*7425+130732)*1+lsi)*1]),55);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+179902)*1+lsi)*1]), &(inteval->stack[((hsi*14850+165052)*1+lsi)*1]), &(inteval->stack[((hsi*11880+144097)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+130732)*1+lsi)*1]), &(inteval->stack[((hsi*2475+27412)*1+lsi)*1]), &(inteval->stack[((hsi*2025+29887)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+136807)*1+lsi)*1]), &(inteval->stack[((hsi*2025+29887)*1+lsi)*1]), &(inteval->stack[((hsi*1620+31912)*1+lsi)*1]),45);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+141667)*1+lsi)*1]), &(inteval->stack[((hsi*6075+130732)*1+lsi)*1]), &(inteval->stack[((hsi*4860+136807)*1+lsi)*1]),45);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+151387)*1+lsi)*1]), &(inteval->stack[((hsi*2970+24442)*1+lsi)*1]), &(inteval->stack[((hsi*2475+27412)*1+lsi)*1]),45);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+158812)*1+lsi)*1]), &(inteval->stack[((hsi*7425+151387)*1+lsi)*1]), &(inteval->stack[((hsi*6075+130732)*1+lsi)*1]),45);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+13332)*1+lsi)*1]), &(inteval->stack[((hsi*12150+158812)*1+lsi)*1]), &(inteval->stack[((hsi*9720+141667)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*48600+130732)*1+lsi)*1]), &(inteval->stack[((hsi*19800+179902)*1+lsi)*1]), &(inteval->stack[((hsi*16200+13332)*1+lsi)*1]),360);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+13332)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7986)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+22242)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7986)*1+lsi)*1]), &(inteval->stack[((hsi*2376+10956)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+199702)*1+lsi)*1]), &(inteval->stack[((hsi*8910+13332)*1+lsi)*1]), &(inteval->stack[((hsi*7128+22242)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+22242)*1+lsi)*1]), &(inteval->stack[((hsi*4356+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+213958)*1+lsi)*1]), &(inteval->stack[((hsi*10890+22242)*1+lsi)*1]), &(inteval->stack[((hsi*8910+13332)*1+lsi)*1]),66);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+0)*1+lsi)*1]), &(inteval->stack[((hsi*17820+213958)*1+lsi)*1]), &(inteval->stack[((hsi*14256+199702)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*59400+199702)*1+lsi)*1]), &(inteval->stack[((hsi*23760+0)*1+lsi)*1]), &(inteval->stack[((hsi*19800+179902)*1+lsi)*1]),360);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*97200+33532)*1+lsi)*1]), &(inteval->stack[((hsi*59400+199702)*1+lsi)*1]), &(inteval->stack[((hsi*48600+130732)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*97200+33532)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
