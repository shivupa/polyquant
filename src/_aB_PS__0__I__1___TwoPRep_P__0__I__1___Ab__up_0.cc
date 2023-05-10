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
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ii.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__I__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,57456)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+212688)*1+lsi)*1]), &(inteval->stack[((hsi*2970+50262)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53232)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+219816)*1+lsi)*1]), &(inteval->stack[((hsi*3630+46632)*1+lsi)*1]), &(inteval->stack[((hsi*2970+50262)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+228726)*1+lsi)*1]), &(inteval->stack[((hsi*8910+219816)*1+lsi)*1]), &(inteval->stack[((hsi*7128+212688)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+242982)*1+lsi)*1]), &(inteval->stack[((hsi*4356+42276)*1+lsi)*1]), &(inteval->stack[((hsi*3630+46632)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+253872)*1+lsi)*1]), &(inteval->stack[((hsi*10890+242982)*1+lsi)*1]), &(inteval->stack[((hsi*8910+219816)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+271692)*1+lsi)*1]), &(inteval->stack[((hsi*17820+253872)*1+lsi)*1]), &(inteval->stack[((hsi*14256+228726)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+295452)*1+lsi)*1]), &(inteval->stack[((hsi*5148+37128)*1+lsi)*1]), &(inteval->stack[((hsi*4356+42276)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+308520)*1+lsi)*1]), &(inteval->stack[((hsi*13068+295452)*1+lsi)*1]), &(inteval->stack[((hsi*10890+242982)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+330300)*1+lsi)*1]), &(inteval->stack[((hsi*21780+308520)*1+lsi)*1]), &(inteval->stack[((hsi*17820+253872)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+360000)*1+lsi)*1]), &(inteval->stack[((hsi*29700+330300)*1+lsi)*1]), &(inteval->stack[((hsi*23760+271692)*1+lsi)*1]),66);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+242982)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53232)*1+lsi)*1]), &(inteval->stack[((hsi*1848+55608)*1+lsi)*1]),66);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*11088+248526)*1+lsi)*1]), &(inteval->stack[((hsi*7128+212688)*1+lsi)*1]), &(inteval->stack[((hsi*5544+242982)*1+lsi)*1]),66);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*18480+395640)*1+lsi)*1]), &(inteval->stack[((hsi*14256+228726)*1+lsi)*1]), &(inteval->stack[((hsi*11088+248526)*1+lsi)*1]),66);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*27720+212688)*1+lsi)*1]), &(inteval->stack[((hsi*23760+271692)*1+lsi)*1]), &(inteval->stack[((hsi*18480+395640)*1+lsi)*1]),66);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*38808+240408)*1+lsi)*1]), &(inteval->stack[((hsi*35640+360000)*1+lsi)*1]), &(inteval->stack[((hsi*27720+212688)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+212688)*1+lsi)*1]), &(inteval->stack[((hsi*6006+31122)*1+lsi)*1]), &(inteval->stack[((hsi*5148+37128)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+31122)*1+lsi)*1]), &(inteval->stack[((hsi*15444+212688)*1+lsi)*1]), &(inteval->stack[((hsi*13068+295452)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+395640)*1+lsi)*1]), &(inteval->stack[((hsi*26136+31122)*1+lsi)*1]), &(inteval->stack[((hsi*21780+308520)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+279216)*1+lsi)*1]), &(inteval->stack[((hsi*36300+395640)*1+lsi)*1]), &(inteval->stack[((hsi*29700+330300)*1+lsi)*1]),66);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*49896+395640)*1+lsi)*1]), &(inteval->stack[((hsi*44550+279216)*1+lsi)*1]), &(inteval->stack[((hsi*35640+360000)*1+lsi)*1]),66);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*51744+279216)*1+lsi)*1]), &(inteval->stack[((hsi*49896+395640)*1+lsi)*1]), &(inteval->stack[((hsi*38808+240408)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+212688)*1+lsi)*1]), &(inteval->stack[((hsi*3510+22620)*1+lsi)*1]), &(inteval->stack[((hsi*2808+26130)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+221112)*1+lsi)*1]), &(inteval->stack[((hsi*4290+18330)*1+lsi)*1]), &(inteval->stack[((hsi*3510+22620)*1+lsi)*1]),78);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+231642)*1+lsi)*1]), &(inteval->stack[((hsi*10530+221112)*1+lsi)*1]), &(inteval->stack[((hsi*8424+212688)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+248490)*1+lsi)*1]), &(inteval->stack[((hsi*5148+13182)*1+lsi)*1]), &(inteval->stack[((hsi*4290+18330)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+31122)*1+lsi)*1]), &(inteval->stack[((hsi*12870+248490)*1+lsi)*1]), &(inteval->stack[((hsi*10530+221112)*1+lsi)*1]),78);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+330960)*1+lsi)*1]), &(inteval->stack[((hsi*21060+31122)*1+lsi)*1]), &(inteval->stack[((hsi*16848+231642)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+261360)*1+lsi)*1]), &(inteval->stack[((hsi*6084+7098)*1+lsi)*1]), &(inteval->stack[((hsi*5148+13182)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+359040)*1+lsi)*1]), &(inteval->stack[((hsi*15444+261360)*1+lsi)*1]), &(inteval->stack[((hsi*12870+248490)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+384780)*1+lsi)*1]), &(inteval->stack[((hsi*25740+359040)*1+lsi)*1]), &(inteval->stack[((hsi*21060+31122)*1+lsi)*1]),78);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*42120+419880)*1+lsi)*1]), &(inteval->stack[((hsi*35100+384780)*1+lsi)*1]), &(inteval->stack[((hsi*28080+330960)*1+lsi)*1]),78);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+31122)*1+lsi)*1]), &(inteval->stack[((hsi*2808+26130)*1+lsi)*1]), &(inteval->stack[((hsi*2184+28938)*1+lsi)*1]),78);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*13104+37674)*1+lsi)*1]), &(inteval->stack[((hsi*8424+212688)*1+lsi)*1]), &(inteval->stack[((hsi*6552+31122)*1+lsi)*1]),78);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*21840+13182)*1+lsi)*1]), &(inteval->stack[((hsi*16848+231642)*1+lsi)*1]), &(inteval->stack[((hsi*13104+37674)*1+lsi)*1]),78);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*32760+212688)*1+lsi)*1]), &(inteval->stack[((hsi*28080+330960)*1+lsi)*1]), &(inteval->stack[((hsi*21840+13182)*1+lsi)*1]),78);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*45864+462000)*1+lsi)*1]), &(inteval->stack[((hsi*42120+419880)*1+lsi)*1]), &(inteval->stack[((hsi*32760+212688)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+212688)*1+lsi)*1]), &(inteval->stack[((hsi*7098+0)*1+lsi)*1]), &(inteval->stack[((hsi*6084+7098)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+0)*1+lsi)*1]), &(inteval->stack[((hsi*18252+212688)*1+lsi)*1]), &(inteval->stack[((hsi*15444+261360)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+212688)*1+lsi)*1]), &(inteval->stack[((hsi*30888+0)*1+lsi)*1]), &(inteval->stack[((hsi*25740+359040)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+0)*1+lsi)*1]), &(inteval->stack[((hsi*42900+212688)*1+lsi)*1]), &(inteval->stack[((hsi*35100+384780)*1+lsi)*1]),78);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*58968+330960)*1+lsi)*1]), &(inteval->stack[((hsi*52650+0)*1+lsi)*1]), &(inteval->stack[((hsi*42120+419880)*1+lsi)*1]),78);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*61152+389928)*1+lsi)*1]), &(inteval->stack[((hsi*58968+330960)*1+lsi)*1]), &(inteval->stack[((hsi*45864+462000)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*155232+57456)*1+lsi)*1]), &(inteval->stack[((hsi*61152+389928)*1+lsi)*1]), &(inteval->stack[((hsi*51744+279216)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*155232+57456)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
