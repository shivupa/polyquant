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
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_PS__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_PS__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,53064)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_PS__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+183744)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39930)*1+lsi)*1]), &(inteval->stack[((hsi*4356+45078)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+196812)*1+lsi)*1]), &(inteval->stack[((hsi*6006+33924)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39930)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+212256)*1+lsi)*1]), &(inteval->stack[((hsi*15444+196812)*1+lsi)*1]), &(inteval->stack[((hsi*13068+183744)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+238392)*1+lsi)*1]), &(inteval->stack[((hsi*6930+26994)*1+lsi)*1]), &(inteval->stack[((hsi*6006+33924)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+256410)*1+lsi)*1]), &(inteval->stack[((hsi*18018+238392)*1+lsi)*1]), &(inteval->stack[((hsi*15444+196812)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+287298)*1+lsi)*1]), &(inteval->stack[((hsi*30888+256410)*1+lsi)*1]), &(inteval->stack[((hsi*26136+212256)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+330858)*1+lsi)*1]), &(inteval->stack[((hsi*7920+19074)*1+lsi)*1]), &(inteval->stack[((hsi*6930+26994)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+351648)*1+lsi)*1]), &(inteval->stack[((hsi*20790+330858)*1+lsi)*1]), &(inteval->stack[((hsi*18018+238392)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+387684)*1+lsi)*1]), &(inteval->stack[((hsi*36036+351648)*1+lsi)*1]), &(inteval->stack[((hsi*30888+256410)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+439164)*1+lsi)*1]), &(inteval->stack[((hsi*51480+387684)*1+lsi)*1]), &(inteval->stack[((hsi*43560+287298)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+238392)*1+lsi)*1]), &(inteval->stack[((hsi*8976+10098)*1+lsi)*1]), &(inteval->stack[((hsi*7920+19074)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+504504)*1+lsi)*1]), &(inteval->stack[((hsi*23760+238392)*1+lsi)*1]), &(inteval->stack[((hsi*20790+330858)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+546084)*1+lsi)*1]), &(inteval->stack[((hsi*41580+504504)*1+lsi)*1]), &(inteval->stack[((hsi*36036+351648)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+606144)*1+lsi)*1]), &(inteval->stack[((hsi*60060+546084)*1+lsi)*1]), &(inteval->stack[((hsi*51480+387684)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+330858)*1+lsi)*1]), &(inteval->stack[((hsi*77220+606144)*1+lsi)*1]), &(inteval->stack[((hsi*65340+439164)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+19074)*1+lsi)*1]), &(inteval->stack[((hsi*4356+45078)*1+lsi)*1]), &(inteval->stack[((hsi*3630+49434)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+262152)*1+lsi)*1]), &(inteval->stack[((hsi*13068+183744)*1+lsi)*1]), &(inteval->stack[((hsi*10890+19074)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+683364)*1+lsi)*1]), &(inteval->stack[((hsi*26136+212256)*1+lsi)*1]), &(inteval->stack[((hsi*21780+262152)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+183744)*1+lsi)*1]), &(inteval->stack[((hsi*43560+287298)*1+lsi)*1]), &(inteval->stack[((hsi*36300+683364)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+683364)*1+lsi)*1]), &(inteval->stack[((hsi*65340+439164)*1+lsi)*1]), &(inteval->stack[((hsi*54450+183744)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+759594)*1+lsi)*1]), &(inteval->stack[((hsi*91476+330858)*1+lsi)*1]), &(inteval->stack[((hsi*76230+683364)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+422334)*1+lsi)*1]), &(inteval->stack[((hsi*10098+0)*1+lsi)*1]), &(inteval->stack[((hsi*8976+10098)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+683364)*1+lsi)*1]), &(inteval->stack[((hsi*26928+422334)*1+lsi)*1]), &(inteval->stack[((hsi*23760+238392)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+183744)*1+lsi)*1]), &(inteval->stack[((hsi*47520+683364)*1+lsi)*1]), &(inteval->stack[((hsi*41580+504504)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+422334)*1+lsi)*1]), &(inteval->stack[((hsi*69300+183744)*1+lsi)*1]), &(inteval->stack[((hsi*60060+546084)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+183744)*1+lsi)*1]), &(inteval->stack[((hsi*90090+422334)*1+lsi)*1]), &(inteval->stack[((hsi*77220+606144)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+422334)*1+lsi)*1]), &(inteval->stack[((hsi*108108+183744)*1+lsi)*1]), &(inteval->stack[((hsi*91476+330858)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+53064)*1+lsi)*1]), &(inteval->stack[((hsi*121968+422334)*1+lsi)*1]), &(inteval->stack[((hsi*101640+759594)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*130680+53064)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
