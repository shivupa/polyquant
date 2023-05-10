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
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psm.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,739200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*5005+666875)*1+lsi)*1]), &(inteval->stack[((hsi*4290+671880)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+5325870)*1+lsi)*1]), &(inteval->stack[((hsi*5775+661100)*1+lsi)*1]), &(inteval->stack[((hsi*5005+666875)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+5340885)*1+lsi)*1]), &(inteval->stack[((hsi*15015+5325870)*1+lsi)*1]), &(inteval->stack[((hsi*12870+5313000)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+5366625)*1+lsi)*1]), &(inteval->stack[((hsi*6600+654500)*1+lsi)*1]), &(inteval->stack[((hsi*5775+661100)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+5383950)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5366625)*1+lsi)*1]), &(inteval->stack[((hsi*15015+5325870)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+5413980)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5383950)*1+lsi)*1]), &(inteval->stack[((hsi*25740+5340885)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+5456880)*1+lsi)*1]), &(inteval->stack[((hsi*7480+647020)*1+lsi)*1]), &(inteval->stack[((hsi*6600+654500)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+5476680)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5456880)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5366625)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+5511330)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5476680)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5383950)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+5561380)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5511330)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5413980)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+5366625)*1+lsi)*1]), &(inteval->stack[((hsi*8415+638605)*1+lsi)*1]), &(inteval->stack[((hsi*7480+647020)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+5625730)*1+lsi)*1]), &(inteval->stack[((hsi*22440+5366625)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5456880)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+5665330)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5625730)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5476680)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+5723080)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5665330)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5511330)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+5456880)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5723080)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5561380)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+5798155)*1+lsi)*1]), &(inteval->stack[((hsi*9405+629200)*1+lsi)*1]), &(inteval->stack[((hsi*8415+638605)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+5823400)*1+lsi)*1]), &(inteval->stack[((hsi*25245+5798155)*1+lsi)*1]), &(inteval->stack[((hsi*22440+5366625)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+5868280)*1+lsi)*1]), &(inteval->stack[((hsi*44880+5823400)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5625730)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+5934280)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5868280)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5665330)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+6020905)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5934280)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5723080)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+5625730)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6020905)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5456880)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+5745850)*1+lsi)*1]), &(inteval->stack[((hsi*10450+618750)*1+lsi)*1]), &(inteval->stack[((hsi*9405+629200)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+6126010)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5745850)*1+lsi)*1]), &(inteval->stack[((hsi*25245+5798155)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+6176500)*1+lsi)*1]), &(inteval->stack[((hsi*50490+6126010)*1+lsi)*1]), &(inteval->stack[((hsi*44880+5823400)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+6251300)*1+lsi)*1]), &(inteval->stack[((hsi*74800+6176500)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5868280)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+5774065)*1+lsi)*1]), &(inteval->stack[((hsi*99000+6251300)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5934280)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+6350300)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5774065)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6020905)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+5895340)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6350300)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5625730)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*4290+671880)*1+lsi)*1]), &(inteval->stack[((hsi*3630+676170)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+6060670)*1+lsi)*1]), &(inteval->stack[((hsi*12870+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*10890+6049780)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+629200)*1+lsi)*1]), &(inteval->stack[((hsi*25740+5340885)*1+lsi)*1]), &(inteval->stack[((hsi*21780+6060670)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5413980)*1+lsi)*1]), &(inteval->stack[((hsi*36300+629200)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5561380)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5313000)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5456880)*1+lsi)*1]), &(inteval->stack[((hsi*76230+6049780)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+5414640)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5625730)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5313000)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+5545320)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5895340)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5414640)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*11550+607200)*1+lsi)*1]), &(inteval->stack[((hsi*10450+618750)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+5344350)*1+lsi)*1]), &(inteval->stack[((hsi*31350+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5745850)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+5400780)*1+lsi)*1]), &(inteval->stack[((hsi*56430+5344350)*1+lsi)*1]), &(inteval->stack[((hsi*50490+6126010)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*84150+5400780)*1+lsi)*1]), &(inteval->stack[((hsi*74800+6176500)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*112200+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*99000+6251300)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*138600+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5774065)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*161700+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6350300)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*180180+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5895340)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+5708670)*1+lsi)*1]), &(inteval->stack[((hsi*193050+6049780)*1+lsi)*1]), &(inteval->stack[((hsi*163350+5545320)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*6006+591690)*1+lsi)*1]), &(inteval->stack[((hsi*5148+597696)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+5328444)*1+lsi)*1]), &(inteval->stack[((hsi*6930+584760)*1+lsi)*1]), &(inteval->stack[((hsi*6006+591690)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+5346462)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5328444)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5313000)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+5377350)*1+lsi)*1]), &(inteval->stack[((hsi*7920+576840)*1+lsi)*1]), &(inteval->stack[((hsi*6930+584760)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+5398140)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5377350)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5328444)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+5434176)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5398140)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5346462)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+5485656)*1+lsi)*1]), &(inteval->stack[((hsi*8976+567864)*1+lsi)*1]), &(inteval->stack[((hsi*7920+576840)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+5509416)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5485656)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5377350)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+5550996)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5509416)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5398140)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+5611056)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5550996)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5434176)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+607200)*1+lsi)*1]), &(inteval->stack[((hsi*10098+557766)*1+lsi)*1]), &(inteval->stack[((hsi*8976+567864)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+5377350)*1+lsi)*1]), &(inteval->stack[((hsi*26928+607200)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5485656)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5377350)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5509416)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+5977620)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5550996)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+5485656)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5977620)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5611056)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+634128)*1+lsi)*1]), &(inteval->stack[((hsi*11286+546480)*1+lsi)*1]), &(inteval->stack[((hsi*10098+557766)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+6067710)*1+lsi)*1]), &(inteval->stack[((hsi*30294+634128)*1+lsi)*1]), &(inteval->stack[((hsi*26928+607200)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+6121566)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6067710)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5377350)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+6200766)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6121566)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5908320)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+6304716)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6200766)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5977620)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6304716)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5485656)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+5377350)*1+lsi)*1]), &(inteval->stack[((hsi*12540+533940)*1+lsi)*1]), &(inteval->stack[((hsi*11286+546480)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+6430842)*1+lsi)*1]), &(inteval->stack[((hsi*33858+5377350)*1+lsi)*1]), &(inteval->stack[((hsi*30294+634128)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+6491430)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6430842)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6067710)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+6581190)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6491430)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6121566)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+6052464)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6581190)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6200766)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+6699990)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6052464)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6304716)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+6197994)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6699990)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5908320)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+607200)*1+lsi)*1]), &(inteval->stack[((hsi*5148+597696)*1+lsi)*1]), &(inteval->stack[((hsi*4356+602844)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+546480)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*13068+607200)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+572616)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5346462)*1+lsi)*1]), &(inteval->stack[((hsi*26136+546480)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+6868158)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5434176)*1+lsi)*1]), &(inteval->stack[((hsi*43560+572616)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+546480)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5611056)*1+lsi)*1]), &(inteval->stack[((hsi*65340+6868158)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+6868158)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5485656)*1+lsi)*1]), &(inteval->stack[((hsi*91476+546480)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+5411208)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*121968+6868158)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6868158)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6197994)*1+lsi)*1]), &(inteval->stack[((hsi*156816+5411208)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+5411208)*1+lsi)*1]), &(inteval->stack[((hsi*13860+520080)*1+lsi)*1]), &(inteval->stack[((hsi*12540+533940)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+5448828)*1+lsi)*1]), &(inteval->stack[((hsi*37620+5411208)*1+lsi)*1]), &(inteval->stack[((hsi*33858+5377350)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+5516544)*1+lsi)*1]), &(inteval->stack[((hsi*67716+5448828)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6430842)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*100980+5516544)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6491430)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+5447640)*1+lsi)*1]), &(inteval->stack[((hsi*134640+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6581190)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+6383322)*1+lsi)*1]), &(inteval->stack[((hsi*166320+5447640)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6052464)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*194040+6383322)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6699990)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+6383322)*1+lsi)*1]), &(inteval->stack[((hsi*216216+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6197994)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*231660+6383322)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6868158)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*598950+6147900)*1+lsi)*1]), &(inteval->stack[((hsi*239580+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5708670)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*7098+501750)*1+lsi)*1]), &(inteval->stack[((hsi*6084+508848)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+5331252)*1+lsi)*1]), &(inteval->stack[((hsi*8190+493560)*1+lsi)*1]), &(inteval->stack[((hsi*7098+501750)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+5352546)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5331252)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5313000)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+5389050)*1+lsi)*1]), &(inteval->stack[((hsi*9360+484200)*1+lsi)*1]), &(inteval->stack[((hsi*8190+493560)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+5413620)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5389050)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5331252)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+5456208)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5413620)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5352546)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+5517048)*1+lsi)*1]), &(inteval->stack[((hsi*10608+473592)*1+lsi)*1]), &(inteval->stack[((hsi*9360+484200)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+5545128)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5517048)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5389050)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+520080)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5545128)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5413620)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+5594268)*1+lsi)*1]), &(inteval->stack[((hsi*70980+520080)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5456208)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+591060)*1+lsi)*1]), &(inteval->stack[((hsi*11934+461658)*1+lsi)*1]), &(inteval->stack[((hsi*10608+473592)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+5389050)*1+lsi)*1]), &(inteval->stack[((hsi*31824+591060)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5517048)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5389050)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5545128)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+6828750)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*70980+520080)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+6935220)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6828750)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5594268)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+5517048)*1+lsi)*1]), &(inteval->stack[((hsi*13338+448320)*1+lsi)*1]), &(inteval->stack[((hsi*11934+461658)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+520080)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5517048)*1+lsi)*1]), &(inteval->stack[((hsi*31824+591060)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+583728)*1+lsi)*1]), &(inteval->stack[((hsi*63648+520080)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5389050)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+7062984)*1+lsi)*1]), &(inteval->stack[((hsi*93600+583728)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6746850)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+7185834)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7062984)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6828750)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7185834)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6935220)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+5389050)*1+lsi)*1]), &(inteval->stack[((hsi*14820+433500)*1+lsi)*1]), &(inteval->stack[((hsi*13338+448320)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+7334892)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5389050)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5517048)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+7406496)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7334892)*1+lsi)*1]), &(inteval->stack[((hsi*63648+520080)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+7512576)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7406496)*1+lsi)*1]), &(inteval->stack[((hsi*93600+583728)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+7652976)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7512576)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7062984)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+7824966)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7652976)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7185834)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+7062984)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7824966)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6746850)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+520080)*1+lsi)*1]), &(inteval->stack[((hsi*6084+508848)*1+lsi)*1]), &(inteval->stack[((hsi*5148+514932)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+535524)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*15444+520080)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+566412)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5352546)*1+lsi)*1]), &(inteval->stack[((hsi*30888+535524)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+5517048)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5456208)*1+lsi)*1]), &(inteval->stack[((hsi*51480+566412)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+448320)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5594268)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5517048)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+5429064)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6935220)*1+lsi)*1]), &(inteval->stack[((hsi*108108+448320)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+448320)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5429064)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*219024+7062984)*1+lsi)*1]), &(inteval->stack[((hsi*185328+448320)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+5429064)*1+lsi)*1]), &(inteval->stack[((hsi*16380+417120)*1+lsi)*1]), &(inteval->stack[((hsi*14820+433500)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+417120)*1+lsi)*1]), &(inteval->stack[((hsi*44460+5429064)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5389050)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*80028+417120)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7334892)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+5432340)*1+lsi)*1]), &(inteval->stack[((hsi*119340+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7406496)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+417120)*1+lsi)*1]), &(inteval->stack[((hsi*159120+5432340)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7512576)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*196560+417120)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7652976)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+7282008)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7824966)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*255528+7282008)*1+lsi)*1]), &(inteval->stack[((hsi*219024+7062984)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+6978510)*1+lsi)*1]), &(inteval->stack[((hsi*273780+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*231660+6746850)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*718740+7261650)*1+lsi)*1]), &(inteval->stack[((hsi*283140+6978510)*1+lsi)*1]), &(inteval->stack[((hsi*239580+5908320)*1+lsi)*1]),3630);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1197900+7980390)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7261650)*1+lsi)*1]), &(inteval->stack[((hsi*598950+6147900)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*8281+395735)*1+lsi)*1]), &(inteval->stack[((hsi*7098+404016)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+5334294)*1+lsi)*1]), &(inteval->stack[((hsi*9555+386180)*1+lsi)*1]), &(inteval->stack[((hsi*8281+395735)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+5359137)*1+lsi)*1]), &(inteval->stack[((hsi*24843+5334294)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5313000)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+5401725)*1+lsi)*1]), &(inteval->stack[((hsi*10920+375260)*1+lsi)*1]), &(inteval->stack[((hsi*9555+386180)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+5430390)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5401725)*1+lsi)*1]), &(inteval->stack[((hsi*24843+5334294)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+417120)*1+lsi)*1]), &(inteval->stack[((hsi*49686+5430390)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5359137)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*12376+362884)*1+lsi)*1]), &(inteval->stack[((hsi*10920+375260)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5401725)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+5480076)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*49686+5430390)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+5941080)*1+lsi)*1]), &(inteval->stack[((hsi*82810+5480076)*1+lsi)*1]), &(inteval->stack[((hsi*70980+417120)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+488100)*1+lsi)*1]), &(inteval->stack[((hsi*13923+348961)*1+lsi)*1]), &(inteval->stack[((hsi*12376+362884)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+6804180)*1+lsi)*1]), &(inteval->stack[((hsi*37128+488100)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5908320)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+525228)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6804180)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6746850)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+5562886)*1+lsi)*1]), &(inteval->stack[((hsi*95550+525228)*1+lsi)*1]), &(inteval->stack[((hsi*82810+5480076)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+5401725)*1+lsi)*1]), &(inteval->stack[((hsi*124215+5562886)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5941080)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6869700)*1+lsi)*1]), &(inteval->stack[((hsi*15561+333400)*1+lsi)*1]), &(inteval->stack[((hsi*13923+348961)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+6047550)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6869700)*1+lsi)*1]), &(inteval->stack[((hsi*37128+488100)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6047550)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6804180)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+9287490)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*95550+525228)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+488100)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9287490)*1+lsi)*1]), &(inteval->stack[((hsi*124215+5562886)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+9430815)*1+lsi)*1]), &(inteval->stack[((hsi*173901+488100)*1+lsi)*1]), &(inteval->stack[((hsi*149058+5401725)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+5550783)*1+lsi)*1]), &(inteval->stack[((hsi*17290+316110)*1+lsi)*1]), &(inteval->stack[((hsi*15561+333400)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*46683+5550783)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6869700)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+6830388)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6047550)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+9629559)*1+lsi)*1]), &(inteval->stack[((hsi*123760+6830388)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9178290)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+9793359)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9629559)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9287490)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9793359)*1+lsi)*1]), &(inteval->stack[((hsi*173901+488100)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+9994014)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9430815)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+488100)*1+lsi)*1]), &(inteval->stack[((hsi*7098+404016)*1+lsi)*1]), &(inteval->stack[((hsi*6006+411114)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+506118)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*18018+488100)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+542154)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5359137)*1+lsi)*1]), &(inteval->stack[((hsi*36036+506118)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+5597466)*1+lsi)*1]), &(inteval->stack[((hsi*70980+417120)*1+lsi)*1]), &(inteval->stack[((hsi*60060+542154)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+333400)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5941080)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5597466)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*149058+5401725)*1+lsi)*1]), &(inteval->stack[((hsi*126126+333400)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+333400)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9430815)*1+lsi)*1]), &(inteval->stack[((hsi*168168+5908320)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+10249542)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9994014)*1+lsi)*1]), &(inteval->stack[((hsi*216216+333400)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+333400)*1+lsi)*1]), &(inteval->stack[((hsi*19110+297000)*1+lsi)*1]), &(inteval->stack[((hsi*17290+316110)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+385270)*1+lsi)*1]), &(inteval->stack[((hsi*51870+333400)*1+lsi)*1]), &(inteval->stack[((hsi*46683+5550783)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*93366+385270)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6746850)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+297000)*1+lsi)*1]), &(inteval->stack[((hsi*139230+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*123760+6830388)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*185640+297000)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9629559)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+9410158)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9793359)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9410158)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9178290)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*298116+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9994014)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+9497700)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*270270+10249542)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*849420+9828030)*1+lsi)*1]), &(inteval->stack[((hsi*330330+9497700)*1+lsi)*1]), &(inteval->stack[((hsi*283140+6978510)*1+lsi)*1]),3630);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1437480+10677450)*1+lsi)*1]), &(inteval->stack[((hsi*849420+9828030)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7261650)*1+lsi)*1]),3630);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1996500+12114930)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+10677450)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+7980390)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*9555+272325)*1+lsi)*1]), &(inteval->stack[((hsi*8190+281880)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+6771420)*1+lsi)*1]), &(inteval->stack[((hsi*11025+261300)*1+lsi)*1]), &(inteval->stack[((hsi*9555+272325)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+6800085)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6771420)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6746850)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+6849225)*1+lsi)*1]), &(inteval->stack[((hsi*12600+248700)*1+lsi)*1]), &(inteval->stack[((hsi*11025+261300)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+6882300)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6849225)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6771420)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+6939630)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6882300)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6800085)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+7021530)*1+lsi)*1]), &(inteval->stack[((hsi*14280+234420)*1+lsi)*1]), &(inteval->stack[((hsi*12600+248700)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+7059330)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7021530)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6849225)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+7125480)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7059330)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6882300)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+7221030)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7125480)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6939630)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+7343880)*1+lsi)*1]), &(inteval->stack[((hsi*16065+218355)*1+lsi)*1]), &(inteval->stack[((hsi*14280+234420)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+7386720)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7343880)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7021530)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+7462320)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7386720)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7059330)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+7572570)*1+lsi)*1]), &(inteval->stack[((hsi*110250+7462320)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7125480)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7572570)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7221030)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+297000)*1+lsi)*1]), &(inteval->stack[((hsi*17955+200400)*1+lsi)*1]), &(inteval->stack[((hsi*16065+218355)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+345195)*1+lsi)*1]), &(inteval->stack[((hsi*48195+297000)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7343880)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*85680+345195)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7386720)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+7715895)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*110250+7462320)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+430875)*1+lsi)*1]), &(inteval->stack[((hsi*165375+7715895)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7572570)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+7343880)*1+lsi)*1]), &(inteval->stack[((hsi*200655+430875)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5313000)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*19950+180450)*1+lsi)*1]), &(inteval->stack[((hsi*17955+200400)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+5484990)*1+lsi)*1]), &(inteval->stack[((hsi*53865+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*48195+297000)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+7021530)*1+lsi)*1]), &(inteval->stack[((hsi*96390+5484990)*1+lsi)*1]), &(inteval->stack[((hsi*85680+345195)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+9304290)*1+lsi)*1]), &(inteval->stack[((hsi*142800+7021530)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9178290)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+14111430)*1+lsi)*1]), &(inteval->stack[((hsi*189000+9304290)*1+lsi)*1]), &(inteval->stack[((hsi*165375+7715895)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+7573200)*1+lsi)*1]), &(inteval->stack[((hsi*231525+14111430)*1+lsi)*1]), &(inteval->stack[((hsi*200655+430875)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+297000)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7573200)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7343880)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+5962185)*1+lsi)*1]), &(inteval->stack[((hsi*8190+281880)*1+lsi)*1]), &(inteval->stack[((hsi*6930+290070)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+5982975)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5962185)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+7840740)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6800085)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5982975)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6939630)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7840740)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+5962185)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7221030)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6746850)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*145530+5962185)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+14342955)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7343880)*1+lsi)*1]), &(inteval->stack[((hsi*194040+6746850)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+7164330)*1+lsi)*1]), &(inteval->stack[((hsi*294840+297000)*1+lsi)*1]), &(inteval->stack[((hsi*249480+14342955)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*22050+158400)*1+lsi)*1]), &(inteval->stack[((hsi*19950+180450)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+6806700)*1+lsi)*1]), &(inteval->stack[((hsi*59850+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*53865+5908320)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*107730+6806700)*1+lsi)*1]), &(inteval->stack[((hsi*96390+5484990)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*160650+5908320)*1+lsi)*1]), &(inteval->stack[((hsi*142800+7021530)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*214200+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*189000+9304290)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*264600+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*231525+14111430)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*308700+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7573200)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+7476180)*1+lsi)*1]), &(inteval->stack[((hsi*343980+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*294840+297000)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+158400)*1+lsi)*1]), &(inteval->stack[((hsi*368550+7476180)*1+lsi)*1]), &(inteval->stack[((hsi*311850+7164330)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*990990+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*381150+158400)*1+lsi)*1]), &(inteval->stack[((hsi*330330+9497700)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1698840+14111430)*1+lsi)*1]), &(inteval->stack[((hsi*990990+6746850)*1+lsi)*1]), &(inteval->stack[((hsi*849420+9828030)*1+lsi)*1]),3630);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2395800+15810270)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+14111430)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+10677450)*1+lsi)*1]),3630);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2994750+18206070)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+15810270)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+12114930)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*4095+728625)*1+lsi)*1]), &(inteval->stack[((hsi*3510+732720)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+9188820)*1+lsi)*1]), &(inteval->stack[((hsi*4725+723900)*1+lsi)*1]), &(inteval->stack[((hsi*4095+728625)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+9201105)*1+lsi)*1]), &(inteval->stack[((hsi*12285+9188820)*1+lsi)*1]), &(inteval->stack[((hsi*10530+9178290)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+9222165)*1+lsi)*1]), &(inteval->stack[((hsi*5400+718500)*1+lsi)*1]), &(inteval->stack[((hsi*4725+723900)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+9236340)*1+lsi)*1]), &(inteval->stack[((hsi*14175+9222165)*1+lsi)*1]), &(inteval->stack[((hsi*12285+9188820)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+9260910)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9236340)*1+lsi)*1]), &(inteval->stack[((hsi*21060+9201105)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+9296010)*1+lsi)*1]), &(inteval->stack[((hsi*6120+712380)*1+lsi)*1]), &(inteval->stack[((hsi*5400+718500)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+9312210)*1+lsi)*1]), &(inteval->stack[((hsi*16200+9296010)*1+lsi)*1]), &(inteval->stack[((hsi*14175+9222165)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+9340560)*1+lsi)*1]), &(inteval->stack[((hsi*28350+9312210)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9236340)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+9381510)*1+lsi)*1]), &(inteval->stack[((hsi*40950+9340560)*1+lsi)*1]), &(inteval->stack[((hsi*35100+9260910)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+9434160)*1+lsi)*1]), &(inteval->stack[((hsi*6885+705495)*1+lsi)*1]), &(inteval->stack[((hsi*6120+712380)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+9452520)*1+lsi)*1]), &(inteval->stack[((hsi*18360+9434160)*1+lsi)*1]), &(inteval->stack[((hsi*16200+9296010)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+9484920)*1+lsi)*1]), &(inteval->stack[((hsi*32400+9452520)*1+lsi)*1]), &(inteval->stack[((hsi*28350+9312210)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+9532170)*1+lsi)*1]), &(inteval->stack[((hsi*47250+9484920)*1+lsi)*1]), &(inteval->stack[((hsi*40950+9340560)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+9593595)*1+lsi)*1]), &(inteval->stack[((hsi*61425+9532170)*1+lsi)*1]), &(inteval->stack[((hsi*52650+9381510)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+9667305)*1+lsi)*1]), &(inteval->stack[((hsi*7695+697800)*1+lsi)*1]), &(inteval->stack[((hsi*6885+705495)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+9687960)*1+lsi)*1]), &(inteval->stack[((hsi*20655+9667305)*1+lsi)*1]), &(inteval->stack[((hsi*18360+9434160)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+9724680)*1+lsi)*1]), &(inteval->stack[((hsi*36720+9687960)*1+lsi)*1]), &(inteval->stack[((hsi*32400+9452520)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+9778680)*1+lsi)*1]), &(inteval->stack[((hsi*54000+9724680)*1+lsi)*1]), &(inteval->stack[((hsi*47250+9484920)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+9849555)*1+lsi)*1]), &(inteval->stack[((hsi*70875+9778680)*1+lsi)*1]), &(inteval->stack[((hsi*61425+9532170)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+9935550)*1+lsi)*1]), &(inteval->stack[((hsi*85995+9849555)*1+lsi)*1]), &(inteval->stack[((hsi*73710+9593595)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+10033830)*1+lsi)*1]), &(inteval->stack[((hsi*8550+689250)*1+lsi)*1]), &(inteval->stack[((hsi*7695+697800)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+10056915)*1+lsi)*1]), &(inteval->stack[((hsi*23085+10033830)*1+lsi)*1]), &(inteval->stack[((hsi*20655+9667305)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+10098225)*1+lsi)*1]), &(inteval->stack[((hsi*41310+10056915)*1+lsi)*1]), &(inteval->stack[((hsi*36720+9687960)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+10159425)*1+lsi)*1]), &(inteval->stack[((hsi*61200+10098225)*1+lsi)*1]), &(inteval->stack[((hsi*54000+9724680)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+10240425)*1+lsi)*1]), &(inteval->stack[((hsi*81000+10159425)*1+lsi)*1]), &(inteval->stack[((hsi*70875+9778680)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+10339650)*1+lsi)*1]), &(inteval->stack[((hsi*99225+10240425)*1+lsi)*1]), &(inteval->stack[((hsi*85995+9849555)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+10454310)*1+lsi)*1]), &(inteval->stack[((hsi*114660+10339650)*1+lsi)*1]), &(inteval->stack[((hsi*98280+9935550)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+10580670)*1+lsi)*1]), &(inteval->stack[((hsi*3510+732720)*1+lsi)*1]), &(inteval->stack[((hsi*2970+736230)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+10589580)*1+lsi)*1]), &(inteval->stack[((hsi*10530+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*8910+10580670)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+10607400)*1+lsi)*1]), &(inteval->stack[((hsi*21060+9201105)*1+lsi)*1]), &(inteval->stack[((hsi*17820+10589580)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+10637100)*1+lsi)*1]), &(inteval->stack[((hsi*35100+9260910)*1+lsi)*1]), &(inteval->stack[((hsi*29700+10607400)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+10681650)*1+lsi)*1]), &(inteval->stack[((hsi*52650+9381510)*1+lsi)*1]), &(inteval->stack[((hsi*44550+10637100)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+10744020)*1+lsi)*1]), &(inteval->stack[((hsi*73710+9593595)*1+lsi)*1]), &(inteval->stack[((hsi*62370+10681650)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+10827180)*1+lsi)*1]), &(inteval->stack[((hsi*98280+9935550)*1+lsi)*1]), &(inteval->stack[((hsi*83160+10744020)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+10934100)*1+lsi)*1]), &(inteval->stack[((hsi*126360+10454310)*1+lsi)*1]), &(inteval->stack[((hsi*106920+10827180)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+11067750)*1+lsi)*1]), &(inteval->stack[((hsi*9450+679800)*1+lsi)*1]), &(inteval->stack[((hsi*8550+689250)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+11093400)*1+lsi)*1]), &(inteval->stack[((hsi*25650+11067750)*1+lsi)*1]), &(inteval->stack[((hsi*23085+10033830)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+11139570)*1+lsi)*1]), &(inteval->stack[((hsi*46170+11093400)*1+lsi)*1]), &(inteval->stack[((hsi*41310+10056915)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*68850+11139570)*1+lsi)*1]), &(inteval->stack[((hsi*61200+10098225)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+11067750)*1+lsi)*1]), &(inteval->stack[((hsi*91800+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*81000+10159425)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*113400+11067750)*1+lsi)*1]), &(inteval->stack[((hsi*99225+10240425)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+11067750)*1+lsi)*1]), &(inteval->stack[((hsi*132300+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*114660+10339650)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*147420+11067750)*1+lsi)*1]), &(inteval->stack[((hsi*126360+10454310)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+9336240)*1+lsi)*1]), &(inteval->stack[((hsi*157950+9178290)*1+lsi)*1]), &(inteval->stack[((hsi*133650+10934100)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*490050+9499590)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5708670)*1+lsi)*1]), &(inteval->stack[((hsi*163350+9336240)*1+lsi)*1]),3630);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*980100+9989640)*1+lsi)*1]), &(inteval->stack[((hsi*598950+6147900)*1+lsi)*1]), &(inteval->stack[((hsi*490050+9499590)*1+lsi)*1]),3630);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1633500+21200820)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+7980390)*1+lsi)*1]), &(inteval->stack[((hsi*980100+9989640)*1+lsi)*1]),3630);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2450250+7737840)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+12114930)*1+lsi)*1]), &(inteval->stack[((hsi*1633500+21200820)*1+lsi)*1]),3630);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*3430350+10188090)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+18206070)*1+lsi)*1]), &(inteval->stack[((hsi*2450250+7737840)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+7737840)*1+lsi)*1]), &(inteval->stack[((hsi*10920+130200)*1+lsi)*1]), &(inteval->stack[((hsi*9360+141120)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+7765920)*1+lsi)*1]), &(inteval->stack[((hsi*12600+117600)*1+lsi)*1]), &(inteval->stack[((hsi*10920+130200)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+7798680)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7765920)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7737840)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+7854840)*1+lsi)*1]), &(inteval->stack[((hsi*14400+103200)*1+lsi)*1]), &(inteval->stack[((hsi*12600+117600)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+7892640)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7854840)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7765920)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+7958160)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7892640)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7798680)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+8051760)*1+lsi)*1]), &(inteval->stack[((hsi*16320+86880)*1+lsi)*1]), &(inteval->stack[((hsi*14400+103200)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+8094960)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8051760)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7854840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+8170560)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8094960)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7892640)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+8279760)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8170560)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7958160)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+8420160)*1+lsi)*1]), &(inteval->stack[((hsi*18360+68520)*1+lsi)*1]), &(inteval->stack[((hsi*16320+86880)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+8469120)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8420160)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8051760)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+8555520)*1+lsi)*1]), &(inteval->stack[((hsi*86400+8469120)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8094960)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+8681520)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8555520)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8170560)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8681520)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8279760)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+8845320)*1+lsi)*1]), &(inteval->stack[((hsi*20520+48000)*1+lsi)*1]), &(inteval->stack[((hsi*18360+68520)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+8900400)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8845320)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8420160)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+5509560)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8900400)*1+lsi)*1]), &(inteval->stack[((hsi*86400+8469120)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+8998320)*1+lsi)*1]), &(inteval->stack[((hsi*144000+5509560)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8555520)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+5653560)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8998320)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8681520)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+9187320)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5653560)*1+lsi)*1]), &(inteval->stack[((hsi*196560+5313000)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+5882880)*1+lsi)*1]), &(inteval->stack[((hsi*22800+25200)*1+lsi)*1]), &(inteval->stack[((hsi*20520+48000)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+5944440)*1+lsi)*1]), &(inteval->stack[((hsi*61560+5882880)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8845320)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+9449400)*1+lsi)*1]), &(inteval->stack[((hsi*110160+5944440)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8900400)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+6054600)*1+lsi)*1]), &(inteval->stack[((hsi*163200+9449400)*1+lsi)*1]), &(inteval->stack[((hsi*144000+5509560)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+8420160)*1+lsi)*1]), &(inteval->stack[((hsi*216000+6054600)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8998320)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+9612600)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8420160)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5653560)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+8684760)*1+lsi)*1]), &(inteval->stack[((hsi*305760+9612600)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9187320)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+13618440)*1+lsi)*1]), &(inteval->stack[((hsi*9360+141120)*1+lsi)*1]), &(inteval->stack[((hsi*7920+150480)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+6270600)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7737840)*1+lsi)*1]), &(inteval->stack[((hsi*23760+13618440)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+13618440)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7798680)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6270600)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+6270600)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7958160)*1+lsi)*1]), &(inteval->stack[((hsi*79200+13618440)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+7737840)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8279760)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6270600)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+7904160)*1+lsi)*1]), &(inteval->stack[((hsi*196560+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7737840)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9187320)*1+lsi)*1]), &(inteval->stack[((hsi*221760+7904160)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+7737840)*1+lsi)*1]), &(inteval->stack[((hsi*336960+8684760)*1+lsi)*1]), &(inteval->stack[((hsi*285120+5313000)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*25200+0)*1+lsi)*1]), &(inteval->stack[((hsi*22800+25200)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+5381400)*1+lsi)*1]), &(inteval->stack[((hsi*68400+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*61560+5882880)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+13618440)*1+lsi)*1]), &(inteval->stack[((hsi*123120+5381400)*1+lsi)*1]), &(inteval->stack[((hsi*110160+5944440)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*183600+13618440)*1+lsi)*1]), &(inteval->stack[((hsi*163200+9449400)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+9021720)*1+lsi)*1]), &(inteval->stack[((hsi*244800+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*216000+6054600)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*302400+9021720)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8420160)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+5665800)*1+lsi)*1]), &(inteval->stack[((hsi*352800+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*305760+9612600)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+9021720)*1+lsi)*1]), &(inteval->stack[((hsi*393120+5665800)*1+lsi)*1]), &(inteval->stack[((hsi*336960+8684760)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*421200+9021720)*1+lsi)*1]), &(inteval->stack[((hsi*356400+7737840)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1143450+7737840)*1+lsi)*1]), &(inteval->stack[((hsi*435600+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*381150+158400)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1981980+21200820)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+7737840)*1+lsi)*1]), &(inteval->stack[((hsi*990990+6746850)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2831400+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+21200820)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+14111430)*1+lsi)*1]),3630);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*3593700+21200820)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+15810270)*1+lsi)*1]),3630);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*4192650+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+21200820)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+18206070)*1+lsi)*1]),3630);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*4573800+739200)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+5313000)*1+lsi)*1]), &(inteval->stack[((hsi*3430350+10188090)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4573800+739200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
