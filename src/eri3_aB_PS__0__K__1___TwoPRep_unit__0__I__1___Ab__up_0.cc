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
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0ki.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_PS__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_PS__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31416)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_PS__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+97944)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26070)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+106854)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+117744)*1+lsi)*1]), &(inteval->stack[((hsi*10890+106854)*1+lsi)*1]), &(inteval->stack[((hsi*8910+97944)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+135564)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+148632)*1+lsi)*1]), &(inteval->stack[((hsi*13068+135564)*1+lsi)*1]), &(inteval->stack[((hsi*10890+106854)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+170412)*1+lsi)*1]), &(inteval->stack[((hsi*21780+148632)*1+lsi)*1]), &(inteval->stack[((hsi*17820+117744)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+200112)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+215556)*1+lsi)*1]), &(inteval->stack[((hsi*15444+200112)*1+lsi)*1]), &(inteval->stack[((hsi*13068+135564)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+241692)*1+lsi)*1]), &(inteval->stack[((hsi*26136+215556)*1+lsi)*1]), &(inteval->stack[((hsi*21780+148632)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+277992)*1+lsi)*1]), &(inteval->stack[((hsi*36300+241692)*1+lsi)*1]), &(inteval->stack[((hsi*29700+170412)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+135564)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26070)*1+lsi)*1]), &(inteval->stack[((hsi*2376+29040)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+142692)*1+lsi)*1]), &(inteval->stack[((hsi*8910+97944)*1+lsi)*1]), &(inteval->stack[((hsi*7128+135564)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+322542)*1+lsi)*1]), &(inteval->stack[((hsi*17820+117744)*1+lsi)*1]), &(inteval->stack[((hsi*14256+142692)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+97944)*1+lsi)*1]), &(inteval->stack[((hsi*29700+170412)*1+lsi)*1]), &(inteval->stack[((hsi*23760+322542)*1+lsi)*1]),66);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*49896+133584)*1+lsi)*1]), &(inteval->stack[((hsi*44550+277992)*1+lsi)*1]), &(inteval->stack[((hsi*35640+97944)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+97944)*1+lsi)*1]), &(inteval->stack[((hsi*6930+0)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+0)*1+lsi)*1]), &(inteval->stack[((hsi*18018+97944)*1+lsi)*1]), &(inteval->stack[((hsi*15444+200112)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+322542)*1+lsi)*1]), &(inteval->stack[((hsi*30888+0)*1+lsi)*1]), &(inteval->stack[((hsi*26136+215556)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+183480)*1+lsi)*1]), &(inteval->stack[((hsi*43560+322542)*1+lsi)*1]), &(inteval->stack[((hsi*36300+241692)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+322542)*1+lsi)*1]), &(inteval->stack[((hsi*54450+183480)*1+lsi)*1]), &(inteval->stack[((hsi*44550+277992)*1+lsi)*1]),66);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*66528+31416)*1+lsi)*1]), &(inteval->stack[((hsi*62370+322542)*1+lsi)*1]), &(inteval->stack[((hsi*49896+133584)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*66528+31416)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
