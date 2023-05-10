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
#include <_aB_M__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__L__1___TwoPRep_D__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,111440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+527240)*1+lsi)*1]), &(inteval->stack[((hsi*4356+69684)*1+lsi)*1]), &(inteval->stack[((hsi*3630+74040)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+538130)*1+lsi)*1]), &(inteval->stack[((hsi*5148+64536)*1+lsi)*1]), &(inteval->stack[((hsi*4356+69684)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+551198)*1+lsi)*1]), &(inteval->stack[((hsi*13068+538130)*1+lsi)*1]), &(inteval->stack[((hsi*10890+527240)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+572978)*1+lsi)*1]), &(inteval->stack[((hsi*6006+58530)*1+lsi)*1]), &(inteval->stack[((hsi*5148+64536)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+588422)*1+lsi)*1]), &(inteval->stack[((hsi*15444+572978)*1+lsi)*1]), &(inteval->stack[((hsi*13068+538130)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+614558)*1+lsi)*1]), &(inteval->stack[((hsi*26136+588422)*1+lsi)*1]), &(inteval->stack[((hsi*21780+551198)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+650858)*1+lsi)*1]), &(inteval->stack[((hsi*6930+51600)*1+lsi)*1]), &(inteval->stack[((hsi*6006+58530)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+668876)*1+lsi)*1]), &(inteval->stack[((hsi*18018+650858)*1+lsi)*1]), &(inteval->stack[((hsi*15444+572978)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+699764)*1+lsi)*1]), &(inteval->stack[((hsi*30888+668876)*1+lsi)*1]), &(inteval->stack[((hsi*26136+588422)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+743324)*1+lsi)*1]), &(inteval->stack[((hsi*43560+699764)*1+lsi)*1]), &(inteval->stack[((hsi*36300+614558)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+572978)*1+lsi)*1]), &(inteval->stack[((hsi*3630+74040)*1+lsi)*1]), &(inteval->stack[((hsi*2970+77670)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+581888)*1+lsi)*1]), &(inteval->stack[((hsi*10890+527240)*1+lsi)*1]), &(inteval->stack[((hsi*8910+572978)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+797774)*1+lsi)*1]), &(inteval->stack[((hsi*21780+551198)*1+lsi)*1]), &(inteval->stack[((hsi*17820+581888)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+527240)*1+lsi)*1]), &(inteval->stack[((hsi*36300+614558)*1+lsi)*1]), &(inteval->stack[((hsi*29700+797774)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+571790)*1+lsi)*1]), &(inteval->stack[((hsi*54450+743324)*1+lsi)*1]), &(inteval->stack[((hsi*44550+527240)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+527240)*1+lsi)*1]), &(inteval->stack[((hsi*7920+43680)*1+lsi)*1]), &(inteval->stack[((hsi*6930+51600)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+43680)*1+lsi)*1]), &(inteval->stack[((hsi*20790+527240)*1+lsi)*1]), &(inteval->stack[((hsi*18018+650858)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+797774)*1+lsi)*1]), &(inteval->stack[((hsi*36036+43680)*1+lsi)*1]), &(inteval->stack[((hsi*30888+668876)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+634160)*1+lsi)*1]), &(inteval->stack[((hsi*51480+797774)*1+lsi)*1]), &(inteval->stack[((hsi*43560+699764)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+797774)*1+lsi)*1]), &(inteval->stack[((hsi*65340+634160)*1+lsi)*1]), &(inteval->stack[((hsi*54450+743324)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+634160)*1+lsi)*1]), &(inteval->stack[((hsi*76230+797774)*1+lsi)*1]), &(inteval->stack[((hsi*62370+571790)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+527240)*1+lsi)*1]), &(inteval->stack[((hsi*3630+102310)*1+lsi)*1]), &(inteval->stack[((hsi*3025+105940)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+536315)*1+lsi)*1]), &(inteval->stack[((hsi*4290+98020)*1+lsi)*1]), &(inteval->stack[((hsi*3630+102310)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+547205)*1+lsi)*1]), &(inteval->stack[((hsi*10890+536315)*1+lsi)*1]), &(inteval->stack[((hsi*9075+527240)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+565355)*1+lsi)*1]), &(inteval->stack[((hsi*5005+93015)*1+lsi)*1]), &(inteval->stack[((hsi*4290+98020)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+578225)*1+lsi)*1]), &(inteval->stack[((hsi*12870+565355)*1+lsi)*1]), &(inteval->stack[((hsi*10890+536315)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+43680)*1+lsi)*1]), &(inteval->stack[((hsi*21780+578225)*1+lsi)*1]), &(inteval->stack[((hsi*18150+547205)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+600005)*1+lsi)*1]), &(inteval->stack[((hsi*5775+87240)*1+lsi)*1]), &(inteval->stack[((hsi*5005+93015)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+717320)*1+lsi)*1]), &(inteval->stack[((hsi*15015+600005)*1+lsi)*1]), &(inteval->stack[((hsi*12870+565355)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+743060)*1+lsi)*1]), &(inteval->stack[((hsi*25740+717320)*1+lsi)*1]), &(inteval->stack[((hsi*21780+578225)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+779360)*1+lsi)*1]), &(inteval->stack[((hsi*36300+743060)*1+lsi)*1]), &(inteval->stack[((hsi*30250+43680)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+565355)*1+lsi)*1]), &(inteval->stack[((hsi*3025+105940)*1+lsi)*1]), &(inteval->stack[((hsi*2475+108965)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+572780)*1+lsi)*1]), &(inteval->stack[((hsi*9075+527240)*1+lsi)*1]), &(inteval->stack[((hsi*7425+565355)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+824735)*1+lsi)*1]), &(inteval->stack[((hsi*18150+547205)*1+lsi)*1]), &(inteval->stack[((hsi*14850+572780)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+527240)*1+lsi)*1]), &(inteval->stack[((hsi*30250+43680)*1+lsi)*1]), &(inteval->stack[((hsi*24750+824735)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+824735)*1+lsi)*1]), &(inteval->stack[((hsi*45375+779360)*1+lsi)*1]), &(inteval->stack[((hsi*37125+527240)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+527240)*1+lsi)*1]), &(inteval->stack[((hsi*6600+80640)*1+lsi)*1]), &(inteval->stack[((hsi*5775+87240)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+43680)*1+lsi)*1]), &(inteval->stack[((hsi*17325+527240)*1+lsi)*1]), &(inteval->stack[((hsi*15015+600005)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+527240)*1+lsi)*1]), &(inteval->stack[((hsi*30030+43680)*1+lsi)*1]), &(inteval->stack[((hsi*25740+717320)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+43680)*1+lsi)*1]), &(inteval->stack[((hsi*42900+527240)*1+lsi)*1]), &(inteval->stack[((hsi*36300+743060)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+527240)*1+lsi)*1]), &(inteval->stack[((hsi*54450+43680)*1+lsi)*1]), &(inteval->stack[((hsi*45375+779360)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+717320)*1+lsi)*1]), &(inteval->stack[((hsi*63525+527240)*1+lsi)*1]), &(inteval->stack[((hsi*51975+824735)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*207900+786620)*1+lsi)*1]), &(inteval->stack[((hsi*83160+634160)*1+lsi)*1]), &(inteval->stack[((hsi*69300+717320)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+527240)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35880)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+540110)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+555554)*1+lsi)*1]), &(inteval->stack[((hsi*15444+540110)*1+lsi)*1]), &(inteval->stack[((hsi*12870+527240)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+717320)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+43680)*1+lsi)*1]), &(inteval->stack[((hsi*18252+717320)*1+lsi)*1]), &(inteval->stack[((hsi*15444+540110)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+581294)*1+lsi)*1]), &(inteval->stack[((hsi*30888+43680)*1+lsi)*1]), &(inteval->stack[((hsi*25740+555554)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+735572)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+74568)*1+lsi)*1]), &(inteval->stack[((hsi*21294+735572)*1+lsi)*1]), &(inteval->stack[((hsi*18252+717320)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+994520)*1+lsi)*1]), &(inteval->stack[((hsi*36504+74568)*1+lsi)*1]), &(inteval->stack[((hsi*30888+43680)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1046000)*1+lsi)*1]), &(inteval->stack[((hsi*51480+994520)*1+lsi)*1]), &(inteval->stack[((hsi*42900+581294)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+43680)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35880)*1+lsi)*1]), &(inteval->stack[((hsi*3510+40170)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+756866)*1+lsi)*1]), &(inteval->stack[((hsi*12870+527240)*1+lsi)*1]), &(inteval->stack[((hsi*10530+43680)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+17550)*1+lsi)*1]), &(inteval->stack[((hsi*25740+555554)*1+lsi)*1]), &(inteval->stack[((hsi*21060+756866)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+527240)*1+lsi)*1]), &(inteval->stack[((hsi*42900+581294)*1+lsi)*1]), &(inteval->stack[((hsi*35100+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+1110350)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1046000)*1+lsi)*1]), &(inteval->stack[((hsi*52650+527240)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+527240)*1+lsi)*1]), &(inteval->stack[((hsi*9360+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+551810)*1+lsi)*1]), &(inteval->stack[((hsi*24570+527240)*1+lsi)*1]), &(inteval->stack[((hsi*21294+735572)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+0)*1+lsi)*1]), &(inteval->stack[((hsi*42588+551810)*1+lsi)*1]), &(inteval->stack[((hsi*36504+74568)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+527240)*1+lsi)*1]), &(inteval->stack[((hsi*60840+0)*1+lsi)*1]), &(inteval->stack[((hsi*51480+994520)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+0)*1+lsi)*1]), &(inteval->stack[((hsi*77220+527240)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1046000)*1+lsi)*1]),78);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*98280+994520)*1+lsi)*1]), &(inteval->stack[((hsi*90090+0)*1+lsi)*1]), &(inteval->stack[((hsi*73710+1110350)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*249480+1092800)*1+lsi)*1]), &(inteval->stack[((hsi*98280+994520)*1+lsi)*1]), &(inteval->stack[((hsi*83160+634160)*1+lsi)*1]),1260);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*415800+111440)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1092800)*1+lsi)*1]), &(inteval->stack[((hsi*207900+786620)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*415800+111440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
