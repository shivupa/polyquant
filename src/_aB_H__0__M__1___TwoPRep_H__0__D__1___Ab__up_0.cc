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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hg.h>
#include <HRRPart0bra0ket0hh.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__M__1___TwoPRep_H__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_H__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,49949)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_H__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+195479)*1+lsi)*1]), &(inteval->stack[((hsi*2376+30534)*1+lsi)*1]), &(inteval->stack[((hsi*1848+32910)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+201023)*1+lsi)*1]), &(inteval->stack[((hsi*2970+27564)*1+lsi)*1]), &(inteval->stack[((hsi*2376+30534)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+208151)*1+lsi)*1]), &(inteval->stack[((hsi*7128+201023)*1+lsi)*1]), &(inteval->stack[((hsi*5544+195479)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+219239)*1+lsi)*1]), &(inteval->stack[((hsi*3630+23934)*1+lsi)*1]), &(inteval->stack[((hsi*2970+27564)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+228149)*1+lsi)*1]), &(inteval->stack[((hsi*8910+219239)*1+lsi)*1]), &(inteval->stack[((hsi*7128+201023)*1+lsi)*1]),66);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*18480+242405)*1+lsi)*1]), &(inteval->stack[((hsi*14256+228149)*1+lsi)*1]), &(inteval->stack[((hsi*11088+208151)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+201023)*1+lsi)*1]), &(inteval->stack[((hsi*1848+32910)*1+lsi)*1]), &(inteval->stack[((hsi*1386+34758)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+27564)*1+lsi)*1]), &(inteval->stack[((hsi*5544+195479)*1+lsi)*1]), &(inteval->stack[((hsi*4158+201023)*1+lsi)*1]),66);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+260885)*1+lsi)*1]), &(inteval->stack[((hsi*11088+208151)*1+lsi)*1]), &(inteval->stack[((hsi*8316+27564)*1+lsi)*1]),66);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*20790+195479)*1+lsi)*1]), &(inteval->stack[((hsi*18480+242405)*1+lsi)*1]), &(inteval->stack[((hsi*13860+260885)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+260885)*1+lsi)*1]), &(inteval->stack[((hsi*4356+19578)*1+lsi)*1]), &(inteval->stack[((hsi*3630+23934)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+271775)*1+lsi)*1]), &(inteval->stack[((hsi*10890+260885)*1+lsi)*1]), &(inteval->stack[((hsi*8910+219239)*1+lsi)*1]),66);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+289595)*1+lsi)*1]), &(inteval->stack[((hsi*17820+271775)*1+lsi)*1]), &(inteval->stack[((hsi*14256+228149)*1+lsi)*1]),66);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*27720+260885)*1+lsi)*1]), &(inteval->stack[((hsi*23760+289595)*1+lsi)*1]), &(inteval->stack[((hsi*18480+242405)*1+lsi)*1]),66);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*29106+216269)*1+lsi)*1]), &(inteval->stack[((hsi*27720+260885)*1+lsi)*1]), &(inteval->stack[((hsi*20790+195479)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+195479)*1+lsi)*1]), &(inteval->stack[((hsi*1980+45274)*1+lsi)*1]), &(inteval->stack[((hsi*1540+47254)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+19578)*1+lsi)*1]), &(inteval->stack[((hsi*2475+42799)*1+lsi)*1]), &(inteval->stack[((hsi*1980+45274)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+200099)*1+lsi)*1]), &(inteval->stack[((hsi*5940+19578)*1+lsi)*1]), &(inteval->stack[((hsi*4620+195479)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+25518)*1+lsi)*1]), &(inteval->stack[((hsi*3025+39774)*1+lsi)*1]), &(inteval->stack[((hsi*2475+42799)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+245375)*1+lsi)*1]), &(inteval->stack[((hsi*7425+25518)*1+lsi)*1]), &(inteval->stack[((hsi*5940+19578)*1+lsi)*1]),55);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*15400+257255)*1+lsi)*1]), &(inteval->stack[((hsi*11880+245375)*1+lsi)*1]), &(inteval->stack[((hsi*9240+200099)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+209339)*1+lsi)*1]), &(inteval->stack[((hsi*1540+47254)*1+lsi)*1]), &(inteval->stack[((hsi*1155+48794)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+42799)*1+lsi)*1]), &(inteval->stack[((hsi*4620+195479)*1+lsi)*1]), &(inteval->stack[((hsi*3465+209339)*1+lsi)*1]),55);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*11550+272655)*1+lsi)*1]), &(inteval->stack[((hsi*9240+200099)*1+lsi)*1]), &(inteval->stack[((hsi*6930+42799)*1+lsi)*1]),55);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*17325+195479)*1+lsi)*1]), &(inteval->stack[((hsi*15400+257255)*1+lsi)*1]), &(inteval->stack[((hsi*11550+272655)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+272655)*1+lsi)*1]), &(inteval->stack[((hsi*3630+36144)*1+lsi)*1]), &(inteval->stack[((hsi*3025+39774)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+32943)*1+lsi)*1]), &(inteval->stack[((hsi*9075+272655)*1+lsi)*1]), &(inteval->stack[((hsi*7425+25518)*1+lsi)*1]),55);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+272655)*1+lsi)*1]), &(inteval->stack[((hsi*14850+32943)*1+lsi)*1]), &(inteval->stack[((hsi*11880+245375)*1+lsi)*1]),55);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+19578)*1+lsi)*1]), &(inteval->stack[((hsi*19800+272655)*1+lsi)*1]), &(inteval->stack[((hsi*15400+257255)*1+lsi)*1]),55);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*24255+245375)*1+lsi)*1]), &(inteval->stack[((hsi*23100+19578)*1+lsi)*1]), &(inteval->stack[((hsi*17325+195479)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*72765+269630)*1+lsi)*1]), &(inteval->stack[((hsi*29106+216269)*1+lsi)*1]), &(inteval->stack[((hsi*24255+245375)*1+lsi)*1]),441);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+19578)*1+lsi)*1]), &(inteval->stack[((hsi*2808+12948)*1+lsi)*1]), &(inteval->stack[((hsi*2184+15756)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+245375)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9438)*1+lsi)*1]), &(inteval->stack[((hsi*2808+12948)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+26130)*1+lsi)*1]), &(inteval->stack[((hsi*8424+245375)*1+lsi)*1]), &(inteval->stack[((hsi*6552+19578)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+195479)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5148)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9438)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+342395)*1+lsi)*1]), &(inteval->stack[((hsi*10530+195479)*1+lsi)*1]), &(inteval->stack[((hsi*8424+245375)*1+lsi)*1]),78);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*21840+245375)*1+lsi)*1]), &(inteval->stack[((hsi*16848+342395)*1+lsi)*1]), &(inteval->stack[((hsi*13104+26130)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+39234)*1+lsi)*1]), &(inteval->stack[((hsi*2184+15756)*1+lsi)*1]), &(inteval->stack[((hsi*1638+17940)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+206009)*1+lsi)*1]), &(inteval->stack[((hsi*6552+19578)*1+lsi)*1]), &(inteval->stack[((hsi*4914+39234)*1+lsi)*1]),78);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*16380+9438)*1+lsi)*1]), &(inteval->stack[((hsi*13104+26130)*1+lsi)*1]), &(inteval->stack[((hsi*9828+206009)*1+lsi)*1]),78);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*24570+359243)*1+lsi)*1]), &(inteval->stack[((hsi*21840+245375)*1+lsi)*1]), &(inteval->stack[((hsi*16380+9438)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+9438)*1+lsi)*1]), &(inteval->stack[((hsi*5148+0)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5148)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+22308)*1+lsi)*1]), &(inteval->stack[((hsi*12870+9438)*1+lsi)*1]), &(inteval->stack[((hsi*10530+195479)*1+lsi)*1]),78);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+383813)*1+lsi)*1]), &(inteval->stack[((hsi*21060+22308)*1+lsi)*1]), &(inteval->stack[((hsi*16848+342395)*1+lsi)*1]),78);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*32760+0)*1+lsi)*1]), &(inteval->stack[((hsi*28080+383813)*1+lsi)*1]), &(inteval->stack[((hsi*21840+245375)*1+lsi)*1]),78);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*34398+383813)*1+lsi)*1]), &(inteval->stack[((hsi*32760+0)*1+lsi)*1]), &(inteval->stack[((hsi*24570+359243)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*87318+418211)*1+lsi)*1]), &(inteval->stack[((hsi*34398+383813)*1+lsi)*1]), &(inteval->stack[((hsi*29106+216269)*1+lsi)*1]),441);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*145530+49949)*1+lsi)*1]), &(inteval->stack[((hsi*87318+418211)*1+lsi)*1]), &(inteval->stack[((hsi*72765+269630)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*145530+49949)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
