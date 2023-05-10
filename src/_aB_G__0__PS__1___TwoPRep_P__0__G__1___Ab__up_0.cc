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
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_G__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16560)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+61110)*1+lsi)*1]), &(inteval->stack[((hsi*1365+13035)*1+lsi)*1]), &(inteval->stack[((hsi*1170+14400)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+64620)*1+lsi)*1]), &(inteval->stack[((hsi*1575+11460)*1+lsi)*1]), &(inteval->stack[((hsi*1365+13035)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+68715)*1+lsi)*1]), &(inteval->stack[((hsi*4095+64620)*1+lsi)*1]), &(inteval->stack[((hsi*3510+61110)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+75735)*1+lsi)*1]), &(inteval->stack[((hsi*1170+14400)*1+lsi)*1]), &(inteval->stack[((hsi*990+15570)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+78705)*1+lsi)*1]), &(inteval->stack[((hsi*3510+61110)*1+lsi)*1]), &(inteval->stack[((hsi*2970+75735)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+84645)*1+lsi)*1]), &(inteval->stack[((hsi*7020+68715)*1+lsi)*1]), &(inteval->stack[((hsi*5940+78705)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+75735)*1+lsi)*1]), &(inteval->stack[((hsi*1800+9660)*1+lsi)*1]), &(inteval->stack[((hsi*1575+11460)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+94545)*1+lsi)*1]), &(inteval->stack[((hsi*4725+75735)*1+lsi)*1]), &(inteval->stack[((hsi*4095+64620)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+102735)*1+lsi)*1]), &(inteval->stack[((hsi*8190+94545)*1+lsi)*1]), &(inteval->stack[((hsi*7020+68715)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+61110)*1+lsi)*1]), &(inteval->stack[((hsi*11700+102735)*1+lsi)*1]), &(inteval->stack[((hsi*9900+84645)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+9660)*1+lsi)*1]), &(inteval->stack[((hsi*1911+4725)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6636)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+75960)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2520)*1+lsi)*1]), &(inteval->stack[((hsi*1911+4725)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+81693)*1+lsi)*1]), &(inteval->stack[((hsi*5733+75960)*1+lsi)*1]), &(inteval->stack[((hsi*4914+9660)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+91521)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6636)*1+lsi)*1]), &(inteval->stack[((hsi*1386+8274)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+95679)*1+lsi)*1]), &(inteval->stack[((hsi*4914+9660)*1+lsi)*1]), &(inteval->stack[((hsi*4158+91521)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+103995)*1+lsi)*1]), &(inteval->stack[((hsi*9828+81693)*1+lsi)*1]), &(inteval->stack[((hsi*8316+95679)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+91521)*1+lsi)*1]), &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2520)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*6615+91521)*1+lsi)*1]), &(inteval->stack[((hsi*5733+75960)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+117855)*1+lsi)*1]), &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+81693)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+75960)*1+lsi)*1]), &(inteval->stack[((hsi*16380+117855)*1+lsi)*1]), &(inteval->stack[((hsi*13860+103995)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*44550+16560)*1+lsi)*1]), &(inteval->stack[((hsi*20790+75960)*1+lsi)*1]), &(inteval->stack[((hsi*14850+61110)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*44550+16560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
