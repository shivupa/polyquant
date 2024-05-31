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
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+8908)*1+lsi)*1]), &(inteval->stack[((hsi*55+3264)*1+lsi)*1]), &(inteval->stack[((hsi*45+3319)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8584)*1+lsi)*1]), &(inteval->stack[((hsi*135+8908)*1+lsi)*1]), &(inteval->stack[((hsi*108+8800)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3264)*1+lsi)*1]), &(inteval->stack[((hsi*45+3183)*1+lsi)*1]), &(inteval->stack[((hsi*36+3228)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9043)*1+lsi)*1]), &(inteval->stack[((hsi*55+3128)*1+lsi)*1]), &(inteval->stack[((hsi*45+3183)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8368)*1+lsi)*1]), &(inteval->stack[((hsi*135+9043)*1+lsi)*1]), &(inteval->stack[((hsi*108+3264)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3128)*1+lsi)*1]), &(inteval->stack[((hsi*45+3047)*1+lsi)*1]), &(inteval->stack[((hsi*36+3092)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9178)*1+lsi)*1]), &(inteval->stack[((hsi*55+2992)*1+lsi)*1]), &(inteval->stack[((hsi*45+3047)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8152)*1+lsi)*1]), &(inteval->stack[((hsi*135+9178)*1+lsi)*1]), &(inteval->stack[((hsi*108+3128)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2992)*1+lsi)*1]), &(inteval->stack[((hsi*45+2911)*1+lsi)*1]), &(inteval->stack[((hsi*36+2956)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9313)*1+lsi)*1]), &(inteval->stack[((hsi*55+2856)*1+lsi)*1]), &(inteval->stack[((hsi*45+2911)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7936)*1+lsi)*1]), &(inteval->stack[((hsi*135+9313)*1+lsi)*1]), &(inteval->stack[((hsi*108+2992)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2856)*1+lsi)*1]), &(inteval->stack[((hsi*45+2775)*1+lsi)*1]), &(inteval->stack[((hsi*36+2820)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9448)*1+lsi)*1]), &(inteval->stack[((hsi*55+2720)*1+lsi)*1]), &(inteval->stack[((hsi*45+2775)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7720)*1+lsi)*1]), &(inteval->stack[((hsi*135+9448)*1+lsi)*1]), &(inteval->stack[((hsi*108+2856)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2720)*1+lsi)*1]), &(inteval->stack[((hsi*45+2639)*1+lsi)*1]), &(inteval->stack[((hsi*36+2684)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9583)*1+lsi)*1]), &(inteval->stack[((hsi*55+2584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2639)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7504)*1+lsi)*1]), &(inteval->stack[((hsi*135+9583)*1+lsi)*1]), &(inteval->stack[((hsi*108+2720)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2503)*1+lsi)*1]), &(inteval->stack[((hsi*36+2548)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9718)*1+lsi)*1]), &(inteval->stack[((hsi*55+2448)*1+lsi)*1]), &(inteval->stack[((hsi*45+2503)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7288)*1+lsi)*1]), &(inteval->stack[((hsi*135+9718)*1+lsi)*1]), &(inteval->stack[((hsi*108+2584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2448)*1+lsi)*1]), &(inteval->stack[((hsi*45+2367)*1+lsi)*1]), &(inteval->stack[((hsi*36+2412)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9853)*1+lsi)*1]), &(inteval->stack[((hsi*55+2312)*1+lsi)*1]), &(inteval->stack[((hsi*45+2367)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7072)*1+lsi)*1]), &(inteval->stack[((hsi*135+9853)*1+lsi)*1]), &(inteval->stack[((hsi*108+2448)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2312)*1+lsi)*1]), &(inteval->stack[((hsi*45+2231)*1+lsi)*1]), &(inteval->stack[((hsi*36+2276)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9988)*1+lsi)*1]), &(inteval->stack[((hsi*55+2176)*1+lsi)*1]), &(inteval->stack[((hsi*45+2231)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6856)*1+lsi)*1]), &(inteval->stack[((hsi*135+9988)*1+lsi)*1]), &(inteval->stack[((hsi*108+2312)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2176)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]), &(inteval->stack[((hsi*36+2140)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10123)*1+lsi)*1]), &(inteval->stack[((hsi*55+2040)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6640)*1+lsi)*1]), &(inteval->stack[((hsi*135+10123)*1+lsi)*1]), &(inteval->stack[((hsi*108+2176)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2040)*1+lsi)*1]), &(inteval->stack[((hsi*45+1959)*1+lsi)*1]), &(inteval->stack[((hsi*36+2004)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10258)*1+lsi)*1]), &(inteval->stack[((hsi*55+1904)*1+lsi)*1]), &(inteval->stack[((hsi*45+1959)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6424)*1+lsi)*1]), &(inteval->stack[((hsi*135+10258)*1+lsi)*1]), &(inteval->stack[((hsi*108+2040)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1904)*1+lsi)*1]), &(inteval->stack[((hsi*45+1823)*1+lsi)*1]), &(inteval->stack[((hsi*36+1868)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10393)*1+lsi)*1]), &(inteval->stack[((hsi*55+1768)*1+lsi)*1]), &(inteval->stack[((hsi*45+1823)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6208)*1+lsi)*1]), &(inteval->stack[((hsi*135+10393)*1+lsi)*1]), &(inteval->stack[((hsi*108+1904)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1768)*1+lsi)*1]), &(inteval->stack[((hsi*45+1687)*1+lsi)*1]), &(inteval->stack[((hsi*36+1732)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10528)*1+lsi)*1]), &(inteval->stack[((hsi*55+1632)*1+lsi)*1]), &(inteval->stack[((hsi*45+1687)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5992)*1+lsi)*1]), &(inteval->stack[((hsi*135+10528)*1+lsi)*1]), &(inteval->stack[((hsi*108+1768)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1632)*1+lsi)*1]), &(inteval->stack[((hsi*45+1551)*1+lsi)*1]), &(inteval->stack[((hsi*36+1596)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10663)*1+lsi)*1]), &(inteval->stack[((hsi*55+1496)*1+lsi)*1]), &(inteval->stack[((hsi*45+1551)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5776)*1+lsi)*1]), &(inteval->stack[((hsi*135+10663)*1+lsi)*1]), &(inteval->stack[((hsi*108+1632)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1496)*1+lsi)*1]), &(inteval->stack[((hsi*45+1415)*1+lsi)*1]), &(inteval->stack[((hsi*36+1460)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10798)*1+lsi)*1]), &(inteval->stack[((hsi*55+1360)*1+lsi)*1]), &(inteval->stack[((hsi*45+1415)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5560)*1+lsi)*1]), &(inteval->stack[((hsi*135+10798)*1+lsi)*1]), &(inteval->stack[((hsi*108+1496)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1360)*1+lsi)*1]), &(inteval->stack[((hsi*45+1279)*1+lsi)*1]), &(inteval->stack[((hsi*36+1324)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+10933)*1+lsi)*1]), &(inteval->stack[((hsi*55+1224)*1+lsi)*1]), &(inteval->stack[((hsi*45+1279)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5344)*1+lsi)*1]), &(inteval->stack[((hsi*135+10933)*1+lsi)*1]), &(inteval->stack[((hsi*108+1360)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1224)*1+lsi)*1]), &(inteval->stack[((hsi*45+1143)*1+lsi)*1]), &(inteval->stack[((hsi*36+1188)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11068)*1+lsi)*1]), &(inteval->stack[((hsi*55+1088)*1+lsi)*1]), &(inteval->stack[((hsi*45+1143)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5128)*1+lsi)*1]), &(inteval->stack[((hsi*135+11068)*1+lsi)*1]), &(inteval->stack[((hsi*108+1224)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1088)*1+lsi)*1]), &(inteval->stack[((hsi*45+1007)*1+lsi)*1]), &(inteval->stack[((hsi*36+1052)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11203)*1+lsi)*1]), &(inteval->stack[((hsi*55+952)*1+lsi)*1]), &(inteval->stack[((hsi*45+1007)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4912)*1+lsi)*1]), &(inteval->stack[((hsi*135+11203)*1+lsi)*1]), &(inteval->stack[((hsi*108+1088)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+952)*1+lsi)*1]), &(inteval->stack[((hsi*45+871)*1+lsi)*1]), &(inteval->stack[((hsi*36+916)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11338)*1+lsi)*1]), &(inteval->stack[((hsi*55+816)*1+lsi)*1]), &(inteval->stack[((hsi*45+871)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4696)*1+lsi)*1]), &(inteval->stack[((hsi*135+11338)*1+lsi)*1]), &(inteval->stack[((hsi*108+952)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+816)*1+lsi)*1]), &(inteval->stack[((hsi*45+735)*1+lsi)*1]), &(inteval->stack[((hsi*36+780)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11473)*1+lsi)*1]), &(inteval->stack[((hsi*55+680)*1+lsi)*1]), &(inteval->stack[((hsi*45+735)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4480)*1+lsi)*1]), &(inteval->stack[((hsi*135+11473)*1+lsi)*1]), &(inteval->stack[((hsi*108+816)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+680)*1+lsi)*1]), &(inteval->stack[((hsi*45+599)*1+lsi)*1]), &(inteval->stack[((hsi*36+644)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11608)*1+lsi)*1]), &(inteval->stack[((hsi*55+544)*1+lsi)*1]), &(inteval->stack[((hsi*45+599)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4264)*1+lsi)*1]), &(inteval->stack[((hsi*135+11608)*1+lsi)*1]), &(inteval->stack[((hsi*108+680)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+544)*1+lsi)*1]), &(inteval->stack[((hsi*45+463)*1+lsi)*1]), &(inteval->stack[((hsi*36+508)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11743)*1+lsi)*1]), &(inteval->stack[((hsi*55+408)*1+lsi)*1]), &(inteval->stack[((hsi*45+463)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4048)*1+lsi)*1]), &(inteval->stack[((hsi*135+11743)*1+lsi)*1]), &(inteval->stack[((hsi*108+544)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+408)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11878)*1+lsi)*1]), &(inteval->stack[((hsi*55+272)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3832)*1+lsi)*1]), &(inteval->stack[((hsi*135+11878)*1+lsi)*1]), &(inteval->stack[((hsi*108+408)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+272)*1+lsi)*1]), &(inteval->stack[((hsi*45+191)*1+lsi)*1]), &(inteval->stack[((hsi*36+236)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12013)*1+lsi)*1]), &(inteval->stack[((hsi*55+136)*1+lsi)*1]), &(inteval->stack[((hsi*45+191)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3616)*1+lsi)*1]), &(inteval->stack[((hsi*135+12013)*1+lsi)*1]), &(inteval->stack[((hsi*108+272)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+136)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12148)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3400)*1+lsi)*1]), &(inteval->stack[((hsi*135+12148)*1+lsi)*1]), &(inteval->stack[((hsi*108+136)*1+lsi)*1]),1);
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
