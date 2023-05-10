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
#include <HRRPart1bra0ket0kk.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_M__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,32780)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+104060)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]), &(inteval->stack[((hsi*2475+28325)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+111485)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+120560)*1+lsi)*1]), &(inteval->stack[((hsi*9075+111485)*1+lsi)*1]), &(inteval->stack[((hsi*7425+104060)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+135410)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+146300)*1+lsi)*1]), &(inteval->stack[((hsi*10890+135410)*1+lsi)*1]), &(inteval->stack[((hsi*9075+111485)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+164450)*1+lsi)*1]), &(inteval->stack[((hsi*18150+146300)*1+lsi)*1]), &(inteval->stack[((hsi*14850+120560)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+189200)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+202070)*1+lsi)*1]), &(inteval->stack[((hsi*12870+189200)*1+lsi)*1]), &(inteval->stack[((hsi*10890+135410)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+223850)*1+lsi)*1]), &(inteval->stack[((hsi*21780+202070)*1+lsi)*1]), &(inteval->stack[((hsi*18150+146300)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+254100)*1+lsi)*1]), &(inteval->stack[((hsi*30250+223850)*1+lsi)*1]), &(inteval->stack[((hsi*24750+164450)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+135410)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+291225)*1+lsi)*1]), &(inteval->stack[((hsi*15015+135410)*1+lsi)*1]), &(inteval->stack[((hsi*12870+189200)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+316965)*1+lsi)*1]), &(inteval->stack[((hsi*25740+291225)*1+lsi)*1]), &(inteval->stack[((hsi*21780+202070)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+353265)*1+lsi)*1]), &(inteval->stack[((hsi*36300+316965)*1+lsi)*1]), &(inteval->stack[((hsi*30250+223850)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+189200)*1+lsi)*1]), &(inteval->stack[((hsi*45375+353265)*1+lsi)*1]), &(inteval->stack[((hsi*37125+254100)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+12375)*1+lsi)*1]), &(inteval->stack[((hsi*2475+28325)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30800)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+18315)*1+lsi)*1]), &(inteval->stack[((hsi*7425+104060)*1+lsi)*1]), &(inteval->stack[((hsi*5940+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+398640)*1+lsi)*1]), &(inteval->stack[((hsi*14850+120560)*1+lsi)*1]), &(inteval->stack[((hsi*11880+18315)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+104060)*1+lsi)*1]), &(inteval->stack[((hsi*24750+164450)*1+lsi)*1]), &(inteval->stack[((hsi*19800+398640)*1+lsi)*1]),55);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*41580+398640)*1+lsi)*1]), &(inteval->stack[((hsi*37125+254100)*1+lsi)*1]), &(inteval->stack[((hsi*29700+104060)*1+lsi)*1]),55);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*55440+440220)*1+lsi)*1]), &(inteval->stack[((hsi*51975+189200)*1+lsi)*1]), &(inteval->stack[((hsi*41580+398640)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+241175)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+398640)*1+lsi)*1]), &(inteval->stack[((hsi*17325+241175)*1+lsi)*1]), &(inteval->stack[((hsi*15015+135410)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+104060)*1+lsi)*1]), &(inteval->stack[((hsi*30030+398640)*1+lsi)*1]), &(inteval->stack[((hsi*25740+291225)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+241175)*1+lsi)*1]), &(inteval->stack[((hsi*42900+104060)*1+lsi)*1]), &(inteval->stack[((hsi*36300+316965)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+104060)*1+lsi)*1]), &(inteval->stack[((hsi*54450+241175)*1+lsi)*1]), &(inteval->stack[((hsi*45375+353265)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+241175)*1+lsi)*1]), &(inteval->stack[((hsi*63525+104060)*1+lsi)*1]), &(inteval->stack[((hsi*51975+189200)*1+lsi)*1]),55);
HRRPart1bra0ket0kk(inteval, &(inteval->stack[((hsi*71280+32780)*1+lsi)*1]), &(inteval->stack[((hsi*69300+241175)*1+lsi)*1]), &(inteval->stack[((hsi*55440+440220)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*71280+32780)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
