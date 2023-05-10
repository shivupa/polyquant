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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_M__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,98600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+461600)*1+lsi)*1]), &(inteval->stack[((hsi*6084+63938)*1+lsi)*1]), &(inteval->stack[((hsi*5148+70022)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+477044)*1+lsi)*1]), &(inteval->stack[((hsi*5148+70022)*1+lsi)*1]), &(inteval->stack[((hsi*4290+75170)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+489914)*1+lsi)*1]), &(inteval->stack[((hsi*15444+461600)*1+lsi)*1]), &(inteval->stack[((hsi*12870+477044)*1+lsi)*1]),78);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+515654)*1+lsi)*1]), &(inteval->stack[((hsi*7098+56840)*1+lsi)*1]), &(inteval->stack[((hsi*6084+63938)*1+lsi)*1]),78);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+533906)*1+lsi)*1]), &(inteval->stack[((hsi*18252+515654)*1+lsi)*1]), &(inteval->stack[((hsi*15444+461600)*1+lsi)*1]),78);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+564794)*1+lsi)*1]), &(inteval->stack[((hsi*30888+533906)*1+lsi)*1]), &(inteval->stack[((hsi*25740+489914)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+461600)*1+lsi)*1]), &(inteval->stack[((hsi*7098+38731)*1+lsi)*1]), &(inteval->stack[((hsi*6006+45829)*1+lsi)*1]),91);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+479618)*1+lsi)*1]), &(inteval->stack[((hsi*6006+45829)*1+lsi)*1]), &(inteval->stack[((hsi*5005+51835)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+494633)*1+lsi)*1]), &(inteval->stack[((hsi*18018+461600)*1+lsi)*1]), &(inteval->stack[((hsi*15015+479618)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+524663)*1+lsi)*1]), &(inteval->stack[((hsi*8281+30450)*1+lsi)*1]), &(inteval->stack[((hsi*7098+38731)*1+lsi)*1]),91);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+30450)*1+lsi)*1]), &(inteval->stack[((hsi*21294+524663)*1+lsi)*1]), &(inteval->stack[((hsi*18018+461600)*1+lsi)*1]),91);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+607694)*1+lsi)*1]), &(inteval->stack[((hsi*36036+30450)*1+lsi)*1]), &(inteval->stack[((hsi*30030+494633)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*128700+657744)*1+lsi)*1]), &(inteval->stack[((hsi*50050+607694)*1+lsi)*1]), &(inteval->stack[((hsi*42900+564794)*1+lsi)*1]),550);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+461600)*1+lsi)*1]), &(inteval->stack[((hsi*5148+85466)*1+lsi)*1]), &(inteval->stack[((hsi*4356+90614)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+474668)*1+lsi)*1]), &(inteval->stack[((hsi*4356+90614)*1+lsi)*1]), &(inteval->stack[((hsi*3630+94970)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+485558)*1+lsi)*1]), &(inteval->stack[((hsi*13068+461600)*1+lsi)*1]), &(inteval->stack[((hsi*10890+474668)*1+lsi)*1]),66);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+507338)*1+lsi)*1]), &(inteval->stack[((hsi*6006+79460)*1+lsi)*1]), &(inteval->stack[((hsi*5148+85466)*1+lsi)*1]),66);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+30450)*1+lsi)*1]), &(inteval->stack[((hsi*15444+507338)*1+lsi)*1]), &(inteval->stack[((hsi*13068+461600)*1+lsi)*1]),66);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+507338)*1+lsi)*1]), &(inteval->stack[((hsi*26136+30450)*1+lsi)*1]), &(inteval->stack[((hsi*21780+485558)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*108900+786444)*1+lsi)*1]), &(inteval->stack[((hsi*42900+564794)*1+lsi)*1]), &(inteval->stack[((hsi*36300+507338)*1+lsi)*1]),550);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*217800+895344)*1+lsi)*1]), &(inteval->stack[((hsi*128700+657744)*1+lsi)*1]), &(inteval->stack[((hsi*108900+786444)*1+lsi)*1]),550);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+461600)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9555)*1+lsi)*1]), &(inteval->stack[((hsi*6930+17745)*1+lsi)*1]),105);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+482390)*1+lsi)*1]), &(inteval->stack[((hsi*6930+17745)*1+lsi)*1]), &(inteval->stack[((hsi*5775+24675)*1+lsi)*1]),105);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*34650+786444)*1+lsi)*1]), &(inteval->stack[((hsi*20790+461600)*1+lsi)*1]), &(inteval->stack[((hsi*17325+482390)*1+lsi)*1]),105);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+482390)*1+lsi)*1]), &(inteval->stack[((hsi*9555+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9555)*1+lsi)*1]),105);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+506960)*1+lsi)*1]), &(inteval->stack[((hsi*24570+482390)*1+lsi)*1]), &(inteval->stack[((hsi*20790+461600)*1+lsi)*1]),105);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+0)*1+lsi)*1]), &(inteval->stack[((hsi*41580+506960)*1+lsi)*1]), &(inteval->stack[((hsi*34650+786444)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*150150+1113144)*1+lsi)*1]), &(inteval->stack[((hsi*57750+0)*1+lsi)*1]), &(inteval->stack[((hsi*50050+607694)*1+lsi)*1]),550);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*257400+1263294)*1+lsi)*1]), &(inteval->stack[((hsi*150150+1113144)*1+lsi)*1]), &(inteval->stack[((hsi*128700+657744)*1+lsi)*1]),550);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*363000+98600)*1+lsi)*1]), &(inteval->stack[((hsi*257400+1263294)*1+lsi)*1]), &(inteval->stack[((hsi*217800+895344)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*363000+98600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
