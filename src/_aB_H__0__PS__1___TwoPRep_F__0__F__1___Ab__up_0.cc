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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,44200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+182800)*1+lsi)*1]), &(inteval->stack[((hsi*2808+28990)*1+lsi)*1]), &(inteval->stack[((hsi*2184+31798)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+189352)*1+lsi)*1]), &(inteval->stack[((hsi*2184+31798)*1+lsi)*1]), &(inteval->stack[((hsi*1638+33982)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+194266)*1+lsi)*1]), &(inteval->stack[((hsi*6552+182800)*1+lsi)*1]), &(inteval->stack[((hsi*4914+189352)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+204094)*1+lsi)*1]), &(inteval->stack[((hsi*3510+25480)*1+lsi)*1]), &(inteval->stack[((hsi*2808+28990)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+212518)*1+lsi)*1]), &(inteval->stack[((hsi*8424+204094)*1+lsi)*1]), &(inteval->stack[((hsi*6552+182800)*1+lsi)*1]),78);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*16380+225622)*1+lsi)*1]), &(inteval->stack[((hsi*13104+212518)*1+lsi)*1]), &(inteval->stack[((hsi*9828+194266)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7644+182800)*1+lsi)*1]), &(inteval->stack[((hsi*3276+17745)*1+lsi)*1]), &(inteval->stack[((hsi*2548+21021)*1+lsi)*1]),91);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5733+190444)*1+lsi)*1]), &(inteval->stack[((hsi*2548+21021)*1+lsi)*1]), &(inteval->stack[((hsi*1911+23569)*1+lsi)*1]),91);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*11466+196177)*1+lsi)*1]), &(inteval->stack[((hsi*7644+182800)*1+lsi)*1]), &(inteval->stack[((hsi*5733+190444)*1+lsi)*1]),91);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*9828+207643)*1+lsi)*1]), &(inteval->stack[((hsi*4095+13650)*1+lsi)*1]), &(inteval->stack[((hsi*3276+17745)*1+lsi)*1]),91);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*15288+13650)*1+lsi)*1]), &(inteval->stack[((hsi*9828+207643)*1+lsi)*1]), &(inteval->stack[((hsi*7644+182800)*1+lsi)*1]),91);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*19110+242002)*1+lsi)*1]), &(inteval->stack[((hsi*15288+13650)*1+lsi)*1]), &(inteval->stack[((hsi*11466+196177)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*49140+261112)*1+lsi)*1]), &(inteval->stack[((hsi*19110+242002)*1+lsi)*1]), &(inteval->stack[((hsi*16380+225622)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+182800)*1+lsi)*1]), &(inteval->stack[((hsi*2376+38590)*1+lsi)*1]), &(inteval->stack[((hsi*1848+40966)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+188344)*1+lsi)*1]), &(inteval->stack[((hsi*1848+40966)*1+lsi)*1]), &(inteval->stack[((hsi*1386+42814)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+192502)*1+lsi)*1]), &(inteval->stack[((hsi*5544+182800)*1+lsi)*1]), &(inteval->stack[((hsi*4158+188344)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+200818)*1+lsi)*1]), &(inteval->stack[((hsi*2970+35620)*1+lsi)*1]), &(inteval->stack[((hsi*2376+38590)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+13650)*1+lsi)*1]), &(inteval->stack[((hsi*7128+200818)*1+lsi)*1]), &(inteval->stack[((hsi*5544+182800)*1+lsi)*1]),66);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+200818)*1+lsi)*1]), &(inteval->stack[((hsi*11088+13650)*1+lsi)*1]), &(inteval->stack[((hsi*8316+192502)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*41580+310252)*1+lsi)*1]), &(inteval->stack[((hsi*16380+225622)*1+lsi)*1]), &(inteval->stack[((hsi*13860+200818)*1+lsi)*1]),210);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*83160+351832)*1+lsi)*1]), &(inteval->stack[((hsi*49140+261112)*1+lsi)*1]), &(inteval->stack[((hsi*41580+310252)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*8820+182800)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4725)*1+lsi)*1]), &(inteval->stack[((hsi*2940+8505)*1+lsi)*1]),105);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6615+191620)*1+lsi)*1]), &(inteval->stack[((hsi*2940+8505)*1+lsi)*1]), &(inteval->stack[((hsi*2205+11445)*1+lsi)*1]),105);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*13230+198235)*1+lsi)*1]), &(inteval->stack[((hsi*8820+182800)*1+lsi)*1]), &(inteval->stack[((hsi*6615+191620)*1+lsi)*1]),105);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11340+310252)*1+lsi)*1]), &(inteval->stack[((hsi*4725+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4725)*1+lsi)*1]),105);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*17640+0)*1+lsi)*1]), &(inteval->stack[((hsi*11340+310252)*1+lsi)*1]), &(inteval->stack[((hsi*8820+182800)*1+lsi)*1]),105);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*22050+310252)*1+lsi)*1]), &(inteval->stack[((hsi*17640+0)*1+lsi)*1]), &(inteval->stack[((hsi*13230+198235)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*57330+182800)*1+lsi)*1]), &(inteval->stack[((hsi*22050+310252)*1+lsi)*1]), &(inteval->stack[((hsi*19110+242002)*1+lsi)*1]),210);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*98280+434992)*1+lsi)*1]), &(inteval->stack[((hsi*57330+182800)*1+lsi)*1]), &(inteval->stack[((hsi*49140+261112)*1+lsi)*1]),210);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*138600+44200)*1+lsi)*1]), &(inteval->stack[((hsi*98280+434992)*1+lsi)*1]), &(inteval->stack[((hsi*83160+351832)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*138600+44200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
