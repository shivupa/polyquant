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
#include <_aB_PS__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,93744)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+398664)*1+lsi)*1]), &(inteval->stack[((hsi*5148+80610)*1+lsi)*1]), &(inteval->stack[((hsi*4356+85758)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+411732)*1+lsi)*1]), &(inteval->stack[((hsi*6006+74604)*1+lsi)*1]), &(inteval->stack[((hsi*5148+80610)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+427176)*1+lsi)*1]), &(inteval->stack[((hsi*15444+411732)*1+lsi)*1]), &(inteval->stack[((hsi*13068+398664)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+453312)*1+lsi)*1]), &(inteval->stack[((hsi*6930+67674)*1+lsi)*1]), &(inteval->stack[((hsi*6006+74604)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+471330)*1+lsi)*1]), &(inteval->stack[((hsi*18018+453312)*1+lsi)*1]), &(inteval->stack[((hsi*15444+411732)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+502218)*1+lsi)*1]), &(inteval->stack[((hsi*30888+471330)*1+lsi)*1]), &(inteval->stack[((hsi*26136+427176)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+545778)*1+lsi)*1]), &(inteval->stack[((hsi*7920+59754)*1+lsi)*1]), &(inteval->stack[((hsi*6930+67674)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+566568)*1+lsi)*1]), &(inteval->stack[((hsi*20790+545778)*1+lsi)*1]), &(inteval->stack[((hsi*18018+453312)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+602604)*1+lsi)*1]), &(inteval->stack[((hsi*36036+566568)*1+lsi)*1]), &(inteval->stack[((hsi*30888+471330)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+654084)*1+lsi)*1]), &(inteval->stack[((hsi*51480+602604)*1+lsi)*1]), &(inteval->stack[((hsi*43560+502218)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+453312)*1+lsi)*1]), &(inteval->stack[((hsi*4356+85758)*1+lsi)*1]), &(inteval->stack[((hsi*3630+90114)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+464202)*1+lsi)*1]), &(inteval->stack[((hsi*13068+398664)*1+lsi)*1]), &(inteval->stack[((hsi*10890+453312)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+719424)*1+lsi)*1]), &(inteval->stack[((hsi*26136+427176)*1+lsi)*1]), &(inteval->stack[((hsi*21780+464202)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+398664)*1+lsi)*1]), &(inteval->stack[((hsi*43560+502218)*1+lsi)*1]), &(inteval->stack[((hsi*36300+719424)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+453114)*1+lsi)*1]), &(inteval->stack[((hsi*65340+654084)*1+lsi)*1]), &(inteval->stack[((hsi*54450+398664)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+398664)*1+lsi)*1]), &(inteval->stack[((hsi*8976+50778)*1+lsi)*1]), &(inteval->stack[((hsi*7920+59754)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+50778)*1+lsi)*1]), &(inteval->stack[((hsi*23760+398664)*1+lsi)*1]), &(inteval->stack[((hsi*20790+545778)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+719424)*1+lsi)*1]), &(inteval->stack[((hsi*41580+50778)*1+lsi)*1]), &(inteval->stack[((hsi*36036+566568)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+779484)*1+lsi)*1]), &(inteval->stack[((hsi*60060+719424)*1+lsi)*1]), &(inteval->stack[((hsi*51480+602604)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+529344)*1+lsi)*1]), &(inteval->stack[((hsi*77220+779484)*1+lsi)*1]), &(inteval->stack[((hsi*65340+654084)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+620820)*1+lsi)*1]), &(inteval->stack[((hsi*91476+529344)*1+lsi)*1]), &(inteval->stack[((hsi*76230+453114)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+398664)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41340)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+414108)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+432360)*1+lsi)*1]), &(inteval->stack[((hsi*18252+414108)*1+lsi)*1]), &(inteval->stack[((hsi*15444+398664)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+463248)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+484542)*1+lsi)*1]), &(inteval->stack[((hsi*21294+463248)*1+lsi)*1]), &(inteval->stack[((hsi*18252+414108)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+521046)*1+lsi)*1]), &(inteval->stack[((hsi*36504+484542)*1+lsi)*1]), &(inteval->stack[((hsi*30888+432360)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+572526)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+50778)*1+lsi)*1]), &(inteval->stack[((hsi*24570+572526)*1+lsi)*1]), &(inteval->stack[((hsi*21294+463248)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+722460)*1+lsi)*1]), &(inteval->stack[((hsi*42588+50778)*1+lsi)*1]), &(inteval->stack[((hsi*36504+484542)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+783300)*1+lsi)*1]), &(inteval->stack[((hsi*60840+722460)*1+lsi)*1]), &(inteval->stack[((hsi*51480+521046)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+463248)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41340)*1+lsi)*1]), &(inteval->stack[((hsi*4290+46488)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+476118)*1+lsi)*1]), &(inteval->stack[((hsi*15444+398664)*1+lsi)*1]), &(inteval->stack[((hsi*12870+463248)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+860520)*1+lsi)*1]), &(inteval->stack[((hsi*30888+432360)*1+lsi)*1]), &(inteval->stack[((hsi*25740+476118)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+398664)*1+lsi)*1]), &(inteval->stack[((hsi*51480+521046)*1+lsi)*1]), &(inteval->stack[((hsi*42900+860520)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+463014)*1+lsi)*1]), &(inteval->stack[((hsi*77220+783300)*1+lsi)*1]), &(inteval->stack[((hsi*64350+398664)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+398664)*1+lsi)*1]), &(inteval->stack[((hsi*10608+0)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+0)*1+lsi)*1]), &(inteval->stack[((hsi*28080+398664)*1+lsi)*1]), &(inteval->stack[((hsi*24570+572526)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+860520)*1+lsi)*1]), &(inteval->stack[((hsi*49140+0)*1+lsi)*1]), &(inteval->stack[((hsi*42588+50778)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+0)*1+lsi)*1]), &(inteval->stack[((hsi*70980+860520)*1+lsi)*1]), &(inteval->stack[((hsi*60840+722460)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+860520)*1+lsi)*1]), &(inteval->stack[((hsi*91260+0)*1+lsi)*1]), &(inteval->stack[((hsi*77220+783300)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+722460)*1+lsi)*1]), &(inteval->stack[((hsi*108108+860520)*1+lsi)*1]), &(inteval->stack[((hsi*90090+463014)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*304920+93744)*1+lsi)*1]), &(inteval->stack[((hsi*120120+722460)*1+lsi)*1]), &(inteval->stack[((hsi*101640+620820)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*304920+93744)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
