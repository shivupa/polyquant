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
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__I__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__I__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,44352)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__I__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+160776)*1+lsi)*1]), &(inteval->stack[((hsi*2970+37158)*1+lsi)*1]), &(inteval->stack[((hsi*2376+40128)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+167904)*1+lsi)*1]), &(inteval->stack[((hsi*3630+33528)*1+lsi)*1]), &(inteval->stack[((hsi*2970+37158)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+176814)*1+lsi)*1]), &(inteval->stack[((hsi*8910+167904)*1+lsi)*1]), &(inteval->stack[((hsi*7128+160776)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+191070)*1+lsi)*1]), &(inteval->stack[((hsi*4356+29172)*1+lsi)*1]), &(inteval->stack[((hsi*3630+33528)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+201960)*1+lsi)*1]), &(inteval->stack[((hsi*10890+191070)*1+lsi)*1]), &(inteval->stack[((hsi*8910+167904)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+219780)*1+lsi)*1]), &(inteval->stack[((hsi*17820+201960)*1+lsi)*1]), &(inteval->stack[((hsi*14256+176814)*1+lsi)*1]),66);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+167904)*1+lsi)*1]), &(inteval->stack[((hsi*2376+40128)*1+lsi)*1]), &(inteval->stack[((hsi*1848+42504)*1+lsi)*1]),66);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*11088+243540)*1+lsi)*1]), &(inteval->stack[((hsi*7128+160776)*1+lsi)*1]), &(inteval->stack[((hsi*5544+167904)*1+lsi)*1]),66);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*18480+254628)*1+lsi)*1]), &(inteval->stack[((hsi*14256+176814)*1+lsi)*1]), &(inteval->stack[((hsi*11088+243540)*1+lsi)*1]),66);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*27720+160776)*1+lsi)*1]), &(inteval->stack[((hsi*23760+219780)*1+lsi)*1]), &(inteval->stack[((hsi*18480+254628)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+243540)*1+lsi)*1]), &(inteval->stack[((hsi*5148+24024)*1+lsi)*1]), &(inteval->stack[((hsi*4356+29172)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+256608)*1+lsi)*1]), &(inteval->stack[((hsi*13068+243540)*1+lsi)*1]), &(inteval->stack[((hsi*10890+191070)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+278388)*1+lsi)*1]), &(inteval->stack[((hsi*21780+256608)*1+lsi)*1]), &(inteval->stack[((hsi*17820+201960)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+308088)*1+lsi)*1]), &(inteval->stack[((hsi*29700+278388)*1+lsi)*1]), &(inteval->stack[((hsi*23760+219780)*1+lsi)*1]),66);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*38808+188496)*1+lsi)*1]), &(inteval->stack[((hsi*35640+308088)*1+lsi)*1]), &(inteval->stack[((hsi*27720+160776)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+160776)*1+lsi)*1]), &(inteval->stack[((hsi*3510+15522)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19032)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+24024)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]), &(inteval->stack[((hsi*3510+15522)*1+lsi)*1]),78);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+169200)*1+lsi)*1]), &(inteval->stack[((hsi*10530+24024)*1+lsi)*1]), &(inteval->stack[((hsi*8424+160776)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+227304)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+240174)*1+lsi)*1]), &(inteval->stack[((hsi*12870+227304)*1+lsi)*1]), &(inteval->stack[((hsi*10530+24024)*1+lsi)*1]),78);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+261234)*1+lsi)*1]), &(inteval->stack[((hsi*21060+240174)*1+lsi)*1]), &(inteval->stack[((hsi*16848+169200)*1+lsi)*1]),78);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+24024)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19032)*1+lsi)*1]), &(inteval->stack[((hsi*2184+21840)*1+lsi)*1]),78);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*13104+30576)*1+lsi)*1]), &(inteval->stack[((hsi*8424+160776)*1+lsi)*1]), &(inteval->stack[((hsi*6552+24024)*1+lsi)*1]),78);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*21840+289314)*1+lsi)*1]), &(inteval->stack[((hsi*16848+169200)*1+lsi)*1]), &(inteval->stack[((hsi*13104+30576)*1+lsi)*1]),78);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*32760+11232)*1+lsi)*1]), &(inteval->stack[((hsi*28080+261234)*1+lsi)*1]), &(inteval->stack[((hsi*21840+289314)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+160776)*1+lsi)*1]), &(inteval->stack[((hsi*6084+0)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+289314)*1+lsi)*1]), &(inteval->stack[((hsi*15444+160776)*1+lsi)*1]), &(inteval->stack[((hsi*12870+227304)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+315054)*1+lsi)*1]), &(inteval->stack[((hsi*25740+289314)*1+lsi)*1]), &(inteval->stack[((hsi*21060+240174)*1+lsi)*1]),78);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*42120+350154)*1+lsi)*1]), &(inteval->stack[((hsi*35100+315054)*1+lsi)*1]), &(inteval->stack[((hsi*28080+261234)*1+lsi)*1]),78);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*45864+227304)*1+lsi)*1]), &(inteval->stack[((hsi*42120+350154)*1+lsi)*1]), &(inteval->stack[((hsi*32760+11232)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*116424+44352)*1+lsi)*1]), &(inteval->stack[((hsi*45864+227304)*1+lsi)*1]), &(inteval->stack[((hsi*38808+188496)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*116424+44352)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
