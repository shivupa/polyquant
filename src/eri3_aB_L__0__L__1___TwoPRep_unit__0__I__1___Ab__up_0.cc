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
#include <eri3_aB_L__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_L__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_L__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+81900)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+89325)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+98235)*1+lsi)*1]), &(inteval->stack[((hsi*8910+89325)*1+lsi)*1]), &(inteval->stack[((hsi*7425+81900)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+113085)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+123615)*1+lsi)*1]), &(inteval->stack[((hsi*10530+113085)*1+lsi)*1]), &(inteval->stack[((hsi*8910+89325)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+141435)*1+lsi)*1]), &(inteval->stack[((hsi*17820+123615)*1+lsi)*1]), &(inteval->stack[((hsi*14850+98235)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+166185)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+178470)*1+lsi)*1]), &(inteval->stack[((hsi*12285+166185)*1+lsi)*1]), &(inteval->stack[((hsi*10530+113085)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+199530)*1+lsi)*1]), &(inteval->stack[((hsi*21060+178470)*1+lsi)*1]), &(inteval->stack[((hsi*17820+123615)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+229230)*1+lsi)*1]), &(inteval->stack[((hsi*29700+199530)*1+lsi)*1]), &(inteval->stack[((hsi*24750+141435)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+113085)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]), &(inteval->stack[((hsi*2025+23175)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+119160)*1+lsi)*1]), &(inteval->stack[((hsi*7425+81900)*1+lsi)*1]), &(inteval->stack[((hsi*6075+113085)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+266355)*1+lsi)*1]), &(inteval->stack[((hsi*14850+98235)*1+lsi)*1]), &(inteval->stack[((hsi*12150+119160)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+81900)*1+lsi)*1]), &(inteval->stack[((hsi*24750+141435)*1+lsi)*1]), &(inteval->stack[((hsi*20250+266355)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+112275)*1+lsi)*1]), &(inteval->stack[((hsi*37125+229230)*1+lsi)*1]), &(inteval->stack[((hsi*30375+81900)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+81900)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+81900)*1+lsi)*1]), &(inteval->stack[((hsi*12285+166185)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+266355)*1+lsi)*1]), &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*21060+178470)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+154800)*1+lsi)*1]), &(inteval->stack[((hsi*35100+266355)*1+lsi)*1]), &(inteval->stack[((hsi*29700+199530)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+266355)*1+lsi)*1]), &(inteval->stack[((hsi*44550+154800)*1+lsi)*1]), &(inteval->stack[((hsi*37125+229230)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+25200)*1+lsi)*1]), &(inteval->stack[((hsi*51975+266355)*1+lsi)*1]), &(inteval->stack[((hsi*42525+112275)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*56700+25200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
