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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29204)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+116522)*1+lsi)*1]), &(inteval->stack[((hsi*1911+24269)*1+lsi)*1]), &(inteval->stack[((hsi*1638+26180)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+121436)*1+lsi)*1]), &(inteval->stack[((hsi*2205+22064)*1+lsi)*1]), &(inteval->stack[((hsi*1911+24269)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+127169)*1+lsi)*1]), &(inteval->stack[((hsi*5733+121436)*1+lsi)*1]), &(inteval->stack[((hsi*4914+116522)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+136997)*1+lsi)*1]), &(inteval->stack[((hsi*2520+19544)*1+lsi)*1]), &(inteval->stack[((hsi*2205+22064)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+143612)*1+lsi)*1]), &(inteval->stack[((hsi*6615+136997)*1+lsi)*1]), &(inteval->stack[((hsi*5733+121436)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+155078)*1+lsi)*1]), &(inteval->stack[((hsi*11466+143612)*1+lsi)*1]), &(inteval->stack[((hsi*9828+127169)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+121436)*1+lsi)*1]), &(inteval->stack[((hsi*1638+26180)*1+lsi)*1]), &(inteval->stack[((hsi*1386+27818)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+171458)*1+lsi)*1]), &(inteval->stack[((hsi*4914+116522)*1+lsi)*1]), &(inteval->stack[((hsi*4158+121436)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+179774)*1+lsi)*1]), &(inteval->stack[((hsi*9828+127169)*1+lsi)*1]), &(inteval->stack[((hsi*8316+171458)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+193634)*1+lsi)*1]), &(inteval->stack[((hsi*16380+155078)*1+lsi)*1]), &(inteval->stack[((hsi*13860+179774)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+171458)*1+lsi)*1]), &(inteval->stack[((hsi*2856+16688)*1+lsi)*1]), &(inteval->stack[((hsi*2520+19544)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+116522)*1+lsi)*1]), &(inteval->stack[((hsi*7560+171458)*1+lsi)*1]), &(inteval->stack[((hsi*6615+136997)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+171458)*1+lsi)*1]), &(inteval->stack[((hsi*13230+116522)*1+lsi)*1]), &(inteval->stack[((hsi*11466+143612)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+116522)*1+lsi)*1]), &(inteval->stack[((hsi*19110+171458)*1+lsi)*1]), &(inteval->stack[((hsi*16380+155078)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+141092)*1+lsi)*1]), &(inteval->stack[((hsi*24570+116522)*1+lsi)*1]), &(inteval->stack[((hsi*20790+193634)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+116522)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+123074)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+170198)*1+lsi)*1]), &(inteval->stack[((hsi*7644+123074)*1+lsi)*1]), &(inteval->stack[((hsi*6552+116522)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+16688)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+183302)*1+lsi)*1]), &(inteval->stack[((hsi*8820+16688)*1+lsi)*1]), &(inteval->stack[((hsi*7644+123074)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+198590)*1+lsi)*1]), &(inteval->stack[((hsi*15288+183302)*1+lsi)*1]), &(inteval->stack[((hsi*13104+170198)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+123074)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]), &(inteval->stack[((hsi*1848+14840)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+128618)*1+lsi)*1]), &(inteval->stack[((hsi*6552+116522)*1+lsi)*1]), &(inteval->stack[((hsi*5544+123074)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+220430)*1+lsi)*1]), &(inteval->stack[((hsi*13104+170198)*1+lsi)*1]), &(inteval->stack[((hsi*11088+128618)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+238910)*1+lsi)*1]), &(inteval->stack[((hsi*21840+198590)*1+lsi)*1]), &(inteval->stack[((hsi*18480+220430)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+116522)*1+lsi)*1]), &(inteval->stack[((hsi*3808+0)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+220430)*1+lsi)*1]), &(inteval->stack[((hsi*10080+116522)*1+lsi)*1]), &(inteval->stack[((hsi*8820+16688)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+0)*1+lsi)*1]), &(inteval->stack[((hsi*17640+220430)*1+lsi)*1]), &(inteval->stack[((hsi*15288+183302)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+266630)*1+lsi)*1]), &(inteval->stack[((hsi*25480+0)*1+lsi)*1]), &(inteval->stack[((hsi*21840+198590)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+170198)*1+lsi)*1]), &(inteval->stack[((hsi*32760+266630)*1+lsi)*1]), &(inteval->stack[((hsi*27720+238910)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*87318+29204)*1+lsi)*1]), &(inteval->stack[((hsi*38808+170198)*1+lsi)*1]), &(inteval->stack[((hsi*29106+141092)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*87318+29204)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
