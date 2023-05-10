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
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_L__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,112240)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+557740)*1+lsi)*1]), &(inteval->stack[((hsi*5005+78615)*1+lsi)*1]), &(inteval->stack[((hsi*4290+83620)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+570610)*1+lsi)*1]), &(inteval->stack[((hsi*5775+72840)*1+lsi)*1]), &(inteval->stack[((hsi*5005+78615)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+585625)*1+lsi)*1]), &(inteval->stack[((hsi*15015+570610)*1+lsi)*1]), &(inteval->stack[((hsi*12870+557740)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+611365)*1+lsi)*1]), &(inteval->stack[((hsi*4290+83620)*1+lsi)*1]), &(inteval->stack[((hsi*3630+87910)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+622255)*1+lsi)*1]), &(inteval->stack[((hsi*12870+557740)*1+lsi)*1]), &(inteval->stack[((hsi*10890+611365)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+644035)*1+lsi)*1]), &(inteval->stack[((hsi*25740+585625)*1+lsi)*1]), &(inteval->stack[((hsi*21780+622255)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+611365)*1+lsi)*1]), &(inteval->stack[((hsi*6600+66240)*1+lsi)*1]), &(inteval->stack[((hsi*5775+72840)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+680335)*1+lsi)*1]), &(inteval->stack[((hsi*17325+611365)*1+lsi)*1]), &(inteval->stack[((hsi*15015+570610)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+710365)*1+lsi)*1]), &(inteval->stack[((hsi*30030+680335)*1+lsi)*1]), &(inteval->stack[((hsi*25740+585625)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+557740)*1+lsi)*1]), &(inteval->stack[((hsi*42900+710365)*1+lsi)*1]), &(inteval->stack[((hsi*36300+644035)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+66240)*1+lsi)*1]), &(inteval->stack[((hsi*6006+50730)*1+lsi)*1]), &(inteval->stack[((hsi*5148+56736)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+612190)*1+lsi)*1]), &(inteval->stack[((hsi*6930+43800)*1+lsi)*1]), &(inteval->stack[((hsi*6006+50730)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+630208)*1+lsi)*1]), &(inteval->stack[((hsi*18018+612190)*1+lsi)*1]), &(inteval->stack[((hsi*15444+66240)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+661096)*1+lsi)*1]), &(inteval->stack[((hsi*5148+56736)*1+lsi)*1]), &(inteval->stack[((hsi*4356+61884)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+674164)*1+lsi)*1]), &(inteval->stack[((hsi*15444+66240)*1+lsi)*1]), &(inteval->stack[((hsi*13068+661096)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+700300)*1+lsi)*1]), &(inteval->stack[((hsi*30888+630208)*1+lsi)*1]), &(inteval->stack[((hsi*26136+674164)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+50730)*1+lsi)*1]), &(inteval->stack[((hsi*7920+35880)*1+lsi)*1]), &(inteval->stack[((hsi*6930+43800)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+661096)*1+lsi)*1]), &(inteval->stack[((hsi*20790+50730)*1+lsi)*1]), &(inteval->stack[((hsi*18018+612190)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+35880)*1+lsi)*1]), &(inteval->stack[((hsi*36036+661096)*1+lsi)*1]), &(inteval->stack[((hsi*30888+630208)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+612190)*1+lsi)*1]), &(inteval->stack[((hsi*51480+35880)*1+lsi)*1]), &(inteval->stack[((hsi*43560+700300)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*163350+677530)*1+lsi)*1]), &(inteval->stack[((hsi*65340+612190)*1+lsi)*1]), &(inteval->stack[((hsi*54450+557740)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+35880)*1+lsi)*1]), &(inteval->stack[((hsi*4095+101665)*1+lsi)*1]), &(inteval->stack[((hsi*3510+105760)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+46410)*1+lsi)*1]), &(inteval->stack[((hsi*4725+96940)*1+lsi)*1]), &(inteval->stack[((hsi*4095+101665)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+58695)*1+lsi)*1]), &(inteval->stack[((hsi*12285+46410)*1+lsi)*1]), &(inteval->stack[((hsi*10530+35880)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+79755)*1+lsi)*1]), &(inteval->stack[((hsi*3510+105760)*1+lsi)*1]), &(inteval->stack[((hsi*2970+109270)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+840880)*1+lsi)*1]), &(inteval->stack[((hsi*10530+35880)*1+lsi)*1]), &(inteval->stack[((hsi*8910+79755)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+858700)*1+lsi)*1]), &(inteval->stack[((hsi*21060+58695)*1+lsi)*1]), &(inteval->stack[((hsi*17820+840880)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+840880)*1+lsi)*1]), &(inteval->stack[((hsi*5400+91540)*1+lsi)*1]), &(inteval->stack[((hsi*4725+96940)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+79755)*1+lsi)*1]), &(inteval->stack[((hsi*14175+840880)*1+lsi)*1]), &(inteval->stack[((hsi*12285+46410)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+888400)*1+lsi)*1]), &(inteval->stack[((hsi*24570+79755)*1+lsi)*1]), &(inteval->stack[((hsi*21060+58695)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+35880)*1+lsi)*1]), &(inteval->stack[((hsi*35100+888400)*1+lsi)*1]), &(inteval->stack[((hsi*29700+858700)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*133650+840880)*1+lsi)*1]), &(inteval->stack[((hsi*54450+557740)*1+lsi)*1]), &(inteval->stack[((hsi*44550+35880)*1+lsi)*1]),990);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*267300+974530)*1+lsi)*1]), &(inteval->stack[((hsi*163350+677530)*1+lsi)*1]), &(inteval->stack[((hsi*133650+840880)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+840880)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+859132)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+880426)*1+lsi)*1]), &(inteval->stack[((hsi*21294+859132)*1+lsi)*1]), &(inteval->stack[((hsi*18252+840880)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+35880)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+51324)*1+lsi)*1]), &(inteval->stack[((hsi*18252+840880)*1+lsi)*1]), &(inteval->stack[((hsi*15444+35880)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+916930)*1+lsi)*1]), &(inteval->stack[((hsi*36504+880426)*1+lsi)*1]), &(inteval->stack[((hsi*30888+51324)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+17550)*1+lsi)*1]), &(inteval->stack[((hsi*9360+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+42120)*1+lsi)*1]), &(inteval->stack[((hsi*24570+17550)*1+lsi)*1]), &(inteval->stack[((hsi*21294+859132)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1241830)*1+lsi)*1]), &(inteval->stack[((hsi*42588+42120)*1+lsi)*1]), &(inteval->stack[((hsi*36504+880426)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+0)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1241830)*1+lsi)*1]), &(inteval->stack[((hsi*51480+916930)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*196020+1241830)*1+lsi)*1]), &(inteval->stack[((hsi*77220+0)*1+lsi)*1]), &(inteval->stack[((hsi*65340+612190)*1+lsi)*1]),990);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*326700+1437850)*1+lsi)*1]), &(inteval->stack[((hsi*196020+1241830)*1+lsi)*1]), &(inteval->stack[((hsi*163350+677530)*1+lsi)*1]),990);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*445500+112240)*1+lsi)*1]), &(inteval->stack[((hsi*326700+1437850)*1+lsi)*1]), &(inteval->stack[((hsi*267300+974530)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*445500+112240)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
