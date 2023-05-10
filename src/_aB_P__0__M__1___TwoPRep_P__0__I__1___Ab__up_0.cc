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
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_P__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__M__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5859)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+19719)*1+lsi)*1]), &(inteval->stack[((hsi*234+5262)*1+lsi)*1]), &(inteval->stack[((hsi*198+5496)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+20313)*1+lsi)*1]), &(inteval->stack[((hsi*273+4989)*1+lsi)*1]), &(inteval->stack[((hsi*234+5262)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+21015)*1+lsi)*1]), &(inteval->stack[((hsi*702+20313)*1+lsi)*1]), &(inteval->stack[((hsi*594+19719)*1+lsi)*1]),3);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*819+22203)*1+lsi)*1]), &(inteval->stack[((hsi*315+4674)*1+lsi)*1]), &(inteval->stack[((hsi*273+4989)*1+lsi)*1]),3);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1404+23022)*1+lsi)*1]), &(inteval->stack[((hsi*819+22203)*1+lsi)*1]), &(inteval->stack[((hsi*702+20313)*1+lsi)*1]),3);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1980+24426)*1+lsi)*1]), &(inteval->stack[((hsi*1404+23022)*1+lsi)*1]), &(inteval->stack[((hsi*1188+21015)*1+lsi)*1]),3);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*945+26406)*1+lsi)*1]), &(inteval->stack[((hsi*360+4314)*1+lsi)*1]), &(inteval->stack[((hsi*315+4674)*1+lsi)*1]),3);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*1638+27351)*1+lsi)*1]), &(inteval->stack[((hsi*945+26406)*1+lsi)*1]), &(inteval->stack[((hsi*819+22203)*1+lsi)*1]),3);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*2340+28989)*1+lsi)*1]), &(inteval->stack[((hsi*1638+27351)*1+lsi)*1]), &(inteval->stack[((hsi*1404+23022)*1+lsi)*1]),3);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*2970+31329)*1+lsi)*1]), &(inteval->stack[((hsi*2340+28989)*1+lsi)*1]), &(inteval->stack[((hsi*1980+24426)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+22203)*1+lsi)*1]), &(inteval->stack[((hsi*198+5496)*1+lsi)*1]), &(inteval->stack[((hsi*165+5694)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+22698)*1+lsi)*1]), &(inteval->stack[((hsi*594+19719)*1+lsi)*1]), &(inteval->stack[((hsi*495+22203)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+34299)*1+lsi)*1]), &(inteval->stack[((hsi*1188+21015)*1+lsi)*1]), &(inteval->stack[((hsi*990+22698)*1+lsi)*1]),3);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*2475+19719)*1+lsi)*1]), &(inteval->stack[((hsi*1980+24426)*1+lsi)*1]), &(inteval->stack[((hsi*1650+34299)*1+lsi)*1]),3);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*3465+22194)*1+lsi)*1]), &(inteval->stack[((hsi*2970+31329)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19719)*1+lsi)*1]),3);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*1080+19719)*1+lsi)*1]), &(inteval->stack[((hsi*408+3906)*1+lsi)*1]), &(inteval->stack[((hsi*360+4314)*1+lsi)*1]),3);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*1890+3906)*1+lsi)*1]), &(inteval->stack[((hsi*1080+19719)*1+lsi)*1]), &(inteval->stack[((hsi*945+26406)*1+lsi)*1]),3);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*2730+34299)*1+lsi)*1]), &(inteval->stack[((hsi*1890+3906)*1+lsi)*1]), &(inteval->stack[((hsi*1638+27351)*1+lsi)*1]),3);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*3510+37029)*1+lsi)*1]), &(inteval->stack[((hsi*2730+34299)*1+lsi)*1]), &(inteval->stack[((hsi*2340+28989)*1+lsi)*1]),3);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*4158+25659)*1+lsi)*1]), &(inteval->stack[((hsi*3510+37029)*1+lsi)*1]), &(inteval->stack[((hsi*2970+31329)*1+lsi)*1]),3);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*4620+29817)*1+lsi)*1]), &(inteval->stack[((hsi*4158+25659)*1+lsi)*1]), &(inteval->stack[((hsi*3465+22194)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+19719)*1+lsi)*1]), &(inteval->stack[((hsi*468+2712)*1+lsi)*1]), &(inteval->stack[((hsi*396+3180)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+20907)*1+lsi)*1]), &(inteval->stack[((hsi*546+2166)*1+lsi)*1]), &(inteval->stack[((hsi*468+2712)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+22311)*1+lsi)*1]), &(inteval->stack[((hsi*1404+20907)*1+lsi)*1]), &(inteval->stack[((hsi*1188+19719)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+24687)*1+lsi)*1]), &(inteval->stack[((hsi*630+1536)*1+lsi)*1]), &(inteval->stack[((hsi*546+2166)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+26325)*1+lsi)*1]), &(inteval->stack[((hsi*1638+24687)*1+lsi)*1]), &(inteval->stack[((hsi*1404+20907)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+34437)*1+lsi)*1]), &(inteval->stack[((hsi*2808+26325)*1+lsi)*1]), &(inteval->stack[((hsi*2376+22311)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+3906)*1+lsi)*1]), &(inteval->stack[((hsi*720+816)*1+lsi)*1]), &(inteval->stack[((hsi*630+1536)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+38397)*1+lsi)*1]), &(inteval->stack[((hsi*1890+3906)*1+lsi)*1]), &(inteval->stack[((hsi*1638+24687)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+41673)*1+lsi)*1]), &(inteval->stack[((hsi*3276+38397)*1+lsi)*1]), &(inteval->stack[((hsi*2808+26325)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+46353)*1+lsi)*1]), &(inteval->stack[((hsi*4680+41673)*1+lsi)*1]), &(inteval->stack[((hsi*3960+34437)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+24687)*1+lsi)*1]), &(inteval->stack[((hsi*396+3180)*1+lsi)*1]), &(inteval->stack[((hsi*330+3576)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+25677)*1+lsi)*1]), &(inteval->stack[((hsi*1188+19719)*1+lsi)*1]), &(inteval->stack[((hsi*990+24687)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+52293)*1+lsi)*1]), &(inteval->stack[((hsi*2376+22311)*1+lsi)*1]), &(inteval->stack[((hsi*1980+25677)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+19719)*1+lsi)*1]), &(inteval->stack[((hsi*3960+34437)*1+lsi)*1]), &(inteval->stack[((hsi*3300+52293)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+52293)*1+lsi)*1]), &(inteval->stack[((hsi*5940+46353)*1+lsi)*1]), &(inteval->stack[((hsi*4950+19719)*1+lsi)*1]),6);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*2160+19719)*1+lsi)*1]), &(inteval->stack[((hsi*816+0)*1+lsi)*1]), &(inteval->stack[((hsi*720+816)*1+lsi)*1]),6);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*3780+21879)*1+lsi)*1]), &(inteval->stack[((hsi*2160+19719)*1+lsi)*1]), &(inteval->stack[((hsi*1890+3906)*1+lsi)*1]),6);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*5460+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+21879)*1+lsi)*1]), &(inteval->stack[((hsi*3276+38397)*1+lsi)*1]),6);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*7020+19719)*1+lsi)*1]), &(inteval->stack[((hsi*5460+0)*1+lsi)*1]), &(inteval->stack[((hsi*4680+41673)*1+lsi)*1]),6);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*8316+34437)*1+lsi)*1]), &(inteval->stack[((hsi*7020+19719)*1+lsi)*1]), &(inteval->stack[((hsi*5940+46353)*1+lsi)*1]),6);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*9240+19719)*1+lsi)*1]), &(inteval->stack[((hsi*8316+34437)*1+lsi)*1]), &(inteval->stack[((hsi*6930+52293)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*13860+5859)*1+lsi)*1]), &(inteval->stack[((hsi*9240+19719)*1+lsi)*1]), &(inteval->stack[((hsi*4620+29817)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*13860+5859)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
