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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_L__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,107360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+532610)*1+lsi)*1]), &(inteval->stack[((hsi*3630+78430)*1+lsi)*1]), &(inteval->stack[((hsi*3025+82060)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+541685)*1+lsi)*1]), &(inteval->stack[((hsi*4290+74140)*1+lsi)*1]), &(inteval->stack[((hsi*3630+78430)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+552575)*1+lsi)*1]), &(inteval->stack[((hsi*10890+541685)*1+lsi)*1]), &(inteval->stack[((hsi*9075+532610)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+570725)*1+lsi)*1]), &(inteval->stack[((hsi*5005+69135)*1+lsi)*1]), &(inteval->stack[((hsi*4290+74140)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+583595)*1+lsi)*1]), &(inteval->stack[((hsi*12870+570725)*1+lsi)*1]), &(inteval->stack[((hsi*10890+541685)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+605375)*1+lsi)*1]), &(inteval->stack[((hsi*21780+583595)*1+lsi)*1]), &(inteval->stack[((hsi*18150+552575)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+541685)*1+lsi)*1]), &(inteval->stack[((hsi*3025+82060)*1+lsi)*1]), &(inteval->stack[((hsi*2475+85085)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+635625)*1+lsi)*1]), &(inteval->stack[((hsi*9075+532610)*1+lsi)*1]), &(inteval->stack[((hsi*7425+541685)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+650475)*1+lsi)*1]), &(inteval->stack[((hsi*18150+552575)*1+lsi)*1]), &(inteval->stack[((hsi*14850+635625)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+532610)*1+lsi)*1]), &(inteval->stack[((hsi*30250+605375)*1+lsi)*1]), &(inteval->stack[((hsi*24750+650475)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+635625)*1+lsi)*1]), &(inteval->stack[((hsi*5775+63360)*1+lsi)*1]), &(inteval->stack[((hsi*5005+69135)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+650640)*1+lsi)*1]), &(inteval->stack[((hsi*15015+635625)*1+lsi)*1]), &(inteval->stack[((hsi*12870+570725)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+676380)*1+lsi)*1]), &(inteval->stack[((hsi*25740+650640)*1+lsi)*1]), &(inteval->stack[((hsi*21780+583595)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+712680)*1+lsi)*1]), &(inteval->stack[((hsi*36300+676380)*1+lsi)*1]), &(inteval->stack[((hsi*30250+605375)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+569735)*1+lsi)*1]), &(inteval->stack[((hsi*45375+712680)*1+lsi)*1]), &(inteval->stack[((hsi*37125+532610)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+532610)*1+lsi)*1]), &(inteval->stack[((hsi*4356+52404)*1+lsi)*1]), &(inteval->stack[((hsi*3630+56760)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+543500)*1+lsi)*1]), &(inteval->stack[((hsi*5148+47256)*1+lsi)*1]), &(inteval->stack[((hsi*4356+52404)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+63360)*1+lsi)*1]), &(inteval->stack[((hsi*13068+543500)*1+lsi)*1]), &(inteval->stack[((hsi*10890+532610)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+621710)*1+lsi)*1]), &(inteval->stack[((hsi*6006+41250)*1+lsi)*1]), &(inteval->stack[((hsi*5148+47256)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+637154)*1+lsi)*1]), &(inteval->stack[((hsi*15444+621710)*1+lsi)*1]), &(inteval->stack[((hsi*13068+543500)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+663290)*1+lsi)*1]), &(inteval->stack[((hsi*26136+637154)*1+lsi)*1]), &(inteval->stack[((hsi*21780+63360)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+543500)*1+lsi)*1]), &(inteval->stack[((hsi*3630+56760)*1+lsi)*1]), &(inteval->stack[((hsi*2970+60390)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+699590)*1+lsi)*1]), &(inteval->stack[((hsi*10890+532610)*1+lsi)*1]), &(inteval->stack[((hsi*8910+543500)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+532610)*1+lsi)*1]), &(inteval->stack[((hsi*21780+63360)*1+lsi)*1]), &(inteval->stack[((hsi*17820+699590)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+699590)*1+lsi)*1]), &(inteval->stack[((hsi*36300+663290)*1+lsi)*1]), &(inteval->stack[((hsi*29700+532610)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+47256)*1+lsi)*1]), &(inteval->stack[((hsi*6930+34320)*1+lsi)*1]), &(inteval->stack[((hsi*6006+41250)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+532610)*1+lsi)*1]), &(inteval->stack[((hsi*18018+47256)*1+lsi)*1]), &(inteval->stack[((hsi*15444+621710)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+34320)*1+lsi)*1]), &(inteval->stack[((hsi*30888+532610)*1+lsi)*1]), &(inteval->stack[((hsi*26136+637154)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+744140)*1+lsi)*1]), &(inteval->stack[((hsi*43560+34320)*1+lsi)*1]), &(inteval->stack[((hsi*36300+663290)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+621710)*1+lsi)*1]), &(inteval->stack[((hsi*54450+744140)*1+lsi)*1]), &(inteval->stack[((hsi*44550+699590)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*155925+684080)*1+lsi)*1]), &(inteval->stack[((hsi*62370+621710)*1+lsi)*1]), &(inteval->stack[((hsi*51975+569735)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+34320)*1+lsi)*1]), &(inteval->stack[((hsi*2970+99890)*1+lsi)*1]), &(inteval->stack[((hsi*2475+102860)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+41745)*1+lsi)*1]), &(inteval->stack[((hsi*3510+96380)*1+lsi)*1]), &(inteval->stack[((hsi*2970+99890)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+532610)*1+lsi)*1]), &(inteval->stack[((hsi*8910+41745)*1+lsi)*1]), &(inteval->stack[((hsi*7425+34320)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+50655)*1+lsi)*1]), &(inteval->stack[((hsi*4095+92285)*1+lsi)*1]), &(inteval->stack[((hsi*3510+96380)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+61185)*1+lsi)*1]), &(inteval->stack[((hsi*10530+50655)*1+lsi)*1]), &(inteval->stack[((hsi*8910+41745)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+840005)*1+lsi)*1]), &(inteval->stack[((hsi*17820+61185)*1+lsi)*1]), &(inteval->stack[((hsi*14850+532610)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+547460)*1+lsi)*1]), &(inteval->stack[((hsi*2475+102860)*1+lsi)*1]), &(inteval->stack[((hsi*2025+105335)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+553535)*1+lsi)*1]), &(inteval->stack[((hsi*7425+34320)*1+lsi)*1]), &(inteval->stack[((hsi*6075+547460)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+864755)*1+lsi)*1]), &(inteval->stack[((hsi*14850+532610)*1+lsi)*1]), &(inteval->stack[((hsi*12150+553535)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+532610)*1+lsi)*1]), &(inteval->stack[((hsi*24750+840005)*1+lsi)*1]), &(inteval->stack[((hsi*20250+864755)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+34320)*1+lsi)*1]), &(inteval->stack[((hsi*4725+87560)*1+lsi)*1]), &(inteval->stack[((hsi*4095+92285)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+79005)*1+lsi)*1]), &(inteval->stack[((hsi*12285+34320)*1+lsi)*1]), &(inteval->stack[((hsi*10530+50655)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+864755)*1+lsi)*1]), &(inteval->stack[((hsi*21060+79005)*1+lsi)*1]), &(inteval->stack[((hsi*17820+61185)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+34320)*1+lsi)*1]), &(inteval->stack[((hsi*29700+864755)*1+lsi)*1]), &(inteval->stack[((hsi*24750+840005)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+840005)*1+lsi)*1]), &(inteval->stack[((hsi*37125+34320)*1+lsi)*1]), &(inteval->stack[((hsi*30375+532610)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*127575+882530)*1+lsi)*1]), &(inteval->stack[((hsi*51975+569735)*1+lsi)*1]), &(inteval->stack[((hsi*42525+840005)*1+lsi)*1]),945);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*255150+1010105)*1+lsi)*1]), &(inteval->stack[((hsi*155925+684080)*1+lsi)*1]), &(inteval->stack[((hsi*127575+882530)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+840005)*1+lsi)*1]), &(inteval->stack[((hsi*5148+21372)*1+lsi)*1]), &(inteval->stack[((hsi*4290+26520)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+852875)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]), &(inteval->stack[((hsi*5148+21372)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+868319)*1+lsi)*1]), &(inteval->stack[((hsi*15444+852875)*1+lsi)*1]), &(inteval->stack[((hsi*12870+840005)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+894059)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+912311)*1+lsi)*1]), &(inteval->stack[((hsi*18252+894059)*1+lsi)*1]), &(inteval->stack[((hsi*15444+852875)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+532610)*1+lsi)*1]), &(inteval->stack[((hsi*30888+912311)*1+lsi)*1]), &(inteval->stack[((hsi*25740+868319)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+34320)*1+lsi)*1]), &(inteval->stack[((hsi*4290+26520)*1+lsi)*1]), &(inteval->stack[((hsi*3510+30810)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+943199)*1+lsi)*1]), &(inteval->stack[((hsi*12870+840005)*1+lsi)*1]), &(inteval->stack[((hsi*10530+34320)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+15288)*1+lsi)*1]), &(inteval->stack[((hsi*25740+868319)*1+lsi)*1]), &(inteval->stack[((hsi*21060+943199)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+943199)*1+lsi)*1]), &(inteval->stack[((hsi*42900+532610)*1+lsi)*1]), &(inteval->stack[((hsi*35100+15288)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+15288)*1+lsi)*1]), &(inteval->stack[((hsi*8190+0)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+36582)*1+lsi)*1]), &(inteval->stack[((hsi*21294+15288)*1+lsi)*1]), &(inteval->stack[((hsi*18252+894059)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+840005)*1+lsi)*1]), &(inteval->stack[((hsi*36504+36582)*1+lsi)*1]), &(inteval->stack[((hsi*30888+912311)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+0)*1+lsi)*1]), &(inteval->stack[((hsi*51480+840005)*1+lsi)*1]), &(inteval->stack[((hsi*42900+532610)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+840005)*1+lsi)*1]), &(inteval->stack[((hsi*64350+0)*1+lsi)*1]), &(inteval->stack[((hsi*52650+943199)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*187110+1265255)*1+lsi)*1]), &(inteval->stack[((hsi*73710+840005)*1+lsi)*1]), &(inteval->stack[((hsi*62370+621710)*1+lsi)*1]),945);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*311850+1452365)*1+lsi)*1]), &(inteval->stack[((hsi*187110+1265255)*1+lsi)*1]), &(inteval->stack[((hsi*155925+684080)*1+lsi)*1]),945);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*425250+107360)*1+lsi)*1]), &(inteval->stack[((hsi*311850+1452365)*1+lsi)*1]), &(inteval->stack[((hsi*255150+1010105)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*425250+107360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
