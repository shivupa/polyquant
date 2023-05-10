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
#include <HRRPart0ket0bra0pdd.h>
#include <HRRPart0ket0bra0pdf.h>
#include <HRRPart0ket0bra0pdg.h>
#include <HRRPart0ket0bra0pdh.h>
#include <HRRPart0ket0bra0pdi.h>
#include <HRRPart0ket0bra0pdk.h>
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0pfd.h>
#include <HRRPart0ket0bra0pff.h>
#include <HRRPart0ket0bra0pfg.h>
#include <HRRPart0ket0bra0pfh.h>
#include <HRRPart0ket0bra0pfi.h>
#include <HRRPart0ket0bra0pfp.h>
#include <HRRPart0ket0bra0pgd.h>
#include <HRRPart0ket0bra0pgf.h>
#include <HRRPart0ket0bra0pgg.h>
#include <HRRPart0ket0bra0pgh.h>
#include <HRRPart0ket0bra0pgp.h>
#include <HRRPart0ket0bra0phd.h>
#include <HRRPart0ket0bra0phf.h>
#include <HRRPart0ket0bra0phg.h>
#include <HRRPart0ket0bra0php.h>
#include <HRRPart0ket0bra0pid.h>
#include <HRRPart0ket0bra0pif.h>
#include <HRRPart0ket0bra0pip.h>
#include <HRRPart0ket0bra0pkd.h>
#include <HRRPart0ket0bra0pkp.h>
#include <HRRPart0ket0bra0plp.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppf.h>
#include <HRRPart0ket0bra0ppg.h>
#include <HRRPart0ket0bra0pph.h>
#include <HRRPart0ket0bra0ppi.h>
#include <HRRPart0ket0bra0ppk.h>
#include <HRRPart0ket0bra0ppl.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psg.h>
#include <HRRPart0ket0bra0psh.h>
#include <HRRPart0ket0bra0psi.h>
#include <HRRPart0ket0bra0psk.h>
#include <HRRPart0ket0bra0psl.h>
#include <HRRPart0ket0bra0psm.h>
#include <HRRPart0ket0bra0psp.h>
#include <_elecpot_M_PS_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_M_PS(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1320)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_M_PS_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+4950)*1+lsi)*1]), &(inteval->stack[((hsi*91+1085)*1+lsi)*1]), &(inteval->stack[((hsi*78+1176)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+5184)*1+lsi)*1]), &(inteval->stack[((hsi*105+980)*1+lsi)*1]), &(inteval->stack[((hsi*91+1085)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+5457)*1+lsi)*1]), &(inteval->stack[((hsi*273+5184)*1+lsi)*1]), &(inteval->stack[((hsi*234+4950)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+5925)*1+lsi)*1]), &(inteval->stack[((hsi*120+860)*1+lsi)*1]), &(inteval->stack[((hsi*105+980)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+6240)*1+lsi)*1]), &(inteval->stack[((hsi*315+5925)*1+lsi)*1]), &(inteval->stack[((hsi*273+5184)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+6786)*1+lsi)*1]), &(inteval->stack[((hsi*546+6240)*1+lsi)*1]), &(inteval->stack[((hsi*468+5457)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+7566)*1+lsi)*1]), &(inteval->stack[((hsi*136+724)*1+lsi)*1]), &(inteval->stack[((hsi*120+860)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+7926)*1+lsi)*1]), &(inteval->stack[((hsi*360+7566)*1+lsi)*1]), &(inteval->stack[((hsi*315+5925)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+8556)*1+lsi)*1]), &(inteval->stack[((hsi*630+7926)*1+lsi)*1]), &(inteval->stack[((hsi*546+6240)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+9466)*1+lsi)*1]), &(inteval->stack[((hsi*910+8556)*1+lsi)*1]), &(inteval->stack[((hsi*780+6786)*1+lsi)*1]),1);
HRRPart0ket0bra0php(inteval, &(inteval->stack[((hsi*408+5925)*1+lsi)*1]), &(inteval->stack[((hsi*153+571)*1+lsi)*1]), &(inteval->stack[((hsi*136+724)*1+lsi)*1]),1);
HRRPart0ket0bra0pgd(inteval, &(inteval->stack[((hsi*720+10636)*1+lsi)*1]), &(inteval->stack[((hsi*408+5925)*1+lsi)*1]), &(inteval->stack[((hsi*360+7566)*1+lsi)*1]),1);
HRRPart0ket0bra0pff(inteval, &(inteval->stack[((hsi*1050+11356)*1+lsi)*1]), &(inteval->stack[((hsi*720+10636)*1+lsi)*1]), &(inteval->stack[((hsi*630+7926)*1+lsi)*1]),1);
HRRPart0ket0bra0pdg(inteval, &(inteval->stack[((hsi*1365+12406)*1+lsi)*1]), &(inteval->stack[((hsi*1050+11356)*1+lsi)*1]), &(inteval->stack[((hsi*910+8556)*1+lsi)*1]),1);
HRRPart0ket0bra0pph(inteval, &(inteval->stack[((hsi*1638+7566)*1+lsi)*1]), &(inteval->stack[((hsi*1365+12406)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9466)*1+lsi)*1]),1);
HRRPart0ket0bra0pip(inteval, &(inteval->stack[((hsi*459+13771)*1+lsi)*1]), &(inteval->stack[((hsi*171+400)*1+lsi)*1]), &(inteval->stack[((hsi*153+571)*1+lsi)*1]),1);
HRRPart0ket0bra0phd(inteval, &(inteval->stack[((hsi*816+14230)*1+lsi)*1]), &(inteval->stack[((hsi*459+13771)*1+lsi)*1]), &(inteval->stack[((hsi*408+5925)*1+lsi)*1]),1);
HRRPart0ket0bra0pgf(inteval, &(inteval->stack[((hsi*1200+15046)*1+lsi)*1]), &(inteval->stack[((hsi*816+14230)*1+lsi)*1]), &(inteval->stack[((hsi*720+10636)*1+lsi)*1]),1);
HRRPart0ket0bra0pfg(inteval, &(inteval->stack[((hsi*1575+16246)*1+lsi)*1]), &(inteval->stack[((hsi*1200+15046)*1+lsi)*1]), &(inteval->stack[((hsi*1050+11356)*1+lsi)*1]),1);
HRRPart0ket0bra0pdh(inteval, &(inteval->stack[((hsi*1911+17821)*1+lsi)*1]), &(inteval->stack[((hsi*1575+16246)*1+lsi)*1]), &(inteval->stack[((hsi*1365+12406)*1+lsi)*1]),1);
HRRPart0ket0bra0ppi(inteval, &(inteval->stack[((hsi*2184+10636)*1+lsi)*1]), &(inteval->stack[((hsi*1911+17821)*1+lsi)*1]), &(inteval->stack[((hsi*1638+7566)*1+lsi)*1]),1);
HRRPart0ket0bra0pkp(inteval, &(inteval->stack[((hsi*513+12820)*1+lsi)*1]), &(inteval->stack[((hsi*190+210)*1+lsi)*1]), &(inteval->stack[((hsi*171+400)*1+lsi)*1]),1);
HRRPart0ket0bra0pid(inteval, &(inteval->stack[((hsi*918+19732)*1+lsi)*1]), &(inteval->stack[((hsi*513+12820)*1+lsi)*1]), &(inteval->stack[((hsi*459+13771)*1+lsi)*1]),1);
HRRPart0ket0bra0phf(inteval, &(inteval->stack[((hsi*1360+20650)*1+lsi)*1]), &(inteval->stack[((hsi*918+19732)*1+lsi)*1]), &(inteval->stack[((hsi*816+14230)*1+lsi)*1]),1);
HRRPart0ket0bra0pgg(inteval, &(inteval->stack[((hsi*1800+22010)*1+lsi)*1]), &(inteval->stack[((hsi*1360+20650)*1+lsi)*1]), &(inteval->stack[((hsi*1200+15046)*1+lsi)*1]),1);
HRRPart0ket0bra0pfh(inteval, &(inteval->stack[((hsi*2205+13333)*1+lsi)*1]), &(inteval->stack[((hsi*1800+22010)*1+lsi)*1]), &(inteval->stack[((hsi*1575+16246)*1+lsi)*1]),1);
HRRPart0ket0bra0pdi(inteval, &(inteval->stack[((hsi*2548+23810)*1+lsi)*1]), &(inteval->stack[((hsi*2205+13333)*1+lsi)*1]), &(inteval->stack[((hsi*1911+17821)*1+lsi)*1]),1);
HRRPart0ket0bra0ppk(inteval, &(inteval->stack[((hsi*2808+15538)*1+lsi)*1]), &(inteval->stack[((hsi*2548+23810)*1+lsi)*1]), &(inteval->stack[((hsi*2184+10636)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+18346)*1+lsi)*1]), &(inteval->stack[((hsi*78+1176)*1+lsi)*1]), &(inteval->stack[((hsi*66+1254)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+18544)*1+lsi)*1]), &(inteval->stack[((hsi*234+4950)*1+lsi)*1]), &(inteval->stack[((hsi*198+18346)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+400)*1+lsi)*1]), &(inteval->stack[((hsi*468+5457)*1+lsi)*1]), &(inteval->stack[((hsi*396+18544)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+4950)*1+lsi)*1]), &(inteval->stack[((hsi*780+6786)*1+lsi)*1]), &(inteval->stack[((hsi*660+400)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+18346)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9466)*1+lsi)*1]), &(inteval->stack[((hsi*990+4950)*1+lsi)*1]),1);
HRRPart0ket0bra0psi(inteval, &(inteval->stack[((hsi*1848+4950)*1+lsi)*1]), &(inteval->stack[((hsi*1638+7566)*1+lsi)*1]), &(inteval->stack[((hsi*1386+18346)*1+lsi)*1]),1);
HRRPart0ket0bra0psk(inteval, &(inteval->stack[((hsi*2376+6798)*1+lsi)*1]), &(inteval->stack[((hsi*2184+10636)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4950)*1+lsi)*1]),1);
HRRPart0ket0bra0psl(inteval, &(inteval->stack[((hsi*2970+9174)*1+lsi)*1]), &(inteval->stack[((hsi*2808+15538)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6798)*1+lsi)*1]),1);
HRRPart0ket0bra0plp(inteval, &(inteval->stack[((hsi*570+4950)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*190+210)*1+lsi)*1]),1);
HRRPart0ket0bra0pkd(inteval, &(inteval->stack[((hsi*1026+5520)*1+lsi)*1]), &(inteval->stack[((hsi*570+4950)*1+lsi)*1]), &(inteval->stack[((hsi*513+12820)*1+lsi)*1]),1);
HRRPart0ket0bra0pif(inteval, &(inteval->stack[((hsi*1530+6546)*1+lsi)*1]), &(inteval->stack[((hsi*1026+5520)*1+lsi)*1]), &(inteval->stack[((hsi*918+19732)*1+lsi)*1]),1);
HRRPart0ket0bra0phg(inteval, &(inteval->stack[((hsi*2040+18346)*1+lsi)*1]), &(inteval->stack[((hsi*1530+6546)*1+lsi)*1]), &(inteval->stack[((hsi*1360+20650)*1+lsi)*1]),1);
HRRPart0ket0bra0pgh(inteval, &(inteval->stack[((hsi*2520+4950)*1+lsi)*1]), &(inteval->stack[((hsi*2040+18346)*1+lsi)*1]), &(inteval->stack[((hsi*1800+22010)*1+lsi)*1]),1);
HRRPart0ket0bra0pfi(inteval, &(inteval->stack[((hsi*2940+18346)*1+lsi)*1]), &(inteval->stack[((hsi*2520+4950)*1+lsi)*1]), &(inteval->stack[((hsi*2205+13333)*1+lsi)*1]),1);
HRRPart0ket0bra0pdk(inteval, &(inteval->stack[((hsi*3276+4950)*1+lsi)*1]), &(inteval->stack[((hsi*2940+18346)*1+lsi)*1]), &(inteval->stack[((hsi*2548+23810)*1+lsi)*1]),1);
HRRPart0ket0bra0ppl(inteval, &(inteval->stack[((hsi*3510+18346)*1+lsi)*1]), &(inteval->stack[((hsi*3276+4950)*1+lsi)*1]), &(inteval->stack[((hsi*2808+15538)*1+lsi)*1]),1);
HRRPart0ket0bra0psm(inteval, &(inteval->stack[((hsi*3630+1320)*1+lsi)*1]), &(inteval->stack[((hsi*3510+18346)*1+lsi)*1]), &(inteval->stack[((hsi*2970+9174)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3630+1320)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
