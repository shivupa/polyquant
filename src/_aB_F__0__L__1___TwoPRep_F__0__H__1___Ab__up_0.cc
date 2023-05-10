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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
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
#include <_aB_F__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__L__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,32560)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+127060)*1+lsi)*1]), &(inteval->stack[((hsi*990+25670)*1+lsi)*1]), &(inteval->stack[((hsi*825+26660)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+129535)*1+lsi)*1]), &(inteval->stack[((hsi*1170+24500)*1+lsi)*1]), &(inteval->stack[((hsi*990+25670)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+132505)*1+lsi)*1]), &(inteval->stack[((hsi*2970+129535)*1+lsi)*1]), &(inteval->stack[((hsi*2475+127060)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+137455)*1+lsi)*1]), &(inteval->stack[((hsi*1365+23135)*1+lsi)*1]), &(inteval->stack[((hsi*1170+24500)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+140965)*1+lsi)*1]), &(inteval->stack[((hsi*3510+137455)*1+lsi)*1]), &(inteval->stack[((hsi*2970+129535)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+146905)*1+lsi)*1]), &(inteval->stack[((hsi*5940+140965)*1+lsi)*1]), &(inteval->stack[((hsi*4950+132505)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+129535)*1+lsi)*1]), &(inteval->stack[((hsi*825+26660)*1+lsi)*1]), &(inteval->stack[((hsi*675+27485)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+155155)*1+lsi)*1]), &(inteval->stack[((hsi*2475+127060)*1+lsi)*1]), &(inteval->stack[((hsi*2025+129535)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+159205)*1+lsi)*1]), &(inteval->stack[((hsi*4950+132505)*1+lsi)*1]), &(inteval->stack[((hsi*4050+155155)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+127060)*1+lsi)*1]), &(inteval->stack[((hsi*8250+146905)*1+lsi)*1]), &(inteval->stack[((hsi*6750+159205)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+155155)*1+lsi)*1]), &(inteval->stack[((hsi*1575+21560)*1+lsi)*1]), &(inteval->stack[((hsi*1365+23135)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+159250)*1+lsi)*1]), &(inteval->stack[((hsi*4095+155155)*1+lsi)*1]), &(inteval->stack[((hsi*3510+137455)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+166270)*1+lsi)*1]), &(inteval->stack[((hsi*7020+159250)*1+lsi)*1]), &(inteval->stack[((hsi*5940+140965)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+176170)*1+lsi)*1]), &(inteval->stack[((hsi*9900+166270)*1+lsi)*1]), &(inteval->stack[((hsi*8250+146905)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+137185)*1+lsi)*1]), &(inteval->stack[((hsi*12375+176170)*1+lsi)*1]), &(inteval->stack[((hsi*10125+127060)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+127060)*1+lsi)*1]), &(inteval->stack[((hsi*1386+18074)*1+lsi)*1]), &(inteval->stack[((hsi*1155+19460)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+130525)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16436)*1+lsi)*1]), &(inteval->stack[((hsi*1386+18074)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+151360)*1+lsi)*1]), &(inteval->stack[((hsi*4158+130525)*1+lsi)*1]), &(inteval->stack[((hsi*3465+127060)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+21560)*1+lsi)*1]), &(inteval->stack[((hsi*1911+14525)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16436)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+158290)*1+lsi)*1]), &(inteval->stack[((hsi*4914+21560)*1+lsi)*1]), &(inteval->stack[((hsi*4158+130525)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+166606)*1+lsi)*1]), &(inteval->stack[((hsi*8316+158290)*1+lsi)*1]), &(inteval->stack[((hsi*6930+151360)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+130525)*1+lsi)*1]), &(inteval->stack[((hsi*1155+19460)*1+lsi)*1]), &(inteval->stack[((hsi*945+20615)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+178156)*1+lsi)*1]), &(inteval->stack[((hsi*3465+127060)*1+lsi)*1]), &(inteval->stack[((hsi*2835+130525)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+127060)*1+lsi)*1]), &(inteval->stack[((hsi*6930+151360)*1+lsi)*1]), &(inteval->stack[((hsi*5670+178156)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+178156)*1+lsi)*1]), &(inteval->stack[((hsi*11550+166606)*1+lsi)*1]), &(inteval->stack[((hsi*9450+127060)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+127060)*1+lsi)*1]), &(inteval->stack[((hsi*2205+12320)*1+lsi)*1]), &(inteval->stack[((hsi*1911+14525)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+192331)*1+lsi)*1]), &(inteval->stack[((hsi*5733+127060)*1+lsi)*1]), &(inteval->stack[((hsi*4914+21560)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+12320)*1+lsi)*1]), &(inteval->stack[((hsi*9828+192331)*1+lsi)*1]), &(inteval->stack[((hsi*8316+158290)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+192331)*1+lsi)*1]), &(inteval->stack[((hsi*13860+12320)*1+lsi)*1]), &(inteval->stack[((hsi*11550+166606)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+151360)*1+lsi)*1]), &(inteval->stack[((hsi*17325+192331)*1+lsi)*1]), &(inteval->stack[((hsi*14175+178156)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*42525+171205)*1+lsi)*1]), &(inteval->stack[((hsi*19845+151360)*1+lsi)*1]), &(inteval->stack[((hsi*14175+137185)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+12320)*1+lsi)*1]), &(inteval->stack[((hsi*660+30900)*1+lsi)*1]), &(inteval->stack[((hsi*550+31560)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+13970)*1+lsi)*1]), &(inteval->stack[((hsi*780+30120)*1+lsi)*1]), &(inteval->stack[((hsi*660+30900)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+15950)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13970)*1+lsi)*1]), &(inteval->stack[((hsi*1650+12320)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+127060)*1+lsi)*1]), &(inteval->stack[((hsi*910+29210)*1+lsi)*1]), &(inteval->stack[((hsi*780+30120)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+19250)*1+lsi)*1]), &(inteval->stack[((hsi*2340+127060)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13970)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+129400)*1+lsi)*1]), &(inteval->stack[((hsi*3960+19250)*1+lsi)*1]), &(inteval->stack[((hsi*3300+15950)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+23210)*1+lsi)*1]), &(inteval->stack[((hsi*550+31560)*1+lsi)*1]), &(inteval->stack[((hsi*450+32110)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+24560)*1+lsi)*1]), &(inteval->stack[((hsi*1650+12320)*1+lsi)*1]), &(inteval->stack[((hsi*1350+23210)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+213730)*1+lsi)*1]), &(inteval->stack[((hsi*3300+15950)*1+lsi)*1]), &(inteval->stack[((hsi*2700+24560)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+12320)*1+lsi)*1]), &(inteval->stack[((hsi*5500+129400)*1+lsi)*1]), &(inteval->stack[((hsi*4500+213730)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+23210)*1+lsi)*1]), &(inteval->stack[((hsi*1050+28160)*1+lsi)*1]), &(inteval->stack[((hsi*910+29210)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+25940)*1+lsi)*1]), &(inteval->stack[((hsi*2730+23210)*1+lsi)*1]), &(inteval->stack[((hsi*2340+127060)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+213730)*1+lsi)*1]), &(inteval->stack[((hsi*4680+25940)*1+lsi)*1]), &(inteval->stack[((hsi*3960+19250)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+19070)*1+lsi)*1]), &(inteval->stack[((hsi*6600+213730)*1+lsi)*1]), &(inteval->stack[((hsi*5500+129400)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+127060)*1+lsi)*1]), &(inteval->stack[((hsi*8250+19070)*1+lsi)*1]), &(inteval->stack[((hsi*6750+12320)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*28350+213730)*1+lsi)*1]), &(inteval->stack[((hsi*14175+137185)*1+lsi)*1]), &(inteval->stack[((hsi*9450+127060)*1+lsi)*1]),945);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*56700+242080)*1+lsi)*1]), &(inteval->stack[((hsi*42525+171205)*1+lsi)*1]), &(inteval->stack[((hsi*28350+213730)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+213730)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]), &(inteval->stack[((hsi*1540+9520)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+127060)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+218350)*1+lsi)*1]), &(inteval->stack[((hsi*5544+127060)*1+lsi)*1]), &(inteval->stack[((hsi*4620+213730)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+12320)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+132604)*1+lsi)*1]), &(inteval->stack[((hsi*6552+12320)*1+lsi)*1]), &(inteval->stack[((hsi*5544+127060)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+298780)*1+lsi)*1]), &(inteval->stack[((hsi*11088+132604)*1+lsi)*1]), &(inteval->stack[((hsi*9240+218350)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+227590)*1+lsi)*1]), &(inteval->stack[((hsi*1540+9520)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11060)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+18872)*1+lsi)*1]), &(inteval->stack[((hsi*4620+213730)*1+lsi)*1]), &(inteval->stack[((hsi*3780+227590)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+227590)*1+lsi)*1]), &(inteval->stack[((hsi*9240+218350)*1+lsi)*1]), &(inteval->stack[((hsi*7560+18872)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+314180)*1+lsi)*1]), &(inteval->stack[((hsi*15400+298780)*1+lsi)*1]), &(inteval->stack[((hsi*12600+227590)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+213730)*1+lsi)*1]), &(inteval->stack[((hsi*2940+0)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+221374)*1+lsi)*1]), &(inteval->stack[((hsi*7644+213730)*1+lsi)*1]), &(inteval->stack[((hsi*6552+12320)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+221374)*1+lsi)*1]), &(inteval->stack[((hsi*11088+132604)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+213730)*1+lsi)*1]), &(inteval->stack[((hsi*18480+0)*1+lsi)*1]), &(inteval->stack[((hsi*15400+298780)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+0)*1+lsi)*1]), &(inteval->stack[((hsi*23100+213730)*1+lsi)*1]), &(inteval->stack[((hsi*18900+314180)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*59535+298780)*1+lsi)*1]), &(inteval->stack[((hsi*26460+0)*1+lsi)*1]), &(inteval->stack[((hsi*19845+151360)*1+lsi)*1]),945);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*85050+358315)*1+lsi)*1]), &(inteval->stack[((hsi*59535+298780)*1+lsi)*1]), &(inteval->stack[((hsi*42525+171205)*1+lsi)*1]),945);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*94500+32560)*1+lsi)*1]), &(inteval->stack[((hsi*85050+358315)*1+lsi)*1]), &(inteval->stack[((hsi*56700+242080)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*94500+32560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
