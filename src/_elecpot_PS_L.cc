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
#include <_elecpot_PS_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_PS_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1110)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_PS_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+4080)*1+lsi)*1]), &(inteval->stack[((hsi*91+875)*1+lsi)*1]), &(inteval->stack[((hsi*78+966)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+4314)*1+lsi)*1]), &(inteval->stack[((hsi*105+770)*1+lsi)*1]), &(inteval->stack[((hsi*91+875)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+4587)*1+lsi)*1]), &(inteval->stack[((hsi*273+4314)*1+lsi)*1]), &(inteval->stack[((hsi*234+4080)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+5055)*1+lsi)*1]), &(inteval->stack[((hsi*120+650)*1+lsi)*1]), &(inteval->stack[((hsi*105+770)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+5370)*1+lsi)*1]), &(inteval->stack[((hsi*315+5055)*1+lsi)*1]), &(inteval->stack[((hsi*273+4314)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+5916)*1+lsi)*1]), &(inteval->stack[((hsi*546+5370)*1+lsi)*1]), &(inteval->stack[((hsi*468+4587)*1+lsi)*1]),1);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*360+6696)*1+lsi)*1]), &(inteval->stack[((hsi*136+514)*1+lsi)*1]), &(inteval->stack[((hsi*120+650)*1+lsi)*1]),1);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*630+7056)*1+lsi)*1]), &(inteval->stack[((hsi*360+6696)*1+lsi)*1]), &(inteval->stack[((hsi*315+5055)*1+lsi)*1]),1);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*910+7686)*1+lsi)*1]), &(inteval->stack[((hsi*630+7056)*1+lsi)*1]), &(inteval->stack[((hsi*546+5370)*1+lsi)*1]),1);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*1170+8596)*1+lsi)*1]), &(inteval->stack[((hsi*910+7686)*1+lsi)*1]), &(inteval->stack[((hsi*780+5916)*1+lsi)*1]),1);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*408+5055)*1+lsi)*1]), &(inteval->stack[((hsi*153+361)*1+lsi)*1]), &(inteval->stack[((hsi*136+514)*1+lsi)*1]),1);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*720+9766)*1+lsi)*1]), &(inteval->stack[((hsi*408+5055)*1+lsi)*1]), &(inteval->stack[((hsi*360+6696)*1+lsi)*1]),1);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*1050+10486)*1+lsi)*1]), &(inteval->stack[((hsi*720+9766)*1+lsi)*1]), &(inteval->stack[((hsi*630+7056)*1+lsi)*1]),1);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*1365+11536)*1+lsi)*1]), &(inteval->stack[((hsi*1050+10486)*1+lsi)*1]), &(inteval->stack[((hsi*910+7686)*1+lsi)*1]),1);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*1638+6696)*1+lsi)*1]), &(inteval->stack[((hsi*1365+11536)*1+lsi)*1]), &(inteval->stack[((hsi*1170+8596)*1+lsi)*1]),1);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*459+12901)*1+lsi)*1]), &(inteval->stack[((hsi*171+190)*1+lsi)*1]), &(inteval->stack[((hsi*153+361)*1+lsi)*1]),1);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*816+13360)*1+lsi)*1]), &(inteval->stack[((hsi*459+12901)*1+lsi)*1]), &(inteval->stack[((hsi*408+5055)*1+lsi)*1]),1);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*1200+14176)*1+lsi)*1]), &(inteval->stack[((hsi*816+13360)*1+lsi)*1]), &(inteval->stack[((hsi*720+9766)*1+lsi)*1]),1);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*1575+15376)*1+lsi)*1]), &(inteval->stack[((hsi*1200+14176)*1+lsi)*1]), &(inteval->stack[((hsi*1050+10486)*1+lsi)*1]),1);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*1911+16951)*1+lsi)*1]), &(inteval->stack[((hsi*1575+15376)*1+lsi)*1]), &(inteval->stack[((hsi*1365+11536)*1+lsi)*1]),1);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*2184+9766)*1+lsi)*1]), &(inteval->stack[((hsi*1911+16951)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6696)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+11950)*1+lsi)*1]), &(inteval->stack[((hsi*78+966)*1+lsi)*1]), &(inteval->stack[((hsi*66+1044)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+5055)*1+lsi)*1]), &(inteval->stack[((hsi*234+4080)*1+lsi)*1]), &(inteval->stack[((hsi*198+11950)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+11950)*1+lsi)*1]), &(inteval->stack[((hsi*468+4587)*1+lsi)*1]), &(inteval->stack[((hsi*396+5055)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+4080)*1+lsi)*1]), &(inteval->stack[((hsi*780+5916)*1+lsi)*1]), &(inteval->stack[((hsi*660+11950)*1+lsi)*1]),1);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*1386+5070)*1+lsi)*1]), &(inteval->stack[((hsi*1170+8596)*1+lsi)*1]), &(inteval->stack[((hsi*990+4080)*1+lsi)*1]),1);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*1848+18862)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6696)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5070)*1+lsi)*1]),1);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*2376+4080)*1+lsi)*1]), &(inteval->stack[((hsi*2184+9766)*1+lsi)*1]), &(inteval->stack[((hsi*1848+18862)*1+lsi)*1]),1);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*513+6456)*1+lsi)*1]), &(inteval->stack[((hsi*190+0)*1+lsi)*1]), &(inteval->stack[((hsi*171+190)*1+lsi)*1]),1);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*918+6969)*1+lsi)*1]), &(inteval->stack[((hsi*513+6456)*1+lsi)*1]), &(inteval->stack[((hsi*459+12901)*1+lsi)*1]),1);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*1360+7887)*1+lsi)*1]), &(inteval->stack[((hsi*918+6969)*1+lsi)*1]), &(inteval->stack[((hsi*816+13360)*1+lsi)*1]),1);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*1800+11950)*1+lsi)*1]), &(inteval->stack[((hsi*1360+7887)*1+lsi)*1]), &(inteval->stack[((hsi*1200+14176)*1+lsi)*1]),1);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*2205+6456)*1+lsi)*1]), &(inteval->stack[((hsi*1800+11950)*1+lsi)*1]), &(inteval->stack[((hsi*1575+15376)*1+lsi)*1]),1);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*2548+11950)*1+lsi)*1]), &(inteval->stack[((hsi*2205+6456)*1+lsi)*1]), &(inteval->stack[((hsi*1911+16951)*1+lsi)*1]),1);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*2808+6456)*1+lsi)*1]), &(inteval->stack[((hsi*2548+11950)*1+lsi)*1]), &(inteval->stack[((hsi*2184+9766)*1+lsi)*1]),1);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*2970+1110)*1+lsi)*1]), &(inteval->stack[((hsi*2808+6456)*1+lsi)*1]), &(inteval->stack[((hsi*2376+4080)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2970+1110)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
