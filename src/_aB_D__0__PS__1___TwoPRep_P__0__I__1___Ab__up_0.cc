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
#include <HRRPart0bra0ket0dp.h>
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
#include <_aB_D__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11984)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+45248)*1+lsi)*1]), &(inteval->stack[((hsi*546+10574)*1+lsi)*1]), &(inteval->stack[((hsi*468+11120)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+46652)*1+lsi)*1]), &(inteval->stack[((hsi*630+9944)*1+lsi)*1]), &(inteval->stack[((hsi*546+10574)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+48290)*1+lsi)*1]), &(inteval->stack[((hsi*1638+46652)*1+lsi)*1]), &(inteval->stack[((hsi*1404+45248)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+51098)*1+lsi)*1]), &(inteval->stack[((hsi*720+9224)*1+lsi)*1]), &(inteval->stack[((hsi*630+9944)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+52988)*1+lsi)*1]), &(inteval->stack[((hsi*1890+51098)*1+lsi)*1]), &(inteval->stack[((hsi*1638+46652)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+56264)*1+lsi)*1]), &(inteval->stack[((hsi*3276+52988)*1+lsi)*1]), &(inteval->stack[((hsi*2808+48290)*1+lsi)*1]),6);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*2160+60944)*1+lsi)*1]), &(inteval->stack[((hsi*816+8408)*1+lsi)*1]), &(inteval->stack[((hsi*720+9224)*1+lsi)*1]),6);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*3780+63104)*1+lsi)*1]), &(inteval->stack[((hsi*2160+60944)*1+lsi)*1]), &(inteval->stack[((hsi*1890+51098)*1+lsi)*1]),6);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*5460+66884)*1+lsi)*1]), &(inteval->stack[((hsi*3780+63104)*1+lsi)*1]), &(inteval->stack[((hsi*3276+52988)*1+lsi)*1]),6);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*7020+72344)*1+lsi)*1]), &(inteval->stack[((hsi*5460+66884)*1+lsi)*1]), &(inteval->stack[((hsi*4680+56264)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+51098)*1+lsi)*1]), &(inteval->stack[((hsi*468+11120)*1+lsi)*1]), &(inteval->stack[((hsi*396+11588)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+52286)*1+lsi)*1]), &(inteval->stack[((hsi*1404+45248)*1+lsi)*1]), &(inteval->stack[((hsi*1188+51098)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+79364)*1+lsi)*1]), &(inteval->stack[((hsi*2808+48290)*1+lsi)*1]), &(inteval->stack[((hsi*2376+52286)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+45248)*1+lsi)*1]), &(inteval->stack[((hsi*4680+56264)*1+lsi)*1]), &(inteval->stack[((hsi*3960+79364)*1+lsi)*1]),6);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*8316+51188)*1+lsi)*1]), &(inteval->stack[((hsi*7020+72344)*1+lsi)*1]), &(inteval->stack[((hsi*5940+45248)*1+lsi)*1]),6);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*2448+45248)*1+lsi)*1]), &(inteval->stack[((hsi*918+7490)*1+lsi)*1]), &(inteval->stack[((hsi*816+8408)*1+lsi)*1]),6);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*4320+7490)*1+lsi)*1]), &(inteval->stack[((hsi*2448+45248)*1+lsi)*1]), &(inteval->stack[((hsi*2160+60944)*1+lsi)*1]),6);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*6300+79364)*1+lsi)*1]), &(inteval->stack[((hsi*4320+7490)*1+lsi)*1]), &(inteval->stack[((hsi*3780+63104)*1+lsi)*1]),6);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*8190+85664)*1+lsi)*1]), &(inteval->stack[((hsi*6300+79364)*1+lsi)*1]), &(inteval->stack[((hsi*5460+66884)*1+lsi)*1]),6);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*9828+59504)*1+lsi)*1]), &(inteval->stack[((hsi*8190+85664)*1+lsi)*1]), &(inteval->stack[((hsi*7020+72344)*1+lsi)*1]),6);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*11088+69332)*1+lsi)*1]), &(inteval->stack[((hsi*9828+59504)*1+lsi)*1]), &(inteval->stack[((hsi*8316+51188)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+45248)*1+lsi)*1]), &(inteval->stack[((hsi*910+5140)*1+lsi)*1]), &(inteval->stack[((hsi*780+6050)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+47588)*1+lsi)*1]), &(inteval->stack[((hsi*1050+4090)*1+lsi)*1]), &(inteval->stack[((hsi*910+5140)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+50318)*1+lsi)*1]), &(inteval->stack[((hsi*2730+47588)*1+lsi)*1]), &(inteval->stack[((hsi*2340+45248)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+54998)*1+lsi)*1]), &(inteval->stack[((hsi*1200+2890)*1+lsi)*1]), &(inteval->stack[((hsi*1050+4090)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+58148)*1+lsi)*1]), &(inteval->stack[((hsi*3150+54998)*1+lsi)*1]), &(inteval->stack[((hsi*2730+47588)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+80420)*1+lsi)*1]), &(inteval->stack[((hsi*5460+58148)*1+lsi)*1]), &(inteval->stack[((hsi*4680+50318)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+63608)*1+lsi)*1]), &(inteval->stack[((hsi*1360+1530)*1+lsi)*1]), &(inteval->stack[((hsi*1200+2890)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+88220)*1+lsi)*1]), &(inteval->stack[((hsi*3600+63608)*1+lsi)*1]), &(inteval->stack[((hsi*3150+54998)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+94520)*1+lsi)*1]), &(inteval->stack[((hsi*6300+88220)*1+lsi)*1]), &(inteval->stack[((hsi*5460+58148)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+103620)*1+lsi)*1]), &(inteval->stack[((hsi*9100+94520)*1+lsi)*1]), &(inteval->stack[((hsi*7800+80420)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+54998)*1+lsi)*1]), &(inteval->stack[((hsi*780+6050)*1+lsi)*1]), &(inteval->stack[((hsi*660+6830)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+2890)*1+lsi)*1]), &(inteval->stack[((hsi*2340+45248)*1+lsi)*1]), &(inteval->stack[((hsi*1980+54998)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+54998)*1+lsi)*1]), &(inteval->stack[((hsi*4680+50318)*1+lsi)*1]), &(inteval->stack[((hsi*3960+2890)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+115320)*1+lsi)*1]), &(inteval->stack[((hsi*7800+80420)*1+lsi)*1]), &(inteval->stack[((hsi*6600+54998)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+45248)*1+lsi)*1]), &(inteval->stack[((hsi*11700+103620)*1+lsi)*1]), &(inteval->stack[((hsi*9900+115320)*1+lsi)*1]),10);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*4080+2890)*1+lsi)*1]), &(inteval->stack[((hsi*1530+0)*1+lsi)*1]), &(inteval->stack[((hsi*1360+1530)*1+lsi)*1]),10);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*7200+80420)*1+lsi)*1]), &(inteval->stack[((hsi*4080+2890)*1+lsi)*1]), &(inteval->stack[((hsi*3600+63608)*1+lsi)*1]),10);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*10500+0)*1+lsi)*1]), &(inteval->stack[((hsi*7200+80420)*1+lsi)*1]), &(inteval->stack[((hsi*6300+88220)*1+lsi)*1]),10);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*13650+80420)*1+lsi)*1]), &(inteval->stack[((hsi*10500+0)*1+lsi)*1]), &(inteval->stack[((hsi*9100+94520)*1+lsi)*1]),10);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*16380+115320)*1+lsi)*1]), &(inteval->stack[((hsi*13650+80420)*1+lsi)*1]), &(inteval->stack[((hsi*11700+103620)*1+lsi)*1]),10);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*18480+80420)*1+lsi)*1]), &(inteval->stack[((hsi*16380+115320)*1+lsi)*1]), &(inteval->stack[((hsi*13860+45248)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*33264+11984)*1+lsi)*1]), &(inteval->stack[((hsi*18480+80420)*1+lsi)*1]), &(inteval->stack[((hsi*11088+69332)*1+lsi)*1]),1848);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*33264+11984)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
