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
#include <_aB_P__0__M__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__M__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4635)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__M__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+15030)*1+lsi)*1]), &(inteval->stack[((hsi*234+4038)*1+lsi)*1]), &(inteval->stack[((hsi*198+4272)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+15624)*1+lsi)*1]), &(inteval->stack[((hsi*273+3765)*1+lsi)*1]), &(inteval->stack[((hsi*234+4038)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+16326)*1+lsi)*1]), &(inteval->stack[((hsi*702+15624)*1+lsi)*1]), &(inteval->stack[((hsi*594+15030)*1+lsi)*1]),3);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*819+17514)*1+lsi)*1]), &(inteval->stack[((hsi*315+3450)*1+lsi)*1]), &(inteval->stack[((hsi*273+3765)*1+lsi)*1]),3);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1404+18333)*1+lsi)*1]), &(inteval->stack[((hsi*819+17514)*1+lsi)*1]), &(inteval->stack[((hsi*702+15624)*1+lsi)*1]),3);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1980+19737)*1+lsi)*1]), &(inteval->stack[((hsi*1404+18333)*1+lsi)*1]), &(inteval->stack[((hsi*1188+16326)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+15624)*1+lsi)*1]), &(inteval->stack[((hsi*198+4272)*1+lsi)*1]), &(inteval->stack[((hsi*165+4470)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+21717)*1+lsi)*1]), &(inteval->stack[((hsi*594+15030)*1+lsi)*1]), &(inteval->stack[((hsi*495+15624)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+22707)*1+lsi)*1]), &(inteval->stack[((hsi*1188+16326)*1+lsi)*1]), &(inteval->stack[((hsi*990+21717)*1+lsi)*1]),3);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*2475+15030)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19737)*1+lsi)*1]), &(inteval->stack[((hsi*1650+22707)*1+lsi)*1]),3);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*945+21717)*1+lsi)*1]), &(inteval->stack[((hsi*360+3090)*1+lsi)*1]), &(inteval->stack[((hsi*315+3450)*1+lsi)*1]),3);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*1638+22662)*1+lsi)*1]), &(inteval->stack[((hsi*945+21717)*1+lsi)*1]), &(inteval->stack[((hsi*819+17514)*1+lsi)*1]),3);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*2340+24300)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22662)*1+lsi)*1]), &(inteval->stack[((hsi*1404+18333)*1+lsi)*1]),3);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*2970+26640)*1+lsi)*1]), &(inteval->stack[((hsi*2340+24300)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19737)*1+lsi)*1]),3);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*3465+17505)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26640)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15030)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+15030)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]), &(inteval->stack[((hsi*396+2364)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+3090)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+20970)*1+lsi)*1]), &(inteval->stack[((hsi*1404+3090)*1+lsi)*1]), &(inteval->stack[((hsi*1188+15030)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+23346)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+24984)*1+lsi)*1]), &(inteval->stack[((hsi*1638+23346)*1+lsi)*1]), &(inteval->stack[((hsi*1404+3090)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+27792)*1+lsi)*1]), &(inteval->stack[((hsi*2808+24984)*1+lsi)*1]), &(inteval->stack[((hsi*2376+20970)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+3090)*1+lsi)*1]), &(inteval->stack[((hsi*396+2364)*1+lsi)*1]), &(inteval->stack[((hsi*330+2760)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+31752)*1+lsi)*1]), &(inteval->stack[((hsi*1188+15030)*1+lsi)*1]), &(inteval->stack[((hsi*990+3090)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+33732)*1+lsi)*1]), &(inteval->stack[((hsi*2376+20970)*1+lsi)*1]), &(inteval->stack[((hsi*1980+31752)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+37032)*1+lsi)*1]), &(inteval->stack[((hsi*3960+27792)*1+lsi)*1]), &(inteval->stack[((hsi*3300+33732)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+31752)*1+lsi)*1]), &(inteval->stack[((hsi*720+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+0)*1+lsi)*1]), &(inteval->stack[((hsi*1890+31752)*1+lsi)*1]), &(inteval->stack[((hsi*1638+23346)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+31752)*1+lsi)*1]), &(inteval->stack[((hsi*3276+0)*1+lsi)*1]), &(inteval->stack[((hsi*2808+24984)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+20970)*1+lsi)*1]), &(inteval->stack[((hsi*4680+31752)*1+lsi)*1]), &(inteval->stack[((hsi*3960+27792)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+26910)*1+lsi)*1]), &(inteval->stack[((hsi*5940+20970)*1+lsi)*1]), &(inteval->stack[((hsi*4950+37032)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*10395+4635)*1+lsi)*1]), &(inteval->stack[((hsi*6930+26910)*1+lsi)*1]), &(inteval->stack[((hsi*3465+17505)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10395+4635)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
