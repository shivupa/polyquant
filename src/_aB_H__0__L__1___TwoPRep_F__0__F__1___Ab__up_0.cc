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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__L__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31720)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+126220)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21195)*1+lsi)*1]), &(inteval->stack[((hsi*1540+23175)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+130840)*1+lsi)*1]), &(inteval->stack[((hsi*1540+23175)*1+lsi)*1]), &(inteval->stack[((hsi*1155+24715)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+134305)*1+lsi)*1]), &(inteval->stack[((hsi*4620+126220)*1+lsi)*1]), &(inteval->stack[((hsi*3465+130840)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+141235)*1+lsi)*1]), &(inteval->stack[((hsi*2475+18720)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21195)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+147175)*1+lsi)*1]), &(inteval->stack[((hsi*5940+141235)*1+lsi)*1]), &(inteval->stack[((hsi*4620+126220)*1+lsi)*1]),55);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*11550+156415)*1+lsi)*1]), &(inteval->stack[((hsi*9240+147175)*1+lsi)*1]), &(inteval->stack[((hsi*6930+134305)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+126220)*1+lsi)*1]), &(inteval->stack[((hsi*2376+13110)*1+lsi)*1]), &(inteval->stack[((hsi*1848+15486)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+131764)*1+lsi)*1]), &(inteval->stack[((hsi*1848+15486)*1+lsi)*1]), &(inteval->stack[((hsi*1386+17334)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+135922)*1+lsi)*1]), &(inteval->stack[((hsi*5544+126220)*1+lsi)*1]), &(inteval->stack[((hsi*4158+131764)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+144238)*1+lsi)*1]), &(inteval->stack[((hsi*2970+10140)*1+lsi)*1]), &(inteval->stack[((hsi*2376+13110)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+10140)*1+lsi)*1]), &(inteval->stack[((hsi*7128+144238)*1+lsi)*1]), &(inteval->stack[((hsi*5544+126220)*1+lsi)*1]),66);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+167965)*1+lsi)*1]), &(inteval->stack[((hsi*11088+10140)*1+lsi)*1]), &(inteval->stack[((hsi*8316+135922)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*34650+181825)*1+lsi)*1]), &(inteval->stack[((hsi*13860+167965)*1+lsi)*1]), &(inteval->stack[((hsi*11550+156415)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+126220)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27895)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29515)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+130000)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29515)*1+lsi)*1]), &(inteval->stack[((hsi*945+30775)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+132835)*1+lsi)*1]), &(inteval->stack[((hsi*3780+126220)*1+lsi)*1]), &(inteval->stack[((hsi*2835+130000)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+138505)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25870)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27895)*1+lsi)*1]),45);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*7560+10140)*1+lsi)*1]), &(inteval->stack[((hsi*4860+138505)*1+lsi)*1]), &(inteval->stack[((hsi*3780+126220)*1+lsi)*1]),45);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*9450+138505)*1+lsi)*1]), &(inteval->stack[((hsi*7560+10140)*1+lsi)*1]), &(inteval->stack[((hsi*5670+132835)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*28350+216475)*1+lsi)*1]), &(inteval->stack[((hsi*11550+156415)*1+lsi)*1]), &(inteval->stack[((hsi*9450+138505)*1+lsi)*1]),210);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*56700+244825)*1+lsi)*1]), &(inteval->stack[((hsi*34650+181825)*1+lsi)*1]), &(inteval->stack[((hsi*28350+216475)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+126220)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3510)*1+lsi)*1]), &(inteval->stack[((hsi*2184+6318)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+132772)*1+lsi)*1]), &(inteval->stack[((hsi*2184+6318)*1+lsi)*1]), &(inteval->stack[((hsi*1638+8502)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+137686)*1+lsi)*1]), &(inteval->stack[((hsi*6552+126220)*1+lsi)*1]), &(inteval->stack[((hsi*4914+132772)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+216475)*1+lsi)*1]), &(inteval->stack[((hsi*3510+0)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3510)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+0)*1+lsi)*1]), &(inteval->stack[((hsi*8424+216475)*1+lsi)*1]), &(inteval->stack[((hsi*6552+126220)*1+lsi)*1]),78);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*16380+216475)*1+lsi)*1]), &(inteval->stack[((hsi*13104+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+137686)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*41580+126220)*1+lsi)*1]), &(inteval->stack[((hsi*16380+216475)*1+lsi)*1]), &(inteval->stack[((hsi*13860+167965)*1+lsi)*1]),210);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*69300+301525)*1+lsi)*1]), &(inteval->stack[((hsi*41580+126220)*1+lsi)*1]), &(inteval->stack[((hsi*34650+181825)*1+lsi)*1]),210);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*94500+31720)*1+lsi)*1]), &(inteval->stack[((hsi*69300+301525)*1+lsi)*1]), &(inteval->stack[((hsi*56700+244825)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*94500+31720)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
