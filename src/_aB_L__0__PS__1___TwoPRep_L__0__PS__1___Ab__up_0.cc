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
#include <HRRPart0bra0ket0lk.h>
#include <HRRPart0bra0ket0ll.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdl.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfk.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgi.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0phh.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pig.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkf.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0pld.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0pmp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
#include <HRRPart1bra0ket0ppm.h>
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
#include <HRRPart1bra0ket0psps.h>
#include <_aB_L__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1316799)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1234079)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1239084)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+10150569)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1228304)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1234079)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+10165584)*1+lsi)*1]), &(inteval->stack[((hsi*15015+10150569)*1+lsi)*1]), &(inteval->stack[((hsi*12870+10137699)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+10191324)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1221704)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1228304)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+10208649)*1+lsi)*1]), &(inteval->stack[((hsi*17325+10191324)*1+lsi)*1]), &(inteval->stack[((hsi*15015+10150569)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+10238679)*1+lsi)*1]), &(inteval->stack[((hsi*30030+10208649)*1+lsi)*1]), &(inteval->stack[((hsi*25740+10165584)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+10281579)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1214224)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1221704)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+10301379)*1+lsi)*1]), &(inteval->stack[((hsi*19800+10281579)*1+lsi)*1]), &(inteval->stack[((hsi*17325+10191324)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+10336029)*1+lsi)*1]), &(inteval->stack[((hsi*34650+10301379)*1+lsi)*1]), &(inteval->stack[((hsi*30030+10208649)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+10386079)*1+lsi)*1]), &(inteval->stack[((hsi*50050+10336029)*1+lsi)*1]), &(inteval->stack[((hsi*42900+10238679)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+10191324)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1205809)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1214224)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+10450429)*1+lsi)*1]), &(inteval->stack[((hsi*22440+10191324)*1+lsi)*1]), &(inteval->stack[((hsi*19800+10281579)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+10490029)*1+lsi)*1]), &(inteval->stack[((hsi*39600+10450429)*1+lsi)*1]), &(inteval->stack[((hsi*34650+10301379)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+10547779)*1+lsi)*1]), &(inteval->stack[((hsi*57750+10490029)*1+lsi)*1]), &(inteval->stack[((hsi*50050+10336029)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+10281579)*1+lsi)*1]), &(inteval->stack[((hsi*75075+10547779)*1+lsi)*1]), &(inteval->stack[((hsi*64350+10386079)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+10622854)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1196404)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1205809)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+10648099)*1+lsi)*1]), &(inteval->stack[((hsi*25245+10622854)*1+lsi)*1]), &(inteval->stack[((hsi*22440+10191324)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+10692979)*1+lsi)*1]), &(inteval->stack[((hsi*44880+10648099)*1+lsi)*1]), &(inteval->stack[((hsi*39600+10450429)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+10758979)*1+lsi)*1]), &(inteval->stack[((hsi*66000+10692979)*1+lsi)*1]), &(inteval->stack[((hsi*57750+10490029)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+10845604)*1+lsi)*1]), &(inteval->stack[((hsi*86625+10758979)*1+lsi)*1]), &(inteval->stack[((hsi*75075+10547779)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+10450429)*1+lsi)*1]), &(inteval->stack[((hsi*105105+10845604)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10281579)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+10570549)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1185954)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1196404)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+10950709)*1+lsi)*1]), &(inteval->stack[((hsi*28215+10570549)*1+lsi)*1]), &(inteval->stack[((hsi*25245+10622854)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+11001199)*1+lsi)*1]), &(inteval->stack[((hsi*50490+10950709)*1+lsi)*1]), &(inteval->stack[((hsi*44880+10648099)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+11075999)*1+lsi)*1]), &(inteval->stack[((hsi*74800+11001199)*1+lsi)*1]), &(inteval->stack[((hsi*66000+10692979)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+10598764)*1+lsi)*1]), &(inteval->stack[((hsi*99000+11075999)*1+lsi)*1]), &(inteval->stack[((hsi*86625+10758979)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+11174999)*1+lsi)*1]), &(inteval->stack[((hsi*121275+10598764)*1+lsi)*1]), &(inteval->stack[((hsi*105105+10845604)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+10720039)*1+lsi)*1]), &(inteval->stack[((hsi*140140+11174999)*1+lsi)*1]), &(inteval->stack[((hsi*120120+10450429)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+10874479)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1174404)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1185954)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+11315139)*1+lsi)*1]), &(inteval->stack[((hsi*31350+10874479)*1+lsi)*1]), &(inteval->stack[((hsi*28215+10570549)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+11371569)*1+lsi)*1]), &(inteval->stack[((hsi*56430+11315139)*1+lsi)*1]), &(inteval->stack[((hsi*50490+10950709)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+11455719)*1+lsi)*1]), &(inteval->stack[((hsi*84150+11371569)*1+lsi)*1]), &(inteval->stack[((hsi*74800+11001199)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+10905829)*1+lsi)*1]), &(inteval->stack[((hsi*112200+11455719)*1+lsi)*1]), &(inteval->stack[((hsi*99000+11075999)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+11567919)*1+lsi)*1]), &(inteval->stack[((hsi*138600+10905829)*1+lsi)*1]), &(inteval->stack[((hsi*121275+10598764)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+11729619)*1+lsi)*1]), &(inteval->stack[((hsi*161700+11567919)*1+lsi)*1]), &(inteval->stack[((hsi*140140+11174999)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+11044429)*1+lsi)*1]), &(inteval->stack[((hsi*180180+11729619)*1+lsi)*1]), &(inteval->stack[((hsi*154440+10720039)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+10570549)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1239084)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1243374)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+10581439)*1+lsi)*1]), &(inteval->stack[((hsi*12870+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*10890+10570549)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+10603219)*1+lsi)*1]), &(inteval->stack[((hsi*25740+10165584)*1+lsi)*1]), &(inteval->stack[((hsi*21780+10581439)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*42900+10238679)*1+lsi)*1]), &(inteval->stack[((hsi*36300+10603219)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+10570549)*1+lsi)*1]), &(inteval->stack[((hsi*64350+10386079)*1+lsi)*1]), &(inteval->stack[((hsi*54450+10137699)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10281579)*1+lsi)*1]), &(inteval->stack[((hsi*76230+10570549)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+10239339)*1+lsi)*1]), &(inteval->stack[((hsi*120120+10450429)*1+lsi)*1]), &(inteval->stack[((hsi*101640+10137699)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+10370019)*1+lsi)*1]), &(inteval->stack[((hsi*154440+10720039)*1+lsi)*1]), &(inteval->stack[((hsi*130680+10239339)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+10533369)*1+lsi)*1]), &(inteval->stack[((hsi*193050+11044429)*1+lsi)*1]), &(inteval->stack[((hsi*163350+10370019)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*12705+1161699)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1174404)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+10172349)*1+lsi)*1]), &(inteval->stack[((hsi*34650+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*31350+10874479)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+10235049)*1+lsi)*1]), &(inteval->stack[((hsi*62700+10172349)*1+lsi)*1]), &(inteval->stack[((hsi*56430+11315139)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+10329099)*1+lsi)*1]), &(inteval->stack[((hsi*94050+10235049)*1+lsi)*1]), &(inteval->stack[((hsi*84150+11371569)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+11237479)*1+lsi)*1]), &(inteval->stack[((hsi*126225+10329099)*1+lsi)*1]), &(inteval->stack[((hsi*112200+11455719)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*157080+11237479)*1+lsi)*1]), &(inteval->stack[((hsi*138600+10905829)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+11237479)*1+lsi)*1]), &(inteval->stack[((hsi*184800+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*161700+11567919)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*207900+11237479)*1+lsi)*1]), &(inteval->stack[((hsi*180180+11729619)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+10733019)*1+lsi)*1]), &(inteval->stack[((hsi*225225+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*193050+11044429)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*235950+10733019)*1+lsi)*1]), &(inteval->stack[((hsi*199650+10533369)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+1161699)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1146189)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1152195)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1177143)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1139259)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1146189)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1195161)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1177143)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1161699)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+1226049)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1131339)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1139259)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1226049)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1177143)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+10413315)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1195161)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+10464795)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1122363)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1131339)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+10488555)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10464795)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1226049)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+10530135)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10488555)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10377279)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+10590195)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10530135)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10413315)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1112265)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1122363)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+10667415)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10464795)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+10714935)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10667415)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10488555)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+10784235)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10714935)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10530135)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+10464795)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10784235)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10590195)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+10874325)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1100979)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1112265)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+10904619)*1+lsi)*1]), &(inteval->stack[((hsi*30294+10874325)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10377279)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+10958475)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10904619)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10667415)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+11037675)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10958475)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10714935)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+11141625)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11037675)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10784235)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+10667415)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11141625)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10464795)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+10811559)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1088439)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1100979)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+11267751)*1+lsi)*1]), &(inteval->stack[((hsi*33858+10811559)*1+lsi)*1]), &(inteval->stack[((hsi*30294+10874325)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+11328339)*1+lsi)*1]), &(inteval->stack[((hsi*60588+11267751)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10904619)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+11418099)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11328339)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10958475)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+10845417)*1+lsi)*1]), &(inteval->stack[((hsi*118800+11418099)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11037675)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+11536899)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10845417)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11141625)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+10990947)*1+lsi)*1]), &(inteval->stack[((hsi*168168+11536899)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10667415)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+11176275)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1074579)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1088439)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+11705067)*1+lsi)*1]), &(inteval->stack[((hsi*37620+11176275)*1+lsi)*1]), &(inteval->stack[((hsi*33858+10811559)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+11772783)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11705067)*1+lsi)*1]), &(inteval->stack[((hsi*60588+11267751)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+11873763)*1+lsi)*1]), &(inteval->stack[((hsi*100980+11772783)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11328339)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+11213895)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11873763)*1+lsi)*1]), &(inteval->stack[((hsi*118800+11418099)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+12008403)*1+lsi)*1]), &(inteval->stack[((hsi*166320+11213895)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10845417)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+12202443)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12008403)*1+lsi)*1]), &(inteval->stack[((hsi*168168+11536899)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+11380215)*1+lsi)*1]), &(inteval->stack[((hsi*216216+12202443)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10990947)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+10811559)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1152195)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1157343)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+10824627)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1161699)*1+lsi)*1]), &(inteval->stack[((hsi*13068+10811559)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1195161)*1+lsi)*1]), &(inteval->stack[((hsi*26136+10824627)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1088439)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10413315)*1+lsi)*1]), &(inteval->stack[((hsi*43560+10850763)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+10811559)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10590195)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1088439)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+1088439)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10464795)*1+lsi)*1]), &(inteval->stack[((hsi*91476+10811559)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10667415)*1+lsi)*1]), &(inteval->stack[((hsi*121968+1088439)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+10534095)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10990947)*1+lsi)*1]), &(inteval->stack[((hsi*156816+10377279)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+10730115)*1+lsi)*1]), &(inteval->stack[((hsi*231660+11380215)*1+lsi)*1]), &(inteval->stack[((hsi*196020+10534095)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1059333)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1074579)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+10418859)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*37620+11176275)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+10969695)*1+lsi)*1]), &(inteval->stack[((hsi*75240+10418859)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11705067)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*112860+10969695)*1+lsi)*1]), &(inteval->stack[((hsi*100980+11772783)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+11611875)*1+lsi)*1]), &(inteval->stack[((hsi*151470+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11873763)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*188496+11611875)*1+lsi)*1]), &(inteval->stack[((hsi*166320+11213895)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+10969695)*1+lsi)*1]), &(inteval->stack[((hsi*221760+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12008403)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+11611875)*1+lsi)*1]), &(inteval->stack[((hsi*249480+10969695)*1+lsi)*1]), &(inteval->stack[((hsi*216216+12202443)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+10969695)*1+lsi)*1]), &(inteval->stack[((hsi*270270+11611875)*1+lsi)*1]), &(inteval->stack[((hsi*231660+11380215)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10969695)*1+lsi)*1]), &(inteval->stack[((hsi*239580+10730115)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+10664775)*1+lsi)*1]), &(inteval->stack[((hsi*287496+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*239580+10137699)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1059333)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1041003)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1048101)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1077585)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1032813)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1041003)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1098879)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1077585)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1059333)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1023453)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1032813)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1159953)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1077585)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1159953)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1098879)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1202541)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1012845)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1023453)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+11444355)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1202541)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1135383)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+11493495)*1+lsi)*1]), &(inteval->stack[((hsi*49140+11444355)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1159953)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+11564475)*1+lsi)*1]), &(inteval->stack[((hsi*70980+11493495)*1+lsi)*1]), &(inteval->stack[((hsi*60840+11383515)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1000911)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1012845)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+11655735)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1202541)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+11711895)*1+lsi)*1]), &(inteval->stack[((hsi*56160+11655735)*1+lsi)*1]), &(inteval->stack[((hsi*49140+11444355)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+11793795)*1+lsi)*1]), &(inteval->stack[((hsi*81900+11711895)*1+lsi)*1]), &(inteval->stack[((hsi*70980+11493495)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+11900265)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11793795)*1+lsi)*1]), &(inteval->stack[((hsi*91260+11564475)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+11444355)*1+lsi)*1]), &(inteval->stack[((hsi*13338+987573)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1000911)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+11480157)*1+lsi)*1]), &(inteval->stack[((hsi*35802+11444355)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1135383)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11480157)*1+lsi)*1]), &(inteval->stack[((hsi*56160+11655735)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+12028029)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*81900+11711895)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+12150879)*1+lsi)*1]), &(inteval->stack[((hsi*122850+12028029)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11793795)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+11655735)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12150879)*1+lsi)*1]), &(inteval->stack[((hsi*127764+11900265)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+11826087)*1+lsi)*1]), &(inteval->stack[((hsi*14820+972753)*1+lsi)*1]), &(inteval->stack[((hsi*13338+987573)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+12299937)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11826087)*1+lsi)*1]), &(inteval->stack[((hsi*35802+11444355)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+12371541)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12299937)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11480157)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+12477621)*1+lsi)*1]), &(inteval->stack[((hsi*106080+12371541)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1135383)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+12618021)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12477621)*1+lsi)*1]), &(inteval->stack[((hsi*122850+12028029)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+12790011)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12618021)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12150879)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+12028029)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12790011)*1+lsi)*1]), &(inteval->stack[((hsi*170352+11655735)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+11444355)*1+lsi)*1]), &(inteval->stack[((hsi*16380+956373)*1+lsi)*1]), &(inteval->stack[((hsi*14820+972753)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*44460+11444355)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11826087)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+12988755)*1+lsi)*1]), &(inteval->stack[((hsi*80028+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12299937)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+13108095)*1+lsi)*1]), &(inteval->stack[((hsi*119340+12988755)*1+lsi)*1]), &(inteval->stack[((hsi*106080+12371541)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+12247053)*1+lsi)*1]), &(inteval->stack[((hsi*159120+13108095)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12477621)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+13267215)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12247053)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12618021)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+12443613)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13267215)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12790011)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+12699141)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12443613)*1+lsi)*1]), &(inteval->stack[((hsi*219024+12028029)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+11488815)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1048101)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1054185)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+972753)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1059333)*1+lsi)*1]), &(inteval->stack[((hsi*15444+11488815)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1003641)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1098879)*1+lsi)*1]), &(inteval->stack[((hsi*30888+972753)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1055121)*1+lsi)*1]), &(inteval->stack[((hsi*60840+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1003641)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+13496535)*1+lsi)*1]), &(inteval->stack[((hsi*91260+11564475)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1055121)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+11488815)*1+lsi)*1]), &(inteval->stack[((hsi*127764+11900265)*1+lsi)*1]), &(inteval->stack[((hsi*108108+13496535)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+11826087)*1+lsi)*1]), &(inteval->stack[((hsi*170352+11655735)*1+lsi)*1]), &(inteval->stack[((hsi*144144+11488815)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+11488815)*1+lsi)*1]), &(inteval->stack[((hsi*219024+12028029)*1+lsi)*1]), &(inteval->stack[((hsi*185328+11826087)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+11720475)*1+lsi)*1]), &(inteval->stack[((hsi*273780+12699141)*1+lsi)*1]), &(inteval->stack[((hsi*231660+11488815)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*18018+938355)*1+lsi)*1]), &(inteval->stack[((hsi*16380+956373)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+11488815)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*44460+11444355)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*88920+11488815)*1+lsi)*1]), &(inteval->stack[((hsi*80028+1135383)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*133380+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*119340+12988755)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+938355)*1+lsi)*1]), &(inteval->stack[((hsi*179010+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*159120+13108095)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*222768+938355)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12247053)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*262080+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13267215)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12443613)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*319410+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*273780+12699141)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+12338235)*1+lsi)*1]), &(inteval->stack[((hsi*334620+12003615)*1+lsi)*1]), &(inteval->stack[((hsi*283140+11720475)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*339768+12338235)*1+lsi)*1]), &(inteval->stack[((hsi*287496+10377279)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+12678003)*1+lsi)*1]), &(inteval->stack[((hsi*862488+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*718740+10664775)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]), &(inteval->stack[((hsi*8281+916970)*1+lsi)*1]), &(inteval->stack[((hsi*7098+925251)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*9555+907415)*1+lsi)*1]), &(inteval->stack[((hsi*8281+916970)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+959649)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+10402122)*1+lsi)*1]), &(inteval->stack[((hsi*10920+896495)*1+lsi)*1]), &(inteval->stack[((hsi*9555+907415)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1002237)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10402122)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10377279)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+10430787)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1002237)*1+lsi)*1]), &(inteval->stack[((hsi*42588+959649)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1051923)*1+lsi)*1]), &(inteval->stack[((hsi*12376+884119)*1+lsi)*1]), &(inteval->stack[((hsi*10920+896495)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+10501767)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1051923)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10402122)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1084683)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10501767)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1002237)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1084683)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10430787)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+10559097)*1+lsi)*1]), &(inteval->stack[((hsi*13923+870196)*1+lsi)*1]), &(inteval->stack[((hsi*12376+884119)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+12246003)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10559097)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1051923)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+14221953)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12246003)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10501767)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+14317503)*1+lsi)*1]), &(inteval->stack[((hsi*95550+14221953)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1084683)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+1002237)*1+lsi)*1]), &(inteval->stack[((hsi*124215+14317503)*1+lsi)*1]), &(inteval->stack[((hsi*106470+14115483)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+1151295)*1+lsi)*1]), &(inteval->stack[((hsi*15561+854635)*1+lsi)*1]), &(inteval->stack[((hsi*13923+870196)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+14441718)*1+lsi)*1]), &(inteval->stack[((hsi*41769+1151295)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10559097)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+10501767)*1+lsi)*1]), &(inteval->stack[((hsi*74256+14441718)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12246003)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+14515974)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10501767)*1+lsi)*1]), &(inteval->stack[((hsi*95550+14221953)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+14659299)*1+lsi)*1]), &(inteval->stack[((hsi*143325+14515974)*1+lsi)*1]), &(inteval->stack[((hsi*124215+14317503)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+14221953)*1+lsi)*1]), &(inteval->stack[((hsi*173901+14659299)*1+lsi)*1]), &(inteval->stack[((hsi*149058+1002237)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+12246003)*1+lsi)*1]), &(inteval->stack[((hsi*17290+837345)*1+lsi)*1]), &(inteval->stack[((hsi*15561+854635)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+14833200)*1+lsi)*1]), &(inteval->stack[((hsi*46683+12246003)*1+lsi)*1]), &(inteval->stack[((hsi*41769+1151295)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+14916738)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14833200)*1+lsi)*1]), &(inteval->stack[((hsi*74256+14441718)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+15040498)*1+lsi)*1]), &(inteval->stack[((hsi*123760+14916738)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10501767)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+15204298)*1+lsi)*1]), &(inteval->stack[((hsi*163800+15040498)*1+lsi)*1]), &(inteval->stack[((hsi*143325+14515974)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+14420697)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15204298)*1+lsi)*1]), &(inteval->stack[((hsi*173901+14659299)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+15404953)*1+lsi)*1]), &(inteval->stack[((hsi*231868+14420697)*1+lsi)*1]), &(inteval->stack[((hsi*198744+14221953)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+14652565)*1+lsi)*1]), &(inteval->stack[((hsi*19110+818235)*1+lsi)*1]), &(inteval->stack[((hsi*17290+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+10501767)*1+lsi)*1]), &(inteval->stack[((hsi*51870+14652565)*1+lsi)*1]), &(inteval->stack[((hsi*46683+12246003)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+15660481)*1+lsi)*1]), &(inteval->stack[((hsi*93366+10501767)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14833200)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+14704435)*1+lsi)*1]), &(inteval->stack[((hsi*139230+15660481)*1+lsi)*1]), &(inteval->stack[((hsi*123760+14916738)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+15799711)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14704435)*1+lsi)*1]), &(inteval->stack[((hsi*163800+15040498)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+14890075)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15799711)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15204298)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+16029031)*1+lsi)*1]), &(inteval->stack[((hsi*267540+14890075)*1+lsi)*1]), &(inteval->stack[((hsi*231868+14420697)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+16327147)*1+lsi)*1]), &(inteval->stack[((hsi*298116+16029031)*1+lsi)*1]), &(inteval->stack[((hsi*255528+15404953)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+15157615)*1+lsi)*1]), &(inteval->stack[((hsi*7098+925251)*1+lsi)*1]), &(inteval->stack[((hsi*6006+932349)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+14420697)*1+lsi)*1]), &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]), &(inteval->stack[((hsi*18018+15157615)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+15157615)*1+lsi)*1]), &(inteval->stack[((hsi*42588+959649)*1+lsi)*1]), &(inteval->stack[((hsi*36036+14420697)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+14420697)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10430787)*1+lsi)*1]), &(inteval->stack[((hsi*60060+15157615)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+15157615)*1+lsi)*1]), &(inteval->stack[((hsi*106470+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*90090+14420697)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+14420697)*1+lsi)*1]), &(inteval->stack[((hsi*149058+1002237)*1+lsi)*1]), &(inteval->stack[((hsi*126126+15157615)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+837345)*1+lsi)*1]), &(inteval->stack[((hsi*198744+14221953)*1+lsi)*1]), &(inteval->stack[((hsi*168168+14420697)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*255528+15404953)*1+lsi)*1]), &(inteval->stack[((hsi*216216+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+15157615)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16327147)*1+lsi)*1]), &(inteval->stack[((hsi*270270+14115483)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*21021+797214)*1+lsi)*1]), &(inteval->stack[((hsi*19110+818235)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+14172813)*1+lsi)*1]), &(inteval->stack[((hsi*57330+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*51870+14652565)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+797214)*1+lsi)*1]), &(inteval->stack[((hsi*103740+14172813)*1+lsi)*1]), &(inteval->stack[((hsi*93366+10501767)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*155610+797214)*1+lsi)*1]), &(inteval->stack[((hsi*139230+15660481)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+797214)*1+lsi)*1]), &(inteval->stack[((hsi*208845+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14704435)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*259896+797214)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15799711)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+15487945)*1+lsi)*1]), &(inteval->stack[((hsi*305760+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*267540+14890075)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*343980+15487945)*1+lsi)*1]), &(inteval->stack[((hsi*298116+16029031)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+15487945)*1+lsi)*1]), &(inteval->stack[((hsi*372645+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16327147)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*390390+15487945)*1+lsi)*1]), &(inteval->stack[((hsi*330330+15157615)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+14511879)*1+lsi)*1]), &(inteval->stack[((hsi*396396+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*339768+12338235)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+15531183)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+14511879)*1+lsi)*1]), &(inteval->stack[((hsi*862488+11383515)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+17256159)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+15531183)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+12678003)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*9555+772539)*1+lsi)*1]), &(inteval->stack[((hsi*8190+782094)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+11408085)*1+lsi)*1]), &(inteval->stack[((hsi*11025+761514)*1+lsi)*1]), &(inteval->stack[((hsi*9555+772539)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+11436750)*1+lsi)*1]), &(inteval->stack[((hsi*28665+11408085)*1+lsi)*1]), &(inteval->stack[((hsi*24570+11383515)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+11485890)*1+lsi)*1]), &(inteval->stack[((hsi*12600+748914)*1+lsi)*1]), &(inteval->stack[((hsi*11025+761514)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+11518965)*1+lsi)*1]), &(inteval->stack[((hsi*33075+11485890)*1+lsi)*1]), &(inteval->stack[((hsi*28665+11408085)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+11576295)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11518965)*1+lsi)*1]), &(inteval->stack[((hsi*49140+11436750)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+11658195)*1+lsi)*1]), &(inteval->stack[((hsi*14280+734634)*1+lsi)*1]), &(inteval->stack[((hsi*12600+748914)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+11695995)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11658195)*1+lsi)*1]), &(inteval->stack[((hsi*33075+11485890)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+11762145)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11695995)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11518965)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+11857695)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11762145)*1+lsi)*1]), &(inteval->stack[((hsi*81900+11576295)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+11980545)*1+lsi)*1]), &(inteval->stack[((hsi*16065+718569)*1+lsi)*1]), &(inteval->stack[((hsi*14280+734634)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+12023385)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11980545)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11658195)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+12098985)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12023385)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11695995)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+12209235)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12098985)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11762145)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+797214)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12209235)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11857695)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+12352560)*1+lsi)*1]), &(inteval->stack[((hsi*17955+700614)*1+lsi)*1]), &(inteval->stack[((hsi*16065+718569)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12352560)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11980545)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+969204)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10377279)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12023385)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+12400755)*1+lsi)*1]), &(inteval->stack[((hsi*126000+969204)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12098985)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+11980545)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12400755)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12209235)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+19651959)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11980545)*1+lsi)*1]), &(inteval->stack[((hsi*171990+797214)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+10462959)*1+lsi)*1]), &(inteval->stack[((hsi*19950+680664)*1+lsi)*1]), &(inteval->stack[((hsi*17955+700614)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+11658195)*1+lsi)*1]), &(inteval->stack[((hsi*53865+10462959)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12352560)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+12181200)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11658195)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10377279)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+19881279)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12181200)*1+lsi)*1]), &(inteval->stack[((hsi*126000+969204)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+969204)*1+lsi)*1]), &(inteval->stack[((hsi*189000+19881279)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12400755)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+12324000)*1+lsi)*1]), &(inteval->stack[((hsi*231525+969204)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11980545)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+20070279)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12324000)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19651959)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+11980545)*1+lsi)*1]), &(inteval->stack[((hsi*22050+658614)*1+lsi)*1]), &(inteval->stack[((hsi*19950+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+10516824)*1+lsi)*1]), &(inteval->stack[((hsi*59850+11980545)*1+lsi)*1]), &(inteval->stack[((hsi*53865+10462959)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+20365119)*1+lsi)*1]), &(inteval->stack[((hsi*107730+10516824)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11658195)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+20525769)*1+lsi)*1]), &(inteval->stack[((hsi*160650+20365119)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12181200)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+12040395)*1+lsi)*1]), &(inteval->stack[((hsi*214200+20525769)*1+lsi)*1]), &(inteval->stack[((hsi*189000+19881279)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+20739969)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12040395)*1+lsi)*1]), &(inteval->stack[((hsi*231525+969204)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+21048669)*1+lsi)*1]), &(inteval->stack[((hsi*308700+20739969)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12324000)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+12304995)*1+lsi)*1]), &(inteval->stack[((hsi*343980+21048669)*1+lsi)*1]), &(inteval->stack[((hsi*294840+20070279)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+969204)*1+lsi)*1]), &(inteval->stack[((hsi*8190+782094)*1+lsi)*1]), &(inteval->stack[((hsi*6930+790284)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+989994)*1+lsi)*1]), &(inteval->stack[((hsi*24570+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*20790+969204)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1031574)*1+lsi)*1]), &(inteval->stack[((hsi*49140+11436750)*1+lsi)*1]), &(inteval->stack[((hsi*41580+989994)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+11658195)*1+lsi)*1]), &(inteval->stack[((hsi*81900+11576295)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1031574)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+969204)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11857695)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11658195)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*171990+797214)*1+lsi)*1]), &(inteval->stack[((hsi*145530+969204)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+680664)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19651959)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11383515)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*294840+20070279)*1+lsi)*1]), &(inteval->stack[((hsi*249480+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+19651959)*1+lsi)*1]), &(inteval->stack[((hsi*368550+12304995)*1+lsi)*1]), &(inteval->stack[((hsi*311850+11383515)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*24255+634359)*1+lsi)*1]), &(inteval->stack[((hsi*22050+658614)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+634359)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*59850+11980545)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*119700+634359)*1+lsi)*1]), &(inteval->stack[((hsi*107730+10516824)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+634359)*1+lsi)*1]), &(inteval->stack[((hsi*179550+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*160650+20365119)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*240975+634359)*1+lsi)*1]), &(inteval->stack[((hsi*214200+20525769)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+20033109)*1+lsi)*1]), &(inteval->stack[((hsi*299880+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12040395)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*352800+20033109)*1+lsi)*1]), &(inteval->stack[((hsi*308700+20739969)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+20033109)*1+lsi)*1]), &(inteval->stack[((hsi*396900+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*343980+21048669)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*429975+20033109)*1+lsi)*1]), &(inteval->stack[((hsi*368550+12304995)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+11833965)*1+lsi)*1]), &(inteval->stack[((hsi*450450+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*381150+19651959)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+19651959)*1+lsi)*1]), &(inteval->stack[((hsi*457380+11833965)*1+lsi)*1]), &(inteval->stack[((hsi*396396+14115483)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+20841147)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+19651959)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+14511879)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+22879755)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+20841147)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+15531183)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+25754715)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+22879755)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+17256159)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*10920+606159)*1+lsi)*1]), &(inteval->stack[((hsi*9360+617079)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+14143563)*1+lsi)*1]), &(inteval->stack[((hsi*12600+593559)*1+lsi)*1]), &(inteval->stack[((hsi*10920+606159)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+14176323)*1+lsi)*1]), &(inteval->stack[((hsi*32760+14143563)*1+lsi)*1]), &(inteval->stack[((hsi*28080+14115483)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+14232483)*1+lsi)*1]), &(inteval->stack[((hsi*14400+579159)*1+lsi)*1]), &(inteval->stack[((hsi*12600+593559)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+14270283)*1+lsi)*1]), &(inteval->stack[((hsi*37800+14232483)*1+lsi)*1]), &(inteval->stack[((hsi*32760+14143563)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+14335803)*1+lsi)*1]), &(inteval->stack[((hsi*65520+14270283)*1+lsi)*1]), &(inteval->stack[((hsi*56160+14176323)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+14429403)*1+lsi)*1]), &(inteval->stack[((hsi*16320+562839)*1+lsi)*1]), &(inteval->stack[((hsi*14400+579159)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+14472603)*1+lsi)*1]), &(inteval->stack[((hsi*43200+14429403)*1+lsi)*1]), &(inteval->stack[((hsi*37800+14232483)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+14548203)*1+lsi)*1]), &(inteval->stack[((hsi*75600+14472603)*1+lsi)*1]), &(inteval->stack[((hsi*65520+14270283)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+14657403)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14548203)*1+lsi)*1]), &(inteval->stack[((hsi*93600+14335803)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+14797803)*1+lsi)*1]), &(inteval->stack[((hsi*18360+544479)*1+lsi)*1]), &(inteval->stack[((hsi*16320+562839)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+14846763)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14797803)*1+lsi)*1]), &(inteval->stack[((hsi*43200+14429403)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+14933163)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14846763)*1+lsi)*1]), &(inteval->stack[((hsi*75600+14472603)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+15059163)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14933163)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14548203)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+15222963)*1+lsi)*1]), &(inteval->stack[((hsi*163800+15059163)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14657403)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+15419523)*1+lsi)*1]), &(inteval->stack[((hsi*20520+523959)*1+lsi)*1]), &(inteval->stack[((hsi*18360+544479)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+15474603)*1+lsi)*1]), &(inteval->stack[((hsi*55080+15419523)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14797803)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+15572523)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15474603)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14846763)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+15716523)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15572523)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14933163)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+15905523)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15716523)*1+lsi)*1]), &(inteval->stack[((hsi*163800+15059163)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+16134843)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15905523)*1+lsi)*1]), &(inteval->stack[((hsi*196560+15222963)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+16396923)*1+lsi)*1]), &(inteval->stack[((hsi*22800+501159)*1+lsi)*1]), &(inteval->stack[((hsi*20520+523959)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+16458483)*1+lsi)*1]), &(inteval->stack[((hsi*61560+16396923)*1+lsi)*1]), &(inteval->stack[((hsi*55080+15419523)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+16568643)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16458483)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15474603)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+634359)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16568643)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15572523)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+16731843)*1+lsi)*1]), &(inteval->stack[((hsi*216000+634359)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15716523)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+15419523)*1+lsi)*1]), &(inteval->stack[((hsi*264600+16731843)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15905523)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*305760+15419523)*1+lsi)*1]), &(inteval->stack[((hsi*262080+16134843)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+14797803)*1+lsi)*1]), &(inteval->stack[((hsi*25200+475959)*1+lsi)*1]), &(inteval->stack[((hsi*22800+501159)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+15725283)*1+lsi)*1]), &(inteval->stack[((hsi*68400+14797803)*1+lsi)*1]), &(inteval->stack[((hsi*61560+16396923)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+850359)*1+lsi)*1]), &(inteval->stack[((hsi*123120+15725283)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16458483)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+12291345)*1+lsi)*1]), &(inteval->stack[((hsi*183600+850359)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16568643)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+14866203)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12291345)*1+lsi)*1]), &(inteval->stack[((hsi*216000+634359)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+29348415)*1+lsi)*1]), &(inteval->stack[((hsi*302400+14866203)*1+lsi)*1]), &(inteval->stack[((hsi*264600+16731843)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+16396923)*1+lsi)*1]), &(inteval->stack[((hsi*352800+29348415)*1+lsi)*1]), &(inteval->stack[((hsi*305760+15419523)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+16790043)*1+lsi)*1]), &(inteval->stack[((hsi*393120+16396923)*1+lsi)*1]), &(inteval->stack[((hsi*336960+11383515)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+15419523)*1+lsi)*1]), &(inteval->stack[((hsi*9360+617079)*1+lsi)*1]), &(inteval->stack[((hsi*7920+626439)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+501159)*1+lsi)*1]), &(inteval->stack[((hsi*28080+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*23760+15419523)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+15419523)*1+lsi)*1]), &(inteval->stack[((hsi*56160+14176323)*1+lsi)*1]), &(inteval->stack[((hsi*47520+501159)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+501159)*1+lsi)*1]), &(inteval->stack[((hsi*93600+14335803)*1+lsi)*1]), &(inteval->stack[((hsi*79200+15419523)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14657403)*1+lsi)*1]), &(inteval->stack[((hsi*118800+501159)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+14281803)*1+lsi)*1]), &(inteval->stack[((hsi*196560+15222963)*1+lsi)*1]), &(inteval->stack[((hsi*166320+14115483)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+15168603)*1+lsi)*1]), &(inteval->stack[((hsi*262080+16134843)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14281803)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*336960+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*285120+15168603)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+15168603)*1+lsi)*1]), &(inteval->stack[((hsi*421200+16790043)*1+lsi)*1]), &(inteval->stack[((hsi*356400+14115483)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*27720+448239)*1+lsi)*1]), &(inteval->stack[((hsi*25200+475959)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+14191083)*1+lsi)*1]), &(inteval->stack[((hsi*75600+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*68400+14797803)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+15848403)*1+lsi)*1]), &(inteval->stack[((hsi*136800+14191083)*1+lsi)*1]), &(inteval->stack[((hsi*123120+15725283)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*205200+15848403)*1+lsi)*1]), &(inteval->stack[((hsi*183600+850359)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+448239)*1+lsi)*1]), &(inteval->stack[((hsi*275400+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12291345)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+15604203)*1+lsi)*1]), &(inteval->stack[((hsi*342720+448239)*1+lsi)*1]), &(inteval->stack[((hsi*302400+14866203)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*403200+15604203)*1+lsi)*1]), &(inteval->stack[((hsi*352800+29348415)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+448239)*1+lsi)*1]), &(inteval->stack[((hsi*453600+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*393120+16396923)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+15604203)*1+lsi)*1]), &(inteval->stack[((hsi*491400+448239)*1+lsi)*1]), &(inteval->stack[((hsi*421200+16790043)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+16119003)*1+lsi)*1]), &(inteval->stack[((hsi*514800+15604203)*1+lsi)*1]), &(inteval->stack[((hsi*435600+15168603)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*522720+16119003)*1+lsi)*1]), &(inteval->stack[((hsi*457380+11833965)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+29348415)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+19651959)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+31726791)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+29348415)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+20841147)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+35124471)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+31726791)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+22879755)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+19651959)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+35124471)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+25754715)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*12376+416279)*1+lsi)*1]), &(inteval->stack[((hsi*10608+428655)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+11415339)*1+lsi)*1]), &(inteval->stack[((hsi*14280+401999)*1+lsi)*1]), &(inteval->stack[((hsi*12376+416279)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+11452467)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11415339)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11383515)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+11516115)*1+lsi)*1]), &(inteval->stack[((hsi*16320+385679)*1+lsi)*1]), &(inteval->stack[((hsi*14280+401999)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+11558955)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11516115)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11415339)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+24683139)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11558955)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11452467)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+11633211)*1+lsi)*1]), &(inteval->stack[((hsi*18496+367183)*1+lsi)*1]), &(inteval->stack[((hsi*16320+385679)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+11682171)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11633211)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11516115)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+24789219)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11682171)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11558955)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+11767851)*1+lsi)*1]), &(inteval->stack[((hsi*123760+24789219)*1+lsi)*1]), &(inteval->stack[((hsi*106080+24683139)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+24912979)*1+lsi)*1]), &(inteval->stack[((hsi*20808+346375)*1+lsi)*1]), &(inteval->stack[((hsi*18496+367183)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+448239)*1+lsi)*1]), &(inteval->stack[((hsi*55488+24912979)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11633211)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+24968467)*1+lsi)*1]), &(inteval->stack[((hsi*97920+448239)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11682171)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+11926971)*1+lsi)*1]), &(inteval->stack[((hsi*142800+24968467)*1+lsi)*1]), &(inteval->stack[((hsi*123760+24789219)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+546159)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11926971)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11767851)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+25111267)*1+lsi)*1]), &(inteval->stack[((hsi*23256+323119)*1+lsi)*1]), &(inteval->stack[((hsi*20808+346375)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*62424+25111267)*1+lsi)*1]), &(inteval->stack[((hsi*55488+24912979)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+16641723)*1+lsi)*1]), &(inteval->stack[((hsi*110976+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*97920+448239)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+25173691)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16641723)*1+lsi)*1]), &(inteval->stack[((hsi*142800+24968467)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+12112611)*1+lsi)*1]), &(inteval->stack[((hsi*214200+25173691)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11926971)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+15598599)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12112611)*1+lsi)*1]), &(inteval->stack[((hsi*222768+546159)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+768927)*1+lsi)*1]), &(inteval->stack[((hsi*25840+297279)*1+lsi)*1]), &(inteval->stack[((hsi*23256+323119)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+16804923)*1+lsi)*1]), &(inteval->stack[((hsi*69768+768927)*1+lsi)*1]), &(inteval->stack[((hsi*62424+25111267)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+838695)*1+lsi)*1]), &(inteval->stack[((hsi*124848+16804923)*1+lsi)*1]), &(inteval->stack[((hsi*110976+15487623)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+24789219)*1+lsi)*1]), &(inteval->stack[((hsi*184960+838695)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16641723)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+25387891)*1+lsi)*1]), &(inteval->stack[((hsi*244800+24789219)*1+lsi)*1]), &(inteval->stack[((hsi*214200+25173691)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+25034019)*1+lsi)*1]), &(inteval->stack[((hsi*299880+25387891)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12112611)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+11926971)*1+lsi)*1]), &(inteval->stack[((hsi*346528+25034019)*1+lsi)*1]), &(inteval->stack[((hsi*297024+15598599)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+12308859)*1+lsi)*1]), &(inteval->stack[((hsi*28560+268719)*1+lsi)*1]), &(inteval->stack[((hsi*25840+297279)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+16929771)*1+lsi)*1]), &(inteval->stack[((hsi*77520+12308859)*1+lsi)*1]), &(inteval->stack[((hsi*69768+768927)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+12386379)*1+lsi)*1]), &(inteval->stack[((hsi*139536+16929771)*1+lsi)*1]), &(inteval->stack[((hsi*124848+16804923)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+16641723)*1+lsi)*1]), &(inteval->stack[((hsi*208080+12386379)*1+lsi)*1]), &(inteval->stack[((hsi*184960+838695)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+768927)*1+lsi)*1]), &(inteval->stack[((hsi*277440+16641723)*1+lsi)*1]), &(inteval->stack[((hsi*244800+24789219)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+39436911)*1+lsi)*1]), &(inteval->stack[((hsi*342720+768927)*1+lsi)*1]), &(inteval->stack[((hsi*299880+25387891)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+39836751)*1+lsi)*1]), &(inteval->stack[((hsi*399840+39436911)*1+lsi)*1]), &(inteval->stack[((hsi*346528+25034019)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+24789219)*1+lsi)*1]), &(inteval->stack[((hsi*445536+39836751)*1+lsi)*1]), &(inteval->stack[((hsi*381888+11926971)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+25266579)*1+lsi)*1]), &(inteval->stack[((hsi*10608+428655)*1+lsi)*1]), &(inteval->stack[((hsi*8976+439263)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+25293507)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*26928+25266579)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+25347363)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11452467)*1+lsi)*1]), &(inteval->stack[((hsi*53856+25293507)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*106080+24683139)*1+lsi)*1]), &(inteval->stack[((hsi*89760+25347363)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+25266579)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11767851)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11383515)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*222768+546159)*1+lsi)*1]), &(inteval->stack[((hsi*188496+25266579)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+25266579)*1+lsi)*1]), &(inteval->stack[((hsi*297024+15598599)*1+lsi)*1]), &(inteval->stack[((hsi*251328+11383515)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*381888+11926971)*1+lsi)*1]), &(inteval->stack[((hsi*323136+25266579)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+11383515)*1+lsi)*1]), &(inteval->stack[((hsi*477360+24789219)*1+lsi)*1]), &(inteval->stack[((hsi*403920+15487623)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*31416+237303)*1+lsi)*1]), &(inteval->stack[((hsi*28560+268719)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+15573303)*1+lsi)*1]), &(inteval->stack[((hsi*85680+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*77520+12308859)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+237303)*1+lsi)*1]), &(inteval->stack[((hsi*155040+15573303)*1+lsi)*1]), &(inteval->stack[((hsi*139536+16929771)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*232560+237303)*1+lsi)*1]), &(inteval->stack[((hsi*208080+12386379)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+11877195)*1+lsi)*1]), &(inteval->stack[((hsi*312120+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*277440+16641723)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*388416+11877195)*1+lsi)*1]), &(inteval->stack[((hsi*342720+768927)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+237303)*1+lsi)*1]), &(inteval->stack[((hsi*456960+15487623)*1+lsi)*1]), &(inteval->stack[((hsi*399840+39436911)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+11877195)*1+lsi)*1]), &(inteval->stack[((hsi*514080+237303)*1+lsi)*1]), &(inteval->stack[((hsi*445536+39836751)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+237303)*1+lsi)*1]), &(inteval->stack[((hsi*556920+11877195)*1+lsi)*1]), &(inteval->stack[((hsi*477360+24789219)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+24683139)*1+lsi)*1]), &(inteval->stack[((hsi*583440+237303)*1+lsi)*1]), &(inteval->stack[((hsi*493680+11383515)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+39436911)*1+lsi)*1]), &(inteval->stack[((hsi*592416+24683139)*1+lsi)*1]), &(inteval->stack[((hsi*522720+16119003)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+41005071)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+39436911)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+14115483)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+43749351)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+41005071)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+29348415)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+47713311)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+43749351)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+31726791)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+52809831)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+47713311)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+35124471)*1+lsi)*1]),4356);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*6708240+29348415)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+52809831)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+19651959)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*4095+1306224)*1+lsi)*1]), &(inteval->stack[((hsi*3510+1310319)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+36067185)*1+lsi)*1]), &(inteval->stack[((hsi*4725+1301499)*1+lsi)*1]), &(inteval->stack[((hsi*4095+1306224)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+36079470)*1+lsi)*1]), &(inteval->stack[((hsi*12285+36067185)*1+lsi)*1]), &(inteval->stack[((hsi*10530+36056655)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+36100530)*1+lsi)*1]), &(inteval->stack[((hsi*5400+1296099)*1+lsi)*1]), &(inteval->stack[((hsi*4725+1301499)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+36114705)*1+lsi)*1]), &(inteval->stack[((hsi*14175+36100530)*1+lsi)*1]), &(inteval->stack[((hsi*12285+36067185)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+36139275)*1+lsi)*1]), &(inteval->stack[((hsi*24570+36114705)*1+lsi)*1]), &(inteval->stack[((hsi*21060+36079470)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+36174375)*1+lsi)*1]), &(inteval->stack[((hsi*6120+1289979)*1+lsi)*1]), &(inteval->stack[((hsi*5400+1296099)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+36190575)*1+lsi)*1]), &(inteval->stack[((hsi*16200+36174375)*1+lsi)*1]), &(inteval->stack[((hsi*14175+36100530)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+36218925)*1+lsi)*1]), &(inteval->stack[((hsi*28350+36190575)*1+lsi)*1]), &(inteval->stack[((hsi*24570+36114705)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+36259875)*1+lsi)*1]), &(inteval->stack[((hsi*40950+36218925)*1+lsi)*1]), &(inteval->stack[((hsi*35100+36139275)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*6885+1283094)*1+lsi)*1]), &(inteval->stack[((hsi*6120+1289979)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+36312525)*1+lsi)*1]), &(inteval->stack[((hsi*18360+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*16200+36174375)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+14133843)*1+lsi)*1]), &(inteval->stack[((hsi*32400+36312525)*1+lsi)*1]), &(inteval->stack[((hsi*28350+36190575)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+36344925)*1+lsi)*1]), &(inteval->stack[((hsi*47250+14133843)*1+lsi)*1]), &(inteval->stack[((hsi*40950+36218925)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+14181093)*1+lsi)*1]), &(inteval->stack[((hsi*61425+36344925)*1+lsi)*1]), &(inteval->stack[((hsi*52650+36259875)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+36406350)*1+lsi)*1]), &(inteval->stack[((hsi*7695+1275399)*1+lsi)*1]), &(inteval->stack[((hsi*6885+1283094)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+36427005)*1+lsi)*1]), &(inteval->stack[((hsi*20655+36406350)*1+lsi)*1]), &(inteval->stack[((hsi*18360+14115483)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+14254803)*1+lsi)*1]), &(inteval->stack[((hsi*36720+36427005)*1+lsi)*1]), &(inteval->stack[((hsi*32400+36312525)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+36463725)*1+lsi)*1]), &(inteval->stack[((hsi*54000+14254803)*1+lsi)*1]), &(inteval->stack[((hsi*47250+14133843)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+14308803)*1+lsi)*1]), &(inteval->stack[((hsi*70875+36463725)*1+lsi)*1]), &(inteval->stack[((hsi*61425+36344925)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+36534600)*1+lsi)*1]), &(inteval->stack[((hsi*85995+14308803)*1+lsi)*1]), &(inteval->stack[((hsi*73710+14181093)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+14394798)*1+lsi)*1]), &(inteval->stack[((hsi*8550+1266849)*1+lsi)*1]), &(inteval->stack[((hsi*7695+1275399)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+14417883)*1+lsi)*1]), &(inteval->stack[((hsi*23085+14394798)*1+lsi)*1]), &(inteval->stack[((hsi*20655+36406350)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+36632880)*1+lsi)*1]), &(inteval->stack[((hsi*41310+14417883)*1+lsi)*1]), &(inteval->stack[((hsi*36720+36427005)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+14459193)*1+lsi)*1]), &(inteval->stack[((hsi*61200+36632880)*1+lsi)*1]), &(inteval->stack[((hsi*54000+14254803)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+36694080)*1+lsi)*1]), &(inteval->stack[((hsi*81000+14459193)*1+lsi)*1]), &(inteval->stack[((hsi*70875+36463725)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+14540193)*1+lsi)*1]), &(inteval->stack[((hsi*99225+36694080)*1+lsi)*1]), &(inteval->stack[((hsi*85995+14308803)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+36793305)*1+lsi)*1]), &(inteval->stack[((hsi*114660+14540193)*1+lsi)*1]), &(inteval->stack[((hsi*98280+36534600)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+14654853)*1+lsi)*1]), &(inteval->stack[((hsi*9450+1257399)*1+lsi)*1]), &(inteval->stack[((hsi*8550+1266849)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+14680503)*1+lsi)*1]), &(inteval->stack[((hsi*25650+14654853)*1+lsi)*1]), &(inteval->stack[((hsi*23085+14394798)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+14726673)*1+lsi)*1]), &(inteval->stack[((hsi*46170+14680503)*1+lsi)*1]), &(inteval->stack[((hsi*41310+14417883)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+36919665)*1+lsi)*1]), &(inteval->stack[((hsi*68850+14726673)*1+lsi)*1]), &(inteval->stack[((hsi*61200+36632880)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+14795523)*1+lsi)*1]), &(inteval->stack[((hsi*91800+36919665)*1+lsi)*1]), &(inteval->stack[((hsi*81000+14459193)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+37011465)*1+lsi)*1]), &(inteval->stack[((hsi*113400+14795523)*1+lsi)*1]), &(inteval->stack[((hsi*99225+36694080)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+14908923)*1+lsi)*1]), &(inteval->stack[((hsi*132300+37011465)*1+lsi)*1]), &(inteval->stack[((hsi*114660+14540193)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+37143765)*1+lsi)*1]), &(inteval->stack[((hsi*147420+14908923)*1+lsi)*1]), &(inteval->stack[((hsi*126360+36793305)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+15056343)*1+lsi)*1]), &(inteval->stack[((hsi*3510+1310319)*1+lsi)*1]), &(inteval->stack[((hsi*2970+1313829)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+15065253)*1+lsi)*1]), &(inteval->stack[((hsi*10530+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*8910+15056343)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+15083073)*1+lsi)*1]), &(inteval->stack[((hsi*21060+36079470)*1+lsi)*1]), &(inteval->stack[((hsi*17820+15065253)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+15112773)*1+lsi)*1]), &(inteval->stack[((hsi*35100+36139275)*1+lsi)*1]), &(inteval->stack[((hsi*29700+15083073)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+37301715)*1+lsi)*1]), &(inteval->stack[((hsi*52650+36259875)*1+lsi)*1]), &(inteval->stack[((hsi*44550+15112773)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+15056343)*1+lsi)*1]), &(inteval->stack[((hsi*73710+14181093)*1+lsi)*1]), &(inteval->stack[((hsi*62370+37301715)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+37301715)*1+lsi)*1]), &(inteval->stack[((hsi*98280+36534600)*1+lsi)*1]), &(inteval->stack[((hsi*83160+15056343)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+15056343)*1+lsi)*1]), &(inteval->stack[((hsi*126360+36793305)*1+lsi)*1]), &(inteval->stack[((hsi*106920+37301715)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+37301715)*1+lsi)*1]), &(inteval->stack[((hsi*157950+37143765)*1+lsi)*1]), &(inteval->stack[((hsi*133650+15056343)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+15056343)*1+lsi)*1]), &(inteval->stack[((hsi*10395+1247004)*1+lsi)*1]), &(inteval->stack[((hsi*9450+1257399)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+15084693)*1+lsi)*1]), &(inteval->stack[((hsi*28350+15056343)*1+lsi)*1]), &(inteval->stack[((hsi*25650+14654853)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+15135993)*1+lsi)*1]), &(inteval->stack[((hsi*51300+15084693)*1+lsi)*1]), &(inteval->stack[((hsi*46170+14680503)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+15212943)*1+lsi)*1]), &(inteval->stack[((hsi*76950+15135993)*1+lsi)*1]), &(inteval->stack[((hsi*68850+14726673)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+37465065)*1+lsi)*1]), &(inteval->stack[((hsi*103275+15212943)*1+lsi)*1]), &(inteval->stack[((hsi*91800+36919665)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+15056343)*1+lsi)*1]), &(inteval->stack[((hsi*128520+37465065)*1+lsi)*1]), &(inteval->stack[((hsi*113400+14795523)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+15207543)*1+lsi)*1]), &(inteval->stack[((hsi*151200+15056343)*1+lsi)*1]), &(inteval->stack[((hsi*132300+37011465)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+37465065)*1+lsi)*1]), &(inteval->stack[((hsi*170100+15207543)*1+lsi)*1]), &(inteval->stack[((hsi*147420+14908923)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*184275+37465065)*1+lsi)*1]), &(inteval->stack[((hsi*157950+37143765)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+14308533)*1+lsi)*1]), &(inteval->stack[((hsi*193050+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*163350+37301715)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*239580+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*196020+14308533)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+14115483)*1+lsi)*1]), &(inteval->stack[((hsi*718740+10664775)*1+lsi)*1]), &(inteval->stack[((hsi*588060+36056655)*1+lsi)*1]),4356);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1960200+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+12678003)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+14115483)*1+lsi)*1]),4356);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2940300+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+17256159)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+36056655)*1+lsi)*1]),4356);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*4116420+13077999)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+25754715)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+10137699)*1+lsi)*1]),4356);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*5488560+58847247)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+19651959)*1+lsi)*1]), &(inteval->stack[((hsi*4116420+13077999)*1+lsi)*1]),4356);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*7056720+10137699)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+29348415)*1+lsi)*1]), &(inteval->stack[((hsi*5488560+58847247)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+17194419)*1+lsi)*1]), &(inteval->stack[((hsi*13923+201348)*1+lsi)*1]), &(inteval->stack[((hsi*11934+215271)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+17230221)*1+lsi)*1]), &(inteval->stack[((hsi*16065+185283)*1+lsi)*1]), &(inteval->stack[((hsi*13923+201348)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+17271990)*1+lsi)*1]), &(inteval->stack[((hsi*41769+17230221)*1+lsi)*1]), &(inteval->stack[((hsi*35802+17194419)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+17343594)*1+lsi)*1]), &(inteval->stack[((hsi*18360+166923)*1+lsi)*1]), &(inteval->stack[((hsi*16065+185283)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+17391789)*1+lsi)*1]), &(inteval->stack[((hsi*48195+17343594)*1+lsi)*1]), &(inteval->stack[((hsi*41769+17230221)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+17475327)*1+lsi)*1]), &(inteval->stack[((hsi*83538+17391789)*1+lsi)*1]), &(inteval->stack[((hsi*71604+17271990)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+17594667)*1+lsi)*1]), &(inteval->stack[((hsi*20808+146115)*1+lsi)*1]), &(inteval->stack[((hsi*18360+166923)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+17649747)*1+lsi)*1]), &(inteval->stack[((hsi*55080+17594667)*1+lsi)*1]), &(inteval->stack[((hsi*48195+17343594)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+17746137)*1+lsi)*1]), &(inteval->stack[((hsi*96390+17649747)*1+lsi)*1]), &(inteval->stack[((hsi*83538+17391789)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+17885367)*1+lsi)*1]), &(inteval->stack[((hsi*139230+17746137)*1+lsi)*1]), &(inteval->stack[((hsi*119340+17475327)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+18064377)*1+lsi)*1]), &(inteval->stack[((hsi*23409+122706)*1+lsi)*1]), &(inteval->stack[((hsi*20808+146115)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+18126801)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18064377)*1+lsi)*1]), &(inteval->stack[((hsi*55080+17594667)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+18236961)*1+lsi)*1]), &(inteval->stack[((hsi*110160+18126801)*1+lsi)*1]), &(inteval->stack[((hsi*96390+17649747)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+18397611)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18236961)*1+lsi)*1]), &(inteval->stack[((hsi*139230+17746137)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+18606456)*1+lsi)*1]), &(inteval->stack[((hsi*208845+18397611)*1+lsi)*1]), &(inteval->stack[((hsi*179010+17885367)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+18857070)*1+lsi)*1]), &(inteval->stack[((hsi*26163+96543)*1+lsi)*1]), &(inteval->stack[((hsi*23409+122706)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+18927297)*1+lsi)*1]), &(inteval->stack[((hsi*70227+18857070)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18064377)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+19052145)*1+lsi)*1]), &(inteval->stack[((hsi*124848+18927297)*1+lsi)*1]), &(inteval->stack[((hsi*110160+18126801)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+19235745)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19052145)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18236961)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+19476720)*1+lsi)*1]), &(inteval->stack[((hsi*240975+19235745)*1+lsi)*1]), &(inteval->stack[((hsi*208845+18397611)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+19769103)*1+lsi)*1]), &(inteval->stack[((hsi*292383+19476720)*1+lsi)*1]), &(inteval->stack[((hsi*250614+18606456)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+20103255)*1+lsi)*1]), &(inteval->stack[((hsi*29070+67473)*1+lsi)*1]), &(inteval->stack[((hsi*26163+96543)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+20181744)*1+lsi)*1]), &(inteval->stack[((hsi*78489+20103255)*1+lsi)*1]), &(inteval->stack[((hsi*70227+18857070)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+20322198)*1+lsi)*1]), &(inteval->stack[((hsi*140454+20181744)*1+lsi)*1]), &(inteval->stack[((hsi*124848+18927297)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+20530278)*1+lsi)*1]), &(inteval->stack[((hsi*208080+20322198)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19052145)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+25275555)*1+lsi)*1]), &(inteval->stack[((hsi*275400+20530278)*1+lsi)*1]), &(inteval->stack[((hsi*240975+19235745)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+20805678)*1+lsi)*1]), &(inteval->stack[((hsi*337365+25275555)*1+lsi)*1]), &(inteval->stack[((hsi*292383+19476720)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+25612920)*1+lsi)*1]), &(inteval->stack[((hsi*389844+20805678)*1+lsi)*1]), &(inteval->stack[((hsi*334152+19769103)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+21195522)*1+lsi)*1]), &(inteval->stack[((hsi*32130+35343)*1+lsi)*1]), &(inteval->stack[((hsi*29070+67473)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+21282732)*1+lsi)*1]), &(inteval->stack[((hsi*87210+21195522)*1+lsi)*1]), &(inteval->stack[((hsi*78489+20103255)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*156978+21282732)*1+lsi)*1]), &(inteval->stack[((hsi*140454+20181744)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+26042544)*1+lsi)*1]), &(inteval->stack[((hsi*234090+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*208080+20322198)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+21439710)*1+lsi)*1]), &(inteval->stack[((hsi*312120+26042544)*1+lsi)*1]), &(inteval->stack[((hsi*275400+20530278)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+36290745)*1+lsi)*1]), &(inteval->stack[((hsi*385560+21439710)*1+lsi)*1]), &(inteval->stack[((hsi*337365+25275555)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+26354664)*1+lsi)*1]), &(inteval->stack[((hsi*449820+36290745)*1+lsi)*1]), &(inteval->stack[((hsi*389844+20805678)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+21825270)*1+lsi)*1]), &(inteval->stack[((hsi*501228+26354664)*1+lsi)*1]), &(inteval->stack[((hsi*429624+25612920)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*11934+215271)*1+lsi)*1]), &(inteval->stack[((hsi*10098+227205)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+36770859)*1+lsi)*1]), &(inteval->stack[((hsi*35802+17194419)*1+lsi)*1]), &(inteval->stack[((hsi*30294+36740565)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+36831447)*1+lsi)*1]), &(inteval->stack[((hsi*71604+17271990)*1+lsi)*1]), &(inteval->stack[((hsi*60588+36770859)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+36932427)*1+lsi)*1]), &(inteval->stack[((hsi*119340+17475327)*1+lsi)*1]), &(inteval->stack[((hsi*100980+36831447)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+26855892)*1+lsi)*1]), &(inteval->stack[((hsi*179010+17885367)*1+lsi)*1]), &(inteval->stack[((hsi*151470+36932427)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*250614+18606456)*1+lsi)*1]), &(inteval->stack[((hsi*212058+26855892)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+17194419)*1+lsi)*1]), &(inteval->stack[((hsi*334152+19769103)*1+lsi)*1]), &(inteval->stack[((hsi*282744+36740565)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+17557947)*1+lsi)*1]), &(inteval->stack[((hsi*429624+25612920)*1+lsi)*1]), &(inteval->stack[((hsi*363528+17194419)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+18012357)*1+lsi)*1]), &(inteval->stack[((hsi*537030+21825270)*1+lsi)*1]), &(inteval->stack[((hsi*454410+17557947)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*35343+0)*1+lsi)*1]), &(inteval->stack[((hsi*32130+35343)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*96390+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*87210+21195522)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*174420+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*156978+21282732)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*261630+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*234090+36056655)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*351135+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*312120+26042544)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*436968+36740565)*1+lsi)*1]), &(inteval->stack[((hsi*385560+21439710)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+19081827)*1+lsi)*1]), &(inteval->stack[((hsi*514080+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*449820+36290745)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*578340+19081827)*1+lsi)*1]), &(inteval->stack[((hsi*501228+26354664)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+25275555)*1+lsi)*1]), &(inteval->stack[((hsi*626535+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*537030+21825270)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*656370+25275555)*1+lsi)*1]), &(inteval->stack[((hsi*555390+18012357)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+19234215)*1+lsi)*1]), &(inteval->stack[((hsi*666468+18567747)*1+lsi)*1]), &(inteval->stack[((hsi*592416+24683139)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+21011463)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+19234215)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+39436911)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+24147783)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+21011463)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+41005071)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+24147783)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+43749351)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+17194419)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+47713311)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+17194419)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+52809831)*1+lsi)*1]),4356);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*8624880+17194419)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+36056655)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+29348415)*1+lsi)*1]),4356);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*8820900+1316799)*1+lsi)*1]), &(inteval->stack[((hsi*8624880+17194419)*1+lsi)*1]), &(inteval->stack[((hsi*7056720+10137699)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8820900+1316799)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
