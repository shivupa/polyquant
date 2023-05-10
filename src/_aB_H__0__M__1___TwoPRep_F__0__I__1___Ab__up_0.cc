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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,84630)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+408030)*1+lsi)*1]), &(inteval->stack[((hsi*2184+65387)*1+lsi)*1]), &(inteval->stack[((hsi*1848+67571)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+413574)*1+lsi)*1]), &(inteval->stack[((hsi*2548+62839)*1+lsi)*1]), &(inteval->stack[((hsi*2184+65387)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+420126)*1+lsi)*1]), &(inteval->stack[((hsi*6552+413574)*1+lsi)*1]), &(inteval->stack[((hsi*5544+408030)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+431214)*1+lsi)*1]), &(inteval->stack[((hsi*2940+59899)*1+lsi)*1]), &(inteval->stack[((hsi*2548+62839)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+438858)*1+lsi)*1]), &(inteval->stack[((hsi*7644+431214)*1+lsi)*1]), &(inteval->stack[((hsi*6552+413574)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+451962)*1+lsi)*1]), &(inteval->stack[((hsi*13104+438858)*1+lsi)*1]), &(inteval->stack[((hsi*11088+420126)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+470442)*1+lsi)*1]), &(inteval->stack[((hsi*3360+56539)*1+lsi)*1]), &(inteval->stack[((hsi*2940+59899)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+479262)*1+lsi)*1]), &(inteval->stack[((hsi*8820+470442)*1+lsi)*1]), &(inteval->stack[((hsi*7644+431214)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+494550)*1+lsi)*1]), &(inteval->stack[((hsi*15288+479262)*1+lsi)*1]), &(inteval->stack[((hsi*13104+438858)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+516390)*1+lsi)*1]), &(inteval->stack[((hsi*21840+494550)*1+lsi)*1]), &(inteval->stack[((hsi*18480+451962)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+431214)*1+lsi)*1]), &(inteval->stack[((hsi*1848+67571)*1+lsi)*1]), &(inteval->stack[((hsi*1540+69419)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+435834)*1+lsi)*1]), &(inteval->stack[((hsi*5544+408030)*1+lsi)*1]), &(inteval->stack[((hsi*4620+431214)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+544110)*1+lsi)*1]), &(inteval->stack[((hsi*11088+420126)*1+lsi)*1]), &(inteval->stack[((hsi*9240+435834)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+408030)*1+lsi)*1]), &(inteval->stack[((hsi*18480+451962)*1+lsi)*1]), &(inteval->stack[((hsi*15400+544110)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+431130)*1+lsi)*1]), &(inteval->stack[((hsi*27720+516390)*1+lsi)*1]), &(inteval->stack[((hsi*23100+408030)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+408030)*1+lsi)*1]), &(inteval->stack[((hsi*3808+52731)*1+lsi)*1]), &(inteval->stack[((hsi*3360+56539)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+52731)*1+lsi)*1]), &(inteval->stack[((hsi*10080+408030)*1+lsi)*1]), &(inteval->stack[((hsi*8820+470442)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+544110)*1+lsi)*1]), &(inteval->stack[((hsi*17640+52731)*1+lsi)*1]), &(inteval->stack[((hsi*15288+479262)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+569590)*1+lsi)*1]), &(inteval->stack[((hsi*25480+544110)*1+lsi)*1]), &(inteval->stack[((hsi*21840+494550)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+463470)*1+lsi)*1]), &(inteval->stack[((hsi*32760+569590)*1+lsi)*1]), &(inteval->stack[((hsi*27720+516390)*1+lsi)*1]),28);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*43120+502278)*1+lsi)*1]), &(inteval->stack[((hsi*38808+463470)*1+lsi)*1]), &(inteval->stack[((hsi*32340+431130)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+408030)*1+lsi)*1]), &(inteval->stack[((hsi*2808+45567)*1+lsi)*1]), &(inteval->stack[((hsi*2376+48375)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+415158)*1+lsi)*1]), &(inteval->stack[((hsi*3276+42291)*1+lsi)*1]), &(inteval->stack[((hsi*2808+45567)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+423582)*1+lsi)*1]), &(inteval->stack[((hsi*8424+415158)*1+lsi)*1]), &(inteval->stack[((hsi*7128+408030)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+437838)*1+lsi)*1]), &(inteval->stack[((hsi*3780+38511)*1+lsi)*1]), &(inteval->stack[((hsi*3276+42291)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+447666)*1+lsi)*1]), &(inteval->stack[((hsi*9828+437838)*1+lsi)*1]), &(inteval->stack[((hsi*8424+415158)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+464514)*1+lsi)*1]), &(inteval->stack[((hsi*16848+447666)*1+lsi)*1]), &(inteval->stack[((hsi*14256+423582)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+52731)*1+lsi)*1]), &(inteval->stack[((hsi*4320+34191)*1+lsi)*1]), &(inteval->stack[((hsi*3780+38511)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+545398)*1+lsi)*1]), &(inteval->stack[((hsi*11340+52731)*1+lsi)*1]), &(inteval->stack[((hsi*9828+437838)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+565054)*1+lsi)*1]), &(inteval->stack[((hsi*19656+545398)*1+lsi)*1]), &(inteval->stack[((hsi*16848+447666)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+593134)*1+lsi)*1]), &(inteval->stack[((hsi*28080+565054)*1+lsi)*1]), &(inteval->stack[((hsi*23760+464514)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+437838)*1+lsi)*1]), &(inteval->stack[((hsi*2376+48375)*1+lsi)*1]), &(inteval->stack[((hsi*1980+50751)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+443778)*1+lsi)*1]), &(inteval->stack[((hsi*7128+408030)*1+lsi)*1]), &(inteval->stack[((hsi*5940+437838)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+628774)*1+lsi)*1]), &(inteval->stack[((hsi*14256+423582)*1+lsi)*1]), &(inteval->stack[((hsi*11880+443778)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+408030)*1+lsi)*1]), &(inteval->stack[((hsi*23760+464514)*1+lsi)*1]), &(inteval->stack[((hsi*19800+628774)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+437730)*1+lsi)*1]), &(inteval->stack[((hsi*35640+593134)*1+lsi)*1]), &(inteval->stack[((hsi*29700+408030)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+408030)*1+lsi)*1]), &(inteval->stack[((hsi*4896+29295)*1+lsi)*1]), &(inteval->stack[((hsi*4320+34191)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+29295)*1+lsi)*1]), &(inteval->stack[((hsi*12960+408030)*1+lsi)*1]), &(inteval->stack[((hsi*11340+52731)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+628774)*1+lsi)*1]), &(inteval->stack[((hsi*22680+29295)*1+lsi)*1]), &(inteval->stack[((hsi*19656+545398)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+661534)*1+lsi)*1]), &(inteval->stack[((hsi*32760+628774)*1+lsi)*1]), &(inteval->stack[((hsi*28080+565054)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+703654)*1+lsi)*1]), &(inteval->stack[((hsi*42120+661534)*1+lsi)*1]), &(inteval->stack[((hsi*35640+593134)*1+lsi)*1]),36);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*55440+545398)*1+lsi)*1]), &(inteval->stack[((hsi*49896+703654)*1+lsi)*1]), &(inteval->stack[((hsi*41580+437730)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*129360+600838)*1+lsi)*1]), &(inteval->stack[((hsi*55440+545398)*1+lsi)*1]), &(inteval->stack[((hsi*43120+502278)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+408030)*1+lsi)*1]), &(inteval->stack[((hsi*1638+80451)*1+lsi)*1]), &(inteval->stack[((hsi*1386+82089)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+412188)*1+lsi)*1]), &(inteval->stack[((hsi*1911+78540)*1+lsi)*1]), &(inteval->stack[((hsi*1638+80451)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+417102)*1+lsi)*1]), &(inteval->stack[((hsi*4914+412188)*1+lsi)*1]), &(inteval->stack[((hsi*4158+408030)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+425418)*1+lsi)*1]), &(inteval->stack[((hsi*2205+76335)*1+lsi)*1]), &(inteval->stack[((hsi*1911+78540)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+431151)*1+lsi)*1]), &(inteval->stack[((hsi*5733+425418)*1+lsi)*1]), &(inteval->stack[((hsi*4914+412188)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+440979)*1+lsi)*1]), &(inteval->stack[((hsi*9828+431151)*1+lsi)*1]), &(inteval->stack[((hsi*8316+417102)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+454839)*1+lsi)*1]), &(inteval->stack[((hsi*2520+73815)*1+lsi)*1]), &(inteval->stack[((hsi*2205+76335)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+29295)*1+lsi)*1]), &(inteval->stack[((hsi*6615+454839)*1+lsi)*1]), &(inteval->stack[((hsi*5733+425418)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+461454)*1+lsi)*1]), &(inteval->stack[((hsi*11466+29295)*1+lsi)*1]), &(inteval->stack[((hsi*9828+431151)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+40761)*1+lsi)*1]), &(inteval->stack[((hsi*16380+461454)*1+lsi)*1]), &(inteval->stack[((hsi*13860+440979)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+477834)*1+lsi)*1]), &(inteval->stack[((hsi*1386+82089)*1+lsi)*1]), &(inteval->stack[((hsi*1155+83475)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+481299)*1+lsi)*1]), &(inteval->stack[((hsi*4158+408030)*1+lsi)*1]), &(inteval->stack[((hsi*3465+477834)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+425418)*1+lsi)*1]), &(inteval->stack[((hsi*8316+417102)*1+lsi)*1]), &(inteval->stack[((hsi*6930+481299)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+477834)*1+lsi)*1]), &(inteval->stack[((hsi*13860+440979)*1+lsi)*1]), &(inteval->stack[((hsi*11550+425418)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+408030)*1+lsi)*1]), &(inteval->stack[((hsi*20790+40761)*1+lsi)*1]), &(inteval->stack[((hsi*17325+477834)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+477834)*1+lsi)*1]), &(inteval->stack[((hsi*2856+70959)*1+lsi)*1]), &(inteval->stack[((hsi*2520+73815)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+61551)*1+lsi)*1]), &(inteval->stack[((hsi*7560+477834)*1+lsi)*1]), &(inteval->stack[((hsi*6615+454839)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+432285)*1+lsi)*1]), &(inteval->stack[((hsi*13230+61551)*1+lsi)*1]), &(inteval->stack[((hsi*11466+29295)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+730198)*1+lsi)*1]), &(inteval->stack[((hsi*19110+432285)*1+lsi)*1]), &(inteval->stack[((hsi*16380+461454)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+432285)*1+lsi)*1]), &(inteval->stack[((hsi*24570+730198)*1+lsi)*1]), &(inteval->stack[((hsi*20790+40761)*1+lsi)*1]),21);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*32340+29295)*1+lsi)*1]), &(inteval->stack[((hsi*29106+432285)*1+lsi)*1]), &(inteval->stack[((hsi*24255+408030)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*97020+730198)*1+lsi)*1]), &(inteval->stack[((hsi*43120+502278)*1+lsi)*1]), &(inteval->stack[((hsi*32340+29295)*1+lsi)*1]),1540);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*194040+827218)*1+lsi)*1]), &(inteval->stack[((hsi*129360+600838)*1+lsi)*1]), &(inteval->stack[((hsi*97020+730198)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+408030)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20340)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23850)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+416940)*1+lsi)*1]), &(inteval->stack[((hsi*4095+16245)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20340)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+427470)*1+lsi)*1]), &(inteval->stack[((hsi*10530+416940)*1+lsi)*1]), &(inteval->stack[((hsi*8910+408030)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+445290)*1+lsi)*1]), &(inteval->stack[((hsi*4725+11520)*1+lsi)*1]), &(inteval->stack[((hsi*4095+16245)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+730198)*1+lsi)*1]), &(inteval->stack[((hsi*12285+445290)*1+lsi)*1]), &(inteval->stack[((hsi*10530+416940)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+457575)*1+lsi)*1]), &(inteval->stack[((hsi*21060+730198)*1+lsi)*1]), &(inteval->stack[((hsi*17820+427470)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+751258)*1+lsi)*1]), &(inteval->stack[((hsi*5400+6120)*1+lsi)*1]), &(inteval->stack[((hsi*4725+11520)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+765433)*1+lsi)*1]), &(inteval->stack[((hsi*14175+751258)*1+lsi)*1]), &(inteval->stack[((hsi*12285+445290)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+487275)*1+lsi)*1]), &(inteval->stack[((hsi*24570+765433)*1+lsi)*1]), &(inteval->stack[((hsi*21060+730198)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+29295)*1+lsi)*1]), &(inteval->stack[((hsi*35100+487275)*1+lsi)*1]), &(inteval->stack[((hsi*29700+457575)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+790003)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23850)*1+lsi)*1]), &(inteval->stack[((hsi*2475+26820)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+797428)*1+lsi)*1]), &(inteval->stack[((hsi*8910+408030)*1+lsi)*1]), &(inteval->stack[((hsi*7425+790003)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+1021258)*1+lsi)*1]), &(inteval->stack[((hsi*17820+427470)*1+lsi)*1]), &(inteval->stack[((hsi*14850+797428)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+408030)*1+lsi)*1]), &(inteval->stack[((hsi*29700+457575)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1021258)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+1021258)*1+lsi)*1]), &(inteval->stack[((hsi*44550+29295)*1+lsi)*1]), &(inteval->stack[((hsi*37125+408030)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+408030)*1+lsi)*1]), &(inteval->stack[((hsi*6120+0)*1+lsi)*1]), &(inteval->stack[((hsi*5400+6120)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+424230)*1+lsi)*1]), &(inteval->stack[((hsi*16200+408030)*1+lsi)*1]), &(inteval->stack[((hsi*14175+751258)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+1073233)*1+lsi)*1]), &(inteval->stack[((hsi*28350+424230)*1+lsi)*1]), &(inteval->stack[((hsi*24570+765433)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+730198)*1+lsi)*1]), &(inteval->stack[((hsi*40950+1073233)*1+lsi)*1]), &(inteval->stack[((hsi*35100+487275)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+408030)*1+lsi)*1]), &(inteval->stack[((hsi*52650+730198)*1+lsi)*1]), &(inteval->stack[((hsi*44550+29295)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+730198)*1+lsi)*1]), &(inteval->stack[((hsi*62370+408030)*1+lsi)*1]), &(inteval->stack[((hsi*51975+1021258)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*166320+1021258)*1+lsi)*1]), &(inteval->stack[((hsi*69300+730198)*1+lsi)*1]), &(inteval->stack[((hsi*55440+545398)*1+lsi)*1]),1540);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*258720+1187578)*1+lsi)*1]), &(inteval->stack[((hsi*166320+1021258)*1+lsi)*1]), &(inteval->stack[((hsi*129360+600838)*1+lsi)*1]),1540);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*323400+84630)*1+lsi)*1]), &(inteval->stack[((hsi*258720+1187578)*1+lsi)*1]), &(inteval->stack[((hsi*194040+827218)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*323400+84630)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
