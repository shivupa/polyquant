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
#include <eri3_aB_G__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_G__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12060)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_G__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+41760)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9075)*1+lsi)*1]), &(inteval->stack[((hsi*990+10245)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+44730)*1+lsi)*1]), &(inteval->stack[((hsi*1365+7710)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9075)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+48240)*1+lsi)*1]), &(inteval->stack[((hsi*3510+44730)*1+lsi)*1]), &(inteval->stack[((hsi*2970+41760)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+54180)*1+lsi)*1]), &(inteval->stack[((hsi*1575+6135)*1+lsi)*1]), &(inteval->stack[((hsi*1365+7710)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+58275)*1+lsi)*1]), &(inteval->stack[((hsi*4095+54180)*1+lsi)*1]), &(inteval->stack[((hsi*3510+44730)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+65295)*1+lsi)*1]), &(inteval->stack[((hsi*7020+58275)*1+lsi)*1]), &(inteval->stack[((hsi*5940+48240)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+75195)*1+lsi)*1]), &(inteval->stack[((hsi*1800+4335)*1+lsi)*1]), &(inteval->stack[((hsi*1575+6135)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+79920)*1+lsi)*1]), &(inteval->stack[((hsi*4725+75195)*1+lsi)*1]), &(inteval->stack[((hsi*4095+54180)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+88110)*1+lsi)*1]), &(inteval->stack[((hsi*8190+79920)*1+lsi)*1]), &(inteval->stack[((hsi*7020+58275)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+99810)*1+lsi)*1]), &(inteval->stack[((hsi*11700+88110)*1+lsi)*1]), &(inteval->stack[((hsi*9900+65295)*1+lsi)*1]),15);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*5400+54180)*1+lsi)*1]), &(inteval->stack[((hsi*2040+2295)*1+lsi)*1]), &(inteval->stack[((hsi*1800+4335)*1+lsi)*1]),15);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*9450+114660)*1+lsi)*1]), &(inteval->stack[((hsi*5400+54180)*1+lsi)*1]), &(inteval->stack[((hsi*4725+75195)*1+lsi)*1]),15);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*13650+124110)*1+lsi)*1]), &(inteval->stack[((hsi*9450+114660)*1+lsi)*1]), &(inteval->stack[((hsi*8190+79920)*1+lsi)*1]),15);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*17550+137760)*1+lsi)*1]), &(inteval->stack[((hsi*13650+124110)*1+lsi)*1]), &(inteval->stack[((hsi*11700+88110)*1+lsi)*1]),15);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*20790+75195)*1+lsi)*1]), &(inteval->stack[((hsi*17550+137760)*1+lsi)*1]), &(inteval->stack[((hsi*14850+99810)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+4335)*1+lsi)*1]), &(inteval->stack[((hsi*990+10245)*1+lsi)*1]), &(inteval->stack[((hsi*825+11235)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+59580)*1+lsi)*1]), &(inteval->stack[((hsi*2970+41760)*1+lsi)*1]), &(inteval->stack[((hsi*2475+4335)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+155310)*1+lsi)*1]), &(inteval->stack[((hsi*5940+48240)*1+lsi)*1]), &(inteval->stack[((hsi*4950+59580)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+41760)*1+lsi)*1]), &(inteval->stack[((hsi*9900+65295)*1+lsi)*1]), &(inteval->stack[((hsi*8250+155310)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+155310)*1+lsi)*1]), &(inteval->stack[((hsi*14850+99810)*1+lsi)*1]), &(inteval->stack[((hsi*12375+41760)*1+lsi)*1]),15);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*23100+172635)*1+lsi)*1]), &(inteval->stack[((hsi*20790+75195)*1+lsi)*1]), &(inteval->stack[((hsi*17325+155310)*1+lsi)*1]),15);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*6120+95985)*1+lsi)*1]), &(inteval->stack[((hsi*2295+0)*1+lsi)*1]), &(inteval->stack[((hsi*2040+2295)*1+lsi)*1]),15);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*10800+155310)*1+lsi)*1]), &(inteval->stack[((hsi*6120+95985)*1+lsi)*1]), &(inteval->stack[((hsi*5400+54180)*1+lsi)*1]),15);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*15750+41760)*1+lsi)*1]), &(inteval->stack[((hsi*10800+155310)*1+lsi)*1]), &(inteval->stack[((hsi*9450+114660)*1+lsi)*1]),15);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*20475+95985)*1+lsi)*1]), &(inteval->stack[((hsi*15750+41760)*1+lsi)*1]), &(inteval->stack[((hsi*13650+124110)*1+lsi)*1]),15);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*24570+41760)*1+lsi)*1]), &(inteval->stack[((hsi*20475+95985)*1+lsi)*1]), &(inteval->stack[((hsi*17550+137760)*1+lsi)*1]),15);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*27720+95985)*1+lsi)*1]), &(inteval->stack[((hsi*24570+41760)*1+lsi)*1]), &(inteval->stack[((hsi*20790+75195)*1+lsi)*1]),15);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*29700+12060)*1+lsi)*1]), &(inteval->stack[((hsi*27720+95985)*1+lsi)*1]), &(inteval->stack[((hsi*23100+172635)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*29700+12060)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif