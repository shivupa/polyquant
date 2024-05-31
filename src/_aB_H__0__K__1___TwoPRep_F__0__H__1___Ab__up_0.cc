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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__K__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,48230)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+206990)*1+lsi)*1]), &(inteval->stack[((hsi*1540+36631)*1+lsi)*1]), &(inteval->stack[((hsi*1260+38171)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+210770)*1+lsi)*1]), &(inteval->stack[((hsi*1848+34783)*1+lsi)*1]), &(inteval->stack[((hsi*1540+36631)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+215390)*1+lsi)*1]), &(inteval->stack[((hsi*4620+210770)*1+lsi)*1]), &(inteval->stack[((hsi*3780+206990)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+222950)*1+lsi)*1]), &(inteval->stack[((hsi*2184+32599)*1+lsi)*1]), &(inteval->stack[((hsi*1848+34783)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+228494)*1+lsi)*1]), &(inteval->stack[((hsi*5544+222950)*1+lsi)*1]), &(inteval->stack[((hsi*4620+210770)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+237734)*1+lsi)*1]), &(inteval->stack[((hsi*9240+228494)*1+lsi)*1]), &(inteval->stack[((hsi*7560+215390)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+210770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+38171)*1+lsi)*1]), &(inteval->stack[((hsi*1008+39431)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+250334)*1+lsi)*1]), &(inteval->stack[((hsi*3780+206990)*1+lsi)*1]), &(inteval->stack[((hsi*3024+210770)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+256382)*1+lsi)*1]), &(inteval->stack[((hsi*7560+215390)*1+lsi)*1]), &(inteval->stack[((hsi*6048+250334)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+206990)*1+lsi)*1]), &(inteval->stack[((hsi*12600+237734)*1+lsi)*1]), &(inteval->stack[((hsi*10080+256382)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+250334)*1+lsi)*1]), &(inteval->stack[((hsi*2548+30051)*1+lsi)*1]), &(inteval->stack[((hsi*2184+32599)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+256886)*1+lsi)*1]), &(inteval->stack[((hsi*6552+250334)*1+lsi)*1]), &(inteval->stack[((hsi*5544+222950)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+267974)*1+lsi)*1]), &(inteval->stack[((hsi*11088+256886)*1+lsi)*1]), &(inteval->stack[((hsi*9240+228494)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+283374)*1+lsi)*1]), &(inteval->stack[((hsi*15400+267974)*1+lsi)*1]), &(inteval->stack[((hsi*12600+237734)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+222110)*1+lsi)*1]), &(inteval->stack[((hsi*18900+283374)*1+lsi)*1]), &(inteval->stack[((hsi*15120+206990)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+206990)*1+lsi)*1]), &(inteval->stack[((hsi*1980+25155)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27135)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+30051)*1+lsi)*1]), &(inteval->stack[((hsi*2376+22779)*1+lsi)*1]), &(inteval->stack[((hsi*1980+25155)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+211850)*1+lsi)*1]), &(inteval->stack[((hsi*5940+30051)*1+lsi)*1]), &(inteval->stack[((hsi*4860+206990)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+243278)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19971)*1+lsi)*1]), &(inteval->stack[((hsi*2376+22779)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+250406)*1+lsi)*1]), &(inteval->stack[((hsi*7128+243278)*1+lsi)*1]), &(inteval->stack[((hsi*5940+30051)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+262286)*1+lsi)*1]), &(inteval->stack[((hsi*11880+250406)*1+lsi)*1]), &(inteval->stack[((hsi*9720+211850)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+30051)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27135)*1+lsi)*1]), &(inteval->stack[((hsi*1296+28755)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+278486)*1+lsi)*1]), &(inteval->stack[((hsi*4860+206990)*1+lsi)*1]), &(inteval->stack[((hsi*3888+30051)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+22779)*1+lsi)*1]), &(inteval->stack[((hsi*9720+211850)*1+lsi)*1]), &(inteval->stack[((hsi*7776+278486)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+278486)*1+lsi)*1]), &(inteval->stack[((hsi*16200+262286)*1+lsi)*1]), &(inteval->stack[((hsi*12960+22779)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+22779)*1+lsi)*1]), &(inteval->stack[((hsi*3276+16695)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19971)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+206990)*1+lsi)*1]), &(inteval->stack[((hsi*8424+22779)*1+lsi)*1]), &(inteval->stack[((hsi*7128+243278)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+16695)*1+lsi)*1]), &(inteval->stack[((hsi*14256+206990)*1+lsi)*1]), &(inteval->stack[((hsi*11880+250406)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+297926)*1+lsi)*1]), &(inteval->stack[((hsi*19800+16695)*1+lsi)*1]), &(inteval->stack[((hsi*16200+262286)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+243278)*1+lsi)*1]), &(inteval->stack[((hsi*24300+297926)*1+lsi)*1]), &(inteval->stack[((hsi*19440+278486)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*63504+270494)*1+lsi)*1]), &(inteval->stack[((hsi*27216+243278)*1+lsi)*1]), &(inteval->stack[((hsi*21168+222110)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+16695)*1+lsi)*1]), &(inteval->stack[((hsi*1155+45374)*1+lsi)*1]), &(inteval->stack[((hsi*945+46529)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+19530)*1+lsi)*1]), &(inteval->stack[((hsi*1386+43988)*1+lsi)*1]), &(inteval->stack[((hsi*1155+45374)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+22995)*1+lsi)*1]), &(inteval->stack[((hsi*3465+19530)*1+lsi)*1]), &(inteval->stack[((hsi*2835+16695)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+206990)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42350)*1+lsi)*1]), &(inteval->stack[((hsi*1386+43988)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+28665)*1+lsi)*1]), &(inteval->stack[((hsi*4158+206990)*1+lsi)*1]), &(inteval->stack[((hsi*3465+19530)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+211148)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28665)*1+lsi)*1]), &(inteval->stack[((hsi*5670+22995)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+35595)*1+lsi)*1]), &(inteval->stack[((hsi*945+46529)*1+lsi)*1]), &(inteval->stack[((hsi*756+47474)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+333998)*1+lsi)*1]), &(inteval->stack[((hsi*2835+16695)*1+lsi)*1]), &(inteval->stack[((hsi*2268+35595)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+338534)*1+lsi)*1]), &(inteval->stack[((hsi*5670+22995)*1+lsi)*1]), &(inteval->stack[((hsi*4536+333998)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+16695)*1+lsi)*1]), &(inteval->stack[((hsi*9450+211148)*1+lsi)*1]), &(inteval->stack[((hsi*7560+338534)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+333998)*1+lsi)*1]), &(inteval->stack[((hsi*1911+40439)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42350)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+35595)*1+lsi)*1]), &(inteval->stack[((hsi*4914+333998)*1+lsi)*1]), &(inteval->stack[((hsi*4158+206990)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+333998)*1+lsi)*1]), &(inteval->stack[((hsi*8316+35595)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28665)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+28035)*1+lsi)*1]), &(inteval->stack[((hsi*11550+333998)*1+lsi)*1]), &(inteval->stack[((hsi*9450+211148)*1+lsi)*1]),21);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*15876+333998)*1+lsi)*1]), &(inteval->stack[((hsi*14175+28035)*1+lsi)*1]), &(inteval->stack[((hsi*11340+16695)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*47628+349874)*1+lsi)*1]), &(inteval->stack[((hsi*21168+222110)*1+lsi)*1]), &(inteval->stack[((hsi*15876+333998)*1+lsi)*1]),756);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*95256+397502)*1+lsi)*1]), &(inteval->stack[((hsi*63504+270494)*1+lsi)*1]), &(inteval->stack[((hsi*47628+349874)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+333998)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10575)*1+lsi)*1]), &(inteval->stack[((hsi*2025+13050)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+340073)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10575)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+347498)*1+lsi)*1]), &(inteval->stack[((hsi*7425+340073)*1+lsi)*1]), &(inteval->stack[((hsi*6075+333998)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+359648)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+206990)*1+lsi)*1]), &(inteval->stack[((hsi*8910+359648)*1+lsi)*1]), &(inteval->stack[((hsi*7425+340073)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+16695)*1+lsi)*1]), &(inteval->stack[((hsi*14850+206990)*1+lsi)*1]), &(inteval->stack[((hsi*12150+347498)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+368558)*1+lsi)*1]), &(inteval->stack[((hsi*2025+13050)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15075)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+373418)*1+lsi)*1]), &(inteval->stack[((hsi*6075+333998)*1+lsi)*1]), &(inteval->stack[((hsi*4860+368558)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+221840)*1+lsi)*1]), &(inteval->stack[((hsi*12150+347498)*1+lsi)*1]), &(inteval->stack[((hsi*9720+373418)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+368558)*1+lsi)*1]), &(inteval->stack[((hsi*20250+16695)*1+lsi)*1]), &(inteval->stack[((hsi*16200+221840)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+333998)*1+lsi)*1]), &(inteval->stack[((hsi*4095+0)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+221840)*1+lsi)*1]), &(inteval->stack[((hsi*10530+333998)*1+lsi)*1]), &(inteval->stack[((hsi*8910+359648)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+333998)*1+lsi)*1]), &(inteval->stack[((hsi*17820+221840)*1+lsi)*1]), &(inteval->stack[((hsi*14850+206990)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+206990)*1+lsi)*1]), &(inteval->stack[((hsi*24750+333998)*1+lsi)*1]), &(inteval->stack[((hsi*20250+16695)*1+lsi)*1]),45);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*34020+0)*1+lsi)*1]), &(inteval->stack[((hsi*30375+206990)*1+lsi)*1]), &(inteval->stack[((hsi*24300+368558)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*81648+492758)*1+lsi)*1]), &(inteval->stack[((hsi*34020+0)*1+lsi)*1]), &(inteval->stack[((hsi*27216+243278)*1+lsi)*1]),756);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*127008+574406)*1+lsi)*1]), &(inteval->stack[((hsi*81648+492758)*1+lsi)*1]), &(inteval->stack[((hsi*63504+270494)*1+lsi)*1]),756);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*158760+48230)*1+lsi)*1]), &(inteval->stack[((hsi*127008+574406)*1+lsi)*1]), &(inteval->stack[((hsi*95256+397502)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*158760+48230)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
