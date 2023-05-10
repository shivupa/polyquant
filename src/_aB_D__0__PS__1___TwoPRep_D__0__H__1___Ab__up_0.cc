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
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
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
#include <_aB_D__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18476)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+68372)*1+lsi)*1]), &(inteval->stack[((hsi*910+12550)*1+lsi)*1]), &(inteval->stack[((hsi*780+13460)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+70712)*1+lsi)*1]), &(inteval->stack[((hsi*1050+11500)*1+lsi)*1]), &(inteval->stack[((hsi*910+12550)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+73442)*1+lsi)*1]), &(inteval->stack[((hsi*2730+70712)*1+lsi)*1]), &(inteval->stack[((hsi*2340+68372)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+78122)*1+lsi)*1]), &(inteval->stack[((hsi*1200+10300)*1+lsi)*1]), &(inteval->stack[((hsi*1050+11500)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+81272)*1+lsi)*1]), &(inteval->stack[((hsi*3150+78122)*1+lsi)*1]), &(inteval->stack[((hsi*2730+70712)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+86732)*1+lsi)*1]), &(inteval->stack[((hsi*5460+81272)*1+lsi)*1]), &(inteval->stack[((hsi*4680+73442)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+70712)*1+lsi)*1]), &(inteval->stack[((hsi*780+13460)*1+lsi)*1]), &(inteval->stack[((hsi*660+14240)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+94532)*1+lsi)*1]), &(inteval->stack[((hsi*2340+68372)*1+lsi)*1]), &(inteval->stack[((hsi*1980+70712)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+98492)*1+lsi)*1]), &(inteval->stack[((hsi*4680+73442)*1+lsi)*1]), &(inteval->stack[((hsi*3960+94532)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+105092)*1+lsi)*1]), &(inteval->stack[((hsi*7800+86732)*1+lsi)*1]), &(inteval->stack[((hsi*6600+98492)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+94532)*1+lsi)*1]), &(inteval->stack[((hsi*1360+8940)*1+lsi)*1]), &(inteval->stack[((hsi*1200+10300)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+68372)*1+lsi)*1]), &(inteval->stack[((hsi*3600+94532)*1+lsi)*1]), &(inteval->stack[((hsi*3150+78122)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+94532)*1+lsi)*1]), &(inteval->stack[((hsi*6300+68372)*1+lsi)*1]), &(inteval->stack[((hsi*5460+81272)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+68372)*1+lsi)*1]), &(inteval->stack[((hsi*9100+94532)*1+lsi)*1]), &(inteval->stack[((hsi*7800+86732)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+80072)*1+lsi)*1]), &(inteval->stack[((hsi*11700+68372)*1+lsi)*1]), &(inteval->stack[((hsi*9900+105092)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+68372)*1+lsi)*1]), &(inteval->stack[((hsi*546+17066)*1+lsi)*1]), &(inteval->stack[((hsi*468+17612)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+69776)*1+lsi)*1]), &(inteval->stack[((hsi*630+16436)*1+lsi)*1]), &(inteval->stack[((hsi*546+17066)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+71414)*1+lsi)*1]), &(inteval->stack[((hsi*1638+69776)*1+lsi)*1]), &(inteval->stack[((hsi*1404+68372)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+8940)*1+lsi)*1]), &(inteval->stack[((hsi*720+15716)*1+lsi)*1]), &(inteval->stack[((hsi*630+16436)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+74222)*1+lsi)*1]), &(inteval->stack[((hsi*1890+8940)*1+lsi)*1]), &(inteval->stack[((hsi*1638+69776)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+93932)*1+lsi)*1]), &(inteval->stack[((hsi*3276+74222)*1+lsi)*1]), &(inteval->stack[((hsi*2808+71414)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+10830)*1+lsi)*1]), &(inteval->stack[((hsi*468+17612)*1+lsi)*1]), &(inteval->stack[((hsi*396+18080)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+12018)*1+lsi)*1]), &(inteval->stack[((hsi*1404+68372)*1+lsi)*1]), &(inteval->stack[((hsi*1188+10830)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+98612)*1+lsi)*1]), &(inteval->stack[((hsi*2808+71414)*1+lsi)*1]), &(inteval->stack[((hsi*2376+12018)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+102572)*1+lsi)*1]), &(inteval->stack[((hsi*4680+93932)*1+lsi)*1]), &(inteval->stack[((hsi*3960+98612)*1+lsi)*1]),6);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*2160+68372)*1+lsi)*1]), &(inteval->stack[((hsi*816+14900)*1+lsi)*1]), &(inteval->stack[((hsi*720+15716)*1+lsi)*1]),6);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*3780+10830)*1+lsi)*1]), &(inteval->stack[((hsi*2160+68372)*1+lsi)*1]), &(inteval->stack[((hsi*1890+8940)*1+lsi)*1]),6);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*5460+68372)*1+lsi)*1]), &(inteval->stack[((hsi*3780+10830)*1+lsi)*1]), &(inteval->stack[((hsi*3276+74222)*1+lsi)*1]),6);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*7020+8940)*1+lsi)*1]), &(inteval->stack[((hsi*5460+68372)*1+lsi)*1]), &(inteval->stack[((hsi*4680+93932)*1+lsi)*1]),6);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*8316+68372)*1+lsi)*1]), &(inteval->stack[((hsi*7020+8940)*1+lsi)*1]), &(inteval->stack[((hsi*5940+102572)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*24948+93932)*1+lsi)*1]), &(inteval->stack[((hsi*13860+80072)*1+lsi)*1]), &(inteval->stack[((hsi*8316+68372)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+68372)*1+lsi)*1]), &(inteval->stack[((hsi*1365+5415)*1+lsi)*1]), &(inteval->stack[((hsi*1170+6780)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+8940)*1+lsi)*1]), &(inteval->stack[((hsi*1575+3840)*1+lsi)*1]), &(inteval->stack[((hsi*1365+5415)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+71882)*1+lsi)*1]), &(inteval->stack[((hsi*4095+8940)*1+lsi)*1]), &(inteval->stack[((hsi*3510+68372)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+13035)*1+lsi)*1]), &(inteval->stack[((hsi*1800+2040)*1+lsi)*1]), &(inteval->stack[((hsi*1575+3840)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+118880)*1+lsi)*1]), &(inteval->stack[((hsi*4725+13035)*1+lsi)*1]), &(inteval->stack[((hsi*4095+8940)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+127070)*1+lsi)*1]), &(inteval->stack[((hsi*8190+118880)*1+lsi)*1]), &(inteval->stack[((hsi*7020+71882)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+8940)*1+lsi)*1]), &(inteval->stack[((hsi*1170+6780)*1+lsi)*1]), &(inteval->stack[((hsi*990+7950)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+138770)*1+lsi)*1]), &(inteval->stack[((hsi*3510+68372)*1+lsi)*1]), &(inteval->stack[((hsi*2970+8940)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+144710)*1+lsi)*1]), &(inteval->stack[((hsi*7020+71882)*1+lsi)*1]), &(inteval->stack[((hsi*5940+138770)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+154610)*1+lsi)*1]), &(inteval->stack[((hsi*11700+127070)*1+lsi)*1]), &(inteval->stack[((hsi*9900+144710)*1+lsi)*1]),15);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*5400+138770)*1+lsi)*1]), &(inteval->stack[((hsi*2040+0)*1+lsi)*1]), &(inteval->stack[((hsi*1800+2040)*1+lsi)*1]),15);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*9450+0)*1+lsi)*1]), &(inteval->stack[((hsi*5400+138770)*1+lsi)*1]), &(inteval->stack[((hsi*4725+13035)*1+lsi)*1]),15);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*13650+138770)*1+lsi)*1]), &(inteval->stack[((hsi*9450+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+118880)*1+lsi)*1]),15);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*17550+0)*1+lsi)*1]), &(inteval->stack[((hsi*13650+138770)*1+lsi)*1]), &(inteval->stack[((hsi*11700+127070)*1+lsi)*1]),15);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*20790+118880)*1+lsi)*1]), &(inteval->stack[((hsi*17550+0)*1+lsi)*1]), &(inteval->stack[((hsi*14850+154610)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*41580+139670)*1+lsi)*1]), &(inteval->stack[((hsi*20790+118880)*1+lsi)*1]), &(inteval->stack[((hsi*13860+80072)*1+lsi)*1]),1386);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*49896+18476)*1+lsi)*1]), &(inteval->stack[((hsi*41580+139670)*1+lsi)*1]), &(inteval->stack[((hsi*24948+93932)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*49896+18476)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
