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
#include <HRRPart0bra0ket0hp.h>
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
#include <_aB_H__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+106820)*1+lsi)*1]), &(inteval->stack[((hsi*1386+23954)*1+lsi)*1]), &(inteval->stack[((hsi*1155+25340)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+110285)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22316)*1+lsi)*1]), &(inteval->stack[((hsi*1386+23954)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+114443)*1+lsi)*1]), &(inteval->stack[((hsi*4158+110285)*1+lsi)*1]), &(inteval->stack[((hsi*3465+106820)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+121373)*1+lsi)*1]), &(inteval->stack[((hsi*1911+20405)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22316)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+126287)*1+lsi)*1]), &(inteval->stack[((hsi*4914+121373)*1+lsi)*1]), &(inteval->stack[((hsi*4158+110285)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+134603)*1+lsi)*1]), &(inteval->stack[((hsi*8316+126287)*1+lsi)*1]), &(inteval->stack[((hsi*6930+114443)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+146153)*1+lsi)*1]), &(inteval->stack[((hsi*2205+18200)*1+lsi)*1]), &(inteval->stack[((hsi*1911+20405)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+151886)*1+lsi)*1]), &(inteval->stack[((hsi*5733+146153)*1+lsi)*1]), &(inteval->stack[((hsi*4914+121373)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+161714)*1+lsi)*1]), &(inteval->stack[((hsi*9828+151886)*1+lsi)*1]), &(inteval->stack[((hsi*8316+126287)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+175574)*1+lsi)*1]), &(inteval->stack[((hsi*13860+161714)*1+lsi)*1]), &(inteval->stack[((hsi*11550+134603)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+121373)*1+lsi)*1]), &(inteval->stack[((hsi*1155+25340)*1+lsi)*1]), &(inteval->stack[((hsi*945+26495)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+124208)*1+lsi)*1]), &(inteval->stack[((hsi*3465+106820)*1+lsi)*1]), &(inteval->stack[((hsi*2835+121373)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+192899)*1+lsi)*1]), &(inteval->stack[((hsi*6930+114443)*1+lsi)*1]), &(inteval->stack[((hsi*5670+124208)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+106820)*1+lsi)*1]), &(inteval->stack[((hsi*11550+134603)*1+lsi)*1]), &(inteval->stack[((hsi*9450+192899)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+120995)*1+lsi)*1]), &(inteval->stack[((hsi*17325+175574)*1+lsi)*1]), &(inteval->stack[((hsi*14175+106820)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+106820)*1+lsi)*1]), &(inteval->stack[((hsi*2520+15680)*1+lsi)*1]), &(inteval->stack[((hsi*2205+18200)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+15680)*1+lsi)*1]), &(inteval->stack[((hsi*6615+106820)*1+lsi)*1]), &(inteval->stack[((hsi*5733+146153)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+192899)*1+lsi)*1]), &(inteval->stack[((hsi*11466+15680)*1+lsi)*1]), &(inteval->stack[((hsi*9828+151886)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+140840)*1+lsi)*1]), &(inteval->stack[((hsi*16380+192899)*1+lsi)*1]), &(inteval->stack[((hsi*13860+161714)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+192899)*1+lsi)*1]), &(inteval->stack[((hsi*20790+140840)*1+lsi)*1]), &(inteval->stack[((hsi*17325+175574)*1+lsi)*1]),21);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*26460+140840)*1+lsi)*1]), &(inteval->stack[((hsi*24255+192899)*1+lsi)*1]), &(inteval->stack[((hsi*19845+120995)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+106820)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12880)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+111440)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+116984)*1+lsi)*1]), &(inteval->stack[((hsi*5544+111440)*1+lsi)*1]), &(inteval->stack[((hsi*4620+106820)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+126224)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+15680)*1+lsi)*1]), &(inteval->stack[((hsi*6552+126224)*1+lsi)*1]), &(inteval->stack[((hsi*5544+111440)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+167300)*1+lsi)*1]), &(inteval->stack[((hsi*11088+15680)*1+lsi)*1]), &(inteval->stack[((hsi*9240+116984)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+132776)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+182700)*1+lsi)*1]), &(inteval->stack[((hsi*7644+132776)*1+lsi)*1]), &(inteval->stack[((hsi*6552+126224)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+195804)*1+lsi)*1]), &(inteval->stack[((hsi*13104+182700)*1+lsi)*1]), &(inteval->stack[((hsi*11088+15680)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+214284)*1+lsi)*1]), &(inteval->stack[((hsi*18480+195804)*1+lsi)*1]), &(inteval->stack[((hsi*15400+167300)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+15680)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12880)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14420)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+6300)*1+lsi)*1]), &(inteval->stack[((hsi*4620+106820)*1+lsi)*1]), &(inteval->stack[((hsi*3780+15680)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+13860)*1+lsi)*1]), &(inteval->stack[((hsi*9240+116984)*1+lsi)*1]), &(inteval->stack[((hsi*7560+6300)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+106820)*1+lsi)*1]), &(inteval->stack[((hsi*15400+167300)*1+lsi)*1]), &(inteval->stack[((hsi*12600+13860)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+237384)*1+lsi)*1]), &(inteval->stack[((hsi*23100+214284)*1+lsi)*1]), &(inteval->stack[((hsi*18900+106820)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+106820)*1+lsi)*1]), &(inteval->stack[((hsi*3360+0)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*8820+106820)*1+lsi)*1]), &(inteval->stack[((hsi*7644+132776)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+106820)*1+lsi)*1]), &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+182700)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+167300)*1+lsi)*1]), &(inteval->stack[((hsi*21840+106820)*1+lsi)*1]), &(inteval->stack[((hsi*18480+195804)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+106820)*1+lsi)*1]), &(inteval->stack[((hsi*27720+167300)*1+lsi)*1]), &(inteval->stack[((hsi*23100+214284)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+167300)*1+lsi)*1]), &(inteval->stack[((hsi*32340+106820)*1+lsi)*1]), &(inteval->stack[((hsi*26460+237384)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*79380+27440)*1+lsi)*1]), &(inteval->stack[((hsi*35280+167300)*1+lsi)*1]), &(inteval->stack[((hsi*26460+140840)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*79380+27440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
