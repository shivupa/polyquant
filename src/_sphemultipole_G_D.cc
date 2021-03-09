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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <_sphemultipole_G_D_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_G_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3850)*1+lsi)*1]), &(inteval->stack[((hsi*21+1564)*1+lsi)*1]), &(inteval->stack[((hsi*15+1585)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3895)*1+lsi)*1]), &(inteval->stack[((hsi*28+1536)*1+lsi)*1]), &(inteval->stack[((hsi*21+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3760)*1+lsi)*1]), &(inteval->stack[((hsi*63+3895)*1+lsi)*1]), &(inteval->stack[((hsi*45+3850)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1536)*1+lsi)*1]), &(inteval->stack[((hsi*21+1500)*1+lsi)*1]), &(inteval->stack[((hsi*15+1521)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3958)*1+lsi)*1]), &(inteval->stack[((hsi*28+1472)*1+lsi)*1]), &(inteval->stack[((hsi*21+1500)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3670)*1+lsi)*1]), &(inteval->stack[((hsi*63+3958)*1+lsi)*1]), &(inteval->stack[((hsi*45+1536)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1472)*1+lsi)*1]), &(inteval->stack[((hsi*21+1436)*1+lsi)*1]), &(inteval->stack[((hsi*15+1457)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4021)*1+lsi)*1]), &(inteval->stack[((hsi*28+1408)*1+lsi)*1]), &(inteval->stack[((hsi*21+1436)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3580)*1+lsi)*1]), &(inteval->stack[((hsi*63+4021)*1+lsi)*1]), &(inteval->stack[((hsi*45+1472)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1408)*1+lsi)*1]), &(inteval->stack[((hsi*21+1372)*1+lsi)*1]), &(inteval->stack[((hsi*15+1393)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4084)*1+lsi)*1]), &(inteval->stack[((hsi*28+1344)*1+lsi)*1]), &(inteval->stack[((hsi*21+1372)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3490)*1+lsi)*1]), &(inteval->stack[((hsi*63+4084)*1+lsi)*1]), &(inteval->stack[((hsi*45+1408)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1344)*1+lsi)*1]), &(inteval->stack[((hsi*21+1308)*1+lsi)*1]), &(inteval->stack[((hsi*15+1329)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4147)*1+lsi)*1]), &(inteval->stack[((hsi*28+1280)*1+lsi)*1]), &(inteval->stack[((hsi*21+1308)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3400)*1+lsi)*1]), &(inteval->stack[((hsi*63+4147)*1+lsi)*1]), &(inteval->stack[((hsi*45+1344)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1280)*1+lsi)*1]), &(inteval->stack[((hsi*21+1244)*1+lsi)*1]), &(inteval->stack[((hsi*15+1265)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4210)*1+lsi)*1]), &(inteval->stack[((hsi*28+1216)*1+lsi)*1]), &(inteval->stack[((hsi*21+1244)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3310)*1+lsi)*1]), &(inteval->stack[((hsi*63+4210)*1+lsi)*1]), &(inteval->stack[((hsi*45+1280)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1216)*1+lsi)*1]), &(inteval->stack[((hsi*21+1180)*1+lsi)*1]), &(inteval->stack[((hsi*15+1201)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4273)*1+lsi)*1]), &(inteval->stack[((hsi*28+1152)*1+lsi)*1]), &(inteval->stack[((hsi*21+1180)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3220)*1+lsi)*1]), &(inteval->stack[((hsi*63+4273)*1+lsi)*1]), &(inteval->stack[((hsi*45+1216)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1152)*1+lsi)*1]), &(inteval->stack[((hsi*21+1116)*1+lsi)*1]), &(inteval->stack[((hsi*15+1137)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4336)*1+lsi)*1]), &(inteval->stack[((hsi*28+1088)*1+lsi)*1]), &(inteval->stack[((hsi*21+1116)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3130)*1+lsi)*1]), &(inteval->stack[((hsi*63+4336)*1+lsi)*1]), &(inteval->stack[((hsi*45+1152)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1088)*1+lsi)*1]), &(inteval->stack[((hsi*21+1052)*1+lsi)*1]), &(inteval->stack[((hsi*15+1073)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4399)*1+lsi)*1]), &(inteval->stack[((hsi*28+1024)*1+lsi)*1]), &(inteval->stack[((hsi*21+1052)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3040)*1+lsi)*1]), &(inteval->stack[((hsi*63+4399)*1+lsi)*1]), &(inteval->stack[((hsi*45+1088)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1024)*1+lsi)*1]), &(inteval->stack[((hsi*21+988)*1+lsi)*1]), &(inteval->stack[((hsi*15+1009)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4462)*1+lsi)*1]), &(inteval->stack[((hsi*28+960)*1+lsi)*1]), &(inteval->stack[((hsi*21+988)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2950)*1+lsi)*1]), &(inteval->stack[((hsi*63+4462)*1+lsi)*1]), &(inteval->stack[((hsi*45+1024)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+960)*1+lsi)*1]), &(inteval->stack[((hsi*21+924)*1+lsi)*1]), &(inteval->stack[((hsi*15+945)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4525)*1+lsi)*1]), &(inteval->stack[((hsi*28+896)*1+lsi)*1]), &(inteval->stack[((hsi*21+924)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2860)*1+lsi)*1]), &(inteval->stack[((hsi*63+4525)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+896)*1+lsi)*1]), &(inteval->stack[((hsi*21+860)*1+lsi)*1]), &(inteval->stack[((hsi*15+881)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4588)*1+lsi)*1]), &(inteval->stack[((hsi*28+832)*1+lsi)*1]), &(inteval->stack[((hsi*21+860)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2770)*1+lsi)*1]), &(inteval->stack[((hsi*63+4588)*1+lsi)*1]), &(inteval->stack[((hsi*45+896)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+832)*1+lsi)*1]), &(inteval->stack[((hsi*21+796)*1+lsi)*1]), &(inteval->stack[((hsi*15+817)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4651)*1+lsi)*1]), &(inteval->stack[((hsi*28+768)*1+lsi)*1]), &(inteval->stack[((hsi*21+796)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2680)*1+lsi)*1]), &(inteval->stack[((hsi*63+4651)*1+lsi)*1]), &(inteval->stack[((hsi*45+832)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+768)*1+lsi)*1]), &(inteval->stack[((hsi*21+732)*1+lsi)*1]), &(inteval->stack[((hsi*15+753)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4714)*1+lsi)*1]), &(inteval->stack[((hsi*28+704)*1+lsi)*1]), &(inteval->stack[((hsi*21+732)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2590)*1+lsi)*1]), &(inteval->stack[((hsi*63+4714)*1+lsi)*1]), &(inteval->stack[((hsi*45+768)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+704)*1+lsi)*1]), &(inteval->stack[((hsi*21+668)*1+lsi)*1]), &(inteval->stack[((hsi*15+689)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4777)*1+lsi)*1]), &(inteval->stack[((hsi*28+640)*1+lsi)*1]), &(inteval->stack[((hsi*21+668)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4777)*1+lsi)*1]), &(inteval->stack[((hsi*45+704)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+640)*1+lsi)*1]), &(inteval->stack[((hsi*21+604)*1+lsi)*1]), &(inteval->stack[((hsi*15+625)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4840)*1+lsi)*1]), &(inteval->stack[((hsi*28+576)*1+lsi)*1]), &(inteval->stack[((hsi*21+604)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2410)*1+lsi)*1]), &(inteval->stack[((hsi*63+4840)*1+lsi)*1]), &(inteval->stack[((hsi*45+640)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+576)*1+lsi)*1]), &(inteval->stack[((hsi*21+540)*1+lsi)*1]), &(inteval->stack[((hsi*15+561)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4903)*1+lsi)*1]), &(inteval->stack[((hsi*28+512)*1+lsi)*1]), &(inteval->stack[((hsi*21+540)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2320)*1+lsi)*1]), &(inteval->stack[((hsi*63+4903)*1+lsi)*1]), &(inteval->stack[((hsi*45+576)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+512)*1+lsi)*1]), &(inteval->stack[((hsi*21+476)*1+lsi)*1]), &(inteval->stack[((hsi*15+497)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4966)*1+lsi)*1]), &(inteval->stack[((hsi*28+448)*1+lsi)*1]), &(inteval->stack[((hsi*21+476)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2230)*1+lsi)*1]), &(inteval->stack[((hsi*63+4966)*1+lsi)*1]), &(inteval->stack[((hsi*45+512)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+448)*1+lsi)*1]), &(inteval->stack[((hsi*21+412)*1+lsi)*1]), &(inteval->stack[((hsi*15+433)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5029)*1+lsi)*1]), &(inteval->stack[((hsi*28+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+412)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2140)*1+lsi)*1]), &(inteval->stack[((hsi*63+5029)*1+lsi)*1]), &(inteval->stack[((hsi*45+448)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+348)*1+lsi)*1]), &(inteval->stack[((hsi*15+369)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5092)*1+lsi)*1]), &(inteval->stack[((hsi*28+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+348)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2050)*1+lsi)*1]), &(inteval->stack[((hsi*63+5092)*1+lsi)*1]), &(inteval->stack[((hsi*45+384)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+284)*1+lsi)*1]), &(inteval->stack[((hsi*15+305)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5155)*1+lsi)*1]), &(inteval->stack[((hsi*28+256)*1+lsi)*1]), &(inteval->stack[((hsi*21+284)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+5155)*1+lsi)*1]), &(inteval->stack[((hsi*45+320)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+256)*1+lsi)*1]), &(inteval->stack[((hsi*21+220)*1+lsi)*1]), &(inteval->stack[((hsi*15+241)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5218)*1+lsi)*1]), &(inteval->stack[((hsi*28+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+220)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1870)*1+lsi)*1]), &(inteval->stack[((hsi*63+5218)*1+lsi)*1]), &(inteval->stack[((hsi*45+256)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]), &(inteval->stack[((hsi*15+177)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5281)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1780)*1+lsi)*1]), &(inteval->stack[((hsi*63+5281)*1+lsi)*1]), &(inteval->stack[((hsi*45+192)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5344)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1690)*1+lsi)*1]), &(inteval->stack[((hsi*63+5344)*1+lsi)*1]), &(inteval->stack[((hsi*45+128)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5407)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1600)*1+lsi)*1]), &(inteval->stack[((hsi*63+5407)*1+lsi)*1]), &(inteval->stack[((hsi*45+64)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+1600)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+1690)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+1780)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+1870)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+1960)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+2050)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*90+2140)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*90+2230)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*90+2320)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*90+2410)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*90+2500)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*90+2590)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*90+2680)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*90+2770)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*90+2860)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*90+2950)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*90+3040)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*90+3130)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*90+3220)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*90+3310)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*90+3400)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*90+3490)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*90+3580)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*90+3670)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*90+3760)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
