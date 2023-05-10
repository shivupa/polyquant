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
#include <_aB_G__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__M__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,51500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+224750)*1+lsi)*1]), &(inteval->stack[((hsi*1638+39596)*1+lsi)*1]), &(inteval->stack[((hsi*1386+41234)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+228908)*1+lsi)*1]), &(inteval->stack[((hsi*1911+37685)*1+lsi)*1]), &(inteval->stack[((hsi*1638+39596)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+233822)*1+lsi)*1]), &(inteval->stack[((hsi*4914+228908)*1+lsi)*1]), &(inteval->stack[((hsi*4158+224750)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+242138)*1+lsi)*1]), &(inteval->stack[((hsi*2205+35480)*1+lsi)*1]), &(inteval->stack[((hsi*1911+37685)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+247871)*1+lsi)*1]), &(inteval->stack[((hsi*5733+242138)*1+lsi)*1]), &(inteval->stack[((hsi*4914+228908)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+257699)*1+lsi)*1]), &(inteval->stack[((hsi*9828+247871)*1+lsi)*1]), &(inteval->stack[((hsi*8316+233822)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+228908)*1+lsi)*1]), &(inteval->stack[((hsi*1386+41234)*1+lsi)*1]), &(inteval->stack[((hsi*1155+42620)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+271559)*1+lsi)*1]), &(inteval->stack[((hsi*4158+224750)*1+lsi)*1]), &(inteval->stack[((hsi*3465+228908)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+278489)*1+lsi)*1]), &(inteval->stack[((hsi*8316+233822)*1+lsi)*1]), &(inteval->stack[((hsi*6930+271559)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+224750)*1+lsi)*1]), &(inteval->stack[((hsi*13860+257699)*1+lsi)*1]), &(inteval->stack[((hsi*11550+278489)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+271559)*1+lsi)*1]), &(inteval->stack[((hsi*2520+32960)*1+lsi)*1]), &(inteval->stack[((hsi*2205+35480)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+278174)*1+lsi)*1]), &(inteval->stack[((hsi*6615+271559)*1+lsi)*1]), &(inteval->stack[((hsi*5733+242138)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+289640)*1+lsi)*1]), &(inteval->stack[((hsi*11466+278174)*1+lsi)*1]), &(inteval->stack[((hsi*9828+247871)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+306020)*1+lsi)*1]), &(inteval->stack[((hsi*16380+289640)*1+lsi)*1]), &(inteval->stack[((hsi*13860+257699)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+242075)*1+lsi)*1]), &(inteval->stack[((hsi*20790+306020)*1+lsi)*1]), &(inteval->stack[((hsi*17325+224750)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+224750)*1+lsi)*1]), &(inteval->stack[((hsi*2184+27388)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29572)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+230294)*1+lsi)*1]), &(inteval->stack[((hsi*2548+24840)*1+lsi)*1]), &(inteval->stack[((hsi*2184+27388)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+266330)*1+lsi)*1]), &(inteval->stack[((hsi*6552+230294)*1+lsi)*1]), &(inteval->stack[((hsi*5544+224750)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+32960)*1+lsi)*1]), &(inteval->stack[((hsi*2940+21900)*1+lsi)*1]), &(inteval->stack[((hsi*2548+24840)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+277418)*1+lsi)*1]), &(inteval->stack[((hsi*7644+32960)*1+lsi)*1]), &(inteval->stack[((hsi*6552+230294)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+290522)*1+lsi)*1]), &(inteval->stack[((hsi*13104+277418)*1+lsi)*1]), &(inteval->stack[((hsi*11088+266330)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+230294)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29572)*1+lsi)*1]), &(inteval->stack[((hsi*1540+31420)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+309002)*1+lsi)*1]), &(inteval->stack[((hsi*5544+224750)*1+lsi)*1]), &(inteval->stack[((hsi*4620+230294)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+224750)*1+lsi)*1]), &(inteval->stack[((hsi*11088+266330)*1+lsi)*1]), &(inteval->stack[((hsi*9240+309002)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+309002)*1+lsi)*1]), &(inteval->stack[((hsi*18480+290522)*1+lsi)*1]), &(inteval->stack[((hsi*15400+224750)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+224750)*1+lsi)*1]), &(inteval->stack[((hsi*3360+18540)*1+lsi)*1]), &(inteval->stack[((hsi*2940+21900)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+332102)*1+lsi)*1]), &(inteval->stack[((hsi*8820+224750)*1+lsi)*1]), &(inteval->stack[((hsi*7644+32960)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+18540)*1+lsi)*1]), &(inteval->stack[((hsi*15288+332102)*1+lsi)*1]), &(inteval->stack[((hsi*13104+277418)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+332102)*1+lsi)*1]), &(inteval->stack[((hsi*21840+18540)*1+lsi)*1]), &(inteval->stack[((hsi*18480+290522)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+266330)*1+lsi)*1]), &(inteval->stack[((hsi*27720+332102)*1+lsi)*1]), &(inteval->stack[((hsi*23100+309002)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*72765+298670)*1+lsi)*1]), &(inteval->stack[((hsi*32340+266330)*1+lsi)*1]), &(inteval->stack[((hsi*24255+242075)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+18540)*1+lsi)*1]), &(inteval->stack[((hsi*1170+48515)*1+lsi)*1]), &(inteval->stack[((hsi*990+49685)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+21510)*1+lsi)*1]), &(inteval->stack[((hsi*1365+47150)*1+lsi)*1]), &(inteval->stack[((hsi*1170+48515)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+25020)*1+lsi)*1]), &(inteval->stack[((hsi*3510+21510)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18540)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+224750)*1+lsi)*1]), &(inteval->stack[((hsi*1575+45575)*1+lsi)*1]), &(inteval->stack[((hsi*1365+47150)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+228845)*1+lsi)*1]), &(inteval->stack[((hsi*4095+224750)*1+lsi)*1]), &(inteval->stack[((hsi*3510+21510)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+30960)*1+lsi)*1]), &(inteval->stack[((hsi*7020+228845)*1+lsi)*1]), &(inteval->stack[((hsi*5940+25020)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+235865)*1+lsi)*1]), &(inteval->stack[((hsi*990+49685)*1+lsi)*1]), &(inteval->stack[((hsi*825+50675)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+371435)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18540)*1+lsi)*1]), &(inteval->stack[((hsi*2475+235865)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+376385)*1+lsi)*1]), &(inteval->stack[((hsi*5940+25020)*1+lsi)*1]), &(inteval->stack[((hsi*4950+371435)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+18540)*1+lsi)*1]), &(inteval->stack[((hsi*9900+30960)*1+lsi)*1]), &(inteval->stack[((hsi*8250+376385)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+235865)*1+lsi)*1]), &(inteval->stack[((hsi*1800+43775)*1+lsi)*1]), &(inteval->stack[((hsi*1575+45575)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+40860)*1+lsi)*1]), &(inteval->stack[((hsi*4725+235865)*1+lsi)*1]), &(inteval->stack[((hsi*4095+224750)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+371435)*1+lsi)*1]), &(inteval->stack[((hsi*8190+40860)*1+lsi)*1]), &(inteval->stack[((hsi*7020+228845)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+224750)*1+lsi)*1]), &(inteval->stack[((hsi*11700+371435)*1+lsi)*1]), &(inteval->stack[((hsi*9900+30960)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+30915)*1+lsi)*1]), &(inteval->stack[((hsi*14850+224750)*1+lsi)*1]), &(inteval->stack[((hsi*12375+18540)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*51975+371435)*1+lsi)*1]), &(inteval->stack[((hsi*24255+242075)*1+lsi)*1]), &(inteval->stack[((hsi*17325+30915)*1+lsi)*1]),1155);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*103950+423410)*1+lsi)*1]), &(inteval->stack[((hsi*72765+298670)*1+lsi)*1]), &(inteval->stack[((hsi*51975+371435)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+371435)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+378563)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+224750)*1+lsi)*1]), &(inteval->stack[((hsi*8424+378563)*1+lsi)*1]), &(inteval->stack[((hsi*7128+371435)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+386987)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+18540)*1+lsi)*1]), &(inteval->stack[((hsi*9828+386987)*1+lsi)*1]), &(inteval->stack[((hsi*8424+378563)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+239006)*1+lsi)*1]), &(inteval->stack[((hsi*16848+18540)*1+lsi)*1]), &(inteval->stack[((hsi*14256+224750)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+396815)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+402755)*1+lsi)*1]), &(inteval->stack[((hsi*7128+371435)*1+lsi)*1]), &(inteval->stack[((hsi*5940+396815)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+527360)*1+lsi)*1]), &(inteval->stack[((hsi*14256+224750)*1+lsi)*1]), &(inteval->stack[((hsi*11880+402755)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+547160)*1+lsi)*1]), &(inteval->stack[((hsi*23760+239006)*1+lsi)*1]), &(inteval->stack[((hsi*19800+527360)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+396815)*1+lsi)*1]), &(inteval->stack[((hsi*4320+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+527360)*1+lsi)*1]), &(inteval->stack[((hsi*11340+396815)*1+lsi)*1]), &(inteval->stack[((hsi*9828+386987)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+371435)*1+lsi)*1]), &(inteval->stack[((hsi*19656+527360)*1+lsi)*1]), &(inteval->stack[((hsi*16848+18540)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+0)*1+lsi)*1]), &(inteval->stack[((hsi*28080+371435)*1+lsi)*1]), &(inteval->stack[((hsi*23760+239006)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+224750)*1+lsi)*1]), &(inteval->stack[((hsi*35640+0)*1+lsi)*1]), &(inteval->stack[((hsi*29700+547160)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*97020+527360)*1+lsi)*1]), &(inteval->stack[((hsi*41580+224750)*1+lsi)*1]), &(inteval->stack[((hsi*32340+266330)*1+lsi)*1]),1155);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*145530+624380)*1+lsi)*1]), &(inteval->stack[((hsi*97020+527360)*1+lsi)*1]), &(inteval->stack[((hsi*72765+298670)*1+lsi)*1]),1155);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*173250+51500)*1+lsi)*1]), &(inteval->stack[((hsi*145530+624380)*1+lsi)*1]), &(inteval->stack[((hsi*103950+423410)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*173250+51500)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
