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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
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
#include <_aB_G__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__L__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,44000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+185750)*1+lsi)*1]), &(inteval->stack[((hsi*1386+33914)*1+lsi)*1]), &(inteval->stack[((hsi*1155+35300)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+189215)*1+lsi)*1]), &(inteval->stack[((hsi*1638+32276)*1+lsi)*1]), &(inteval->stack[((hsi*1386+33914)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+193373)*1+lsi)*1]), &(inteval->stack[((hsi*4158+189215)*1+lsi)*1]), &(inteval->stack[((hsi*3465+185750)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+200303)*1+lsi)*1]), &(inteval->stack[((hsi*1911+30365)*1+lsi)*1]), &(inteval->stack[((hsi*1638+32276)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+205217)*1+lsi)*1]), &(inteval->stack[((hsi*4914+200303)*1+lsi)*1]), &(inteval->stack[((hsi*4158+189215)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+213533)*1+lsi)*1]), &(inteval->stack[((hsi*8316+205217)*1+lsi)*1]), &(inteval->stack[((hsi*6930+193373)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+189215)*1+lsi)*1]), &(inteval->stack[((hsi*1155+35300)*1+lsi)*1]), &(inteval->stack[((hsi*945+36455)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+225083)*1+lsi)*1]), &(inteval->stack[((hsi*3465+185750)*1+lsi)*1]), &(inteval->stack[((hsi*2835+189215)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+230753)*1+lsi)*1]), &(inteval->stack[((hsi*6930+193373)*1+lsi)*1]), &(inteval->stack[((hsi*5670+225083)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+185750)*1+lsi)*1]), &(inteval->stack[((hsi*11550+213533)*1+lsi)*1]), &(inteval->stack[((hsi*9450+230753)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+225083)*1+lsi)*1]), &(inteval->stack[((hsi*2205+28160)*1+lsi)*1]), &(inteval->stack[((hsi*1911+30365)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+230816)*1+lsi)*1]), &(inteval->stack[((hsi*5733+225083)*1+lsi)*1]), &(inteval->stack[((hsi*4914+200303)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+240644)*1+lsi)*1]), &(inteval->stack[((hsi*9828+230816)*1+lsi)*1]), &(inteval->stack[((hsi*8316+205217)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+254504)*1+lsi)*1]), &(inteval->stack[((hsi*13860+240644)*1+lsi)*1]), &(inteval->stack[((hsi*11550+213533)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+199925)*1+lsi)*1]), &(inteval->stack[((hsi*17325+254504)*1+lsi)*1]), &(inteval->stack[((hsi*14175+185750)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+185750)*1+lsi)*1]), &(inteval->stack[((hsi*1848+23512)*1+lsi)*1]), &(inteval->stack[((hsi*1540+25360)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+190370)*1+lsi)*1]), &(inteval->stack[((hsi*2184+21328)*1+lsi)*1]), &(inteval->stack[((hsi*1848+23512)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+28160)*1+lsi)*1]), &(inteval->stack[((hsi*5544+190370)*1+lsi)*1]), &(inteval->stack[((hsi*4620+185750)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+219770)*1+lsi)*1]), &(inteval->stack[((hsi*2548+18780)*1+lsi)*1]), &(inteval->stack[((hsi*2184+21328)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+226322)*1+lsi)*1]), &(inteval->stack[((hsi*6552+219770)*1+lsi)*1]), &(inteval->stack[((hsi*5544+190370)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+237410)*1+lsi)*1]), &(inteval->stack[((hsi*11088+226322)*1+lsi)*1]), &(inteval->stack[((hsi*9240+28160)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+190370)*1+lsi)*1]), &(inteval->stack[((hsi*1540+25360)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26900)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+252810)*1+lsi)*1]), &(inteval->stack[((hsi*4620+185750)*1+lsi)*1]), &(inteval->stack[((hsi*3780+190370)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+185750)*1+lsi)*1]), &(inteval->stack[((hsi*9240+28160)*1+lsi)*1]), &(inteval->stack[((hsi*7560+252810)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+252810)*1+lsi)*1]), &(inteval->stack[((hsi*15400+237410)*1+lsi)*1]), &(inteval->stack[((hsi*12600+185750)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+21328)*1+lsi)*1]), &(inteval->stack[((hsi*2940+15840)*1+lsi)*1]), &(inteval->stack[((hsi*2548+18780)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+185750)*1+lsi)*1]), &(inteval->stack[((hsi*7644+21328)*1+lsi)*1]), &(inteval->stack[((hsi*6552+219770)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+15840)*1+lsi)*1]), &(inteval->stack[((hsi*13104+185750)*1+lsi)*1]), &(inteval->stack[((hsi*11088+226322)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+271710)*1+lsi)*1]), &(inteval->stack[((hsi*18480+15840)*1+lsi)*1]), &(inteval->stack[((hsi*15400+237410)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+219770)*1+lsi)*1]), &(inteval->stack[((hsi*23100+271710)*1+lsi)*1]), &(inteval->stack[((hsi*18900+252810)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*59535+246230)*1+lsi)*1]), &(inteval->stack[((hsi*26460+219770)*1+lsi)*1]), &(inteval->stack[((hsi*19845+199925)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+15840)*1+lsi)*1]), &(inteval->stack[((hsi*990+41510)*1+lsi)*1]), &(inteval->stack[((hsi*825+42500)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+18315)*1+lsi)*1]), &(inteval->stack[((hsi*1170+40340)*1+lsi)*1]), &(inteval->stack[((hsi*990+41510)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+21285)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18315)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15840)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+185750)*1+lsi)*1]), &(inteval->stack[((hsi*1365+38975)*1+lsi)*1]), &(inteval->stack[((hsi*1170+40340)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+26235)*1+lsi)*1]), &(inteval->stack[((hsi*3510+185750)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18315)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+189260)*1+lsi)*1]), &(inteval->stack[((hsi*5940+26235)*1+lsi)*1]), &(inteval->stack[((hsi*4950+21285)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+32175)*1+lsi)*1]), &(inteval->stack[((hsi*825+42500)*1+lsi)*1]), &(inteval->stack[((hsi*675+43325)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+305765)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15840)*1+lsi)*1]), &(inteval->stack[((hsi*2025+32175)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+309815)*1+lsi)*1]), &(inteval->stack[((hsi*4950+21285)*1+lsi)*1]), &(inteval->stack[((hsi*4050+305765)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+15840)*1+lsi)*1]), &(inteval->stack[((hsi*8250+189260)*1+lsi)*1]), &(inteval->stack[((hsi*6750+309815)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+32175)*1+lsi)*1]), &(inteval->stack[((hsi*1575+37400)*1+lsi)*1]), &(inteval->stack[((hsi*1365+38975)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+36270)*1+lsi)*1]), &(inteval->stack[((hsi*4095+32175)*1+lsi)*1]), &(inteval->stack[((hsi*3510+185750)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+305765)*1+lsi)*1]), &(inteval->stack[((hsi*7020+36270)*1+lsi)*1]), &(inteval->stack[((hsi*5940+26235)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+25965)*1+lsi)*1]), &(inteval->stack[((hsi*9900+305765)*1+lsi)*1]), &(inteval->stack[((hsi*8250+189260)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+185750)*1+lsi)*1]), &(inteval->stack[((hsi*12375+25965)*1+lsi)*1]), &(inteval->stack[((hsi*10125+15840)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*42525+305765)*1+lsi)*1]), &(inteval->stack[((hsi*19845+199925)*1+lsi)*1]), &(inteval->stack[((hsi*14175+185750)*1+lsi)*1]),945);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*85050+348290)*1+lsi)*1]), &(inteval->stack[((hsi*59535+246230)*1+lsi)*1]), &(inteval->stack[((hsi*42525+305765)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+305765)*1+lsi)*1]), &(inteval->stack[((hsi*2376+9864)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12240)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+311705)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7056)*1+lsi)*1]), &(inteval->stack[((hsi*2376+9864)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+185750)*1+lsi)*1]), &(inteval->stack[((hsi*7128+311705)*1+lsi)*1]), &(inteval->stack[((hsi*5940+305765)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+318833)*1+lsi)*1]), &(inteval->stack[((hsi*3276+3780)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7056)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+15840)*1+lsi)*1]), &(inteval->stack[((hsi*8424+318833)*1+lsi)*1]), &(inteval->stack[((hsi*7128+311705)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+197630)*1+lsi)*1]), &(inteval->stack[((hsi*14256+15840)*1+lsi)*1]), &(inteval->stack[((hsi*11880+185750)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+327257)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12240)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14220)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+332117)*1+lsi)*1]), &(inteval->stack[((hsi*5940+305765)*1+lsi)*1]), &(inteval->stack[((hsi*4860+327257)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+433340)*1+lsi)*1]), &(inteval->stack[((hsi*11880+185750)*1+lsi)*1]), &(inteval->stack[((hsi*9720+332117)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+449540)*1+lsi)*1]), &(inteval->stack[((hsi*19800+197630)*1+lsi)*1]), &(inteval->stack[((hsi*16200+433340)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+327257)*1+lsi)*1]), &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*3276+3780)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+473840)*1+lsi)*1]), &(inteval->stack[((hsi*9828+327257)*1+lsi)*1]), &(inteval->stack[((hsi*8424+318833)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+305765)*1+lsi)*1]), &(inteval->stack[((hsi*16848+473840)*1+lsi)*1]), &(inteval->stack[((hsi*14256+15840)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+0)*1+lsi)*1]), &(inteval->stack[((hsi*23760+305765)*1+lsi)*1]), &(inteval->stack[((hsi*19800+197630)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+185750)*1+lsi)*1]), &(inteval->stack[((hsi*29700+0)*1+lsi)*1]), &(inteval->stack[((hsi*24300+449540)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*79380+433340)*1+lsi)*1]), &(inteval->stack[((hsi*34020+185750)*1+lsi)*1]), &(inteval->stack[((hsi*26460+219770)*1+lsi)*1]),945);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*119070+512720)*1+lsi)*1]), &(inteval->stack[((hsi*79380+433340)*1+lsi)*1]), &(inteval->stack[((hsi*59535+246230)*1+lsi)*1]),945);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*141750+44000)*1+lsi)*1]), &(inteval->stack[((hsi*119070+512720)*1+lsi)*1]), &(inteval->stack[((hsi*85050+348290)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*141750+44000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
