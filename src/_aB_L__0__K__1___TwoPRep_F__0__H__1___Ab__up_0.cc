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
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__K__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,90524)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+430724)*1+lsi)*1]), &(inteval->stack[((hsi*3025+66349)*1+lsi)*1]), &(inteval->stack[((hsi*2475+69374)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+438149)*1+lsi)*1]), &(inteval->stack[((hsi*3630+62719)*1+lsi)*1]), &(inteval->stack[((hsi*3025+66349)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+447224)*1+lsi)*1]), &(inteval->stack[((hsi*9075+438149)*1+lsi)*1]), &(inteval->stack[((hsi*7425+430724)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+462074)*1+lsi)*1]), &(inteval->stack[((hsi*4290+58429)*1+lsi)*1]), &(inteval->stack[((hsi*3630+62719)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+472964)*1+lsi)*1]), &(inteval->stack[((hsi*10890+462074)*1+lsi)*1]), &(inteval->stack[((hsi*9075+438149)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+491114)*1+lsi)*1]), &(inteval->stack[((hsi*18150+472964)*1+lsi)*1]), &(inteval->stack[((hsi*14850+447224)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+438149)*1+lsi)*1]), &(inteval->stack[((hsi*2475+69374)*1+lsi)*1]), &(inteval->stack[((hsi*1980+71849)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+515864)*1+lsi)*1]), &(inteval->stack[((hsi*7425+430724)*1+lsi)*1]), &(inteval->stack[((hsi*5940+438149)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+527744)*1+lsi)*1]), &(inteval->stack[((hsi*14850+447224)*1+lsi)*1]), &(inteval->stack[((hsi*11880+515864)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+430724)*1+lsi)*1]), &(inteval->stack[((hsi*24750+491114)*1+lsi)*1]), &(inteval->stack[((hsi*19800+527744)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+515864)*1+lsi)*1]), &(inteval->stack[((hsi*5005+53424)*1+lsi)*1]), &(inteval->stack[((hsi*4290+58429)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+528734)*1+lsi)*1]), &(inteval->stack[((hsi*12870+515864)*1+lsi)*1]), &(inteval->stack[((hsi*10890+462074)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+550514)*1+lsi)*1]), &(inteval->stack[((hsi*21780+528734)*1+lsi)*1]), &(inteval->stack[((hsi*18150+472964)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+580764)*1+lsi)*1]), &(inteval->stack[((hsi*30250+550514)*1+lsi)*1]), &(inteval->stack[((hsi*24750+491114)*1+lsi)*1]),55);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*41580+460424)*1+lsi)*1]), &(inteval->stack[((hsi*37125+580764)*1+lsi)*1]), &(inteval->stack[((hsi*29700+430724)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+430724)*1+lsi)*1]), &(inteval->stack[((hsi*3630+44448)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48078)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+439634)*1+lsi)*1]), &(inteval->stack[((hsi*4356+40092)*1+lsi)*1]), &(inteval->stack[((hsi*3630+44448)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+53424)*1+lsi)*1]), &(inteval->stack[((hsi*10890+439634)*1+lsi)*1]), &(inteval->stack[((hsi*8910+430724)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+502004)*1+lsi)*1]), &(inteval->stack[((hsi*5148+34944)*1+lsi)*1]), &(inteval->stack[((hsi*4356+40092)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+515072)*1+lsi)*1]), &(inteval->stack[((hsi*13068+502004)*1+lsi)*1]), &(inteval->stack[((hsi*10890+439634)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+536852)*1+lsi)*1]), &(inteval->stack[((hsi*21780+515072)*1+lsi)*1]), &(inteval->stack[((hsi*17820+53424)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+439634)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48078)*1+lsi)*1]), &(inteval->stack[((hsi*2376+51048)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+566552)*1+lsi)*1]), &(inteval->stack[((hsi*8910+430724)*1+lsi)*1]), &(inteval->stack[((hsi*7128+439634)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+430724)*1+lsi)*1]), &(inteval->stack[((hsi*17820+53424)*1+lsi)*1]), &(inteval->stack[((hsi*14256+566552)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+566552)*1+lsi)*1]), &(inteval->stack[((hsi*29700+536852)*1+lsi)*1]), &(inteval->stack[((hsi*23760+430724)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+40092)*1+lsi)*1]), &(inteval->stack[((hsi*6006+28938)*1+lsi)*1]), &(inteval->stack[((hsi*5148+34944)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+430724)*1+lsi)*1]), &(inteval->stack[((hsi*15444+40092)*1+lsi)*1]), &(inteval->stack[((hsi*13068+502004)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+28938)*1+lsi)*1]), &(inteval->stack[((hsi*26136+430724)*1+lsi)*1]), &(inteval->stack[((hsi*21780+515072)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+602192)*1+lsi)*1]), &(inteval->stack[((hsi*36300+28938)*1+lsi)*1]), &(inteval->stack[((hsi*29700+536852)*1+lsi)*1]),66);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*49896+502004)*1+lsi)*1]), &(inteval->stack[((hsi*44550+602192)*1+lsi)*1]), &(inteval->stack[((hsi*35640+566552)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*124740+551900)*1+lsi)*1]), &(inteval->stack[((hsi*49896+502004)*1+lsi)*1]), &(inteval->stack[((hsi*41580+460424)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+28938)*1+lsi)*1]), &(inteval->stack[((hsi*2475+84404)*1+lsi)*1]), &(inteval->stack[((hsi*2025+86879)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+35013)*1+lsi)*1]), &(inteval->stack[((hsi*2970+81434)*1+lsi)*1]), &(inteval->stack[((hsi*2475+84404)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+42438)*1+lsi)*1]), &(inteval->stack[((hsi*7425+35013)*1+lsi)*1]), &(inteval->stack[((hsi*6075+28938)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+430724)*1+lsi)*1]), &(inteval->stack[((hsi*3510+77924)*1+lsi)*1]), &(inteval->stack[((hsi*2970+81434)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+439634)*1+lsi)*1]), &(inteval->stack[((hsi*8910+430724)*1+lsi)*1]), &(inteval->stack[((hsi*7425+35013)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+676640)*1+lsi)*1]), &(inteval->stack[((hsi*14850+439634)*1+lsi)*1]), &(inteval->stack[((hsi*12150+42438)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+54588)*1+lsi)*1]), &(inteval->stack[((hsi*2025+86879)*1+lsi)*1]), &(inteval->stack[((hsi*1620+88904)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+59448)*1+lsi)*1]), &(inteval->stack[((hsi*6075+28938)*1+lsi)*1]), &(inteval->stack[((hsi*4860+54588)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+696890)*1+lsi)*1]), &(inteval->stack[((hsi*12150+42438)*1+lsi)*1]), &(inteval->stack[((hsi*9720+59448)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+28938)*1+lsi)*1]), &(inteval->stack[((hsi*20250+676640)*1+lsi)*1]), &(inteval->stack[((hsi*16200+696890)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+53238)*1+lsi)*1]), &(inteval->stack[((hsi*4095+73829)*1+lsi)*1]), &(inteval->stack[((hsi*3510+77924)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+63768)*1+lsi)*1]), &(inteval->stack[((hsi*10530+53238)*1+lsi)*1]), &(inteval->stack[((hsi*8910+430724)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+696890)*1+lsi)*1]), &(inteval->stack[((hsi*17820+63768)*1+lsi)*1]), &(inteval->stack[((hsi*14850+439634)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+53238)*1+lsi)*1]), &(inteval->stack[((hsi*24750+696890)*1+lsi)*1]), &(inteval->stack[((hsi*20250+676640)*1+lsi)*1]),45);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*34020+676640)*1+lsi)*1]), &(inteval->stack[((hsi*30375+53238)*1+lsi)*1]), &(inteval->stack[((hsi*24300+28938)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*102060+710660)*1+lsi)*1]), &(inteval->stack[((hsi*41580+460424)*1+lsi)*1]), &(inteval->stack[((hsi*34020+676640)*1+lsi)*1]),756);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*204120+812720)*1+lsi)*1]), &(inteval->stack[((hsi*124740+551900)*1+lsi)*1]), &(inteval->stack[((hsi*102060+710660)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+676640)*1+lsi)*1]), &(inteval->stack[((hsi*4290+18330)*1+lsi)*1]), &(inteval->stack[((hsi*3510+22620)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+687170)*1+lsi)*1]), &(inteval->stack[((hsi*5148+13182)*1+lsi)*1]), &(inteval->stack[((hsi*4290+18330)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+700040)*1+lsi)*1]), &(inteval->stack[((hsi*12870+687170)*1+lsi)*1]), &(inteval->stack[((hsi*10530+676640)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+721100)*1+lsi)*1]), &(inteval->stack[((hsi*6084+7098)*1+lsi)*1]), &(inteval->stack[((hsi*5148+13182)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+736544)*1+lsi)*1]), &(inteval->stack[((hsi*15444+721100)*1+lsi)*1]), &(inteval->stack[((hsi*12870+687170)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+430724)*1+lsi)*1]), &(inteval->stack[((hsi*25740+736544)*1+lsi)*1]), &(inteval->stack[((hsi*21060+700040)*1+lsi)*1]),78);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+28938)*1+lsi)*1]), &(inteval->stack[((hsi*3510+22620)*1+lsi)*1]), &(inteval->stack[((hsi*2808+26130)*1+lsi)*1]),78);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+37362)*1+lsi)*1]), &(inteval->stack[((hsi*10530+676640)*1+lsi)*1]), &(inteval->stack[((hsi*8424+28938)*1+lsi)*1]),78);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+762284)*1+lsi)*1]), &(inteval->stack[((hsi*21060+700040)*1+lsi)*1]), &(inteval->stack[((hsi*16848+37362)*1+lsi)*1]),78);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*42120+13182)*1+lsi)*1]), &(inteval->stack[((hsi*35100+430724)*1+lsi)*1]), &(inteval->stack[((hsi*28080+762284)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+762284)*1+lsi)*1]), &(inteval->stack[((hsi*7098+0)*1+lsi)*1]), &(inteval->stack[((hsi*6084+7098)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+676640)*1+lsi)*1]), &(inteval->stack[((hsi*18252+762284)*1+lsi)*1]), &(inteval->stack[((hsi*15444+721100)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+762284)*1+lsi)*1]), &(inteval->stack[((hsi*30888+676640)*1+lsi)*1]), &(inteval->stack[((hsi*25740+736544)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+676640)*1+lsi)*1]), &(inteval->stack[((hsi*42900+762284)*1+lsi)*1]), &(inteval->stack[((hsi*35100+430724)*1+lsi)*1]),78);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*58968+729290)*1+lsi)*1]), &(inteval->stack[((hsi*52650+676640)*1+lsi)*1]), &(inteval->stack[((hsi*42120+13182)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*149688+1016840)*1+lsi)*1]), &(inteval->stack[((hsi*58968+729290)*1+lsi)*1]), &(inteval->stack[((hsi*49896+502004)*1+lsi)*1]),756);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*249480+1166528)*1+lsi)*1]), &(inteval->stack[((hsi*149688+1016840)*1+lsi)*1]), &(inteval->stack[((hsi*124740+551900)*1+lsi)*1]),756);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*340200+90524)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1166528)*1+lsi)*1]), &(inteval->stack[((hsi*204120+812720)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*340200+90524)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
