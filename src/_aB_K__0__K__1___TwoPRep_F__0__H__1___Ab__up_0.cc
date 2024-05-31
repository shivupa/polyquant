/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0op.h>
#include <_aB_K__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,74942)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+347102)*1+lsi)*1]), &(inteval->stack[((hsi*2475+55466)*1+lsi)*1]), &(inteval->stack[((hsi*2025+57941)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+353177)*1+lsi)*1]), &(inteval->stack[((hsi*2970+52496)*1+lsi)*1]), &(inteval->stack[((hsi*2475+55466)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+360602)*1+lsi)*1]), &(inteval->stack[((hsi*7425+353177)*1+lsi)*1]), &(inteval->stack[((hsi*6075+347102)*1+lsi)*1]),45);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*8910+372752)*1+lsi)*1]), &(inteval->stack[((hsi*3510+48986)*1+lsi)*1]), &(inteval->stack[((hsi*2970+52496)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+381662)*1+lsi)*1]), &(inteval->stack[((hsi*8910+372752)*1+lsi)*1]), &(inteval->stack[((hsi*7425+353177)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+396512)*1+lsi)*1]), &(inteval->stack[((hsi*14850+381662)*1+lsi)*1]), &(inteval->stack[((hsi*12150+360602)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+353177)*1+lsi)*1]), &(inteval->stack[((hsi*2025+57941)*1+lsi)*1]), &(inteval->stack[((hsi*1620+59966)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+416762)*1+lsi)*1]), &(inteval->stack[((hsi*6075+347102)*1+lsi)*1]), &(inteval->stack[((hsi*4860+353177)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+426482)*1+lsi)*1]), &(inteval->stack[((hsi*12150+360602)*1+lsi)*1]), &(inteval->stack[((hsi*9720+416762)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+347102)*1+lsi)*1]), &(inteval->stack[((hsi*20250+396512)*1+lsi)*1]), &(inteval->stack[((hsi*16200+426482)*1+lsi)*1]),45);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*10530+416762)*1+lsi)*1]), &(inteval->stack[((hsi*4095+44891)*1+lsi)*1]), &(inteval->stack[((hsi*3510+48986)*1+lsi)*1]),45);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*17820+427292)*1+lsi)*1]), &(inteval->stack[((hsi*10530+416762)*1+lsi)*1]), &(inteval->stack[((hsi*8910+372752)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+445112)*1+lsi)*1]), &(inteval->stack[((hsi*17820+427292)*1+lsi)*1]), &(inteval->stack[((hsi*14850+381662)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+469862)*1+lsi)*1]), &(inteval->stack[((hsi*24750+445112)*1+lsi)*1]), &(inteval->stack[((hsi*20250+396512)*1+lsi)*1]),45);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*34020+371402)*1+lsi)*1]), &(inteval->stack[((hsi*30375+469862)*1+lsi)*1]), &(inteval->stack[((hsi*24300+347102)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+347102)*1+lsi)*1]), &(inteval->stack[((hsi*3025+37411)*1+lsi)*1]), &(inteval->stack[((hsi*2475+40436)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+354527)*1+lsi)*1]), &(inteval->stack[((hsi*3630+33781)*1+lsi)*1]), &(inteval->stack[((hsi*3025+37411)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+44891)*1+lsi)*1]), &(inteval->stack[((hsi*9075+354527)*1+lsi)*1]), &(inteval->stack[((hsi*7425+347102)*1+lsi)*1]),55);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*10890+405422)*1+lsi)*1]), &(inteval->stack[((hsi*4290+29491)*1+lsi)*1]), &(inteval->stack[((hsi*3630+33781)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+416312)*1+lsi)*1]), &(inteval->stack[((hsi*10890+405422)*1+lsi)*1]), &(inteval->stack[((hsi*9075+354527)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+434462)*1+lsi)*1]), &(inteval->stack[((hsi*18150+416312)*1+lsi)*1]), &(inteval->stack[((hsi*14850+44891)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+354527)*1+lsi)*1]), &(inteval->stack[((hsi*2475+40436)*1+lsi)*1]), &(inteval->stack[((hsi*1980+42911)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+459212)*1+lsi)*1]), &(inteval->stack[((hsi*7425+347102)*1+lsi)*1]), &(inteval->stack[((hsi*5940+354527)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+347102)*1+lsi)*1]), &(inteval->stack[((hsi*14850+44891)*1+lsi)*1]), &(inteval->stack[((hsi*11880+459212)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+459212)*1+lsi)*1]), &(inteval->stack[((hsi*24750+434462)*1+lsi)*1]), &(inteval->stack[((hsi*19800+347102)*1+lsi)*1]),55);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*12870+33781)*1+lsi)*1]), &(inteval->stack[((hsi*5005+24486)*1+lsi)*1]), &(inteval->stack[((hsi*4290+29491)*1+lsi)*1]),55);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*21780+347102)*1+lsi)*1]), &(inteval->stack[((hsi*12870+33781)*1+lsi)*1]), &(inteval->stack[((hsi*10890+405422)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+24486)*1+lsi)*1]), &(inteval->stack[((hsi*21780+347102)*1+lsi)*1]), &(inteval->stack[((hsi*18150+416312)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+488912)*1+lsi)*1]), &(inteval->stack[((hsi*30250+24486)*1+lsi)*1]), &(inteval->stack[((hsi*24750+434462)*1+lsi)*1]),55);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*41580+405422)*1+lsi)*1]), &(inteval->stack[((hsi*37125+488912)*1+lsi)*1]), &(inteval->stack[((hsi*29700+459212)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*102060+447002)*1+lsi)*1]), &(inteval->stack[((hsi*41580+405422)*1+lsi)*1]), &(inteval->stack[((hsi*34020+371402)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+24486)*1+lsi)*1]), &(inteval->stack[((hsi*1980+70046)*1+lsi)*1]), &(inteval->stack[((hsi*1620+72026)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+29346)*1+lsi)*1]), &(inteval->stack[((hsi*2376+67670)*1+lsi)*1]), &(inteval->stack[((hsi*1980+70046)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+35286)*1+lsi)*1]), &(inteval->stack[((hsi*5940+29346)*1+lsi)*1]), &(inteval->stack[((hsi*4860+24486)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+347102)*1+lsi)*1]), &(inteval->stack[((hsi*2808+64862)*1+lsi)*1]), &(inteval->stack[((hsi*2376+67670)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+354230)*1+lsi)*1]), &(inteval->stack[((hsi*7128+347102)*1+lsi)*1]), &(inteval->stack[((hsi*5940+29346)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+45006)*1+lsi)*1]), &(inteval->stack[((hsi*11880+354230)*1+lsi)*1]), &(inteval->stack[((hsi*9720+35286)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+29346)*1+lsi)*1]), &(inteval->stack[((hsi*1620+72026)*1+lsi)*1]), &(inteval->stack[((hsi*1296+73646)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+549062)*1+lsi)*1]), &(inteval->stack[((hsi*4860+24486)*1+lsi)*1]), &(inteval->stack[((hsi*3888+29346)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+556838)*1+lsi)*1]), &(inteval->stack[((hsi*9720+35286)*1+lsi)*1]), &(inteval->stack[((hsi*7776+549062)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+24486)*1+lsi)*1]), &(inteval->stack[((hsi*16200+45006)*1+lsi)*1]), &(inteval->stack[((hsi*12960+556838)*1+lsi)*1]),36);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*8424+549062)*1+lsi)*1]), &(inteval->stack[((hsi*3276+61586)*1+lsi)*1]), &(inteval->stack[((hsi*2808+64862)*1+lsi)*1]),36);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*14256+557486)*1+lsi)*1]), &(inteval->stack[((hsi*8424+549062)*1+lsi)*1]), &(inteval->stack[((hsi*7128+347102)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+571742)*1+lsi)*1]), &(inteval->stack[((hsi*14256+557486)*1+lsi)*1]), &(inteval->stack[((hsi*11880+354230)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+347102)*1+lsi)*1]), &(inteval->stack[((hsi*19800+571742)*1+lsi)*1]), &(inteval->stack[((hsi*16200+45006)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+43926)*1+lsi)*1]), &(inteval->stack[((hsi*24300+347102)*1+lsi)*1]), &(inteval->stack[((hsi*19440+24486)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*81648+549062)*1+lsi)*1]), &(inteval->stack[((hsi*34020+371402)*1+lsi)*1]), &(inteval->stack[((hsi*27216+43926)*1+lsi)*1]),756);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*163296+630710)*1+lsi)*1]), &(inteval->stack[((hsi*102060+447002)*1+lsi)*1]), &(inteval->stack[((hsi*81648+549062)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+549062)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15510)*1+lsi)*1]), &(inteval->stack[((hsi*2970+19140)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+557972)*1+lsi)*1]), &(inteval->stack[((hsi*4356+11154)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15510)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+568862)*1+lsi)*1]), &(inteval->stack[((hsi*10890+557972)*1+lsi)*1]), &(inteval->stack[((hsi*8910+549062)*1+lsi)*1]),66);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*13068+347102)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6006)*1+lsi)*1]), &(inteval->stack[((hsi*4356+11154)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+24486)*1+lsi)*1]), &(inteval->stack[((hsi*13068+347102)*1+lsi)*1]), &(inteval->stack[((hsi*10890+557972)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+360170)*1+lsi)*1]), &(inteval->stack[((hsi*21780+24486)*1+lsi)*1]), &(inteval->stack[((hsi*17820+568862)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+586682)*1+lsi)*1]), &(inteval->stack[((hsi*2970+19140)*1+lsi)*1]), &(inteval->stack[((hsi*2376+22110)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+593810)*1+lsi)*1]), &(inteval->stack[((hsi*8910+549062)*1+lsi)*1]), &(inteval->stack[((hsi*7128+586682)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+46266)*1+lsi)*1]), &(inteval->stack[((hsi*17820+568862)*1+lsi)*1]), &(inteval->stack[((hsi*14256+593810)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+549062)*1+lsi)*1]), &(inteval->stack[((hsi*29700+360170)*1+lsi)*1]), &(inteval->stack[((hsi*23760+46266)*1+lsi)*1]),66);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*15444+584702)*1+lsi)*1]), &(inteval->stack[((hsi*6006+0)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6006)*1+lsi)*1]),66);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*26136+600146)*1+lsi)*1]), &(inteval->stack[((hsi*15444+584702)*1+lsi)*1]), &(inteval->stack[((hsi*13068+347102)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+794006)*1+lsi)*1]), &(inteval->stack[((hsi*26136+600146)*1+lsi)*1]), &(inteval->stack[((hsi*21780+24486)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+0)*1+lsi)*1]), &(inteval->stack[((hsi*36300+794006)*1+lsi)*1]), &(inteval->stack[((hsi*29700+360170)*1+lsi)*1]),66);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*49896+347102)*1+lsi)*1]), &(inteval->stack[((hsi*44550+0)*1+lsi)*1]), &(inteval->stack[((hsi*35640+549062)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*124740+794006)*1+lsi)*1]), &(inteval->stack[((hsi*49896+347102)*1+lsi)*1]), &(inteval->stack[((hsi*41580+405422)*1+lsi)*1]),756);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*204120+918746)*1+lsi)*1]), &(inteval->stack[((hsi*124740+794006)*1+lsi)*1]), &(inteval->stack[((hsi*102060+447002)*1+lsi)*1]),756);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*272160+74942)*1+lsi)*1]), &(inteval->stack[((hsi*204120+918746)*1+lsi)*1]), &(inteval->stack[((hsi*163296+630710)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*272160+74942)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
