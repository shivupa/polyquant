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
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
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
#include <_aB_PS__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__L__1___TwoPRep_D__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,131600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+630560)*1+lsi)*1]), &(inteval->stack[((hsi*5148+81692)*1+lsi)*1]), &(inteval->stack[((hsi*4290+86840)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+643430)*1+lsi)*1]), &(inteval->stack[((hsi*6084+75608)*1+lsi)*1]), &(inteval->stack[((hsi*5148+81692)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+658874)*1+lsi)*1]), &(inteval->stack[((hsi*15444+643430)*1+lsi)*1]), &(inteval->stack[((hsi*12870+630560)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+684614)*1+lsi)*1]), &(inteval->stack[((hsi*7098+68510)*1+lsi)*1]), &(inteval->stack[((hsi*6084+75608)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+702866)*1+lsi)*1]), &(inteval->stack[((hsi*18252+684614)*1+lsi)*1]), &(inteval->stack[((hsi*15444+643430)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+733754)*1+lsi)*1]), &(inteval->stack[((hsi*30888+702866)*1+lsi)*1]), &(inteval->stack[((hsi*25740+658874)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+776654)*1+lsi)*1]), &(inteval->stack[((hsi*8190+60320)*1+lsi)*1]), &(inteval->stack[((hsi*7098+68510)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+797948)*1+lsi)*1]), &(inteval->stack[((hsi*21294+776654)*1+lsi)*1]), &(inteval->stack[((hsi*18252+684614)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+834452)*1+lsi)*1]), &(inteval->stack[((hsi*36504+797948)*1+lsi)*1]), &(inteval->stack[((hsi*30888+702866)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+885932)*1+lsi)*1]), &(inteval->stack[((hsi*51480+834452)*1+lsi)*1]), &(inteval->stack[((hsi*42900+733754)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+684614)*1+lsi)*1]), &(inteval->stack[((hsi*4290+86840)*1+lsi)*1]), &(inteval->stack[((hsi*3510+91130)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+695144)*1+lsi)*1]), &(inteval->stack[((hsi*12870+630560)*1+lsi)*1]), &(inteval->stack[((hsi*10530+684614)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+950282)*1+lsi)*1]), &(inteval->stack[((hsi*25740+658874)*1+lsi)*1]), &(inteval->stack[((hsi*21060+695144)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+630560)*1+lsi)*1]), &(inteval->stack[((hsi*42900+733754)*1+lsi)*1]), &(inteval->stack[((hsi*35100+950282)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+683210)*1+lsi)*1]), &(inteval->stack[((hsi*64350+885932)*1+lsi)*1]), &(inteval->stack[((hsi*52650+630560)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+630560)*1+lsi)*1]), &(inteval->stack[((hsi*9360+50960)*1+lsi)*1]), &(inteval->stack[((hsi*8190+60320)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+50960)*1+lsi)*1]), &(inteval->stack[((hsi*24570+630560)*1+lsi)*1]), &(inteval->stack[((hsi*21294+776654)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+950282)*1+lsi)*1]), &(inteval->stack[((hsi*42588+50960)*1+lsi)*1]), &(inteval->stack[((hsi*36504+797948)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+756920)*1+lsi)*1]), &(inteval->stack[((hsi*60840+950282)*1+lsi)*1]), &(inteval->stack[((hsi*51480+834452)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+950282)*1+lsi)*1]), &(inteval->stack[((hsi*77220+756920)*1+lsi)*1]), &(inteval->stack[((hsi*64350+885932)*1+lsi)*1]),78);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*98280+756920)*1+lsi)*1]), &(inteval->stack[((hsi*90090+950282)*1+lsi)*1]), &(inteval->stack[((hsi*73710+683210)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+630560)*1+lsi)*1]), &(inteval->stack[((hsi*4356+120644)*1+lsi)*1]), &(inteval->stack[((hsi*3630+125000)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+641450)*1+lsi)*1]), &(inteval->stack[((hsi*5148+115496)*1+lsi)*1]), &(inteval->stack[((hsi*4356+120644)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+654518)*1+lsi)*1]), &(inteval->stack[((hsi*13068+641450)*1+lsi)*1]), &(inteval->stack[((hsi*10890+630560)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+676298)*1+lsi)*1]), &(inteval->stack[((hsi*6006+109490)*1+lsi)*1]), &(inteval->stack[((hsi*5148+115496)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+691742)*1+lsi)*1]), &(inteval->stack[((hsi*15444+676298)*1+lsi)*1]), &(inteval->stack[((hsi*13068+641450)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+50960)*1+lsi)*1]), &(inteval->stack[((hsi*26136+691742)*1+lsi)*1]), &(inteval->stack[((hsi*21780+654518)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+717878)*1+lsi)*1]), &(inteval->stack[((hsi*6930+102560)*1+lsi)*1]), &(inteval->stack[((hsi*6006+109490)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+855200)*1+lsi)*1]), &(inteval->stack[((hsi*18018+717878)*1+lsi)*1]), &(inteval->stack[((hsi*15444+676298)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+886088)*1+lsi)*1]), &(inteval->stack[((hsi*30888+855200)*1+lsi)*1]), &(inteval->stack[((hsi*26136+691742)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+929648)*1+lsi)*1]), &(inteval->stack[((hsi*43560+886088)*1+lsi)*1]), &(inteval->stack[((hsi*36300+50960)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+676298)*1+lsi)*1]), &(inteval->stack[((hsi*3630+125000)*1+lsi)*1]), &(inteval->stack[((hsi*2970+128630)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+685208)*1+lsi)*1]), &(inteval->stack[((hsi*10890+630560)*1+lsi)*1]), &(inteval->stack[((hsi*8910+676298)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+984098)*1+lsi)*1]), &(inteval->stack[((hsi*21780+654518)*1+lsi)*1]), &(inteval->stack[((hsi*17820+685208)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+630560)*1+lsi)*1]), &(inteval->stack[((hsi*36300+50960)*1+lsi)*1]), &(inteval->stack[((hsi*29700+984098)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+984098)*1+lsi)*1]), &(inteval->stack[((hsi*54450+929648)*1+lsi)*1]), &(inteval->stack[((hsi*44550+630560)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+630560)*1+lsi)*1]), &(inteval->stack[((hsi*7920+94640)*1+lsi)*1]), &(inteval->stack[((hsi*6930+102560)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+50960)*1+lsi)*1]), &(inteval->stack[((hsi*20790+630560)*1+lsi)*1]), &(inteval->stack[((hsi*18018+717878)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+630560)*1+lsi)*1]), &(inteval->stack[((hsi*36036+50960)*1+lsi)*1]), &(inteval->stack[((hsi*30888+855200)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+50960)*1+lsi)*1]), &(inteval->stack[((hsi*51480+630560)*1+lsi)*1]), &(inteval->stack[((hsi*43560+886088)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+630560)*1+lsi)*1]), &(inteval->stack[((hsi*65340+50960)*1+lsi)*1]), &(inteval->stack[((hsi*54450+929648)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+855200)*1+lsi)*1]), &(inteval->stack[((hsi*76230+630560)*1+lsi)*1]), &(inteval->stack[((hsi*62370+984098)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*249480+938360)*1+lsi)*1]), &(inteval->stack[((hsi*98280+756920)*1+lsi)*1]), &(inteval->stack[((hsi*83160+855200)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+630560)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41860)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+645575)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+663593)*1+lsi)*1]), &(inteval->stack[((hsi*18018+645575)*1+lsi)*1]), &(inteval->stack[((hsi*15015+630560)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+855200)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+50960)*1+lsi)*1]), &(inteval->stack[((hsi*21294+855200)*1+lsi)*1]), &(inteval->stack[((hsi*18018+645575)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+693623)*1+lsi)*1]), &(inteval->stack[((hsi*36036+50960)*1+lsi)*1]), &(inteval->stack[((hsi*30030+663593)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+876494)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+86996)*1+lsi)*1]), &(inteval->stack[((hsi*24843+876494)*1+lsi)*1]), &(inteval->stack[((hsi*21294+855200)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1187840)*1+lsi)*1]), &(inteval->stack[((hsi*42588+86996)*1+lsi)*1]), &(inteval->stack[((hsi*36036+50960)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1247900)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1187840)*1+lsi)*1]), &(inteval->stack[((hsi*50050+693623)*1+lsi)*1]),91);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+901337)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41860)*1+lsi)*1]), &(inteval->stack[((hsi*4095+46865)*1+lsi)*1]),91);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+20475)*1+lsi)*1]), &(inteval->stack[((hsi*15015+630560)*1+lsi)*1]), &(inteval->stack[((hsi*12285+901337)*1+lsi)*1]),91);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+45045)*1+lsi)*1]), &(inteval->stack[((hsi*30030+663593)*1+lsi)*1]), &(inteval->stack[((hsi*24570+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+630560)*1+lsi)*1]), &(inteval->stack[((hsi*50050+693623)*1+lsi)*1]), &(inteval->stack[((hsi*40950+45045)*1+lsi)*1]),91);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+1322975)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1247900)*1+lsi)*1]), &(inteval->stack[((hsi*61425+630560)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+630560)*1+lsi)*1]), &(inteval->stack[((hsi*10920+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+659225)*1+lsi)*1]), &(inteval->stack[((hsi*28665+630560)*1+lsi)*1]), &(inteval->stack[((hsi*24843+876494)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+0)*1+lsi)*1]), &(inteval->stack[((hsi*49686+659225)*1+lsi)*1]), &(inteval->stack[((hsi*42588+86996)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+630560)*1+lsi)*1]), &(inteval->stack[((hsi*70980+0)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1187840)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+0)*1+lsi)*1]), &(inteval->stack[((hsi*90090+630560)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1247900)*1+lsi)*1]),91);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*114660+1187840)*1+lsi)*1]), &(inteval->stack[((hsi*105105+0)*1+lsi)*1]), &(inteval->stack[((hsi*85995+1322975)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*294840+1302500)*1+lsi)*1]), &(inteval->stack[((hsi*114660+1187840)*1+lsi)*1]), &(inteval->stack[((hsi*98280+756920)*1+lsi)*1]),1260);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*498960+131600)*1+lsi)*1]), &(inteval->stack[((hsi*294840+1302500)*1+lsi)*1]), &(inteval->stack[((hsi*249480+938360)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*498960+131600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
