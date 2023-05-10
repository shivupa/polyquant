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
#include <HRRPart0bra0ket0ip.h>
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
#include <_aB_I__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__L__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,35840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+141680)*1+lsi)*1]), &(inteval->stack[((hsi*1848+31192)*1+lsi)*1]), &(inteval->stack[((hsi*1540+33040)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+146300)*1+lsi)*1]), &(inteval->stack[((hsi*2184+29008)*1+lsi)*1]), &(inteval->stack[((hsi*1848+31192)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+151844)*1+lsi)*1]), &(inteval->stack[((hsi*5544+146300)*1+lsi)*1]), &(inteval->stack[((hsi*4620+141680)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+161084)*1+lsi)*1]), &(inteval->stack[((hsi*2548+26460)*1+lsi)*1]), &(inteval->stack[((hsi*2184+29008)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+167636)*1+lsi)*1]), &(inteval->stack[((hsi*6552+161084)*1+lsi)*1]), &(inteval->stack[((hsi*5544+146300)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+178724)*1+lsi)*1]), &(inteval->stack[((hsi*11088+167636)*1+lsi)*1]), &(inteval->stack[((hsi*9240+151844)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+194124)*1+lsi)*1]), &(inteval->stack[((hsi*2940+23520)*1+lsi)*1]), &(inteval->stack[((hsi*2548+26460)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+201768)*1+lsi)*1]), &(inteval->stack[((hsi*7644+194124)*1+lsi)*1]), &(inteval->stack[((hsi*6552+161084)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+214872)*1+lsi)*1]), &(inteval->stack[((hsi*13104+201768)*1+lsi)*1]), &(inteval->stack[((hsi*11088+167636)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+233352)*1+lsi)*1]), &(inteval->stack[((hsi*18480+214872)*1+lsi)*1]), &(inteval->stack[((hsi*15400+178724)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+161084)*1+lsi)*1]), &(inteval->stack[((hsi*1540+33040)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34580)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+164864)*1+lsi)*1]), &(inteval->stack[((hsi*4620+141680)*1+lsi)*1]), &(inteval->stack[((hsi*3780+161084)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+256452)*1+lsi)*1]), &(inteval->stack[((hsi*9240+151844)*1+lsi)*1]), &(inteval->stack[((hsi*7560+164864)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+141680)*1+lsi)*1]), &(inteval->stack[((hsi*15400+178724)*1+lsi)*1]), &(inteval->stack[((hsi*12600+256452)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+160580)*1+lsi)*1]), &(inteval->stack[((hsi*23100+233352)*1+lsi)*1]), &(inteval->stack[((hsi*18900+141680)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+141680)*1+lsi)*1]), &(inteval->stack[((hsi*3360+20160)*1+lsi)*1]), &(inteval->stack[((hsi*2940+23520)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+20160)*1+lsi)*1]), &(inteval->stack[((hsi*8820+141680)*1+lsi)*1]), &(inteval->stack[((hsi*7644+194124)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+256452)*1+lsi)*1]), &(inteval->stack[((hsi*15288+20160)*1+lsi)*1]), &(inteval->stack[((hsi*13104+201768)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+187040)*1+lsi)*1]), &(inteval->stack[((hsi*21840+256452)*1+lsi)*1]), &(inteval->stack[((hsi*18480+214872)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+256452)*1+lsi)*1]), &(inteval->stack[((hsi*27720+187040)*1+lsi)*1]), &(inteval->stack[((hsi*23100+233352)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+187040)*1+lsi)*1]), &(inteval->stack[((hsi*32340+256452)*1+lsi)*1]), &(inteval->stack[((hsi*26460+160580)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+141680)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+147620)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+154748)*1+lsi)*1]), &(inteval->stack[((hsi*7128+147620)*1+lsi)*1]), &(inteval->stack[((hsi*5940+141680)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+166628)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+20160)*1+lsi)*1]), &(inteval->stack[((hsi*8424+166628)*1+lsi)*1]), &(inteval->stack[((hsi*7128+147620)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+222320)*1+lsi)*1]), &(inteval->stack[((hsi*14256+20160)*1+lsi)*1]), &(inteval->stack[((hsi*11880+154748)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+175052)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+242120)*1+lsi)*1]), &(inteval->stack[((hsi*9828+175052)*1+lsi)*1]), &(inteval->stack[((hsi*8424+166628)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+258968)*1+lsi)*1]), &(inteval->stack[((hsi*16848+242120)*1+lsi)*1]), &(inteval->stack[((hsi*14256+20160)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+282728)*1+lsi)*1]), &(inteval->stack[((hsi*23760+258968)*1+lsi)*1]), &(inteval->stack[((hsi*19800+222320)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+20160)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18540)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+8100)*1+lsi)*1]), &(inteval->stack[((hsi*5940+141680)*1+lsi)*1]), &(inteval->stack[((hsi*4860+20160)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+17820)*1+lsi)*1]), &(inteval->stack[((hsi*11880+154748)*1+lsi)*1]), &(inteval->stack[((hsi*9720+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+141680)*1+lsi)*1]), &(inteval->stack[((hsi*19800+222320)*1+lsi)*1]), &(inteval->stack[((hsi*16200+17820)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+312428)*1+lsi)*1]), &(inteval->stack[((hsi*29700+282728)*1+lsi)*1]), &(inteval->stack[((hsi*24300+141680)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+141680)*1+lsi)*1]), &(inteval->stack[((hsi*4320+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*11340+141680)*1+lsi)*1]), &(inteval->stack[((hsi*9828+175052)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+141680)*1+lsi)*1]), &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*16848+242120)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+222320)*1+lsi)*1]), &(inteval->stack[((hsi*28080+141680)*1+lsi)*1]), &(inteval->stack[((hsi*23760+258968)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+141680)*1+lsi)*1]), &(inteval->stack[((hsi*35640+222320)*1+lsi)*1]), &(inteval->stack[((hsi*29700+282728)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+222320)*1+lsi)*1]), &(inteval->stack[((hsi*41580+141680)*1+lsi)*1]), &(inteval->stack[((hsi*34020+312428)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*105840+35840)*1+lsi)*1]), &(inteval->stack[((hsi*45360+222320)*1+lsi)*1]), &(inteval->stack[((hsi*35280+187040)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*105840+35840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
