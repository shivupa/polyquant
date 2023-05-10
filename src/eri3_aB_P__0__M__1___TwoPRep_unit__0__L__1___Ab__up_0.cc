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
#include <HRRPart1bra0ket0ml.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_P__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_P__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2925)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_P__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+10350)*1+lsi)*1]), &(inteval->stack[((hsi*234+2328)*1+lsi)*1]), &(inteval->stack[((hsi*198+2562)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+10944)*1+lsi)*1]), &(inteval->stack[((hsi*273+2055)*1+lsi)*1]), &(inteval->stack[((hsi*234+2328)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+11646)*1+lsi)*1]), &(inteval->stack[((hsi*702+10944)*1+lsi)*1]), &(inteval->stack[((hsi*594+10350)*1+lsi)*1]),3);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*819+12834)*1+lsi)*1]), &(inteval->stack[((hsi*315+1740)*1+lsi)*1]), &(inteval->stack[((hsi*273+2055)*1+lsi)*1]),3);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1404+13653)*1+lsi)*1]), &(inteval->stack[((hsi*819+12834)*1+lsi)*1]), &(inteval->stack[((hsi*702+10944)*1+lsi)*1]),3);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1980+15057)*1+lsi)*1]), &(inteval->stack[((hsi*1404+13653)*1+lsi)*1]), &(inteval->stack[((hsi*1188+11646)*1+lsi)*1]),3);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*945+17037)*1+lsi)*1]), &(inteval->stack[((hsi*360+1380)*1+lsi)*1]), &(inteval->stack[((hsi*315+1740)*1+lsi)*1]),3);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*1638+17982)*1+lsi)*1]), &(inteval->stack[((hsi*945+17037)*1+lsi)*1]), &(inteval->stack[((hsi*819+12834)*1+lsi)*1]),3);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*2340+19620)*1+lsi)*1]), &(inteval->stack[((hsi*1638+17982)*1+lsi)*1]), &(inteval->stack[((hsi*1404+13653)*1+lsi)*1]),3);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*2970+21960)*1+lsi)*1]), &(inteval->stack[((hsi*2340+19620)*1+lsi)*1]), &(inteval->stack[((hsi*1980+15057)*1+lsi)*1]),3);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*1080+12834)*1+lsi)*1]), &(inteval->stack[((hsi*408+972)*1+lsi)*1]), &(inteval->stack[((hsi*360+1380)*1+lsi)*1]),3);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*1890+24930)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12834)*1+lsi)*1]), &(inteval->stack[((hsi*945+17037)*1+lsi)*1]),3);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*2730+26820)*1+lsi)*1]), &(inteval->stack[((hsi*1890+24930)*1+lsi)*1]), &(inteval->stack[((hsi*1638+17982)*1+lsi)*1]),3);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*3510+29550)*1+lsi)*1]), &(inteval->stack[((hsi*2730+26820)*1+lsi)*1]), &(inteval->stack[((hsi*2340+19620)*1+lsi)*1]),3);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*4158+17037)*1+lsi)*1]), &(inteval->stack[((hsi*3510+29550)*1+lsi)*1]), &(inteval->stack[((hsi*2970+21960)*1+lsi)*1]),3);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*1224+33060)*1+lsi)*1]), &(inteval->stack[((hsi*459+513)*1+lsi)*1]), &(inteval->stack[((hsi*408+972)*1+lsi)*1]),3);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*2160+34284)*1+lsi)*1]), &(inteval->stack[((hsi*1224+33060)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12834)*1+lsi)*1]),3);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*3150+36444)*1+lsi)*1]), &(inteval->stack[((hsi*2160+34284)*1+lsi)*1]), &(inteval->stack[((hsi*1890+24930)*1+lsi)*1]),3);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*4095+39594)*1+lsi)*1]), &(inteval->stack[((hsi*3150+36444)*1+lsi)*1]), &(inteval->stack[((hsi*2730+26820)*1+lsi)*1]),3);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*4914+43689)*1+lsi)*1]), &(inteval->stack[((hsi*4095+39594)*1+lsi)*1]), &(inteval->stack[((hsi*3510+29550)*1+lsi)*1]),3);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*5544+24930)*1+lsi)*1]), &(inteval->stack[((hsi*4914+43689)*1+lsi)*1]), &(inteval->stack[((hsi*4158+17037)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+30474)*1+lsi)*1]), &(inteval->stack[((hsi*198+2562)*1+lsi)*1]), &(inteval->stack[((hsi*165+2760)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+12834)*1+lsi)*1]), &(inteval->stack[((hsi*594+10350)*1+lsi)*1]), &(inteval->stack[((hsi*495+30474)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+30474)*1+lsi)*1]), &(inteval->stack[((hsi*1188+11646)*1+lsi)*1]), &(inteval->stack[((hsi*990+12834)*1+lsi)*1]),3);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*2475+10350)*1+lsi)*1]), &(inteval->stack[((hsi*1980+15057)*1+lsi)*1]), &(inteval->stack[((hsi*1650+30474)*1+lsi)*1]),3);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*3465+12825)*1+lsi)*1]), &(inteval->stack[((hsi*2970+21960)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10350)*1+lsi)*1]),3);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*4620+48603)*1+lsi)*1]), &(inteval->stack[((hsi*4158+17037)*1+lsi)*1]), &(inteval->stack[((hsi*3465+12825)*1+lsi)*1]),3);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*5940+10350)*1+lsi)*1]), &(inteval->stack[((hsi*5544+24930)*1+lsi)*1]), &(inteval->stack[((hsi*4620+48603)*1+lsi)*1]),3);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*1377+16290)*1+lsi)*1]), &(inteval->stack[((hsi*513+0)*1+lsi)*1]), &(inteval->stack[((hsi*459+513)*1+lsi)*1]),3);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*2448+17667)*1+lsi)*1]), &(inteval->stack[((hsi*1377+16290)*1+lsi)*1]), &(inteval->stack[((hsi*1224+33060)*1+lsi)*1]),3);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*3600+20115)*1+lsi)*1]), &(inteval->stack[((hsi*2448+17667)*1+lsi)*1]), &(inteval->stack[((hsi*2160+34284)*1+lsi)*1]),3);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*4725+30474)*1+lsi)*1]), &(inteval->stack[((hsi*3600+20115)*1+lsi)*1]), &(inteval->stack[((hsi*3150+36444)*1+lsi)*1]),3);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*5733+16290)*1+lsi)*1]), &(inteval->stack[((hsi*4725+30474)*1+lsi)*1]), &(inteval->stack[((hsi*4095+39594)*1+lsi)*1]),3);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*6552+30474)*1+lsi)*1]), &(inteval->stack[((hsi*5733+16290)*1+lsi)*1]), &(inteval->stack[((hsi*4914+43689)*1+lsi)*1]),3);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*7128+16290)*1+lsi)*1]), &(inteval->stack[((hsi*6552+30474)*1+lsi)*1]), &(inteval->stack[((hsi*5544+24930)*1+lsi)*1]),3);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*7425+2925)*1+lsi)*1]), &(inteval->stack[((hsi*7128+16290)*1+lsi)*1]), &(inteval->stack[((hsi*5940+10350)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7425+2925)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
