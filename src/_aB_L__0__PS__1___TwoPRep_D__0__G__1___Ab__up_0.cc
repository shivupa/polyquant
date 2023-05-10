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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_L__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,76360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+343660)*1+lsi)*1]), &(inteval->stack[((hsi*5005+42735)*1+lsi)*1]), &(inteval->stack[((hsi*4290+47740)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+356530)*1+lsi)*1]), &(inteval->stack[((hsi*5775+36960)*1+lsi)*1]), &(inteval->stack[((hsi*5005+42735)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+371545)*1+lsi)*1]), &(inteval->stack[((hsi*15015+356530)*1+lsi)*1]), &(inteval->stack[((hsi*12870+343660)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+397285)*1+lsi)*1]), &(inteval->stack[((hsi*4290+47740)*1+lsi)*1]), &(inteval->stack[((hsi*3630+52030)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+408175)*1+lsi)*1]), &(inteval->stack[((hsi*12870+343660)*1+lsi)*1]), &(inteval->stack[((hsi*10890+397285)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+429955)*1+lsi)*1]), &(inteval->stack[((hsi*25740+371545)*1+lsi)*1]), &(inteval->stack[((hsi*21780+408175)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+397285)*1+lsi)*1]), &(inteval->stack[((hsi*6600+30360)*1+lsi)*1]), &(inteval->stack[((hsi*5775+36960)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+466255)*1+lsi)*1]), &(inteval->stack[((hsi*17325+397285)*1+lsi)*1]), &(inteval->stack[((hsi*15015+356530)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+496285)*1+lsi)*1]), &(inteval->stack[((hsi*30030+466255)*1+lsi)*1]), &(inteval->stack[((hsi*25740+371545)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+343660)*1+lsi)*1]), &(inteval->stack[((hsi*42900+496285)*1+lsi)*1]), &(inteval->stack[((hsi*36300+429955)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+30360)*1+lsi)*1]), &(inteval->stack[((hsi*4095+65785)*1+lsi)*1]), &(inteval->stack[((hsi*3510+69880)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+40890)*1+lsi)*1]), &(inteval->stack[((hsi*4725+61060)*1+lsi)*1]), &(inteval->stack[((hsi*4095+65785)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+398110)*1+lsi)*1]), &(inteval->stack[((hsi*12285+40890)*1+lsi)*1]), &(inteval->stack[((hsi*10530+30360)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+419170)*1+lsi)*1]), &(inteval->stack[((hsi*3510+69880)*1+lsi)*1]), &(inteval->stack[((hsi*2970+73390)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+428080)*1+lsi)*1]), &(inteval->stack[((hsi*10530+30360)*1+lsi)*1]), &(inteval->stack[((hsi*8910+419170)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+445900)*1+lsi)*1]), &(inteval->stack[((hsi*21060+398110)*1+lsi)*1]), &(inteval->stack[((hsi*17820+428080)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+419170)*1+lsi)*1]), &(inteval->stack[((hsi*5400+55660)*1+lsi)*1]), &(inteval->stack[((hsi*4725+61060)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+475600)*1+lsi)*1]), &(inteval->stack[((hsi*14175+419170)*1+lsi)*1]), &(inteval->stack[((hsi*12285+40890)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+30360)*1+lsi)*1]), &(inteval->stack[((hsi*24570+475600)*1+lsi)*1]), &(inteval->stack[((hsi*21060+398110)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+398110)*1+lsi)*1]), &(inteval->stack[((hsi*35100+30360)*1+lsi)*1]), &(inteval->stack[((hsi*29700+445900)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*133650+442660)*1+lsi)*1]), &(inteval->stack[((hsi*54450+343660)*1+lsi)*1]), &(inteval->stack[((hsi*44550+398110)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+30360)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+398110)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+576310)*1+lsi)*1]), &(inteval->stack[((hsi*18018+398110)*1+lsi)*1]), &(inteval->stack[((hsi*15444+30360)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+45804)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]), &(inteval->stack[((hsi*4356+26004)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+416128)*1+lsi)*1]), &(inteval->stack[((hsi*15444+30360)*1+lsi)*1]), &(inteval->stack[((hsi*13068+45804)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+14850)*1+lsi)*1]), &(inteval->stack[((hsi*30888+576310)*1+lsi)*1]), &(inteval->stack[((hsi*26136+416128)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+416128)*1+lsi)*1]), &(inteval->stack[((hsi*7920+0)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+607198)*1+lsi)*1]), &(inteval->stack[((hsi*20790+416128)*1+lsi)*1]), &(inteval->stack[((hsi*18018+398110)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+643234)*1+lsi)*1]), &(inteval->stack[((hsi*36036+607198)*1+lsi)*1]), &(inteval->stack[((hsi*30888+576310)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+576310)*1+lsi)*1]), &(inteval->stack[((hsi*51480+643234)*1+lsi)*1]), &(inteval->stack[((hsi*43560+14850)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*163350+641650)*1+lsi)*1]), &(inteval->stack[((hsi*65340+576310)*1+lsi)*1]), &(inteval->stack[((hsi*54450+343660)*1+lsi)*1]),990);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*267300+76360)*1+lsi)*1]), &(inteval->stack[((hsi*163350+641650)*1+lsi)*1]), &(inteval->stack[((hsi*133650+442660)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*267300+76360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
