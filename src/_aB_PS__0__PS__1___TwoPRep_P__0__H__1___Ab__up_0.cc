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
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,85824)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+360252)*1+lsi)*1]), &(inteval->stack[((hsi*6006+70314)*1+lsi)*1]), &(inteval->stack[((hsi*5148+76320)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+375696)*1+lsi)*1]), &(inteval->stack[((hsi*6930+63384)*1+lsi)*1]), &(inteval->stack[((hsi*6006+70314)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+393714)*1+lsi)*1]), &(inteval->stack[((hsi*18018+375696)*1+lsi)*1]), &(inteval->stack[((hsi*15444+360252)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+424602)*1+lsi)*1]), &(inteval->stack[((hsi*7920+55464)*1+lsi)*1]), &(inteval->stack[((hsi*6930+63384)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+445392)*1+lsi)*1]), &(inteval->stack[((hsi*20790+424602)*1+lsi)*1]), &(inteval->stack[((hsi*18018+375696)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+481428)*1+lsi)*1]), &(inteval->stack[((hsi*36036+445392)*1+lsi)*1]), &(inteval->stack[((hsi*30888+393714)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+375696)*1+lsi)*1]), &(inteval->stack[((hsi*5148+76320)*1+lsi)*1]), &(inteval->stack[((hsi*4356+81468)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+532908)*1+lsi)*1]), &(inteval->stack[((hsi*15444+360252)*1+lsi)*1]), &(inteval->stack[((hsi*13068+375696)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+559044)*1+lsi)*1]), &(inteval->stack[((hsi*30888+393714)*1+lsi)*1]), &(inteval->stack[((hsi*26136+532908)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+602604)*1+lsi)*1]), &(inteval->stack[((hsi*51480+481428)*1+lsi)*1]), &(inteval->stack[((hsi*43560+559044)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+532908)*1+lsi)*1]), &(inteval->stack[((hsi*8976+46488)*1+lsi)*1]), &(inteval->stack[((hsi*7920+55464)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+360252)*1+lsi)*1]), &(inteval->stack[((hsi*23760+532908)*1+lsi)*1]), &(inteval->stack[((hsi*20790+424602)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+532908)*1+lsi)*1]), &(inteval->stack[((hsi*41580+360252)*1+lsi)*1]), &(inteval->stack[((hsi*36036+445392)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+360252)*1+lsi)*1]), &(inteval->stack[((hsi*60060+532908)*1+lsi)*1]), &(inteval->stack[((hsi*51480+481428)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+437472)*1+lsi)*1]), &(inteval->stack[((hsi*77220+360252)*1+lsi)*1]), &(inteval->stack[((hsi*65340+602604)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+360252)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+378504)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+46488)*1+lsi)*1]), &(inteval->stack[((hsi*21294+378504)*1+lsi)*1]), &(inteval->stack[((hsi*18252+360252)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+399798)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+528948)*1+lsi)*1]), &(inteval->stack[((hsi*24570+399798)*1+lsi)*1]), &(inteval->stack[((hsi*21294+378504)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+571536)*1+lsi)*1]), &(inteval->stack[((hsi*42588+528948)*1+lsi)*1]), &(inteval->stack[((hsi*36504+46488)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+378504)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41340)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+632376)*1+lsi)*1]), &(inteval->stack[((hsi*18252+360252)*1+lsi)*1]), &(inteval->stack[((hsi*15444+378504)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+663264)*1+lsi)*1]), &(inteval->stack[((hsi*36504+46488)*1+lsi)*1]), &(inteval->stack[((hsi*30888+632376)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+714744)*1+lsi)*1]), &(inteval->stack[((hsi*60840+571536)*1+lsi)*1]), &(inteval->stack[((hsi*51480+663264)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+632376)*1+lsi)*1]), &(inteval->stack[((hsi*10608+0)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+0)*1+lsi)*1]), &(inteval->stack[((hsi*28080+632376)*1+lsi)*1]), &(inteval->stack[((hsi*24570+399798)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+632376)*1+lsi)*1]), &(inteval->stack[((hsi*49140+0)*1+lsi)*1]), &(inteval->stack[((hsi*42588+528948)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+791964)*1+lsi)*1]), &(inteval->stack[((hsi*70980+632376)*1+lsi)*1]), &(inteval->stack[((hsi*60840+571536)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+528948)*1+lsi)*1]), &(inteval->stack[((hsi*91260+791964)*1+lsi)*1]), &(inteval->stack[((hsi*77220+714744)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*274428+85824)*1+lsi)*1]), &(inteval->stack[((hsi*108108+528948)*1+lsi)*1]), &(inteval->stack[((hsi*91476+437472)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*274428+85824)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
