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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lk.h>
#include <HRRPart1bra0ket0lp.h>
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
#include <eri3_aB_S__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_S__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,696)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_S__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2316)*1+lsi)*1]), &(inteval->stack[((hsi*66+530)*1+lsi)*1]), &(inteval->stack[((hsi*55+596)*1+lsi)*1]),1);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*198+2481)*1+lsi)*1]), &(inteval->stack[((hsi*78+452)*1+lsi)*1]), &(inteval->stack[((hsi*66+530)*1+lsi)*1]),1);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*330+2679)*1+lsi)*1]), &(inteval->stack[((hsi*198+2481)*1+lsi)*1]), &(inteval->stack[((hsi*165+2316)*1+lsi)*1]),1);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+3009)*1+lsi)*1]), &(inteval->stack[((hsi*91+361)*1+lsi)*1]), &(inteval->stack[((hsi*78+452)*1+lsi)*1]),1);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*396+3243)*1+lsi)*1]), &(inteval->stack[((hsi*234+3009)*1+lsi)*1]), &(inteval->stack[((hsi*198+2481)*1+lsi)*1]),1);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*550+3639)*1+lsi)*1]), &(inteval->stack[((hsi*396+3243)*1+lsi)*1]), &(inteval->stack[((hsi*330+2679)*1+lsi)*1]),1);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+4189)*1+lsi)*1]), &(inteval->stack[((hsi*105+256)*1+lsi)*1]), &(inteval->stack[((hsi*91+361)*1+lsi)*1]),1);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+4462)*1+lsi)*1]), &(inteval->stack[((hsi*273+4189)*1+lsi)*1]), &(inteval->stack[((hsi*234+3009)*1+lsi)*1]),1);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*660+4930)*1+lsi)*1]), &(inteval->stack[((hsi*468+4462)*1+lsi)*1]), &(inteval->stack[((hsi*396+3243)*1+lsi)*1]),1);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*825+5590)*1+lsi)*1]), &(inteval->stack[((hsi*660+4930)*1+lsi)*1]), &(inteval->stack[((hsi*550+3639)*1+lsi)*1]),1);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+3009)*1+lsi)*1]), &(inteval->stack[((hsi*120+136)*1+lsi)*1]), &(inteval->stack[((hsi*105+256)*1+lsi)*1]),1);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+6415)*1+lsi)*1]), &(inteval->stack[((hsi*315+3009)*1+lsi)*1]), &(inteval->stack[((hsi*273+4189)*1+lsi)*1]),1);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+6961)*1+lsi)*1]), &(inteval->stack[((hsi*546+6415)*1+lsi)*1]), &(inteval->stack[((hsi*468+4462)*1+lsi)*1]),1);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*990+7741)*1+lsi)*1]), &(inteval->stack[((hsi*780+6961)*1+lsi)*1]), &(inteval->stack[((hsi*660+4930)*1+lsi)*1]),1);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+4189)*1+lsi)*1]), &(inteval->stack[((hsi*990+7741)*1+lsi)*1]), &(inteval->stack[((hsi*825+5590)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+256)*1+lsi)*1]), &(inteval->stack[((hsi*55+596)*1+lsi)*1]), &(inteval->stack[((hsi*45+651)*1+lsi)*1]),1);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*270+3324)*1+lsi)*1]), &(inteval->stack[((hsi*165+2316)*1+lsi)*1]), &(inteval->stack[((hsi*135+256)*1+lsi)*1]),1);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*450+8731)*1+lsi)*1]), &(inteval->stack[((hsi*330+2679)*1+lsi)*1]), &(inteval->stack[((hsi*270+3324)*1+lsi)*1]),1);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*675+2316)*1+lsi)*1]), &(inteval->stack[((hsi*550+3639)*1+lsi)*1]), &(inteval->stack[((hsi*450+8731)*1+lsi)*1]),1);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*945+8731)*1+lsi)*1]), &(inteval->stack[((hsi*825+5590)*1+lsi)*1]), &(inteval->stack[((hsi*675+2316)*1+lsi)*1]),1);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*1260+9676)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4189)*1+lsi)*1]), &(inteval->stack[((hsi*945+8731)*1+lsi)*1]),1);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*360+5344)*1+lsi)*1]), &(inteval->stack[((hsi*136+0)*1+lsi)*1]), &(inteval->stack[((hsi*120+136)*1+lsi)*1]),1);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*630+8731)*1+lsi)*1]), &(inteval->stack[((hsi*360+5344)*1+lsi)*1]), &(inteval->stack[((hsi*315+3009)*1+lsi)*1]),1);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*910+2316)*1+lsi)*1]), &(inteval->stack[((hsi*630+8731)*1+lsi)*1]), &(inteval->stack[((hsi*546+6415)*1+lsi)*1]),1);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*1170+5344)*1+lsi)*1]), &(inteval->stack[((hsi*910+2316)*1+lsi)*1]), &(inteval->stack[((hsi*780+6961)*1+lsi)*1]),1);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*1386+2316)*1+lsi)*1]), &(inteval->stack[((hsi*1170+5344)*1+lsi)*1]), &(inteval->stack[((hsi*990+7741)*1+lsi)*1]),1);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*1540+5344)*1+lsi)*1]), &(inteval->stack[((hsi*1386+2316)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4189)*1+lsi)*1]),1);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*1620+696)*1+lsi)*1]), &(inteval->stack[((hsi*1540+5344)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9676)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1620+696)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
