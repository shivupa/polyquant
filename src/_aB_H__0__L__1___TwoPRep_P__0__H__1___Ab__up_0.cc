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
#include <_aB_H__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21560)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+81095)*1+lsi)*1]), &(inteval->stack[((hsi*1386+18074)*1+lsi)*1]), &(inteval->stack[((hsi*1155+19460)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+84560)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16436)*1+lsi)*1]), &(inteval->stack[((hsi*1386+18074)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+88718)*1+lsi)*1]), &(inteval->stack[((hsi*4158+84560)*1+lsi)*1]), &(inteval->stack[((hsi*3465+81095)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+95648)*1+lsi)*1]), &(inteval->stack[((hsi*1911+14525)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16436)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+100562)*1+lsi)*1]), &(inteval->stack[((hsi*4914+95648)*1+lsi)*1]), &(inteval->stack[((hsi*4158+84560)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+108878)*1+lsi)*1]), &(inteval->stack[((hsi*8316+100562)*1+lsi)*1]), &(inteval->stack[((hsi*6930+88718)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+84560)*1+lsi)*1]), &(inteval->stack[((hsi*1155+19460)*1+lsi)*1]), &(inteval->stack[((hsi*945+20615)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+120428)*1+lsi)*1]), &(inteval->stack[((hsi*3465+81095)*1+lsi)*1]), &(inteval->stack[((hsi*2835+84560)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+126098)*1+lsi)*1]), &(inteval->stack[((hsi*6930+88718)*1+lsi)*1]), &(inteval->stack[((hsi*5670+120428)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+81095)*1+lsi)*1]), &(inteval->stack[((hsi*11550+108878)*1+lsi)*1]), &(inteval->stack[((hsi*9450+126098)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+120428)*1+lsi)*1]), &(inteval->stack[((hsi*2205+12320)*1+lsi)*1]), &(inteval->stack[((hsi*1911+14525)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+126161)*1+lsi)*1]), &(inteval->stack[((hsi*5733+120428)*1+lsi)*1]), &(inteval->stack[((hsi*4914+95648)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+135989)*1+lsi)*1]), &(inteval->stack[((hsi*9828+126161)*1+lsi)*1]), &(inteval->stack[((hsi*8316+100562)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+149849)*1+lsi)*1]), &(inteval->stack[((hsi*13860+135989)*1+lsi)*1]), &(inteval->stack[((hsi*11550+108878)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+95270)*1+lsi)*1]), &(inteval->stack[((hsi*17325+149849)*1+lsi)*1]), &(inteval->stack[((hsi*14175+81095)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+81095)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]), &(inteval->stack[((hsi*1540+9520)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+85715)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+12320)*1+lsi)*1]), &(inteval->stack[((hsi*5544+85715)*1+lsi)*1]), &(inteval->stack[((hsi*4620+81095)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+115115)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+121667)*1+lsi)*1]), &(inteval->stack[((hsi*6552+115115)*1+lsi)*1]), &(inteval->stack[((hsi*5544+85715)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+132755)*1+lsi)*1]), &(inteval->stack[((hsi*11088+121667)*1+lsi)*1]), &(inteval->stack[((hsi*9240+12320)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+85715)*1+lsi)*1]), &(inteval->stack[((hsi*1540+9520)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11060)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+148155)*1+lsi)*1]), &(inteval->stack[((hsi*4620+81095)*1+lsi)*1]), &(inteval->stack[((hsi*3780+85715)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+81095)*1+lsi)*1]), &(inteval->stack[((hsi*9240+12320)*1+lsi)*1]), &(inteval->stack[((hsi*7560+148155)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+148155)*1+lsi)*1]), &(inteval->stack[((hsi*15400+132755)*1+lsi)*1]), &(inteval->stack[((hsi*12600+81095)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+5488)*1+lsi)*1]), &(inteval->stack[((hsi*2940+0)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+81095)*1+lsi)*1]), &(inteval->stack[((hsi*7644+5488)*1+lsi)*1]), &(inteval->stack[((hsi*6552+115115)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+81095)*1+lsi)*1]), &(inteval->stack[((hsi*11088+121667)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+167055)*1+lsi)*1]), &(inteval->stack[((hsi*18480+0)*1+lsi)*1]), &(inteval->stack[((hsi*15400+132755)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+115115)*1+lsi)*1]), &(inteval->stack[((hsi*23100+167055)*1+lsi)*1]), &(inteval->stack[((hsi*18900+148155)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*59535+21560)*1+lsi)*1]), &(inteval->stack[((hsi*26460+115115)*1+lsi)*1]), &(inteval->stack[((hsi*19845+95270)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*59535+21560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
