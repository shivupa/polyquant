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
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,211600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*7098+162910)*1+lsi)*1]), &(inteval->stack[((hsi*6084+170008)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1209952)*1+lsi)*1]), &(inteval->stack[((hsi*8190+154720)*1+lsi)*1]), &(inteval->stack[((hsi*7098+162910)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1231246)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1209952)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1191700)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1267750)*1+lsi)*1]), &(inteval->stack[((hsi*6084+170008)*1+lsi)*1]), &(inteval->stack[((hsi*5148+176092)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1283194)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1267750)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1314082)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1231246)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1283194)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1267750)*1+lsi)*1]), &(inteval->stack[((hsi*9360+145360)*1+lsi)*1]), &(inteval->stack[((hsi*8190+154720)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1365562)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1267750)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1209952)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1408150)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1365562)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1231246)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1408150)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1314082)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+145360)*1+lsi)*1]), &(inteval->stack[((hsi*8281+123975)*1+lsi)*1]), &(inteval->stack[((hsi*7098+132256)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1268920)*1+lsi)*1]), &(inteval->stack[((hsi*9555+114420)*1+lsi)*1]), &(inteval->stack[((hsi*8281+123975)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1293763)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1268920)*1+lsi)*1]), &(inteval->stack[((hsi*21294+145360)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1336351)*1+lsi)*1]), &(inteval->stack[((hsi*7098+132256)*1+lsi)*1]), &(inteval->stack[((hsi*6006+139354)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1354369)*1+lsi)*1]), &(inteval->stack[((hsi*21294+145360)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1336351)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1390405)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1293763)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1354369)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+123975)*1+lsi)*1]), &(inteval->stack[((hsi*10920+103500)*1+lsi)*1]), &(inteval->stack[((hsi*9555+114420)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1336351)*1+lsi)*1]), &(inteval->stack[((hsi*28665+123975)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1268920)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+103500)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1336351)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1293763)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1268920)*1+lsi)*1]), &(inteval->stack[((hsi*70980+103500)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1390405)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*231660+1359010)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1268920)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1191700)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+103500)*1+lsi)*1]), &(inteval->stack[((hsi*9555+78825)*1+lsi)*1]), &(inteval->stack[((hsi*8190+88380)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+128070)*1+lsi)*1]), &(inteval->stack[((hsi*11025+67800)*1+lsi)*1]), &(inteval->stack[((hsi*9555+78825)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1590670)*1+lsi)*1]), &(inteval->stack[((hsi*28665+128070)*1+lsi)*1]), &(inteval->stack[((hsi*24570+103500)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+156735)*1+lsi)*1]), &(inteval->stack[((hsi*8190+88380)*1+lsi)*1]), &(inteval->stack[((hsi*6930+96570)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1639810)*1+lsi)*1]), &(inteval->stack[((hsi*24570+103500)*1+lsi)*1]), &(inteval->stack[((hsi*20790+156735)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1681390)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1590670)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1639810)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+78825)*1+lsi)*1]), &(inteval->stack[((hsi*12600+55200)*1+lsi)*1]), &(inteval->stack[((hsi*11025+67800)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1750690)*1+lsi)*1]), &(inteval->stack[((hsi*33075+78825)*1+lsi)*1]), &(inteval->stack[((hsi*28665+128070)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+55200)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1750690)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1590670)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1750690)*1+lsi)*1]), &(inteval->stack[((hsi*81900+55200)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1681390)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*270270+1854640)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1750690)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1268920)*1+lsi)*1]),990);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*463320+2124910)*1+lsi)*1]), &(inteval->stack[((hsi*270270+1854640)*1+lsi)*1]), &(inteval->stack[((hsi*231660+1359010)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+1590670)*1+lsi)*1]), &(inteval->stack[((hsi*6006+196090)*1+lsi)*1]), &(inteval->stack[((hsi*5148+202096)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1606114)*1+lsi)*1]), &(inteval->stack[((hsi*6930+189160)*1+lsi)*1]), &(inteval->stack[((hsi*6006+196090)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1624132)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1606114)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1590670)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+55200)*1+lsi)*1]), &(inteval->stack[((hsi*5148+202096)*1+lsi)*1]), &(inteval->stack[((hsi*4356+207244)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+68268)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1590670)*1+lsi)*1]), &(inteval->stack[((hsi*13068+55200)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1655020)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1624132)*1+lsi)*1]), &(inteval->stack[((hsi*26136+68268)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+55200)*1+lsi)*1]), &(inteval->stack[((hsi*7920+181240)*1+lsi)*1]), &(inteval->stack[((hsi*6930+189160)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+75990)*1+lsi)*1]), &(inteval->stack[((hsi*20790+55200)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1606114)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+112026)*1+lsi)*1]), &(inteval->stack[((hsi*36036+75990)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1624132)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1268920)*1+lsi)*1]), &(inteval->stack[((hsi*51480+112026)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1655020)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*196020+2588230)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1268920)*1+lsi)*1]),990);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*392040+2784250)*1+lsi)*1]), &(inteval->stack[((hsi*231660+1359010)*1+lsi)*1]), &(inteval->stack[((hsi*196020+2588230)*1+lsi)*1]),990);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*653400+3176290)*1+lsi)*1]), &(inteval->stack[((hsi*463320+2124910)*1+lsi)*1]), &(inteval->stack[((hsi*392040+2784250)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+2588230)*1+lsi)*1]), &(inteval->stack[((hsi*10920+27000)*1+lsi)*1]), &(inteval->stack[((hsi*9360+37920)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+2616310)*1+lsi)*1]), &(inteval->stack[((hsi*12600+14400)*1+lsi)*1]), &(inteval->stack[((hsi*10920+27000)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2616310)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2588230)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+2649070)*1+lsi)*1]), &(inteval->stack[((hsi*9360+37920)*1+lsi)*1]), &(inteval->stack[((hsi*7920+47280)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+2672830)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2588230)*1+lsi)*1]), &(inteval->stack[((hsi*23760+2649070)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+1247860)*1+lsi)*1]), &(inteval->stack[((hsi*56160+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*47520+2672830)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+2649070)*1+lsi)*1]), &(inteval->stack[((hsi*14400+0)*1+lsi)*1]), &(inteval->stack[((hsi*12600+14400)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+2686870)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2649070)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2616310)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+2752390)*1+lsi)*1]), &(inteval->stack[((hsi*65520+2686870)*1+lsi)*1]), &(inteval->stack[((hsi*56160+1191700)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+1327060)*1+lsi)*1]), &(inteval->stack[((hsi*93600+2752390)*1+lsi)*1]), &(inteval->stack[((hsi*79200+1247860)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*311850+2588230)*1+lsi)*1]), &(inteval->stack[((hsi*118800+1327060)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1750690)*1+lsi)*1]),990);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*540540+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*311850+2588230)*1+lsi)*1]), &(inteval->stack[((hsi*270270+1854640)*1+lsi)*1]),990);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*772200+3829690)*1+lsi)*1]), &(inteval->stack[((hsi*540540+1191700)*1+lsi)*1]), &(inteval->stack[((hsi*463320+2124910)*1+lsi)*1]),990);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*980100+211600)*1+lsi)*1]), &(inteval->stack[((hsi*772200+3829690)*1+lsi)*1]), &(inteval->stack[((hsi*653400+3176290)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*980100+211600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
