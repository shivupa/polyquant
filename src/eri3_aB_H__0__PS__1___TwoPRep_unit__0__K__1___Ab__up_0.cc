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
#include <eri3_aB_H__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_H__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,19320)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_H__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+69216)*1+lsi)*1]), &(inteval->stack[((hsi*1911+14385)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16296)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+74130)*1+lsi)*1]), &(inteval->stack[((hsi*2205+12180)*1+lsi)*1]), &(inteval->stack[((hsi*1911+14385)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+79863)*1+lsi)*1]), &(inteval->stack[((hsi*5733+74130)*1+lsi)*1]), &(inteval->stack[((hsi*4914+69216)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+89691)*1+lsi)*1]), &(inteval->stack[((hsi*2520+9660)*1+lsi)*1]), &(inteval->stack[((hsi*2205+12180)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+96306)*1+lsi)*1]), &(inteval->stack[((hsi*6615+89691)*1+lsi)*1]), &(inteval->stack[((hsi*5733+74130)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+107772)*1+lsi)*1]), &(inteval->stack[((hsi*11466+96306)*1+lsi)*1]), &(inteval->stack[((hsi*9828+79863)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+124152)*1+lsi)*1]), &(inteval->stack[((hsi*2856+6804)*1+lsi)*1]), &(inteval->stack[((hsi*2520+9660)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+131712)*1+lsi)*1]), &(inteval->stack[((hsi*7560+124152)*1+lsi)*1]), &(inteval->stack[((hsi*6615+89691)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+144942)*1+lsi)*1]), &(inteval->stack[((hsi*13230+131712)*1+lsi)*1]), &(inteval->stack[((hsi*11466+96306)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+164052)*1+lsi)*1]), &(inteval->stack[((hsi*19110+144942)*1+lsi)*1]), &(inteval->stack[((hsi*16380+107772)*1+lsi)*1]),21);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*8568+89691)*1+lsi)*1]), &(inteval->stack[((hsi*3213+3591)*1+lsi)*1]), &(inteval->stack[((hsi*2856+6804)*1+lsi)*1]),21);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*15120+188622)*1+lsi)*1]), &(inteval->stack[((hsi*8568+89691)*1+lsi)*1]), &(inteval->stack[((hsi*7560+124152)*1+lsi)*1]),21);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*22050+203742)*1+lsi)*1]), &(inteval->stack[((hsi*15120+188622)*1+lsi)*1]), &(inteval->stack[((hsi*13230+131712)*1+lsi)*1]),21);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*28665+225792)*1+lsi)*1]), &(inteval->stack[((hsi*22050+203742)*1+lsi)*1]), &(inteval->stack[((hsi*19110+144942)*1+lsi)*1]),21);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*34398+124152)*1+lsi)*1]), &(inteval->stack[((hsi*28665+225792)*1+lsi)*1]), &(inteval->stack[((hsi*24570+164052)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+98259)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16296)*1+lsi)*1]), &(inteval->stack[((hsi*1386+17934)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+6804)*1+lsi)*1]), &(inteval->stack[((hsi*4914+69216)*1+lsi)*1]), &(inteval->stack[((hsi*4158+98259)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+254457)*1+lsi)*1]), &(inteval->stack[((hsi*9828+79863)*1+lsi)*1]), &(inteval->stack[((hsi*8316+6804)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+268317)*1+lsi)*1]), &(inteval->stack[((hsi*16380+107772)*1+lsi)*1]), &(inteval->stack[((hsi*13860+254457)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+289107)*1+lsi)*1]), &(inteval->stack[((hsi*24570+164052)*1+lsi)*1]), &(inteval->stack[((hsi*20790+268317)*1+lsi)*1]),21);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*38808+318213)*1+lsi)*1]), &(inteval->stack[((hsi*34398+124152)*1+lsi)*1]), &(inteval->stack[((hsi*29106+289107)*1+lsi)*1]),21);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*9639+254457)*1+lsi)*1]), &(inteval->stack[((hsi*3591+0)*1+lsi)*1]), &(inteval->stack[((hsi*3213+3591)*1+lsi)*1]),21);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*17136+264096)*1+lsi)*1]), &(inteval->stack[((hsi*9639+254457)*1+lsi)*1]), &(inteval->stack[((hsi*8568+89691)*1+lsi)*1]),21);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*25200+69216)*1+lsi)*1]), &(inteval->stack[((hsi*17136+264096)*1+lsi)*1]), &(inteval->stack[((hsi*15120+188622)*1+lsi)*1]),21);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*33075+254457)*1+lsi)*1]), &(inteval->stack[((hsi*25200+69216)*1+lsi)*1]), &(inteval->stack[((hsi*22050+203742)*1+lsi)*1]),21);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*40131+158550)*1+lsi)*1]), &(inteval->stack[((hsi*33075+254457)*1+lsi)*1]), &(inteval->stack[((hsi*28665+225792)*1+lsi)*1]),21);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*45864+198681)*1+lsi)*1]), &(inteval->stack[((hsi*40131+158550)*1+lsi)*1]), &(inteval->stack[((hsi*34398+124152)*1+lsi)*1]),21);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*49896+19320)*1+lsi)*1]), &(inteval->stack[((hsi*45864+198681)*1+lsi)*1]), &(inteval->stack[((hsi*38808+318213)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*49896+19320)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
