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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ih.h>
#include <HRRPart0bra0ket0ii.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdl.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfk.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgi.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0phh.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pig.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkf.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0pld.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0pmp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
#include <HRRPart1bra0ket0ppm.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psm.h>
#include <HRRPart1bra0ket0psp.h>
#include <HRRPart1bra0ket0psps.h>
#include <_aB_I__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,618849)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*3276+566961)*1+lsi)*1]), &(inteval->stack[((hsi*2808+570237)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+4042377)*1+lsi)*1]), &(inteval->stack[((hsi*3780+563181)*1+lsi)*1]), &(inteval->stack[((hsi*3276+566961)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+4052205)*1+lsi)*1]), &(inteval->stack[((hsi*9828+4042377)*1+lsi)*1]), &(inteval->stack[((hsi*8424+4033953)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+4069053)*1+lsi)*1]), &(inteval->stack[((hsi*4320+558861)*1+lsi)*1]), &(inteval->stack[((hsi*3780+563181)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+4080393)*1+lsi)*1]), &(inteval->stack[((hsi*11340+4069053)*1+lsi)*1]), &(inteval->stack[((hsi*9828+4042377)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+4100049)*1+lsi)*1]), &(inteval->stack[((hsi*19656+4080393)*1+lsi)*1]), &(inteval->stack[((hsi*16848+4052205)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+4128129)*1+lsi)*1]), &(inteval->stack[((hsi*4896+553965)*1+lsi)*1]), &(inteval->stack[((hsi*4320+558861)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+4141089)*1+lsi)*1]), &(inteval->stack[((hsi*12960+4128129)*1+lsi)*1]), &(inteval->stack[((hsi*11340+4069053)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+4163769)*1+lsi)*1]), &(inteval->stack[((hsi*22680+4141089)*1+lsi)*1]), &(inteval->stack[((hsi*19656+4080393)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+4196529)*1+lsi)*1]), &(inteval->stack[((hsi*32760+4163769)*1+lsi)*1]), &(inteval->stack[((hsi*28080+4100049)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+4069053)*1+lsi)*1]), &(inteval->stack[((hsi*5508+548457)*1+lsi)*1]), &(inteval->stack[((hsi*4896+553965)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+4238649)*1+lsi)*1]), &(inteval->stack[((hsi*14688+4069053)*1+lsi)*1]), &(inteval->stack[((hsi*12960+4128129)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+4264569)*1+lsi)*1]), &(inteval->stack[((hsi*25920+4238649)*1+lsi)*1]), &(inteval->stack[((hsi*22680+4141089)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+4302369)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4264569)*1+lsi)*1]), &(inteval->stack[((hsi*32760+4163769)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+4128129)*1+lsi)*1]), &(inteval->stack[((hsi*49140+4302369)*1+lsi)*1]), &(inteval->stack[((hsi*42120+4196529)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+4351509)*1+lsi)*1]), &(inteval->stack[((hsi*6156+542301)*1+lsi)*1]), &(inteval->stack[((hsi*5508+548457)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+4368033)*1+lsi)*1]), &(inteval->stack[((hsi*16524+4351509)*1+lsi)*1]), &(inteval->stack[((hsi*14688+4069053)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+4397409)*1+lsi)*1]), &(inteval->stack[((hsi*29376+4368033)*1+lsi)*1]), &(inteval->stack[((hsi*25920+4238649)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+4440609)*1+lsi)*1]), &(inteval->stack[((hsi*43200+4397409)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4264569)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+4497309)*1+lsi)*1]), &(inteval->stack[((hsi*56700+4440609)*1+lsi)*1]), &(inteval->stack[((hsi*49140+4302369)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+4238649)*1+lsi)*1]), &(inteval->stack[((hsi*68796+4497309)*1+lsi)*1]), &(inteval->stack[((hsi*58968+4128129)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+4317273)*1+lsi)*1]), &(inteval->stack[((hsi*6840+535461)*1+lsi)*1]), &(inteval->stack[((hsi*6156+542301)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+4566105)*1+lsi)*1]), &(inteval->stack[((hsi*18468+4317273)*1+lsi)*1]), &(inteval->stack[((hsi*16524+4351509)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+4599153)*1+lsi)*1]), &(inteval->stack[((hsi*33048+4566105)*1+lsi)*1]), &(inteval->stack[((hsi*29376+4368033)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+4648113)*1+lsi)*1]), &(inteval->stack[((hsi*48960+4599153)*1+lsi)*1]), &(inteval->stack[((hsi*43200+4397409)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+4335741)*1+lsi)*1]), &(inteval->stack[((hsi*64800+4648113)*1+lsi)*1]), &(inteval->stack[((hsi*56700+4440609)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+4712913)*1+lsi)*1]), &(inteval->stack[((hsi*79380+4335741)*1+lsi)*1]), &(inteval->stack[((hsi*68796+4497309)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+4415121)*1+lsi)*1]), &(inteval->stack[((hsi*91728+4712913)*1+lsi)*1]), &(inteval->stack[((hsi*78624+4238649)*1+lsi)*1]),36);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*20520+4516209)*1+lsi)*1]), &(inteval->stack[((hsi*7560+527901)*1+lsi)*1]), &(inteval->stack[((hsi*6840+535461)*1+lsi)*1]),36);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*36936+4804641)*1+lsi)*1]), &(inteval->stack[((hsi*20520+4516209)*1+lsi)*1]), &(inteval->stack[((hsi*18468+4317273)*1+lsi)*1]),36);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*55080+4841577)*1+lsi)*1]), &(inteval->stack[((hsi*36936+4804641)*1+lsi)*1]), &(inteval->stack[((hsi*33048+4566105)*1+lsi)*1]),36);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*73440+4896657)*1+lsi)*1]), &(inteval->stack[((hsi*55080+4841577)*1+lsi)*1]), &(inteval->stack[((hsi*48960+4599153)*1+lsi)*1]),36);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*90720+4536729)*1+lsi)*1]), &(inteval->stack[((hsi*73440+4896657)*1+lsi)*1]), &(inteval->stack[((hsi*64800+4648113)*1+lsi)*1]),36);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*105840+4970097)*1+lsi)*1]), &(inteval->stack[((hsi*90720+4536729)*1+lsi)*1]), &(inteval->stack[((hsi*79380+4335741)*1+lsi)*1]),36);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*117936+5075937)*1+lsi)*1]), &(inteval->stack[((hsi*105840+4970097)*1+lsi)*1]), &(inteval->stack[((hsi*91728+4712913)*1+lsi)*1]),36);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*126360+4627449)*1+lsi)*1]), &(inteval->stack[((hsi*117936+5075937)*1+lsi)*1]), &(inteval->stack[((hsi*101088+4415121)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+4317273)*1+lsi)*1]), &(inteval->stack[((hsi*2808+570237)*1+lsi)*1]), &(inteval->stack[((hsi*2376+573045)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+4324401)*1+lsi)*1]), &(inteval->stack[((hsi*8424+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*7128+4317273)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+4338657)*1+lsi)*1]), &(inteval->stack[((hsi*16848+4052205)*1+lsi)*1]), &(inteval->stack[((hsi*14256+4324401)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*28080+4100049)*1+lsi)*1]), &(inteval->stack[((hsi*23760+4338657)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+4317273)*1+lsi)*1]), &(inteval->stack[((hsi*42120+4196529)*1+lsi)*1]), &(inteval->stack[((hsi*35640+4033953)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*58968+4128129)*1+lsi)*1]), &(inteval->stack[((hsi*49896+4317273)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+4100481)*1+lsi)*1]), &(inteval->stack[((hsi*78624+4238649)*1+lsi)*1]), &(inteval->stack[((hsi*66528+4033953)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+4186017)*1+lsi)*1]), &(inteval->stack[((hsi*101088+4415121)*1+lsi)*1]), &(inteval->stack[((hsi*85536+4100481)*1+lsi)*1]),36);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*130680+4292937)*1+lsi)*1]), &(inteval->stack[((hsi*126360+4627449)*1+lsi)*1]), &(inteval->stack[((hsi*106920+4186017)*1+lsi)*1]),36);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*22680+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*8316+519585)*1+lsi)*1]), &(inteval->stack[((hsi*7560+527901)*1+lsi)*1]),36);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*41040+4056633)*1+lsi)*1]), &(inteval->stack[((hsi*22680+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*20520+4516209)*1+lsi)*1]),36);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*61560+4097673)*1+lsi)*1]), &(inteval->stack[((hsi*41040+4056633)*1+lsi)*1]), &(inteval->stack[((hsi*36936+4804641)*1+lsi)*1]),36);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*82620+4159233)*1+lsi)*1]), &(inteval->stack[((hsi*61560+4097673)*1+lsi)*1]), &(inteval->stack[((hsi*55080+4841577)*1+lsi)*1]),36);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*102816+4753809)*1+lsi)*1]), &(inteval->stack[((hsi*82620+4159233)*1+lsi)*1]), &(inteval->stack[((hsi*73440+4896657)*1+lsi)*1]),36);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*120960+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*102816+4753809)*1+lsi)*1]), &(inteval->stack[((hsi*90720+4536729)*1+lsi)*1]),36);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*136080+4753809)*1+lsi)*1]), &(inteval->stack[((hsi*120960+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*105840+4970097)*1+lsi)*1]),36);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*147420+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*136080+4753809)*1+lsi)*1]), &(inteval->stack[((hsi*117936+5075937)*1+lsi)*1]),36);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*154440+4423617)*1+lsi)*1]), &(inteval->stack[((hsi*147420+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*126360+4627449)*1+lsi)*1]),36);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*156816+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*154440+4423617)*1+lsi)*1]), &(inteval->stack[((hsi*130680+4292937)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+519585)*1+lsi)*1]), &(inteval->stack[((hsi*4095+509010)*1+lsi)*1]), &(inteval->stack[((hsi*3510+513105)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+530115)*1+lsi)*1]), &(inteval->stack[((hsi*4725+504285)*1+lsi)*1]), &(inteval->stack[((hsi*4095+509010)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+542400)*1+lsi)*1]), &(inteval->stack[((hsi*12285+530115)*1+lsi)*1]), &(inteval->stack[((hsi*10530+519585)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*5400+498885)*1+lsi)*1]), &(inteval->stack[((hsi*4725+504285)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+4204944)*1+lsi)*1]), &(inteval->stack[((hsi*14175+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*12285+530115)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+4229514)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4204944)*1+lsi)*1]), &(inteval->stack[((hsi*21060+542400)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+4264614)*1+lsi)*1]), &(inteval->stack[((hsi*6120+492765)*1+lsi)*1]), &(inteval->stack[((hsi*5400+498885)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+4280814)*1+lsi)*1]), &(inteval->stack[((hsi*16200+4264614)*1+lsi)*1]), &(inteval->stack[((hsi*14175+4190769)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+4309164)*1+lsi)*1]), &(inteval->stack[((hsi*28350+4280814)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4204944)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+4350114)*1+lsi)*1]), &(inteval->stack[((hsi*40950+4309164)*1+lsi)*1]), &(inteval->stack[((hsi*35100+4229514)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*6885+485880)*1+lsi)*1]), &(inteval->stack[((hsi*6120+492765)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+4402764)*1+lsi)*1]), &(inteval->stack[((hsi*18360+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*16200+4264614)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+4435164)*1+lsi)*1]), &(inteval->stack[((hsi*32400+4402764)*1+lsi)*1]), &(inteval->stack[((hsi*28350+4280814)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+4482414)*1+lsi)*1]), &(inteval->stack[((hsi*47250+4435164)*1+lsi)*1]), &(inteval->stack[((hsi*40950+4309164)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+4264614)*1+lsi)*1]), &(inteval->stack[((hsi*61425+4482414)*1+lsi)*1]), &(inteval->stack[((hsi*52650+4350114)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+4543839)*1+lsi)*1]), &(inteval->stack[((hsi*7695+478185)*1+lsi)*1]), &(inteval->stack[((hsi*6885+485880)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+4564494)*1+lsi)*1]), &(inteval->stack[((hsi*20655+4543839)*1+lsi)*1]), &(inteval->stack[((hsi*18360+4190769)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+4601214)*1+lsi)*1]), &(inteval->stack[((hsi*36720+4564494)*1+lsi)*1]), &(inteval->stack[((hsi*32400+4402764)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+4655214)*1+lsi)*1]), &(inteval->stack[((hsi*54000+4601214)*1+lsi)*1]), &(inteval->stack[((hsi*47250+4435164)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+4726089)*1+lsi)*1]), &(inteval->stack[((hsi*70875+4655214)*1+lsi)*1]), &(inteval->stack[((hsi*61425+4482414)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+4402764)*1+lsi)*1]), &(inteval->stack[((hsi*85995+4726089)*1+lsi)*1]), &(inteval->stack[((hsi*73710+4264614)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+4501044)*1+lsi)*1]), &(inteval->stack[((hsi*8550+469635)*1+lsi)*1]), &(inteval->stack[((hsi*7695+478185)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+4812084)*1+lsi)*1]), &(inteval->stack[((hsi*23085+4501044)*1+lsi)*1]), &(inteval->stack[((hsi*20655+4543839)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+4853394)*1+lsi)*1]), &(inteval->stack[((hsi*41310+4812084)*1+lsi)*1]), &(inteval->stack[((hsi*36720+4564494)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+4914594)*1+lsi)*1]), &(inteval->stack[((hsi*61200+4853394)*1+lsi)*1]), &(inteval->stack[((hsi*54000+4601214)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+4524129)*1+lsi)*1]), &(inteval->stack[((hsi*81000+4914594)*1+lsi)*1]), &(inteval->stack[((hsi*70875+4655214)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+4995594)*1+lsi)*1]), &(inteval->stack[((hsi*99225+4524129)*1+lsi)*1]), &(inteval->stack[((hsi*85995+4726089)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+4623354)*1+lsi)*1]), &(inteval->stack[((hsi*114660+4995594)*1+lsi)*1]), &(inteval->stack[((hsi*98280+4402764)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+4749714)*1+lsi)*1]), &(inteval->stack[((hsi*9450+460185)*1+lsi)*1]), &(inteval->stack[((hsi*8550+469635)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+5110254)*1+lsi)*1]), &(inteval->stack[((hsi*25650+4749714)*1+lsi)*1]), &(inteval->stack[((hsi*23085+4501044)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+5156424)*1+lsi)*1]), &(inteval->stack[((hsi*46170+5110254)*1+lsi)*1]), &(inteval->stack[((hsi*41310+4812084)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+5225274)*1+lsi)*1]), &(inteval->stack[((hsi*68850+5156424)*1+lsi)*1]), &(inteval->stack[((hsi*61200+4853394)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+4775364)*1+lsi)*1]), &(inteval->stack[((hsi*91800+5225274)*1+lsi)*1]), &(inteval->stack[((hsi*81000+4914594)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+5317074)*1+lsi)*1]), &(inteval->stack[((hsi*113400+4775364)*1+lsi)*1]), &(inteval->stack[((hsi*99225+4524129)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+5449374)*1+lsi)*1]), &(inteval->stack[((hsi*132300+5317074)*1+lsi)*1]), &(inteval->stack[((hsi*114660+4995594)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+4888764)*1+lsi)*1]), &(inteval->stack[((hsi*147420+5449374)*1+lsi)*1]), &(inteval->stack[((hsi*126360+4623354)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+4501044)*1+lsi)*1]), &(inteval->stack[((hsi*3510+513105)*1+lsi)*1]), &(inteval->stack[((hsi*2970+516615)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+4509954)*1+lsi)*1]), &(inteval->stack[((hsi*10530+519585)*1+lsi)*1]), &(inteval->stack[((hsi*8910+4501044)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+4527774)*1+lsi)*1]), &(inteval->stack[((hsi*21060+542400)*1+lsi)*1]), &(inteval->stack[((hsi*17820+4509954)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+469635)*1+lsi)*1]), &(inteval->stack[((hsi*35100+4229514)*1+lsi)*1]), &(inteval->stack[((hsi*29700+4527774)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+4501044)*1+lsi)*1]), &(inteval->stack[((hsi*52650+4350114)*1+lsi)*1]), &(inteval->stack[((hsi*44550+469635)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+469635)*1+lsi)*1]), &(inteval->stack[((hsi*73710+4264614)*1+lsi)*1]), &(inteval->stack[((hsi*62370+4501044)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*98280+4402764)*1+lsi)*1]), &(inteval->stack[((hsi*83160+469635)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+4297689)*1+lsi)*1]), &(inteval->stack[((hsi*126360+4623354)*1+lsi)*1]), &(inteval->stack[((hsi*106920+4190769)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+4431339)*1+lsi)*1]), &(inteval->stack[((hsi*157950+4888764)*1+lsi)*1]), &(inteval->stack[((hsi*133650+4297689)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*10395+449790)*1+lsi)*1]), &(inteval->stack[((hsi*9450+460185)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+4219119)*1+lsi)*1]), &(inteval->stack[((hsi*28350+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*25650+4749714)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*51300+4219119)*1+lsi)*1]), &(inteval->stack[((hsi*46170+5110254)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*76950+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*68850+5156424)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*103275+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*91800+5225274)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+5046714)*1+lsi)*1]), &(inteval->stack[((hsi*128520+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*113400+4775364)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*151200+5046714)*1+lsi)*1]), &(inteval->stack[((hsi*132300+5317074)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+5046714)*1+lsi)*1]), &(inteval->stack[((hsi*170100+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*147420+5449374)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*184275+5046714)*1+lsi)*1]), &(inteval->stack[((hsi*157950+4888764)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*193050+4594689)*1+lsi)*1]), &(inteval->stack[((hsi*163350+4431339)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*470448+4386789)*1+lsi)*1]), &(inteval->stack[((hsi*196020+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*156816+4033953)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+449790)*1+lsi)*1]), &(inteval->stack[((hsi*5005+436865)*1+lsi)*1]), &(inteval->stack[((hsi*4290+441870)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+462660)*1+lsi)*1]), &(inteval->stack[((hsi*5775+431090)*1+lsi)*1]), &(inteval->stack[((hsi*5005+436865)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+477675)*1+lsi)*1]), &(inteval->stack[((hsi*15015+462660)*1+lsi)*1]), &(inteval->stack[((hsi*12870+449790)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+503415)*1+lsi)*1]), &(inteval->stack[((hsi*6600+424490)*1+lsi)*1]), &(inteval->stack[((hsi*5775+431090)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+520740)*1+lsi)*1]), &(inteval->stack[((hsi*17325+503415)*1+lsi)*1]), &(inteval->stack[((hsi*15015+462660)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*30030+520740)*1+lsi)*1]), &(inteval->stack[((hsi*25740+477675)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+550770)*1+lsi)*1]), &(inteval->stack[((hsi*7480+417010)*1+lsi)*1]), &(inteval->stack[((hsi*6600+424490)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+4900137)*1+lsi)*1]), &(inteval->stack[((hsi*19800+550770)*1+lsi)*1]), &(inteval->stack[((hsi*17325+503415)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+4934787)*1+lsi)*1]), &(inteval->stack[((hsi*34650+4900137)*1+lsi)*1]), &(inteval->stack[((hsi*30030+520740)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+4984837)*1+lsi)*1]), &(inteval->stack[((hsi*50050+4934787)*1+lsi)*1]), &(inteval->stack[((hsi*42900+4857237)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+503415)*1+lsi)*1]), &(inteval->stack[((hsi*8415+408595)*1+lsi)*1]), &(inteval->stack[((hsi*7480+417010)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+5049187)*1+lsi)*1]), &(inteval->stack[((hsi*22440+503415)*1+lsi)*1]), &(inteval->stack[((hsi*19800+550770)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+5088787)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5049187)*1+lsi)*1]), &(inteval->stack[((hsi*34650+4900137)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+5146537)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5088787)*1+lsi)*1]), &(inteval->stack[((hsi*50050+4934787)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+5221612)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5146537)*1+lsi)*1]), &(inteval->stack[((hsi*64350+4984837)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+4900137)*1+lsi)*1]), &(inteval->stack[((hsi*9405+399190)*1+lsi)*1]), &(inteval->stack[((hsi*8415+408595)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+4925382)*1+lsi)*1]), &(inteval->stack[((hsi*25245+4900137)*1+lsi)*1]), &(inteval->stack[((hsi*22440+503415)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+503415)*1+lsi)*1]), &(inteval->stack[((hsi*44880+4925382)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5049187)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+5311702)*1+lsi)*1]), &(inteval->stack[((hsi*66000+503415)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5088787)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+5398327)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5311702)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5146537)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+5049187)*1+lsi)*1]), &(inteval->stack[((hsi*105105+5398327)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5221612)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+5169307)*1+lsi)*1]), &(inteval->stack[((hsi*10450+388740)*1+lsi)*1]), &(inteval->stack[((hsi*9405+399190)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+5503432)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5169307)*1+lsi)*1]), &(inteval->stack[((hsi*25245+4900137)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+5553922)*1+lsi)*1]), &(inteval->stack[((hsi*50490+5503432)*1+lsi)*1]), &(inteval->stack[((hsi*44880+4925382)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+5628722)*1+lsi)*1]), &(inteval->stack[((hsi*74800+5553922)*1+lsi)*1]), &(inteval->stack[((hsi*66000+503415)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+5727722)*1+lsi)*1]), &(inteval->stack[((hsi*99000+5628722)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5311702)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+5848997)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5727722)*1+lsi)*1]), &(inteval->stack[((hsi*105105+5398327)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+5311702)*1+lsi)*1]), &(inteval->stack[((hsi*140140+5848997)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5049187)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+4900137)*1+lsi)*1]), &(inteval->stack[((hsi*11550+377190)*1+lsi)*1]), &(inteval->stack[((hsi*10450+388740)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+503415)*1+lsi)*1]), &(inteval->stack[((hsi*31350+4900137)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5169307)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+5989137)*1+lsi)*1]), &(inteval->stack[((hsi*56430+503415)*1+lsi)*1]), &(inteval->stack[((hsi*50490+5503432)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+6073287)*1+lsi)*1]), &(inteval->stack[((hsi*84150+5989137)*1+lsi)*1]), &(inteval->stack[((hsi*74800+5553922)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+5466142)*1+lsi)*1]), &(inteval->stack[((hsi*112200+6073287)*1+lsi)*1]), &(inteval->stack[((hsi*99000+5628722)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+6185487)*1+lsi)*1]), &(inteval->stack[((hsi*138600+5466142)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5727722)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+5604742)*1+lsi)*1]), &(inteval->stack[((hsi*161700+6185487)*1+lsi)*1]), &(inteval->stack[((hsi*140140+5848997)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+5784922)*1+lsi)*1]), &(inteval->stack[((hsi*180180+5604742)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5311702)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+4931487)*1+lsi)*1]), &(inteval->stack[((hsi*4290+441870)*1+lsi)*1]), &(inteval->stack[((hsi*3630+446160)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+388740)*1+lsi)*1]), &(inteval->stack[((hsi*12870+449790)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4931487)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+410520)*1+lsi)*1]), &(inteval->stack[((hsi*25740+477675)*1+lsi)*1]), &(inteval->stack[((hsi*21780+388740)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+446820)*1+lsi)*1]), &(inteval->stack[((hsi*42900+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*36300+410520)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+6347187)*1+lsi)*1]), &(inteval->stack[((hsi*64350+4984837)*1+lsi)*1]), &(inteval->stack[((hsi*54450+446820)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+4931487)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5221612)*1+lsi)*1]), &(inteval->stack[((hsi*76230+6347187)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+5169307)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5049187)*1+lsi)*1]), &(inteval->stack[((hsi*101640+4931487)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+4931487)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5311702)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5169307)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+5094837)*1+lsi)*1]), &(inteval->stack[((hsi*193050+5784922)*1+lsi)*1]), &(inteval->stack[((hsi*163350+4931487)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*12705+364485)*1+lsi)*1]), &(inteval->stack[((hsi*11550+377190)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+4931487)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*31350+4900137)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*62700+4931487)*1+lsi)*1]), &(inteval->stack[((hsi*56430+503415)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*94050+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*84150+5989137)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+364485)*1+lsi)*1]), &(inteval->stack[((hsi*126225+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*112200+6073287)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*157080+364485)*1+lsi)*1]), &(inteval->stack[((hsi*138600+5466142)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*184800+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*161700+6185487)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*207900+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*180180+5604742)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*225225+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*193050+5784922)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+5530437)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5294487)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5094837)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*239580+5530437)*1+lsi)*1]), &(inteval->stack[((hsi*196020+4190769)*1+lsi)*1]),4356);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*940896+5770017)*1+lsi)*1]), &(inteval->stack[((hsi*588060+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*470448+4386789)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+364485)*1+lsi)*1]), &(inteval->stack[((hsi*6006+348975)*1+lsi)*1]), &(inteval->stack[((hsi*5148+354981)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*6930+342045)*1+lsi)*1]), &(inteval->stack[((hsi*6006+348975)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+379929)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*15444+364485)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+4208787)*1+lsi)*1]), &(inteval->stack[((hsi*7920+334125)*1+lsi)*1]), &(inteval->stack[((hsi*6930+342045)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+410817)*1+lsi)*1]), &(inteval->stack[((hsi*20790+4208787)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4190769)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+4229577)*1+lsi)*1]), &(inteval->stack[((hsi*36036+410817)*1+lsi)*1]), &(inteval->stack[((hsi*30888+379929)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+446853)*1+lsi)*1]), &(inteval->stack[((hsi*8976+325149)*1+lsi)*1]), &(inteval->stack[((hsi*7920+334125)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+4281057)*1+lsi)*1]), &(inteval->stack[((hsi*23760+446853)*1+lsi)*1]), &(inteval->stack[((hsi*20790+4208787)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+470613)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4281057)*1+lsi)*1]), &(inteval->stack[((hsi*36036+410817)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+5445297)*1+lsi)*1]), &(inteval->stack[((hsi*60060+470613)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4229577)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+4322637)*1+lsi)*1]), &(inteval->stack[((hsi*10098+315051)*1+lsi)*1]), &(inteval->stack[((hsi*8976+325149)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*26928+4322637)*1+lsi)*1]), &(inteval->stack[((hsi*23760+446853)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+6758433)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4281057)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6827733)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6758433)*1+lsi)*1]), &(inteval->stack[((hsi*60060+470613)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+410817)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6827733)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5445297)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+518925)*1+lsi)*1]), &(inteval->stack[((hsi*11286+303765)*1+lsi)*1]), &(inteval->stack[((hsi*10098+315051)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+6917823)*1+lsi)*1]), &(inteval->stack[((hsi*30294+518925)*1+lsi)*1]), &(inteval->stack[((hsi*26928+4322637)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+4281057)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6917823)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6710913)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+6971679)*1+lsi)*1]), &(inteval->stack[((hsi*79200+4281057)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6758433)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+7075629)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6971679)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6827733)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7075629)*1+lsi)*1]), &(inteval->stack[((hsi*108108+410817)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+6855057)*1+lsi)*1]), &(inteval->stack[((hsi*12540+291225)*1+lsi)*1]), &(inteval->stack[((hsi*11286+303765)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+7201755)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6855057)*1+lsi)*1]), &(inteval->stack[((hsi*30294+518925)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+7262343)*1+lsi)*1]), &(inteval->stack[((hsi*60588+7201755)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6917823)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+7352103)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7262343)*1+lsi)*1]), &(inteval->stack[((hsi*79200+4281057)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+7470903)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7352103)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6971679)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+6888915)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7470903)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7075629)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+7616433)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6888915)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6710913)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+7057083)*1+lsi)*1]), &(inteval->stack[((hsi*13860+277365)*1+lsi)*1]), &(inteval->stack[((hsi*12540+291225)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+7094703)*1+lsi)*1]), &(inteval->stack[((hsi*37620+7057083)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6855057)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+4281057)*1+lsi)*1]), &(inteval->stack[((hsi*67716+7094703)*1+lsi)*1]), &(inteval->stack[((hsi*60588+7201755)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+7801761)*1+lsi)*1]), &(inteval->stack[((hsi*100980+4281057)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7262343)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+7162419)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7801761)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7352103)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+7936401)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7162419)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7470903)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+7328739)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7936401)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6888915)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+8130441)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7328739)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7616433)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+6855057)*1+lsi)*1]), &(inteval->stack[((hsi*5148+354981)*1+lsi)*1]), &(inteval->stack[((hsi*4356+360129)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+6868125)*1+lsi)*1]), &(inteval->stack[((hsi*15444+364485)*1+lsi)*1]), &(inteval->stack[((hsi*13068+6855057)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+6894261)*1+lsi)*1]), &(inteval->stack[((hsi*30888+379929)*1+lsi)*1]), &(inteval->stack[((hsi*26136+6868125)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+291225)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4229577)*1+lsi)*1]), &(inteval->stack[((hsi*43560+6894261)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+6855057)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5445297)*1+lsi)*1]), &(inteval->stack[((hsi*65340+291225)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+8362101)*1+lsi)*1]), &(inteval->stack[((hsi*108108+410817)*1+lsi)*1]), &(inteval->stack[((hsi*91476+6855057)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+291225)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*121968+8362101)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7616433)*1+lsi)*1]), &(inteval->stack[((hsi*156816+291225)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+291225)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8130441)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6710913)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*15246+262119)*1+lsi)*1]), &(inteval->stack[((hsi*13860+277365)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+6752493)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*37620+7057083)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+6827733)*1+lsi)*1]), &(inteval->stack[((hsi*75240+6752493)*1+lsi)*1]), &(inteval->stack[((hsi*67716+7094703)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+7544955)*1+lsi)*1]), &(inteval->stack[((hsi*112860+6827733)*1+lsi)*1]), &(inteval->stack[((hsi*100980+4281057)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*151470+7544955)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7801761)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+7544955)*1+lsi)*1]), &(inteval->stack[((hsi*188496+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7162419)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*221760+7544955)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7936401)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+7544955)*1+lsi)*1]), &(inteval->stack[((hsi*249480+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7328739)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7544955)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8130441)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+6994053)*1+lsi)*1]), &(inteval->stack[((hsi*283140+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*239580+291225)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+7281549)*1+lsi)*1]), &(inteval->stack[((hsi*287496+6994053)*1+lsi)*1]), &(inteval->stack[((hsi*239580+5530437)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+8000289)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7281549)*1+lsi)*1]), &(inteval->stack[((hsi*588060+4857237)*1+lsi)*1]),4356);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*1568160+9176409)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+8000289)*1+lsi)*1]), &(inteval->stack[((hsi*940896+5770017)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*7098+243789)*1+lsi)*1]), &(inteval->stack[((hsi*6084+250887)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+4875489)*1+lsi)*1]), &(inteval->stack[((hsi*8190+235599)*1+lsi)*1]), &(inteval->stack[((hsi*7098+243789)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+4896783)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4875489)*1+lsi)*1]), &(inteval->stack[((hsi*18252+4857237)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+4933287)*1+lsi)*1]), &(inteval->stack[((hsi*9360+226239)*1+lsi)*1]), &(inteval->stack[((hsi*8190+235599)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+4957857)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4933287)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4875489)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+5000445)*1+lsi)*1]), &(inteval->stack[((hsi*42588+4957857)*1+lsi)*1]), &(inteval->stack[((hsi*36504+4896783)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+5061285)*1+lsi)*1]), &(inteval->stack[((hsi*10608+215631)*1+lsi)*1]), &(inteval->stack[((hsi*9360+226239)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+5089365)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5061285)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4933287)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+5138505)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5089365)*1+lsi)*1]), &(inteval->stack[((hsi*42588+4957857)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+5209485)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5138505)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5000445)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+5300745)*1+lsi)*1]), &(inteval->stack[((hsi*11934+203697)*1+lsi)*1]), &(inteval->stack[((hsi*10608+215631)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+5332569)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5300745)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5061285)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+5388729)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5332569)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5089365)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+262119)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5388729)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5138505)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+5470629)*1+lsi)*1]), &(inteval->stack[((hsi*106470+262119)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5209485)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*13338+190359)*1+lsi)*1]), &(inteval->stack[((hsi*11934+203697)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+6746715)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5300745)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+368589)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6746715)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5332569)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*93600+368589)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5388729)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+6810363)*1+lsi)*1]), &(inteval->stack[((hsi*122850+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*106470+262119)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+5598393)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6810363)*1+lsi)*1]), &(inteval->stack[((hsi*127764+5470629)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+5300745)*1+lsi)*1]), &(inteval->stack[((hsi*14820+175539)*1+lsi)*1]), &(inteval->stack[((hsi*13338+190359)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+5061285)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5300745)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6710913)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+5340759)*1+lsi)*1]), &(inteval->stack[((hsi*71604+5061285)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6746715)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+10744569)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5340759)*1+lsi)*1]), &(inteval->stack[((hsi*93600+368589)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+262119)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10744569)*1+lsi)*1]), &(inteval->stack[((hsi*122850+4190769)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+10884969)*1+lsi)*1]), &(inteval->stack[((hsi*171990+262119)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6810363)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10884969)*1+lsi)*1]), &(inteval->stack[((hsi*170352+5598393)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*16380+159159)*1+lsi)*1]), &(inteval->stack[((hsi*14820+175539)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+4235229)*1+lsi)*1]), &(inteval->stack[((hsi*44460+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5300745)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+434109)*1+lsi)*1]), &(inteval->stack[((hsi*80028+4235229)*1+lsi)*1]), &(inteval->stack[((hsi*71604+5061285)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+11083713)*1+lsi)*1]), &(inteval->stack[((hsi*119340+434109)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5340759)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+11242833)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11083713)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10744569)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+11439393)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11242833)*1+lsi)*1]), &(inteval->stack[((hsi*171990+262119)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+11668713)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11439393)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10884969)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+10744569)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11668713)*1+lsi)*1]), &(inteval->stack[((hsi*219024+6710913)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+262119)*1+lsi)*1]), &(inteval->stack[((hsi*6084+250887)*1+lsi)*1]), &(inteval->stack[((hsi*5148+256971)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+5300745)*1+lsi)*1]), &(inteval->stack[((hsi*18252+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*15444+262119)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+175539)*1+lsi)*1]), &(inteval->stack[((hsi*36504+4896783)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5300745)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+227019)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5000445)*1+lsi)*1]), &(inteval->stack[((hsi*51480+175539)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5209485)*1+lsi)*1]), &(inteval->stack[((hsi*77220+227019)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+4965345)*1+lsi)*1]), &(inteval->stack[((hsi*127764+5470629)*1+lsi)*1]), &(inteval->stack[((hsi*108108+4857237)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+5109489)*1+lsi)*1]), &(inteval->stack[((hsi*170352+5598393)*1+lsi)*1]), &(inteval->stack[((hsi*144144+4965345)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+5294817)*1+lsi)*1]), &(inteval->stack[((hsi*219024+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*185328+5109489)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10744569)*1+lsi)*1]), &(inteval->stack[((hsi*231660+5294817)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*18018+141141)*1+lsi)*1]), &(inteval->stack[((hsi*16380+159159)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+4906377)*1+lsi)*1]), &(inteval->stack[((hsi*49140+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*44460+4190769)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+4995297)*1+lsi)*1]), &(inteval->stack[((hsi*88920+4906377)*1+lsi)*1]), &(inteval->stack[((hsi*80028+4235229)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+5128677)*1+lsi)*1]), &(inteval->stack[((hsi*133380+4995297)*1+lsi)*1]), &(inteval->stack[((hsi*119340+434109)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+5307687)*1+lsi)*1]), &(inteval->stack[((hsi*179010+5128677)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11083713)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*222768+5307687)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11242833)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+5119317)*1+lsi)*1]), &(inteval->stack[((hsi*262080+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11439393)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+11018349)*1+lsi)*1]), &(inteval->stack[((hsi*294840+5119317)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11668713)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*319410+11018349)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10744569)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+5191857)*1+lsi)*1]), &(inteval->stack[((hsi*334620+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*283140+6710913)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+10744569)*1+lsi)*1]), &(inteval->stack[((hsi*339768+5191857)*1+lsi)*1]), &(inteval->stack[((hsi*287496+6994053)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+11607057)*1+lsi)*1]), &(inteval->stack[((hsi*862488+10744569)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7281549)*1+lsi)*1]),4356);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1960200+13044537)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+11607057)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+8000289)*1+lsi)*1]),4356);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*2352240+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+13044537)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+9176409)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+141141)*1+lsi)*1]), &(inteval->stack[((hsi*2548+612269)*1+lsi)*1]), &(inteval->stack[((hsi*2184+614817)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+147693)*1+lsi)*1]), &(inteval->stack[((hsi*2940+609329)*1+lsi)*1]), &(inteval->stack[((hsi*2548+612269)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+155337)*1+lsi)*1]), &(inteval->stack[((hsi*7644+147693)*1+lsi)*1]), &(inteval->stack[((hsi*6552+141141)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+168441)*1+lsi)*1]), &(inteval->stack[((hsi*3360+605969)*1+lsi)*1]), &(inteval->stack[((hsi*2940+609329)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+177261)*1+lsi)*1]), &(inteval->stack[((hsi*8820+168441)*1+lsi)*1]), &(inteval->stack[((hsi*7644+147693)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+192549)*1+lsi)*1]), &(inteval->stack[((hsi*15288+177261)*1+lsi)*1]), &(inteval->stack[((hsi*13104+155337)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+214389)*1+lsi)*1]), &(inteval->stack[((hsi*3808+602161)*1+lsi)*1]), &(inteval->stack[((hsi*3360+605969)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+224469)*1+lsi)*1]), &(inteval->stack[((hsi*10080+214389)*1+lsi)*1]), &(inteval->stack[((hsi*8820+168441)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*17640+224469)*1+lsi)*1]), &(inteval->stack[((hsi*15288+177261)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+242109)*1+lsi)*1]), &(inteval->stack[((hsi*25480+4857237)*1+lsi)*1]), &(inteval->stack[((hsi*21840+192549)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+4882717)*1+lsi)*1]), &(inteval->stack[((hsi*4284+597877)*1+lsi)*1]), &(inteval->stack[((hsi*3808+602161)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+274869)*1+lsi)*1]), &(inteval->stack[((hsi*11424+4882717)*1+lsi)*1]), &(inteval->stack[((hsi*10080+214389)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+4894141)*1+lsi)*1]), &(inteval->stack[((hsi*20160+274869)*1+lsi)*1]), &(inteval->stack[((hsi*17640+224469)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+295029)*1+lsi)*1]), &(inteval->stack[((hsi*29400+4894141)*1+lsi)*1]), &(inteval->stack[((hsi*25480+4857237)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+4923541)*1+lsi)*1]), &(inteval->stack[((hsi*38220+295029)*1+lsi)*1]), &(inteval->stack[((hsi*32760+242109)*1+lsi)*1]),28);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*12852+333249)*1+lsi)*1]), &(inteval->stack[((hsi*4788+593089)*1+lsi)*1]), &(inteval->stack[((hsi*4284+597877)*1+lsi)*1]),28);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*22848+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*12852+333249)*1+lsi)*1]), &(inteval->stack[((hsi*11424+4882717)*1+lsi)*1]),28);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*33600+346101)*1+lsi)*1]), &(inteval->stack[((hsi*22848+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*20160+274869)*1+lsi)*1]),28);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*44100+4969405)*1+lsi)*1]), &(inteval->stack[((hsi*33600+346101)*1+lsi)*1]), &(inteval->stack[((hsi*29400+4894141)*1+lsi)*1]),28);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*53508+5554473)*1+lsi)*1]), &(inteval->stack[((hsi*44100+4969405)*1+lsi)*1]), &(inteval->stack[((hsi*38220+295029)*1+lsi)*1]),28);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*61152+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*53508+5554473)*1+lsi)*1]), &(inteval->stack[((hsi*45864+4923541)*1+lsi)*1]),28);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*14364+379701)*1+lsi)*1]), &(inteval->stack[((hsi*5320+587769)*1+lsi)*1]), &(inteval->stack[((hsi*4788+593089)*1+lsi)*1]),28);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*25704+394065)*1+lsi)*1]), &(inteval->stack[((hsi*14364+379701)*1+lsi)*1]), &(inteval->stack[((hsi*12852+333249)*1+lsi)*1]),28);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*38080+5013505)*1+lsi)*1]), &(inteval->stack[((hsi*25704+394065)*1+lsi)*1]), &(inteval->stack[((hsi*22848+5531625)*1+lsi)*1]),28);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*50400+5607981)*1+lsi)*1]), &(inteval->stack[((hsi*38080+5013505)*1+lsi)*1]), &(inteval->stack[((hsi*33600+346101)*1+lsi)*1]),28);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*61740+419769)*1+lsi)*1]), &(inteval->stack[((hsi*50400+5607981)*1+lsi)*1]), &(inteval->stack[((hsi*44100+4969405)*1+lsi)*1]),28);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*71344+5051585)*1+lsi)*1]), &(inteval->stack[((hsi*61740+419769)*1+lsi)*1]), &(inteval->stack[((hsi*53508+5554473)*1+lsi)*1]),28);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*78624+4251921)*1+lsi)*1]), &(inteval->stack[((hsi*71344+5051585)*1+lsi)*1]), &(inteval->stack[((hsi*61152+4190769)*1+lsi)*1]),28);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*15960+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*5880+581889)*1+lsi)*1]), &(inteval->stack[((hsi*5320+587769)*1+lsi)*1]),28);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*28728+5658381)*1+lsi)*1]), &(inteval->stack[((hsi*15960+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*14364+379701)*1+lsi)*1]),28);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*42840+274869)*1+lsi)*1]), &(inteval->stack[((hsi*28728+5658381)*1+lsi)*1]), &(inteval->stack[((hsi*25704+394065)*1+lsi)*1]),28);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*57120+317709)*1+lsi)*1]), &(inteval->stack[((hsi*42840+274869)*1+lsi)*1]), &(inteval->stack[((hsi*38080+5013505)*1+lsi)*1]),28);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*70560+9079113)*1+lsi)*1]), &(inteval->stack[((hsi*57120+317709)*1+lsi)*1]), &(inteval->stack[((hsi*50400+5607981)*1+lsi)*1]),28);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*82320+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*70560+9079113)*1+lsi)*1]), &(inteval->stack[((hsi*61740+419769)*1+lsi)*1]),28);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*91728+374829)*1+lsi)*1]), &(inteval->stack[((hsi*82320+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*71344+5051585)*1+lsi)*1]),28);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*98280+4969405)*1+lsi)*1]), &(inteval->stack[((hsi*91728+374829)*1+lsi)*1]), &(inteval->stack[((hsi*78624+4251921)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+5067685)*1+lsi)*1]), &(inteval->stack[((hsi*2184+614817)*1+lsi)*1]), &(inteval->stack[((hsi*1848+617001)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+5073229)*1+lsi)*1]), &(inteval->stack[((hsi*6552+141141)*1+lsi)*1]), &(inteval->stack[((hsi*5544+5067685)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+466557)*1+lsi)*1]), &(inteval->stack[((hsi*13104+155337)*1+lsi)*1]), &(inteval->stack[((hsi*11088+5073229)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+214389)*1+lsi)*1]), &(inteval->stack[((hsi*21840+192549)*1+lsi)*1]), &(inteval->stack[((hsi*18480+466557)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+5067685)*1+lsi)*1]), &(inteval->stack[((hsi*32760+242109)*1+lsi)*1]), &(inteval->stack[((hsi*27720+214389)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+141141)*1+lsi)*1]), &(inteval->stack[((hsi*45864+4923541)*1+lsi)*1]), &(inteval->stack[((hsi*38808+5067685)*1+lsi)*1]),28);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*66528+5067685)*1+lsi)*1]), &(inteval->stack[((hsi*61152+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*51744+141141)*1+lsi)*1]),28);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*83160+141141)*1+lsi)*1]), &(inteval->stack[((hsi*78624+4251921)*1+lsi)*1]), &(inteval->stack[((hsi*66528+5067685)*1+lsi)*1]),28);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*101640+4190769)*1+lsi)*1]), &(inteval->stack[((hsi*98280+4969405)*1+lsi)*1]), &(inteval->stack[((hsi*83160+141141)*1+lsi)*1]),28);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*17640+141141)*1+lsi)*1]), &(inteval->stack[((hsi*6468+575421)*1+lsi)*1]), &(inteval->stack[((hsi*5880+581889)*1+lsi)*1]),28);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*31920+466557)*1+lsi)*1]), &(inteval->stack[((hsi*17640+141141)*1+lsi)*1]), &(inteval->stack[((hsi*15960+9063153)*1+lsi)*1]),28);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*47880+141141)*1+lsi)*1]), &(inteval->stack[((hsi*31920+466557)*1+lsi)*1]), &(inteval->stack[((hsi*28728+5658381)*1+lsi)*1]),28);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*64260+5613945)*1+lsi)*1]), &(inteval->stack[((hsi*47880+141141)*1+lsi)*1]), &(inteval->stack[((hsi*42840+274869)*1+lsi)*1]),28);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*79968+141141)*1+lsi)*1]), &(inteval->stack[((hsi*64260+5613945)*1+lsi)*1]), &(inteval->stack[((hsi*57120+317709)*1+lsi)*1]),28);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*94080+5613945)*1+lsi)*1]), &(inteval->stack[((hsi*79968+141141)*1+lsi)*1]), &(inteval->stack[((hsi*70560+9079113)*1+lsi)*1]),28);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*105840+141141)*1+lsi)*1]), &(inteval->stack[((hsi*94080+5613945)*1+lsi)*1]), &(inteval->stack[((hsi*82320+5531625)*1+lsi)*1]),28);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*114660+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*105840+141141)*1+lsi)*1]), &(inteval->stack[((hsi*91728+374829)*1+lsi)*1]),28);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*120120+141141)*1+lsi)*1]), &(inteval->stack[((hsi*114660+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*98280+4969405)*1+lsi)*1]),28);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*121968+261261)*1+lsi)*1]), &(inteval->stack[((hsi*120120+141141)*1+lsi)*1]), &(inteval->stack[((hsi*101640+4190769)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*365904+15004737)*1+lsi)*1]), &(inteval->stack[((hsi*156816+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*121968+261261)*1+lsi)*1]),4356);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*731808+15370641)*1+lsi)*1]), &(inteval->stack[((hsi*470448+4386789)*1+lsi)*1]), &(inteval->stack[((hsi*365904+15004737)*1+lsi)*1]),4356);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*1219680+16102449)*1+lsi)*1]), &(inteval->stack[((hsi*940896+5770017)*1+lsi)*1]), &(inteval->stack[((hsi*731808+15370641)*1+lsi)*1]),4356);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*1829520+17322129)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+9176409)*1+lsi)*1]), &(inteval->stack[((hsi*1219680+16102449)*1+lsi)*1]),4356);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*2561328+19151649)*1+lsi)*1]), &(inteval->stack[((hsi*2352240+6710913)*1+lsi)*1]), &(inteval->stack[((hsi*1829520+17322129)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+15004737)*1+lsi)*1]), &(inteval->stack[((hsi*8281+119756)*1+lsi)*1]), &(inteval->stack[((hsi*7098+128037)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+15026031)*1+lsi)*1]), &(inteval->stack[((hsi*9555+110201)*1+lsi)*1]), &(inteval->stack[((hsi*8281+119756)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+15050874)*1+lsi)*1]), &(inteval->stack[((hsi*24843+15026031)*1+lsi)*1]), &(inteval->stack[((hsi*21294+15004737)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+15093462)*1+lsi)*1]), &(inteval->stack[((hsi*10920+99281)*1+lsi)*1]), &(inteval->stack[((hsi*9555+110201)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+15122127)*1+lsi)*1]), &(inteval->stack[((hsi*28665+15093462)*1+lsi)*1]), &(inteval->stack[((hsi*24843+15026031)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+15171813)*1+lsi)*1]), &(inteval->stack[((hsi*49686+15122127)*1+lsi)*1]), &(inteval->stack[((hsi*42588+15050874)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+15242793)*1+lsi)*1]), &(inteval->stack[((hsi*12376+86905)*1+lsi)*1]), &(inteval->stack[((hsi*10920+99281)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+15275553)*1+lsi)*1]), &(inteval->stack[((hsi*32760+15242793)*1+lsi)*1]), &(inteval->stack[((hsi*28665+15093462)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+15332883)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15275553)*1+lsi)*1]), &(inteval->stack[((hsi*49686+15122127)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+15415693)*1+lsi)*1]), &(inteval->stack[((hsi*82810+15332883)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15171813)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+15522163)*1+lsi)*1]), &(inteval->stack[((hsi*13923+72982)*1+lsi)*1]), &(inteval->stack[((hsi*12376+86905)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+15559291)*1+lsi)*1]), &(inteval->stack[((hsi*37128+15522163)*1+lsi)*1]), &(inteval->stack[((hsi*32760+15242793)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+15624811)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15559291)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15275553)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+15720361)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15624811)*1+lsi)*1]), &(inteval->stack[((hsi*82810+15332883)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+15844576)*1+lsi)*1]), &(inteval->stack[((hsi*124215+15720361)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15415693)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+15993634)*1+lsi)*1]), &(inteval->stack[((hsi*15561+57421)*1+lsi)*1]), &(inteval->stack[((hsi*13923+72982)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+16035403)*1+lsi)*1]), &(inteval->stack[((hsi*41769+15993634)*1+lsi)*1]), &(inteval->stack[((hsi*37128+15522163)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+16109659)*1+lsi)*1]), &(inteval->stack[((hsi*74256+16035403)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15559291)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+16218859)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16109659)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15624811)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+16362184)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16218859)*1+lsi)*1]), &(inteval->stack[((hsi*124215+15720361)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+16536085)*1+lsi)*1]), &(inteval->stack[((hsi*173901+16362184)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15844576)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+16734829)*1+lsi)*1]), &(inteval->stack[((hsi*17290+40131)*1+lsi)*1]), &(inteval->stack[((hsi*15561+57421)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+16781512)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16734829)*1+lsi)*1]), &(inteval->stack[((hsi*41769+15993634)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+16865050)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16781512)*1+lsi)*1]), &(inteval->stack[((hsi*74256+16035403)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+16988810)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16865050)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16109659)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+17152610)*1+lsi)*1]), &(inteval->stack[((hsi*163800+16988810)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16218859)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+17353265)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17152610)*1+lsi)*1]), &(inteval->stack[((hsi*173901+16362184)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*231868+17353265)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16536085)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+17585133)*1+lsi)*1]), &(inteval->stack[((hsi*19110+21021)*1+lsi)*1]), &(inteval->stack[((hsi*17290+40131)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+17637003)*1+lsi)*1]), &(inteval->stack[((hsi*51870+17585133)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16734829)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+9318681)*1+lsi)*1]), &(inteval->stack[((hsi*93366+17637003)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16781512)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+17730369)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9318681)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16865050)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+9457911)*1+lsi)*1]), &(inteval->stack[((hsi*185640+17730369)*1+lsi)*1]), &(inteval->stack[((hsi*163800+16988810)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+17916009)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9457911)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17152610)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*267540+17916009)*1+lsi)*1]), &(inteval->stack[((hsi*231868+17353265)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*298116+5531625)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9063153)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+9687231)*1+lsi)*1]), &(inteval->stack[((hsi*7098+128037)*1+lsi)*1]), &(inteval->stack[((hsi*6006+135135)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+9705249)*1+lsi)*1]), &(inteval->stack[((hsi*21294+15004737)*1+lsi)*1]), &(inteval->stack[((hsi*18018+9687231)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+9741285)*1+lsi)*1]), &(inteval->stack[((hsi*42588+15050874)*1+lsi)*1]), &(inteval->stack[((hsi*36036+9705249)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+18183549)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15171813)*1+lsi)*1]), &(inteval->stack[((hsi*60060+9741285)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+9687231)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15415693)*1+lsi)*1]), &(inteval->stack[((hsi*90090+18183549)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+18183549)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15844576)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9687231)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+15004737)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16536085)*1+lsi)*1]), &(inteval->stack[((hsi*168168+18183549)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+15220953)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*216216+15004737)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+15491223)*1+lsi)*1]), &(inteval->stack[((hsi*319410+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*270270+15220953)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+15821553)*1+lsi)*1]), &(inteval->stack[((hsi*21021+0)*1+lsi)*1]), &(inteval->stack[((hsi*19110+21021)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+15878883)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15821553)*1+lsi)*1]), &(inteval->stack[((hsi*51870+17585133)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+15982623)*1+lsi)*1]), &(inteval->stack[((hsi*103740+15878883)*1+lsi)*1]), &(inteval->stack[((hsi*93366+17637003)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+16138233)*1+lsi)*1]), &(inteval->stack[((hsi*155610+15982623)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9318681)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+16347078)*1+lsi)*1]), &(inteval->stack[((hsi*208845+16138233)*1+lsi)*1]), &(inteval->stack[((hsi*185640+17730369)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+16606974)*1+lsi)*1]), &(inteval->stack[((hsi*259896+16347078)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9457911)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*305760+16606974)*1+lsi)*1]), &(inteval->stack[((hsi*267540+17916009)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+15821553)*1+lsi)*1]), &(inteval->stack[((hsi*343980+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*298116+5531625)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+16194198)*1+lsi)*1]), &(inteval->stack[((hsi*372645+15821553)*1+lsi)*1]), &(inteval->stack[((hsi*319410+4033953)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+16584588)*1+lsi)*1]), &(inteval->stack[((hsi*390390+16194198)*1+lsi)*1]), &(inteval->stack[((hsi*330330+15491223)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+16980984)*1+lsi)*1]), &(inteval->stack[((hsi*396396+16584588)*1+lsi)*1]), &(inteval->stack[((hsi*339768+5191857)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+16980984)*1+lsi)*1]), &(inteval->stack[((hsi*862488+10744569)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+15004737)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+4033953)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+11607057)*1+lsi)*1]),4356);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2940300+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+15004737)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+13044537)*1+lsi)*1]),4356);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*3293136+12003453)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+9063153)*1+lsi)*1]), &(inteval->stack[((hsi*2352240+6710913)*1+lsi)*1]),4356);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*3415104+618849)*1+lsi)*1]), &(inteval->stack[((hsi*3293136+12003453)*1+lsi)*1]), &(inteval->stack[((hsi*2561328+19151649)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3415104+618849)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
