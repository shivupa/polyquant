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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_G__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__M__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+111500)*1+lsi)*1]), &(inteval->stack[((hsi*1848+19276)*1+lsi)*1]), &(inteval->stack[((hsi*1386+21124)*1+lsi)*1]),66);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+115658)*1+lsi)*1]), &(inteval->stack[((hsi*1386+21124)*1+lsi)*1]), &(inteval->stack[((hsi*990+22510)*1+lsi)*1]),66);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+118628)*1+lsi)*1]), &(inteval->stack[((hsi*4158+111500)*1+lsi)*1]), &(inteval->stack[((hsi*2970+115658)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+124568)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16900)*1+lsi)*1]), &(inteval->stack[((hsi*1848+19276)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+130112)*1+lsi)*1]), &(inteval->stack[((hsi*5544+124568)*1+lsi)*1]), &(inteval->stack[((hsi*4158+111500)*1+lsi)*1]),66);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*9900+138428)*1+lsi)*1]), &(inteval->stack[((hsi*8316+130112)*1+lsi)*1]), &(inteval->stack[((hsi*5940+118628)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+111500)*1+lsi)*1]), &(inteval->stack[((hsi*2184+11908)*1+lsi)*1]), &(inteval->stack[((hsi*1638+14092)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+116414)*1+lsi)*1]), &(inteval->stack[((hsi*1638+14092)*1+lsi)*1]), &(inteval->stack[((hsi*1170+15730)*1+lsi)*1]),78);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*7020+119924)*1+lsi)*1]), &(inteval->stack[((hsi*4914+111500)*1+lsi)*1]), &(inteval->stack[((hsi*3510+116414)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+126944)*1+lsi)*1]), &(inteval->stack[((hsi*2808+9100)*1+lsi)*1]), &(inteval->stack[((hsi*2184+11908)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+9100)*1+lsi)*1]), &(inteval->stack[((hsi*6552+126944)*1+lsi)*1]), &(inteval->stack[((hsi*4914+111500)*1+lsi)*1]),78);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*11700+148328)*1+lsi)*1]), &(inteval->stack[((hsi*9828+9100)*1+lsi)*1]), &(inteval->stack[((hsi*7020+119924)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*29700+160028)*1+lsi)*1]), &(inteval->stack[((hsi*11700+148328)*1+lsi)*1]), &(inteval->stack[((hsi*9900+138428)*1+lsi)*1]),150);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+111500)*1+lsi)*1]), &(inteval->stack[((hsi*1540+25480)*1+lsi)*1]), &(inteval->stack[((hsi*1155+27020)*1+lsi)*1]),55);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2475+114965)*1+lsi)*1]), &(inteval->stack[((hsi*1155+27020)*1+lsi)*1]), &(inteval->stack[((hsi*825+28175)*1+lsi)*1]),55);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4950+117440)*1+lsi)*1]), &(inteval->stack[((hsi*3465+111500)*1+lsi)*1]), &(inteval->stack[((hsi*2475+114965)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+122390)*1+lsi)*1]), &(inteval->stack[((hsi*1980+23500)*1+lsi)*1]), &(inteval->stack[((hsi*1540+25480)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+9100)*1+lsi)*1]), &(inteval->stack[((hsi*4620+122390)*1+lsi)*1]), &(inteval->stack[((hsi*3465+111500)*1+lsi)*1]),55);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*8250+122390)*1+lsi)*1]), &(inteval->stack[((hsi*6930+9100)*1+lsi)*1]), &(inteval->stack[((hsi*4950+117440)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*24750+189728)*1+lsi)*1]), &(inteval->stack[((hsi*9900+138428)*1+lsi)*1]), &(inteval->stack[((hsi*8250+122390)*1+lsi)*1]),150);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*49500+214478)*1+lsi)*1]), &(inteval->stack[((hsi*29700+160028)*1+lsi)*1]), &(inteval->stack[((hsi*24750+189728)*1+lsi)*1]),150);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5733+111500)*1+lsi)*1]), &(inteval->stack[((hsi*2548+3276)*1+lsi)*1]), &(inteval->stack[((hsi*1911+5824)*1+lsi)*1]),91);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4095+117233)*1+lsi)*1]), &(inteval->stack[((hsi*1911+5824)*1+lsi)*1]), &(inteval->stack[((hsi*1365+7735)*1+lsi)*1]),91);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*8190+121328)*1+lsi)*1]), &(inteval->stack[((hsi*5733+111500)*1+lsi)*1]), &(inteval->stack[((hsi*4095+117233)*1+lsi)*1]),91);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7644+189728)*1+lsi)*1]), &(inteval->stack[((hsi*3276+0)*1+lsi)*1]), &(inteval->stack[((hsi*2548+3276)*1+lsi)*1]),91);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*7644+189728)*1+lsi)*1]), &(inteval->stack[((hsi*5733+111500)*1+lsi)*1]),91);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*13650+189728)*1+lsi)*1]), &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+121328)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35100+111500)*1+lsi)*1]), &(inteval->stack[((hsi*13650+189728)*1+lsi)*1]), &(inteval->stack[((hsi*11700+148328)*1+lsi)*1]),150);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*59400+263978)*1+lsi)*1]), &(inteval->stack[((hsi*35100+111500)*1+lsi)*1]), &(inteval->stack[((hsi*29700+160028)*1+lsi)*1]),150);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*82500+29000)*1+lsi)*1]), &(inteval->stack[((hsi*59400+263978)*1+lsi)*1]), &(inteval->stack[((hsi*49500+214478)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*82500+29000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
