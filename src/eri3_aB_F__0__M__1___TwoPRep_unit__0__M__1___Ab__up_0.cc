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
#include <HRRPart1bra0ket0mm.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_F__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_F__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11650)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_F__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+41900)*1+lsi)*1]), &(inteval->stack[((hsi*780+9660)*1+lsi)*1]), &(inteval->stack[((hsi*660+10440)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+43880)*1+lsi)*1]), &(inteval->stack[((hsi*910+8750)*1+lsi)*1]), &(inteval->stack[((hsi*780+9660)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+46220)*1+lsi)*1]), &(inteval->stack[((hsi*2340+43880)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41900)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+50180)*1+lsi)*1]), &(inteval->stack[((hsi*1050+7700)*1+lsi)*1]), &(inteval->stack[((hsi*910+8750)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+52910)*1+lsi)*1]), &(inteval->stack[((hsi*2730+50180)*1+lsi)*1]), &(inteval->stack[((hsi*2340+43880)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+57590)*1+lsi)*1]), &(inteval->stack[((hsi*4680+52910)*1+lsi)*1]), &(inteval->stack[((hsi*3960+46220)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+64190)*1+lsi)*1]), &(inteval->stack[((hsi*1200+6500)*1+lsi)*1]), &(inteval->stack[((hsi*1050+7700)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+67340)*1+lsi)*1]), &(inteval->stack[((hsi*3150+64190)*1+lsi)*1]), &(inteval->stack[((hsi*2730+50180)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+72800)*1+lsi)*1]), &(inteval->stack[((hsi*5460+67340)*1+lsi)*1]), &(inteval->stack[((hsi*4680+52910)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+80600)*1+lsi)*1]), &(inteval->stack[((hsi*7800+72800)*1+lsi)*1]), &(inteval->stack[((hsi*6600+57590)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+50180)*1+lsi)*1]), &(inteval->stack[((hsi*1360+5140)*1+lsi)*1]), &(inteval->stack[((hsi*1200+6500)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+90500)*1+lsi)*1]), &(inteval->stack[((hsi*3600+50180)*1+lsi)*1]), &(inteval->stack[((hsi*3150+64190)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+96800)*1+lsi)*1]), &(inteval->stack[((hsi*6300+90500)*1+lsi)*1]), &(inteval->stack[((hsi*5460+67340)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+105900)*1+lsi)*1]), &(inteval->stack[((hsi*9100+96800)*1+lsi)*1]), &(inteval->stack[((hsi*7800+72800)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+64190)*1+lsi)*1]), &(inteval->stack[((hsi*11700+105900)*1+lsi)*1]), &(inteval->stack[((hsi*9900+80600)*1+lsi)*1]),10);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*4080+117600)*1+lsi)*1]), &(inteval->stack[((hsi*1530+3610)*1+lsi)*1]), &(inteval->stack[((hsi*1360+5140)*1+lsi)*1]),10);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*7200+121680)*1+lsi)*1]), &(inteval->stack[((hsi*4080+117600)*1+lsi)*1]), &(inteval->stack[((hsi*3600+50180)*1+lsi)*1]),10);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*10500+128880)*1+lsi)*1]), &(inteval->stack[((hsi*7200+121680)*1+lsi)*1]), &(inteval->stack[((hsi*6300+90500)*1+lsi)*1]),10);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*13650+139380)*1+lsi)*1]), &(inteval->stack[((hsi*10500+128880)*1+lsi)*1]), &(inteval->stack[((hsi*9100+96800)*1+lsi)*1]),10);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*16380+153030)*1+lsi)*1]), &(inteval->stack[((hsi*13650+139380)*1+lsi)*1]), &(inteval->stack[((hsi*11700+105900)*1+lsi)*1]),10);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*18480+90500)*1+lsi)*1]), &(inteval->stack[((hsi*16380+153030)*1+lsi)*1]), &(inteval->stack[((hsi*13860+64190)*1+lsi)*1]),10);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*4590+108980)*1+lsi)*1]), &(inteval->stack[((hsi*1710+1900)*1+lsi)*1]), &(inteval->stack[((hsi*1530+3610)*1+lsi)*1]),10);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*8160+169410)*1+lsi)*1]), &(inteval->stack[((hsi*4590+108980)*1+lsi)*1]), &(inteval->stack[((hsi*4080+117600)*1+lsi)*1]),10);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*12000+177570)*1+lsi)*1]), &(inteval->stack[((hsi*8160+169410)*1+lsi)*1]), &(inteval->stack[((hsi*7200+121680)*1+lsi)*1]),10);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*15750+189570)*1+lsi)*1]), &(inteval->stack[((hsi*12000+177570)*1+lsi)*1]), &(inteval->stack[((hsi*10500+128880)*1+lsi)*1]),10);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*19110+113570)*1+lsi)*1]), &(inteval->stack[((hsi*15750+189570)*1+lsi)*1]), &(inteval->stack[((hsi*13650+139380)*1+lsi)*1]),10);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*21840+205320)*1+lsi)*1]), &(inteval->stack[((hsi*19110+113570)*1+lsi)*1]), &(inteval->stack[((hsi*16380+153030)*1+lsi)*1]),10);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*23760+132680)*1+lsi)*1]), &(inteval->stack[((hsi*21840+205320)*1+lsi)*1]), &(inteval->stack[((hsi*18480+90500)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+156440)*1+lsi)*1]), &(inteval->stack[((hsi*660+10440)*1+lsi)*1]), &(inteval->stack[((hsi*550+11100)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+158090)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41900)*1+lsi)*1]), &(inteval->stack[((hsi*1650+156440)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+3610)*1+lsi)*1]), &(inteval->stack[((hsi*3960+46220)*1+lsi)*1]), &(inteval->stack[((hsi*3300+158090)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+41900)*1+lsi)*1]), &(inteval->stack[((hsi*6600+57590)*1+lsi)*1]), &(inteval->stack[((hsi*5500+3610)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+50150)*1+lsi)*1]), &(inteval->stack[((hsi*9900+80600)*1+lsi)*1]), &(inteval->stack[((hsi*8250+41900)*1+lsi)*1]),10);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*15400+227160)*1+lsi)*1]), &(inteval->stack[((hsi*13860+64190)*1+lsi)*1]), &(inteval->stack[((hsi*11550+50150)*1+lsi)*1]),10);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*19800+41900)*1+lsi)*1]), &(inteval->stack[((hsi*18480+90500)*1+lsi)*1]), &(inteval->stack[((hsi*15400+227160)*1+lsi)*1]),10);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*24750+61700)*1+lsi)*1]), &(inteval->stack[((hsi*23760+132680)*1+lsi)*1]), &(inteval->stack[((hsi*19800+41900)*1+lsi)*1]),10);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*5130+86450)*1+lsi)*1]), &(inteval->stack[((hsi*1900+0)*1+lsi)*1]), &(inteval->stack[((hsi*1710+1900)*1+lsi)*1]),10);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*9180+41900)*1+lsi)*1]), &(inteval->stack[((hsi*5130+86450)*1+lsi)*1]), &(inteval->stack[((hsi*4590+108980)*1+lsi)*1]),10);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*13600+86450)*1+lsi)*1]), &(inteval->stack[((hsi*9180+41900)*1+lsi)*1]), &(inteval->stack[((hsi*8160+169410)*1+lsi)*1]),10);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*18000+156440)*1+lsi)*1]), &(inteval->stack[((hsi*13600+86450)*1+lsi)*1]), &(inteval->stack[((hsi*12000+177570)*1+lsi)*1]),10);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*22050+86450)*1+lsi)*1]), &(inteval->stack[((hsi*18000+156440)*1+lsi)*1]), &(inteval->stack[((hsi*15750+189570)*1+lsi)*1]),10);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*25480+156440)*1+lsi)*1]), &(inteval->stack[((hsi*22050+86450)*1+lsi)*1]), &(inteval->stack[((hsi*19110+113570)*1+lsi)*1]),10);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*28080+86450)*1+lsi)*1]), &(inteval->stack[((hsi*25480+156440)*1+lsi)*1]), &(inteval->stack[((hsi*21840+205320)*1+lsi)*1]),10);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*29700+156440)*1+lsi)*1]), &(inteval->stack[((hsi*28080+86450)*1+lsi)*1]), &(inteval->stack[((hsi*23760+132680)*1+lsi)*1]),10);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*30250+11650)*1+lsi)*1]), &(inteval->stack[((hsi*29700+156440)*1+lsi)*1]), &(inteval->stack[((hsi*24750+61700)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*30250+11650)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif