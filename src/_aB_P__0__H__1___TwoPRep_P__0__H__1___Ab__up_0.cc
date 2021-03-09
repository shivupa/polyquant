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
#include <HRRPart0bra0ket0pp.h>
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
#include <_aB_P__0__H__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__H__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2259)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__H__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+6228)*1+lsi)*1]), &(inteval->stack[((hsi*108+2004)*1+lsi)*1]), &(inteval->stack[((hsi*84+2112)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+6480)*1+lsi)*1]), &(inteval->stack[((hsi*135+1869)*1+lsi)*1]), &(inteval->stack[((hsi*108+2004)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+6804)*1+lsi)*1]), &(inteval->stack[((hsi*324+6480)*1+lsi)*1]), &(inteval->stack[((hsi*252+6228)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+7308)*1+lsi)*1]), &(inteval->stack[((hsi*165+1704)*1+lsi)*1]), &(inteval->stack[((hsi*135+1869)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+7713)*1+lsi)*1]), &(inteval->stack[((hsi*405+7308)*1+lsi)*1]), &(inteval->stack[((hsi*324+6480)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+8361)*1+lsi)*1]), &(inteval->stack[((hsi*648+7713)*1+lsi)*1]), &(inteval->stack[((hsi*504+6804)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6480)*1+lsi)*1]), &(inteval->stack[((hsi*84+2112)*1+lsi)*1]), &(inteval->stack[((hsi*63+2196)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+1869)*1+lsi)*1]), &(inteval->stack[((hsi*252+6228)*1+lsi)*1]), &(inteval->stack[((hsi*189+6480)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+9201)*1+lsi)*1]), &(inteval->stack[((hsi*504+6804)*1+lsi)*1]), &(inteval->stack[((hsi*378+1869)*1+lsi)*1]),3);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*945+6228)*1+lsi)*1]), &(inteval->stack[((hsi*840+8361)*1+lsi)*1]), &(inteval->stack[((hsi*630+9201)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+9201)*1+lsi)*1]), &(inteval->stack[((hsi*198+1506)*1+lsi)*1]), &(inteval->stack[((hsi*165+1704)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+9696)*1+lsi)*1]), &(inteval->stack[((hsi*495+9201)*1+lsi)*1]), &(inteval->stack[((hsi*405+7308)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+10506)*1+lsi)*1]), &(inteval->stack[((hsi*810+9696)*1+lsi)*1]), &(inteval->stack[((hsi*648+7713)*1+lsi)*1]),3);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*1260+9201)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10506)*1+lsi)*1]), &(inteval->stack[((hsi*840+8361)*1+lsi)*1]),3);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*1323+7173)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9201)*1+lsi)*1]), &(inteval->stack[((hsi*945+6228)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+6228)*1+lsi)*1]), &(inteval->stack[((hsi*216+996)*1+lsi)*1]), &(inteval->stack[((hsi*168+1212)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+1506)*1+lsi)*1]), &(inteval->stack[((hsi*270+726)*1+lsi)*1]), &(inteval->stack[((hsi*216+996)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+8496)*1+lsi)*1]), &(inteval->stack[((hsi*648+1506)*1+lsi)*1]), &(inteval->stack[((hsi*504+6228)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+9504)*1+lsi)*1]), &(inteval->stack[((hsi*330+396)*1+lsi)*1]), &(inteval->stack[((hsi*270+726)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+10314)*1+lsi)*1]), &(inteval->stack[((hsi*810+9504)*1+lsi)*1]), &(inteval->stack[((hsi*648+1506)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+11610)*1+lsi)*1]), &(inteval->stack[((hsi*1296+10314)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8496)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+1506)*1+lsi)*1]), &(inteval->stack[((hsi*168+1212)*1+lsi)*1]), &(inteval->stack[((hsi*126+1380)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+726)*1+lsi)*1]), &(inteval->stack[((hsi*504+6228)*1+lsi)*1]), &(inteval->stack[((hsi*378+1506)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+13290)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8496)*1+lsi)*1]), &(inteval->stack[((hsi*756+726)*1+lsi)*1]),6);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*1890+14550)*1+lsi)*1]), &(inteval->stack[((hsi*1680+11610)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13290)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+726)*1+lsi)*1]), &(inteval->stack[((hsi*396+0)*1+lsi)*1]), &(inteval->stack[((hsi*330+396)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+16440)*1+lsi)*1]), &(inteval->stack[((hsi*990+726)*1+lsi)*1]), &(inteval->stack[((hsi*810+9504)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16440)*1+lsi)*1]), &(inteval->stack[((hsi*1296+10314)*1+lsi)*1]),6);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*2520+8496)*1+lsi)*1]), &(inteval->stack[((hsi*2160+0)*1+lsi)*1]), &(inteval->stack[((hsi*1680+11610)*1+lsi)*1]),6);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*2646+11016)*1+lsi)*1]), &(inteval->stack[((hsi*2520+8496)*1+lsi)*1]), &(inteval->stack[((hsi*1890+14550)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*3969+2259)*1+lsi)*1]), &(inteval->stack[((hsi*2646+11016)*1+lsi)*1]), &(inteval->stack[((hsi*1323+7173)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3969+2259)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
