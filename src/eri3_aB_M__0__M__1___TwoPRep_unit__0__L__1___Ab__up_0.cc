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
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_M__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,53625)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+189750)*1+lsi)*1]), &(inteval->stack[((hsi*4290+42680)*1+lsi)*1]), &(inteval->stack[((hsi*3630+46970)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+200640)*1+lsi)*1]), &(inteval->stack[((hsi*5005+37675)*1+lsi)*1]), &(inteval->stack[((hsi*4290+42680)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+213510)*1+lsi)*1]), &(inteval->stack[((hsi*12870+200640)*1+lsi)*1]), &(inteval->stack[((hsi*10890+189750)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+235290)*1+lsi)*1]), &(inteval->stack[((hsi*5775+31900)*1+lsi)*1]), &(inteval->stack[((hsi*5005+37675)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+250305)*1+lsi)*1]), &(inteval->stack[((hsi*15015+235290)*1+lsi)*1]), &(inteval->stack[((hsi*12870+200640)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+276045)*1+lsi)*1]), &(inteval->stack[((hsi*25740+250305)*1+lsi)*1]), &(inteval->stack[((hsi*21780+213510)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+312345)*1+lsi)*1]), &(inteval->stack[((hsi*6600+25300)*1+lsi)*1]), &(inteval->stack[((hsi*5775+31900)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+329670)*1+lsi)*1]), &(inteval->stack[((hsi*17325+312345)*1+lsi)*1]), &(inteval->stack[((hsi*15015+235290)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+359700)*1+lsi)*1]), &(inteval->stack[((hsi*30030+329670)*1+lsi)*1]), &(inteval->stack[((hsi*25740+250305)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+402600)*1+lsi)*1]), &(inteval->stack[((hsi*42900+359700)*1+lsi)*1]), &(inteval->stack[((hsi*36300+276045)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+235290)*1+lsi)*1]), &(inteval->stack[((hsi*7480+17820)*1+lsi)*1]), &(inteval->stack[((hsi*6600+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+457050)*1+lsi)*1]), &(inteval->stack[((hsi*19800+235290)*1+lsi)*1]), &(inteval->stack[((hsi*17325+312345)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+491700)*1+lsi)*1]), &(inteval->stack[((hsi*34650+457050)*1+lsi)*1]), &(inteval->stack[((hsi*30030+329670)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+541750)*1+lsi)*1]), &(inteval->stack[((hsi*50050+491700)*1+lsi)*1]), &(inteval->stack[((hsi*42900+359700)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+312345)*1+lsi)*1]), &(inteval->stack[((hsi*64350+541750)*1+lsi)*1]), &(inteval->stack[((hsi*54450+402600)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+606100)*1+lsi)*1]), &(inteval->stack[((hsi*8415+9405)*1+lsi)*1]), &(inteval->stack[((hsi*7480+17820)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+628540)*1+lsi)*1]), &(inteval->stack[((hsi*22440+606100)*1+lsi)*1]), &(inteval->stack[((hsi*19800+235290)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+668140)*1+lsi)*1]), &(inteval->stack[((hsi*39600+628540)*1+lsi)*1]), &(inteval->stack[((hsi*34650+457050)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+725890)*1+lsi)*1]), &(inteval->stack[((hsi*57750+668140)*1+lsi)*1]), &(inteval->stack[((hsi*50050+491700)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+800965)*1+lsi)*1]), &(inteval->stack[((hsi*75075+725890)*1+lsi)*1]), &(inteval->stack[((hsi*64350+541750)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+457050)*1+lsi)*1]), &(inteval->stack[((hsi*90090+800965)*1+lsi)*1]), &(inteval->stack[((hsi*76230+312345)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+558690)*1+lsi)*1]), &(inteval->stack[((hsi*3630+46970)*1+lsi)*1]), &(inteval->stack[((hsi*3025+50600)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+235290)*1+lsi)*1]), &(inteval->stack[((hsi*10890+189750)*1+lsi)*1]), &(inteval->stack[((hsi*9075+558690)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+558690)*1+lsi)*1]), &(inteval->stack[((hsi*21780+213510)*1+lsi)*1]), &(inteval->stack[((hsi*18150+235290)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+189750)*1+lsi)*1]), &(inteval->stack[((hsi*36300+276045)*1+lsi)*1]), &(inteval->stack[((hsi*30250+558690)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+235125)*1+lsi)*1]), &(inteval->stack[((hsi*54450+402600)*1+lsi)*1]), &(inteval->stack[((hsi*45375+189750)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+891055)*1+lsi)*1]), &(inteval->stack[((hsi*76230+312345)*1+lsi)*1]), &(inteval->stack[((hsi*63525+235125)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+189750)*1+lsi)*1]), &(inteval->stack[((hsi*101640+457050)*1+lsi)*1]), &(inteval->stack[((hsi*84700+891055)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+298650)*1+lsi)*1]), &(inteval->stack[((hsi*9405+0)*1+lsi)*1]), &(inteval->stack[((hsi*8415+9405)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+323895)*1+lsi)*1]), &(inteval->stack[((hsi*25245+298650)*1+lsi)*1]), &(inteval->stack[((hsi*22440+606100)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+368775)*1+lsi)*1]), &(inteval->stack[((hsi*44880+323895)*1+lsi)*1]), &(inteval->stack[((hsi*39600+628540)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+558690)*1+lsi)*1]), &(inteval->stack[((hsi*66000+368775)*1+lsi)*1]), &(inteval->stack[((hsi*57750+668140)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+298650)*1+lsi)*1]), &(inteval->stack[((hsi*86625+558690)*1+lsi)*1]), &(inteval->stack[((hsi*75075+725890)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+558690)*1+lsi)*1]), &(inteval->stack[((hsi*105105+298650)*1+lsi)*1]), &(inteval->stack[((hsi*90090+800965)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+298650)*1+lsi)*1]), &(inteval->stack[((hsi*120120+558690)*1+lsi)*1]), &(inteval->stack[((hsi*101640+457050)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+53625)*1+lsi)*1]), &(inteval->stack[((hsi*130680+298650)*1+lsi)*1]), &(inteval->stack[((hsi*108900+189750)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*136125+53625)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
