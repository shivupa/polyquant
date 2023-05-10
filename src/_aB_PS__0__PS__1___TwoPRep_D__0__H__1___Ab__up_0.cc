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
#include <_aB_PS__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,140060)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+688916)*1+lsi)*1]), &(inteval->stack[((hsi*7098+82394)*1+lsi)*1]), &(inteval->stack[((hsi*6084+89492)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+707168)*1+lsi)*1]), &(inteval->stack[((hsi*8190+74204)*1+lsi)*1]), &(inteval->stack[((hsi*7098+82394)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+728462)*1+lsi)*1]), &(inteval->stack[((hsi*21294+707168)*1+lsi)*1]), &(inteval->stack[((hsi*18252+688916)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+764966)*1+lsi)*1]), &(inteval->stack[((hsi*9360+64844)*1+lsi)*1]), &(inteval->stack[((hsi*8190+74204)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+789536)*1+lsi)*1]), &(inteval->stack[((hsi*24570+764966)*1+lsi)*1]), &(inteval->stack[((hsi*21294+707168)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+832124)*1+lsi)*1]), &(inteval->stack[((hsi*42588+789536)*1+lsi)*1]), &(inteval->stack[((hsi*36504+728462)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+707168)*1+lsi)*1]), &(inteval->stack[((hsi*6084+89492)*1+lsi)*1]), &(inteval->stack[((hsi*5148+95576)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+892964)*1+lsi)*1]), &(inteval->stack[((hsi*18252+688916)*1+lsi)*1]), &(inteval->stack[((hsi*15444+707168)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+923852)*1+lsi)*1]), &(inteval->stack[((hsi*36504+728462)*1+lsi)*1]), &(inteval->stack[((hsi*30888+892964)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+975332)*1+lsi)*1]), &(inteval->stack[((hsi*60840+832124)*1+lsi)*1]), &(inteval->stack[((hsi*51480+923852)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+892964)*1+lsi)*1]), &(inteval->stack[((hsi*10608+54236)*1+lsi)*1]), &(inteval->stack[((hsi*9360+64844)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+688916)*1+lsi)*1]), &(inteval->stack[((hsi*28080+892964)*1+lsi)*1]), &(inteval->stack[((hsi*24570+764966)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+892964)*1+lsi)*1]), &(inteval->stack[((hsi*49140+688916)*1+lsi)*1]), &(inteval->stack[((hsi*42588+789536)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+688916)*1+lsi)*1]), &(inteval->stack[((hsi*70980+892964)*1+lsi)*1]), &(inteval->stack[((hsi*60840+832124)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+780176)*1+lsi)*1]), &(inteval->stack[((hsi*91260+688916)*1+lsi)*1]), &(inteval->stack[((hsi*77220+975332)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+688916)*1+lsi)*1]), &(inteval->stack[((hsi*6006+124550)*1+lsi)*1]), &(inteval->stack[((hsi*5148+130556)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+704360)*1+lsi)*1]), &(inteval->stack[((hsi*6930+117620)*1+lsi)*1]), &(inteval->stack[((hsi*6006+124550)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+722378)*1+lsi)*1]), &(inteval->stack[((hsi*18018+704360)*1+lsi)*1]), &(inteval->stack[((hsi*15444+688916)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+54236)*1+lsi)*1]), &(inteval->stack[((hsi*7920+109700)*1+lsi)*1]), &(inteval->stack[((hsi*6930+117620)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+888284)*1+lsi)*1]), &(inteval->stack[((hsi*20790+54236)*1+lsi)*1]), &(inteval->stack[((hsi*18018+704360)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+924320)*1+lsi)*1]), &(inteval->stack[((hsi*36036+888284)*1+lsi)*1]), &(inteval->stack[((hsi*30888+722378)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+753266)*1+lsi)*1]), &(inteval->stack[((hsi*5148+130556)*1+lsi)*1]), &(inteval->stack[((hsi*4356+135704)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+975800)*1+lsi)*1]), &(inteval->stack[((hsi*15444+688916)*1+lsi)*1]), &(inteval->stack[((hsi*13068+753266)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1001936)*1+lsi)*1]), &(inteval->stack[((hsi*30888+722378)*1+lsi)*1]), &(inteval->stack[((hsi*26136+975800)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+688916)*1+lsi)*1]), &(inteval->stack[((hsi*51480+924320)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1001936)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+754256)*1+lsi)*1]), &(inteval->stack[((hsi*8976+100724)*1+lsi)*1]), &(inteval->stack[((hsi*7920+109700)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+75026)*1+lsi)*1]), &(inteval->stack[((hsi*23760+754256)*1+lsi)*1]), &(inteval->stack[((hsi*20790+54236)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+975800)*1+lsi)*1]), &(inteval->stack[((hsi*41580+75026)*1+lsi)*1]), &(inteval->stack[((hsi*36036+888284)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+54236)*1+lsi)*1]), &(inteval->stack[((hsi*60060+975800)*1+lsi)*1]), &(inteval->stack[((hsi*51480+924320)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+888284)*1+lsi)*1]), &(inteval->stack[((hsi*77220+54236)*1+lsi)*1]), &(inteval->stack[((hsi*65340+688916)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*274428+979760)*1+lsi)*1]), &(inteval->stack[((hsi*108108+780176)*1+lsi)*1]), &(inteval->stack[((hsi*91476+888284)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+888284)*1+lsi)*1]), &(inteval->stack[((hsi*8281+32851)*1+lsi)*1]), &(inteval->stack[((hsi*7098+41132)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+688916)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23296)*1+lsi)*1]), &(inteval->stack[((hsi*8281+32851)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+54236)*1+lsi)*1]), &(inteval->stack[((hsi*24843+688916)*1+lsi)*1]), &(inteval->stack[((hsi*21294+888284)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+909578)*1+lsi)*1]), &(inteval->stack[((hsi*10920+12376)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23296)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+713759)*1+lsi)*1]), &(inteval->stack[((hsi*28665+909578)*1+lsi)*1]), &(inteval->stack[((hsi*24843+688916)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1254188)*1+lsi)*1]), &(inteval->stack[((hsi*49686+713759)*1+lsi)*1]), &(inteval->stack[((hsi*42588+54236)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+96824)*1+lsi)*1]), &(inteval->stack[((hsi*7098+41132)*1+lsi)*1]), &(inteval->stack[((hsi*6006+48230)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+938243)*1+lsi)*1]), &(inteval->stack[((hsi*21294+888284)*1+lsi)*1]), &(inteval->stack[((hsi*18018+96824)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1325168)*1+lsi)*1]), &(inteval->stack[((hsi*42588+54236)*1+lsi)*1]), &(inteval->stack[((hsi*36036+938243)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+23296)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1254188)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1325168)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+938243)*1+lsi)*1]), &(inteval->stack[((hsi*12376+0)*1+lsi)*1]), &(inteval->stack[((hsi*10920+12376)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+1325168)*1+lsi)*1]), &(inteval->stack[((hsi*32760+938243)*1+lsi)*1]), &(inteval->stack[((hsi*28665+909578)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+888284)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1325168)*1+lsi)*1]), &(inteval->stack[((hsi*49686+713759)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+1325168)*1+lsi)*1]), &(inteval->stack[((hsi*82810+888284)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1254188)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1431638)*1+lsi)*1]), &(inteval->stack[((hsi*106470+1325168)*1+lsi)*1]), &(inteval->stack[((hsi*90090+23296)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*324324+1557764)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1431638)*1+lsi)*1]), &(inteval->stack[((hsi*108108+780176)*1+lsi)*1]),1386);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*548856+140060)*1+lsi)*1]), &(inteval->stack[((hsi*324324+1557764)*1+lsi)*1]), &(inteval->stack[((hsi*274428+979760)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*548856+140060)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
