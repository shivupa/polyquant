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
#include <_aB_M__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,102485)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+483635)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61026)*1+lsi)*1]), &(inteval->stack[((hsi*4356+66174)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+496703)*1+lsi)*1]), &(inteval->stack[((hsi*6006+55020)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61026)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+512147)*1+lsi)*1]), &(inteval->stack[((hsi*15444+496703)*1+lsi)*1]), &(inteval->stack[((hsi*13068+483635)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+538283)*1+lsi)*1]), &(inteval->stack[((hsi*6930+48090)*1+lsi)*1]), &(inteval->stack[((hsi*6006+55020)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+556301)*1+lsi)*1]), &(inteval->stack[((hsi*18018+538283)*1+lsi)*1]), &(inteval->stack[((hsi*15444+496703)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+587189)*1+lsi)*1]), &(inteval->stack[((hsi*30888+556301)*1+lsi)*1]), &(inteval->stack[((hsi*26136+512147)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+496703)*1+lsi)*1]), &(inteval->stack[((hsi*4356+66174)*1+lsi)*1]), &(inteval->stack[((hsi*3630+70530)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+630749)*1+lsi)*1]), &(inteval->stack[((hsi*13068+483635)*1+lsi)*1]), &(inteval->stack[((hsi*10890+496703)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+652529)*1+lsi)*1]), &(inteval->stack[((hsi*26136+512147)*1+lsi)*1]), &(inteval->stack[((hsi*21780+630749)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+483635)*1+lsi)*1]), &(inteval->stack[((hsi*43560+587189)*1+lsi)*1]), &(inteval->stack[((hsi*36300+652529)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+630749)*1+lsi)*1]), &(inteval->stack[((hsi*7920+40170)*1+lsi)*1]), &(inteval->stack[((hsi*6930+48090)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+651539)*1+lsi)*1]), &(inteval->stack[((hsi*20790+630749)*1+lsi)*1]), &(inteval->stack[((hsi*18018+538283)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+687575)*1+lsi)*1]), &(inteval->stack[((hsi*36036+651539)*1+lsi)*1]), &(inteval->stack[((hsi*30888+556301)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+739055)*1+lsi)*1]), &(inteval->stack[((hsi*51480+687575)*1+lsi)*1]), &(inteval->stack[((hsi*43560+587189)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+538085)*1+lsi)*1]), &(inteval->stack[((hsi*65340+739055)*1+lsi)*1]), &(inteval->stack[((hsi*54450+483635)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+483635)*1+lsi)*1]), &(inteval->stack[((hsi*4290+91540)*1+lsi)*1]), &(inteval->stack[((hsi*3630+95830)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+494525)*1+lsi)*1]), &(inteval->stack[((hsi*5005+86535)*1+lsi)*1]), &(inteval->stack[((hsi*4290+91540)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+40170)*1+lsi)*1]), &(inteval->stack[((hsi*12870+494525)*1+lsi)*1]), &(inteval->stack[((hsi*10890+483635)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+507395)*1+lsi)*1]), &(inteval->stack[((hsi*5775+80760)*1+lsi)*1]), &(inteval->stack[((hsi*5005+86535)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+614315)*1+lsi)*1]), &(inteval->stack[((hsi*15015+507395)*1+lsi)*1]), &(inteval->stack[((hsi*12870+494525)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+640055)*1+lsi)*1]), &(inteval->stack[((hsi*25740+614315)*1+lsi)*1]), &(inteval->stack[((hsi*21780+40170)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+522410)*1+lsi)*1]), &(inteval->stack[((hsi*3630+95830)*1+lsi)*1]), &(inteval->stack[((hsi*3025+99460)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+676355)*1+lsi)*1]), &(inteval->stack[((hsi*10890+483635)*1+lsi)*1]), &(inteval->stack[((hsi*9075+522410)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+694505)*1+lsi)*1]), &(inteval->stack[((hsi*21780+40170)*1+lsi)*1]), &(inteval->stack[((hsi*18150+676355)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+724755)*1+lsi)*1]), &(inteval->stack[((hsi*36300+640055)*1+lsi)*1]), &(inteval->stack[((hsi*30250+694505)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+676355)*1+lsi)*1]), &(inteval->stack[((hsi*6600+74160)*1+lsi)*1]), &(inteval->stack[((hsi*5775+80760)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+40170)*1+lsi)*1]), &(inteval->stack[((hsi*17325+676355)*1+lsi)*1]), &(inteval->stack[((hsi*15015+507395)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+483635)*1+lsi)*1]), &(inteval->stack[((hsi*30030+40170)*1+lsi)*1]), &(inteval->stack[((hsi*25740+614315)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+40170)*1+lsi)*1]), &(inteval->stack[((hsi*42900+483635)*1+lsi)*1]), &(inteval->stack[((hsi*36300+640055)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+614315)*1+lsi)*1]), &(inteval->stack[((hsi*54450+40170)*1+lsi)*1]), &(inteval->stack[((hsi*45375+724755)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*190575+677840)*1+lsi)*1]), &(inteval->stack[((hsi*76230+538085)*1+lsi)*1]), &(inteval->stack[((hsi*63525+614315)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+614315)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+40170)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+483635)*1+lsi)*1]), &(inteval->stack[((hsi*18252+40170)*1+lsi)*1]), &(inteval->stack[((hsi*15444+614315)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+629759)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+58422)*1+lsi)*1]), &(inteval->stack[((hsi*21294+629759)*1+lsi)*1]), &(inteval->stack[((hsi*18252+40170)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+868415)*1+lsi)*1]), &(inteval->stack[((hsi*36504+58422)*1+lsi)*1]), &(inteval->stack[((hsi*30888+483635)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+651053)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35880)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+17550)*1+lsi)*1]), &(inteval->stack[((hsi*15444+614315)*1+lsi)*1]), &(inteval->stack[((hsi*12870+651053)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+919895)*1+lsi)*1]), &(inteval->stack[((hsi*30888+483635)*1+lsi)*1]), &(inteval->stack[((hsi*25740+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+962795)*1+lsi)*1]), &(inteval->stack[((hsi*51480+868415)*1+lsi)*1]), &(inteval->stack[((hsi*42900+919895)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+483635)*1+lsi)*1]), &(inteval->stack[((hsi*9360+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+0)*1+lsi)*1]), &(inteval->stack[((hsi*24570+483635)*1+lsi)*1]), &(inteval->stack[((hsi*21294+629759)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+614315)*1+lsi)*1]), &(inteval->stack[((hsi*42588+0)*1+lsi)*1]), &(inteval->stack[((hsi*36504+58422)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+0)*1+lsi)*1]), &(inteval->stack[((hsi*60840+614315)*1+lsi)*1]), &(inteval->stack[((hsi*51480+868415)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+868415)*1+lsi)*1]), &(inteval->stack[((hsi*77220+0)*1+lsi)*1]), &(inteval->stack[((hsi*64350+962795)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*228690+958505)*1+lsi)*1]), &(inteval->stack[((hsi*90090+868415)*1+lsi)*1]), &(inteval->stack[((hsi*76230+538085)*1+lsi)*1]),1155);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*381150+102485)*1+lsi)*1]), &(inteval->stack[((hsi*228690+958505)*1+lsi)*1]), &(inteval->stack[((hsi*190575+677840)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*381150+102485)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
