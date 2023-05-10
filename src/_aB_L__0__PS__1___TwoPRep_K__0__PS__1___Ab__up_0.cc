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
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
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
#include <_aB_L__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1079496)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*5005+996776)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1001781)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+8149086)*1+lsi)*1]), &(inteval->stack[((hsi*5775+991001)*1+lsi)*1]), &(inteval->stack[((hsi*5005+996776)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+8164101)*1+lsi)*1]), &(inteval->stack[((hsi*15015+8149086)*1+lsi)*1]), &(inteval->stack[((hsi*12870+8136216)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+8189841)*1+lsi)*1]), &(inteval->stack[((hsi*6600+984401)*1+lsi)*1]), &(inteval->stack[((hsi*5775+991001)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+8207166)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8189841)*1+lsi)*1]), &(inteval->stack[((hsi*15015+8149086)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+8237196)*1+lsi)*1]), &(inteval->stack[((hsi*30030+8207166)*1+lsi)*1]), &(inteval->stack[((hsi*25740+8164101)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+8280096)*1+lsi)*1]), &(inteval->stack[((hsi*7480+976921)*1+lsi)*1]), &(inteval->stack[((hsi*6600+984401)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+8299896)*1+lsi)*1]), &(inteval->stack[((hsi*19800+8280096)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8189841)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+8334546)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8299896)*1+lsi)*1]), &(inteval->stack[((hsi*30030+8207166)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+8384596)*1+lsi)*1]), &(inteval->stack[((hsi*50050+8334546)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8237196)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+8189841)*1+lsi)*1]), &(inteval->stack[((hsi*8415+968506)*1+lsi)*1]), &(inteval->stack[((hsi*7480+976921)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+8448946)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8189841)*1+lsi)*1]), &(inteval->stack[((hsi*19800+8280096)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+8488546)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8448946)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8299896)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+8546296)*1+lsi)*1]), &(inteval->stack[((hsi*57750+8488546)*1+lsi)*1]), &(inteval->stack[((hsi*50050+8334546)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+8280096)*1+lsi)*1]), &(inteval->stack[((hsi*75075+8546296)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8384596)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+8621371)*1+lsi)*1]), &(inteval->stack[((hsi*9405+959101)*1+lsi)*1]), &(inteval->stack[((hsi*8415+968506)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+8646616)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8621371)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8189841)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+8691496)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8646616)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8448946)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+8757496)*1+lsi)*1]), &(inteval->stack[((hsi*66000+8691496)*1+lsi)*1]), &(inteval->stack[((hsi*57750+8488546)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+8844121)*1+lsi)*1]), &(inteval->stack[((hsi*86625+8757496)*1+lsi)*1]), &(inteval->stack[((hsi*75075+8546296)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+8448946)*1+lsi)*1]), &(inteval->stack[((hsi*105105+8844121)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8280096)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+8569066)*1+lsi)*1]), &(inteval->stack[((hsi*10450+948651)*1+lsi)*1]), &(inteval->stack[((hsi*9405+959101)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+8949226)*1+lsi)*1]), &(inteval->stack[((hsi*28215+8569066)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8621371)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+8999716)*1+lsi)*1]), &(inteval->stack[((hsi*50490+8949226)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8646616)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+9074516)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8999716)*1+lsi)*1]), &(inteval->stack[((hsi*66000+8691496)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+8597281)*1+lsi)*1]), &(inteval->stack[((hsi*99000+9074516)*1+lsi)*1]), &(inteval->stack[((hsi*86625+8757496)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+9173516)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8597281)*1+lsi)*1]), &(inteval->stack[((hsi*105105+8844121)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+8718556)*1+lsi)*1]), &(inteval->stack[((hsi*140140+9173516)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8448946)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+8872996)*1+lsi)*1]), &(inteval->stack[((hsi*11550+937101)*1+lsi)*1]), &(inteval->stack[((hsi*10450+948651)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+9313656)*1+lsi)*1]), &(inteval->stack[((hsi*31350+8872996)*1+lsi)*1]), &(inteval->stack[((hsi*28215+8569066)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+9370086)*1+lsi)*1]), &(inteval->stack[((hsi*56430+9313656)*1+lsi)*1]), &(inteval->stack[((hsi*50490+8949226)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+9454236)*1+lsi)*1]), &(inteval->stack[((hsi*84150+9370086)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8999716)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+8904346)*1+lsi)*1]), &(inteval->stack[((hsi*112200+9454236)*1+lsi)*1]), &(inteval->stack[((hsi*99000+9074516)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+9566436)*1+lsi)*1]), &(inteval->stack[((hsi*138600+8904346)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8597281)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+9728136)*1+lsi)*1]), &(inteval->stack[((hsi*161700+9566436)*1+lsi)*1]), &(inteval->stack[((hsi*140140+9173516)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+9042946)*1+lsi)*1]), &(inteval->stack[((hsi*180180+9728136)*1+lsi)*1]), &(inteval->stack[((hsi*154440+8718556)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+8569066)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1001781)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1006071)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+8579956)*1+lsi)*1]), &(inteval->stack[((hsi*12870+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*10890+8569066)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+8601736)*1+lsi)*1]), &(inteval->stack[((hsi*25740+8164101)*1+lsi)*1]), &(inteval->stack[((hsi*21780+8579956)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8237196)*1+lsi)*1]), &(inteval->stack[((hsi*36300+8601736)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+8569066)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8384596)*1+lsi)*1]), &(inteval->stack[((hsi*54450+8136216)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8280096)*1+lsi)*1]), &(inteval->stack[((hsi*76230+8569066)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+8237856)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8448946)*1+lsi)*1]), &(inteval->stack[((hsi*101640+8136216)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+8368536)*1+lsi)*1]), &(inteval->stack[((hsi*154440+8718556)*1+lsi)*1]), &(inteval->stack[((hsi*130680+8237856)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+8531886)*1+lsi)*1]), &(inteval->stack[((hsi*193050+9042946)*1+lsi)*1]), &(inteval->stack[((hsi*163350+8368536)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*12705+924396)*1+lsi)*1]), &(inteval->stack[((hsi*11550+937101)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+8170866)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*31350+8872996)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+8233566)*1+lsi)*1]), &(inteval->stack[((hsi*62700+8170866)*1+lsi)*1]), &(inteval->stack[((hsi*56430+9313656)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+8327616)*1+lsi)*1]), &(inteval->stack[((hsi*94050+8233566)*1+lsi)*1]), &(inteval->stack[((hsi*84150+9370086)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+9235996)*1+lsi)*1]), &(inteval->stack[((hsi*126225+8327616)*1+lsi)*1]), &(inteval->stack[((hsi*112200+9454236)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*157080+9235996)*1+lsi)*1]), &(inteval->stack[((hsi*138600+8904346)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+9235996)*1+lsi)*1]), &(inteval->stack[((hsi*184800+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*161700+9566436)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*207900+9235996)*1+lsi)*1]), &(inteval->stack[((hsi*180180+9728136)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+8731536)*1+lsi)*1]), &(inteval->stack[((hsi*225225+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*193050+9042946)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*235950+8731536)*1+lsi)*1]), &(inteval->stack[((hsi*199650+8531886)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+924396)*1+lsi)*1]), &(inteval->stack[((hsi*6006+908886)*1+lsi)*1]), &(inteval->stack[((hsi*5148+914892)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+939840)*1+lsi)*1]), &(inteval->stack[((hsi*6930+901956)*1+lsi)*1]), &(inteval->stack[((hsi*6006+908886)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+957858)*1+lsi)*1]), &(inteval->stack[((hsi*18018+939840)*1+lsi)*1]), &(inteval->stack[((hsi*15444+924396)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+988746)*1+lsi)*1]), &(inteval->stack[((hsi*7920+894036)*1+lsi)*1]), &(inteval->stack[((hsi*6930+901956)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*20790+988746)*1+lsi)*1]), &(inteval->stack[((hsi*18018+939840)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+8411832)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*30888+957858)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+8463312)*1+lsi)*1]), &(inteval->stack[((hsi*8976+885060)*1+lsi)*1]), &(inteval->stack[((hsi*7920+894036)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+8487072)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8463312)*1+lsi)*1]), &(inteval->stack[((hsi*20790+988746)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+8528652)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8487072)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8375796)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+8588712)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8528652)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8411832)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*10098+874962)*1+lsi)*1]), &(inteval->stack[((hsi*8976+885060)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+8665932)*1+lsi)*1]), &(inteval->stack[((hsi*26928+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8463312)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+8713452)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8665932)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8487072)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+8782752)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8713452)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8528652)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+8463312)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8782752)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8588712)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+8872842)*1+lsi)*1]), &(inteval->stack[((hsi*11286+863676)*1+lsi)*1]), &(inteval->stack[((hsi*10098+874962)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+8903136)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8872842)*1+lsi)*1]), &(inteval->stack[((hsi*26928+8375796)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+8956992)*1+lsi)*1]), &(inteval->stack[((hsi*53856+8903136)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8665932)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+9036192)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8956992)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8713452)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+9140142)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9036192)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8782752)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+8665932)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9140142)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8463312)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+8810076)*1+lsi)*1]), &(inteval->stack[((hsi*12540+851136)*1+lsi)*1]), &(inteval->stack[((hsi*11286+863676)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+9266268)*1+lsi)*1]), &(inteval->stack[((hsi*33858+8810076)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8872842)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+9326856)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9266268)*1+lsi)*1]), &(inteval->stack[((hsi*53856+8903136)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+9416616)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9326856)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8956992)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+8843934)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9416616)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9036192)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+9535416)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8843934)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9140142)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+8989464)*1+lsi)*1]), &(inteval->stack[((hsi*168168+9535416)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8665932)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+9174792)*1+lsi)*1]), &(inteval->stack[((hsi*13860+837276)*1+lsi)*1]), &(inteval->stack[((hsi*12540+851136)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+9703584)*1+lsi)*1]), &(inteval->stack[((hsi*37620+9174792)*1+lsi)*1]), &(inteval->stack[((hsi*33858+8810076)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+9771300)*1+lsi)*1]), &(inteval->stack[((hsi*67716+9703584)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9266268)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+9872280)*1+lsi)*1]), &(inteval->stack[((hsi*100980+9771300)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9326856)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+9212412)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9872280)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9416616)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+10006920)*1+lsi)*1]), &(inteval->stack[((hsi*166320+9212412)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8843934)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+10200960)*1+lsi)*1]), &(inteval->stack[((hsi*194040+10006920)*1+lsi)*1]), &(inteval->stack[((hsi*168168+9535416)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+9378732)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10200960)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8989464)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+8810076)*1+lsi)*1]), &(inteval->stack[((hsi*5148+914892)*1+lsi)*1]), &(inteval->stack[((hsi*4356+920040)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+8823144)*1+lsi)*1]), &(inteval->stack[((hsi*15444+924396)*1+lsi)*1]), &(inteval->stack[((hsi*13068+8810076)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+8849280)*1+lsi)*1]), &(inteval->stack[((hsi*30888+957858)*1+lsi)*1]), &(inteval->stack[((hsi*26136+8823144)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+851136)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8411832)*1+lsi)*1]), &(inteval->stack[((hsi*43560+8849280)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+8810076)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8588712)*1+lsi)*1]), &(inteval->stack[((hsi*65340+851136)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+851136)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8463312)*1+lsi)*1]), &(inteval->stack[((hsi*91476+8810076)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8665932)*1+lsi)*1]), &(inteval->stack[((hsi*121968+851136)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+8532612)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8989464)*1+lsi)*1]), &(inteval->stack[((hsi*156816+8375796)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+8728632)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9378732)*1+lsi)*1]), &(inteval->stack[((hsi*196020+8532612)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*15246+822030)*1+lsi)*1]), &(inteval->stack[((hsi*13860+837276)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+8417376)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*37620+9174792)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+8968212)*1+lsi)*1]), &(inteval->stack[((hsi*75240+8417376)*1+lsi)*1]), &(inteval->stack[((hsi*67716+9703584)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*112860+8968212)*1+lsi)*1]), &(inteval->stack[((hsi*100980+9771300)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+9610392)*1+lsi)*1]), &(inteval->stack[((hsi*151470+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9872280)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*188496+9610392)*1+lsi)*1]), &(inteval->stack[((hsi*166320+9212412)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+8968212)*1+lsi)*1]), &(inteval->stack[((hsi*221760+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*194040+10006920)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+9610392)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8968212)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10200960)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+8968212)*1+lsi)*1]), &(inteval->stack[((hsi*270270+9610392)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9378732)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*283140+8968212)*1+lsi)*1]), &(inteval->stack[((hsi*239580+8728632)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+8663292)*1+lsi)*1]), &(inteval->stack[((hsi*287496+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*239580+8136216)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+822030)*1+lsi)*1]), &(inteval->stack[((hsi*7098+803700)*1+lsi)*1]), &(inteval->stack[((hsi*6084+810798)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+840282)*1+lsi)*1]), &(inteval->stack[((hsi*8190+795510)*1+lsi)*1]), &(inteval->stack[((hsi*7098+803700)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+861576)*1+lsi)*1]), &(inteval->stack[((hsi*21294+840282)*1+lsi)*1]), &(inteval->stack[((hsi*18252+822030)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+898080)*1+lsi)*1]), &(inteval->stack[((hsi*9360+786150)*1+lsi)*1]), &(inteval->stack[((hsi*8190+795510)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+922650)*1+lsi)*1]), &(inteval->stack[((hsi*24570+898080)*1+lsi)*1]), &(inteval->stack[((hsi*21294+840282)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*42588+922650)*1+lsi)*1]), &(inteval->stack[((hsi*36504+861576)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+965238)*1+lsi)*1]), &(inteval->stack[((hsi*10608+775542)*1+lsi)*1]), &(inteval->stack[((hsi*9360+786150)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+9442872)*1+lsi)*1]), &(inteval->stack[((hsi*28080+965238)*1+lsi)*1]), &(inteval->stack[((hsi*24570+898080)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+9492012)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9442872)*1+lsi)*1]), &(inteval->stack[((hsi*42588+922650)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+9562992)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9492012)*1+lsi)*1]), &(inteval->stack[((hsi*60840+9382032)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+898080)*1+lsi)*1]), &(inteval->stack[((hsi*11934+763608)*1+lsi)*1]), &(inteval->stack[((hsi*10608+775542)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+9654252)*1+lsi)*1]), &(inteval->stack[((hsi*31824+898080)*1+lsi)*1]), &(inteval->stack[((hsi*28080+965238)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+9710412)*1+lsi)*1]), &(inteval->stack[((hsi*56160+9654252)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9442872)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+9792312)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9710412)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9492012)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+9898782)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9792312)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9562992)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+9442872)*1+lsi)*1]), &(inteval->stack[((hsi*13338+750270)*1+lsi)*1]), &(inteval->stack[((hsi*11934+763608)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+9478674)*1+lsi)*1]), &(inteval->stack[((hsi*35802+9442872)*1+lsi)*1]), &(inteval->stack[((hsi*31824+898080)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+898080)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9478674)*1+lsi)*1]), &(inteval->stack[((hsi*56160+9654252)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+10026546)*1+lsi)*1]), &(inteval->stack[((hsi*93600+898080)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9710412)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+10149396)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10026546)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9792312)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+9654252)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10149396)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9898782)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+9824604)*1+lsi)*1]), &(inteval->stack[((hsi*14820+735450)*1+lsi)*1]), &(inteval->stack[((hsi*13338+750270)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+10298454)*1+lsi)*1]), &(inteval->stack[((hsi*40014+9824604)*1+lsi)*1]), &(inteval->stack[((hsi*35802+9442872)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+10370058)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10298454)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9478674)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+10476138)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10370058)*1+lsi)*1]), &(inteval->stack[((hsi*93600+898080)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+10616538)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10476138)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10026546)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+10788528)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10616538)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10149396)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+10026546)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10788528)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9654252)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+9442872)*1+lsi)*1]), &(inteval->stack[((hsi*16380+719070)*1+lsi)*1]), &(inteval->stack[((hsi*14820+735450)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+898080)*1+lsi)*1]), &(inteval->stack[((hsi*44460+9442872)*1+lsi)*1]), &(inteval->stack[((hsi*40014+9824604)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+10987272)*1+lsi)*1]), &(inteval->stack[((hsi*80028+898080)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10298454)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+11106612)*1+lsi)*1]), &(inteval->stack[((hsi*119340+10987272)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10370058)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+10245570)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11106612)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10476138)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+11265732)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10245570)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10616538)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+10442130)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11265732)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10788528)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+10697658)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10442130)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10026546)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+9487332)*1+lsi)*1]), &(inteval->stack[((hsi*6084+810798)*1+lsi)*1]), &(inteval->stack[((hsi*5148+816882)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+735450)*1+lsi)*1]), &(inteval->stack[((hsi*18252+822030)*1+lsi)*1]), &(inteval->stack[((hsi*15444+9487332)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+766338)*1+lsi)*1]), &(inteval->stack[((hsi*36504+861576)*1+lsi)*1]), &(inteval->stack[((hsi*30888+735450)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+817818)*1+lsi)*1]), &(inteval->stack[((hsi*60840+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*51480+766338)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+11495052)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9562992)*1+lsi)*1]), &(inteval->stack[((hsi*77220+817818)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+9487332)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9898782)*1+lsi)*1]), &(inteval->stack[((hsi*108108+11495052)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+9824604)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9654252)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9487332)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+9487332)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10026546)*1+lsi)*1]), &(inteval->stack[((hsi*185328+9824604)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+9718992)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10697658)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9487332)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*18018+701052)*1+lsi)*1]), &(inteval->stack[((hsi*16380+719070)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+9487332)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*44460+9442872)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*88920+9487332)*1+lsi)*1]), &(inteval->stack[((hsi*80028+898080)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*133380+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*119340+10987272)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+701052)*1+lsi)*1]), &(inteval->stack[((hsi*179010+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11106612)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*222768+701052)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10245570)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11265732)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10442130)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10697658)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+10336752)*1+lsi)*1]), &(inteval->stack[((hsi*334620+10002132)*1+lsi)*1]), &(inteval->stack[((hsi*283140+9718992)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*339768+10336752)*1+lsi)*1]), &(inteval->stack[((hsi*287496+8375796)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+10676520)*1+lsi)*1]), &(inteval->stack[((hsi*862488+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*718740+8663292)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]), &(inteval->stack[((hsi*8281+679667)*1+lsi)*1]), &(inteval->stack[((hsi*7098+687948)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*9555+670112)*1+lsi)*1]), &(inteval->stack[((hsi*8281+679667)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+722346)*1+lsi)*1]), &(inteval->stack[((hsi*24843+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+8400639)*1+lsi)*1]), &(inteval->stack[((hsi*10920+659192)*1+lsi)*1]), &(inteval->stack[((hsi*9555+670112)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+764934)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8400639)*1+lsi)*1]), &(inteval->stack[((hsi*24843+8375796)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+8429304)*1+lsi)*1]), &(inteval->stack[((hsi*49686+764934)*1+lsi)*1]), &(inteval->stack[((hsi*42588+722346)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+814620)*1+lsi)*1]), &(inteval->stack[((hsi*12376+646816)*1+lsi)*1]), &(inteval->stack[((hsi*10920+659192)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+8500284)*1+lsi)*1]), &(inteval->stack[((hsi*32760+814620)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8400639)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+847380)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8500284)*1+lsi)*1]), &(inteval->stack[((hsi*49686+764934)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*82810+847380)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8429304)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+8557614)*1+lsi)*1]), &(inteval->stack[((hsi*13923+632893)*1+lsi)*1]), &(inteval->stack[((hsi*12376+646816)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+10244520)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8557614)*1+lsi)*1]), &(inteval->stack[((hsi*32760+814620)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+12220470)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10244520)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8500284)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+12316020)*1+lsi)*1]), &(inteval->stack[((hsi*95550+12220470)*1+lsi)*1]), &(inteval->stack[((hsi*82810+847380)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+764934)*1+lsi)*1]), &(inteval->stack[((hsi*124215+12316020)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12114000)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+913992)*1+lsi)*1]), &(inteval->stack[((hsi*15561+617332)*1+lsi)*1]), &(inteval->stack[((hsi*13923+632893)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+12440235)*1+lsi)*1]), &(inteval->stack[((hsi*41769+913992)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8557614)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+8500284)*1+lsi)*1]), &(inteval->stack[((hsi*74256+12440235)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10244520)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+12514491)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8500284)*1+lsi)*1]), &(inteval->stack[((hsi*95550+12220470)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+12657816)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12514491)*1+lsi)*1]), &(inteval->stack[((hsi*124215+12316020)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+12220470)*1+lsi)*1]), &(inteval->stack[((hsi*173901+12657816)*1+lsi)*1]), &(inteval->stack[((hsi*149058+764934)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+10244520)*1+lsi)*1]), &(inteval->stack[((hsi*17290+600042)*1+lsi)*1]), &(inteval->stack[((hsi*15561+617332)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+12831717)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10244520)*1+lsi)*1]), &(inteval->stack[((hsi*41769+913992)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+12915255)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12831717)*1+lsi)*1]), &(inteval->stack[((hsi*74256+12440235)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+13039015)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12915255)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8500284)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+13202815)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13039015)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12514491)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+12419214)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13202815)*1+lsi)*1]), &(inteval->stack[((hsi*173901+12657816)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+13403470)*1+lsi)*1]), &(inteval->stack[((hsi*231868+12419214)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12220470)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+12651082)*1+lsi)*1]), &(inteval->stack[((hsi*19110+580932)*1+lsi)*1]), &(inteval->stack[((hsi*17290+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+8500284)*1+lsi)*1]), &(inteval->stack[((hsi*51870+12651082)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10244520)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+13658998)*1+lsi)*1]), &(inteval->stack[((hsi*93366+8500284)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12831717)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+12702952)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13658998)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12915255)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+13798228)*1+lsi)*1]), &(inteval->stack[((hsi*185640+12702952)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13039015)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+12888592)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13798228)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13202815)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+14027548)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12888592)*1+lsi)*1]), &(inteval->stack[((hsi*231868+12419214)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+14325664)*1+lsi)*1]), &(inteval->stack[((hsi*298116+14027548)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13403470)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+13156132)*1+lsi)*1]), &(inteval->stack[((hsi*7098+687948)*1+lsi)*1]), &(inteval->stack[((hsi*6006+695046)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+12419214)*1+lsi)*1]), &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]), &(inteval->stack[((hsi*18018+13156132)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+13156132)*1+lsi)*1]), &(inteval->stack[((hsi*42588+722346)*1+lsi)*1]), &(inteval->stack[((hsi*36036+12419214)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+12419214)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8429304)*1+lsi)*1]), &(inteval->stack[((hsi*60060+13156132)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+13156132)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*90090+12419214)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+12419214)*1+lsi)*1]), &(inteval->stack[((hsi*149058+764934)*1+lsi)*1]), &(inteval->stack[((hsi*126126+13156132)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+600042)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12220470)*1+lsi)*1]), &(inteval->stack[((hsi*168168+12419214)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13403470)*1+lsi)*1]), &(inteval->stack[((hsi*216216+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+13156132)*1+lsi)*1]), &(inteval->stack[((hsi*319410+14325664)*1+lsi)*1]), &(inteval->stack[((hsi*270270+12114000)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*21021+559911)*1+lsi)*1]), &(inteval->stack[((hsi*19110+580932)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+12171330)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*51870+12651082)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+559911)*1+lsi)*1]), &(inteval->stack[((hsi*103740+12171330)*1+lsi)*1]), &(inteval->stack[((hsi*93366+8500284)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*155610+559911)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13658998)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+559911)*1+lsi)*1]), &(inteval->stack[((hsi*208845+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*185640+12702952)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*259896+559911)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13798228)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+13486462)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12888592)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*343980+13486462)*1+lsi)*1]), &(inteval->stack[((hsi*298116+14027548)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+13486462)*1+lsi)*1]), &(inteval->stack[((hsi*372645+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*319410+14325664)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*390390+13486462)*1+lsi)*1]), &(inteval->stack[((hsi*330330+13156132)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+12510396)*1+lsi)*1]), &(inteval->stack[((hsi*396396+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*339768+10336752)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+13529700)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+12510396)*1+lsi)*1]), &(inteval->stack[((hsi*862488+9382032)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+15254676)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+13529700)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+10676520)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*9555+535236)*1+lsi)*1]), &(inteval->stack[((hsi*8190+544791)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+9406602)*1+lsi)*1]), &(inteval->stack[((hsi*11025+524211)*1+lsi)*1]), &(inteval->stack[((hsi*9555+535236)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+9435267)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9406602)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9382032)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+9484407)*1+lsi)*1]), &(inteval->stack[((hsi*12600+511611)*1+lsi)*1]), &(inteval->stack[((hsi*11025+524211)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+9517482)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9484407)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9406602)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+9574812)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9517482)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9435267)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+9656712)*1+lsi)*1]), &(inteval->stack[((hsi*14280+497331)*1+lsi)*1]), &(inteval->stack[((hsi*12600+511611)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+9694512)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9656712)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9484407)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+9760662)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9694512)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9517482)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+9856212)*1+lsi)*1]), &(inteval->stack[((hsi*95550+9760662)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9574812)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+9979062)*1+lsi)*1]), &(inteval->stack[((hsi*16065+481266)*1+lsi)*1]), &(inteval->stack[((hsi*14280+497331)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+10021902)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9979062)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9656712)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+10097502)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10021902)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9694512)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+10207752)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10097502)*1+lsi)*1]), &(inteval->stack[((hsi*95550+9760662)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+559911)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10207752)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9856212)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+10351077)*1+lsi)*1]), &(inteval->stack[((hsi*17955+463311)*1+lsi)*1]), &(inteval->stack[((hsi*16065+481266)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10351077)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9979062)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+731901)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8375796)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10021902)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+10399272)*1+lsi)*1]), &(inteval->stack[((hsi*126000+731901)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10097502)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+9979062)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10399272)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10207752)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+17650476)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9979062)*1+lsi)*1]), &(inteval->stack[((hsi*171990+559911)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+8461476)*1+lsi)*1]), &(inteval->stack[((hsi*19950+443361)*1+lsi)*1]), &(inteval->stack[((hsi*17955+463311)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+9656712)*1+lsi)*1]), &(inteval->stack[((hsi*53865+8461476)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10351077)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+10179717)*1+lsi)*1]), &(inteval->stack[((hsi*96390+9656712)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8375796)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+17879796)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10179717)*1+lsi)*1]), &(inteval->stack[((hsi*126000+731901)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+731901)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17879796)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10399272)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+10322517)*1+lsi)*1]), &(inteval->stack[((hsi*231525+731901)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9979062)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+18068796)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10322517)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17650476)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+9979062)*1+lsi)*1]), &(inteval->stack[((hsi*22050+421311)*1+lsi)*1]), &(inteval->stack[((hsi*19950+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+8515341)*1+lsi)*1]), &(inteval->stack[((hsi*59850+9979062)*1+lsi)*1]), &(inteval->stack[((hsi*53865+8461476)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+18363636)*1+lsi)*1]), &(inteval->stack[((hsi*107730+8515341)*1+lsi)*1]), &(inteval->stack[((hsi*96390+9656712)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+18524286)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18363636)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10179717)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+10038912)*1+lsi)*1]), &(inteval->stack[((hsi*214200+18524286)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17879796)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+18738486)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10038912)*1+lsi)*1]), &(inteval->stack[((hsi*231525+731901)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+19047186)*1+lsi)*1]), &(inteval->stack[((hsi*308700+18738486)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10322517)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+10303512)*1+lsi)*1]), &(inteval->stack[((hsi*343980+19047186)*1+lsi)*1]), &(inteval->stack[((hsi*294840+18068796)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+731901)*1+lsi)*1]), &(inteval->stack[((hsi*8190+544791)*1+lsi)*1]), &(inteval->stack[((hsi*6930+552981)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+752691)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*20790+731901)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+794271)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9435267)*1+lsi)*1]), &(inteval->stack[((hsi*41580+752691)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+9656712)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9574812)*1+lsi)*1]), &(inteval->stack[((hsi*69300+794271)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+731901)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9856212)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9656712)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*171990+559911)*1+lsi)*1]), &(inteval->stack[((hsi*145530+731901)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+443361)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17650476)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9382032)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*294840+18068796)*1+lsi)*1]), &(inteval->stack[((hsi*249480+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+17650476)*1+lsi)*1]), &(inteval->stack[((hsi*368550+10303512)*1+lsi)*1]), &(inteval->stack[((hsi*311850+9382032)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*24255+397056)*1+lsi)*1]), &(inteval->stack[((hsi*22050+421311)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+397056)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*59850+9979062)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*119700+397056)*1+lsi)*1]), &(inteval->stack[((hsi*107730+8515341)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+397056)*1+lsi)*1]), &(inteval->stack[((hsi*179550+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18363636)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*240975+397056)*1+lsi)*1]), &(inteval->stack[((hsi*214200+18524286)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+18031626)*1+lsi)*1]), &(inteval->stack[((hsi*299880+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10038912)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*352800+18031626)*1+lsi)*1]), &(inteval->stack[((hsi*308700+18738486)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+18031626)*1+lsi)*1]), &(inteval->stack[((hsi*396900+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*343980+19047186)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*429975+18031626)*1+lsi)*1]), &(inteval->stack[((hsi*368550+10303512)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+9832482)*1+lsi)*1]), &(inteval->stack[((hsi*450450+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*381150+17650476)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+17650476)*1+lsi)*1]), &(inteval->stack[((hsi*457380+9832482)*1+lsi)*1]), &(inteval->stack[((hsi*396396+12114000)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+18839664)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+17650476)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+12510396)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+20878272)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+18839664)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+13529700)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+23753232)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+20878272)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+15254676)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*10920+368856)*1+lsi)*1]), &(inteval->stack[((hsi*9360+379776)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+12142080)*1+lsi)*1]), &(inteval->stack[((hsi*12600+356256)*1+lsi)*1]), &(inteval->stack[((hsi*10920+368856)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+12174840)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12142080)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12114000)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+12231000)*1+lsi)*1]), &(inteval->stack[((hsi*14400+341856)*1+lsi)*1]), &(inteval->stack[((hsi*12600+356256)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+12268800)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12231000)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12142080)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+12334320)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12268800)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12174840)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+12427920)*1+lsi)*1]), &(inteval->stack[((hsi*16320+325536)*1+lsi)*1]), &(inteval->stack[((hsi*14400+341856)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+12471120)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12427920)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12231000)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+12546720)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12471120)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12268800)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+12655920)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12546720)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12334320)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+12796320)*1+lsi)*1]), &(inteval->stack[((hsi*18360+307176)*1+lsi)*1]), &(inteval->stack[((hsi*16320+325536)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+12845280)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12796320)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12427920)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+12931680)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12845280)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12471120)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+13057680)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12931680)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12546720)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+13221480)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13057680)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12655920)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+13418040)*1+lsi)*1]), &(inteval->stack[((hsi*20520+286656)*1+lsi)*1]), &(inteval->stack[((hsi*18360+307176)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+13473120)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13418040)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12796320)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+13571040)*1+lsi)*1]), &(inteval->stack[((hsi*97920+13473120)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12845280)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+13715040)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13571040)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12931680)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+13904040)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13715040)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13057680)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+14133360)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13904040)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13221480)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+14395440)*1+lsi)*1]), &(inteval->stack[((hsi*22800+263856)*1+lsi)*1]), &(inteval->stack[((hsi*20520+286656)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+14457000)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14395440)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13418040)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+14567160)*1+lsi)*1]), &(inteval->stack[((hsi*110160+14457000)*1+lsi)*1]), &(inteval->stack[((hsi*97920+13473120)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+397056)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14567160)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13571040)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+14730360)*1+lsi)*1]), &(inteval->stack[((hsi*216000+397056)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13715040)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+13418040)*1+lsi)*1]), &(inteval->stack[((hsi*264600+14730360)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13904040)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*305760+13418040)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14133360)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+12796320)*1+lsi)*1]), &(inteval->stack[((hsi*25200+238656)*1+lsi)*1]), &(inteval->stack[((hsi*22800+263856)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+13723800)*1+lsi)*1]), &(inteval->stack[((hsi*68400+12796320)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14395440)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+613056)*1+lsi)*1]), &(inteval->stack[((hsi*123120+13723800)*1+lsi)*1]), &(inteval->stack[((hsi*110160+14457000)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+10289862)*1+lsi)*1]), &(inteval->stack[((hsi*183600+613056)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14567160)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+12864720)*1+lsi)*1]), &(inteval->stack[((hsi*244800+10289862)*1+lsi)*1]), &(inteval->stack[((hsi*216000+397056)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+27346932)*1+lsi)*1]), &(inteval->stack[((hsi*302400+12864720)*1+lsi)*1]), &(inteval->stack[((hsi*264600+14730360)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+14395440)*1+lsi)*1]), &(inteval->stack[((hsi*352800+27346932)*1+lsi)*1]), &(inteval->stack[((hsi*305760+13418040)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+14788560)*1+lsi)*1]), &(inteval->stack[((hsi*393120+14395440)*1+lsi)*1]), &(inteval->stack[((hsi*336960+9382032)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+13418040)*1+lsi)*1]), &(inteval->stack[((hsi*9360+379776)*1+lsi)*1]), &(inteval->stack[((hsi*7920+389136)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+263856)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*23760+13418040)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+13418040)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12174840)*1+lsi)*1]), &(inteval->stack[((hsi*47520+263856)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+263856)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12334320)*1+lsi)*1]), &(inteval->stack[((hsi*79200+13418040)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12655920)*1+lsi)*1]), &(inteval->stack[((hsi*118800+263856)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+12280320)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13221480)*1+lsi)*1]), &(inteval->stack[((hsi*166320+12114000)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+13167120)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14133360)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12280320)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*336960+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*285120+13167120)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+13167120)*1+lsi)*1]), &(inteval->stack[((hsi*421200+14788560)*1+lsi)*1]), &(inteval->stack[((hsi*356400+12114000)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*27720+210936)*1+lsi)*1]), &(inteval->stack[((hsi*25200+238656)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+12189600)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*68400+12796320)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+13846920)*1+lsi)*1]), &(inteval->stack[((hsi*136800+12189600)*1+lsi)*1]), &(inteval->stack[((hsi*123120+13723800)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*205200+13846920)*1+lsi)*1]), &(inteval->stack[((hsi*183600+613056)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+210936)*1+lsi)*1]), &(inteval->stack[((hsi*275400+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*244800+10289862)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+13602720)*1+lsi)*1]), &(inteval->stack[((hsi*342720+210936)*1+lsi)*1]), &(inteval->stack[((hsi*302400+12864720)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*403200+13602720)*1+lsi)*1]), &(inteval->stack[((hsi*352800+27346932)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+210936)*1+lsi)*1]), &(inteval->stack[((hsi*453600+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*393120+14395440)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+13602720)*1+lsi)*1]), &(inteval->stack[((hsi*491400+210936)*1+lsi)*1]), &(inteval->stack[((hsi*421200+14788560)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+14117520)*1+lsi)*1]), &(inteval->stack[((hsi*514800+13602720)*1+lsi)*1]), &(inteval->stack[((hsi*435600+13167120)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*522720+14117520)*1+lsi)*1]), &(inteval->stack[((hsi*457380+9832482)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+27346932)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+12114000)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+17650476)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+29725308)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+27346932)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+18839664)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+33122988)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+29725308)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+20878272)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+17650476)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+33122988)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+23753232)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*4095+1068921)*1+lsi)*1]), &(inteval->stack[((hsi*3510+1073016)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+9392562)*1+lsi)*1]), &(inteval->stack[((hsi*4725+1064196)*1+lsi)*1]), &(inteval->stack[((hsi*4095+1068921)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+9404847)*1+lsi)*1]), &(inteval->stack[((hsi*12285+9392562)*1+lsi)*1]), &(inteval->stack[((hsi*10530+9382032)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+9425907)*1+lsi)*1]), &(inteval->stack[((hsi*5400+1058796)*1+lsi)*1]), &(inteval->stack[((hsi*4725+1064196)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+9440082)*1+lsi)*1]), &(inteval->stack[((hsi*14175+9425907)*1+lsi)*1]), &(inteval->stack[((hsi*12285+9392562)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+9464652)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9440082)*1+lsi)*1]), &(inteval->stack[((hsi*21060+9404847)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+9499752)*1+lsi)*1]), &(inteval->stack[((hsi*6120+1052676)*1+lsi)*1]), &(inteval->stack[((hsi*5400+1058796)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+9515952)*1+lsi)*1]), &(inteval->stack[((hsi*16200+9499752)*1+lsi)*1]), &(inteval->stack[((hsi*14175+9425907)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+9544302)*1+lsi)*1]), &(inteval->stack[((hsi*28350+9515952)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9440082)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+9585252)*1+lsi)*1]), &(inteval->stack[((hsi*40950+9544302)*1+lsi)*1]), &(inteval->stack[((hsi*35100+9464652)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*6885+1045791)*1+lsi)*1]), &(inteval->stack[((hsi*6120+1052676)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+22700016)*1+lsi)*1]), &(inteval->stack[((hsi*18360+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*16200+9499752)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+9637902)*1+lsi)*1]), &(inteval->stack[((hsi*32400+22700016)*1+lsi)*1]), &(inteval->stack[((hsi*28350+9515952)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+22732416)*1+lsi)*1]), &(inteval->stack[((hsi*47250+9637902)*1+lsi)*1]), &(inteval->stack[((hsi*40950+9544302)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+9685152)*1+lsi)*1]), &(inteval->stack[((hsi*61425+22732416)*1+lsi)*1]), &(inteval->stack[((hsi*52650+9585252)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+22793841)*1+lsi)*1]), &(inteval->stack[((hsi*7695+1038096)*1+lsi)*1]), &(inteval->stack[((hsi*6885+1045791)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+22814496)*1+lsi)*1]), &(inteval->stack[((hsi*20655+22793841)*1+lsi)*1]), &(inteval->stack[((hsi*18360+22681656)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+9758862)*1+lsi)*1]), &(inteval->stack[((hsi*36720+22814496)*1+lsi)*1]), &(inteval->stack[((hsi*32400+22700016)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+22851216)*1+lsi)*1]), &(inteval->stack[((hsi*54000+9758862)*1+lsi)*1]), &(inteval->stack[((hsi*47250+9637902)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+9812862)*1+lsi)*1]), &(inteval->stack[((hsi*70875+22851216)*1+lsi)*1]), &(inteval->stack[((hsi*61425+22732416)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+22922091)*1+lsi)*1]), &(inteval->stack[((hsi*85995+9812862)*1+lsi)*1]), &(inteval->stack[((hsi*73710+9685152)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+210936)*1+lsi)*1]), &(inteval->stack[((hsi*8550+1029546)*1+lsi)*1]), &(inteval->stack[((hsi*7695+1038096)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+9898857)*1+lsi)*1]), &(inteval->stack[((hsi*23085+210936)*1+lsi)*1]), &(inteval->stack[((hsi*20655+22793841)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+234021)*1+lsi)*1]), &(inteval->stack[((hsi*41310+9898857)*1+lsi)*1]), &(inteval->stack[((hsi*36720+22814496)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+9940167)*1+lsi)*1]), &(inteval->stack[((hsi*61200+234021)*1+lsi)*1]), &(inteval->stack[((hsi*54000+9758862)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+23020371)*1+lsi)*1]), &(inteval->stack[((hsi*81000+9940167)*1+lsi)*1]), &(inteval->stack[((hsi*70875+22851216)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+295221)*1+lsi)*1]), &(inteval->stack[((hsi*99225+23020371)*1+lsi)*1]), &(inteval->stack[((hsi*85995+9812862)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+10021167)*1+lsi)*1]), &(inteval->stack[((hsi*114660+295221)*1+lsi)*1]), &(inteval->stack[((hsi*98280+22922091)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+23119596)*1+lsi)*1]), &(inteval->stack[((hsi*9450+1020096)*1+lsi)*1]), &(inteval->stack[((hsi*8550+1029546)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+13486140)*1+lsi)*1]), &(inteval->stack[((hsi*25650+23119596)*1+lsi)*1]), &(inteval->stack[((hsi*23085+210936)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+14640240)*1+lsi)*1]), &(inteval->stack[((hsi*46170+13486140)*1+lsi)*1]), &(inteval->stack[((hsi*41310+9898857)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+23145246)*1+lsi)*1]), &(inteval->stack[((hsi*68850+14640240)*1+lsi)*1]), &(inteval->stack[((hsi*61200+234021)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+409881)*1+lsi)*1]), &(inteval->stack[((hsi*91800+23145246)*1+lsi)*1]), &(inteval->stack[((hsi*81000+9940167)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+13532310)*1+lsi)*1]), &(inteval->stack[((hsi*113400+409881)*1+lsi)*1]), &(inteval->stack[((hsi*99225+23020371)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+14709090)*1+lsi)*1]), &(inteval->stack[((hsi*132300+13532310)*1+lsi)*1]), &(inteval->stack[((hsi*114660+295221)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+10147527)*1+lsi)*1]), &(inteval->stack[((hsi*147420+14709090)*1+lsi)*1]), &(inteval->stack[((hsi*126360+10021167)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*3510+1073016)*1+lsi)*1]), &(inteval->stack[((hsi*2970+1076526)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+23245956)*1+lsi)*1]), &(inteval->stack[((hsi*10530+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*8910+23237046)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+23263776)*1+lsi)*1]), &(inteval->stack[((hsi*21060+9404847)*1+lsi)*1]), &(inteval->stack[((hsi*17820+23245956)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+523281)*1+lsi)*1]), &(inteval->stack[((hsi*35100+9464652)*1+lsi)*1]), &(inteval->stack[((hsi*29700+23263776)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*52650+9585252)*1+lsi)*1]), &(inteval->stack[((hsi*44550+523281)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+523281)*1+lsi)*1]), &(inteval->stack[((hsi*73710+9685152)*1+lsi)*1]), &(inteval->stack[((hsi*62370+23237046)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*98280+22922091)*1+lsi)*1]), &(inteval->stack[((hsi*83160+523281)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+9488952)*1+lsi)*1]), &(inteval->stack[((hsi*126360+10021167)*1+lsi)*1]), &(inteval->stack[((hsi*106920+9382032)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+9622602)*1+lsi)*1]), &(inteval->stack[((hsi*157950+10147527)*1+lsi)*1]), &(inteval->stack[((hsi*133650+9488952)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*10395+1009701)*1+lsi)*1]), &(inteval->stack[((hsi*9450+1020096)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+523281)*1+lsi)*1]), &(inteval->stack[((hsi*28350+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*25650+23119596)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*51300+523281)*1+lsi)*1]), &(inteval->stack[((hsi*46170+13486140)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+523281)*1+lsi)*1]), &(inteval->stack[((hsi*76950+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*68850+14640240)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*103275+523281)*1+lsi)*1]), &(inteval->stack[((hsi*91800+23145246)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+523281)*1+lsi)*1]), &(inteval->stack[((hsi*128520+23237046)*1+lsi)*1]), &(inteval->stack[((hsi*113400+409881)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*151200+523281)*1+lsi)*1]), &(inteval->stack[((hsi*132300+13532310)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+22851756)*1+lsi)*1]), &(inteval->stack[((hsi*170100+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*147420+14709090)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+210936)*1+lsi)*1]), &(inteval->stack[((hsi*184275+22851756)*1+lsi)*1]), &(inteval->stack[((hsi*157950+10147527)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*193050+210936)*1+lsi)*1]), &(inteval->stack[((hsi*163350+9622602)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+9382032)*1+lsi)*1]), &(inteval->stack[((hsi*239580+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*196020+22681656)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*718740+8663292)*1+lsi)*1]), &(inteval->stack[((hsi*588060+9382032)*1+lsi)*1]),4356);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1960200+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+10676520)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+37435428)*1+lsi)*1]),4356);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2940300+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+15254676)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+8136216)*1+lsi)*1]),4356);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*4116420+40375728)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+23753232)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+37435428)*1+lsi)*1]),4356);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*5488560+44492148)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+17650476)*1+lsi)*1]), &(inteval->stack[((hsi*4116420+40375728)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*12376+178976)*1+lsi)*1]), &(inteval->stack[((hsi*10608+191352)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+37467252)*1+lsi)*1]), &(inteval->stack[((hsi*14280+164696)*1+lsi)*1]), &(inteval->stack[((hsi*12376+178976)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+37504380)*1+lsi)*1]), &(inteval->stack[((hsi*37128+37467252)*1+lsi)*1]), &(inteval->stack[((hsi*31824+37435428)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+37568028)*1+lsi)*1]), &(inteval->stack[((hsi*16320+148376)*1+lsi)*1]), &(inteval->stack[((hsi*14280+164696)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+37610868)*1+lsi)*1]), &(inteval->stack[((hsi*42840+37568028)*1+lsi)*1]), &(inteval->stack[((hsi*37128+37467252)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+37685124)*1+lsi)*1]), &(inteval->stack[((hsi*74256+37610868)*1+lsi)*1]), &(inteval->stack[((hsi*63648+37504380)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+37791204)*1+lsi)*1]), &(inteval->stack[((hsi*18496+129880)*1+lsi)*1]), &(inteval->stack[((hsi*16320+148376)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+37840164)*1+lsi)*1]), &(inteval->stack[((hsi*48960+37791204)*1+lsi)*1]), &(inteval->stack[((hsi*42840+37568028)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+37925844)*1+lsi)*1]), &(inteval->stack[((hsi*85680+37840164)*1+lsi)*1]), &(inteval->stack[((hsi*74256+37610868)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+38049604)*1+lsi)*1]), &(inteval->stack[((hsi*123760+37925844)*1+lsi)*1]), &(inteval->stack[((hsi*106080+37685124)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+38208724)*1+lsi)*1]), &(inteval->stack[((hsi*20808+109072)*1+lsi)*1]), &(inteval->stack[((hsi*18496+129880)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+38264212)*1+lsi)*1]), &(inteval->stack[((hsi*55488+38208724)*1+lsi)*1]), &(inteval->stack[((hsi*48960+37791204)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+38362132)*1+lsi)*1]), &(inteval->stack[((hsi*97920+38264212)*1+lsi)*1]), &(inteval->stack[((hsi*85680+37840164)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+38504932)*1+lsi)*1]), &(inteval->stack[((hsi*142800+38362132)*1+lsi)*1]), &(inteval->stack[((hsi*123760+37925844)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+38690572)*1+lsi)*1]), &(inteval->stack[((hsi*185640+38504932)*1+lsi)*1]), &(inteval->stack[((hsi*159120+38049604)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+38913340)*1+lsi)*1]), &(inteval->stack[((hsi*23256+85816)*1+lsi)*1]), &(inteval->stack[((hsi*20808+109072)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+38975764)*1+lsi)*1]), &(inteval->stack[((hsi*62424+38913340)*1+lsi)*1]), &(inteval->stack[((hsi*55488+38208724)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+39086740)*1+lsi)*1]), &(inteval->stack[((hsi*110976+38975764)*1+lsi)*1]), &(inteval->stack[((hsi*97920+38264212)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+39249940)*1+lsi)*1]), &(inteval->stack[((hsi*163200+39086740)*1+lsi)*1]), &(inteval->stack[((hsi*142800+38362132)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+39464140)*1+lsi)*1]), &(inteval->stack[((hsi*214200+39249940)*1+lsi)*1]), &(inteval->stack[((hsi*185640+38504932)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+39724036)*1+lsi)*1]), &(inteval->stack[((hsi*259896+39464140)*1+lsi)*1]), &(inteval->stack[((hsi*222768+38690572)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*25840+59976)*1+lsi)*1]), &(inteval->stack[((hsi*23256+85816)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+22751424)*1+lsi)*1]), &(inteval->stack[((hsi*69768+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*62424+38913340)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+40021060)*1+lsi)*1]), &(inteval->stack[((hsi*124848+22751424)*1+lsi)*1]), &(inteval->stack[((hsi*110976+38975764)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+22876272)*1+lsi)*1]), &(inteval->stack[((hsi*184960+40021060)*1+lsi)*1]), &(inteval->stack[((hsi*163200+39086740)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+40206020)*1+lsi)*1]), &(inteval->stack[((hsi*244800+22876272)*1+lsi)*1]), &(inteval->stack[((hsi*214200+39249940)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+23121072)*1+lsi)*1]), &(inteval->stack[((hsi*299880+40206020)*1+lsi)*1]), &(inteval->stack[((hsi*259896+39464140)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+40505900)*1+lsi)*1]), &(inteval->stack[((hsi*346528+23121072)*1+lsi)*1]), &(inteval->stack[((hsi*297024+39724036)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*28560+31416)*1+lsi)*1]), &(inteval->stack[((hsi*25840+59976)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+8213736)*1+lsi)*1]), &(inteval->stack[((hsi*77520+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*69768+22681656)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+23467600)*1+lsi)*1]), &(inteval->stack[((hsi*139536+8213736)*1+lsi)*1]), &(inteval->stack[((hsi*124848+22751424)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+8353272)*1+lsi)*1]), &(inteval->stack[((hsi*208080+23467600)*1+lsi)*1]), &(inteval->stack[((hsi*184960+40021060)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+23675680)*1+lsi)*1]), &(inteval->stack[((hsi*277440+8353272)*1+lsi)*1]), &(inteval->stack[((hsi*244800+22876272)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+40887788)*1+lsi)*1]), &(inteval->stack[((hsi*342720+23675680)*1+lsi)*1]), &(inteval->stack[((hsi*299880+40206020)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+8630712)*1+lsi)*1]), &(inteval->stack[((hsi*399840+40887788)*1+lsi)*1]), &(inteval->stack[((hsi*346528+23121072)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+24018400)*1+lsi)*1]), &(inteval->stack[((hsi*445536+8630712)*1+lsi)*1]), &(inteval->stack[((hsi*381888+40505900)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+41287628)*1+lsi)*1]), &(inteval->stack[((hsi*10608+191352)*1+lsi)*1]), &(inteval->stack[((hsi*8976+201960)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+41314556)*1+lsi)*1]), &(inteval->stack[((hsi*31824+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*26928+41287628)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+41368412)*1+lsi)*1]), &(inteval->stack[((hsi*63648+37504380)*1+lsi)*1]), &(inteval->stack[((hsi*53856+41314556)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+9076248)*1+lsi)*1]), &(inteval->stack[((hsi*106080+37685124)*1+lsi)*1]), &(inteval->stack[((hsi*89760+41368412)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+41287628)*1+lsi)*1]), &(inteval->stack[((hsi*159120+38049604)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9076248)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+9076248)*1+lsi)*1]), &(inteval->stack[((hsi*222768+38690572)*1+lsi)*1]), &(inteval->stack[((hsi*188496+41287628)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+41287628)*1+lsi)*1]), &(inteval->stack[((hsi*297024+39724036)*1+lsi)*1]), &(inteval->stack[((hsi*251328+9076248)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*381888+40505900)*1+lsi)*1]), &(inteval->stack[((hsi*323136+41287628)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+41287628)*1+lsi)*1]), &(inteval->stack[((hsi*477360+24018400)*1+lsi)*1]), &(inteval->stack[((hsi*403920+37435428)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*31416+0)*1+lsi)*1]), &(inteval->stack[((hsi*28560+31416)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+37521108)*1+lsi)*1]), &(inteval->stack[((hsi*85680+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*77520+8136216)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+37676148)*1+lsi)*1]), &(inteval->stack[((hsi*155040+37521108)*1+lsi)*1]), &(inteval->stack[((hsi*139536+8213736)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+9076248)*1+lsi)*1]), &(inteval->stack[((hsi*232560+37676148)*1+lsi)*1]), &(inteval->stack[((hsi*208080+23467600)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*312120+9076248)*1+lsi)*1]), &(inteval->stack[((hsi*277440+8353272)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+37823844)*1+lsi)*1]), &(inteval->stack[((hsi*388416+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*342720+23675680)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+9076248)*1+lsi)*1]), &(inteval->stack[((hsi*456960+37823844)*1+lsi)*1]), &(inteval->stack[((hsi*399840+40887788)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*514080+9076248)*1+lsi)*1]), &(inteval->stack[((hsi*445536+8630712)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*556920+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*477360+24018400)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*583440+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*493680+41287628)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*592416+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*522720+14117520)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+39003588)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+12114000)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+39003588)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+27346932)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+8136216)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+29725308)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+37435428)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+33122988)*1+lsi)*1]),4356);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*6708240+28719072)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+22681656)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+17650476)*1+lsi)*1]),4356);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*7056720+1079496)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+28719072)*1+lsi)*1]), &(inteval->stack[((hsi*5488560+44492148)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7056720+1079496)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
