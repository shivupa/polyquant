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
#include <HRRPart1bra0ket0mp.h>
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
#include <eri3_aB_M__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,35805)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+120505)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29150)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+131395)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+144265)*1+lsi)*1]), &(inteval->stack[((hsi*12870+131395)*1+lsi)*1]), &(inteval->stack[((hsi*10890+120505)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+166045)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+181060)*1+lsi)*1]), &(inteval->stack[((hsi*15015+166045)*1+lsi)*1]), &(inteval->stack[((hsi*12870+131395)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+206800)*1+lsi)*1]), &(inteval->stack[((hsi*25740+181060)*1+lsi)*1]), &(inteval->stack[((hsi*21780+144265)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+243100)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+260425)*1+lsi)*1]), &(inteval->stack[((hsi*17325+243100)*1+lsi)*1]), &(inteval->stack[((hsi*15015+166045)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+290455)*1+lsi)*1]), &(inteval->stack[((hsi*30030+260425)*1+lsi)*1]), &(inteval->stack[((hsi*25740+181060)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+333355)*1+lsi)*1]), &(inteval->stack[((hsi*42900+290455)*1+lsi)*1]), &(inteval->stack[((hsi*36300+206800)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+166045)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29150)*1+lsi)*1]), &(inteval->stack[((hsi*3025+32780)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+175120)*1+lsi)*1]), &(inteval->stack[((hsi*10890+120505)*1+lsi)*1]), &(inteval->stack[((hsi*9075+166045)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+387805)*1+lsi)*1]), &(inteval->stack[((hsi*21780+144265)*1+lsi)*1]), &(inteval->stack[((hsi*18150+175120)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+120505)*1+lsi)*1]), &(inteval->stack[((hsi*36300+206800)*1+lsi)*1]), &(inteval->stack[((hsi*30250+387805)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+165880)*1+lsi)*1]), &(inteval->stack[((hsi*54450+333355)*1+lsi)*1]), &(inteval->stack[((hsi*45375+120505)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+120505)*1+lsi)*1]), &(inteval->stack[((hsi*7480+0)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+0)*1+lsi)*1]), &(inteval->stack[((hsi*19800+120505)*1+lsi)*1]), &(inteval->stack[((hsi*17325+243100)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+387805)*1+lsi)*1]), &(inteval->stack[((hsi*34650+0)*1+lsi)*1]), &(inteval->stack[((hsi*30030+260425)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+437855)*1+lsi)*1]), &(inteval->stack[((hsi*50050+387805)*1+lsi)*1]), &(inteval->stack[((hsi*42900+290455)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+229405)*1+lsi)*1]), &(inteval->stack[((hsi*64350+437855)*1+lsi)*1]), &(inteval->stack[((hsi*54450+333355)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+35805)*1+lsi)*1]), &(inteval->stack[((hsi*76230+229405)*1+lsi)*1]), &(inteval->stack[((hsi*63525+165880)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*84700+35805)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
