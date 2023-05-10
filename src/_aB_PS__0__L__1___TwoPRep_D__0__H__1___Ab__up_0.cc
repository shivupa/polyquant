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
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
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
#include <_aB_PS__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__L__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,103400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+477620)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61412)*1+lsi)*1]), &(inteval->stack[((hsi*4290+66560)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+490490)*1+lsi)*1]), &(inteval->stack[((hsi*6084+55328)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61412)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+505934)*1+lsi)*1]), &(inteval->stack[((hsi*15444+490490)*1+lsi)*1]), &(inteval->stack[((hsi*12870+477620)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+531674)*1+lsi)*1]), &(inteval->stack[((hsi*7098+48230)*1+lsi)*1]), &(inteval->stack[((hsi*6084+55328)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+549926)*1+lsi)*1]), &(inteval->stack[((hsi*18252+531674)*1+lsi)*1]), &(inteval->stack[((hsi*15444+490490)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+580814)*1+lsi)*1]), &(inteval->stack[((hsi*30888+549926)*1+lsi)*1]), &(inteval->stack[((hsi*25740+505934)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+490490)*1+lsi)*1]), &(inteval->stack[((hsi*4290+66560)*1+lsi)*1]), &(inteval->stack[((hsi*3510+70850)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+623714)*1+lsi)*1]), &(inteval->stack[((hsi*12870+477620)*1+lsi)*1]), &(inteval->stack[((hsi*10530+490490)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+644774)*1+lsi)*1]), &(inteval->stack[((hsi*25740+505934)*1+lsi)*1]), &(inteval->stack[((hsi*21060+623714)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+477620)*1+lsi)*1]), &(inteval->stack[((hsi*42900+580814)*1+lsi)*1]), &(inteval->stack[((hsi*35100+644774)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+623714)*1+lsi)*1]), &(inteval->stack[((hsi*8190+40040)*1+lsi)*1]), &(inteval->stack[((hsi*7098+48230)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+645008)*1+lsi)*1]), &(inteval->stack[((hsi*21294+623714)*1+lsi)*1]), &(inteval->stack[((hsi*18252+531674)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+681512)*1+lsi)*1]), &(inteval->stack[((hsi*36504+645008)*1+lsi)*1]), &(inteval->stack[((hsi*30888+549926)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+732992)*1+lsi)*1]), &(inteval->stack[((hsi*51480+681512)*1+lsi)*1]), &(inteval->stack[((hsi*42900+580814)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+530270)*1+lsi)*1]), &(inteval->stack[((hsi*64350+732992)*1+lsi)*1]), &(inteval->stack[((hsi*52650+477620)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+477620)*1+lsi)*1]), &(inteval->stack[((hsi*4356+92444)*1+lsi)*1]), &(inteval->stack[((hsi*3630+96800)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+488510)*1+lsi)*1]), &(inteval->stack[((hsi*5148+87296)*1+lsi)*1]), &(inteval->stack[((hsi*4356+92444)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+40040)*1+lsi)*1]), &(inteval->stack[((hsi*13068+488510)*1+lsi)*1]), &(inteval->stack[((hsi*10890+477620)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+501578)*1+lsi)*1]), &(inteval->stack[((hsi*6006+81290)*1+lsi)*1]), &(inteval->stack[((hsi*5148+87296)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+603980)*1+lsi)*1]), &(inteval->stack[((hsi*15444+501578)*1+lsi)*1]), &(inteval->stack[((hsi*13068+488510)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+630116)*1+lsi)*1]), &(inteval->stack[((hsi*26136+603980)*1+lsi)*1]), &(inteval->stack[((hsi*21780+40040)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+517022)*1+lsi)*1]), &(inteval->stack[((hsi*3630+96800)*1+lsi)*1]), &(inteval->stack[((hsi*2970+100430)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+666416)*1+lsi)*1]), &(inteval->stack[((hsi*10890+477620)*1+lsi)*1]), &(inteval->stack[((hsi*8910+517022)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+684236)*1+lsi)*1]), &(inteval->stack[((hsi*21780+40040)*1+lsi)*1]), &(inteval->stack[((hsi*17820+666416)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+713936)*1+lsi)*1]), &(inteval->stack[((hsi*36300+630116)*1+lsi)*1]), &(inteval->stack[((hsi*29700+684236)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+666416)*1+lsi)*1]), &(inteval->stack[((hsi*6930+74360)*1+lsi)*1]), &(inteval->stack[((hsi*6006+81290)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+40040)*1+lsi)*1]), &(inteval->stack[((hsi*18018+666416)*1+lsi)*1]), &(inteval->stack[((hsi*15444+501578)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+477620)*1+lsi)*1]), &(inteval->stack[((hsi*30888+40040)*1+lsi)*1]), &(inteval->stack[((hsi*26136+603980)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+40040)*1+lsi)*1]), &(inteval->stack[((hsi*43560+477620)*1+lsi)*1]), &(inteval->stack[((hsi*36300+630116)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+603980)*1+lsi)*1]), &(inteval->stack[((hsi*54450+40040)*1+lsi)*1]), &(inteval->stack[((hsi*44550+713936)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*187110+666350)*1+lsi)*1]), &(inteval->stack[((hsi*73710+530270)*1+lsi)*1]), &(inteval->stack[((hsi*62370+603980)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+40040)*1+lsi)*1]), &(inteval->stack[((hsi*6006+24934)*1+lsi)*1]), &(inteval->stack[((hsi*5005+30940)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+603980)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17836)*1+lsi)*1]), &(inteval->stack[((hsi*6006+24934)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+477620)*1+lsi)*1]), &(inteval->stack[((hsi*18018+603980)*1+lsi)*1]), &(inteval->stack[((hsi*15015+40040)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+55055)*1+lsi)*1]), &(inteval->stack[((hsi*8281+9555)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17836)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+621998)*1+lsi)*1]), &(inteval->stack[((hsi*21294+55055)*1+lsi)*1]), &(inteval->stack[((hsi*18018+603980)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+853460)*1+lsi)*1]), &(inteval->stack[((hsi*36036+621998)*1+lsi)*1]), &(inteval->stack[((hsi*30030+477620)*1+lsi)*1]),91);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+76349)*1+lsi)*1]), &(inteval->stack[((hsi*5005+30940)*1+lsi)*1]), &(inteval->stack[((hsi*4095+35945)*1+lsi)*1]),91);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+903510)*1+lsi)*1]), &(inteval->stack[((hsi*15015+40040)*1+lsi)*1]), &(inteval->stack[((hsi*12285+76349)*1+lsi)*1]),91);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+928080)*1+lsi)*1]), &(inteval->stack[((hsi*30030+477620)*1+lsi)*1]), &(inteval->stack[((hsi*24570+903510)*1+lsi)*1]),91);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+969030)*1+lsi)*1]), &(inteval->stack[((hsi*50050+853460)*1+lsi)*1]), &(inteval->stack[((hsi*40950+928080)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+903510)*1+lsi)*1]), &(inteval->stack[((hsi*9555+0)*1+lsi)*1]), &(inteval->stack[((hsi*8281+9555)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+0)*1+lsi)*1]), &(inteval->stack[((hsi*24843+903510)*1+lsi)*1]), &(inteval->stack[((hsi*21294+55055)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+903510)*1+lsi)*1]), &(inteval->stack[((hsi*42588+0)*1+lsi)*1]), &(inteval->stack[((hsi*36036+621998)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+0)*1+lsi)*1]), &(inteval->stack[((hsi*60060+903510)*1+lsi)*1]), &(inteval->stack[((hsi*50050+853460)*1+lsi)*1]),91);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+853460)*1+lsi)*1]), &(inteval->stack[((hsi*75075+0)*1+lsi)*1]), &(inteval->stack[((hsi*61425+969030)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*221130+939455)*1+lsi)*1]), &(inteval->stack[((hsi*85995+853460)*1+lsi)*1]), &(inteval->stack[((hsi*73710+530270)*1+lsi)*1]),945);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*374220+103400)*1+lsi)*1]), &(inteval->stack[((hsi*221130+939455)*1+lsi)*1]), &(inteval->stack[((hsi*187110+666350)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*374220+103400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
