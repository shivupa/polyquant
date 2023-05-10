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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_G__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__L__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,20160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+76860)*1+lsi)*1]), &(inteval->stack[((hsi*990+17670)*1+lsi)*1]), &(inteval->stack[((hsi*825+18660)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+79335)*1+lsi)*1]), &(inteval->stack[((hsi*1170+16500)*1+lsi)*1]), &(inteval->stack[((hsi*990+17670)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+82305)*1+lsi)*1]), &(inteval->stack[((hsi*2970+79335)*1+lsi)*1]), &(inteval->stack[((hsi*2475+76860)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+87255)*1+lsi)*1]), &(inteval->stack[((hsi*1365+15135)*1+lsi)*1]), &(inteval->stack[((hsi*1170+16500)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+90765)*1+lsi)*1]), &(inteval->stack[((hsi*3510+87255)*1+lsi)*1]), &(inteval->stack[((hsi*2970+79335)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+96705)*1+lsi)*1]), &(inteval->stack[((hsi*5940+90765)*1+lsi)*1]), &(inteval->stack[((hsi*4950+82305)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+104955)*1+lsi)*1]), &(inteval->stack[((hsi*1575+13560)*1+lsi)*1]), &(inteval->stack[((hsi*1365+15135)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+109050)*1+lsi)*1]), &(inteval->stack[((hsi*4095+104955)*1+lsi)*1]), &(inteval->stack[((hsi*3510+87255)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+116070)*1+lsi)*1]), &(inteval->stack[((hsi*7020+109050)*1+lsi)*1]), &(inteval->stack[((hsi*5940+90765)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+125970)*1+lsi)*1]), &(inteval->stack[((hsi*9900+116070)*1+lsi)*1]), &(inteval->stack[((hsi*8250+96705)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+87255)*1+lsi)*1]), &(inteval->stack[((hsi*825+18660)*1+lsi)*1]), &(inteval->stack[((hsi*675+19485)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+89280)*1+lsi)*1]), &(inteval->stack[((hsi*2475+76860)*1+lsi)*1]), &(inteval->stack[((hsi*2025+87255)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+138345)*1+lsi)*1]), &(inteval->stack[((hsi*4950+82305)*1+lsi)*1]), &(inteval->stack[((hsi*4050+89280)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+76860)*1+lsi)*1]), &(inteval->stack[((hsi*8250+96705)*1+lsi)*1]), &(inteval->stack[((hsi*6750+138345)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+86985)*1+lsi)*1]), &(inteval->stack[((hsi*12375+125970)*1+lsi)*1]), &(inteval->stack[((hsi*10125+76860)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+76860)*1+lsi)*1]), &(inteval->stack[((hsi*1800+11760)*1+lsi)*1]), &(inteval->stack[((hsi*1575+13560)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+11760)*1+lsi)*1]), &(inteval->stack[((hsi*4725+76860)*1+lsi)*1]), &(inteval->stack[((hsi*4095+104955)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+138345)*1+lsi)*1]), &(inteval->stack[((hsi*8190+11760)*1+lsi)*1]), &(inteval->stack[((hsi*7020+109050)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+101160)*1+lsi)*1]), &(inteval->stack[((hsi*11700+138345)*1+lsi)*1]), &(inteval->stack[((hsi*9900+116070)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+138345)*1+lsi)*1]), &(inteval->stack[((hsi*14850+101160)*1+lsi)*1]), &(inteval->stack[((hsi*12375+125970)*1+lsi)*1]),15);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*18900+101160)*1+lsi)*1]), &(inteval->stack[((hsi*17325+138345)*1+lsi)*1]), &(inteval->stack[((hsi*14175+86985)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+76860)*1+lsi)*1]), &(inteval->stack[((hsi*1386+8274)*1+lsi)*1]), &(inteval->stack[((hsi*1155+9660)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+80325)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6636)*1+lsi)*1]), &(inteval->stack[((hsi*1386+8274)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+84483)*1+lsi)*1]), &(inteval->stack[((hsi*4158+80325)*1+lsi)*1]), &(inteval->stack[((hsi*3465+76860)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+91413)*1+lsi)*1]), &(inteval->stack[((hsi*1911+4725)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6636)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+11760)*1+lsi)*1]), &(inteval->stack[((hsi*4914+91413)*1+lsi)*1]), &(inteval->stack[((hsi*4158+80325)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+120060)*1+lsi)*1]), &(inteval->stack[((hsi*8316+11760)*1+lsi)*1]), &(inteval->stack[((hsi*6930+84483)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+131610)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2520)*1+lsi)*1]), &(inteval->stack[((hsi*1911+4725)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+137343)*1+lsi)*1]), &(inteval->stack[((hsi*5733+131610)*1+lsi)*1]), &(inteval->stack[((hsi*4914+91413)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+147171)*1+lsi)*1]), &(inteval->stack[((hsi*9828+137343)*1+lsi)*1]), &(inteval->stack[((hsi*8316+11760)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+161031)*1+lsi)*1]), &(inteval->stack[((hsi*13860+147171)*1+lsi)*1]), &(inteval->stack[((hsi*11550+120060)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+91413)*1+lsi)*1]), &(inteval->stack[((hsi*1155+9660)*1+lsi)*1]), &(inteval->stack[((hsi*945+10815)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+4725)*1+lsi)*1]), &(inteval->stack[((hsi*3465+76860)*1+lsi)*1]), &(inteval->stack[((hsi*2835+91413)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+10395)*1+lsi)*1]), &(inteval->stack[((hsi*6930+84483)*1+lsi)*1]), &(inteval->stack[((hsi*5670+4725)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+76860)*1+lsi)*1]), &(inteval->stack[((hsi*11550+120060)*1+lsi)*1]), &(inteval->stack[((hsi*9450+10395)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+178356)*1+lsi)*1]), &(inteval->stack[((hsi*17325+161031)*1+lsi)*1]), &(inteval->stack[((hsi*14175+76860)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+76860)*1+lsi)*1]), &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2520)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*6615+76860)*1+lsi)*1]), &(inteval->stack[((hsi*5733+131610)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+76860)*1+lsi)*1]), &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+137343)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+120060)*1+lsi)*1]), &(inteval->stack[((hsi*16380+76860)*1+lsi)*1]), &(inteval->stack[((hsi*13860+147171)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+76860)*1+lsi)*1]), &(inteval->stack[((hsi*20790+120060)*1+lsi)*1]), &(inteval->stack[((hsi*17325+161031)*1+lsi)*1]),21);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*26460+120060)*1+lsi)*1]), &(inteval->stack[((hsi*24255+76860)*1+lsi)*1]), &(inteval->stack[((hsi*19845+178356)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*56700+20160)*1+lsi)*1]), &(inteval->stack[((hsi*26460+120060)*1+lsi)*1]), &(inteval->stack[((hsi*18900+101160)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*56700+20160)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
