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
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0pfd.h>
#include <HRRPart0ket0bra0pff.h>
#include <HRRPart0ket0bra0pfg.h>
#include <HRRPart0ket0bra0pfh.h>
#include <HRRPart0ket0bra0pfp.h>
#include <HRRPart0ket0bra0pgd.h>
#include <HRRPart0ket0bra0pgf.h>
#include <HRRPart0ket0bra0pgg.h>
#include <HRRPart0ket0bra0pgp.h>
#include <HRRPart0ket0bra0phd.h>
#include <HRRPart0ket0bra0phf.h>
#include <HRRPart0ket0bra0php.h>
#include <HRRPart0ket0bra0pid.h>
#include <HRRPart0ket0bra0pip.h>
#include <HRRPart0ket0bra0pkp.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppf.h>
#include <HRRPart0ket0bra0ppg.h>
#include <HRRPart0ket0bra0pph.h>
#include <HRRPart0ket0bra0ppi.h>
#include <HRRPart0ket0bra0ppk.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psg.h>
#include <HRRPart0ket0bra0psh.h>
#include <HRRPart0ket0bra0psi.h>
#include <HRRPart0ket0bra0psk.h>
#include <HRRPart0ket0bra0psl.h>
#include <HRRPart0ket0bra0psp.h>
#include <_elecpot_L_PS_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_L_PS(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1110)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_L_PS_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+4080)*1+lsi)*1]), &(inteval->stack[((hsi*91+875)*1+lsi)*1]), &(inteval->stack[((hsi*78+966)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+4314)*1+lsi)*1]), &(inteval->stack[((hsi*105+770)*1+lsi)*1]), &(inteval->stack[((hsi*91+875)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+4587)*1+lsi)*1]), &(inteval->stack[((hsi*273+4314)*1+lsi)*1]), &(inteval->stack[((hsi*234+4080)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+5055)*1+lsi)*1]), &(inteval->stack[((hsi*120+650)*1+lsi)*1]), &(inteval->stack[((hsi*105+770)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+5370)*1+lsi)*1]), &(inteval->stack[((hsi*315+5055)*1+lsi)*1]), &(inteval->stack[((hsi*273+4314)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+5916)*1+lsi)*1]), &(inteval->stack[((hsi*546+5370)*1+lsi)*1]), &(inteval->stack[((hsi*468+4587)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+6696)*1+lsi)*1]), &(inteval->stack[((hsi*136+514)*1+lsi)*1]), &(inteval->stack[((hsi*120+650)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+7056)*1+lsi)*1]), &(inteval->stack[((hsi*360+6696)*1+lsi)*1]), &(inteval->stack[((hsi*315+5055)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+7686)*1+lsi)*1]), &(inteval->stack[((hsi*630+7056)*1+lsi)*1]), &(inteval->stack[((hsi*546+5370)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+8596)*1+lsi)*1]), &(inteval->stack[((hsi*910+7686)*1+lsi)*1]), &(inteval->stack[((hsi*780+5916)*1+lsi)*1]),1);
HRRPart0ket0bra0php(inteval, &(inteval->stack[((hsi*408+5055)*1+lsi)*1]), &(inteval->stack[((hsi*153+361)*1+lsi)*1]), &(inteval->stack[((hsi*136+514)*1+lsi)*1]),1);
HRRPart0ket0bra0pgd(inteval, &(inteval->stack[((hsi*720+9766)*1+lsi)*1]), &(inteval->stack[((hsi*408+5055)*1+lsi)*1]), &(inteval->stack[((hsi*360+6696)*1+lsi)*1]),1);
HRRPart0ket0bra0pff(inteval, &(inteval->stack[((hsi*1050+10486)*1+lsi)*1]), &(inteval->stack[((hsi*720+9766)*1+lsi)*1]), &(inteval->stack[((hsi*630+7056)*1+lsi)*1]),1);
HRRPart0ket0bra0pdg(inteval, &(inteval->stack[((hsi*1365+11536)*1+lsi)*1]), &(inteval->stack[((hsi*1050+10486)*1+lsi)*1]), &(inteval->stack[((hsi*910+7686)*1+lsi)*1]),1);
HRRPart0ket0bra0pph(inteval, &(inteval->stack[((hsi*1638+6696)*1+lsi)*1]), &(inteval->stack[((hsi*1365+11536)*1+lsi)*1]), &(inteval->stack[((hsi*1170+8596)*1+lsi)*1]),1);
HRRPart0ket0bra0pip(inteval, &(inteval->stack[((hsi*459+12901)*1+lsi)*1]), &(inteval->stack[((hsi*171+190)*1+lsi)*1]), &(inteval->stack[((hsi*153+361)*1+lsi)*1]),1);
HRRPart0ket0bra0phd(inteval, &(inteval->stack[((hsi*816+13360)*1+lsi)*1]), &(inteval->stack[((hsi*459+12901)*1+lsi)*1]), &(inteval->stack[((hsi*408+5055)*1+lsi)*1]),1);
HRRPart0ket0bra0pgf(inteval, &(inteval->stack[((hsi*1200+14176)*1+lsi)*1]), &(inteval->stack[((hsi*816+13360)*1+lsi)*1]), &(inteval->stack[((hsi*720+9766)*1+lsi)*1]),1);
HRRPart0ket0bra0pfg(inteval, &(inteval->stack[((hsi*1575+15376)*1+lsi)*1]), &(inteval->stack[((hsi*1200+14176)*1+lsi)*1]), &(inteval->stack[((hsi*1050+10486)*1+lsi)*1]),1);
HRRPart0ket0bra0pdh(inteval, &(inteval->stack[((hsi*1911+16951)*1+lsi)*1]), &(inteval->stack[((hsi*1575+15376)*1+lsi)*1]), &(inteval->stack[((hsi*1365+11536)*1+lsi)*1]),1);
HRRPart0ket0bra0ppi(inteval, &(inteval->stack[((hsi*2184+9766)*1+lsi)*1]), &(inteval->stack[((hsi*1911+16951)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6696)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+11950)*1+lsi)*1]), &(inteval->stack[((hsi*78+966)*1+lsi)*1]), &(inteval->stack[((hsi*66+1044)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+5055)*1+lsi)*1]), &(inteval->stack[((hsi*234+4080)*1+lsi)*1]), &(inteval->stack[((hsi*198+11950)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+11950)*1+lsi)*1]), &(inteval->stack[((hsi*468+4587)*1+lsi)*1]), &(inteval->stack[((hsi*396+5055)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+4080)*1+lsi)*1]), &(inteval->stack[((hsi*780+5916)*1+lsi)*1]), &(inteval->stack[((hsi*660+11950)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+5070)*1+lsi)*1]), &(inteval->stack[((hsi*1170+8596)*1+lsi)*1]), &(inteval->stack[((hsi*990+4080)*1+lsi)*1]),1);
HRRPart0ket0bra0psi(inteval, &(inteval->stack[((hsi*1848+18862)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6696)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5070)*1+lsi)*1]),1);
HRRPart0ket0bra0psk(inteval, &(inteval->stack[((hsi*2376+4080)*1+lsi)*1]), &(inteval->stack[((hsi*2184+9766)*1+lsi)*1]), &(inteval->stack[((hsi*1848+18862)*1+lsi)*1]),1);
HRRPart0ket0bra0pkp(inteval, &(inteval->stack[((hsi*513+6456)*1+lsi)*1]), &(inteval->stack[((hsi*190+0)*1+lsi)*1]), &(inteval->stack[((hsi*171+190)*1+lsi)*1]),1);
HRRPart0ket0bra0pid(inteval, &(inteval->stack[((hsi*918+6969)*1+lsi)*1]), &(inteval->stack[((hsi*513+6456)*1+lsi)*1]), &(inteval->stack[((hsi*459+12901)*1+lsi)*1]),1);
HRRPart0ket0bra0phf(inteval, &(inteval->stack[((hsi*1360+7887)*1+lsi)*1]), &(inteval->stack[((hsi*918+6969)*1+lsi)*1]), &(inteval->stack[((hsi*816+13360)*1+lsi)*1]),1);
HRRPart0ket0bra0pgg(inteval, &(inteval->stack[((hsi*1800+11950)*1+lsi)*1]), &(inteval->stack[((hsi*1360+7887)*1+lsi)*1]), &(inteval->stack[((hsi*1200+14176)*1+lsi)*1]),1);
HRRPart0ket0bra0pfh(inteval, &(inteval->stack[((hsi*2205+6456)*1+lsi)*1]), &(inteval->stack[((hsi*1800+11950)*1+lsi)*1]), &(inteval->stack[((hsi*1575+15376)*1+lsi)*1]),1);
HRRPart0ket0bra0pdi(inteval, &(inteval->stack[((hsi*2548+11950)*1+lsi)*1]), &(inteval->stack[((hsi*2205+6456)*1+lsi)*1]), &(inteval->stack[((hsi*1911+16951)*1+lsi)*1]),1);
HRRPart0ket0bra0ppk(inteval, &(inteval->stack[((hsi*2808+6456)*1+lsi)*1]), &(inteval->stack[((hsi*2548+11950)*1+lsi)*1]), &(inteval->stack[((hsi*2184+9766)*1+lsi)*1]),1);
HRRPart0ket0bra0psl(inteval, &(inteval->stack[((hsi*2970+1110)*1+lsi)*1]), &(inteval->stack[((hsi*2808+6456)*1+lsi)*1]), &(inteval->stack[((hsi*2376+4080)*1+lsi)*1]),1);
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
