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
#include <_aB_L__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,868560)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*5005+785840)*1+lsi)*1]), &(inteval->stack[((hsi*4290+790845)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+6369990)*1+lsi)*1]), &(inteval->stack[((hsi*5775+780065)*1+lsi)*1]), &(inteval->stack[((hsi*5005+785840)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+6385005)*1+lsi)*1]), &(inteval->stack[((hsi*15015+6369990)*1+lsi)*1]), &(inteval->stack[((hsi*12870+6357120)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+6410745)*1+lsi)*1]), &(inteval->stack[((hsi*6600+773465)*1+lsi)*1]), &(inteval->stack[((hsi*5775+780065)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+6428070)*1+lsi)*1]), &(inteval->stack[((hsi*17325+6410745)*1+lsi)*1]), &(inteval->stack[((hsi*15015+6369990)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+6458100)*1+lsi)*1]), &(inteval->stack[((hsi*30030+6428070)*1+lsi)*1]), &(inteval->stack[((hsi*25740+6385005)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+6501000)*1+lsi)*1]), &(inteval->stack[((hsi*7480+765985)*1+lsi)*1]), &(inteval->stack[((hsi*6600+773465)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+6520800)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6501000)*1+lsi)*1]), &(inteval->stack[((hsi*17325+6410745)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+6555450)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6520800)*1+lsi)*1]), &(inteval->stack[((hsi*30030+6428070)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+6605500)*1+lsi)*1]), &(inteval->stack[((hsi*50050+6555450)*1+lsi)*1]), &(inteval->stack[((hsi*42900+6458100)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+6410745)*1+lsi)*1]), &(inteval->stack[((hsi*8415+757570)*1+lsi)*1]), &(inteval->stack[((hsi*7480+765985)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+6669850)*1+lsi)*1]), &(inteval->stack[((hsi*22440+6410745)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6501000)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+6709450)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6669850)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6520800)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+6767200)*1+lsi)*1]), &(inteval->stack[((hsi*57750+6709450)*1+lsi)*1]), &(inteval->stack[((hsi*50050+6555450)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+6501000)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6767200)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6605500)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+6842275)*1+lsi)*1]), &(inteval->stack[((hsi*9405+748165)*1+lsi)*1]), &(inteval->stack[((hsi*8415+757570)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+6867520)*1+lsi)*1]), &(inteval->stack[((hsi*25245+6842275)*1+lsi)*1]), &(inteval->stack[((hsi*22440+6410745)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+6912400)*1+lsi)*1]), &(inteval->stack[((hsi*44880+6867520)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6669850)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+6978400)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6912400)*1+lsi)*1]), &(inteval->stack[((hsi*57750+6709450)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+7065025)*1+lsi)*1]), &(inteval->stack[((hsi*86625+6978400)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6767200)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+6669850)*1+lsi)*1]), &(inteval->stack[((hsi*105105+7065025)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6501000)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+6789970)*1+lsi)*1]), &(inteval->stack[((hsi*10450+737715)*1+lsi)*1]), &(inteval->stack[((hsi*9405+748165)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+7170130)*1+lsi)*1]), &(inteval->stack[((hsi*28215+6789970)*1+lsi)*1]), &(inteval->stack[((hsi*25245+6842275)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+7220620)*1+lsi)*1]), &(inteval->stack[((hsi*50490+7170130)*1+lsi)*1]), &(inteval->stack[((hsi*44880+6867520)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+7295420)*1+lsi)*1]), &(inteval->stack[((hsi*74800+7220620)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6912400)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+6818185)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7295420)*1+lsi)*1]), &(inteval->stack[((hsi*86625+6978400)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+7394420)*1+lsi)*1]), &(inteval->stack[((hsi*121275+6818185)*1+lsi)*1]), &(inteval->stack[((hsi*105105+7065025)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+6939460)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7394420)*1+lsi)*1]), &(inteval->stack[((hsi*120120+6669850)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+7093900)*1+lsi)*1]), &(inteval->stack[((hsi*11550+726165)*1+lsi)*1]), &(inteval->stack[((hsi*10450+737715)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+7534560)*1+lsi)*1]), &(inteval->stack[((hsi*31350+7093900)*1+lsi)*1]), &(inteval->stack[((hsi*28215+6789970)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+7590990)*1+lsi)*1]), &(inteval->stack[((hsi*56430+7534560)*1+lsi)*1]), &(inteval->stack[((hsi*50490+7170130)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+7675140)*1+lsi)*1]), &(inteval->stack[((hsi*84150+7590990)*1+lsi)*1]), &(inteval->stack[((hsi*74800+7220620)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+7125250)*1+lsi)*1]), &(inteval->stack[((hsi*112200+7675140)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7295420)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+7787340)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7125250)*1+lsi)*1]), &(inteval->stack[((hsi*121275+6818185)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+7949040)*1+lsi)*1]), &(inteval->stack[((hsi*161700+7787340)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7394420)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+7263850)*1+lsi)*1]), &(inteval->stack[((hsi*180180+7949040)*1+lsi)*1]), &(inteval->stack[((hsi*154440+6939460)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+6789970)*1+lsi)*1]), &(inteval->stack[((hsi*4290+790845)*1+lsi)*1]), &(inteval->stack[((hsi*3630+795135)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+6800860)*1+lsi)*1]), &(inteval->stack[((hsi*12870+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*10890+6789970)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+6822640)*1+lsi)*1]), &(inteval->stack[((hsi*25740+6385005)*1+lsi)*1]), &(inteval->stack[((hsi*21780+6800860)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*42900+6458100)*1+lsi)*1]), &(inteval->stack[((hsi*36300+6822640)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+6789970)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6605500)*1+lsi)*1]), &(inteval->stack[((hsi*54450+6357120)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6501000)*1+lsi)*1]), &(inteval->stack[((hsi*76230+6789970)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+6458760)*1+lsi)*1]), &(inteval->stack[((hsi*120120+6669850)*1+lsi)*1]), &(inteval->stack[((hsi*101640+6357120)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+6589440)*1+lsi)*1]), &(inteval->stack[((hsi*154440+6939460)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6458760)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+6752790)*1+lsi)*1]), &(inteval->stack[((hsi*193050+7263850)*1+lsi)*1]), &(inteval->stack[((hsi*163350+6589440)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*12705+713460)*1+lsi)*1]), &(inteval->stack[((hsi*11550+726165)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+6391770)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*31350+7093900)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+6454470)*1+lsi)*1]), &(inteval->stack[((hsi*62700+6391770)*1+lsi)*1]), &(inteval->stack[((hsi*56430+7534560)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+6548520)*1+lsi)*1]), &(inteval->stack[((hsi*94050+6454470)*1+lsi)*1]), &(inteval->stack[((hsi*84150+7590990)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+7456900)*1+lsi)*1]), &(inteval->stack[((hsi*126225+6548520)*1+lsi)*1]), &(inteval->stack[((hsi*112200+7675140)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*157080+7456900)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7125250)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+7456900)*1+lsi)*1]), &(inteval->stack[((hsi*184800+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*161700+7787340)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*207900+7456900)*1+lsi)*1]), &(inteval->stack[((hsi*180180+7949040)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+6952440)*1+lsi)*1]), &(inteval->stack[((hsi*225225+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*193050+7263850)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*235950+6952440)*1+lsi)*1]), &(inteval->stack[((hsi*199650+6752790)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+713460)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+728904)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+746922)*1+lsi)*1]), &(inteval->stack[((hsi*18018+728904)*1+lsi)*1]), &(inteval->stack[((hsi*15444+713460)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+777810)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*20790+777810)*1+lsi)*1]), &(inteval->stack[((hsi*18018+728904)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+6632736)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*30888+746922)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+6684216)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+6707976)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6684216)*1+lsi)*1]), &(inteval->stack[((hsi*20790+777810)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+6749556)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6707976)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6596700)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+6809616)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6749556)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6632736)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+6886836)*1+lsi)*1]), &(inteval->stack[((hsi*26928+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6684216)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+6934356)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6886836)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6707976)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+7003656)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6934356)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6749556)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+6684216)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7003656)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6809616)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+7093746)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+7124040)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7093746)*1+lsi)*1]), &(inteval->stack[((hsi*26928+6596700)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+7177896)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7124040)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6886836)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+7257096)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7177896)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6934356)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+7361046)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7257096)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7003656)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+6886836)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7361046)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6684216)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+7030980)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+7487172)*1+lsi)*1]), &(inteval->stack[((hsi*33858+7030980)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7093746)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+7547760)*1+lsi)*1]), &(inteval->stack[((hsi*60588+7487172)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7124040)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+7637520)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7547760)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7177896)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+7064838)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7637520)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7257096)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+7756320)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7064838)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7361046)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+7210368)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7756320)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6886836)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+7395696)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+7924488)*1+lsi)*1]), &(inteval->stack[((hsi*37620+7395696)*1+lsi)*1]), &(inteval->stack[((hsi*33858+7030980)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+7992204)*1+lsi)*1]), &(inteval->stack[((hsi*67716+7924488)*1+lsi)*1]), &(inteval->stack[((hsi*60588+7487172)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+8093184)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7992204)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7547760)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+7433316)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8093184)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7637520)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+8227824)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7433316)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7064838)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+8421864)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8227824)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7756320)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+7599636)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8421864)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7210368)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+7030980)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]), &(inteval->stack[((hsi*4356+709104)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+7044048)*1+lsi)*1]), &(inteval->stack[((hsi*15444+713460)*1+lsi)*1]), &(inteval->stack[((hsi*13068+7030980)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+7070184)*1+lsi)*1]), &(inteval->stack[((hsi*30888+746922)*1+lsi)*1]), &(inteval->stack[((hsi*26136+7044048)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+640200)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6632736)*1+lsi)*1]), &(inteval->stack[((hsi*43560+7070184)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+7030980)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6809616)*1+lsi)*1]), &(inteval->stack[((hsi*65340+640200)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+640200)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6684216)*1+lsi)*1]), &(inteval->stack[((hsi*91476+7030980)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6886836)*1+lsi)*1]), &(inteval->stack[((hsi*121968+640200)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6753516)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7210368)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6596700)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+6949536)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7599636)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6753516)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*15246+611094)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+6638280)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*37620+7395696)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+7189116)*1+lsi)*1]), &(inteval->stack[((hsi*75240+6638280)*1+lsi)*1]), &(inteval->stack[((hsi*67716+7924488)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*112860+7189116)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7992204)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+7831296)*1+lsi)*1]), &(inteval->stack[((hsi*151470+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8093184)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*188496+7831296)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7433316)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+7189116)*1+lsi)*1]), &(inteval->stack[((hsi*221760+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8227824)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+7831296)*1+lsi)*1]), &(inteval->stack[((hsi*249480+7189116)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8421864)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+7189116)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7831296)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7599636)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*283140+7189116)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6949536)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+6884196)*1+lsi)*1]), &(inteval->stack[((hsi*287496+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6357120)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+629346)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+650640)*1+lsi)*1]), &(inteval->stack[((hsi*21294+629346)*1+lsi)*1]), &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+687144)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+711714)*1+lsi)*1]), &(inteval->stack[((hsi*24570+687144)*1+lsi)*1]), &(inteval->stack[((hsi*21294+629346)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*42588+711714)*1+lsi)*1]), &(inteval->stack[((hsi*36504+650640)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+754302)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+7663776)*1+lsi)*1]), &(inteval->stack[((hsi*28080+754302)*1+lsi)*1]), &(inteval->stack[((hsi*24570+687144)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+7712916)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7663776)*1+lsi)*1]), &(inteval->stack[((hsi*42588+711714)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+7783896)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7712916)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7602936)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+687144)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+7875156)*1+lsi)*1]), &(inteval->stack[((hsi*31824+687144)*1+lsi)*1]), &(inteval->stack[((hsi*28080+754302)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+7931316)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7875156)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7663776)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+8013216)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7931316)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7712916)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+8119686)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8013216)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7783896)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+7663776)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+7699578)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7663776)*1+lsi)*1]), &(inteval->stack[((hsi*31824+687144)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+687144)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7699578)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7875156)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+8247450)*1+lsi)*1]), &(inteval->stack[((hsi*93600+687144)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7931316)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+8370300)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8247450)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8013216)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+7875156)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8370300)*1+lsi)*1]), &(inteval->stack[((hsi*127764+8119686)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+8045508)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+8519358)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8045508)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7663776)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+8590962)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8519358)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7699578)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+8697042)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8590962)*1+lsi)*1]), &(inteval->stack[((hsi*93600+687144)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+8837442)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8697042)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8247450)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+9009432)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8837442)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8370300)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+8247450)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9009432)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7875156)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+7663776)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+687144)*1+lsi)*1]), &(inteval->stack[((hsi*44460+7663776)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8045508)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+9208176)*1+lsi)*1]), &(inteval->stack[((hsi*80028+687144)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8519358)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+9327516)*1+lsi)*1]), &(inteval->stack[((hsi*119340+9208176)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8590962)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+8466474)*1+lsi)*1]), &(inteval->stack[((hsi*159120+9327516)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8697042)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+9486636)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8466474)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8837442)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+8663034)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9486636)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9009432)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+8918562)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8663034)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8247450)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+7708236)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]), &(inteval->stack[((hsi*5148+605946)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+524514)*1+lsi)*1]), &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7708236)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+555402)*1+lsi)*1]), &(inteval->stack[((hsi*36504+650640)*1+lsi)*1]), &(inteval->stack[((hsi*30888+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+606882)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*51480+555402)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+9715956)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7783896)*1+lsi)*1]), &(inteval->stack[((hsi*77220+606882)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+7708236)*1+lsi)*1]), &(inteval->stack[((hsi*127764+8119686)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9715956)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+8045508)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7875156)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7708236)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+7708236)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8247450)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8045508)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+7939896)*1+lsi)*1]), &(inteval->stack[((hsi*273780+8918562)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7708236)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*18018+490116)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+7708236)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*44460+7663776)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*88920+7708236)*1+lsi)*1]), &(inteval->stack[((hsi*80028+687144)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*133380+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*119340+9208176)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+490116)*1+lsi)*1]), &(inteval->stack[((hsi*179010+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*159120+9327516)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*222768+490116)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8466474)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*262080+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9486636)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*294840+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8663034)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*319410+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*273780+8918562)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+8557656)*1+lsi)*1]), &(inteval->stack[((hsi*334620+8223036)*1+lsi)*1]), &(inteval->stack[((hsi*283140+7939896)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*339768+8557656)*1+lsi)*1]), &(inteval->stack[((hsi*287496+6596700)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+8897424)*1+lsi)*1]), &(inteval->stack[((hsi*862488+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*718740+6884196)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+511410)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+6621543)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+553998)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6621543)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6596700)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6650208)*1+lsi)*1]), &(inteval->stack[((hsi*49686+553998)*1+lsi)*1]), &(inteval->stack[((hsi*42588+511410)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+603684)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6721188)*1+lsi)*1]), &(inteval->stack[((hsi*32760+603684)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6621543)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+636444)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6721188)*1+lsi)*1]), &(inteval->stack[((hsi*49686+553998)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*82810+636444)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6650208)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+6778518)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+8465424)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6778518)*1+lsi)*1]), &(inteval->stack[((hsi*32760+603684)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+10441374)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8465424)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6721188)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+10536924)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10441374)*1+lsi)*1]), &(inteval->stack[((hsi*82810+636444)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+553998)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10536924)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10334904)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+703056)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+10661139)*1+lsi)*1]), &(inteval->stack[((hsi*41769+703056)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6778518)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+6721188)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10661139)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8465424)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+10735395)*1+lsi)*1]), &(inteval->stack[((hsi*109200+6721188)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10441374)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+10878720)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10735395)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10536924)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+10441374)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10878720)*1+lsi)*1]), &(inteval->stack[((hsi*149058+553998)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+8465424)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+11052621)*1+lsi)*1]), &(inteval->stack[((hsi*46683+8465424)*1+lsi)*1]), &(inteval->stack[((hsi*41769+703056)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+11136159)*1+lsi)*1]), &(inteval->stack[((hsi*83538+11052621)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10661139)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+11259919)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11136159)*1+lsi)*1]), &(inteval->stack[((hsi*109200+6721188)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+11423719)*1+lsi)*1]), &(inteval->stack[((hsi*163800+11259919)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10735395)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+10640118)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11423719)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10878720)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+11624374)*1+lsi)*1]), &(inteval->stack[((hsi*231868+10640118)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10441374)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+10871986)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+6721188)*1+lsi)*1]), &(inteval->stack[((hsi*51870+10871986)*1+lsi)*1]), &(inteval->stack[((hsi*46683+8465424)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+11879902)*1+lsi)*1]), &(inteval->stack[((hsi*93366+6721188)*1+lsi)*1]), &(inteval->stack[((hsi*83538+11052621)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+10923856)*1+lsi)*1]), &(inteval->stack[((hsi*139230+11879902)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11136159)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+12019132)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10923856)*1+lsi)*1]), &(inteval->stack[((hsi*163800+11259919)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+11109496)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12019132)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11423719)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+12248452)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11109496)*1+lsi)*1]), &(inteval->stack[((hsi*231868+10640118)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+12546568)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12248452)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11624374)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+11377036)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]), &(inteval->stack[((hsi*6006+484110)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+10640118)*1+lsi)*1]), &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]), &(inteval->stack[((hsi*18018+11377036)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+11377036)*1+lsi)*1]), &(inteval->stack[((hsi*42588+511410)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10640118)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+10640118)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6650208)*1+lsi)*1]), &(inteval->stack[((hsi*60060+11377036)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+11377036)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10640118)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+10640118)*1+lsi)*1]), &(inteval->stack[((hsi*149058+553998)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11377036)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+389106)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10441374)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10640118)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11624374)*1+lsi)*1]), &(inteval->stack[((hsi*216216+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+11377036)*1+lsi)*1]), &(inteval->stack[((hsi*319410+12546568)*1+lsi)*1]), &(inteval->stack[((hsi*270270+10334904)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*21021+348975)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+10392234)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*51870+10871986)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+348975)*1+lsi)*1]), &(inteval->stack[((hsi*103740+10392234)*1+lsi)*1]), &(inteval->stack[((hsi*93366+6721188)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*155610+348975)*1+lsi)*1]), &(inteval->stack[((hsi*139230+11879902)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+348975)*1+lsi)*1]), &(inteval->stack[((hsi*208845+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10923856)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*259896+348975)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12019132)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+11707366)*1+lsi)*1]), &(inteval->stack[((hsi*305760+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11109496)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*343980+11707366)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12248452)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+11707366)*1+lsi)*1]), &(inteval->stack[((hsi*372645+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*319410+12546568)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*390390+11707366)*1+lsi)*1]), &(inteval->stack[((hsi*330330+11377036)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+10731300)*1+lsi)*1]), &(inteval->stack[((hsi*396396+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*339768+8557656)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+11750604)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+10731300)*1+lsi)*1]), &(inteval->stack[((hsi*862488+7602936)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+13475580)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+11750604)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+8897424)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+7627506)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+7656171)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7627506)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7602936)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+7705311)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+7738386)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7705311)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7627506)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+7795716)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7738386)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7656171)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+7877616)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+7915416)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7877616)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7705311)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+7981566)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7915416)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7738386)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+8077116)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7981566)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7795716)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+8199966)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+8242806)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8199966)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7877616)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+8318406)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8242806)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7915416)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+8428656)*1+lsi)*1]), &(inteval->stack[((hsi*110250+8318406)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7981566)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+348975)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8428656)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8077116)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+8571981)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8571981)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8199966)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+520965)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6596700)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8242806)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+8620176)*1+lsi)*1]), &(inteval->stack[((hsi*126000+520965)*1+lsi)*1]), &(inteval->stack[((hsi*110250+8318406)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+8199966)*1+lsi)*1]), &(inteval->stack[((hsi*165375+8620176)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8428656)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+15871380)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8199966)*1+lsi)*1]), &(inteval->stack[((hsi*171990+348975)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+6682380)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+7877616)*1+lsi)*1]), &(inteval->stack[((hsi*53865+6682380)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8571981)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+8400621)*1+lsi)*1]), &(inteval->stack[((hsi*96390+7877616)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6596700)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+16100700)*1+lsi)*1]), &(inteval->stack[((hsi*142800+8400621)*1+lsi)*1]), &(inteval->stack[((hsi*126000+520965)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+520965)*1+lsi)*1]), &(inteval->stack[((hsi*189000+16100700)*1+lsi)*1]), &(inteval->stack[((hsi*165375+8620176)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+8543421)*1+lsi)*1]), &(inteval->stack[((hsi*231525+520965)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8199966)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+16289700)*1+lsi)*1]), &(inteval->stack[((hsi*267540+8543421)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15871380)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+8199966)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+6736245)*1+lsi)*1]), &(inteval->stack[((hsi*59850+8199966)*1+lsi)*1]), &(inteval->stack[((hsi*53865+6682380)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+16584540)*1+lsi)*1]), &(inteval->stack[((hsi*107730+6736245)*1+lsi)*1]), &(inteval->stack[((hsi*96390+7877616)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+16745190)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16584540)*1+lsi)*1]), &(inteval->stack[((hsi*142800+8400621)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+8259816)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16745190)*1+lsi)*1]), &(inteval->stack[((hsi*189000+16100700)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+16959390)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8259816)*1+lsi)*1]), &(inteval->stack[((hsi*231525+520965)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+17268090)*1+lsi)*1]), &(inteval->stack[((hsi*308700+16959390)*1+lsi)*1]), &(inteval->stack[((hsi*267540+8543421)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+8524416)*1+lsi)*1]), &(inteval->stack[((hsi*343980+17268090)*1+lsi)*1]), &(inteval->stack[((hsi*294840+16289700)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+520965)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]), &(inteval->stack[((hsi*6930+342045)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+541755)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*20790+520965)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+583335)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7656171)*1+lsi)*1]), &(inteval->stack[((hsi*41580+541755)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+7877616)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7795716)*1+lsi)*1]), &(inteval->stack[((hsi*69300+583335)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+520965)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8077116)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7877616)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*171990+348975)*1+lsi)*1]), &(inteval->stack[((hsi*145530+520965)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+232425)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15871380)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7602936)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*294840+16289700)*1+lsi)*1]), &(inteval->stack[((hsi*249480+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+15871380)*1+lsi)*1]), &(inteval->stack[((hsi*368550+8524416)*1+lsi)*1]), &(inteval->stack[((hsi*311850+7602936)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*24255+186120)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+186120)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*59850+8199966)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*119700+186120)*1+lsi)*1]), &(inteval->stack[((hsi*107730+6736245)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+186120)*1+lsi)*1]), &(inteval->stack[((hsi*179550+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16584540)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*240975+186120)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16745190)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+16252530)*1+lsi)*1]), &(inteval->stack[((hsi*299880+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8259816)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*352800+16252530)*1+lsi)*1]), &(inteval->stack[((hsi*308700+16959390)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+16252530)*1+lsi)*1]), &(inteval->stack[((hsi*396900+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*343980+17268090)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*429975+16252530)*1+lsi)*1]), &(inteval->stack[((hsi*368550+8524416)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+8053386)*1+lsi)*1]), &(inteval->stack[((hsi*450450+7602936)*1+lsi)*1]), &(inteval->stack[((hsi*381150+15871380)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+15871380)*1+lsi)*1]), &(inteval->stack[((hsi*457380+8053386)*1+lsi)*1]), &(inteval->stack[((hsi*396396+10334904)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+17060568)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+15871380)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+10731300)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+19099176)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+17060568)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+11750604)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+21974136)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+19099176)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+13475580)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*4095+857985)*1+lsi)*1]), &(inteval->stack[((hsi*3510+862080)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+10345434)*1+lsi)*1]), &(inteval->stack[((hsi*4725+853260)*1+lsi)*1]), &(inteval->stack[((hsi*4095+857985)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+10357719)*1+lsi)*1]), &(inteval->stack[((hsi*12285+10345434)*1+lsi)*1]), &(inteval->stack[((hsi*10530+10334904)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+10378779)*1+lsi)*1]), &(inteval->stack[((hsi*5400+847860)*1+lsi)*1]), &(inteval->stack[((hsi*4725+853260)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+10392954)*1+lsi)*1]), &(inteval->stack[((hsi*14175+10378779)*1+lsi)*1]), &(inteval->stack[((hsi*12285+10345434)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+10417524)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10392954)*1+lsi)*1]), &(inteval->stack[((hsi*21060+10357719)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+10452624)*1+lsi)*1]), &(inteval->stack[((hsi*6120+841740)*1+lsi)*1]), &(inteval->stack[((hsi*5400+847860)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+10468824)*1+lsi)*1]), &(inteval->stack[((hsi*16200+10452624)*1+lsi)*1]), &(inteval->stack[((hsi*14175+10378779)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+10497174)*1+lsi)*1]), &(inteval->stack[((hsi*28350+10468824)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10392954)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+10538124)*1+lsi)*1]), &(inteval->stack[((hsi*40950+10497174)*1+lsi)*1]), &(inteval->stack[((hsi*35100+10417524)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+10590774)*1+lsi)*1]), &(inteval->stack[((hsi*6885+834855)*1+lsi)*1]), &(inteval->stack[((hsi*6120+841740)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+10609134)*1+lsi)*1]), &(inteval->stack[((hsi*18360+10590774)*1+lsi)*1]), &(inteval->stack[((hsi*16200+10452624)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+10641534)*1+lsi)*1]), &(inteval->stack[((hsi*32400+10609134)*1+lsi)*1]), &(inteval->stack[((hsi*28350+10468824)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+10688784)*1+lsi)*1]), &(inteval->stack[((hsi*47250+10641534)*1+lsi)*1]), &(inteval->stack[((hsi*40950+10497174)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+10750209)*1+lsi)*1]), &(inteval->stack[((hsi*61425+10688784)*1+lsi)*1]), &(inteval->stack[((hsi*52650+10538124)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+10823919)*1+lsi)*1]), &(inteval->stack[((hsi*7695+827160)*1+lsi)*1]), &(inteval->stack[((hsi*6885+834855)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+10844574)*1+lsi)*1]), &(inteval->stack[((hsi*20655+10823919)*1+lsi)*1]), &(inteval->stack[((hsi*18360+10590774)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+10881294)*1+lsi)*1]), &(inteval->stack[((hsi*36720+10844574)*1+lsi)*1]), &(inteval->stack[((hsi*32400+10609134)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+10935294)*1+lsi)*1]), &(inteval->stack[((hsi*54000+10881294)*1+lsi)*1]), &(inteval->stack[((hsi*47250+10641534)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+11006169)*1+lsi)*1]), &(inteval->stack[((hsi*70875+10935294)*1+lsi)*1]), &(inteval->stack[((hsi*61425+10688784)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+11092164)*1+lsi)*1]), &(inteval->stack[((hsi*85995+11006169)*1+lsi)*1]), &(inteval->stack[((hsi*73710+10750209)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+11190444)*1+lsi)*1]), &(inteval->stack[((hsi*8550+818610)*1+lsi)*1]), &(inteval->stack[((hsi*7695+827160)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+11213529)*1+lsi)*1]), &(inteval->stack[((hsi*23085+11190444)*1+lsi)*1]), &(inteval->stack[((hsi*20655+10823919)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+11254839)*1+lsi)*1]), &(inteval->stack[((hsi*41310+11213529)*1+lsi)*1]), &(inteval->stack[((hsi*36720+10844574)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+11316039)*1+lsi)*1]), &(inteval->stack[((hsi*61200+11254839)*1+lsi)*1]), &(inteval->stack[((hsi*54000+10881294)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+11397039)*1+lsi)*1]), &(inteval->stack[((hsi*81000+11316039)*1+lsi)*1]), &(inteval->stack[((hsi*70875+10935294)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+11496264)*1+lsi)*1]), &(inteval->stack[((hsi*99225+11397039)*1+lsi)*1]), &(inteval->stack[((hsi*85995+11006169)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+11610924)*1+lsi)*1]), &(inteval->stack[((hsi*114660+11496264)*1+lsi)*1]), &(inteval->stack[((hsi*98280+11092164)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+11737284)*1+lsi)*1]), &(inteval->stack[((hsi*9450+809160)*1+lsi)*1]), &(inteval->stack[((hsi*8550+818610)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+11762934)*1+lsi)*1]), &(inteval->stack[((hsi*25650+11737284)*1+lsi)*1]), &(inteval->stack[((hsi*23085+11190444)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+11809104)*1+lsi)*1]), &(inteval->stack[((hsi*46170+11762934)*1+lsi)*1]), &(inteval->stack[((hsi*41310+11213529)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+11877954)*1+lsi)*1]), &(inteval->stack[((hsi*68850+11809104)*1+lsi)*1]), &(inteval->stack[((hsi*61200+11254839)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+11969754)*1+lsi)*1]), &(inteval->stack[((hsi*91800+11877954)*1+lsi)*1]), &(inteval->stack[((hsi*81000+11316039)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+12083154)*1+lsi)*1]), &(inteval->stack[((hsi*113400+11969754)*1+lsi)*1]), &(inteval->stack[((hsi*99225+11397039)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+12215454)*1+lsi)*1]), &(inteval->stack[((hsi*132300+12083154)*1+lsi)*1]), &(inteval->stack[((hsi*114660+11496264)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+12362874)*1+lsi)*1]), &(inteval->stack[((hsi*147420+12215454)*1+lsi)*1]), &(inteval->stack[((hsi*126360+11610924)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+12520824)*1+lsi)*1]), &(inteval->stack[((hsi*3510+862080)*1+lsi)*1]), &(inteval->stack[((hsi*2970+865590)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+12529734)*1+lsi)*1]), &(inteval->stack[((hsi*10530+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*8910+12520824)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+12547554)*1+lsi)*1]), &(inteval->stack[((hsi*21060+10357719)*1+lsi)*1]), &(inteval->stack[((hsi*17820+12529734)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+12577254)*1+lsi)*1]), &(inteval->stack[((hsi*35100+10417524)*1+lsi)*1]), &(inteval->stack[((hsi*29700+12547554)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+12621804)*1+lsi)*1]), &(inteval->stack[((hsi*52650+10538124)*1+lsi)*1]), &(inteval->stack[((hsi*44550+12577254)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+12684174)*1+lsi)*1]), &(inteval->stack[((hsi*73710+10750209)*1+lsi)*1]), &(inteval->stack[((hsi*62370+12621804)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+10334904)*1+lsi)*1]), &(inteval->stack[((hsi*98280+11092164)*1+lsi)*1]), &(inteval->stack[((hsi*83160+12684174)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+10441824)*1+lsi)*1]), &(inteval->stack[((hsi*126360+11610924)*1+lsi)*1]), &(inteval->stack[((hsi*106920+10334904)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+10575474)*1+lsi)*1]), &(inteval->stack[((hsi*157950+12362874)*1+lsi)*1]), &(inteval->stack[((hsi*133650+10441824)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+10738824)*1+lsi)*1]), &(inteval->stack[((hsi*10395+798765)*1+lsi)*1]), &(inteval->stack[((hsi*9450+809160)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+10767174)*1+lsi)*1]), &(inteval->stack[((hsi*28350+10738824)*1+lsi)*1]), &(inteval->stack[((hsi*25650+11737284)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+12520824)*1+lsi)*1]), &(inteval->stack[((hsi*51300+10767174)*1+lsi)*1]), &(inteval->stack[((hsi*46170+11762934)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+10738824)*1+lsi)*1]), &(inteval->stack[((hsi*76950+12520824)*1+lsi)*1]), &(inteval->stack[((hsi*68850+11809104)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+10842099)*1+lsi)*1]), &(inteval->stack[((hsi*103275+10738824)*1+lsi)*1]), &(inteval->stack[((hsi*91800+11877954)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+10970619)*1+lsi)*1]), &(inteval->stack[((hsi*128520+10842099)*1+lsi)*1]), &(inteval->stack[((hsi*113400+11969754)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+11121819)*1+lsi)*1]), &(inteval->stack[((hsi*151200+10970619)*1+lsi)*1]), &(inteval->stack[((hsi*132300+12083154)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+12520824)*1+lsi)*1]), &(inteval->stack[((hsi*170100+11121819)*1+lsi)*1]), &(inteval->stack[((hsi*147420+12215454)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+10738824)*1+lsi)*1]), &(inteval->stack[((hsi*184275+12520824)*1+lsi)*1]), &(inteval->stack[((hsi*157950+12362874)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+10931874)*1+lsi)*1]), &(inteval->stack[((hsi*193050+10738824)*1+lsi)*1]), &(inteval->stack[((hsi*163350+10575474)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+11127894)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*196020+10931874)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+11715954)*1+lsi)*1]), &(inteval->stack[((hsi*718740+6884196)*1+lsi)*1]), &(inteval->stack[((hsi*588060+11127894)*1+lsi)*1]),4356);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1960200+25567836)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+8897424)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+11715954)*1+lsi)*1]),4356);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2940300+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+13475580)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+25567836)*1+lsi)*1]),4356);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*4116420+11451066)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+21974136)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+8510766)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+8538846)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+8571606)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8538846)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8510766)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+8627766)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+8665566)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8627766)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8538846)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+8731086)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8665566)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8571606)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+8824686)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+8867886)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8824686)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8627766)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+8943486)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8867886)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8665566)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+9052686)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8943486)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8731086)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+9193086)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+9242046)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9193086)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8824686)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+9328446)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9242046)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8867886)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+9454446)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9328446)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8943486)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+9618246)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9454446)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9052686)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+6412200)*1+lsi)*1]), &(inteval->stack[((hsi*55080+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9193086)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+9814806)*1+lsi)*1]), &(inteval->stack[((hsi*97920+6412200)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9242046)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+6510120)*1+lsi)*1]), &(inteval->stack[((hsi*144000+9814806)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9328446)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+9958806)*1+lsi)*1]), &(inteval->stack[((hsi*189000+6510120)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9454446)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+6699120)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9958806)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9618246)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+10188126)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+10249686)*1+lsi)*1]), &(inteval->stack[((hsi*61560+10188126)*1+lsi)*1]), &(inteval->stack[((hsi*55080+6357120)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+6961200)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10249686)*1+lsi)*1]), &(inteval->stack[((hsi*97920+6412200)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+10359846)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6961200)*1+lsi)*1]), &(inteval->stack[((hsi*144000+9814806)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+7124400)*1+lsi)*1]), &(inteval->stack[((hsi*216000+10359846)*1+lsi)*1]), &(inteval->stack[((hsi*189000+6510120)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+10575846)*1+lsi)*1]), &(inteval->stack[((hsi*264600+7124400)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9958806)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+186120)*1+lsi)*1]), &(inteval->stack[((hsi*305760+10575846)*1+lsi)*1]), &(inteval->stack[((hsi*262080+6699120)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+7389000)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+7457400)*1+lsi)*1]), &(inteval->stack[((hsi*68400+7389000)*1+lsi)*1]), &(inteval->stack[((hsi*61560+10188126)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+10881606)*1+lsi)*1]), &(inteval->stack[((hsi*123120+7457400)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10249686)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+9814806)*1+lsi)*1]), &(inteval->stack[((hsi*183600+10881606)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6961200)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+7580520)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9814806)*1+lsi)*1]), &(inteval->stack[((hsi*216000+10359846)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+10059606)*1+lsi)*1]), &(inteval->stack[((hsi*302400+7580520)*1+lsi)*1]), &(inteval->stack[((hsi*264600+7124400)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+6961200)*1+lsi)*1]), &(inteval->stack[((hsi*352800+10059606)*1+lsi)*1]), &(inteval->stack[((hsi*305760+10575846)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+10412406)*1+lsi)*1]), &(inteval->stack[((hsi*393120+6961200)*1+lsi)*1]), &(inteval->stack[((hsi*336960+186120)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+9193086)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]), &(inteval->stack[((hsi*7920+178200)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+9216846)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*23760+9193086)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+11065206)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8571606)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9216846)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+9193086)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8731086)*1+lsi)*1]), &(inteval->stack[((hsi*79200+11065206)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9052686)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9193086)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+8677086)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9618246)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8510766)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+8898846)*1+lsi)*1]), &(inteval->stack[((hsi*262080+6699120)*1+lsi)*1]), &(inteval->stack[((hsi*221760+8677086)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+9183966)*1+lsi)*1]), &(inteval->stack[((hsi*336960+186120)*1+lsi)*1]), &(inteval->stack[((hsi*285120+8898846)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+52920)*1+lsi)*1]), &(inteval->stack[((hsi*421200+10412406)*1+lsi)*1]), &(inteval->stack[((hsi*356400+9183966)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+8586366)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*68400+7389000)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+8723166)*1+lsi)*1]), &(inteval->stack[((hsi*136800+8586366)*1+lsi)*1]), &(inteval->stack[((hsi*123120+7457400)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+8928366)*1+lsi)*1]), &(inteval->stack[((hsi*205200+8723166)*1+lsi)*1]), &(inteval->stack[((hsi*183600+10881606)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+10833606)*1+lsi)*1]), &(inteval->stack[((hsi*275400+8928366)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9814806)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*342720+10833606)*1+lsi)*1]), &(inteval->stack[((hsi*302400+7580520)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+8913966)*1+lsi)*1]), &(inteval->stack[((hsi*403200+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*352800+10059606)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+9367566)*1+lsi)*1]), &(inteval->stack[((hsi*453600+8913966)*1+lsi)*1]), &(inteval->stack[((hsi*393120+6961200)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*491400+9367566)*1+lsi)*1]), &(inteval->stack[((hsi*421200+10412406)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*514800+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*435600+52920)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+9033486)*1+lsi)*1]), &(inteval->stack[((hsi*522720+8510766)*1+lsi)*1]), &(inteval->stack[((hsi*457380+8053386)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+9033486)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+15871380)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+25567836)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+17060568)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+25567836)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+19099176)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+15567486)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+6357120)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+21974136)*1+lsi)*1]),4356);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*5488560+868560)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+15567486)*1+lsi)*1]), &(inteval->stack[((hsi*4116420+11451066)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5488560+868560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
