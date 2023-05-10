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
#include <_aB_L__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,125660)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+645410)*1+lsi)*1]), &(inteval->stack[((hsi*4290+91540)*1+lsi)*1]), &(inteval->stack[((hsi*3630+95830)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+656300)*1+lsi)*1]), &(inteval->stack[((hsi*5005+86535)*1+lsi)*1]), &(inteval->stack[((hsi*4290+91540)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+669170)*1+lsi)*1]), &(inteval->stack[((hsi*12870+656300)*1+lsi)*1]), &(inteval->stack[((hsi*10890+645410)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+690950)*1+lsi)*1]), &(inteval->stack[((hsi*5775+80760)*1+lsi)*1]), &(inteval->stack[((hsi*5005+86535)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+705965)*1+lsi)*1]), &(inteval->stack[((hsi*15015+690950)*1+lsi)*1]), &(inteval->stack[((hsi*12870+656300)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+731705)*1+lsi)*1]), &(inteval->stack[((hsi*25740+705965)*1+lsi)*1]), &(inteval->stack[((hsi*21780+669170)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+656300)*1+lsi)*1]), &(inteval->stack[((hsi*3630+95830)*1+lsi)*1]), &(inteval->stack[((hsi*3025+99460)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+768005)*1+lsi)*1]), &(inteval->stack[((hsi*10890+645410)*1+lsi)*1]), &(inteval->stack[((hsi*9075+656300)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+786155)*1+lsi)*1]), &(inteval->stack[((hsi*21780+669170)*1+lsi)*1]), &(inteval->stack[((hsi*18150+768005)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+645410)*1+lsi)*1]), &(inteval->stack[((hsi*36300+731705)*1+lsi)*1]), &(inteval->stack[((hsi*30250+786155)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+768005)*1+lsi)*1]), &(inteval->stack[((hsi*6600+74160)*1+lsi)*1]), &(inteval->stack[((hsi*5775+80760)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+785330)*1+lsi)*1]), &(inteval->stack[((hsi*17325+768005)*1+lsi)*1]), &(inteval->stack[((hsi*15015+690950)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+815360)*1+lsi)*1]), &(inteval->stack[((hsi*30030+785330)*1+lsi)*1]), &(inteval->stack[((hsi*25740+705965)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+858260)*1+lsi)*1]), &(inteval->stack[((hsi*42900+815360)*1+lsi)*1]), &(inteval->stack[((hsi*36300+731705)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+690785)*1+lsi)*1]), &(inteval->stack[((hsi*54450+858260)*1+lsi)*1]), &(inteval->stack[((hsi*45375+645410)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+645410)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61026)*1+lsi)*1]), &(inteval->stack[((hsi*4356+66174)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+658478)*1+lsi)*1]), &(inteval->stack[((hsi*6006+55020)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61026)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+74160)*1+lsi)*1]), &(inteval->stack[((hsi*15444+658478)*1+lsi)*1]), &(inteval->stack[((hsi*13068+645410)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+754310)*1+lsi)*1]), &(inteval->stack[((hsi*6930+48090)*1+lsi)*1]), &(inteval->stack[((hsi*6006+55020)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+772328)*1+lsi)*1]), &(inteval->stack[((hsi*18018+754310)*1+lsi)*1]), &(inteval->stack[((hsi*15444+658478)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+803216)*1+lsi)*1]), &(inteval->stack[((hsi*30888+772328)*1+lsi)*1]), &(inteval->stack[((hsi*26136+74160)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+658478)*1+lsi)*1]), &(inteval->stack[((hsi*4356+66174)*1+lsi)*1]), &(inteval->stack[((hsi*3630+70530)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+846776)*1+lsi)*1]), &(inteval->stack[((hsi*13068+645410)*1+lsi)*1]), &(inteval->stack[((hsi*10890+658478)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+645410)*1+lsi)*1]), &(inteval->stack[((hsi*26136+74160)*1+lsi)*1]), &(inteval->stack[((hsi*21780+846776)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+846776)*1+lsi)*1]), &(inteval->stack[((hsi*43560+803216)*1+lsi)*1]), &(inteval->stack[((hsi*36300+645410)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+55020)*1+lsi)*1]), &(inteval->stack[((hsi*7920+40170)*1+lsi)*1]), &(inteval->stack[((hsi*6930+48090)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+645410)*1+lsi)*1]), &(inteval->stack[((hsi*20790+55020)*1+lsi)*1]), &(inteval->stack[((hsi*18018+754310)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+40170)*1+lsi)*1]), &(inteval->stack[((hsi*36036+645410)*1+lsi)*1]), &(inteval->stack[((hsi*30888+772328)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+901226)*1+lsi)*1]), &(inteval->stack[((hsi*51480+40170)*1+lsi)*1]), &(inteval->stack[((hsi*43560+803216)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+754310)*1+lsi)*1]), &(inteval->stack[((hsi*65340+901226)*1+lsi)*1]), &(inteval->stack[((hsi*54450+846776)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*190575+830540)*1+lsi)*1]), &(inteval->stack[((hsi*76230+754310)*1+lsi)*1]), &(inteval->stack[((hsi*63525+690785)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+40170)*1+lsi)*1]), &(inteval->stack[((hsi*3510+116705)*1+lsi)*1]), &(inteval->stack[((hsi*2970+120215)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+49080)*1+lsi)*1]), &(inteval->stack[((hsi*4095+112610)*1+lsi)*1]), &(inteval->stack[((hsi*3510+116705)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+645410)*1+lsi)*1]), &(inteval->stack[((hsi*10530+49080)*1+lsi)*1]), &(inteval->stack[((hsi*8910+40170)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+59610)*1+lsi)*1]), &(inteval->stack[((hsi*4725+107885)*1+lsi)*1]), &(inteval->stack[((hsi*4095+112610)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+71895)*1+lsi)*1]), &(inteval->stack[((hsi*12285+59610)*1+lsi)*1]), &(inteval->stack[((hsi*10530+49080)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*21060+71895)*1+lsi)*1]), &(inteval->stack[((hsi*17820+645410)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+663230)*1+lsi)*1]), &(inteval->stack[((hsi*2970+120215)*1+lsi)*1]), &(inteval->stack[((hsi*2475+123185)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+670655)*1+lsi)*1]), &(inteval->stack[((hsi*8910+40170)*1+lsi)*1]), &(inteval->stack[((hsi*7425+663230)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+1050815)*1+lsi)*1]), &(inteval->stack[((hsi*17820+645410)*1+lsi)*1]), &(inteval->stack[((hsi*14850+670655)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+645410)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1050815)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+40170)*1+lsi)*1]), &(inteval->stack[((hsi*5400+102485)*1+lsi)*1]), &(inteval->stack[((hsi*4725+107885)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+92955)*1+lsi)*1]), &(inteval->stack[((hsi*14175+40170)*1+lsi)*1]), &(inteval->stack[((hsi*12285+59610)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+1050815)*1+lsi)*1]), &(inteval->stack[((hsi*24570+92955)*1+lsi)*1]), &(inteval->stack[((hsi*21060+71895)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+40170)*1+lsi)*1]), &(inteval->stack[((hsi*35100+1050815)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1021115)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*44550+40170)*1+lsi)*1]), &(inteval->stack[((hsi*37125+645410)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*155925+1073090)*1+lsi)*1]), &(inteval->stack[((hsi*63525+690785)*1+lsi)*1]), &(inteval->stack[((hsi*51975+1021115)*1+lsi)*1]),1155);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*311850+1229015)*1+lsi)*1]), &(inteval->stack[((hsi*190575+830540)*1+lsi)*1]), &(inteval->stack[((hsi*155925+1073090)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1036559)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1054811)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1036559)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1021115)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1085699)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1106993)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1085699)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1036559)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+645410)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1106993)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1054811)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1143497)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35880)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+17550)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1143497)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1143497)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1054811)*1+lsi)*1]), &(inteval->stack[((hsi*25740+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+17550)*1+lsi)*1]), &(inteval->stack[((hsi*51480+645410)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1143497)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1143497)*1+lsi)*1]), &(inteval->stack[((hsi*9360+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1143497)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1085699)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1143497)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1106993)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1143497)*1+lsi)*1]), &(inteval->stack[((hsi*51480+645410)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+1098335)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1021115)*1+lsi)*1]), &(inteval->stack[((hsi*64350+17550)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*228690+1540865)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1098335)*1+lsi)*1]), &(inteval->stack[((hsi*76230+754310)*1+lsi)*1]),1155);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*381150+1769555)*1+lsi)*1]), &(inteval->stack[((hsi*228690+1540865)*1+lsi)*1]), &(inteval->stack[((hsi*190575+830540)*1+lsi)*1]),1155);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*519750+125660)*1+lsi)*1]), &(inteval->stack[((hsi*381150+1769555)*1+lsi)*1]), &(inteval->stack[((hsi*311850+1229015)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*519750+125660)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
