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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ii.h>
#include <HRRPart1bra0ket0ip.h>
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
#include <_aB_I__0__I__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,65436)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+284956)*1+lsi)*1]), &(inteval->stack[((hsi*1620+50340)*1+lsi)*1]), &(inteval->stack[((hsi*1296+51960)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+288844)*1+lsi)*1]), &(inteval->stack[((hsi*1980+48360)*1+lsi)*1]), &(inteval->stack[((hsi*1620+50340)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+293704)*1+lsi)*1]), &(inteval->stack[((hsi*4860+288844)*1+lsi)*1]), &(inteval->stack[((hsi*3888+284956)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+301480)*1+lsi)*1]), &(inteval->stack[((hsi*2376+45984)*1+lsi)*1]), &(inteval->stack[((hsi*1980+48360)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+307420)*1+lsi)*1]), &(inteval->stack[((hsi*5940+301480)*1+lsi)*1]), &(inteval->stack[((hsi*4860+288844)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+317140)*1+lsi)*1]), &(inteval->stack[((hsi*9720+307420)*1+lsi)*1]), &(inteval->stack[((hsi*7776+293704)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+330100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+43176)*1+lsi)*1]), &(inteval->stack[((hsi*2376+45984)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+337228)*1+lsi)*1]), &(inteval->stack[((hsi*7128+330100)*1+lsi)*1]), &(inteval->stack[((hsi*5940+301480)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+349108)*1+lsi)*1]), &(inteval->stack[((hsi*11880+337228)*1+lsi)*1]), &(inteval->stack[((hsi*9720+307420)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+365308)*1+lsi)*1]), &(inteval->stack[((hsi*16200+349108)*1+lsi)*1]), &(inteval->stack[((hsi*12960+317140)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+301480)*1+lsi)*1]), &(inteval->stack[((hsi*1296+51960)*1+lsi)*1]), &(inteval->stack[((hsi*1008+53256)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+304504)*1+lsi)*1]), &(inteval->stack[((hsi*3888+284956)*1+lsi)*1]), &(inteval->stack[((hsi*3024+301480)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+384748)*1+lsi)*1]), &(inteval->stack[((hsi*7776+293704)*1+lsi)*1]), &(inteval->stack[((hsi*6048+304504)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+284956)*1+lsi)*1]), &(inteval->stack[((hsi*12960+317140)*1+lsi)*1]), &(inteval->stack[((hsi*10080+384748)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+300076)*1+lsi)*1]), &(inteval->stack[((hsi*19440+365308)*1+lsi)*1]), &(inteval->stack[((hsi*15120+284956)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+284956)*1+lsi)*1]), &(inteval->stack[((hsi*3276+39900)*1+lsi)*1]), &(inteval->stack[((hsi*2808+43176)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+39900)*1+lsi)*1]), &(inteval->stack[((hsi*8424+284956)*1+lsi)*1]), &(inteval->stack[((hsi*7128+330100)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+384748)*1+lsi)*1]), &(inteval->stack[((hsi*14256+39900)*1+lsi)*1]), &(inteval->stack[((hsi*11880+337228)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+321244)*1+lsi)*1]), &(inteval->stack[((hsi*19800+384748)*1+lsi)*1]), &(inteval->stack[((hsi*16200+349108)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+384748)*1+lsi)*1]), &(inteval->stack[((hsi*24300+321244)*1+lsi)*1]), &(inteval->stack[((hsi*19440+365308)*1+lsi)*1]),36);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*28224+321244)*1+lsi)*1]), &(inteval->stack[((hsi*27216+384748)*1+lsi)*1]), &(inteval->stack[((hsi*21168+300076)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+284956)*1+lsi)*1]), &(inteval->stack[((hsi*2025+34995)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37020)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+289816)*1+lsi)*1]), &(inteval->stack[((hsi*2475+32520)*1+lsi)*1]), &(inteval->stack[((hsi*2025+34995)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+295891)*1+lsi)*1]), &(inteval->stack[((hsi*6075+289816)*1+lsi)*1]), &(inteval->stack[((hsi*4860+284956)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+305611)*1+lsi)*1]), &(inteval->stack[((hsi*2970+29550)*1+lsi)*1]), &(inteval->stack[((hsi*2475+32520)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+39900)*1+lsi)*1]), &(inteval->stack[((hsi*7425+305611)*1+lsi)*1]), &(inteval->stack[((hsi*6075+289816)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+349468)*1+lsi)*1]), &(inteval->stack[((hsi*12150+39900)*1+lsi)*1]), &(inteval->stack[((hsi*9720+295891)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+365668)*1+lsi)*1]), &(inteval->stack[((hsi*3510+26040)*1+lsi)*1]), &(inteval->stack[((hsi*2970+29550)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+374578)*1+lsi)*1]), &(inteval->stack[((hsi*8910+365668)*1+lsi)*1]), &(inteval->stack[((hsi*7425+305611)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+389428)*1+lsi)*1]), &(inteval->stack[((hsi*14850+374578)*1+lsi)*1]), &(inteval->stack[((hsi*12150+39900)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+409678)*1+lsi)*1]), &(inteval->stack[((hsi*20250+389428)*1+lsi)*1]), &(inteval->stack[((hsi*16200+349468)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+305611)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37020)*1+lsi)*1]), &(inteval->stack[((hsi*1260+38640)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+29550)*1+lsi)*1]), &(inteval->stack[((hsi*4860+284956)*1+lsi)*1]), &(inteval->stack[((hsi*3780+305611)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+37110)*1+lsi)*1]), &(inteval->stack[((hsi*9720+295891)*1+lsi)*1]), &(inteval->stack[((hsi*7560+29550)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+284956)*1+lsi)*1]), &(inteval->stack[((hsi*16200+349468)*1+lsi)*1]), &(inteval->stack[((hsi*12600+37110)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+433978)*1+lsi)*1]), &(inteval->stack[((hsi*24300+409678)*1+lsi)*1]), &(inteval->stack[((hsi*18900+284956)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+284956)*1+lsi)*1]), &(inteval->stack[((hsi*4095+21945)*1+lsi)*1]), &(inteval->stack[((hsi*3510+26040)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+21945)*1+lsi)*1]), &(inteval->stack[((hsi*10530+284956)*1+lsi)*1]), &(inteval->stack[((hsi*8910+365668)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+284956)*1+lsi)*1]), &(inteval->stack[((hsi*17820+21945)*1+lsi)*1]), &(inteval->stack[((hsi*14850+374578)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+349468)*1+lsi)*1]), &(inteval->stack[((hsi*24750+284956)*1+lsi)*1]), &(inteval->stack[((hsi*20250+389428)*1+lsi)*1]),45);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*34020+284956)*1+lsi)*1]), &(inteval->stack[((hsi*30375+349468)*1+lsi)*1]), &(inteval->stack[((hsi*24300+409678)*1+lsi)*1]),45);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*35280+349468)*1+lsi)*1]), &(inteval->stack[((hsi*34020+284956)*1+lsi)*1]), &(inteval->stack[((hsi*26460+433978)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*84672+384748)*1+lsi)*1]), &(inteval->stack[((hsi*35280+349468)*1+lsi)*1]), &(inteval->stack[((hsi*28224+321244)*1+lsi)*1]),784);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+284956)*1+lsi)*1]), &(inteval->stack[((hsi*1260+62384)*1+lsi)*1]), &(inteval->stack[((hsi*1008+63644)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+287980)*1+lsi)*1]), &(inteval->stack[((hsi*1540+60844)*1+lsi)*1]), &(inteval->stack[((hsi*1260+62384)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+21945)*1+lsi)*1]), &(inteval->stack[((hsi*3780+287980)*1+lsi)*1]), &(inteval->stack[((hsi*3024+284956)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+291760)*1+lsi)*1]), &(inteval->stack[((hsi*1848+58996)*1+lsi)*1]), &(inteval->stack[((hsi*1540+60844)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+27993)*1+lsi)*1]), &(inteval->stack[((hsi*4620+291760)*1+lsi)*1]), &(inteval->stack[((hsi*3780+287980)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+296380)*1+lsi)*1]), &(inteval->stack[((hsi*7560+27993)*1+lsi)*1]), &(inteval->stack[((hsi*6048+21945)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+35553)*1+lsi)*1]), &(inteval->stack[((hsi*2184+56812)*1+lsi)*1]), &(inteval->stack[((hsi*1848+58996)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+306460)*1+lsi)*1]), &(inteval->stack[((hsi*5544+35553)*1+lsi)*1]), &(inteval->stack[((hsi*4620+291760)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+41097)*1+lsi)*1]), &(inteval->stack[((hsi*9240+306460)*1+lsi)*1]), &(inteval->stack[((hsi*7560+27993)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+469420)*1+lsi)*1]), &(inteval->stack[((hsi*12600+41097)*1+lsi)*1]), &(inteval->stack[((hsi*10080+296380)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+287980)*1+lsi)*1]), &(inteval->stack[((hsi*1008+63644)*1+lsi)*1]), &(inteval->stack[((hsi*784+64652)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+27993)*1+lsi)*1]), &(inteval->stack[((hsi*3024+284956)*1+lsi)*1]), &(inteval->stack[((hsi*2352+287980)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+284956)*1+lsi)*1]), &(inteval->stack[((hsi*6048+21945)*1+lsi)*1]), &(inteval->stack[((hsi*4704+27993)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+21945)*1+lsi)*1]), &(inteval->stack[((hsi*10080+296380)*1+lsi)*1]), &(inteval->stack[((hsi*7840+284956)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+284956)*1+lsi)*1]), &(inteval->stack[((hsi*15120+469420)*1+lsi)*1]), &(inteval->stack[((hsi*11760+21945)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+21945)*1+lsi)*1]), &(inteval->stack[((hsi*2548+54264)*1+lsi)*1]), &(inteval->stack[((hsi*2184+56812)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+53697)*1+lsi)*1]), &(inteval->stack[((hsi*6552+21945)*1+lsi)*1]), &(inteval->stack[((hsi*5544+35553)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+21945)*1+lsi)*1]), &(inteval->stack[((hsi*11088+53697)*1+lsi)*1]), &(inteval->stack[((hsi*9240+306460)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+301420)*1+lsi)*1]), &(inteval->stack[((hsi*15400+21945)*1+lsi)*1]), &(inteval->stack[((hsi*12600+41097)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+21945)*1+lsi)*1]), &(inteval->stack[((hsi*18900+301420)*1+lsi)*1]), &(inteval->stack[((hsi*15120+469420)*1+lsi)*1]),28);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*21952+43113)*1+lsi)*1]), &(inteval->stack[((hsi*21168+21945)*1+lsi)*1]), &(inteval->stack[((hsi*16464+284956)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*65856+469420)*1+lsi)*1]), &(inteval->stack[((hsi*28224+321244)*1+lsi)*1]), &(inteval->stack[((hsi*21952+43113)*1+lsi)*1]),784);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*131712+535276)*1+lsi)*1]), &(inteval->stack[((hsi*84672+384748)*1+lsi)*1]), &(inteval->stack[((hsi*65856+469420)*1+lsi)*1]),784);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+469420)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15950)*1+lsi)*1]), &(inteval->stack[((hsi*1980+18425)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+284956)*1+lsi)*1]), &(inteval->stack[((hsi*3025+12925)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15950)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+475360)*1+lsi)*1]), &(inteval->stack[((hsi*7425+284956)*1+lsi)*1]), &(inteval->stack[((hsi*5940+469420)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+292381)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]), &(inteval->stack[((hsi*3025+12925)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+487240)*1+lsi)*1]), &(inteval->stack[((hsi*9075+292381)*1+lsi)*1]), &(inteval->stack[((hsi*7425+284956)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+301456)*1+lsi)*1]), &(inteval->stack[((hsi*14850+487240)*1+lsi)*1]), &(inteval->stack[((hsi*11880+475360)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+21945)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+502090)*1+lsi)*1]), &(inteval->stack[((hsi*10890+21945)*1+lsi)*1]), &(inteval->stack[((hsi*9075+292381)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+32835)*1+lsi)*1]), &(inteval->stack[((hsi*18150+502090)*1+lsi)*1]), &(inteval->stack[((hsi*14850+487240)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+666988)*1+lsi)*1]), &(inteval->stack[((hsi*24750+32835)*1+lsi)*1]), &(inteval->stack[((hsi*19800+301456)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+321256)*1+lsi)*1]), &(inteval->stack[((hsi*1980+18425)*1+lsi)*1]), &(inteval->stack[((hsi*1540+20405)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+325876)*1+lsi)*1]), &(inteval->stack[((hsi*5940+469420)*1+lsi)*1]), &(inteval->stack[((hsi*4620+321256)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+284956)*1+lsi)*1]), &(inteval->stack[((hsi*11880+475360)*1+lsi)*1]), &(inteval->stack[((hsi*9240+325876)*1+lsi)*1]),55);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+469420)*1+lsi)*1]), &(inteval->stack[((hsi*19800+301456)*1+lsi)*1]), &(inteval->stack[((hsi*15400+284956)*1+lsi)*1]),55);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+284956)*1+lsi)*1]), &(inteval->stack[((hsi*29700+666988)*1+lsi)*1]), &(inteval->stack[((hsi*23100+469420)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+469420)*1+lsi)*1]), &(inteval->stack[((hsi*5005+0)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+317296)*1+lsi)*1]), &(inteval->stack[((hsi*12870+469420)*1+lsi)*1]), &(inteval->stack[((hsi*10890+21945)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+0)*1+lsi)*1]), &(inteval->stack[((hsi*21780+317296)*1+lsi)*1]), &(inteval->stack[((hsi*18150+502090)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+469420)*1+lsi)*1]), &(inteval->stack[((hsi*30250+0)*1+lsi)*1]), &(inteval->stack[((hsi*24750+32835)*1+lsi)*1]),55);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*41580+0)*1+lsi)*1]), &(inteval->stack[((hsi*37125+469420)*1+lsi)*1]), &(inteval->stack[((hsi*29700+666988)*1+lsi)*1]),55);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*43120+469420)*1+lsi)*1]), &(inteval->stack[((hsi*41580+0)*1+lsi)*1]), &(inteval->stack[((hsi*32340+284956)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*105840+666988)*1+lsi)*1]), &(inteval->stack[((hsi*43120+469420)*1+lsi)*1]), &(inteval->stack[((hsi*35280+349468)*1+lsi)*1]),784);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*169344+772828)*1+lsi)*1]), &(inteval->stack[((hsi*105840+666988)*1+lsi)*1]), &(inteval->stack[((hsi*84672+384748)*1+lsi)*1]),784);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*219520+65436)*1+lsi)*1]), &(inteval->stack[((hsi*169344+772828)*1+lsi)*1]), &(inteval->stack[((hsi*131712+535276)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*219520+65436)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
