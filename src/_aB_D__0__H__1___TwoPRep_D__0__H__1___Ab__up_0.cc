/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hh.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_D__0__H__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__H__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7781)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+23657)*1+lsi)*1]), &(inteval->stack[((hsi*360+5425)*1+lsi)*1]), &(inteval->stack[((hsi*280+5785)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+24497)*1+lsi)*1]), &(inteval->stack[((hsi*450+4975)*1+lsi)*1]), &(inteval->stack[((hsi*360+5425)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+25577)*1+lsi)*1]), &(inteval->stack[((hsi*1080+24497)*1+lsi)*1]), &(inteval->stack[((hsi*840+23657)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+27257)*1+lsi)*1]), &(inteval->stack[((hsi*550+4425)*1+lsi)*1]), &(inteval->stack[((hsi*450+4975)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+28607)*1+lsi)*1]), &(inteval->stack[((hsi*1350+27257)*1+lsi)*1]), &(inteval->stack[((hsi*1080+24497)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+30767)*1+lsi)*1]), &(inteval->stack[((hsi*2160+28607)*1+lsi)*1]), &(inteval->stack[((hsi*1680+25577)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+24497)*1+lsi)*1]), &(inteval->stack[((hsi*280+5785)*1+lsi)*1]), &(inteval->stack[((hsi*210+6065)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+4975)*1+lsi)*1]), &(inteval->stack[((hsi*840+23657)*1+lsi)*1]), &(inteval->stack[((hsi*630+24497)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+33567)*1+lsi)*1]), &(inteval->stack[((hsi*1680+25577)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4975)*1+lsi)*1]),10);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*3150+23657)*1+lsi)*1]), &(inteval->stack[((hsi*2800+30767)*1+lsi)*1]), &(inteval->stack[((hsi*2100+33567)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+33567)*1+lsi)*1]), &(inteval->stack[((hsi*660+3765)*1+lsi)*1]), &(inteval->stack[((hsi*550+4425)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+35217)*1+lsi)*1]), &(inteval->stack[((hsi*1650+33567)*1+lsi)*1]), &(inteval->stack[((hsi*1350+27257)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+37917)*1+lsi)*1]), &(inteval->stack[((hsi*2700+35217)*1+lsi)*1]), &(inteval->stack[((hsi*2160+28607)*1+lsi)*1]),10);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*4200+33567)*1+lsi)*1]), &(inteval->stack[((hsi*3600+37917)*1+lsi)*1]), &(inteval->stack[((hsi*2800+30767)*1+lsi)*1]),10);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*4410+26807)*1+lsi)*1]), &(inteval->stack[((hsi*4200+33567)*1+lsi)*1]), &(inteval->stack[((hsi*3150+23657)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+23657)*1+lsi)*1]), &(inteval->stack[((hsi*216+7271)*1+lsi)*1]), &(inteval->stack[((hsi*168+7487)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+24161)*1+lsi)*1]), &(inteval->stack[((hsi*270+7001)*1+lsi)*1]), &(inteval->stack[((hsi*216+7271)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+3765)*1+lsi)*1]), &(inteval->stack[((hsi*648+24161)*1+lsi)*1]), &(inteval->stack[((hsi*504+23657)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+24809)*1+lsi)*1]), &(inteval->stack[((hsi*330+6671)*1+lsi)*1]), &(inteval->stack[((hsi*270+7001)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+4773)*1+lsi)*1]), &(inteval->stack[((hsi*810+24809)*1+lsi)*1]), &(inteval->stack[((hsi*648+24161)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+31217)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4773)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3765)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+25619)*1+lsi)*1]), &(inteval->stack[((hsi*168+7487)*1+lsi)*1]), &(inteval->stack[((hsi*126+7655)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+25997)*1+lsi)*1]), &(inteval->stack[((hsi*504+23657)*1+lsi)*1]), &(inteval->stack[((hsi*378+25619)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+32897)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3765)*1+lsi)*1]), &(inteval->stack[((hsi*756+25997)*1+lsi)*1]),6);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*1890+34157)*1+lsi)*1]), &(inteval->stack[((hsi*1680+31217)*1+lsi)*1]), &(inteval->stack[((hsi*1260+32897)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+32897)*1+lsi)*1]), &(inteval->stack[((hsi*396+6275)*1+lsi)*1]), &(inteval->stack[((hsi*330+6671)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+6069)*1+lsi)*1]), &(inteval->stack[((hsi*990+32897)*1+lsi)*1]), &(inteval->stack[((hsi*810+24809)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+23657)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6069)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4773)*1+lsi)*1]),6);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*2520+3765)*1+lsi)*1]), &(inteval->stack[((hsi*2160+23657)*1+lsi)*1]), &(inteval->stack[((hsi*1680+31217)*1+lsi)*1]),6);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*2646+23657)*1+lsi)*1]), &(inteval->stack[((hsi*2520+3765)*1+lsi)*1]), &(inteval->stack[((hsi*1890+34157)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*7938+31217)*1+lsi)*1]), &(inteval->stack[((hsi*4410+26807)*1+lsi)*1]), &(inteval->stack[((hsi*2646+23657)*1+lsi)*1]),441);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+3765)*1+lsi)*1]), &(inteval->stack[((hsi*540+2490)*1+lsi)*1]), &(inteval->stack[((hsi*420+3030)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+23657)*1+lsi)*1]), &(inteval->stack[((hsi*675+1815)*1+lsi)*1]), &(inteval->stack[((hsi*540+2490)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+5025)*1+lsi)*1]), &(inteval->stack[((hsi*1620+23657)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3765)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+39155)*1+lsi)*1]), &(inteval->stack[((hsi*825+990)*1+lsi)*1]), &(inteval->stack[((hsi*675+1815)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+41180)*1+lsi)*1]), &(inteval->stack[((hsi*2025+39155)*1+lsi)*1]), &(inteval->stack[((hsi*1620+23657)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+44420)*1+lsi)*1]), &(inteval->stack[((hsi*3240+41180)*1+lsi)*1]), &(inteval->stack[((hsi*2520+5025)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+23657)*1+lsi)*1]), &(inteval->stack[((hsi*420+3030)*1+lsi)*1]), &(inteval->stack[((hsi*315+3450)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+24602)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3765)*1+lsi)*1]), &(inteval->stack[((hsi*945+23657)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+1815)*1+lsi)*1]), &(inteval->stack[((hsi*2520+5025)*1+lsi)*1]), &(inteval->stack[((hsi*1890+24602)*1+lsi)*1]),15);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*4725+48620)*1+lsi)*1]), &(inteval->stack[((hsi*4200+44420)*1+lsi)*1]), &(inteval->stack[((hsi*3150+1815)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+1815)*1+lsi)*1]), &(inteval->stack[((hsi*990+0)*1+lsi)*1]), &(inteval->stack[((hsi*825+990)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+53345)*1+lsi)*1]), &(inteval->stack[((hsi*2475+1815)*1+lsi)*1]), &(inteval->stack[((hsi*2025+39155)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4050+53345)*1+lsi)*1]), &(inteval->stack[((hsi*3240+41180)*1+lsi)*1]),15);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*6300+53345)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4200+44420)*1+lsi)*1]),15);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*6615+39155)*1+lsi)*1]), &(inteval->stack[((hsi*6300+53345)*1+lsi)*1]), &(inteval->stack[((hsi*4725+48620)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*13230+45770)*1+lsi)*1]), &(inteval->stack[((hsi*6615+39155)*1+lsi)*1]), &(inteval->stack[((hsi*4410+26807)*1+lsi)*1]),441);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*15876+7781)*1+lsi)*1]), &(inteval->stack[((hsi*13230+45770)*1+lsi)*1]), &(inteval->stack[((hsi*7938+31217)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*15876+7781)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
