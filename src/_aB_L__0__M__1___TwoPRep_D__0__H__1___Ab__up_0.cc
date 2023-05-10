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
#include <_aB_L__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,85490)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+397340)*1+lsi)*1]), &(inteval->stack[((hsi*4290+51370)*1+lsi)*1]), &(inteval->stack[((hsi*3630+55660)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+408230)*1+lsi)*1]), &(inteval->stack[((hsi*5005+46365)*1+lsi)*1]), &(inteval->stack[((hsi*4290+51370)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+421100)*1+lsi)*1]), &(inteval->stack[((hsi*12870+408230)*1+lsi)*1]), &(inteval->stack[((hsi*10890+397340)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+442880)*1+lsi)*1]), &(inteval->stack[((hsi*5775+40590)*1+lsi)*1]), &(inteval->stack[((hsi*5005+46365)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+457895)*1+lsi)*1]), &(inteval->stack[((hsi*15015+442880)*1+lsi)*1]), &(inteval->stack[((hsi*12870+408230)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+483635)*1+lsi)*1]), &(inteval->stack[((hsi*25740+457895)*1+lsi)*1]), &(inteval->stack[((hsi*21780+421100)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+408230)*1+lsi)*1]), &(inteval->stack[((hsi*3630+55660)*1+lsi)*1]), &(inteval->stack[((hsi*3025+59290)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+519935)*1+lsi)*1]), &(inteval->stack[((hsi*10890+397340)*1+lsi)*1]), &(inteval->stack[((hsi*9075+408230)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+538085)*1+lsi)*1]), &(inteval->stack[((hsi*21780+421100)*1+lsi)*1]), &(inteval->stack[((hsi*18150+519935)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+397340)*1+lsi)*1]), &(inteval->stack[((hsi*36300+483635)*1+lsi)*1]), &(inteval->stack[((hsi*30250+538085)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+519935)*1+lsi)*1]), &(inteval->stack[((hsi*6600+33990)*1+lsi)*1]), &(inteval->stack[((hsi*5775+40590)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+537260)*1+lsi)*1]), &(inteval->stack[((hsi*17325+519935)*1+lsi)*1]), &(inteval->stack[((hsi*15015+442880)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+567290)*1+lsi)*1]), &(inteval->stack[((hsi*30030+537260)*1+lsi)*1]), &(inteval->stack[((hsi*25740+457895)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+610190)*1+lsi)*1]), &(inteval->stack[((hsi*42900+567290)*1+lsi)*1]), &(inteval->stack[((hsi*36300+483635)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+442715)*1+lsi)*1]), &(inteval->stack[((hsi*54450+610190)*1+lsi)*1]), &(inteval->stack[((hsi*45375+397340)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+397340)*1+lsi)*1]), &(inteval->stack[((hsi*3510+76535)*1+lsi)*1]), &(inteval->stack[((hsi*2970+80045)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+406250)*1+lsi)*1]), &(inteval->stack[((hsi*4095+72440)*1+lsi)*1]), &(inteval->stack[((hsi*3510+76535)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+33990)*1+lsi)*1]), &(inteval->stack[((hsi*10530+406250)*1+lsi)*1]), &(inteval->stack[((hsi*8910+397340)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+416780)*1+lsi)*1]), &(inteval->stack[((hsi*4725+67715)*1+lsi)*1]), &(inteval->stack[((hsi*4095+72440)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+506240)*1+lsi)*1]), &(inteval->stack[((hsi*12285+416780)*1+lsi)*1]), &(inteval->stack[((hsi*10530+406250)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+527300)*1+lsi)*1]), &(inteval->stack[((hsi*21060+506240)*1+lsi)*1]), &(inteval->stack[((hsi*17820+33990)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+429065)*1+lsi)*1]), &(inteval->stack[((hsi*2970+80045)*1+lsi)*1]), &(inteval->stack[((hsi*2475+83015)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+557000)*1+lsi)*1]), &(inteval->stack[((hsi*8910+397340)*1+lsi)*1]), &(inteval->stack[((hsi*7425+429065)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+571850)*1+lsi)*1]), &(inteval->stack[((hsi*17820+33990)*1+lsi)*1]), &(inteval->stack[((hsi*14850+557000)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+596600)*1+lsi)*1]), &(inteval->stack[((hsi*29700+527300)*1+lsi)*1]), &(inteval->stack[((hsi*24750+571850)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+557000)*1+lsi)*1]), &(inteval->stack[((hsi*5400+62315)*1+lsi)*1]), &(inteval->stack[((hsi*4725+67715)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+33990)*1+lsi)*1]), &(inteval->stack[((hsi*14175+557000)*1+lsi)*1]), &(inteval->stack[((hsi*12285+416780)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+397340)*1+lsi)*1]), &(inteval->stack[((hsi*24570+33990)*1+lsi)*1]), &(inteval->stack[((hsi*21060+506240)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+33990)*1+lsi)*1]), &(inteval->stack[((hsi*35100+397340)*1+lsi)*1]), &(inteval->stack[((hsi*29700+527300)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+506240)*1+lsi)*1]), &(inteval->stack[((hsi*44550+33990)*1+lsi)*1]), &(inteval->stack[((hsi*37125+596600)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*155925+558215)*1+lsi)*1]), &(inteval->stack[((hsi*63525+442715)*1+lsi)*1]), &(inteval->stack[((hsi*51975+506240)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+506240)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]), &(inteval->stack[((hsi*4356+26004)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+33990)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+397340)*1+lsi)*1]), &(inteval->stack[((hsi*15444+33990)*1+lsi)*1]), &(inteval->stack[((hsi*13068+506240)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+519308)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+49434)*1+lsi)*1]), &(inteval->stack[((hsi*18018+519308)*1+lsi)*1]), &(inteval->stack[((hsi*15444+33990)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+714140)*1+lsi)*1]), &(inteval->stack[((hsi*30888+49434)*1+lsi)*1]), &(inteval->stack[((hsi*26136+397340)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+537326)*1+lsi)*1]), &(inteval->stack[((hsi*4356+26004)*1+lsi)*1]), &(inteval->stack[((hsi*3630+30360)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+14850)*1+lsi)*1]), &(inteval->stack[((hsi*13068+506240)*1+lsi)*1]), &(inteval->stack[((hsi*10890+537326)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+757700)*1+lsi)*1]), &(inteval->stack[((hsi*26136+397340)*1+lsi)*1]), &(inteval->stack[((hsi*21780+14850)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+794000)*1+lsi)*1]), &(inteval->stack[((hsi*43560+714140)*1+lsi)*1]), &(inteval->stack[((hsi*36300+757700)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+397340)*1+lsi)*1]), &(inteval->stack[((hsi*7920+0)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+0)*1+lsi)*1]), &(inteval->stack[((hsi*20790+397340)*1+lsi)*1]), &(inteval->stack[((hsi*18018+519308)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+506240)*1+lsi)*1]), &(inteval->stack[((hsi*36036+0)*1+lsi)*1]), &(inteval->stack[((hsi*30888+49434)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+0)*1+lsi)*1]), &(inteval->stack[((hsi*51480+506240)*1+lsi)*1]), &(inteval->stack[((hsi*43560+714140)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+714140)*1+lsi)*1]), &(inteval->stack[((hsi*65340+0)*1+lsi)*1]), &(inteval->stack[((hsi*54450+794000)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*190575+790370)*1+lsi)*1]), &(inteval->stack[((hsi*76230+714140)*1+lsi)*1]), &(inteval->stack[((hsi*63525+442715)*1+lsi)*1]),1155);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*311850+85490)*1+lsi)*1]), &(inteval->stack[((hsi*190575+790370)*1+lsi)*1]), &(inteval->stack[((hsi*155925+558215)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*311850+85490)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
