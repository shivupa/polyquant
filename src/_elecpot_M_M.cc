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
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0ml.h>
#include <HRRPart0bra0ket0mm.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdh.h>
#include <HRRPart0bra0ket0pdi.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfg.h>
#include <HRRPart0bra0ket0pfh.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgf.h>
#include <HRRPart0bra0ket0pgg.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0phd.h>
#include <HRRPart0bra0ket0phf.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0pid.h>
#include <HRRPart0bra0ket0pip.h>
#include <HRRPart0bra0ket0pkp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppi.h>
#include <HRRPart0bra0ket0ppk.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psk.h>
#include <HRRPart0bra0ket0psl.h>
#include <HRRPart0bra0ket0psp.h>
#include <_elecpot_M_M_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_M_M(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1165)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_M_M_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+4190)*1+lsi)*1]), &(inteval->stack[((hsi*78+966)*1+lsi)*1]), &(inteval->stack[((hsi*66+1044)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+4388)*1+lsi)*1]), &(inteval->stack[((hsi*91+875)*1+lsi)*1]), &(inteval->stack[((hsi*78+966)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+4622)*1+lsi)*1]), &(inteval->stack[((hsi*234+4388)*1+lsi)*1]), &(inteval->stack[((hsi*198+4190)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+5018)*1+lsi)*1]), &(inteval->stack[((hsi*105+770)*1+lsi)*1]), &(inteval->stack[((hsi*91+875)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+5291)*1+lsi)*1]), &(inteval->stack[((hsi*273+5018)*1+lsi)*1]), &(inteval->stack[((hsi*234+4388)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+5759)*1+lsi)*1]), &(inteval->stack[((hsi*468+5291)*1+lsi)*1]), &(inteval->stack[((hsi*396+4622)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+6419)*1+lsi)*1]), &(inteval->stack[((hsi*120+650)*1+lsi)*1]), &(inteval->stack[((hsi*105+770)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+6734)*1+lsi)*1]), &(inteval->stack[((hsi*315+6419)*1+lsi)*1]), &(inteval->stack[((hsi*273+5018)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+7280)*1+lsi)*1]), &(inteval->stack[((hsi*546+6734)*1+lsi)*1]), &(inteval->stack[((hsi*468+5291)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+8060)*1+lsi)*1]), &(inteval->stack[((hsi*780+7280)*1+lsi)*1]), &(inteval->stack[((hsi*660+5759)*1+lsi)*1]),1);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*360+5018)*1+lsi)*1]), &(inteval->stack[((hsi*136+514)*1+lsi)*1]), &(inteval->stack[((hsi*120+650)*1+lsi)*1]),1);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*630+9050)*1+lsi)*1]), &(inteval->stack[((hsi*360+5018)*1+lsi)*1]), &(inteval->stack[((hsi*315+6419)*1+lsi)*1]),1);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*910+9680)*1+lsi)*1]), &(inteval->stack[((hsi*630+9050)*1+lsi)*1]), &(inteval->stack[((hsi*546+6734)*1+lsi)*1]),1);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*1170+10590)*1+lsi)*1]), &(inteval->stack[((hsi*910+9680)*1+lsi)*1]), &(inteval->stack[((hsi*780+7280)*1+lsi)*1]),1);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*1386+6419)*1+lsi)*1]), &(inteval->stack[((hsi*1170+10590)*1+lsi)*1]), &(inteval->stack[((hsi*990+8060)*1+lsi)*1]),1);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*408+11760)*1+lsi)*1]), &(inteval->stack[((hsi*153+361)*1+lsi)*1]), &(inteval->stack[((hsi*136+514)*1+lsi)*1]),1);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*720+12168)*1+lsi)*1]), &(inteval->stack[((hsi*408+11760)*1+lsi)*1]), &(inteval->stack[((hsi*360+5018)*1+lsi)*1]),1);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*1050+12888)*1+lsi)*1]), &(inteval->stack[((hsi*720+12168)*1+lsi)*1]), &(inteval->stack[((hsi*630+9050)*1+lsi)*1]),1);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*1365+13938)*1+lsi)*1]), &(inteval->stack[((hsi*1050+12888)*1+lsi)*1]), &(inteval->stack[((hsi*910+9680)*1+lsi)*1]),1);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*1638+15303)*1+lsi)*1]), &(inteval->stack[((hsi*1365+13938)*1+lsi)*1]), &(inteval->stack[((hsi*1170+10590)*1+lsi)*1]),1);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*1848+9050)*1+lsi)*1]), &(inteval->stack[((hsi*1638+15303)*1+lsi)*1]), &(inteval->stack[((hsi*1386+6419)*1+lsi)*1]),1);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*459+10898)*1+lsi)*1]), &(inteval->stack[((hsi*171+190)*1+lsi)*1]), &(inteval->stack[((hsi*153+361)*1+lsi)*1]),1);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*816+16941)*1+lsi)*1]), &(inteval->stack[((hsi*459+10898)*1+lsi)*1]), &(inteval->stack[((hsi*408+11760)*1+lsi)*1]),1);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*1200+17757)*1+lsi)*1]), &(inteval->stack[((hsi*816+16941)*1+lsi)*1]), &(inteval->stack[((hsi*720+12168)*1+lsi)*1]),1);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*1575+18957)*1+lsi)*1]), &(inteval->stack[((hsi*1200+17757)*1+lsi)*1]), &(inteval->stack[((hsi*1050+12888)*1+lsi)*1]),1);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*1911+11357)*1+lsi)*1]), &(inteval->stack[((hsi*1575+18957)*1+lsi)*1]), &(inteval->stack[((hsi*1365+13938)*1+lsi)*1]),1);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*2184+20532)*1+lsi)*1]), &(inteval->stack[((hsi*1911+11357)*1+lsi)*1]), &(inteval->stack[((hsi*1638+15303)*1+lsi)*1]),1);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*2376+13268)*1+lsi)*1]), &(inteval->stack[((hsi*2184+20532)*1+lsi)*1]), &(inteval->stack[((hsi*1848+9050)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+15644)*1+lsi)*1]), &(inteval->stack[((hsi*66+1044)*1+lsi)*1]), &(inteval->stack[((hsi*55+1110)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+15809)*1+lsi)*1]), &(inteval->stack[((hsi*198+4190)*1+lsi)*1]), &(inteval->stack[((hsi*165+15644)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+361)*1+lsi)*1]), &(inteval->stack[((hsi*396+4622)*1+lsi)*1]), &(inteval->stack[((hsi*330+15809)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+4190)*1+lsi)*1]), &(inteval->stack[((hsi*660+5759)*1+lsi)*1]), &(inteval->stack[((hsi*550+361)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+5015)*1+lsi)*1]), &(inteval->stack[((hsi*990+8060)*1+lsi)*1]), &(inteval->stack[((hsi*825+4190)*1+lsi)*1]),1);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*1540+22716)*1+lsi)*1]), &(inteval->stack[((hsi*1386+6419)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5015)*1+lsi)*1]),1);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*1980+4190)*1+lsi)*1]), &(inteval->stack[((hsi*1848+9050)*1+lsi)*1]), &(inteval->stack[((hsi*1540+22716)*1+lsi)*1]),1);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*2475+6170)*1+lsi)*1]), &(inteval->stack[((hsi*2376+13268)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4190)*1+lsi)*1]),1);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*513+8645)*1+lsi)*1]), &(inteval->stack[((hsi*190+0)*1+lsi)*1]), &(inteval->stack[((hsi*171+190)*1+lsi)*1]),1);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*918+4190)*1+lsi)*1]), &(inteval->stack[((hsi*513+8645)*1+lsi)*1]), &(inteval->stack[((hsi*459+10898)*1+lsi)*1]),1);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*1360+8645)*1+lsi)*1]), &(inteval->stack[((hsi*918+4190)*1+lsi)*1]), &(inteval->stack[((hsi*816+16941)*1+lsi)*1]),1);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*1800+15644)*1+lsi)*1]), &(inteval->stack[((hsi*1360+8645)*1+lsi)*1]), &(inteval->stack[((hsi*1200+17757)*1+lsi)*1]),1);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*2205+8645)*1+lsi)*1]), &(inteval->stack[((hsi*1800+15644)*1+lsi)*1]), &(inteval->stack[((hsi*1575+18957)*1+lsi)*1]),1);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*2548+15644)*1+lsi)*1]), &(inteval->stack[((hsi*2205+8645)*1+lsi)*1]), &(inteval->stack[((hsi*1911+11357)*1+lsi)*1]),1);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*2808+8645)*1+lsi)*1]), &(inteval->stack[((hsi*2548+15644)*1+lsi)*1]), &(inteval->stack[((hsi*2184+20532)*1+lsi)*1]),1);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*2970+15644)*1+lsi)*1]), &(inteval->stack[((hsi*2808+8645)*1+lsi)*1]), &(inteval->stack[((hsi*2376+13268)*1+lsi)*1]),1);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*3025+1165)*1+lsi)*1]), &(inteval->stack[((hsi*2970+15644)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6170)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3025+1165)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
