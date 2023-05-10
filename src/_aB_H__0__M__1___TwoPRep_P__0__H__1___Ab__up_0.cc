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
#include <_aB_H__0__M__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25235)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+98000)*1+lsi)*1]), &(inteval->stack[((hsi*1638+21056)*1+lsi)*1]), &(inteval->stack[((hsi*1386+22694)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+102158)*1+lsi)*1]), &(inteval->stack[((hsi*1911+19145)*1+lsi)*1]), &(inteval->stack[((hsi*1638+21056)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+107072)*1+lsi)*1]), &(inteval->stack[((hsi*4914+102158)*1+lsi)*1]), &(inteval->stack[((hsi*4158+98000)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+115388)*1+lsi)*1]), &(inteval->stack[((hsi*2205+16940)*1+lsi)*1]), &(inteval->stack[((hsi*1911+19145)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+121121)*1+lsi)*1]), &(inteval->stack[((hsi*5733+115388)*1+lsi)*1]), &(inteval->stack[((hsi*4914+102158)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+130949)*1+lsi)*1]), &(inteval->stack[((hsi*9828+121121)*1+lsi)*1]), &(inteval->stack[((hsi*8316+107072)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+102158)*1+lsi)*1]), &(inteval->stack[((hsi*1386+22694)*1+lsi)*1]), &(inteval->stack[((hsi*1155+24080)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+144809)*1+lsi)*1]), &(inteval->stack[((hsi*4158+98000)*1+lsi)*1]), &(inteval->stack[((hsi*3465+102158)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+151739)*1+lsi)*1]), &(inteval->stack[((hsi*8316+107072)*1+lsi)*1]), &(inteval->stack[((hsi*6930+144809)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+98000)*1+lsi)*1]), &(inteval->stack[((hsi*13860+130949)*1+lsi)*1]), &(inteval->stack[((hsi*11550+151739)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+144809)*1+lsi)*1]), &(inteval->stack[((hsi*2520+14420)*1+lsi)*1]), &(inteval->stack[((hsi*2205+16940)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+151424)*1+lsi)*1]), &(inteval->stack[((hsi*6615+144809)*1+lsi)*1]), &(inteval->stack[((hsi*5733+115388)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+162890)*1+lsi)*1]), &(inteval->stack[((hsi*11466+151424)*1+lsi)*1]), &(inteval->stack[((hsi*9828+121121)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+179270)*1+lsi)*1]), &(inteval->stack[((hsi*16380+162890)*1+lsi)*1]), &(inteval->stack[((hsi*13860+130949)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+115325)*1+lsi)*1]), &(inteval->stack[((hsi*20790+179270)*1+lsi)*1]), &(inteval->stack[((hsi*17325+98000)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+98000)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+103544)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+139580)*1+lsi)*1]), &(inteval->stack[((hsi*6552+103544)*1+lsi)*1]), &(inteval->stack[((hsi*5544+98000)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+14420)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+150668)*1+lsi)*1]), &(inteval->stack[((hsi*7644+14420)*1+lsi)*1]), &(inteval->stack[((hsi*6552+103544)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+163772)*1+lsi)*1]), &(inteval->stack[((hsi*13104+150668)*1+lsi)*1]), &(inteval->stack[((hsi*11088+139580)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+103544)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12880)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+182252)*1+lsi)*1]), &(inteval->stack[((hsi*5544+98000)*1+lsi)*1]), &(inteval->stack[((hsi*4620+103544)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+98000)*1+lsi)*1]), &(inteval->stack[((hsi*11088+139580)*1+lsi)*1]), &(inteval->stack[((hsi*9240+182252)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+182252)*1+lsi)*1]), &(inteval->stack[((hsi*18480+163772)*1+lsi)*1]), &(inteval->stack[((hsi*15400+98000)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+98000)*1+lsi)*1]), &(inteval->stack[((hsi*3360+0)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+205352)*1+lsi)*1]), &(inteval->stack[((hsi*8820+98000)*1+lsi)*1]), &(inteval->stack[((hsi*7644+14420)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+0)*1+lsi)*1]), &(inteval->stack[((hsi*15288+205352)*1+lsi)*1]), &(inteval->stack[((hsi*13104+150668)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+205352)*1+lsi)*1]), &(inteval->stack[((hsi*21840+0)*1+lsi)*1]), &(inteval->stack[((hsi*18480+163772)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+139580)*1+lsi)*1]), &(inteval->stack[((hsi*27720+205352)*1+lsi)*1]), &(inteval->stack[((hsi*23100+182252)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*72765+25235)*1+lsi)*1]), &(inteval->stack[((hsi*32340+139580)*1+lsi)*1]), &(inteval->stack[((hsi*24255+115325)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*72765+25235)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
