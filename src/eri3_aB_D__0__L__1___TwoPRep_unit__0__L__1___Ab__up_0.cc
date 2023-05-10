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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lk.h>
#include <HRRPart1bra0ket0ll.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_D__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_D__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5094)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_D__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+17244)*1+lsi)*1]), &(inteval->stack[((hsi*396+4098)*1+lsi)*1]), &(inteval->stack[((hsi*330+4494)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+18234)*1+lsi)*1]), &(inteval->stack[((hsi*468+3630)*1+lsi)*1]), &(inteval->stack[((hsi*396+4098)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+19422)*1+lsi)*1]), &(inteval->stack[((hsi*1188+18234)*1+lsi)*1]), &(inteval->stack[((hsi*990+17244)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+21402)*1+lsi)*1]), &(inteval->stack[((hsi*546+3084)*1+lsi)*1]), &(inteval->stack[((hsi*468+3630)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+22806)*1+lsi)*1]), &(inteval->stack[((hsi*1404+21402)*1+lsi)*1]), &(inteval->stack[((hsi*1188+18234)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+25182)*1+lsi)*1]), &(inteval->stack[((hsi*2376+22806)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19422)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+28482)*1+lsi)*1]), &(inteval->stack[((hsi*630+2454)*1+lsi)*1]), &(inteval->stack[((hsi*546+3084)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+30120)*1+lsi)*1]), &(inteval->stack[((hsi*1638+28482)*1+lsi)*1]), &(inteval->stack[((hsi*1404+21402)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+32928)*1+lsi)*1]), &(inteval->stack[((hsi*2808+30120)*1+lsi)*1]), &(inteval->stack[((hsi*2376+22806)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+36888)*1+lsi)*1]), &(inteval->stack[((hsi*3960+32928)*1+lsi)*1]), &(inteval->stack[((hsi*3300+25182)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+21402)*1+lsi)*1]), &(inteval->stack[((hsi*720+1734)*1+lsi)*1]), &(inteval->stack[((hsi*630+2454)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+41838)*1+lsi)*1]), &(inteval->stack[((hsi*1890+21402)*1+lsi)*1]), &(inteval->stack[((hsi*1638+28482)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+45114)*1+lsi)*1]), &(inteval->stack[((hsi*3276+41838)*1+lsi)*1]), &(inteval->stack[((hsi*2808+30120)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+49794)*1+lsi)*1]), &(inteval->stack[((hsi*4680+45114)*1+lsi)*1]), &(inteval->stack[((hsi*3960+32928)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+28482)*1+lsi)*1]), &(inteval->stack[((hsi*5940+49794)*1+lsi)*1]), &(inteval->stack[((hsi*4950+36888)*1+lsi)*1]),6);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*2160+55734)*1+lsi)*1]), &(inteval->stack[((hsi*816+918)*1+lsi)*1]), &(inteval->stack[((hsi*720+1734)*1+lsi)*1]),6);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*3780+57894)*1+lsi)*1]), &(inteval->stack[((hsi*2160+55734)*1+lsi)*1]), &(inteval->stack[((hsi*1890+21402)*1+lsi)*1]),6);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*5460+61674)*1+lsi)*1]), &(inteval->stack[((hsi*3780+57894)*1+lsi)*1]), &(inteval->stack[((hsi*3276+41838)*1+lsi)*1]),6);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*7020+67134)*1+lsi)*1]), &(inteval->stack[((hsi*5460+61674)*1+lsi)*1]), &(inteval->stack[((hsi*4680+45114)*1+lsi)*1]),6);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*8316+74154)*1+lsi)*1]), &(inteval->stack[((hsi*7020+67134)*1+lsi)*1]), &(inteval->stack[((hsi*5940+49794)*1+lsi)*1]),6);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*9240+41838)*1+lsi)*1]), &(inteval->stack[((hsi*8316+74154)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28482)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+51078)*1+lsi)*1]), &(inteval->stack[((hsi*330+4494)*1+lsi)*1]), &(inteval->stack[((hsi*270+4824)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+51888)*1+lsi)*1]), &(inteval->stack[((hsi*990+17244)*1+lsi)*1]), &(inteval->stack[((hsi*810+51078)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+21402)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19422)*1+lsi)*1]), &(inteval->stack[((hsi*1620+51888)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+51078)*1+lsi)*1]), &(inteval->stack[((hsi*3300+25182)*1+lsi)*1]), &(inteval->stack[((hsi*2700+21402)*1+lsi)*1]),6);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*5670+17244)*1+lsi)*1]), &(inteval->stack[((hsi*4950+36888)*1+lsi)*1]), &(inteval->stack[((hsi*4050+51078)*1+lsi)*1]),6);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*7560+82470)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28482)*1+lsi)*1]), &(inteval->stack[((hsi*5670+17244)*1+lsi)*1]),6);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*9720+17244)*1+lsi)*1]), &(inteval->stack[((hsi*9240+41838)*1+lsi)*1]), &(inteval->stack[((hsi*7560+82470)*1+lsi)*1]),6);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*2448+26964)*1+lsi)*1]), &(inteval->stack[((hsi*918+0)*1+lsi)*1]), &(inteval->stack[((hsi*816+918)*1+lsi)*1]),6);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*4320+29412)*1+lsi)*1]), &(inteval->stack[((hsi*2448+26964)*1+lsi)*1]), &(inteval->stack[((hsi*2160+55734)*1+lsi)*1]),6);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*6300+33732)*1+lsi)*1]), &(inteval->stack[((hsi*4320+29412)*1+lsi)*1]), &(inteval->stack[((hsi*3780+57894)*1+lsi)*1]),6);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*8190+51078)*1+lsi)*1]), &(inteval->stack[((hsi*6300+33732)*1+lsi)*1]), &(inteval->stack[((hsi*5460+61674)*1+lsi)*1]),6);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*9828+26964)*1+lsi)*1]), &(inteval->stack[((hsi*8190+51078)*1+lsi)*1]), &(inteval->stack[((hsi*7020+67134)*1+lsi)*1]),6);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*11088+51078)*1+lsi)*1]), &(inteval->stack[((hsi*9828+26964)*1+lsi)*1]), &(inteval->stack[((hsi*8316+74154)*1+lsi)*1]),6);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*11880+26964)*1+lsi)*1]), &(inteval->stack[((hsi*11088+51078)*1+lsi)*1]), &(inteval->stack[((hsi*9240+41838)*1+lsi)*1]),6);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*12150+5094)*1+lsi)*1]), &(inteval->stack[((hsi*11880+26964)*1+lsi)*1]), &(inteval->stack[((hsi*9720+17244)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12150+5094)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
