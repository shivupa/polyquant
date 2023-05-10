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
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lg.h>
#include <HRRPart0ket0bra0lh.h>
#include <HRRPart0ket0bra0li.h>
#include <HRRPart0ket0bra0lk.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0mf.h>
#include <HRRPart0ket0bra0mg.h>
#include <HRRPart0ket0bra0mh.h>
#include <HRRPart0ket0bra0mi.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0pdd.h>
#include <HRRPart0ket0bra0pdf.h>
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0pfd.h>
#include <HRRPart0ket0bra0pfp.h>
#include <HRRPart0ket0bra0pgp.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppf.h>
#include <HRRPart0ket0bra0ppg.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psg.h>
#include <HRRPart0ket0bra0psh.h>
#include <HRRPart0ket0bra0psp.h>
#include <_elecpot_K_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_K_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,696)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_K_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+2316)*1+lsi)*1]), &(inteval->stack[((hsi*66+630)*1+lsi)*1]), &(inteval->stack[((hsi*55+45)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2481)*1+lsi)*1]), &(inteval->stack[((hsi*78+552)*1+lsi)*1]), &(inteval->stack[((hsi*66+630)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2679)*1+lsi)*1]), &(inteval->stack[((hsi*198+2481)*1+lsi)*1]), &(inteval->stack[((hsi*165+2316)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+3009)*1+lsi)*1]), &(inteval->stack[((hsi*91+461)*1+lsi)*1]), &(inteval->stack[((hsi*78+552)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+3243)*1+lsi)*1]), &(inteval->stack[((hsi*234+3009)*1+lsi)*1]), &(inteval->stack[((hsi*198+2481)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+3639)*1+lsi)*1]), &(inteval->stack[((hsi*396+3243)*1+lsi)*1]), &(inteval->stack[((hsi*330+2679)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+4189)*1+lsi)*1]), &(inteval->stack[((hsi*105+356)*1+lsi)*1]), &(inteval->stack[((hsi*91+461)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+4462)*1+lsi)*1]), &(inteval->stack[((hsi*273+4189)*1+lsi)*1]), &(inteval->stack[((hsi*234+3009)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+4930)*1+lsi)*1]), &(inteval->stack[((hsi*468+4462)*1+lsi)*1]), &(inteval->stack[((hsi*396+3243)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+5590)*1+lsi)*1]), &(inteval->stack[((hsi*660+4930)*1+lsi)*1]), &(inteval->stack[((hsi*550+3639)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+3009)*1+lsi)*1]), &(inteval->stack[((hsi*120+236)*1+lsi)*1]), &(inteval->stack[((hsi*105+356)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+6415)*1+lsi)*1]), &(inteval->stack[((hsi*315+3009)*1+lsi)*1]), &(inteval->stack[((hsi*273+4189)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+6961)*1+lsi)*1]), &(inteval->stack[((hsi*546+6415)*1+lsi)*1]), &(inteval->stack[((hsi*468+4462)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+7741)*1+lsi)*1]), &(inteval->stack[((hsi*780+6961)*1+lsi)*1]), &(inteval->stack[((hsi*660+4930)*1+lsi)*1]),1);
HRRPart0ket0bra0mh(inteval, &(inteval->stack[((hsi*1155+4189)*1+lsi)*1]), &(inteval->stack[((hsi*990+7741)*1+lsi)*1]), &(inteval->stack[((hsi*825+5590)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+356)*1+lsi)*1]), &(inteval->stack[((hsi*55+45)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+3324)*1+lsi)*1]), &(inteval->stack[((hsi*165+2316)*1+lsi)*1]), &(inteval->stack[((hsi*135+356)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+8731)*1+lsi)*1]), &(inteval->stack[((hsi*330+2679)*1+lsi)*1]), &(inteval->stack[((hsi*270+3324)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+2316)*1+lsi)*1]), &(inteval->stack[((hsi*550+3639)*1+lsi)*1]), &(inteval->stack[((hsi*450+8731)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+8731)*1+lsi)*1]), &(inteval->stack[((hsi*825+5590)*1+lsi)*1]), &(inteval->stack[((hsi*675+2316)*1+lsi)*1]),1);
HRRPart0ket0bra0li(inteval, &(inteval->stack[((hsi*1260+9676)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4189)*1+lsi)*1]), &(inteval->stack[((hsi*945+8731)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+5344)*1+lsi)*1]), &(inteval->stack[((hsi*136+100)*1+lsi)*1]), &(inteval->stack[((hsi*120+236)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+8731)*1+lsi)*1]), &(inteval->stack[((hsi*360+5344)*1+lsi)*1]), &(inteval->stack[((hsi*315+3009)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+2316)*1+lsi)*1]), &(inteval->stack[((hsi*630+8731)*1+lsi)*1]), &(inteval->stack[((hsi*546+6415)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+5344)*1+lsi)*1]), &(inteval->stack[((hsi*910+2316)*1+lsi)*1]), &(inteval->stack[((hsi*780+6961)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+2316)*1+lsi)*1]), &(inteval->stack[((hsi*1170+5344)*1+lsi)*1]), &(inteval->stack[((hsi*990+7741)*1+lsi)*1]),1);
HRRPart0ket0bra0mi(inteval, &(inteval->stack[((hsi*1540+5344)*1+lsi)*1]), &(inteval->stack[((hsi*1386+2316)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4189)*1+lsi)*1]),1);
HRRPart0ket0bra0lk(inteval, &(inteval->stack[((hsi*1620+696)*1+lsi)*1]), &(inteval->stack[((hsi*1540+5344)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9676)*1+lsi)*1]),1);
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
