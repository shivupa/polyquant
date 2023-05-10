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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,59840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+263960)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36530)*1+lsi)*1]), &(inteval->stack[((hsi*2475+39500)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+271385)*1+lsi)*1]), &(inteval->stack[((hsi*3510+33020)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36530)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+280295)*1+lsi)*1]), &(inteval->stack[((hsi*8910+271385)*1+lsi)*1]), &(inteval->stack[((hsi*7425+263960)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+295145)*1+lsi)*1]), &(inteval->stack[((hsi*4095+28925)*1+lsi)*1]), &(inteval->stack[((hsi*3510+33020)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+305675)*1+lsi)*1]), &(inteval->stack[((hsi*10530+295145)*1+lsi)*1]), &(inteval->stack[((hsi*8910+271385)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+323495)*1+lsi)*1]), &(inteval->stack[((hsi*17820+305675)*1+lsi)*1]), &(inteval->stack[((hsi*14850+280295)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+271385)*1+lsi)*1]), &(inteval->stack[((hsi*2475+39500)*1+lsi)*1]), &(inteval->stack[((hsi*2025+41975)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+348245)*1+lsi)*1]), &(inteval->stack[((hsi*7425+263960)*1+lsi)*1]), &(inteval->stack[((hsi*6075+271385)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+360395)*1+lsi)*1]), &(inteval->stack[((hsi*14850+280295)*1+lsi)*1]), &(inteval->stack[((hsi*12150+348245)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+263960)*1+lsi)*1]), &(inteval->stack[((hsi*24750+323495)*1+lsi)*1]), &(inteval->stack[((hsi*20250+360395)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+348245)*1+lsi)*1]), &(inteval->stack[((hsi*4725+24200)*1+lsi)*1]), &(inteval->stack[((hsi*4095+28925)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+360530)*1+lsi)*1]), &(inteval->stack[((hsi*12285+348245)*1+lsi)*1]), &(inteval->stack[((hsi*10530+295145)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+381590)*1+lsi)*1]), &(inteval->stack[((hsi*21060+360530)*1+lsi)*1]), &(inteval->stack[((hsi*17820+305675)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+411290)*1+lsi)*1]), &(inteval->stack[((hsi*29700+381590)*1+lsi)*1]), &(inteval->stack[((hsi*24750+323495)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+294335)*1+lsi)*1]), &(inteval->stack[((hsi*37125+411290)*1+lsi)*1]), &(inteval->stack[((hsi*30375+263960)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+263960)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53864)*1+lsi)*1]), &(inteval->stack[((hsi*1980+56240)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+269900)*1+lsi)*1]), &(inteval->stack[((hsi*2808+51056)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53864)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+24200)*1+lsi)*1]), &(inteval->stack[((hsi*7128+269900)*1+lsi)*1]), &(inteval->stack[((hsi*5940+263960)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+277028)*1+lsi)*1]), &(inteval->stack[((hsi*3276+47780)*1+lsi)*1]), &(inteval->stack[((hsi*2808+51056)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+336860)*1+lsi)*1]), &(inteval->stack[((hsi*8424+277028)*1+lsi)*1]), &(inteval->stack[((hsi*7128+269900)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+351116)*1+lsi)*1]), &(inteval->stack[((hsi*14256+336860)*1+lsi)*1]), &(inteval->stack[((hsi*11880+24200)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+285452)*1+lsi)*1]), &(inteval->stack[((hsi*1980+56240)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58220)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+370916)*1+lsi)*1]), &(inteval->stack[((hsi*5940+263960)*1+lsi)*1]), &(inteval->stack[((hsi*4860+285452)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+380636)*1+lsi)*1]), &(inteval->stack[((hsi*11880+24200)*1+lsi)*1]), &(inteval->stack[((hsi*9720+370916)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+396836)*1+lsi)*1]), &(inteval->stack[((hsi*19800+351116)*1+lsi)*1]), &(inteval->stack[((hsi*16200+380636)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+370916)*1+lsi)*1]), &(inteval->stack[((hsi*3780+44000)*1+lsi)*1]), &(inteval->stack[((hsi*3276+47780)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+24200)*1+lsi)*1]), &(inteval->stack[((hsi*9828+370916)*1+lsi)*1]), &(inteval->stack[((hsi*8424+277028)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+263960)*1+lsi)*1]), &(inteval->stack[((hsi*16848+24200)*1+lsi)*1]), &(inteval->stack[((hsi*14256+336860)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+24200)*1+lsi)*1]), &(inteval->stack[((hsi*23760+263960)*1+lsi)*1]), &(inteval->stack[((hsi*19800+351116)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+336860)*1+lsi)*1]), &(inteval->stack[((hsi*29700+24200)*1+lsi)*1]), &(inteval->stack[((hsi*24300+396836)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*102060+370880)*1+lsi)*1]), &(inteval->stack[((hsi*42525+294335)*1+lsi)*1]), &(inteval->stack[((hsi*34020+336860)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+24200)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]), &(inteval->stack[((hsi*3025+18700)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+336860)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+263960)*1+lsi)*1]), &(inteval->stack[((hsi*10890+336860)*1+lsi)*1]), &(inteval->stack[((hsi*9075+24200)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+33275)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+347750)*1+lsi)*1]), &(inteval->stack[((hsi*12870+33275)*1+lsi)*1]), &(inteval->stack[((hsi*10890+336860)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+472940)*1+lsi)*1]), &(inteval->stack[((hsi*21780+347750)*1+lsi)*1]), &(inteval->stack[((hsi*18150+263960)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+46145)*1+lsi)*1]), &(inteval->stack[((hsi*3025+18700)*1+lsi)*1]), &(inteval->stack[((hsi*2475+21725)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+503190)*1+lsi)*1]), &(inteval->stack[((hsi*9075+24200)*1+lsi)*1]), &(inteval->stack[((hsi*7425+46145)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+518040)*1+lsi)*1]), &(inteval->stack[((hsi*18150+263960)*1+lsi)*1]), &(inteval->stack[((hsi*14850+503190)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+542790)*1+lsi)*1]), &(inteval->stack[((hsi*30250+472940)*1+lsi)*1]), &(inteval->stack[((hsi*24750+518040)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+503190)*1+lsi)*1]), &(inteval->stack[((hsi*5775+0)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+0)*1+lsi)*1]), &(inteval->stack[((hsi*15015+503190)*1+lsi)*1]), &(inteval->stack[((hsi*12870+33275)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+503190)*1+lsi)*1]), &(inteval->stack[((hsi*25740+0)*1+lsi)*1]), &(inteval->stack[((hsi*21780+347750)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+0)*1+lsi)*1]), &(inteval->stack[((hsi*36300+503190)*1+lsi)*1]), &(inteval->stack[((hsi*30250+472940)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+472940)*1+lsi)*1]), &(inteval->stack[((hsi*45375+0)*1+lsi)*1]), &(inteval->stack[((hsi*37125+542790)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*127575+524915)*1+lsi)*1]), &(inteval->stack[((hsi*51975+472940)*1+lsi)*1]), &(inteval->stack[((hsi*42525+294335)*1+lsi)*1]),945);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*204120+59840)*1+lsi)*1]), &(inteval->stack[((hsi*127575+524915)*1+lsi)*1]), &(inteval->stack[((hsi*102060+370880)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*204120+59840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
