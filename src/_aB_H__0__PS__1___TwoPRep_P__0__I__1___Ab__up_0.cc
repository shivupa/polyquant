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
#include <_aB_H__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,36701)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+153125)*1+lsi)*1]), &(inteval->stack[((hsi*1911+31766)*1+lsi)*1]), &(inteval->stack[((hsi*1638+33677)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+158039)*1+lsi)*1]), &(inteval->stack[((hsi*2205+29561)*1+lsi)*1]), &(inteval->stack[((hsi*1911+31766)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+163772)*1+lsi)*1]), &(inteval->stack[((hsi*5733+158039)*1+lsi)*1]), &(inteval->stack[((hsi*4914+153125)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+173600)*1+lsi)*1]), &(inteval->stack[((hsi*2520+27041)*1+lsi)*1]), &(inteval->stack[((hsi*2205+29561)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+180215)*1+lsi)*1]), &(inteval->stack[((hsi*6615+173600)*1+lsi)*1]), &(inteval->stack[((hsi*5733+158039)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+191681)*1+lsi)*1]), &(inteval->stack[((hsi*11466+180215)*1+lsi)*1]), &(inteval->stack[((hsi*9828+163772)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+208061)*1+lsi)*1]), &(inteval->stack[((hsi*2856+24185)*1+lsi)*1]), &(inteval->stack[((hsi*2520+27041)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+215621)*1+lsi)*1]), &(inteval->stack[((hsi*7560+208061)*1+lsi)*1]), &(inteval->stack[((hsi*6615+173600)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+228851)*1+lsi)*1]), &(inteval->stack[((hsi*13230+215621)*1+lsi)*1]), &(inteval->stack[((hsi*11466+180215)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+247961)*1+lsi)*1]), &(inteval->stack[((hsi*19110+228851)*1+lsi)*1]), &(inteval->stack[((hsi*16380+191681)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+173600)*1+lsi)*1]), &(inteval->stack[((hsi*1638+33677)*1+lsi)*1]), &(inteval->stack[((hsi*1386+35315)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+177758)*1+lsi)*1]), &(inteval->stack[((hsi*4914+153125)*1+lsi)*1]), &(inteval->stack[((hsi*4158+173600)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+272531)*1+lsi)*1]), &(inteval->stack[((hsi*9828+163772)*1+lsi)*1]), &(inteval->stack[((hsi*8316+177758)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+153125)*1+lsi)*1]), &(inteval->stack[((hsi*16380+191681)*1+lsi)*1]), &(inteval->stack[((hsi*13860+272531)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+173915)*1+lsi)*1]), &(inteval->stack[((hsi*24570+247961)*1+lsi)*1]), &(inteval->stack[((hsi*20790+153125)*1+lsi)*1]),21);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*8568+153125)*1+lsi)*1]), &(inteval->stack[((hsi*3213+20972)*1+lsi)*1]), &(inteval->stack[((hsi*2856+24185)*1+lsi)*1]),21);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*15120+20972)*1+lsi)*1]), &(inteval->stack[((hsi*8568+153125)*1+lsi)*1]), &(inteval->stack[((hsi*7560+208061)*1+lsi)*1]),21);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*22050+272531)*1+lsi)*1]), &(inteval->stack[((hsi*15120+20972)*1+lsi)*1]), &(inteval->stack[((hsi*13230+215621)*1+lsi)*1]),21);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*28665+294581)*1+lsi)*1]), &(inteval->stack[((hsi*22050+272531)*1+lsi)*1]), &(inteval->stack[((hsi*19110+228851)*1+lsi)*1]),21);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*34398+203021)*1+lsi)*1]), &(inteval->stack[((hsi*28665+294581)*1+lsi)*1]), &(inteval->stack[((hsi*24570+247961)*1+lsi)*1]),21);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*38808+237419)*1+lsi)*1]), &(inteval->stack[((hsi*34398+203021)*1+lsi)*1]), &(inteval->stack[((hsi*29106+173915)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+153125)*1+lsi)*1]), &(inteval->stack[((hsi*2548+14392)*1+lsi)*1]), &(inteval->stack[((hsi*2184+16940)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+159677)*1+lsi)*1]), &(inteval->stack[((hsi*2940+11452)*1+lsi)*1]), &(inteval->stack[((hsi*2548+14392)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+167321)*1+lsi)*1]), &(inteval->stack[((hsi*7644+159677)*1+lsi)*1]), &(inteval->stack[((hsi*6552+153125)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+180425)*1+lsi)*1]), &(inteval->stack[((hsi*3360+8092)*1+lsi)*1]), &(inteval->stack[((hsi*2940+11452)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+189245)*1+lsi)*1]), &(inteval->stack[((hsi*8820+180425)*1+lsi)*1]), &(inteval->stack[((hsi*7644+159677)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+204533)*1+lsi)*1]), &(inteval->stack[((hsi*15288+189245)*1+lsi)*1]), &(inteval->stack[((hsi*13104+167321)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+20972)*1+lsi)*1]), &(inteval->stack[((hsi*3808+4284)*1+lsi)*1]), &(inteval->stack[((hsi*3360+8092)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+276227)*1+lsi)*1]), &(inteval->stack[((hsi*10080+20972)*1+lsi)*1]), &(inteval->stack[((hsi*8820+180425)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+293867)*1+lsi)*1]), &(inteval->stack[((hsi*17640+276227)*1+lsi)*1]), &(inteval->stack[((hsi*15288+189245)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+319347)*1+lsi)*1]), &(inteval->stack[((hsi*25480+293867)*1+lsi)*1]), &(inteval->stack[((hsi*21840+204533)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+180425)*1+lsi)*1]), &(inteval->stack[((hsi*2184+16940)*1+lsi)*1]), &(inteval->stack[((hsi*1848+19124)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+185969)*1+lsi)*1]), &(inteval->stack[((hsi*6552+153125)*1+lsi)*1]), &(inteval->stack[((hsi*5544+180425)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+352107)*1+lsi)*1]), &(inteval->stack[((hsi*13104+167321)*1+lsi)*1]), &(inteval->stack[((hsi*11088+185969)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+153125)*1+lsi)*1]), &(inteval->stack[((hsi*21840+204533)*1+lsi)*1]), &(inteval->stack[((hsi*18480+352107)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+180845)*1+lsi)*1]), &(inteval->stack[((hsi*32760+319347)*1+lsi)*1]), &(inteval->stack[((hsi*27720+153125)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+153125)*1+lsi)*1]), &(inteval->stack[((hsi*4284+0)*1+lsi)*1]), &(inteval->stack[((hsi*3808+4284)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+0)*1+lsi)*1]), &(inteval->stack[((hsi*11424+153125)*1+lsi)*1]), &(inteval->stack[((hsi*10080+20972)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+352107)*1+lsi)*1]), &(inteval->stack[((hsi*20160+0)*1+lsi)*1]), &(inteval->stack[((hsi*17640+276227)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+381507)*1+lsi)*1]), &(inteval->stack[((hsi*29400+352107)*1+lsi)*1]), &(inteval->stack[((hsi*25480+293867)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+419727)*1+lsi)*1]), &(inteval->stack[((hsi*38220+381507)*1+lsi)*1]), &(inteval->stack[((hsi*32760+319347)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+276227)*1+lsi)*1]), &(inteval->stack[((hsi*45864+419727)*1+lsi)*1]), &(inteval->stack[((hsi*38808+180845)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*116424+36701)*1+lsi)*1]), &(inteval->stack[((hsi*51744+276227)*1+lsi)*1]), &(inteval->stack[((hsi*38808+237419)*1+lsi)*1]),1848);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*116424+36701)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
