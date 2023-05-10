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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lk.h>
#include <HRRPart1bra0ket0ll.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_F__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_F__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8490)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_F__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+28740)*1+lsi)*1]), &(inteval->stack[((hsi*660+6830)*1+lsi)*1]), &(inteval->stack[((hsi*550+7490)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+30390)*1+lsi)*1]), &(inteval->stack[((hsi*780+6050)*1+lsi)*1]), &(inteval->stack[((hsi*660+6830)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+32370)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30390)*1+lsi)*1]), &(inteval->stack[((hsi*1650+28740)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+35670)*1+lsi)*1]), &(inteval->stack[((hsi*910+5140)*1+lsi)*1]), &(inteval->stack[((hsi*780+6050)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+38010)*1+lsi)*1]), &(inteval->stack[((hsi*2340+35670)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30390)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+41970)*1+lsi)*1]), &(inteval->stack[((hsi*3960+38010)*1+lsi)*1]), &(inteval->stack[((hsi*3300+32370)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+47470)*1+lsi)*1]), &(inteval->stack[((hsi*1050+4090)*1+lsi)*1]), &(inteval->stack[((hsi*910+5140)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+50200)*1+lsi)*1]), &(inteval->stack[((hsi*2730+47470)*1+lsi)*1]), &(inteval->stack[((hsi*2340+35670)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+54880)*1+lsi)*1]), &(inteval->stack[((hsi*4680+50200)*1+lsi)*1]), &(inteval->stack[((hsi*3960+38010)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+61480)*1+lsi)*1]), &(inteval->stack[((hsi*6600+54880)*1+lsi)*1]), &(inteval->stack[((hsi*5500+41970)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+35670)*1+lsi)*1]), &(inteval->stack[((hsi*1200+2890)*1+lsi)*1]), &(inteval->stack[((hsi*1050+4090)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+69730)*1+lsi)*1]), &(inteval->stack[((hsi*3150+35670)*1+lsi)*1]), &(inteval->stack[((hsi*2730+47470)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+75190)*1+lsi)*1]), &(inteval->stack[((hsi*5460+69730)*1+lsi)*1]), &(inteval->stack[((hsi*4680+50200)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+82990)*1+lsi)*1]), &(inteval->stack[((hsi*7800+75190)*1+lsi)*1]), &(inteval->stack[((hsi*6600+54880)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+47470)*1+lsi)*1]), &(inteval->stack[((hsi*9900+82990)*1+lsi)*1]), &(inteval->stack[((hsi*8250+61480)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+92890)*1+lsi)*1]), &(inteval->stack[((hsi*1360+1530)*1+lsi)*1]), &(inteval->stack[((hsi*1200+2890)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+96490)*1+lsi)*1]), &(inteval->stack[((hsi*3600+92890)*1+lsi)*1]), &(inteval->stack[((hsi*3150+35670)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+102790)*1+lsi)*1]), &(inteval->stack[((hsi*6300+96490)*1+lsi)*1]), &(inteval->stack[((hsi*5460+69730)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+111890)*1+lsi)*1]), &(inteval->stack[((hsi*9100+102790)*1+lsi)*1]), &(inteval->stack[((hsi*7800+75190)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+123590)*1+lsi)*1]), &(inteval->stack[((hsi*11700+111890)*1+lsi)*1]), &(inteval->stack[((hsi*9900+82990)*1+lsi)*1]),10);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*15400+69730)*1+lsi)*1]), &(inteval->stack[((hsi*13860+123590)*1+lsi)*1]), &(inteval->stack[((hsi*11550+47470)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+85130)*1+lsi)*1]), &(inteval->stack[((hsi*550+7490)*1+lsi)*1]), &(inteval->stack[((hsi*450+8040)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+86480)*1+lsi)*1]), &(inteval->stack[((hsi*1650+28740)*1+lsi)*1]), &(inteval->stack[((hsi*1350+85130)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+35670)*1+lsi)*1]), &(inteval->stack[((hsi*3300+32370)*1+lsi)*1]), &(inteval->stack[((hsi*2700+86480)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+85130)*1+lsi)*1]), &(inteval->stack[((hsi*5500+41970)*1+lsi)*1]), &(inteval->stack[((hsi*4500+35670)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+28740)*1+lsi)*1]), &(inteval->stack[((hsi*8250+61480)*1+lsi)*1]), &(inteval->stack[((hsi*6750+85130)*1+lsi)*1]),10);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*12600+137450)*1+lsi)*1]), &(inteval->stack[((hsi*11550+47470)*1+lsi)*1]), &(inteval->stack[((hsi*9450+28740)*1+lsi)*1]),10);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*16200+28740)*1+lsi)*1]), &(inteval->stack[((hsi*15400+69730)*1+lsi)*1]), &(inteval->stack[((hsi*12600+137450)*1+lsi)*1]),10);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*4080+44940)*1+lsi)*1]), &(inteval->stack[((hsi*1530+0)*1+lsi)*1]), &(inteval->stack[((hsi*1360+1530)*1+lsi)*1]),10);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*7200+49020)*1+lsi)*1]), &(inteval->stack[((hsi*4080+44940)*1+lsi)*1]), &(inteval->stack[((hsi*3600+92890)*1+lsi)*1]),10);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*10500+56220)*1+lsi)*1]), &(inteval->stack[((hsi*7200+49020)*1+lsi)*1]), &(inteval->stack[((hsi*6300+96490)*1+lsi)*1]),10);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*13650+85130)*1+lsi)*1]), &(inteval->stack[((hsi*10500+56220)*1+lsi)*1]), &(inteval->stack[((hsi*9100+102790)*1+lsi)*1]),10);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*16380+44940)*1+lsi)*1]), &(inteval->stack[((hsi*13650+85130)*1+lsi)*1]), &(inteval->stack[((hsi*11700+111890)*1+lsi)*1]),10);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*18480+85130)*1+lsi)*1]), &(inteval->stack[((hsi*16380+44940)*1+lsi)*1]), &(inteval->stack[((hsi*13860+123590)*1+lsi)*1]),10);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*19800+44940)*1+lsi)*1]), &(inteval->stack[((hsi*18480+85130)*1+lsi)*1]), &(inteval->stack[((hsi*15400+69730)*1+lsi)*1]),10);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*20250+8490)*1+lsi)*1]), &(inteval->stack[((hsi*19800+44940)*1+lsi)*1]), &(inteval->stack[((hsi*16200+28740)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*20250+8490)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
