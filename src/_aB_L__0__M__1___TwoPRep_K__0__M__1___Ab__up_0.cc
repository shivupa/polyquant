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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0ml.h>
#include <HRRPart1bra0ket0mm.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_K__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,810840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*4290+747470)*1+lsi)*1]), &(inteval->stack[((hsi*3630+751760)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+5722230)*1+lsi)*1]), &(inteval->stack[((hsi*5005+742465)*1+lsi)*1]), &(inteval->stack[((hsi*4290+747470)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+5735100)*1+lsi)*1]), &(inteval->stack[((hsi*12870+5722230)*1+lsi)*1]), &(inteval->stack[((hsi*10890+5711340)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+5756880)*1+lsi)*1]), &(inteval->stack[((hsi*5775+736690)*1+lsi)*1]), &(inteval->stack[((hsi*5005+742465)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+5771895)*1+lsi)*1]), &(inteval->stack[((hsi*15015+5756880)*1+lsi)*1]), &(inteval->stack[((hsi*12870+5722230)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+5797635)*1+lsi)*1]), &(inteval->stack[((hsi*25740+5771895)*1+lsi)*1]), &(inteval->stack[((hsi*21780+5735100)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+5833935)*1+lsi)*1]), &(inteval->stack[((hsi*6600+730090)*1+lsi)*1]), &(inteval->stack[((hsi*5775+736690)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+5851260)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5833935)*1+lsi)*1]), &(inteval->stack[((hsi*15015+5756880)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+5881290)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5851260)*1+lsi)*1]), &(inteval->stack[((hsi*25740+5771895)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+5924190)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5881290)*1+lsi)*1]), &(inteval->stack[((hsi*36300+5797635)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+5756880)*1+lsi)*1]), &(inteval->stack[((hsi*7480+722610)*1+lsi)*1]), &(inteval->stack[((hsi*6600+730090)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+5978640)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5756880)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5833935)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+6013290)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5978640)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5851260)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+6063340)*1+lsi)*1]), &(inteval->stack[((hsi*50050+6013290)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5881290)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+5833935)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6063340)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5924190)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+6127690)*1+lsi)*1]), &(inteval->stack[((hsi*8415+714195)*1+lsi)*1]), &(inteval->stack[((hsi*7480+722610)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+6150130)*1+lsi)*1]), &(inteval->stack[((hsi*22440+6127690)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5756880)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+6189730)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6150130)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5978640)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+6247480)*1+lsi)*1]), &(inteval->stack[((hsi*57750+6189730)*1+lsi)*1]), &(inteval->stack[((hsi*50050+6013290)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+6322555)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6247480)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6063340)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+5978640)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6322555)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5833935)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+6080280)*1+lsi)*1]), &(inteval->stack[((hsi*9405+704790)*1+lsi)*1]), &(inteval->stack[((hsi*8415+714195)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+6412645)*1+lsi)*1]), &(inteval->stack[((hsi*25245+6080280)*1+lsi)*1]), &(inteval->stack[((hsi*22440+6127690)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+6457525)*1+lsi)*1]), &(inteval->stack[((hsi*44880+6412645)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6150130)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+6523525)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6457525)*1+lsi)*1]), &(inteval->stack[((hsi*57750+6189730)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+6105525)*1+lsi)*1]), &(inteval->stack[((hsi*86625+6523525)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6247480)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+6610150)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6105525)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6322555)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+6210630)*1+lsi)*1]), &(inteval->stack[((hsi*120120+6610150)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5978640)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+6341310)*1+lsi)*1]), &(inteval->stack[((hsi*3630+751760)*1+lsi)*1]), &(inteval->stack[((hsi*3025+755390)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+6350385)*1+lsi)*1]), &(inteval->stack[((hsi*10890+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*9075+6341310)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+714195)*1+lsi)*1]), &(inteval->stack[((hsi*21780+5735100)*1+lsi)*1]), &(inteval->stack[((hsi*18150+6350385)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*36300+5797635)*1+lsi)*1]), &(inteval->stack[((hsi*30250+714195)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+5756715)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5924190)*1+lsi)*1]), &(inteval->stack[((hsi*45375+5711340)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+6730270)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5833935)*1+lsi)*1]), &(inteval->stack[((hsi*63525+5756715)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5978640)*1+lsi)*1]), &(inteval->stack[((hsi*84700+6730270)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+5820240)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6210630)*1+lsi)*1]), &(inteval->stack[((hsi*108900+5711340)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*10450+694340)*1+lsi)*1]), &(inteval->stack[((hsi*9405+704790)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*25245+6080280)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*50490+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*44880+6412645)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+6341310)*1+lsi)*1]), &(inteval->stack[((hsi*74800+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6457525)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*99000+6341310)*1+lsi)*1]), &(inteval->stack[((hsi*86625+6523525)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+6341310)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6105525)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6341310)*1+lsi)*1]), &(inteval->stack[((hsi*120120+6610150)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+6341310)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6210630)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*163350+6341310)*1+lsi)*1]), &(inteval->stack[((hsi*136125+5820240)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*5148+681206)*1+lsi)*1]), &(inteval->stack[((hsi*4356+686354)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+5724408)*1+lsi)*1]), &(inteval->stack[((hsi*6006+675200)*1+lsi)*1]), &(inteval->stack[((hsi*5148+681206)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+5739852)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5724408)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5711340)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+5765988)*1+lsi)*1]), &(inteval->stack[((hsi*6930+668270)*1+lsi)*1]), &(inteval->stack[((hsi*6006+675200)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+5784006)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5765988)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5724408)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+5814894)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5784006)*1+lsi)*1]), &(inteval->stack[((hsi*26136+5739852)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+5858454)*1+lsi)*1]), &(inteval->stack[((hsi*7920+660350)*1+lsi)*1]), &(inteval->stack[((hsi*6930+668270)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+5879244)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5858454)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5765988)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+694340)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5879244)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5784006)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*51480+694340)*1+lsi)*1]), &(inteval->stack[((hsi*43560+5814894)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+5765988)*1+lsi)*1]), &(inteval->stack[((hsi*8976+651374)*1+lsi)*1]), &(inteval->stack[((hsi*7920+660350)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+6188080)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5765988)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5858454)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+6229660)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6188080)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5879244)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+5858454)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6229660)*1+lsi)*1]), &(inteval->stack[((hsi*51480+694340)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+6289720)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5858454)*1+lsi)*1]), &(inteval->stack[((hsi*65340+6122740)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+694340)*1+lsi)*1]), &(inteval->stack[((hsi*10098+641276)*1+lsi)*1]), &(inteval->stack[((hsi*8976+651374)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+6381196)*1+lsi)*1]), &(inteval->stack[((hsi*26928+694340)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5765988)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+6428716)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6381196)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6188080)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6498016)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6428716)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6229660)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+6588106)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6498016)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5858454)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+6696214)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6588106)*1+lsi)*1]), &(inteval->stack[((hsi*91476+6289720)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+6188080)*1+lsi)*1]), &(inteval->stack[((hsi*11286+629990)*1+lsi)*1]), &(inteval->stack[((hsi*10098+641276)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+5858454)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6188080)*1+lsi)*1]), &(inteval->stack[((hsi*26928+694340)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+6818182)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5858454)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6381196)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+6897382)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6818182)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6428716)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+7001332)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6897382)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6498016)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+6381196)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7001332)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6588106)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+6525340)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6381196)*1+lsi)*1]), &(inteval->stack[((hsi*121968+6696214)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+6218374)*1+lsi)*1]), &(inteval->stack[((hsi*4356+686354)*1+lsi)*1]), &(inteval->stack[((hsi*3630+690710)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+641276)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*10890+6218374)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+663056)*1+lsi)*1]), &(inteval->stack[((hsi*26136+5739852)*1+lsi)*1]), &(inteval->stack[((hsi*21780+641276)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*43560+5814894)*1+lsi)*1]), &(inteval->stack[((hsi*36300+663056)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+641276)*1+lsi)*1]), &(inteval->stack[((hsi*65340+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5711340)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*91476+6289720)*1+lsi)*1]), &(inteval->stack[((hsi*76230+641276)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+6218374)*1+lsi)*1]), &(inteval->stack[((hsi*121968+6696214)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5711340)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+7127458)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6525340)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6218374)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+6218374)*1+lsi)*1]), &(inteval->stack[((hsi*12540+617450)*1+lsi)*1]), &(inteval->stack[((hsi*11286+629990)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6218374)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6188080)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*60588+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5858454)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6818182)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6897382)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+6682156)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7001332)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+6850324)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6682156)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6381196)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6850324)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6525340)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+6318760)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*163350+7127458)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*499125+6518410)*1+lsi)*1]), &(inteval->stack[((hsi*199650+6318760)*1+lsi)*1]), &(inteval->stack[((hsi*166375+5956365)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*6084+601928)*1+lsi)*1]), &(inteval->stack[((hsi*5148+608012)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+5726784)*1+lsi)*1]), &(inteval->stack[((hsi*7098+594830)*1+lsi)*1]), &(inteval->stack[((hsi*6084+601928)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+5745036)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5726784)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5711340)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*8190+586640)*1+lsi)*1]), &(inteval->stack[((hsi*7098+594830)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+5775924)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5726784)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+6144034)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5775924)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5745036)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+5812428)*1+lsi)*1]), &(inteval->stack[((hsi*9360+577280)*1+lsi)*1]), &(inteval->stack[((hsi*8190+586640)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+617450)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5812428)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6122740)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+6195514)*1+lsi)*1]), &(inteval->stack[((hsi*42588+617450)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5775924)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+5836998)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6195514)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6144034)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+660038)*1+lsi)*1]), &(inteval->stack[((hsi*10608+566672)*1+lsi)*1]), &(inteval->stack[((hsi*9360+577280)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+688118)*1+lsi)*1]), &(inteval->stack[((hsi*28080+660038)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5812428)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*49140+688118)*1+lsi)*1]), &(inteval->stack[((hsi*42588+617450)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+7088515)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6195514)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+6195514)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7088515)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5836998)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+5775924)*1+lsi)*1]), &(inteval->stack[((hsi*11934+554738)*1+lsi)*1]), &(inteval->stack[((hsi*10608+566672)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+7179775)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5775924)*1+lsi)*1]), &(inteval->stack[((hsi*28080+660038)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+7235935)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7179775)*1+lsi)*1]), &(inteval->stack[((hsi*49140+688118)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+617450)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7235935)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7017535)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+7317835)*1+lsi)*1]), &(inteval->stack[((hsi*106470+617450)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7088515)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7317835)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6195514)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+5914218)*1+lsi)*1]), &(inteval->stack[((hsi*13338+541400)*1+lsi)*1]), &(inteval->stack[((hsi*11934+554738)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+7445599)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5914218)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5775924)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+7509247)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7445599)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7179775)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+7602847)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7509247)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7235935)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+7161679)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7602847)*1+lsi)*1]), &(inteval->stack[((hsi*106470+617450)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+7725697)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7161679)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7317835)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+7896049)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7725697)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7017535)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+617450)*1+lsi)*1]), &(inteval->stack[((hsi*5148+608012)*1+lsi)*1]), &(inteval->stack[((hsi*4290+613160)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+7310737)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*12870+617450)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+554738)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5745036)*1+lsi)*1]), &(inteval->stack[((hsi*25740+7310737)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+597638)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6144034)*1+lsi)*1]), &(inteval->stack[((hsi*42900+554738)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+7310737)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5836998)*1+lsi)*1]), &(inteval->stack[((hsi*64350+597638)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+554738)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6195514)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7310737)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*120120+554738)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+554738)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7896049)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5711340)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*14820+526580)*1+lsi)*1]), &(inteval->stack[((hsi*13338+541400)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5914218)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*71604+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7445599)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+7310737)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7509247)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7310737)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7602847)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+7310737)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7161679)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7310737)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7725697)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+7236559)*1+lsi)*1]), &(inteval->stack[((hsi*219024+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7896049)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7236559)*1+lsi)*1]), &(inteval->stack[((hsi*193050+554738)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*199650+6318760)*1+lsi)*1]),3025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*998250+7616485)*1+lsi)*1]), &(inteval->stack[((hsi*598950+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*499125+6518410)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*7098+508471)*1+lsi)*1]), &(inteval->stack[((hsi*6006+515569)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+6140758)*1+lsi)*1]), &(inteval->stack[((hsi*8281+500190)*1+lsi)*1]), &(inteval->stack[((hsi*7098+508471)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+6162052)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6140758)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6122740)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+6198088)*1+lsi)*1]), &(inteval->stack[((hsi*9555+490635)*1+lsi)*1]), &(inteval->stack[((hsi*8281+500190)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+6222931)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6198088)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6140758)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+6265519)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6222931)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6162052)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+526580)*1+lsi)*1]), &(inteval->stack[((hsi*10920+479715)*1+lsi)*1]), &(inteval->stack[((hsi*9555+490635)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+555245)*1+lsi)*1]), &(inteval->stack[((hsi*28665+526580)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6198088)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6325579)*1+lsi)*1]), &(inteval->stack[((hsi*49686+555245)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6222931)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+604931)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6325579)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6265519)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+6396559)*1+lsi)*1]), &(inteval->stack[((hsi*12376+467339)*1+lsi)*1]), &(inteval->stack[((hsi*10920+479715)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6429319)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6396559)*1+lsi)*1]), &(inteval->stack[((hsi*28665+526580)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6429319)*1+lsi)*1]), &(inteval->stack[((hsi*49686+555245)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+8697545)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6325579)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+8804015)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8697545)*1+lsi)*1]), &(inteval->stack[((hsi*90090+604931)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+526580)*1+lsi)*1]), &(inteval->stack[((hsi*13923+453416)*1+lsi)*1]), &(inteval->stack[((hsi*12376+467339)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+6325579)*1+lsi)*1]), &(inteval->stack[((hsi*37128+526580)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6396559)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+8930141)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6325579)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6429319)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+6391099)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8930141)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8614735)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+9025691)*1+lsi)*1]), &(inteval->stack[((hsi*124215+6391099)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8697545)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9025691)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8804015)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6198088)*1+lsi)*1]), &(inteval->stack[((hsi*15561+437855)*1+lsi)*1]), &(inteval->stack[((hsi*13923+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+9174749)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6198088)*1+lsi)*1]), &(inteval->stack[((hsi*37128+526580)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+9249005)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9174749)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6325579)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+9358205)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9249005)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8930141)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+9501530)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9358205)*1+lsi)*1]), &(inteval->stack[((hsi*124215+6391099)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+9675431)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9501530)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9025691)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+8930141)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9675431)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8614735)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+6325579)*1+lsi)*1]), &(inteval->stack[((hsi*6006+515569)*1+lsi)*1]), &(inteval->stack[((hsi*5005+521575)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+6340594)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*15015+6325579)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+453416)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6162052)*1+lsi)*1]), &(inteval->stack[((hsi*30030+6340594)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+6325579)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6265519)*1+lsi)*1]), &(inteval->stack[((hsi*50050+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+453416)*1+lsi)*1]), &(inteval->stack[((hsi*90090+604931)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6325579)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+6239857)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8804015)*1+lsi)*1]), &(inteval->stack[((hsi*105105+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+453416)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6239857)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8930141)*1+lsi)*1]), &(inteval->stack[((hsi*180180+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+453416)*1+lsi)*1]), &(inteval->stack[((hsi*17290+420565)*1+lsi)*1]), &(inteval->stack[((hsi*15561+437855)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+6239857)*1+lsi)*1]), &(inteval->stack[((hsi*46683+453416)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6198088)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+420565)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6239857)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9174749)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*123760+420565)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9249005)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+420565)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9358205)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*200655+420565)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9501530)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+9146357)*1+lsi)*1]), &(inteval->stack[((hsi*231868+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9675431)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9146357)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8930141)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+420565)*1+lsi)*1]), &(inteval->stack[((hsi*270270+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*225225+8614735)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*275275+420565)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5711340)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+9322585)*1+lsi)*1]), &(inteval->stack[((hsi*707850+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*598950+7017535)*1+lsi)*1]),3025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1663750+10520485)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+9322585)*1+lsi)*1]), &(inteval->stack[((hsi*998250+7616485)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*8190+399670)*1+lsi)*1]), &(inteval->stack[((hsi*6930+407860)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+7038325)*1+lsi)*1]), &(inteval->stack[((hsi*9555+390115)*1+lsi)*1]), &(inteval->stack[((hsi*8190+399670)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+7062895)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7038325)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7017535)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+7104475)*1+lsi)*1]), &(inteval->stack[((hsi*11025+379090)*1+lsi)*1]), &(inteval->stack[((hsi*9555+390115)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+7133140)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7104475)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7038325)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+7182280)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7133140)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7062895)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*12600+366490)*1+lsi)*1]), &(inteval->stack[((hsi*11025+379090)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+7251580)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7104475)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+6155815)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7251580)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7133140)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+7308910)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6155815)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7182280)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+6237715)*1+lsi)*1]), &(inteval->stack[((hsi*14280+352210)*1+lsi)*1]), &(inteval->stack[((hsi*12600+366490)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6237715)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6122740)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+6275515)*1+lsi)*1]), &(inteval->stack[((hsi*66150+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7251580)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+7412860)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6275515)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6155815)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+5777490)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7412860)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7308910)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+6371065)*1+lsi)*1]), &(inteval->stack[((hsi*16065+336145)*1+lsi)*1]), &(inteval->stack[((hsi*14280+352210)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*42840+6371065)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6237715)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*66150+5711340)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+12294485)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6275515)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+6198340)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12294485)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7412860)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+7412860)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6198340)*1+lsi)*1]), &(inteval->stack[((hsi*145530+5777490)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+6413905)*1+lsi)*1]), &(inteval->stack[((hsi*17955+318190)*1+lsi)*1]), &(inteval->stack[((hsi*16065+336145)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+12437810)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6413905)*1+lsi)*1]), &(inteval->stack[((hsi*42840+6371065)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+12523490)*1+lsi)*1]), &(inteval->stack[((hsi*85680+12437810)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6122740)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+12649490)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12523490)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12184235)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+12814865)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12649490)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12294485)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12814865)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6198340)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7412860)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+7104475)*1+lsi)*1]), &(inteval->stack[((hsi*6930+407860)*1+lsi)*1]), &(inteval->stack[((hsi*5775+414790)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+336145)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*17325+7104475)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+7104475)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7062895)*1+lsi)*1]), &(inteval->stack[((hsi*34650+336145)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7182280)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7104475)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+7104160)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7308910)*1+lsi)*1]), &(inteval->stack[((hsi*86625+7017535)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+7225435)*1+lsi)*1]), &(inteval->stack[((hsi*145530+5777490)*1+lsi)*1]), &(inteval->stack[((hsi*121275+7104160)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7412860)*1+lsi)*1]), &(inteval->stack[((hsi*161700+7225435)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+7225435)*1+lsi)*1]), &(inteval->stack[((hsi*249480+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*207900+7017535)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*19950+298240)*1+lsi)*1]), &(inteval->stack[((hsi*17955+318190)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*53865+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6413905)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*96390+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*85680+12437810)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*142800+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12523490)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*189000+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12649490)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+12413555)*1+lsi)*1]), &(inteval->stack[((hsi*231525+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12814865)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+12681095)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12413555)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12184235)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12681095)*1+lsi)*1]), &(inteval->stack[((hsi*249480+6122740)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*311850+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*259875+7225435)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*317625+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*275275+420565)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+13010060)*1+lsi)*1]), &(inteval->stack[((hsi*825825+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*707850+8614735)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+14425760)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+13010060)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+9322585)*1+lsi)*1]),3025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2495625+16422260)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+14425760)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+10520485)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*9360+274360)*1+lsi)*1]), &(inteval->stack[((hsi*7920+283720)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+8638495)*1+lsi)*1]), &(inteval->stack[((hsi*10920+263440)*1+lsi)*1]), &(inteval->stack[((hsi*9360+274360)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+8666575)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8638495)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8614735)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+8714095)*1+lsi)*1]), &(inteval->stack[((hsi*12600+250840)*1+lsi)*1]), &(inteval->stack[((hsi*10920+263440)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+8746855)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8714095)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8638495)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+8803015)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8746855)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8666575)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+8882215)*1+lsi)*1]), &(inteval->stack[((hsi*14400+236440)*1+lsi)*1]), &(inteval->stack[((hsi*12600+250840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+8920015)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8882215)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8714095)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+8985535)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8920015)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8746855)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+9079135)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8985535)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8803015)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+9197935)*1+lsi)*1]), &(inteval->stack[((hsi*16320+220120)*1+lsi)*1]), &(inteval->stack[((hsi*14400+236440)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+9241135)*1+lsi)*1]), &(inteval->stack[((hsi*43200+9197935)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8882215)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+9316735)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9241135)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8920015)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+9425935)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9316735)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8985535)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+9566335)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9425935)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9079135)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+9732655)*1+lsi)*1]), &(inteval->stack[((hsi*18360+201760)*1+lsi)*1]), &(inteval->stack[((hsi*16320+220120)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+9781615)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9732655)*1+lsi)*1]), &(inteval->stack[((hsi*43200+9197935)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+9868015)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9781615)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9241135)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9868015)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9316735)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+9994015)*1+lsi)*1]), &(inteval->stack[((hsi*163800+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9425935)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+298240)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9994015)*1+lsi)*1]), &(inteval->stack[((hsi*166320+9566335)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+7181335)*1+lsi)*1]), &(inteval->stack[((hsi*20520+181240)*1+lsi)*1]), &(inteval->stack[((hsi*18360+201760)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+7236415)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7181335)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9732655)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+9197935)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7236415)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9781615)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+10190575)*1+lsi)*1]), &(inteval->stack[((hsi*144000+9197935)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9868015)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+7334335)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10190575)*1+lsi)*1]), &(inteval->stack[((hsi*163800+7017535)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+18917885)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7334335)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9994015)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+9732655)*1+lsi)*1]), &(inteval->stack[((hsi*262080+18917885)*1+lsi)*1]), &(inteval->stack[((hsi*221760+298240)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*7920+283720)*1+lsi)*1]), &(inteval->stack[((hsi*6600+291640)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+520000)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5711340)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8666575)*1+lsi)*1]), &(inteval->stack[((hsi*39600+520000)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+520000)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8803015)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5711340)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9079135)*1+lsi)*1]), &(inteval->stack[((hsi*99000+520000)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+8753335)*1+lsi)*1]), &(inteval->stack[((hsi*166320+9566335)*1+lsi)*1]), &(inteval->stack[((hsi*138600+8614735)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+9341935)*1+lsi)*1]), &(inteval->stack[((hsi*221760+298240)*1+lsi)*1]), &(inteval->stack[((hsi*184800+8753335)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*285120+9732655)*1+lsi)*1]), &(inteval->stack[((hsi*237600+9341935)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+201760)*1+lsi)*1]), &(inteval->stack[((hsi*22800+158440)*1+lsi)*1]), &(inteval->stack[((hsi*20520+181240)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+263320)*1+lsi)*1]), &(inteval->stack[((hsi*61560+201760)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7181335)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+9341935)*1+lsi)*1]), &(inteval->stack[((hsi*110160+263320)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7236415)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+158440)*1+lsi)*1]), &(inteval->stack[((hsi*163200+9341935)*1+lsi)*1]), &(inteval->stack[((hsi*144000+9197935)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+8911735)*1+lsi)*1]), &(inteval->stack[((hsi*216000+158440)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10190575)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+158440)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8911735)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7334335)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+8911735)*1+lsi)*1]), &(inteval->stack[((hsi*305760+158440)*1+lsi)*1]), &(inteval->stack[((hsi*262080+18917885)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+158440)*1+lsi)*1]), &(inteval->stack[((hsi*336960+8911735)*1+lsi)*1]), &(inteval->stack[((hsi*285120+9732655)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+8911735)*1+lsi)*1]), &(inteval->stack[((hsi*356400+158440)*1+lsi)*1]), &(inteval->stack[((hsi*297000+8614735)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+9274735)*1+lsi)*1]), &(inteval->stack[((hsi*363000+8911735)*1+lsi)*1]), &(inteval->stack[((hsi*317625+6122740)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+18917885)*1+lsi)*1]), &(inteval->stack[((hsi*952875+9274735)*1+lsi)*1]), &(inteval->stack[((hsi*825825+12184235)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+20569535)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+18917885)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+13010060)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+22929035)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+20569535)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+14425760)*1+lsi)*1]),3025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*3493875+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+22929035)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+16422260)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*3510+801885)*1+lsi)*1]), &(inteval->stack[((hsi*2970+805395)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+15687020)*1+lsi)*1]), &(inteval->stack[((hsi*4095+797790)*1+lsi)*1]), &(inteval->stack[((hsi*3510+801885)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+15697550)*1+lsi)*1]), &(inteval->stack[((hsi*10530+15687020)*1+lsi)*1]), &(inteval->stack[((hsi*8910+15678110)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+15715370)*1+lsi)*1]), &(inteval->stack[((hsi*4725+793065)*1+lsi)*1]), &(inteval->stack[((hsi*4095+797790)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+15727655)*1+lsi)*1]), &(inteval->stack[((hsi*12285+15715370)*1+lsi)*1]), &(inteval->stack[((hsi*10530+15687020)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+15748715)*1+lsi)*1]), &(inteval->stack[((hsi*21060+15727655)*1+lsi)*1]), &(inteval->stack[((hsi*17820+15697550)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+15778415)*1+lsi)*1]), &(inteval->stack[((hsi*5400+787665)*1+lsi)*1]), &(inteval->stack[((hsi*4725+793065)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+15792590)*1+lsi)*1]), &(inteval->stack[((hsi*14175+15778415)*1+lsi)*1]), &(inteval->stack[((hsi*12285+15715370)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+15817160)*1+lsi)*1]), &(inteval->stack[((hsi*24570+15792590)*1+lsi)*1]), &(inteval->stack[((hsi*21060+15727655)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+158440)*1+lsi)*1]), &(inteval->stack[((hsi*35100+15817160)*1+lsi)*1]), &(inteval->stack[((hsi*29700+15748715)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*6120+781545)*1+lsi)*1]), &(inteval->stack[((hsi*5400+787665)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+7033735)*1+lsi)*1]), &(inteval->stack[((hsi*16200+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*14175+15778415)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+15852260)*1+lsi)*1]), &(inteval->stack[((hsi*28350+7033735)*1+lsi)*1]), &(inteval->stack[((hsi*24570+15792590)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+202990)*1+lsi)*1]), &(inteval->stack[((hsi*40950+15852260)*1+lsi)*1]), &(inteval->stack[((hsi*35100+15817160)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+7062085)*1+lsi)*1]), &(inteval->stack[((hsi*52650+202990)*1+lsi)*1]), &(inteval->stack[((hsi*44550+158440)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+15893210)*1+lsi)*1]), &(inteval->stack[((hsi*6885+774660)*1+lsi)*1]), &(inteval->stack[((hsi*6120+781545)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+15911570)*1+lsi)*1]), &(inteval->stack[((hsi*18360+15893210)*1+lsi)*1]), &(inteval->stack[((hsi*16200+7017535)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+255640)*1+lsi)*1]), &(inteval->stack[((hsi*32400+15911570)*1+lsi)*1]), &(inteval->stack[((hsi*28350+7033735)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+7124455)*1+lsi)*1]), &(inteval->stack[((hsi*47250+255640)*1+lsi)*1]), &(inteval->stack[((hsi*40950+15852260)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+15943970)*1+lsi)*1]), &(inteval->stack[((hsi*61425+7124455)*1+lsi)*1]), &(inteval->stack[((hsi*52650+202990)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+302890)*1+lsi)*1]), &(inteval->stack[((hsi*73710+15943970)*1+lsi)*1]), &(inteval->stack[((hsi*62370+7062085)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+7185880)*1+lsi)*1]), &(inteval->stack[((hsi*7695+766965)*1+lsi)*1]), &(inteval->stack[((hsi*6885+774660)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+7206535)*1+lsi)*1]), &(inteval->stack[((hsi*20655+7185880)*1+lsi)*1]), &(inteval->stack[((hsi*18360+15893210)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+16017680)*1+lsi)*1]), &(inteval->stack[((hsi*36720+7206535)*1+lsi)*1]), &(inteval->stack[((hsi*32400+15911570)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*54000+16017680)*1+lsi)*1]), &(inteval->stack[((hsi*47250+255640)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+7243255)*1+lsi)*1]), &(inteval->stack[((hsi*70875+6122740)*1+lsi)*1]), &(inteval->stack[((hsi*61425+7124455)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+386050)*1+lsi)*1]), &(inteval->stack[((hsi*85995+7243255)*1+lsi)*1]), &(inteval->stack[((hsi*73710+15943970)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+16071680)*1+lsi)*1]), &(inteval->stack[((hsi*98280+386050)*1+lsi)*1]), &(inteval->stack[((hsi*83160+302890)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+6193615)*1+lsi)*1]), &(inteval->stack[((hsi*2970+805395)*1+lsi)*1]), &(inteval->stack[((hsi*2475+808365)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+6201040)*1+lsi)*1]), &(inteval->stack[((hsi*8910+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*7425+6193615)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+6215890)*1+lsi)*1]), &(inteval->stack[((hsi*17820+15697550)*1+lsi)*1]), &(inteval->stack[((hsi*14850+6201040)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+8614735)*1+lsi)*1]), &(inteval->stack[((hsi*29700+15748715)*1+lsi)*1]), &(inteval->stack[((hsi*24750+6215890)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*44550+158440)*1+lsi)*1]), &(inteval->stack[((hsi*37125+8614735)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+6193615)*1+lsi)*1]), &(inteval->stack[((hsi*62370+7062085)*1+lsi)*1]), &(inteval->stack[((hsi*51975+15678110)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*83160+302890)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6193615)*1+lsi)*1]),45);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*111375+6193615)*1+lsi)*1]), &(inteval->stack[((hsi*106920+16071680)*1+lsi)*1]), &(inteval->stack[((hsi*89100+15678110)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*8550+758415)*1+lsi)*1]), &(inteval->stack[((hsi*7695+766965)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+484330)*1+lsi)*1]), &(inteval->stack[((hsi*23085+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*20655+7185880)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*41310+484330)*1+lsi)*1]), &(inteval->stack[((hsi*36720+7206535)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+484330)*1+lsi)*1]), &(inteval->stack[((hsi*61200+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*54000+16017680)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*81000+484330)*1+lsi)*1]), &(inteval->stack[((hsi*70875+6122740)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+484330)*1+lsi)*1]), &(inteval->stack[((hsi*99225+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*85995+7243255)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*114660+484330)*1+lsi)*1]), &(inteval->stack[((hsi*98280+386050)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+158440)*1+lsi)*1]), &(inteval->stack[((hsi*126360+7017535)*1+lsi)*1]), &(inteval->stack[((hsi*106920+16071680)*1+lsi)*1]),45);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*136125+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*133650+158440)*1+lsi)*1]), &(inteval->stack[((hsi*111375+6193615)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*408375+158440)*1+lsi)*1]), &(inteval->stack[((hsi*166375+5956365)*1+lsi)*1]), &(inteval->stack[((hsi*136125+15678110)*1+lsi)*1]),3025);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*816750+25923785)*1+lsi)*1]), &(inteval->stack[((hsi*499125+6518410)*1+lsi)*1]), &(inteval->stack[((hsi*408375+158440)*1+lsi)*1]),3025);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1361250+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*998250+7616485)*1+lsi)*1]), &(inteval->stack[((hsi*816750+25923785)*1+lsi)*1]),3025);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2041875+25923785)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+10520485)*1+lsi)*1]), &(inteval->stack[((hsi*1361250+5711340)*1+lsi)*1]),3025);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*2858625+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+16422260)*1+lsi)*1]), &(inteval->stack[((hsi*2041875+25923785)*1+lsi)*1]),3025);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*3811500+25923785)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+12184235)*1+lsi)*1]), &(inteval->stack[((hsi*2858625+5711340)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*10608+131376)*1+lsi)*1]), &(inteval->stack[((hsi*8976+141984)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+15705038)*1+lsi)*1]), &(inteval->stack[((hsi*12376+119000)*1+lsi)*1]), &(inteval->stack[((hsi*10608+131376)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*31824+15705038)*1+lsi)*1]), &(inteval->stack[((hsi*26928+15678110)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+15736862)*1+lsi)*1]), &(inteval->stack[((hsi*14280+104720)*1+lsi)*1]), &(inteval->stack[((hsi*12376+119000)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+5765196)*1+lsi)*1]), &(inteval->stack[((hsi*37128+15736862)*1+lsi)*1]), &(inteval->stack[((hsi*31824+15705038)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+15773990)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5765196)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5711340)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+5828844)*1+lsi)*1]), &(inteval->stack[((hsi*16320+88400)*1+lsi)*1]), &(inteval->stack[((hsi*14280+104720)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+15863750)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5828844)*1+lsi)*1]), &(inteval->stack[((hsi*37128+15736862)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+5871684)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15863750)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5765196)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+15938006)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5871684)*1+lsi)*1]), &(inteval->stack[((hsi*89760+15773990)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+5977764)*1+lsi)*1]), &(inteval->stack[((hsi*18496+69904)*1+lsi)*1]), &(inteval->stack[((hsi*16320+88400)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+6026724)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5977764)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5828844)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+16072646)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6026724)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15863750)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+6112404)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16072646)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5871684)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+16196406)*1+lsi)*1]), &(inteval->stack[((hsi*159120+6112404)*1+lsi)*1]), &(inteval->stack[((hsi*134640+15938006)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+6271524)*1+lsi)*1]), &(inteval->stack[((hsi*20808+49096)*1+lsi)*1]), &(inteval->stack[((hsi*18496+69904)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+6327012)*1+lsi)*1]), &(inteval->stack[((hsi*55488+6271524)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5977764)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+16384902)*1+lsi)*1]), &(inteval->stack[((hsi*97920+6327012)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6026724)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+6424932)*1+lsi)*1]), &(inteval->stack[((hsi*142800+16384902)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16072646)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+16527702)*1+lsi)*1]), &(inteval->stack[((hsi*185640+6424932)*1+lsi)*1]), &(inteval->stack[((hsi*159120+6112404)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+6610572)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16527702)*1+lsi)*1]), &(inteval->stack[((hsi*188496+16196406)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+16750470)*1+lsi)*1]), &(inteval->stack[((hsi*23256+25840)*1+lsi)*1]), &(inteval->stack[((hsi*20808+49096)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+16812894)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16750470)*1+lsi)*1]), &(inteval->stack[((hsi*55488+6271524)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+6861900)*1+lsi)*1]), &(inteval->stack[((hsi*110976+16812894)*1+lsi)*1]), &(inteval->stack[((hsi*97920+6327012)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+16923870)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6861900)*1+lsi)*1]), &(inteval->stack[((hsi*142800+16384902)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+10227610)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16923870)*1+lsi)*1]), &(inteval->stack[((hsi*185640+6424932)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+7025100)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10227610)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16527702)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+17138070)*1+lsi)*1]), &(inteval->stack[((hsi*297024+7025100)*1+lsi)*1]), &(inteval->stack[((hsi*251328+6610572)*1+lsi)*1]),136);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+10487506)*1+lsi)*1]), &(inteval->stack[((hsi*8976+141984)*1+lsi)*1]), &(inteval->stack[((hsi*7480+150960)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+10509946)*1+lsi)*1]), &(inteval->stack[((hsi*26928+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*22440+10487506)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+10554826)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*44880+10509946)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+7322124)*1+lsi)*1]), &(inteval->stack[((hsi*89760+15773990)*1+lsi)*1]), &(inteval->stack[((hsi*74800+10554826)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+10487506)*1+lsi)*1]), &(inteval->stack[((hsi*134640+15938006)*1+lsi)*1]), &(inteval->stack[((hsi*112200+7322124)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+7322124)*1+lsi)*1]), &(inteval->stack[((hsi*188496+16196406)*1+lsi)*1]), &(inteval->stack[((hsi*157080+10487506)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+10487506)*1+lsi)*1]), &(inteval->stack[((hsi*251328+6610572)*1+lsi)*1]), &(inteval->stack[((hsi*209440+7322124)*1+lsi)*1]),136);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+7322124)*1+lsi)*1]), &(inteval->stack[((hsi*323136+17138070)*1+lsi)*1]), &(inteval->stack[((hsi*269280+10487506)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+10487506)*1+lsi)*1]), &(inteval->stack[((hsi*25840+0)*1+lsi)*1]), &(inteval->stack[((hsi*23256+25840)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+10557274)*1+lsi)*1]), &(inteval->stack[((hsi*69768+10487506)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16750470)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+10682122)*1+lsi)*1]), &(inteval->stack[((hsi*124848+10557274)*1+lsi)*1]), &(inteval->stack[((hsi*110976+16812894)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+17461206)*1+lsi)*1]), &(inteval->stack[((hsi*184960+10682122)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6861900)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+10487506)*1+lsi)*1]), &(inteval->stack[((hsi*244800+17461206)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16923870)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*299880+10487506)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10227610)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+10227610)*1+lsi)*1]), &(inteval->stack[((hsi*346528+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*297024+7025100)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*381888+10227610)*1+lsi)*1]), &(inteval->stack[((hsi*323136+17138070)*1+lsi)*1]),136);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*403920+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*336600+7322124)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*411400+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*363000+8911735)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*952875+9274735)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+18917885)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+20569535)*1+lsi)*1]),3025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+22929035)*1+lsi)*1]),3025);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*4658500+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+5711340)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+12184235)*1+lsi)*1]),3025);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*4900500+810840)*1+lsi)*1]), &(inteval->stack[((hsi*4658500+15678110)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+25923785)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4900500+810840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
