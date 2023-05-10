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
#include <HRRPart1bra0ket0ki.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__K__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,96152)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+459032)*1+lsi)*1]), &(inteval->stack[((hsi*2475+72896)*1+lsi)*1]), &(inteval->stack[((hsi*2025+75371)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+465107)*1+lsi)*1]), &(inteval->stack[((hsi*2970+69926)*1+lsi)*1]), &(inteval->stack[((hsi*2475+72896)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+472532)*1+lsi)*1]), &(inteval->stack[((hsi*7425+465107)*1+lsi)*1]), &(inteval->stack[((hsi*6075+459032)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+484682)*1+lsi)*1]), &(inteval->stack[((hsi*3510+66416)*1+lsi)*1]), &(inteval->stack[((hsi*2970+69926)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+493592)*1+lsi)*1]), &(inteval->stack[((hsi*8910+484682)*1+lsi)*1]), &(inteval->stack[((hsi*7425+465107)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+508442)*1+lsi)*1]), &(inteval->stack[((hsi*14850+493592)*1+lsi)*1]), &(inteval->stack[((hsi*12150+472532)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+528692)*1+lsi)*1]), &(inteval->stack[((hsi*4095+62321)*1+lsi)*1]), &(inteval->stack[((hsi*3510+66416)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+539222)*1+lsi)*1]), &(inteval->stack[((hsi*10530+528692)*1+lsi)*1]), &(inteval->stack[((hsi*8910+484682)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+557042)*1+lsi)*1]), &(inteval->stack[((hsi*17820+539222)*1+lsi)*1]), &(inteval->stack[((hsi*14850+493592)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+581792)*1+lsi)*1]), &(inteval->stack[((hsi*24750+557042)*1+lsi)*1]), &(inteval->stack[((hsi*20250+508442)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+484682)*1+lsi)*1]), &(inteval->stack[((hsi*2025+75371)*1+lsi)*1]), &(inteval->stack[((hsi*1620+77396)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+489542)*1+lsi)*1]), &(inteval->stack[((hsi*6075+459032)*1+lsi)*1]), &(inteval->stack[((hsi*4860+484682)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+612167)*1+lsi)*1]), &(inteval->stack[((hsi*12150+472532)*1+lsi)*1]), &(inteval->stack[((hsi*9720+489542)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+459032)*1+lsi)*1]), &(inteval->stack[((hsi*20250+508442)*1+lsi)*1]), &(inteval->stack[((hsi*16200+612167)*1+lsi)*1]),45);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*34020+483332)*1+lsi)*1]), &(inteval->stack[((hsi*30375+581792)*1+lsi)*1]), &(inteval->stack[((hsi*24300+459032)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+459032)*1+lsi)*1]), &(inteval->stack[((hsi*4725+57596)*1+lsi)*1]), &(inteval->stack[((hsi*4095+62321)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+57596)*1+lsi)*1]), &(inteval->stack[((hsi*12285+459032)*1+lsi)*1]), &(inteval->stack[((hsi*10530+528692)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+612167)*1+lsi)*1]), &(inteval->stack[((hsi*21060+57596)*1+lsi)*1]), &(inteval->stack[((hsi*17820+539222)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+517352)*1+lsi)*1]), &(inteval->stack[((hsi*29700+612167)*1+lsi)*1]), &(inteval->stack[((hsi*24750+557042)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+612167)*1+lsi)*1]), &(inteval->stack[((hsi*37125+517352)*1+lsi)*1]), &(inteval->stack[((hsi*30375+581792)*1+lsi)*1]),45);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*45360+517352)*1+lsi)*1]), &(inteval->stack[((hsi*42525+612167)*1+lsi)*1]), &(inteval->stack[((hsi*34020+483332)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+459032)*1+lsi)*1]), &(inteval->stack[((hsi*3025+50116)*1+lsi)*1]), &(inteval->stack[((hsi*2475+53141)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+466457)*1+lsi)*1]), &(inteval->stack[((hsi*3630+46486)*1+lsi)*1]), &(inteval->stack[((hsi*3025+50116)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+475532)*1+lsi)*1]), &(inteval->stack[((hsi*9075+466457)*1+lsi)*1]), &(inteval->stack[((hsi*7425+459032)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+490382)*1+lsi)*1]), &(inteval->stack[((hsi*4290+42196)*1+lsi)*1]), &(inteval->stack[((hsi*3630+46486)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+57596)*1+lsi)*1]), &(inteval->stack[((hsi*10890+490382)*1+lsi)*1]), &(inteval->stack[((hsi*9075+466457)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+562712)*1+lsi)*1]), &(inteval->stack[((hsi*18150+57596)*1+lsi)*1]), &(inteval->stack[((hsi*14850+475532)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+501272)*1+lsi)*1]), &(inteval->stack[((hsi*5005+37191)*1+lsi)*1]), &(inteval->stack[((hsi*4290+42196)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+587462)*1+lsi)*1]), &(inteval->stack[((hsi*12870+501272)*1+lsi)*1]), &(inteval->stack[((hsi*10890+490382)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+609242)*1+lsi)*1]), &(inteval->stack[((hsi*21780+587462)*1+lsi)*1]), &(inteval->stack[((hsi*18150+57596)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+639492)*1+lsi)*1]), &(inteval->stack[((hsi*30250+609242)*1+lsi)*1]), &(inteval->stack[((hsi*24750+562712)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+57596)*1+lsi)*1]), &(inteval->stack[((hsi*2475+53141)*1+lsi)*1]), &(inteval->stack[((hsi*1980+55616)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+63536)*1+lsi)*1]), &(inteval->stack[((hsi*7425+459032)*1+lsi)*1]), &(inteval->stack[((hsi*5940+57596)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+42196)*1+lsi)*1]), &(inteval->stack[((hsi*14850+475532)*1+lsi)*1]), &(inteval->stack[((hsi*11880+63536)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+459032)*1+lsi)*1]), &(inteval->stack[((hsi*24750+562712)*1+lsi)*1]), &(inteval->stack[((hsi*19800+42196)*1+lsi)*1]),55);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*41580+676617)*1+lsi)*1]), &(inteval->stack[((hsi*37125+639492)*1+lsi)*1]), &(inteval->stack[((hsi*29700+459032)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+459032)*1+lsi)*1]), &(inteval->stack[((hsi*5775+31416)*1+lsi)*1]), &(inteval->stack[((hsi*5005+37191)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+31416)*1+lsi)*1]), &(inteval->stack[((hsi*15015+459032)*1+lsi)*1]), &(inteval->stack[((hsi*12870+501272)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+459032)*1+lsi)*1]), &(inteval->stack[((hsi*25740+31416)*1+lsi)*1]), &(inteval->stack[((hsi*21780+587462)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+31416)*1+lsi)*1]), &(inteval->stack[((hsi*36300+459032)*1+lsi)*1]), &(inteval->stack[((hsi*30250+609242)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+562712)*1+lsi)*1]), &(inteval->stack[((hsi*45375+31416)*1+lsi)*1]), &(inteval->stack[((hsi*37125+639492)*1+lsi)*1]),55);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*55440+614687)*1+lsi)*1]), &(inteval->stack[((hsi*51975+562712)*1+lsi)*1]), &(inteval->stack[((hsi*41580+676617)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*136080+670127)*1+lsi)*1]), &(inteval->stack[((hsi*55440+614687)*1+lsi)*1]), &(inteval->stack[((hsi*45360+517352)*1+lsi)*1]),1008);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+459032)*1+lsi)*1]), &(inteval->stack[((hsi*1980+91256)*1+lsi)*1]), &(inteval->stack[((hsi*1620+93236)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+463892)*1+lsi)*1]), &(inteval->stack[((hsi*2376+88880)*1+lsi)*1]), &(inteval->stack[((hsi*1980+91256)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+562712)*1+lsi)*1]), &(inteval->stack[((hsi*5940+463892)*1+lsi)*1]), &(inteval->stack[((hsi*4860+459032)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+31416)*1+lsi)*1]), &(inteval->stack[((hsi*2808+86072)*1+lsi)*1]), &(inteval->stack[((hsi*2376+88880)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+469832)*1+lsi)*1]), &(inteval->stack[((hsi*7128+31416)*1+lsi)*1]), &(inteval->stack[((hsi*5940+463892)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+572432)*1+lsi)*1]), &(inteval->stack[((hsi*11880+469832)*1+lsi)*1]), &(inteval->stack[((hsi*9720+562712)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+38544)*1+lsi)*1]), &(inteval->stack[((hsi*3276+82796)*1+lsi)*1]), &(inteval->stack[((hsi*2808+86072)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+481712)*1+lsi)*1]), &(inteval->stack[((hsi*8424+38544)*1+lsi)*1]), &(inteval->stack[((hsi*7128+31416)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+46968)*1+lsi)*1]), &(inteval->stack[((hsi*14256+481712)*1+lsi)*1]), &(inteval->stack[((hsi*11880+469832)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+588632)*1+lsi)*1]), &(inteval->stack[((hsi*19800+46968)*1+lsi)*1]), &(inteval->stack[((hsi*16200+572432)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+495968)*1+lsi)*1]), &(inteval->stack[((hsi*1620+93236)*1+lsi)*1]), &(inteval->stack[((hsi*1296+94856)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+463892)*1+lsi)*1]), &(inteval->stack[((hsi*4860+459032)*1+lsi)*1]), &(inteval->stack[((hsi*3888+495968)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+495968)*1+lsi)*1]), &(inteval->stack[((hsi*9720+562712)*1+lsi)*1]), &(inteval->stack[((hsi*7776+463892)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+459032)*1+lsi)*1]), &(inteval->stack[((hsi*16200+572432)*1+lsi)*1]), &(inteval->stack[((hsi*12960+495968)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+806207)*1+lsi)*1]), &(inteval->stack[((hsi*24300+588632)*1+lsi)*1]), &(inteval->stack[((hsi*19440+459032)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+562712)*1+lsi)*1]), &(inteval->stack[((hsi*3780+79016)*1+lsi)*1]), &(inteval->stack[((hsi*3276+82796)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+66768)*1+lsi)*1]), &(inteval->stack[((hsi*9828+562712)*1+lsi)*1]), &(inteval->stack[((hsi*8424+38544)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+562712)*1+lsi)*1]), &(inteval->stack[((hsi*16848+66768)*1+lsi)*1]), &(inteval->stack[((hsi*14256+481712)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+459032)*1+lsi)*1]), &(inteval->stack[((hsi*23760+562712)*1+lsi)*1]), &(inteval->stack[((hsi*19800+46968)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+31416)*1+lsi)*1]), &(inteval->stack[((hsi*29700+459032)*1+lsi)*1]), &(inteval->stack[((hsi*24300+588632)*1+lsi)*1]),36);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*36288+459032)*1+lsi)*1]), &(inteval->stack[((hsi*34020+31416)*1+lsi)*1]), &(inteval->stack[((hsi*27216+806207)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108864+806207)*1+lsi)*1]), &(inteval->stack[((hsi*45360+517352)*1+lsi)*1]), &(inteval->stack[((hsi*36288+459032)*1+lsi)*1]),1008);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*217728+915071)*1+lsi)*1]), &(inteval->stack[((hsi*136080+670127)*1+lsi)*1]), &(inteval->stack[((hsi*108864+806207)*1+lsi)*1]),1008);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+459032)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26070)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+467942)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+478832)*1+lsi)*1]), &(inteval->stack[((hsi*10890+467942)*1+lsi)*1]), &(inteval->stack[((hsi*8910+459032)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+496652)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+806207)*1+lsi)*1]), &(inteval->stack[((hsi*13068+496652)*1+lsi)*1]), &(inteval->stack[((hsi*10890+467942)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+509720)*1+lsi)*1]), &(inteval->stack[((hsi*21780+806207)*1+lsi)*1]), &(inteval->stack[((hsi*17820+478832)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+827987)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+539420)*1+lsi)*1]), &(inteval->stack[((hsi*15444+827987)*1+lsi)*1]), &(inteval->stack[((hsi*13068+496652)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+843431)*1+lsi)*1]), &(inteval->stack[((hsi*26136+539420)*1+lsi)*1]), &(inteval->stack[((hsi*21780+806207)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+31416)*1+lsi)*1]), &(inteval->stack[((hsi*36300+843431)*1+lsi)*1]), &(inteval->stack[((hsi*29700+509720)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+565556)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26070)*1+lsi)*1]), &(inteval->stack[((hsi*2376+29040)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+572684)*1+lsi)*1]), &(inteval->stack[((hsi*8910+459032)*1+lsi)*1]), &(inteval->stack[((hsi*7128+565556)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+879731)*1+lsi)*1]), &(inteval->stack[((hsi*17820+478832)*1+lsi)*1]), &(inteval->stack[((hsi*14256+572684)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+459032)*1+lsi)*1]), &(inteval->stack[((hsi*29700+509720)*1+lsi)*1]), &(inteval->stack[((hsi*23760+879731)*1+lsi)*1]),66);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*49896+1132799)*1+lsi)*1]), &(inteval->stack[((hsi*44550+31416)*1+lsi)*1]), &(inteval->stack[((hsi*35640+459032)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+459032)*1+lsi)*1]), &(inteval->stack[((hsi*6930+0)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+477050)*1+lsi)*1]), &(inteval->stack[((hsi*18018+459032)*1+lsi)*1]), &(inteval->stack[((hsi*15444+827987)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+565556)*1+lsi)*1]), &(inteval->stack[((hsi*30888+477050)*1+lsi)*1]), &(inteval->stack[((hsi*26136+539420)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+459032)*1+lsi)*1]), &(inteval->stack[((hsi*43560+565556)*1+lsi)*1]), &(inteval->stack[((hsi*36300+843431)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+806207)*1+lsi)*1]), &(inteval->stack[((hsi*54450+459032)*1+lsi)*1]), &(inteval->stack[((hsi*44550+31416)*1+lsi)*1]),66);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*66528+459032)*1+lsi)*1]), &(inteval->stack[((hsi*62370+806207)*1+lsi)*1]), &(inteval->stack[((hsi*49896+1132799)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*166320+1132799)*1+lsi)*1]), &(inteval->stack[((hsi*66528+459032)*1+lsi)*1]), &(inteval->stack[((hsi*55440+614687)*1+lsi)*1]),1008);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*272160+1299119)*1+lsi)*1]), &(inteval->stack[((hsi*166320+1132799)*1+lsi)*1]), &(inteval->stack[((hsi*136080+670127)*1+lsi)*1]),1008);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*362880+96152)*1+lsi)*1]), &(inteval->stack[((hsi*272160+1299119)*1+lsi)*1]), &(inteval->stack[((hsi*217728+915071)*1+lsi)*1]),1008);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*362880+96152)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
