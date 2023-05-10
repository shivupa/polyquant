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
#include <eri3_aB_L__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_L__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,43875)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_L__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+155250)*1+lsi)*1]), &(inteval->stack[((hsi*3510+34920)*1+lsi)*1]), &(inteval->stack[((hsi*2970+38430)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+164160)*1+lsi)*1]), &(inteval->stack[((hsi*4095+30825)*1+lsi)*1]), &(inteval->stack[((hsi*3510+34920)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+174690)*1+lsi)*1]), &(inteval->stack[((hsi*10530+164160)*1+lsi)*1]), &(inteval->stack[((hsi*8910+155250)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+192510)*1+lsi)*1]), &(inteval->stack[((hsi*4725+26100)*1+lsi)*1]), &(inteval->stack[((hsi*4095+30825)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+204795)*1+lsi)*1]), &(inteval->stack[((hsi*12285+192510)*1+lsi)*1]), &(inteval->stack[((hsi*10530+164160)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+225855)*1+lsi)*1]), &(inteval->stack[((hsi*21060+204795)*1+lsi)*1]), &(inteval->stack[((hsi*17820+174690)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+255555)*1+lsi)*1]), &(inteval->stack[((hsi*5400+20700)*1+lsi)*1]), &(inteval->stack[((hsi*4725+26100)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+269730)*1+lsi)*1]), &(inteval->stack[((hsi*14175+255555)*1+lsi)*1]), &(inteval->stack[((hsi*12285+192510)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+294300)*1+lsi)*1]), &(inteval->stack[((hsi*24570+269730)*1+lsi)*1]), &(inteval->stack[((hsi*21060+204795)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+329400)*1+lsi)*1]), &(inteval->stack[((hsi*35100+294300)*1+lsi)*1]), &(inteval->stack[((hsi*29700+225855)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+192510)*1+lsi)*1]), &(inteval->stack[((hsi*6120+14580)*1+lsi)*1]), &(inteval->stack[((hsi*5400+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+373950)*1+lsi)*1]), &(inteval->stack[((hsi*16200+192510)*1+lsi)*1]), &(inteval->stack[((hsi*14175+255555)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+402300)*1+lsi)*1]), &(inteval->stack[((hsi*28350+373950)*1+lsi)*1]), &(inteval->stack[((hsi*24570+269730)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+443250)*1+lsi)*1]), &(inteval->stack[((hsi*40950+402300)*1+lsi)*1]), &(inteval->stack[((hsi*35100+294300)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+255555)*1+lsi)*1]), &(inteval->stack[((hsi*52650+443250)*1+lsi)*1]), &(inteval->stack[((hsi*44550+329400)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+495900)*1+lsi)*1]), &(inteval->stack[((hsi*6885+7695)*1+lsi)*1]), &(inteval->stack[((hsi*6120+14580)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+514260)*1+lsi)*1]), &(inteval->stack[((hsi*18360+495900)*1+lsi)*1]), &(inteval->stack[((hsi*16200+192510)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+546660)*1+lsi)*1]), &(inteval->stack[((hsi*32400+514260)*1+lsi)*1]), &(inteval->stack[((hsi*28350+373950)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+593910)*1+lsi)*1]), &(inteval->stack[((hsi*47250+546660)*1+lsi)*1]), &(inteval->stack[((hsi*40950+402300)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+655335)*1+lsi)*1]), &(inteval->stack[((hsi*61425+593910)*1+lsi)*1]), &(inteval->stack[((hsi*52650+443250)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+373950)*1+lsi)*1]), &(inteval->stack[((hsi*73710+655335)*1+lsi)*1]), &(inteval->stack[((hsi*62370+255555)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+457110)*1+lsi)*1]), &(inteval->stack[((hsi*2970+38430)*1+lsi)*1]), &(inteval->stack[((hsi*2475+41400)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+192510)*1+lsi)*1]), &(inteval->stack[((hsi*8910+155250)*1+lsi)*1]), &(inteval->stack[((hsi*7425+457110)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+457110)*1+lsi)*1]), &(inteval->stack[((hsi*17820+174690)*1+lsi)*1]), &(inteval->stack[((hsi*14850+192510)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+155250)*1+lsi)*1]), &(inteval->stack[((hsi*29700+225855)*1+lsi)*1]), &(inteval->stack[((hsi*24750+457110)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+192375)*1+lsi)*1]), &(inteval->stack[((hsi*44550+329400)*1+lsi)*1]), &(inteval->stack[((hsi*37125+155250)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+729045)*1+lsi)*1]), &(inteval->stack[((hsi*62370+255555)*1+lsi)*1]), &(inteval->stack[((hsi*51975+192375)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+155250)*1+lsi)*1]), &(inteval->stack[((hsi*83160+373950)*1+lsi)*1]), &(inteval->stack[((hsi*69300+729045)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+244350)*1+lsi)*1]), &(inteval->stack[((hsi*7695+0)*1+lsi)*1]), &(inteval->stack[((hsi*6885+7695)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+265005)*1+lsi)*1]), &(inteval->stack[((hsi*20655+244350)*1+lsi)*1]), &(inteval->stack[((hsi*18360+495900)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+301725)*1+lsi)*1]), &(inteval->stack[((hsi*36720+265005)*1+lsi)*1]), &(inteval->stack[((hsi*32400+514260)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+457110)*1+lsi)*1]), &(inteval->stack[((hsi*54000+301725)*1+lsi)*1]), &(inteval->stack[((hsi*47250+546660)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+244350)*1+lsi)*1]), &(inteval->stack[((hsi*70875+457110)*1+lsi)*1]), &(inteval->stack[((hsi*61425+593910)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+457110)*1+lsi)*1]), &(inteval->stack[((hsi*85995+244350)*1+lsi)*1]), &(inteval->stack[((hsi*73710+655335)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+244350)*1+lsi)*1]), &(inteval->stack[((hsi*98280+457110)*1+lsi)*1]), &(inteval->stack[((hsi*83160+373950)*1+lsi)*1]),45);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*111375+43875)*1+lsi)*1]), &(inteval->stack[((hsi*106920+244350)*1+lsi)*1]), &(inteval->stack[((hsi*89100+155250)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*111375+43875)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
