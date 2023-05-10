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
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,79900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+341260)*1+lsi)*1]), &(inteval->stack[((hsi*7098+39130)*1+lsi)*1]), &(inteval->stack[((hsi*6084+46228)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+359512)*1+lsi)*1]), &(inteval->stack[((hsi*6084+46228)*1+lsi)*1]), &(inteval->stack[((hsi*5148+52312)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+374956)*1+lsi)*1]), &(inteval->stack[((hsi*18252+341260)*1+lsi)*1]), &(inteval->stack[((hsi*15444+359512)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+405844)*1+lsi)*1]), &(inteval->stack[((hsi*8190+30940)*1+lsi)*1]), &(inteval->stack[((hsi*7098+39130)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+427138)*1+lsi)*1]), &(inteval->stack[((hsi*21294+405844)*1+lsi)*1]), &(inteval->stack[((hsi*18252+341260)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+463642)*1+lsi)*1]), &(inteval->stack[((hsi*36504+427138)*1+lsi)*1]), &(inteval->stack[((hsi*30888+374956)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+341260)*1+lsi)*1]), &(inteval->stack[((hsi*6006+64390)*1+lsi)*1]), &(inteval->stack[((hsi*5148+70396)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+356704)*1+lsi)*1]), &(inteval->stack[((hsi*5148+70396)*1+lsi)*1]), &(inteval->stack[((hsi*4356+75544)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+369772)*1+lsi)*1]), &(inteval->stack[((hsi*15444+341260)*1+lsi)*1]), &(inteval->stack[((hsi*13068+356704)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+395908)*1+lsi)*1]), &(inteval->stack[((hsi*6930+57460)*1+lsi)*1]), &(inteval->stack[((hsi*6006+64390)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+413926)*1+lsi)*1]), &(inteval->stack[((hsi*18018+395908)*1+lsi)*1]), &(inteval->stack[((hsi*15444+341260)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+30940)*1+lsi)*1]), &(inteval->stack[((hsi*30888+413926)*1+lsi)*1]), &(inteval->stack[((hsi*26136+369772)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*130680+515122)*1+lsi)*1]), &(inteval->stack[((hsi*51480+463642)*1+lsi)*1]), &(inteval->stack[((hsi*43560+30940)*1+lsi)*1]),660);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+341260)*1+lsi)*1]), &(inteval->stack[((hsi*8281+9555)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17836)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+362554)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17836)*1+lsi)*1]), &(inteval->stack[((hsi*6006+24934)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+380572)*1+lsi)*1]), &(inteval->stack[((hsi*21294+341260)*1+lsi)*1]), &(inteval->stack[((hsi*18018+362554)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+17836)*1+lsi)*1]), &(inteval->stack[((hsi*9555+0)*1+lsi)*1]), &(inteval->stack[((hsi*8281+9555)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+416608)*1+lsi)*1]), &(inteval->stack[((hsi*24843+17836)*1+lsi)*1]), &(inteval->stack[((hsi*21294+341260)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+0)*1+lsi)*1]), &(inteval->stack[((hsi*42588+416608)*1+lsi)*1]), &(inteval->stack[((hsi*36036+380572)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*154440+645802)*1+lsi)*1]), &(inteval->stack[((hsi*60060+0)*1+lsi)*1]), &(inteval->stack[((hsi*51480+463642)*1+lsi)*1]),660);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*261360+79900)*1+lsi)*1]), &(inteval->stack[((hsi*154440+645802)*1+lsi)*1]), &(inteval->stack[((hsi*130680+515122)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*261360+79900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
