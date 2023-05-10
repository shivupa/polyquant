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
#include <_aB_L__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_D__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,92960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+433160)*1+lsi)*1]), &(inteval->stack[((hsi*3630+58630)*1+lsi)*1]), &(inteval->stack[((hsi*3025+62260)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+442235)*1+lsi)*1]), &(inteval->stack[((hsi*4290+54340)*1+lsi)*1]), &(inteval->stack[((hsi*3630+58630)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+453125)*1+lsi)*1]), &(inteval->stack[((hsi*10890+442235)*1+lsi)*1]), &(inteval->stack[((hsi*9075+433160)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+471275)*1+lsi)*1]), &(inteval->stack[((hsi*5005+49335)*1+lsi)*1]), &(inteval->stack[((hsi*4290+54340)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+484145)*1+lsi)*1]), &(inteval->stack[((hsi*12870+471275)*1+lsi)*1]), &(inteval->stack[((hsi*10890+442235)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+505925)*1+lsi)*1]), &(inteval->stack[((hsi*21780+484145)*1+lsi)*1]), &(inteval->stack[((hsi*18150+453125)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+536175)*1+lsi)*1]), &(inteval->stack[((hsi*5775+43560)*1+lsi)*1]), &(inteval->stack[((hsi*5005+49335)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+551190)*1+lsi)*1]), &(inteval->stack[((hsi*15015+536175)*1+lsi)*1]), &(inteval->stack[((hsi*12870+471275)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+576930)*1+lsi)*1]), &(inteval->stack[((hsi*25740+551190)*1+lsi)*1]), &(inteval->stack[((hsi*21780+484145)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+613230)*1+lsi)*1]), &(inteval->stack[((hsi*36300+576930)*1+lsi)*1]), &(inteval->stack[((hsi*30250+505925)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+471275)*1+lsi)*1]), &(inteval->stack[((hsi*3025+62260)*1+lsi)*1]), &(inteval->stack[((hsi*2475+65285)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+478700)*1+lsi)*1]), &(inteval->stack[((hsi*9075+433160)*1+lsi)*1]), &(inteval->stack[((hsi*7425+471275)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+658605)*1+lsi)*1]), &(inteval->stack[((hsi*18150+453125)*1+lsi)*1]), &(inteval->stack[((hsi*14850+478700)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+433160)*1+lsi)*1]), &(inteval->stack[((hsi*30250+505925)*1+lsi)*1]), &(inteval->stack[((hsi*24750+658605)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+470285)*1+lsi)*1]), &(inteval->stack[((hsi*45375+613230)*1+lsi)*1]), &(inteval->stack[((hsi*37125+433160)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+433160)*1+lsi)*1]), &(inteval->stack[((hsi*6600+36960)*1+lsi)*1]), &(inteval->stack[((hsi*5775+43560)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+36960)*1+lsi)*1]), &(inteval->stack[((hsi*17325+433160)*1+lsi)*1]), &(inteval->stack[((hsi*15015+536175)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+658605)*1+lsi)*1]), &(inteval->stack[((hsi*30030+36960)*1+lsi)*1]), &(inteval->stack[((hsi*25740+551190)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+522260)*1+lsi)*1]), &(inteval->stack[((hsi*42900+658605)*1+lsi)*1]), &(inteval->stack[((hsi*36300+576930)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+658605)*1+lsi)*1]), &(inteval->stack[((hsi*54450+522260)*1+lsi)*1]), &(inteval->stack[((hsi*45375+613230)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+522260)*1+lsi)*1]), &(inteval->stack[((hsi*63525+658605)*1+lsi)*1]), &(inteval->stack[((hsi*51975+470285)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+433160)*1+lsi)*1]), &(inteval->stack[((hsi*2970+85490)*1+lsi)*1]), &(inteval->stack[((hsi*2475+88460)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+440585)*1+lsi)*1]), &(inteval->stack[((hsi*3510+81980)*1+lsi)*1]), &(inteval->stack[((hsi*2970+85490)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+449495)*1+lsi)*1]), &(inteval->stack[((hsi*8910+440585)*1+lsi)*1]), &(inteval->stack[((hsi*7425+433160)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+464345)*1+lsi)*1]), &(inteval->stack[((hsi*4095+77885)*1+lsi)*1]), &(inteval->stack[((hsi*3510+81980)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+474875)*1+lsi)*1]), &(inteval->stack[((hsi*10530+464345)*1+lsi)*1]), &(inteval->stack[((hsi*8910+440585)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+36960)*1+lsi)*1]), &(inteval->stack[((hsi*17820+474875)*1+lsi)*1]), &(inteval->stack[((hsi*14850+449495)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+492695)*1+lsi)*1]), &(inteval->stack[((hsi*4725+73160)*1+lsi)*1]), &(inteval->stack[((hsi*4095+77885)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+591560)*1+lsi)*1]), &(inteval->stack[((hsi*12285+492695)*1+lsi)*1]), &(inteval->stack[((hsi*10530+464345)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+612620)*1+lsi)*1]), &(inteval->stack[((hsi*21060+591560)*1+lsi)*1]), &(inteval->stack[((hsi*17820+474875)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+642320)*1+lsi)*1]), &(inteval->stack[((hsi*29700+612620)*1+lsi)*1]), &(inteval->stack[((hsi*24750+36960)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+464345)*1+lsi)*1]), &(inteval->stack[((hsi*2475+88460)*1+lsi)*1]), &(inteval->stack[((hsi*2025+90935)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+470420)*1+lsi)*1]), &(inteval->stack[((hsi*7425+433160)*1+lsi)*1]), &(inteval->stack[((hsi*6075+464345)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+679445)*1+lsi)*1]), &(inteval->stack[((hsi*14850+449495)*1+lsi)*1]), &(inteval->stack[((hsi*12150+470420)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+433160)*1+lsi)*1]), &(inteval->stack[((hsi*24750+36960)*1+lsi)*1]), &(inteval->stack[((hsi*20250+679445)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+679445)*1+lsi)*1]), &(inteval->stack[((hsi*37125+642320)*1+lsi)*1]), &(inteval->stack[((hsi*30375+433160)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+433160)*1+lsi)*1]), &(inteval->stack[((hsi*5400+67760)*1+lsi)*1]), &(inteval->stack[((hsi*4725+73160)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+36960)*1+lsi)*1]), &(inteval->stack[((hsi*14175+433160)*1+lsi)*1]), &(inteval->stack[((hsi*12285+492695)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+433160)*1+lsi)*1]), &(inteval->stack[((hsi*24570+36960)*1+lsi)*1]), &(inteval->stack[((hsi*21060+591560)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+36960)*1+lsi)*1]), &(inteval->stack[((hsi*35100+433160)*1+lsi)*1]), &(inteval->stack[((hsi*29700+612620)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+433160)*1+lsi)*1]), &(inteval->stack[((hsi*44550+36960)*1+lsi)*1]), &(inteval->stack[((hsi*37125+642320)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+591560)*1+lsi)*1]), &(inteval->stack[((hsi*51975+433160)*1+lsi)*1]), &(inteval->stack[((hsi*42525+679445)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*170100+648260)*1+lsi)*1]), &(inteval->stack[((hsi*69300+522260)*1+lsi)*1]), &(inteval->stack[((hsi*56700+591560)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+433160)*1+lsi)*1]), &(inteval->stack[((hsi*4356+26004)*1+lsi)*1]), &(inteval->stack[((hsi*3630+30360)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+444050)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]), &(inteval->stack[((hsi*4356+26004)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+457118)*1+lsi)*1]), &(inteval->stack[((hsi*13068+444050)*1+lsi)*1]), &(inteval->stack[((hsi*10890+433160)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+591560)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+36960)*1+lsi)*1]), &(inteval->stack[((hsi*15444+591560)*1+lsi)*1]), &(inteval->stack[((hsi*13068+444050)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+478898)*1+lsi)*1]), &(inteval->stack[((hsi*26136+36960)*1+lsi)*1]), &(inteval->stack[((hsi*21780+457118)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+607004)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+818360)*1+lsi)*1]), &(inteval->stack[((hsi*18018+607004)*1+lsi)*1]), &(inteval->stack[((hsi*15444+591560)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+849248)*1+lsi)*1]), &(inteval->stack[((hsi*30888+818360)*1+lsi)*1]), &(inteval->stack[((hsi*26136+36960)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]), &(inteval->stack[((hsi*43560+849248)*1+lsi)*1]), &(inteval->stack[((hsi*36300+478898)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+625022)*1+lsi)*1]), &(inteval->stack[((hsi*3630+30360)*1+lsi)*1]), &(inteval->stack[((hsi*2970+33990)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+14850)*1+lsi)*1]), &(inteval->stack[((hsi*10890+433160)*1+lsi)*1]), &(inteval->stack[((hsi*8910+625022)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+892808)*1+lsi)*1]), &(inteval->stack[((hsi*21780+457118)*1+lsi)*1]), &(inteval->stack[((hsi*17820+14850)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+433160)*1+lsi)*1]), &(inteval->stack[((hsi*36300+478898)*1+lsi)*1]), &(inteval->stack[((hsi*29700+892808)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+892808)*1+lsi)*1]), &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]), &(inteval->stack[((hsi*44550+433160)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+433160)*1+lsi)*1]), &(inteval->stack[((hsi*7920+0)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+453950)*1+lsi)*1]), &(inteval->stack[((hsi*20790+433160)*1+lsi)*1]), &(inteval->stack[((hsi*18018+607004)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+591560)*1+lsi)*1]), &(inteval->stack[((hsi*36036+453950)*1+lsi)*1]), &(inteval->stack[((hsi*30888+818360)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+433160)*1+lsi)*1]), &(inteval->stack[((hsi*51480+591560)*1+lsi)*1]), &(inteval->stack[((hsi*43560+849248)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+955178)*1+lsi)*1]), &(inteval->stack[((hsi*65340+433160)*1+lsi)*1]), &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+0)*1+lsi)*1]), &(inteval->stack[((hsi*76230+955178)*1+lsi)*1]), &(inteval->stack[((hsi*62370+892808)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*207900+818360)*1+lsi)*1]), &(inteval->stack[((hsi*83160+0)*1+lsi)*1]), &(inteval->stack[((hsi*69300+522260)*1+lsi)*1]),1260);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*340200+92960)*1+lsi)*1]), &(inteval->stack[((hsi*207900+818360)*1+lsi)*1]), &(inteval->stack[((hsi*170100+648260)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*340200+92960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
