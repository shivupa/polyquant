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
#include <eri3_aB_K__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_K__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,23436)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+78876)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16272)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19080)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+86004)*1+lsi)*1]), &(inteval->stack[((hsi*3276+12996)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16272)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+94428)*1+lsi)*1]), &(inteval->stack[((hsi*8424+86004)*1+lsi)*1]), &(inteval->stack[((hsi*7128+78876)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+108684)*1+lsi)*1]), &(inteval->stack[((hsi*3780+9216)*1+lsi)*1]), &(inteval->stack[((hsi*3276+12996)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+118512)*1+lsi)*1]), &(inteval->stack[((hsi*9828+108684)*1+lsi)*1]), &(inteval->stack[((hsi*8424+86004)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+135360)*1+lsi)*1]), &(inteval->stack[((hsi*16848+118512)*1+lsi)*1]), &(inteval->stack[((hsi*14256+94428)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+159120)*1+lsi)*1]), &(inteval->stack[((hsi*4320+4896)*1+lsi)*1]), &(inteval->stack[((hsi*3780+9216)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+170460)*1+lsi)*1]), &(inteval->stack[((hsi*11340+159120)*1+lsi)*1]), &(inteval->stack[((hsi*9828+108684)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+190116)*1+lsi)*1]), &(inteval->stack[((hsi*19656+170460)*1+lsi)*1]), &(inteval->stack[((hsi*16848+118512)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+218196)*1+lsi)*1]), &(inteval->stack[((hsi*28080+190116)*1+lsi)*1]), &(inteval->stack[((hsi*23760+135360)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+108684)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19080)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21456)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+114624)*1+lsi)*1]), &(inteval->stack[((hsi*7128+78876)*1+lsi)*1]), &(inteval->stack[((hsi*5940+108684)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+253836)*1+lsi)*1]), &(inteval->stack[((hsi*14256+94428)*1+lsi)*1]), &(inteval->stack[((hsi*11880+114624)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+78876)*1+lsi)*1]), &(inteval->stack[((hsi*23760+135360)*1+lsi)*1]), &(inteval->stack[((hsi*19800+253836)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+108576)*1+lsi)*1]), &(inteval->stack[((hsi*35640+218196)*1+lsi)*1]), &(inteval->stack[((hsi*29700+78876)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+78876)*1+lsi)*1]), &(inteval->stack[((hsi*4896+0)*1+lsi)*1]), &(inteval->stack[((hsi*4320+4896)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+0)*1+lsi)*1]), &(inteval->stack[((hsi*12960+78876)*1+lsi)*1]), &(inteval->stack[((hsi*11340+159120)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+253836)*1+lsi)*1]), &(inteval->stack[((hsi*22680+0)*1+lsi)*1]), &(inteval->stack[((hsi*19656+170460)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+286596)*1+lsi)*1]), &(inteval->stack[((hsi*32760+253836)*1+lsi)*1]), &(inteval->stack[((hsi*28080+190116)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+150156)*1+lsi)*1]), &(inteval->stack[((hsi*42120+286596)*1+lsi)*1]), &(inteval->stack[((hsi*35640+218196)*1+lsi)*1]),36);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*55440+23436)*1+lsi)*1]), &(inteval->stack[((hsi*49896+150156)*1+lsi)*1]), &(inteval->stack[((hsi*41580+108576)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*55440+23436)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif