/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0ki.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0nf.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0od.h>
#include <HRRPart1bra0ket0op.h>
#include <HRRPart1bra0ket0qp.h>
#include <_aB_D__0__K__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__K__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7616)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+25760)*1+lsi)*1]), &(inteval->stack[((hsi*330+6800)*1+lsi)*1]), &(inteval->stack[((hsi*270+7130)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+26570)*1+lsi)*1]), &(inteval->stack[((hsi*396+6404)*1+lsi)*1]), &(inteval->stack[((hsi*330+6800)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+27560)*1+lsi)*1]), &(inteval->stack[((hsi*990+26570)*1+lsi)*1]), &(inteval->stack[((hsi*810+25760)*1+lsi)*1]),6);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*1188+29180)*1+lsi)*1]), &(inteval->stack[((hsi*468+5936)*1+lsi)*1]), &(inteval->stack[((hsi*396+6404)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+30368)*1+lsi)*1]), &(inteval->stack[((hsi*1188+29180)*1+lsi)*1]), &(inteval->stack[((hsi*990+26570)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+32348)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30368)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27560)*1+lsi)*1]),6);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*1404+35048)*1+lsi)*1]), &(inteval->stack[((hsi*546+5390)*1+lsi)*1]), &(inteval->stack[((hsi*468+5936)*1+lsi)*1]),6);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*2376+36452)*1+lsi)*1]), &(inteval->stack[((hsi*1404+35048)*1+lsi)*1]), &(inteval->stack[((hsi*1188+29180)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+38828)*1+lsi)*1]), &(inteval->stack[((hsi*2376+36452)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30368)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+42128)*1+lsi)*1]), &(inteval->stack[((hsi*3300+38828)*1+lsi)*1]), &(inteval->stack[((hsi*2700+32348)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+29180)*1+lsi)*1]), &(inteval->stack[((hsi*270+7130)*1+lsi)*1]), &(inteval->stack[((hsi*216+7400)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+29828)*1+lsi)*1]), &(inteval->stack[((hsi*810+25760)*1+lsi)*1]), &(inteval->stack[((hsi*648+29180)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+46178)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27560)*1+lsi)*1]), &(inteval->stack[((hsi*1296+29828)*1+lsi)*1]),6);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*3240+25760)*1+lsi)*1]), &(inteval->stack[((hsi*2700+32348)*1+lsi)*1]), &(inteval->stack[((hsi*2160+46178)*1+lsi)*1]),6);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*4536+29000)*1+lsi)*1]), &(inteval->stack[((hsi*4050+42128)*1+lsi)*1]), &(inteval->stack[((hsi*3240+25760)*1+lsi)*1]),6);
HRRPart1bra0ket0qp(inteval, &(inteval->stack[((hsi*1638+25760)*1+lsi)*1]), &(inteval->stack[((hsi*630+4760)*1+lsi)*1]), &(inteval->stack[((hsi*546+5390)*1+lsi)*1]),6);
HRRPart1bra0ket0od(inteval, &(inteval->stack[((hsi*2808+4760)*1+lsi)*1]), &(inteval->stack[((hsi*1638+25760)*1+lsi)*1]), &(inteval->stack[((hsi*1404+35048)*1+lsi)*1]),6);
HRRPart1bra0ket0nf(inteval, &(inteval->stack[((hsi*3960+46178)*1+lsi)*1]), &(inteval->stack[((hsi*2808+4760)*1+lsi)*1]), &(inteval->stack[((hsi*2376+36452)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+33536)*1+lsi)*1]), &(inteval->stack[((hsi*3960+46178)*1+lsi)*1]), &(inteval->stack[((hsi*3300+38828)*1+lsi)*1]),6);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*5670+46178)*1+lsi)*1]), &(inteval->stack[((hsi*4950+33536)*1+lsi)*1]), &(inteval->stack[((hsi*4050+42128)*1+lsi)*1]),6);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*6048+33536)*1+lsi)*1]), &(inteval->stack[((hsi*5670+46178)*1+lsi)*1]), &(inteval->stack[((hsi*4536+29000)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+25760)*1+lsi)*1]), &(inteval->stack[((hsi*550+3400)*1+lsi)*1]), &(inteval->stack[((hsi*450+3950)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+27110)*1+lsi)*1]), &(inteval->stack[((hsi*660+2740)*1+lsi)*1]), &(inteval->stack[((hsi*550+3400)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+28760)*1+lsi)*1]), &(inteval->stack[((hsi*1650+27110)*1+lsi)*1]), &(inteval->stack[((hsi*1350+25760)*1+lsi)*1]),10);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*1980+4760)*1+lsi)*1]), &(inteval->stack[((hsi*780+1960)*1+lsi)*1]), &(inteval->stack[((hsi*660+2740)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+39584)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4760)*1+lsi)*1]), &(inteval->stack[((hsi*1650+27110)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+42884)*1+lsi)*1]), &(inteval->stack[((hsi*3300+39584)*1+lsi)*1]), &(inteval->stack[((hsi*2700+28760)*1+lsi)*1]),10);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*2340+47384)*1+lsi)*1]), &(inteval->stack[((hsi*910+1050)*1+lsi)*1]), &(inteval->stack[((hsi*780+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*3960+49724)*1+lsi)*1]), &(inteval->stack[((hsi*2340+47384)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4760)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+53684)*1+lsi)*1]), &(inteval->stack[((hsi*3960+49724)*1+lsi)*1]), &(inteval->stack[((hsi*3300+39584)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+59184)*1+lsi)*1]), &(inteval->stack[((hsi*5500+53684)*1+lsi)*1]), &(inteval->stack[((hsi*4500+42884)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+39584)*1+lsi)*1]), &(inteval->stack[((hsi*450+3950)*1+lsi)*1]), &(inteval->stack[((hsi*360+4400)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+1960)*1+lsi)*1]), &(inteval->stack[((hsi*1350+25760)*1+lsi)*1]), &(inteval->stack[((hsi*1080+39584)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+65934)*1+lsi)*1]), &(inteval->stack[((hsi*2700+28760)*1+lsi)*1]), &(inteval->stack[((hsi*2160+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*5400+25760)*1+lsi)*1]), &(inteval->stack[((hsi*4500+42884)*1+lsi)*1]), &(inteval->stack[((hsi*3600+65934)*1+lsi)*1]),10);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*7560+39584)*1+lsi)*1]), &(inteval->stack[((hsi*6750+59184)*1+lsi)*1]), &(inteval->stack[((hsi*5400+25760)*1+lsi)*1]),10);
HRRPart1bra0ket0qp(inteval, &(inteval->stack[((hsi*2730+25760)*1+lsi)*1]), &(inteval->stack[((hsi*1050+0)*1+lsi)*1]), &(inteval->stack[((hsi*910+1050)*1+lsi)*1]),10);
HRRPart1bra0ket0od(inteval, &(inteval->stack[((hsi*4680+0)*1+lsi)*1]), &(inteval->stack[((hsi*2730+25760)*1+lsi)*1]), &(inteval->stack[((hsi*2340+47384)*1+lsi)*1]),10);
HRRPart1bra0ket0nf(inteval, &(inteval->stack[((hsi*6600+25760)*1+lsi)*1]), &(inteval->stack[((hsi*4680+0)*1+lsi)*1]), &(inteval->stack[((hsi*3960+49724)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+65934)*1+lsi)*1]), &(inteval->stack[((hsi*6600+25760)*1+lsi)*1]), &(inteval->stack[((hsi*5500+53684)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+47144)*1+lsi)*1]), &(inteval->stack[((hsi*8250+65934)*1+lsi)*1]), &(inteval->stack[((hsi*6750+59184)*1+lsi)*1]),10);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*10080+56594)*1+lsi)*1]), &(inteval->stack[((hsi*9450+47144)*1+lsi)*1]), &(inteval->stack[((hsi*7560+39584)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18144+7616)*1+lsi)*1]), &(inteval->stack[((hsi*10080+56594)*1+lsi)*1]), &(inteval->stack[((hsi*6048+33536)*1+lsi)*1]),1008);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*18144+7616)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
