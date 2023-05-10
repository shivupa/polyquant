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
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0lp.h>
#include <_sphemultipole_D_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8800)*1+lsi)*1]), &(inteval->stack[((hsi*45+3319)*1+lsi)*1]), &(inteval->stack[((hsi*36+3364)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+8908)*1+lsi)*1]), &(inteval->stack[((hsi*55+1320)*1+lsi)*1]), &(inteval->stack[((hsi*45+3319)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8584)*1+lsi)*1]), &(inteval->stack[((hsi*135+8908)*1+lsi)*1]), &(inteval->stack[((hsi*108+8800)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9043)*1+lsi)*1]), &(inteval->stack[((hsi*45+3238)*1+lsi)*1]), &(inteval->stack[((hsi*36+3283)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9151)*1+lsi)*1]), &(inteval->stack[((hsi*55+1265)*1+lsi)*1]), &(inteval->stack[((hsi*45+3238)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8368)*1+lsi)*1]), &(inteval->stack[((hsi*135+9151)*1+lsi)*1]), &(inteval->stack[((hsi*108+9043)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3238)*1+lsi)*1]), &(inteval->stack[((hsi*45+3157)*1+lsi)*1]), &(inteval->stack[((hsi*36+3202)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9286)*1+lsi)*1]), &(inteval->stack[((hsi*55+1210)*1+lsi)*1]), &(inteval->stack[((hsi*45+3157)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8152)*1+lsi)*1]), &(inteval->stack[((hsi*135+9286)*1+lsi)*1]), &(inteval->stack[((hsi*108+3238)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1210)*1+lsi)*1]), &(inteval->stack[((hsi*45+3076)*1+lsi)*1]), &(inteval->stack[((hsi*36+3121)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9421)*1+lsi)*1]), &(inteval->stack[((hsi*55+1155)*1+lsi)*1]), &(inteval->stack[((hsi*45+3076)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7936)*1+lsi)*1]), &(inteval->stack[((hsi*135+9421)*1+lsi)*1]), &(inteval->stack[((hsi*108+1210)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3076)*1+lsi)*1]), &(inteval->stack[((hsi*45+2995)*1+lsi)*1]), &(inteval->stack[((hsi*36+3040)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9556)*1+lsi)*1]), &(inteval->stack[((hsi*55+1100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2995)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7720)*1+lsi)*1]), &(inteval->stack[((hsi*135+9556)*1+lsi)*1]), &(inteval->stack[((hsi*108+3076)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2914)*1+lsi)*1]), &(inteval->stack[((hsi*36+2959)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9691)*1+lsi)*1]), &(inteval->stack[((hsi*55+1045)*1+lsi)*1]), &(inteval->stack[((hsi*45+2914)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7504)*1+lsi)*1]), &(inteval->stack[((hsi*135+9691)*1+lsi)*1]), &(inteval->stack[((hsi*108+1100)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2914)*1+lsi)*1]), &(inteval->stack[((hsi*45+2833)*1+lsi)*1]), &(inteval->stack[((hsi*36+2878)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9826)*1+lsi)*1]), &(inteval->stack[((hsi*55+990)*1+lsi)*1]), &(inteval->stack[((hsi*45+2833)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7288)*1+lsi)*1]), &(inteval->stack[((hsi*135+9826)*1+lsi)*1]), &(inteval->stack[((hsi*108+2914)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+990)*1+lsi)*1]), &(inteval->stack[((hsi*45+2752)*1+lsi)*1]), &(inteval->stack[((hsi*36+2797)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9961)*1+lsi)*1]), &(inteval->stack[((hsi*55+935)*1+lsi)*1]), &(inteval->stack[((hsi*45+2752)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7072)*1+lsi)*1]), &(inteval->stack[((hsi*135+9961)*1+lsi)*1]), &(inteval->stack[((hsi*108+990)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2752)*1+lsi)*1]), &(inteval->stack[((hsi*45+2671)*1+lsi)*1]), &(inteval->stack[((hsi*36+2716)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10096)*1+lsi)*1]), &(inteval->stack[((hsi*55+880)*1+lsi)*1]), &(inteval->stack[((hsi*45+2671)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6856)*1+lsi)*1]), &(inteval->stack[((hsi*135+10096)*1+lsi)*1]), &(inteval->stack[((hsi*108+2752)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+880)*1+lsi)*1]), &(inteval->stack[((hsi*45+2590)*1+lsi)*1]), &(inteval->stack[((hsi*36+2635)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10231)*1+lsi)*1]), &(inteval->stack[((hsi*55+825)*1+lsi)*1]), &(inteval->stack[((hsi*45+2590)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6640)*1+lsi)*1]), &(inteval->stack[((hsi*135+10231)*1+lsi)*1]), &(inteval->stack[((hsi*108+880)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2590)*1+lsi)*1]), &(inteval->stack[((hsi*45+2509)*1+lsi)*1]), &(inteval->stack[((hsi*36+2554)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10366)*1+lsi)*1]), &(inteval->stack[((hsi*55+770)*1+lsi)*1]), &(inteval->stack[((hsi*45+2509)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6424)*1+lsi)*1]), &(inteval->stack[((hsi*135+10366)*1+lsi)*1]), &(inteval->stack[((hsi*108+2590)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+770)*1+lsi)*1]), &(inteval->stack[((hsi*45+2428)*1+lsi)*1]), &(inteval->stack[((hsi*36+2473)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10501)*1+lsi)*1]), &(inteval->stack[((hsi*55+715)*1+lsi)*1]), &(inteval->stack[((hsi*45+2428)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6208)*1+lsi)*1]), &(inteval->stack[((hsi*135+10501)*1+lsi)*1]), &(inteval->stack[((hsi*108+770)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2428)*1+lsi)*1]), &(inteval->stack[((hsi*45+2347)*1+lsi)*1]), &(inteval->stack[((hsi*36+2392)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10636)*1+lsi)*1]), &(inteval->stack[((hsi*55+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+2347)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5992)*1+lsi)*1]), &(inteval->stack[((hsi*135+10636)*1+lsi)*1]), &(inteval->stack[((hsi*108+2428)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+2266)*1+lsi)*1]), &(inteval->stack[((hsi*36+2311)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10771)*1+lsi)*1]), &(inteval->stack[((hsi*55+605)*1+lsi)*1]), &(inteval->stack[((hsi*45+2266)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5776)*1+lsi)*1]), &(inteval->stack[((hsi*135+10771)*1+lsi)*1]), &(inteval->stack[((hsi*108+660)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2266)*1+lsi)*1]), &(inteval->stack[((hsi*45+2185)*1+lsi)*1]), &(inteval->stack[((hsi*36+2230)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10906)*1+lsi)*1]), &(inteval->stack[((hsi*55+550)*1+lsi)*1]), &(inteval->stack[((hsi*45+2185)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5560)*1+lsi)*1]), &(inteval->stack[((hsi*135+10906)*1+lsi)*1]), &(inteval->stack[((hsi*108+2266)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+550)*1+lsi)*1]), &(inteval->stack[((hsi*45+2104)*1+lsi)*1]), &(inteval->stack[((hsi*36+2149)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11041)*1+lsi)*1]), &(inteval->stack[((hsi*55+495)*1+lsi)*1]), &(inteval->stack[((hsi*45+2104)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5344)*1+lsi)*1]), &(inteval->stack[((hsi*135+11041)*1+lsi)*1]), &(inteval->stack[((hsi*108+550)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2104)*1+lsi)*1]), &(inteval->stack[((hsi*45+2023)*1+lsi)*1]), &(inteval->stack[((hsi*36+2068)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11176)*1+lsi)*1]), &(inteval->stack[((hsi*55+440)*1+lsi)*1]), &(inteval->stack[((hsi*45+2023)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5128)*1+lsi)*1]), &(inteval->stack[((hsi*135+11176)*1+lsi)*1]), &(inteval->stack[((hsi*108+2104)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+440)*1+lsi)*1]), &(inteval->stack[((hsi*45+1942)*1+lsi)*1]), &(inteval->stack[((hsi*36+1987)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11311)*1+lsi)*1]), &(inteval->stack[((hsi*55+385)*1+lsi)*1]), &(inteval->stack[((hsi*45+1942)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4912)*1+lsi)*1]), &(inteval->stack[((hsi*135+11311)*1+lsi)*1]), &(inteval->stack[((hsi*108+440)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1942)*1+lsi)*1]), &(inteval->stack[((hsi*45+1861)*1+lsi)*1]), &(inteval->stack[((hsi*36+1906)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11446)*1+lsi)*1]), &(inteval->stack[((hsi*55+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+1861)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4696)*1+lsi)*1]), &(inteval->stack[((hsi*135+11446)*1+lsi)*1]), &(inteval->stack[((hsi*108+1942)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+1780)*1+lsi)*1]), &(inteval->stack[((hsi*36+1825)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11581)*1+lsi)*1]), &(inteval->stack[((hsi*55+275)*1+lsi)*1]), &(inteval->stack[((hsi*45+1780)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4480)*1+lsi)*1]), &(inteval->stack[((hsi*135+11581)*1+lsi)*1]), &(inteval->stack[((hsi*108+330)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1780)*1+lsi)*1]), &(inteval->stack[((hsi*45+1699)*1+lsi)*1]), &(inteval->stack[((hsi*36+1744)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11716)*1+lsi)*1]), &(inteval->stack[((hsi*55+220)*1+lsi)*1]), &(inteval->stack[((hsi*45+1699)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4264)*1+lsi)*1]), &(inteval->stack[((hsi*135+11716)*1+lsi)*1]), &(inteval->stack[((hsi*108+1780)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+220)*1+lsi)*1]), &(inteval->stack[((hsi*45+1618)*1+lsi)*1]), &(inteval->stack[((hsi*36+1663)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11851)*1+lsi)*1]), &(inteval->stack[((hsi*55+165)*1+lsi)*1]), &(inteval->stack[((hsi*45+1618)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4048)*1+lsi)*1]), &(inteval->stack[((hsi*135+11851)*1+lsi)*1]), &(inteval->stack[((hsi*108+220)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1618)*1+lsi)*1]), &(inteval->stack[((hsi*45+1537)*1+lsi)*1]), &(inteval->stack[((hsi*36+1582)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11986)*1+lsi)*1]), &(inteval->stack[((hsi*55+110)*1+lsi)*1]), &(inteval->stack[((hsi*45+1537)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3832)*1+lsi)*1]), &(inteval->stack[((hsi*135+11986)*1+lsi)*1]), &(inteval->stack[((hsi*108+1618)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+110)*1+lsi)*1]), &(inteval->stack[((hsi*45+1456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1501)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12121)*1+lsi)*1]), &(inteval->stack[((hsi*55+55)*1+lsi)*1]), &(inteval->stack[((hsi*45+1456)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3616)*1+lsi)*1]), &(inteval->stack[((hsi*135+12121)*1+lsi)*1]), &(inteval->stack[((hsi*108+110)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1456)*1+lsi)*1]), &(inteval->stack[((hsi*45+1375)*1+lsi)*1]), &(inteval->stack[((hsi*36+1420)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12256)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+1375)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3400)*1+lsi)*1]), &(inteval->stack[((hsi*135+12256)*1+lsi)*1]), &(inteval->stack[((hsi*108+1456)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*216+3400)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*216+3616)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*216+3832)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*216+4048)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*216+4264)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*216+4480)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*216+4696)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*216+4912)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*216+5128)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*216+5344)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*216+5560)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*216+5776)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*216+5992)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*216+6208)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*216+6424)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*216+6640)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*216+6856)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*216+7072)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*216+7288)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*216+7504)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*216+7720)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*216+7936)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*216+8152)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*216+8368)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*216+8584)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
