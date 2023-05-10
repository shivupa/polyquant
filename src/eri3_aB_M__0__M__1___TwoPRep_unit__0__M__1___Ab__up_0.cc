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
#include <eri3_aB_M__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,64075)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+230450)*1+lsi)*1]), &(inteval->stack[((hsi*4290+53130)*1+lsi)*1]), &(inteval->stack[((hsi*3630+57420)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+241340)*1+lsi)*1]), &(inteval->stack[((hsi*5005+48125)*1+lsi)*1]), &(inteval->stack[((hsi*4290+53130)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+254210)*1+lsi)*1]), &(inteval->stack[((hsi*12870+241340)*1+lsi)*1]), &(inteval->stack[((hsi*10890+230450)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+275990)*1+lsi)*1]), &(inteval->stack[((hsi*5775+42350)*1+lsi)*1]), &(inteval->stack[((hsi*5005+48125)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+291005)*1+lsi)*1]), &(inteval->stack[((hsi*15015+275990)*1+lsi)*1]), &(inteval->stack[((hsi*12870+241340)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+316745)*1+lsi)*1]), &(inteval->stack[((hsi*25740+291005)*1+lsi)*1]), &(inteval->stack[((hsi*21780+254210)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+353045)*1+lsi)*1]), &(inteval->stack[((hsi*6600+35750)*1+lsi)*1]), &(inteval->stack[((hsi*5775+42350)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+370370)*1+lsi)*1]), &(inteval->stack[((hsi*17325+353045)*1+lsi)*1]), &(inteval->stack[((hsi*15015+275990)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+400400)*1+lsi)*1]), &(inteval->stack[((hsi*30030+370370)*1+lsi)*1]), &(inteval->stack[((hsi*25740+291005)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+443300)*1+lsi)*1]), &(inteval->stack[((hsi*42900+400400)*1+lsi)*1]), &(inteval->stack[((hsi*36300+316745)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+275990)*1+lsi)*1]), &(inteval->stack[((hsi*7480+28270)*1+lsi)*1]), &(inteval->stack[((hsi*6600+35750)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+497750)*1+lsi)*1]), &(inteval->stack[((hsi*19800+275990)*1+lsi)*1]), &(inteval->stack[((hsi*17325+353045)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+532400)*1+lsi)*1]), &(inteval->stack[((hsi*34650+497750)*1+lsi)*1]), &(inteval->stack[((hsi*30030+370370)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+582450)*1+lsi)*1]), &(inteval->stack[((hsi*50050+532400)*1+lsi)*1]), &(inteval->stack[((hsi*42900+400400)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+353045)*1+lsi)*1]), &(inteval->stack[((hsi*64350+582450)*1+lsi)*1]), &(inteval->stack[((hsi*54450+443300)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+646800)*1+lsi)*1]), &(inteval->stack[((hsi*8415+19855)*1+lsi)*1]), &(inteval->stack[((hsi*7480+28270)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+669240)*1+lsi)*1]), &(inteval->stack[((hsi*22440+646800)*1+lsi)*1]), &(inteval->stack[((hsi*19800+275990)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+708840)*1+lsi)*1]), &(inteval->stack[((hsi*39600+669240)*1+lsi)*1]), &(inteval->stack[((hsi*34650+497750)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+766590)*1+lsi)*1]), &(inteval->stack[((hsi*57750+708840)*1+lsi)*1]), &(inteval->stack[((hsi*50050+532400)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+841665)*1+lsi)*1]), &(inteval->stack[((hsi*75075+766590)*1+lsi)*1]), &(inteval->stack[((hsi*64350+582450)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+497750)*1+lsi)*1]), &(inteval->stack[((hsi*90090+841665)*1+lsi)*1]), &(inteval->stack[((hsi*76230+353045)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+599390)*1+lsi)*1]), &(inteval->stack[((hsi*9405+10450)*1+lsi)*1]), &(inteval->stack[((hsi*8415+19855)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+931755)*1+lsi)*1]), &(inteval->stack[((hsi*25245+599390)*1+lsi)*1]), &(inteval->stack[((hsi*22440+646800)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+976635)*1+lsi)*1]), &(inteval->stack[((hsi*44880+931755)*1+lsi)*1]), &(inteval->stack[((hsi*39600+669240)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+1042635)*1+lsi)*1]), &(inteval->stack[((hsi*66000+976635)*1+lsi)*1]), &(inteval->stack[((hsi*57750+708840)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+624635)*1+lsi)*1]), &(inteval->stack[((hsi*86625+1042635)*1+lsi)*1]), &(inteval->stack[((hsi*75075+766590)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+1129260)*1+lsi)*1]), &(inteval->stack[((hsi*105105+624635)*1+lsi)*1]), &(inteval->stack[((hsi*90090+841665)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+729740)*1+lsi)*1]), &(inteval->stack[((hsi*120120+1129260)*1+lsi)*1]), &(inteval->stack[((hsi*101640+497750)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+860420)*1+lsi)*1]), &(inteval->stack[((hsi*3630+57420)*1+lsi)*1]), &(inteval->stack[((hsi*3025+61050)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+869495)*1+lsi)*1]), &(inteval->stack[((hsi*10890+230450)*1+lsi)*1]), &(inteval->stack[((hsi*9075+860420)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+19855)*1+lsi)*1]), &(inteval->stack[((hsi*21780+254210)*1+lsi)*1]), &(inteval->stack[((hsi*18150+869495)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+230450)*1+lsi)*1]), &(inteval->stack[((hsi*36300+316745)*1+lsi)*1]), &(inteval->stack[((hsi*30250+19855)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+275825)*1+lsi)*1]), &(inteval->stack[((hsi*54450+443300)*1+lsi)*1]), &(inteval->stack[((hsi*45375+230450)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+1249380)*1+lsi)*1]), &(inteval->stack[((hsi*76230+353045)*1+lsi)*1]), &(inteval->stack[((hsi*63525+275825)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+230450)*1+lsi)*1]), &(inteval->stack[((hsi*101640+497750)*1+lsi)*1]), &(inteval->stack[((hsi*84700+1249380)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+339350)*1+lsi)*1]), &(inteval->stack[((hsi*130680+729740)*1+lsi)*1]), &(inteval->stack[((hsi*108900+230450)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+475475)*1+lsi)*1]), &(inteval->stack[((hsi*10450+0)*1+lsi)*1]), &(inteval->stack[((hsi*9405+10450)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+230450)*1+lsi)*1]), &(inteval->stack[((hsi*28215+475475)*1+lsi)*1]), &(inteval->stack[((hsi*25245+599390)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+475475)*1+lsi)*1]), &(inteval->stack[((hsi*50490+230450)*1+lsi)*1]), &(inteval->stack[((hsi*44880+931755)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+860420)*1+lsi)*1]), &(inteval->stack[((hsi*74800+475475)*1+lsi)*1]), &(inteval->stack[((hsi*66000+976635)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+475475)*1+lsi)*1]), &(inteval->stack[((hsi*99000+860420)*1+lsi)*1]), &(inteval->stack[((hsi*86625+1042635)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+860420)*1+lsi)*1]), &(inteval->stack[((hsi*121275+475475)*1+lsi)*1]), &(inteval->stack[((hsi*105105+624635)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+475475)*1+lsi)*1]), &(inteval->stack[((hsi*140140+860420)*1+lsi)*1]), &(inteval->stack[((hsi*120120+1129260)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+860420)*1+lsi)*1]), &(inteval->stack[((hsi*154440+475475)*1+lsi)*1]), &(inteval->stack[((hsi*130680+729740)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+64075)*1+lsi)*1]), &(inteval->stack[((hsi*163350+860420)*1+lsi)*1]), &(inteval->stack[((hsi*136125+339350)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*166375+64075)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
