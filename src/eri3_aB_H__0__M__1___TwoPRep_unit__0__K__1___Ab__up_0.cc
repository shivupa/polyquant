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
#include <eri3_aB_H__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_H__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16884)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_H__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+58464)*1+lsi)*1]), &(inteval->stack[((hsi*1638+12705)*1+lsi)*1]), &(inteval->stack[((hsi*1386+14343)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+62622)*1+lsi)*1]), &(inteval->stack[((hsi*1911+10794)*1+lsi)*1]), &(inteval->stack[((hsi*1638+12705)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+67536)*1+lsi)*1]), &(inteval->stack[((hsi*4914+62622)*1+lsi)*1]), &(inteval->stack[((hsi*4158+58464)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+75852)*1+lsi)*1]), &(inteval->stack[((hsi*2205+8589)*1+lsi)*1]), &(inteval->stack[((hsi*1911+10794)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+81585)*1+lsi)*1]), &(inteval->stack[((hsi*5733+75852)*1+lsi)*1]), &(inteval->stack[((hsi*4914+62622)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+91413)*1+lsi)*1]), &(inteval->stack[((hsi*9828+81585)*1+lsi)*1]), &(inteval->stack[((hsi*8316+67536)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+105273)*1+lsi)*1]), &(inteval->stack[((hsi*2520+6069)*1+lsi)*1]), &(inteval->stack[((hsi*2205+8589)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+111888)*1+lsi)*1]), &(inteval->stack[((hsi*6615+105273)*1+lsi)*1]), &(inteval->stack[((hsi*5733+75852)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+123354)*1+lsi)*1]), &(inteval->stack[((hsi*11466+111888)*1+lsi)*1]), &(inteval->stack[((hsi*9828+81585)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+139734)*1+lsi)*1]), &(inteval->stack[((hsi*16380+123354)*1+lsi)*1]), &(inteval->stack[((hsi*13860+91413)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+75852)*1+lsi)*1]), &(inteval->stack[((hsi*2856+3213)*1+lsi)*1]), &(inteval->stack[((hsi*2520+6069)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+160524)*1+lsi)*1]), &(inteval->stack[((hsi*7560+75852)*1+lsi)*1]), &(inteval->stack[((hsi*6615+105273)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+173754)*1+lsi)*1]), &(inteval->stack[((hsi*13230+160524)*1+lsi)*1]), &(inteval->stack[((hsi*11466+111888)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+192864)*1+lsi)*1]), &(inteval->stack[((hsi*19110+173754)*1+lsi)*1]), &(inteval->stack[((hsi*16380+123354)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+105273)*1+lsi)*1]), &(inteval->stack[((hsi*24570+192864)*1+lsi)*1]), &(inteval->stack[((hsi*20790+139734)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+6069)*1+lsi)*1]), &(inteval->stack[((hsi*1386+14343)*1+lsi)*1]), &(inteval->stack[((hsi*1155+15729)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+83412)*1+lsi)*1]), &(inteval->stack[((hsi*4158+58464)*1+lsi)*1]), &(inteval->stack[((hsi*3465+6069)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+217434)*1+lsi)*1]), &(inteval->stack[((hsi*8316+67536)*1+lsi)*1]), &(inteval->stack[((hsi*6930+83412)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+58464)*1+lsi)*1]), &(inteval->stack[((hsi*13860+91413)*1+lsi)*1]), &(inteval->stack[((hsi*11550+217434)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+217434)*1+lsi)*1]), &(inteval->stack[((hsi*20790+139734)*1+lsi)*1]), &(inteval->stack[((hsi*17325+58464)*1+lsi)*1]),21);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*32340+241689)*1+lsi)*1]), &(inteval->stack[((hsi*29106+105273)*1+lsi)*1]), &(inteval->stack[((hsi*24255+217434)*1+lsi)*1]),21);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*8568+134379)*1+lsi)*1]), &(inteval->stack[((hsi*3213+0)*1+lsi)*1]), &(inteval->stack[((hsi*2856+3213)*1+lsi)*1]),21);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*15120+217434)*1+lsi)*1]), &(inteval->stack[((hsi*8568+134379)*1+lsi)*1]), &(inteval->stack[((hsi*7560+75852)*1+lsi)*1]),21);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*22050+58464)*1+lsi)*1]), &(inteval->stack[((hsi*15120+217434)*1+lsi)*1]), &(inteval->stack[((hsi*13230+160524)*1+lsi)*1]),21);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*28665+134379)*1+lsi)*1]), &(inteval->stack[((hsi*22050+58464)*1+lsi)*1]), &(inteval->stack[((hsi*19110+173754)*1+lsi)*1]),21);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*34398+58464)*1+lsi)*1]), &(inteval->stack[((hsi*28665+134379)*1+lsi)*1]), &(inteval->stack[((hsi*24570+192864)*1+lsi)*1]),21);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*38808+134379)*1+lsi)*1]), &(inteval->stack[((hsi*34398+58464)*1+lsi)*1]), &(inteval->stack[((hsi*29106+105273)*1+lsi)*1]),21);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*41580+16884)*1+lsi)*1]), &(inteval->stack[((hsi*38808+134379)*1+lsi)*1]), &(inteval->stack[((hsi*32340+241689)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*41580+16884)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
