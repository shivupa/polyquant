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
#include <eri3_aB_M__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,50600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+181280)*1+lsi)*1]), &(inteval->stack[((hsi*5005+37675)*1+lsi)*1]), &(inteval->stack[((hsi*4290+42680)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+194150)*1+lsi)*1]), &(inteval->stack[((hsi*5775+31900)*1+lsi)*1]), &(inteval->stack[((hsi*5005+37675)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+209165)*1+lsi)*1]), &(inteval->stack[((hsi*15015+194150)*1+lsi)*1]), &(inteval->stack[((hsi*12870+181280)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+234905)*1+lsi)*1]), &(inteval->stack[((hsi*6600+25300)*1+lsi)*1]), &(inteval->stack[((hsi*5775+31900)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+252230)*1+lsi)*1]), &(inteval->stack[((hsi*17325+234905)*1+lsi)*1]), &(inteval->stack[((hsi*15015+194150)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+282260)*1+lsi)*1]), &(inteval->stack[((hsi*30030+252230)*1+lsi)*1]), &(inteval->stack[((hsi*25740+209165)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+325160)*1+lsi)*1]), &(inteval->stack[((hsi*7480+17820)*1+lsi)*1]), &(inteval->stack[((hsi*6600+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+344960)*1+lsi)*1]), &(inteval->stack[((hsi*19800+325160)*1+lsi)*1]), &(inteval->stack[((hsi*17325+234905)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+379610)*1+lsi)*1]), &(inteval->stack[((hsi*34650+344960)*1+lsi)*1]), &(inteval->stack[((hsi*30030+252230)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+429660)*1+lsi)*1]), &(inteval->stack[((hsi*50050+379610)*1+lsi)*1]), &(inteval->stack[((hsi*42900+282260)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+234905)*1+lsi)*1]), &(inteval->stack[((hsi*8415+9405)*1+lsi)*1]), &(inteval->stack[((hsi*7480+17820)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+494010)*1+lsi)*1]), &(inteval->stack[((hsi*22440+234905)*1+lsi)*1]), &(inteval->stack[((hsi*19800+325160)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+533610)*1+lsi)*1]), &(inteval->stack[((hsi*39600+494010)*1+lsi)*1]), &(inteval->stack[((hsi*34650+344960)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+591360)*1+lsi)*1]), &(inteval->stack[((hsi*57750+533610)*1+lsi)*1]), &(inteval->stack[((hsi*50050+379610)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+325160)*1+lsi)*1]), &(inteval->stack[((hsi*75075+591360)*1+lsi)*1]), &(inteval->stack[((hsi*64350+429660)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+257345)*1+lsi)*1]), &(inteval->stack[((hsi*4290+42680)*1+lsi)*1]), &(inteval->stack[((hsi*3630+46970)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+17820)*1+lsi)*1]), &(inteval->stack[((hsi*12870+181280)*1+lsi)*1]), &(inteval->stack[((hsi*10890+257345)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+666435)*1+lsi)*1]), &(inteval->stack[((hsi*25740+209165)*1+lsi)*1]), &(inteval->stack[((hsi*21780+17820)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+702735)*1+lsi)*1]), &(inteval->stack[((hsi*42900+282260)*1+lsi)*1]), &(inteval->stack[((hsi*36300+666435)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+757185)*1+lsi)*1]), &(inteval->stack[((hsi*64350+429660)*1+lsi)*1]), &(inteval->stack[((hsi*54450+702735)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+833415)*1+lsi)*1]), &(inteval->stack[((hsi*90090+325160)*1+lsi)*1]), &(inteval->stack[((hsi*76230+757185)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+666435)*1+lsi)*1]), &(inteval->stack[((hsi*9405+0)*1+lsi)*1]), &(inteval->stack[((hsi*8415+9405)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+691680)*1+lsi)*1]), &(inteval->stack[((hsi*25245+666435)*1+lsi)*1]), &(inteval->stack[((hsi*22440+234905)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+181280)*1+lsi)*1]), &(inteval->stack[((hsi*44880+691680)*1+lsi)*1]), &(inteval->stack[((hsi*39600+494010)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+666435)*1+lsi)*1]), &(inteval->stack[((hsi*66000+181280)*1+lsi)*1]), &(inteval->stack[((hsi*57750+533610)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+415250)*1+lsi)*1]), &(inteval->stack[((hsi*86625+666435)*1+lsi)*1]), &(inteval->stack[((hsi*75075+591360)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+520355)*1+lsi)*1]), &(inteval->stack[((hsi*105105+415250)*1+lsi)*1]), &(inteval->stack[((hsi*90090+325160)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+50600)*1+lsi)*1]), &(inteval->stack[((hsi*120120+520355)*1+lsi)*1]), &(inteval->stack[((hsi*101640+833415)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*130680+50600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
