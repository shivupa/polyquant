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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_I__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,477708)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*3276+425820)*1+lsi)*1]), &(inteval->stack[((hsi*2808+429096)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+3047460)*1+lsi)*1]), &(inteval->stack[((hsi*3780+422040)*1+lsi)*1]), &(inteval->stack[((hsi*3276+425820)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+3057288)*1+lsi)*1]), &(inteval->stack[((hsi*9828+3047460)*1+lsi)*1]), &(inteval->stack[((hsi*8424+3039036)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+3074136)*1+lsi)*1]), &(inteval->stack[((hsi*4320+417720)*1+lsi)*1]), &(inteval->stack[((hsi*3780+422040)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+3085476)*1+lsi)*1]), &(inteval->stack[((hsi*11340+3074136)*1+lsi)*1]), &(inteval->stack[((hsi*9828+3047460)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+3105132)*1+lsi)*1]), &(inteval->stack[((hsi*19656+3085476)*1+lsi)*1]), &(inteval->stack[((hsi*16848+3057288)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+3133212)*1+lsi)*1]), &(inteval->stack[((hsi*4896+412824)*1+lsi)*1]), &(inteval->stack[((hsi*4320+417720)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+3146172)*1+lsi)*1]), &(inteval->stack[((hsi*12960+3133212)*1+lsi)*1]), &(inteval->stack[((hsi*11340+3074136)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+3168852)*1+lsi)*1]), &(inteval->stack[((hsi*22680+3146172)*1+lsi)*1]), &(inteval->stack[((hsi*19656+3085476)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+3201612)*1+lsi)*1]), &(inteval->stack[((hsi*32760+3168852)*1+lsi)*1]), &(inteval->stack[((hsi*28080+3105132)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+3074136)*1+lsi)*1]), &(inteval->stack[((hsi*5508+407316)*1+lsi)*1]), &(inteval->stack[((hsi*4896+412824)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+3243732)*1+lsi)*1]), &(inteval->stack[((hsi*14688+3074136)*1+lsi)*1]), &(inteval->stack[((hsi*12960+3133212)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+3269652)*1+lsi)*1]), &(inteval->stack[((hsi*25920+3243732)*1+lsi)*1]), &(inteval->stack[((hsi*22680+3146172)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+3307452)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3269652)*1+lsi)*1]), &(inteval->stack[((hsi*32760+3168852)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+3133212)*1+lsi)*1]), &(inteval->stack[((hsi*49140+3307452)*1+lsi)*1]), &(inteval->stack[((hsi*42120+3201612)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+3356592)*1+lsi)*1]), &(inteval->stack[((hsi*6156+401160)*1+lsi)*1]), &(inteval->stack[((hsi*5508+407316)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+3373116)*1+lsi)*1]), &(inteval->stack[((hsi*16524+3356592)*1+lsi)*1]), &(inteval->stack[((hsi*14688+3074136)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+3402492)*1+lsi)*1]), &(inteval->stack[((hsi*29376+3373116)*1+lsi)*1]), &(inteval->stack[((hsi*25920+3243732)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+3445692)*1+lsi)*1]), &(inteval->stack[((hsi*43200+3402492)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3269652)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+3502392)*1+lsi)*1]), &(inteval->stack[((hsi*56700+3445692)*1+lsi)*1]), &(inteval->stack[((hsi*49140+3307452)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+3243732)*1+lsi)*1]), &(inteval->stack[((hsi*68796+3502392)*1+lsi)*1]), &(inteval->stack[((hsi*58968+3133212)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+3322356)*1+lsi)*1]), &(inteval->stack[((hsi*6840+394320)*1+lsi)*1]), &(inteval->stack[((hsi*6156+401160)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+3571188)*1+lsi)*1]), &(inteval->stack[((hsi*18468+3322356)*1+lsi)*1]), &(inteval->stack[((hsi*16524+3356592)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+3604236)*1+lsi)*1]), &(inteval->stack[((hsi*33048+3571188)*1+lsi)*1]), &(inteval->stack[((hsi*29376+3373116)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+3653196)*1+lsi)*1]), &(inteval->stack[((hsi*48960+3604236)*1+lsi)*1]), &(inteval->stack[((hsi*43200+3402492)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+3340824)*1+lsi)*1]), &(inteval->stack[((hsi*64800+3653196)*1+lsi)*1]), &(inteval->stack[((hsi*56700+3445692)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+3717996)*1+lsi)*1]), &(inteval->stack[((hsi*79380+3340824)*1+lsi)*1]), &(inteval->stack[((hsi*68796+3502392)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+3420204)*1+lsi)*1]), &(inteval->stack[((hsi*91728+3717996)*1+lsi)*1]), &(inteval->stack[((hsi*78624+3243732)*1+lsi)*1]),36);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*20520+3521292)*1+lsi)*1]), &(inteval->stack[((hsi*7560+386760)*1+lsi)*1]), &(inteval->stack[((hsi*6840+394320)*1+lsi)*1]),36);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*36936+3809724)*1+lsi)*1]), &(inteval->stack[((hsi*20520+3521292)*1+lsi)*1]), &(inteval->stack[((hsi*18468+3322356)*1+lsi)*1]),36);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*55080+3846660)*1+lsi)*1]), &(inteval->stack[((hsi*36936+3809724)*1+lsi)*1]), &(inteval->stack[((hsi*33048+3571188)*1+lsi)*1]),36);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*73440+3901740)*1+lsi)*1]), &(inteval->stack[((hsi*55080+3846660)*1+lsi)*1]), &(inteval->stack[((hsi*48960+3604236)*1+lsi)*1]),36);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*90720+3541812)*1+lsi)*1]), &(inteval->stack[((hsi*73440+3901740)*1+lsi)*1]), &(inteval->stack[((hsi*64800+3653196)*1+lsi)*1]),36);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*105840+3975180)*1+lsi)*1]), &(inteval->stack[((hsi*90720+3541812)*1+lsi)*1]), &(inteval->stack[((hsi*79380+3340824)*1+lsi)*1]),36);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*117936+4081020)*1+lsi)*1]), &(inteval->stack[((hsi*105840+3975180)*1+lsi)*1]), &(inteval->stack[((hsi*91728+3717996)*1+lsi)*1]),36);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*126360+3632532)*1+lsi)*1]), &(inteval->stack[((hsi*117936+4081020)*1+lsi)*1]), &(inteval->stack[((hsi*101088+3420204)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+3322356)*1+lsi)*1]), &(inteval->stack[((hsi*2808+429096)*1+lsi)*1]), &(inteval->stack[((hsi*2376+431904)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+3329484)*1+lsi)*1]), &(inteval->stack[((hsi*8424+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*7128+3322356)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+3343740)*1+lsi)*1]), &(inteval->stack[((hsi*16848+3057288)*1+lsi)*1]), &(inteval->stack[((hsi*14256+3329484)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*28080+3105132)*1+lsi)*1]), &(inteval->stack[((hsi*23760+3343740)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+3322356)*1+lsi)*1]), &(inteval->stack[((hsi*42120+3201612)*1+lsi)*1]), &(inteval->stack[((hsi*35640+3039036)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*58968+3133212)*1+lsi)*1]), &(inteval->stack[((hsi*49896+3322356)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+3105564)*1+lsi)*1]), &(inteval->stack[((hsi*78624+3243732)*1+lsi)*1]), &(inteval->stack[((hsi*66528+3039036)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+3191100)*1+lsi)*1]), &(inteval->stack[((hsi*101088+3420204)*1+lsi)*1]), &(inteval->stack[((hsi*85536+3105564)*1+lsi)*1]),36);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*130680+3298020)*1+lsi)*1]), &(inteval->stack[((hsi*126360+3632532)*1+lsi)*1]), &(inteval->stack[((hsi*106920+3191100)*1+lsi)*1]),36);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*22680+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*8316+378444)*1+lsi)*1]), &(inteval->stack[((hsi*7560+386760)*1+lsi)*1]),36);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*41040+3061716)*1+lsi)*1]), &(inteval->stack[((hsi*22680+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*20520+3521292)*1+lsi)*1]),36);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*61560+3102756)*1+lsi)*1]), &(inteval->stack[((hsi*41040+3061716)*1+lsi)*1]), &(inteval->stack[((hsi*36936+3809724)*1+lsi)*1]),36);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*82620+3164316)*1+lsi)*1]), &(inteval->stack[((hsi*61560+3102756)*1+lsi)*1]), &(inteval->stack[((hsi*55080+3846660)*1+lsi)*1]),36);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*102816+3758892)*1+lsi)*1]), &(inteval->stack[((hsi*82620+3164316)*1+lsi)*1]), &(inteval->stack[((hsi*73440+3901740)*1+lsi)*1]),36);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*120960+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*102816+3758892)*1+lsi)*1]), &(inteval->stack[((hsi*90720+3541812)*1+lsi)*1]),36);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*136080+3758892)*1+lsi)*1]), &(inteval->stack[((hsi*120960+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*105840+3975180)*1+lsi)*1]),36);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*147420+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*136080+3758892)*1+lsi)*1]), &(inteval->stack[((hsi*117936+4081020)*1+lsi)*1]),36);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*154440+3428700)*1+lsi)*1]), &(inteval->stack[((hsi*147420+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*126360+3632532)*1+lsi)*1]),36);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*156816+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*154440+3428700)*1+lsi)*1]), &(inteval->stack[((hsi*130680+3298020)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+378444)*1+lsi)*1]), &(inteval->stack[((hsi*4095+367869)*1+lsi)*1]), &(inteval->stack[((hsi*3510+371964)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+388974)*1+lsi)*1]), &(inteval->stack[((hsi*4725+363144)*1+lsi)*1]), &(inteval->stack[((hsi*4095+367869)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+401259)*1+lsi)*1]), &(inteval->stack[((hsi*12285+388974)*1+lsi)*1]), &(inteval->stack[((hsi*10530+378444)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*5400+357744)*1+lsi)*1]), &(inteval->stack[((hsi*4725+363144)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+3210027)*1+lsi)*1]), &(inteval->stack[((hsi*14175+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*12285+388974)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+3234597)*1+lsi)*1]), &(inteval->stack[((hsi*24570+3210027)*1+lsi)*1]), &(inteval->stack[((hsi*21060+401259)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+3269697)*1+lsi)*1]), &(inteval->stack[((hsi*6120+351624)*1+lsi)*1]), &(inteval->stack[((hsi*5400+357744)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+3285897)*1+lsi)*1]), &(inteval->stack[((hsi*16200+3269697)*1+lsi)*1]), &(inteval->stack[((hsi*14175+3195852)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+3314247)*1+lsi)*1]), &(inteval->stack[((hsi*28350+3285897)*1+lsi)*1]), &(inteval->stack[((hsi*24570+3210027)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+3355197)*1+lsi)*1]), &(inteval->stack[((hsi*40950+3314247)*1+lsi)*1]), &(inteval->stack[((hsi*35100+3234597)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*6885+344739)*1+lsi)*1]), &(inteval->stack[((hsi*6120+351624)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+3407847)*1+lsi)*1]), &(inteval->stack[((hsi*18360+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*16200+3269697)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+3440247)*1+lsi)*1]), &(inteval->stack[((hsi*32400+3407847)*1+lsi)*1]), &(inteval->stack[((hsi*28350+3285897)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+3487497)*1+lsi)*1]), &(inteval->stack[((hsi*47250+3440247)*1+lsi)*1]), &(inteval->stack[((hsi*40950+3314247)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+3269697)*1+lsi)*1]), &(inteval->stack[((hsi*61425+3487497)*1+lsi)*1]), &(inteval->stack[((hsi*52650+3355197)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+3548922)*1+lsi)*1]), &(inteval->stack[((hsi*7695+337044)*1+lsi)*1]), &(inteval->stack[((hsi*6885+344739)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+3569577)*1+lsi)*1]), &(inteval->stack[((hsi*20655+3548922)*1+lsi)*1]), &(inteval->stack[((hsi*18360+3195852)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+3606297)*1+lsi)*1]), &(inteval->stack[((hsi*36720+3569577)*1+lsi)*1]), &(inteval->stack[((hsi*32400+3407847)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+3660297)*1+lsi)*1]), &(inteval->stack[((hsi*54000+3606297)*1+lsi)*1]), &(inteval->stack[((hsi*47250+3440247)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+3731172)*1+lsi)*1]), &(inteval->stack[((hsi*70875+3660297)*1+lsi)*1]), &(inteval->stack[((hsi*61425+3487497)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+3407847)*1+lsi)*1]), &(inteval->stack[((hsi*85995+3731172)*1+lsi)*1]), &(inteval->stack[((hsi*73710+3269697)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+3506127)*1+lsi)*1]), &(inteval->stack[((hsi*8550+328494)*1+lsi)*1]), &(inteval->stack[((hsi*7695+337044)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+3817167)*1+lsi)*1]), &(inteval->stack[((hsi*23085+3506127)*1+lsi)*1]), &(inteval->stack[((hsi*20655+3548922)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+3858477)*1+lsi)*1]), &(inteval->stack[((hsi*41310+3817167)*1+lsi)*1]), &(inteval->stack[((hsi*36720+3569577)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+3919677)*1+lsi)*1]), &(inteval->stack[((hsi*61200+3858477)*1+lsi)*1]), &(inteval->stack[((hsi*54000+3606297)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+3529212)*1+lsi)*1]), &(inteval->stack[((hsi*81000+3919677)*1+lsi)*1]), &(inteval->stack[((hsi*70875+3660297)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+4000677)*1+lsi)*1]), &(inteval->stack[((hsi*99225+3529212)*1+lsi)*1]), &(inteval->stack[((hsi*85995+3731172)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+3628437)*1+lsi)*1]), &(inteval->stack[((hsi*114660+4000677)*1+lsi)*1]), &(inteval->stack[((hsi*98280+3407847)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+3754797)*1+lsi)*1]), &(inteval->stack[((hsi*9450+319044)*1+lsi)*1]), &(inteval->stack[((hsi*8550+328494)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+4115337)*1+lsi)*1]), &(inteval->stack[((hsi*25650+3754797)*1+lsi)*1]), &(inteval->stack[((hsi*23085+3506127)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+4161507)*1+lsi)*1]), &(inteval->stack[((hsi*46170+4115337)*1+lsi)*1]), &(inteval->stack[((hsi*41310+3817167)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+4230357)*1+lsi)*1]), &(inteval->stack[((hsi*68850+4161507)*1+lsi)*1]), &(inteval->stack[((hsi*61200+3858477)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+3780447)*1+lsi)*1]), &(inteval->stack[((hsi*91800+4230357)*1+lsi)*1]), &(inteval->stack[((hsi*81000+3919677)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+4322157)*1+lsi)*1]), &(inteval->stack[((hsi*113400+3780447)*1+lsi)*1]), &(inteval->stack[((hsi*99225+3529212)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+4454457)*1+lsi)*1]), &(inteval->stack[((hsi*132300+4322157)*1+lsi)*1]), &(inteval->stack[((hsi*114660+4000677)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+3893847)*1+lsi)*1]), &(inteval->stack[((hsi*147420+4454457)*1+lsi)*1]), &(inteval->stack[((hsi*126360+3628437)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+3506127)*1+lsi)*1]), &(inteval->stack[((hsi*3510+371964)*1+lsi)*1]), &(inteval->stack[((hsi*2970+375474)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+3515037)*1+lsi)*1]), &(inteval->stack[((hsi*10530+378444)*1+lsi)*1]), &(inteval->stack[((hsi*8910+3506127)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+3532857)*1+lsi)*1]), &(inteval->stack[((hsi*21060+401259)*1+lsi)*1]), &(inteval->stack[((hsi*17820+3515037)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+328494)*1+lsi)*1]), &(inteval->stack[((hsi*35100+3234597)*1+lsi)*1]), &(inteval->stack[((hsi*29700+3532857)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+3506127)*1+lsi)*1]), &(inteval->stack[((hsi*52650+3355197)*1+lsi)*1]), &(inteval->stack[((hsi*44550+328494)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+328494)*1+lsi)*1]), &(inteval->stack[((hsi*73710+3269697)*1+lsi)*1]), &(inteval->stack[((hsi*62370+3506127)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*98280+3407847)*1+lsi)*1]), &(inteval->stack[((hsi*83160+328494)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+3302772)*1+lsi)*1]), &(inteval->stack[((hsi*126360+3628437)*1+lsi)*1]), &(inteval->stack[((hsi*106920+3195852)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+3436422)*1+lsi)*1]), &(inteval->stack[((hsi*157950+3893847)*1+lsi)*1]), &(inteval->stack[((hsi*133650+3302772)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*10395+308649)*1+lsi)*1]), &(inteval->stack[((hsi*9450+319044)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+3224202)*1+lsi)*1]), &(inteval->stack[((hsi*28350+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*25650+3754797)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*51300+3224202)*1+lsi)*1]), &(inteval->stack[((hsi*46170+4115337)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*76950+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*68850+4161507)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*103275+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*91800+4230357)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+4051797)*1+lsi)*1]), &(inteval->stack[((hsi*128520+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*113400+3780447)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*151200+4051797)*1+lsi)*1]), &(inteval->stack[((hsi*132300+4322157)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+4051797)*1+lsi)*1]), &(inteval->stack[((hsi*170100+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*147420+4454457)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*184275+4051797)*1+lsi)*1]), &(inteval->stack[((hsi*157950+3893847)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*193050+3599772)*1+lsi)*1]), &(inteval->stack[((hsi*163350+3436422)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*470448+3391872)*1+lsi)*1]), &(inteval->stack[((hsi*196020+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*156816+3039036)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+308649)*1+lsi)*1]), &(inteval->stack[((hsi*5005+295724)*1+lsi)*1]), &(inteval->stack[((hsi*4290+300729)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+321519)*1+lsi)*1]), &(inteval->stack[((hsi*5775+289949)*1+lsi)*1]), &(inteval->stack[((hsi*5005+295724)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+336534)*1+lsi)*1]), &(inteval->stack[((hsi*15015+321519)*1+lsi)*1]), &(inteval->stack[((hsi*12870+308649)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+362274)*1+lsi)*1]), &(inteval->stack[((hsi*6600+283349)*1+lsi)*1]), &(inteval->stack[((hsi*5775+289949)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+379599)*1+lsi)*1]), &(inteval->stack[((hsi*17325+362274)*1+lsi)*1]), &(inteval->stack[((hsi*15015+321519)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*30030+379599)*1+lsi)*1]), &(inteval->stack[((hsi*25740+336534)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+409629)*1+lsi)*1]), &(inteval->stack[((hsi*7480+275869)*1+lsi)*1]), &(inteval->stack[((hsi*6600+283349)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+3905220)*1+lsi)*1]), &(inteval->stack[((hsi*19800+409629)*1+lsi)*1]), &(inteval->stack[((hsi*17325+362274)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+3939870)*1+lsi)*1]), &(inteval->stack[((hsi*34650+3905220)*1+lsi)*1]), &(inteval->stack[((hsi*30030+379599)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+3989920)*1+lsi)*1]), &(inteval->stack[((hsi*50050+3939870)*1+lsi)*1]), &(inteval->stack[((hsi*42900+3862320)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+362274)*1+lsi)*1]), &(inteval->stack[((hsi*8415+267454)*1+lsi)*1]), &(inteval->stack[((hsi*7480+275869)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+4054270)*1+lsi)*1]), &(inteval->stack[((hsi*22440+362274)*1+lsi)*1]), &(inteval->stack[((hsi*19800+409629)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+4093870)*1+lsi)*1]), &(inteval->stack[((hsi*39600+4054270)*1+lsi)*1]), &(inteval->stack[((hsi*34650+3905220)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+4151620)*1+lsi)*1]), &(inteval->stack[((hsi*57750+4093870)*1+lsi)*1]), &(inteval->stack[((hsi*50050+3939870)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+4226695)*1+lsi)*1]), &(inteval->stack[((hsi*75075+4151620)*1+lsi)*1]), &(inteval->stack[((hsi*64350+3989920)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+3905220)*1+lsi)*1]), &(inteval->stack[((hsi*9405+258049)*1+lsi)*1]), &(inteval->stack[((hsi*8415+267454)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+3930465)*1+lsi)*1]), &(inteval->stack[((hsi*25245+3905220)*1+lsi)*1]), &(inteval->stack[((hsi*22440+362274)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+362274)*1+lsi)*1]), &(inteval->stack[((hsi*44880+3930465)*1+lsi)*1]), &(inteval->stack[((hsi*39600+4054270)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+4316785)*1+lsi)*1]), &(inteval->stack[((hsi*66000+362274)*1+lsi)*1]), &(inteval->stack[((hsi*57750+4093870)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+4403410)*1+lsi)*1]), &(inteval->stack[((hsi*86625+4316785)*1+lsi)*1]), &(inteval->stack[((hsi*75075+4151620)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+4054270)*1+lsi)*1]), &(inteval->stack[((hsi*105105+4403410)*1+lsi)*1]), &(inteval->stack[((hsi*90090+4226695)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+4174390)*1+lsi)*1]), &(inteval->stack[((hsi*10450+247599)*1+lsi)*1]), &(inteval->stack[((hsi*9405+258049)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+4508515)*1+lsi)*1]), &(inteval->stack[((hsi*28215+4174390)*1+lsi)*1]), &(inteval->stack[((hsi*25245+3905220)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+4559005)*1+lsi)*1]), &(inteval->stack[((hsi*50490+4508515)*1+lsi)*1]), &(inteval->stack[((hsi*44880+3930465)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+4633805)*1+lsi)*1]), &(inteval->stack[((hsi*74800+4559005)*1+lsi)*1]), &(inteval->stack[((hsi*66000+362274)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+4732805)*1+lsi)*1]), &(inteval->stack[((hsi*99000+4633805)*1+lsi)*1]), &(inteval->stack[((hsi*86625+4316785)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+4854080)*1+lsi)*1]), &(inteval->stack[((hsi*121275+4732805)*1+lsi)*1]), &(inteval->stack[((hsi*105105+4403410)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+4316785)*1+lsi)*1]), &(inteval->stack[((hsi*140140+4854080)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4054270)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+3905220)*1+lsi)*1]), &(inteval->stack[((hsi*11550+236049)*1+lsi)*1]), &(inteval->stack[((hsi*10450+247599)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+362274)*1+lsi)*1]), &(inteval->stack[((hsi*31350+3905220)*1+lsi)*1]), &(inteval->stack[((hsi*28215+4174390)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+4994220)*1+lsi)*1]), &(inteval->stack[((hsi*56430+362274)*1+lsi)*1]), &(inteval->stack[((hsi*50490+4508515)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+5078370)*1+lsi)*1]), &(inteval->stack[((hsi*84150+4994220)*1+lsi)*1]), &(inteval->stack[((hsi*74800+4559005)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+4471225)*1+lsi)*1]), &(inteval->stack[((hsi*112200+5078370)*1+lsi)*1]), &(inteval->stack[((hsi*99000+4633805)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+5190570)*1+lsi)*1]), &(inteval->stack[((hsi*138600+4471225)*1+lsi)*1]), &(inteval->stack[((hsi*121275+4732805)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+4609825)*1+lsi)*1]), &(inteval->stack[((hsi*161700+5190570)*1+lsi)*1]), &(inteval->stack[((hsi*140140+4854080)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+4790005)*1+lsi)*1]), &(inteval->stack[((hsi*180180+4609825)*1+lsi)*1]), &(inteval->stack[((hsi*154440+4316785)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+3936570)*1+lsi)*1]), &(inteval->stack[((hsi*4290+300729)*1+lsi)*1]), &(inteval->stack[((hsi*3630+305019)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+247599)*1+lsi)*1]), &(inteval->stack[((hsi*12870+308649)*1+lsi)*1]), &(inteval->stack[((hsi*10890+3936570)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+269379)*1+lsi)*1]), &(inteval->stack[((hsi*25740+336534)*1+lsi)*1]), &(inteval->stack[((hsi*21780+247599)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+305679)*1+lsi)*1]), &(inteval->stack[((hsi*42900+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*36300+269379)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+5352270)*1+lsi)*1]), &(inteval->stack[((hsi*64350+3989920)*1+lsi)*1]), &(inteval->stack[((hsi*54450+305679)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+3936570)*1+lsi)*1]), &(inteval->stack[((hsi*90090+4226695)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5352270)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+4174390)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4054270)*1+lsi)*1]), &(inteval->stack[((hsi*101640+3936570)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+3936570)*1+lsi)*1]), &(inteval->stack[((hsi*154440+4316785)*1+lsi)*1]), &(inteval->stack[((hsi*130680+4174390)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+4099920)*1+lsi)*1]), &(inteval->stack[((hsi*193050+4790005)*1+lsi)*1]), &(inteval->stack[((hsi*163350+3936570)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*12705+223344)*1+lsi)*1]), &(inteval->stack[((hsi*11550+236049)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+3936570)*1+lsi)*1]), &(inteval->stack[((hsi*34650+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*31350+3905220)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*62700+3936570)*1+lsi)*1]), &(inteval->stack[((hsi*56430+362274)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*94050+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*84150+4994220)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+223344)*1+lsi)*1]), &(inteval->stack[((hsi*126225+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*112200+5078370)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*157080+223344)*1+lsi)*1]), &(inteval->stack[((hsi*138600+4471225)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*184800+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*161700+5190570)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*207900+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*180180+4609825)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*225225+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*193050+4790005)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+4535520)*1+lsi)*1]), &(inteval->stack[((hsi*235950+4299570)*1+lsi)*1]), &(inteval->stack[((hsi*199650+4099920)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*239580+4535520)*1+lsi)*1]), &(inteval->stack[((hsi*196020+3195852)*1+lsi)*1]),4356);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*940896+4775100)*1+lsi)*1]), &(inteval->stack[((hsi*588060+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*470448+3391872)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+223344)*1+lsi)*1]), &(inteval->stack[((hsi*6006+207834)*1+lsi)*1]), &(inteval->stack[((hsi*5148+213840)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*6930+200904)*1+lsi)*1]), &(inteval->stack[((hsi*6006+207834)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+238788)*1+lsi)*1]), &(inteval->stack[((hsi*18018+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*15444+223344)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+3213870)*1+lsi)*1]), &(inteval->stack[((hsi*7920+192984)*1+lsi)*1]), &(inteval->stack[((hsi*6930+200904)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+269676)*1+lsi)*1]), &(inteval->stack[((hsi*20790+3213870)*1+lsi)*1]), &(inteval->stack[((hsi*18018+3195852)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+3234660)*1+lsi)*1]), &(inteval->stack[((hsi*36036+269676)*1+lsi)*1]), &(inteval->stack[((hsi*30888+238788)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+305712)*1+lsi)*1]), &(inteval->stack[((hsi*8976+184008)*1+lsi)*1]), &(inteval->stack[((hsi*7920+192984)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+3286140)*1+lsi)*1]), &(inteval->stack[((hsi*23760+305712)*1+lsi)*1]), &(inteval->stack[((hsi*20790+3213870)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+329472)*1+lsi)*1]), &(inteval->stack[((hsi*41580+3286140)*1+lsi)*1]), &(inteval->stack[((hsi*36036+269676)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+4450380)*1+lsi)*1]), &(inteval->stack[((hsi*60060+329472)*1+lsi)*1]), &(inteval->stack[((hsi*51480+3234660)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+3327720)*1+lsi)*1]), &(inteval->stack[((hsi*10098+173910)*1+lsi)*1]), &(inteval->stack[((hsi*8976+184008)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*26928+3327720)*1+lsi)*1]), &(inteval->stack[((hsi*23760+305712)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+5763516)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*41580+3286140)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+5832816)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5763516)*1+lsi)*1]), &(inteval->stack[((hsi*60060+329472)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+269676)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5832816)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4450380)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+377784)*1+lsi)*1]), &(inteval->stack[((hsi*11286+162624)*1+lsi)*1]), &(inteval->stack[((hsi*10098+173910)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+5922906)*1+lsi)*1]), &(inteval->stack[((hsi*30294+377784)*1+lsi)*1]), &(inteval->stack[((hsi*26928+3327720)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+3286140)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5922906)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5715996)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+5976762)*1+lsi)*1]), &(inteval->stack[((hsi*79200+3286140)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5763516)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+6080712)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5976762)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5832816)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6080712)*1+lsi)*1]), &(inteval->stack[((hsi*108108+269676)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+5860140)*1+lsi)*1]), &(inteval->stack[((hsi*12540+150084)*1+lsi)*1]), &(inteval->stack[((hsi*11286+162624)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+6206838)*1+lsi)*1]), &(inteval->stack[((hsi*33858+5860140)*1+lsi)*1]), &(inteval->stack[((hsi*30294+377784)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+6267426)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6206838)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5922906)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+6357186)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6267426)*1+lsi)*1]), &(inteval->stack[((hsi*79200+3286140)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+6475986)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6357186)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5976762)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+5893998)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6475986)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6080712)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+6621516)*1+lsi)*1]), &(inteval->stack[((hsi*168168+5893998)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5715996)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+6062166)*1+lsi)*1]), &(inteval->stack[((hsi*13860+136224)*1+lsi)*1]), &(inteval->stack[((hsi*12540+150084)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+6099786)*1+lsi)*1]), &(inteval->stack[((hsi*37620+6062166)*1+lsi)*1]), &(inteval->stack[((hsi*33858+5860140)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+3286140)*1+lsi)*1]), &(inteval->stack[((hsi*67716+6099786)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6206838)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+6806844)*1+lsi)*1]), &(inteval->stack[((hsi*100980+3286140)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6267426)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+6167502)*1+lsi)*1]), &(inteval->stack[((hsi*134640+6806844)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6357186)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+6941484)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6167502)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6475986)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+6333822)*1+lsi)*1]), &(inteval->stack[((hsi*194040+6941484)*1+lsi)*1]), &(inteval->stack[((hsi*168168+5893998)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+7135524)*1+lsi)*1]), &(inteval->stack[((hsi*216216+6333822)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6621516)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+5860140)*1+lsi)*1]), &(inteval->stack[((hsi*5148+213840)*1+lsi)*1]), &(inteval->stack[((hsi*4356+218988)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+5873208)*1+lsi)*1]), &(inteval->stack[((hsi*15444+223344)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5860140)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+5899344)*1+lsi)*1]), &(inteval->stack[((hsi*30888+238788)*1+lsi)*1]), &(inteval->stack[((hsi*26136+5873208)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+150084)*1+lsi)*1]), &(inteval->stack[((hsi*51480+3234660)*1+lsi)*1]), &(inteval->stack[((hsi*43560+5899344)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+5860140)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4450380)*1+lsi)*1]), &(inteval->stack[((hsi*65340+150084)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+7367184)*1+lsi)*1]), &(inteval->stack[((hsi*108108+269676)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5860140)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+150084)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*121968+7367184)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6621516)*1+lsi)*1]), &(inteval->stack[((hsi*156816+150084)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+150084)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7135524)*1+lsi)*1]), &(inteval->stack[((hsi*196020+5715996)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*15246+120978)*1+lsi)*1]), &(inteval->stack[((hsi*13860+136224)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+5757576)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*37620+6062166)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+5832816)*1+lsi)*1]), &(inteval->stack[((hsi*75240+5757576)*1+lsi)*1]), &(inteval->stack[((hsi*67716+6099786)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+6550038)*1+lsi)*1]), &(inteval->stack[((hsi*112860+5832816)*1+lsi)*1]), &(inteval->stack[((hsi*100980+3286140)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*151470+6550038)*1+lsi)*1]), &(inteval->stack[((hsi*134640+6806844)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+6550038)*1+lsi)*1]), &(inteval->stack[((hsi*188496+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6167502)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*221760+6550038)*1+lsi)*1]), &(inteval->stack[((hsi*194040+6941484)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+6550038)*1+lsi)*1]), &(inteval->stack[((hsi*249480+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*216216+6333822)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*270270+6550038)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7135524)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+5999136)*1+lsi)*1]), &(inteval->stack[((hsi*283140+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*239580+150084)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+6286632)*1+lsi)*1]), &(inteval->stack[((hsi*287496+5999136)*1+lsi)*1]), &(inteval->stack[((hsi*239580+4535520)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+7005372)*1+lsi)*1]), &(inteval->stack[((hsi*718740+6286632)*1+lsi)*1]), &(inteval->stack[((hsi*588060+3862320)*1+lsi)*1]),4356);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*1568160+8181492)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+7005372)*1+lsi)*1]), &(inteval->stack[((hsi*940896+4775100)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*2548+471128)*1+lsi)*1]), &(inteval->stack[((hsi*2184+473676)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+3868872)*1+lsi)*1]), &(inteval->stack[((hsi*2940+468188)*1+lsi)*1]), &(inteval->stack[((hsi*2548+471128)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+3876516)*1+lsi)*1]), &(inteval->stack[((hsi*7644+3868872)*1+lsi)*1]), &(inteval->stack[((hsi*6552+3862320)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+3889620)*1+lsi)*1]), &(inteval->stack[((hsi*3360+464828)*1+lsi)*1]), &(inteval->stack[((hsi*2940+468188)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+3898440)*1+lsi)*1]), &(inteval->stack[((hsi*8820+3889620)*1+lsi)*1]), &(inteval->stack[((hsi*7644+3868872)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+3913728)*1+lsi)*1]), &(inteval->stack[((hsi*15288+3898440)*1+lsi)*1]), &(inteval->stack[((hsi*13104+3876516)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+3935568)*1+lsi)*1]), &(inteval->stack[((hsi*3808+461020)*1+lsi)*1]), &(inteval->stack[((hsi*3360+464828)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+3945648)*1+lsi)*1]), &(inteval->stack[((hsi*10080+3935568)*1+lsi)*1]), &(inteval->stack[((hsi*8820+3889620)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+3963288)*1+lsi)*1]), &(inteval->stack[((hsi*17640+3945648)*1+lsi)*1]), &(inteval->stack[((hsi*15288+3898440)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+3988768)*1+lsi)*1]), &(inteval->stack[((hsi*25480+3963288)*1+lsi)*1]), &(inteval->stack[((hsi*21840+3913728)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+4021528)*1+lsi)*1]), &(inteval->stack[((hsi*4284+456736)*1+lsi)*1]), &(inteval->stack[((hsi*3808+461020)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+4032952)*1+lsi)*1]), &(inteval->stack[((hsi*11424+4021528)*1+lsi)*1]), &(inteval->stack[((hsi*10080+3935568)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+4053112)*1+lsi)*1]), &(inteval->stack[((hsi*20160+4032952)*1+lsi)*1]), &(inteval->stack[((hsi*17640+3945648)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+4082512)*1+lsi)*1]), &(inteval->stack[((hsi*29400+4053112)*1+lsi)*1]), &(inteval->stack[((hsi*25480+3963288)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+4120732)*1+lsi)*1]), &(inteval->stack[((hsi*38220+4082512)*1+lsi)*1]), &(inteval->stack[((hsi*32760+3988768)*1+lsi)*1]),28);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*12852+4166596)*1+lsi)*1]), &(inteval->stack[((hsi*4788+451948)*1+lsi)*1]), &(inteval->stack[((hsi*4284+456736)*1+lsi)*1]),28);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*22848+4179448)*1+lsi)*1]), &(inteval->stack[((hsi*12852+4166596)*1+lsi)*1]), &(inteval->stack[((hsi*11424+4021528)*1+lsi)*1]),28);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*33600+4202296)*1+lsi)*1]), &(inteval->stack[((hsi*22848+4179448)*1+lsi)*1]), &(inteval->stack[((hsi*20160+4032952)*1+lsi)*1]),28);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*44100+4235896)*1+lsi)*1]), &(inteval->stack[((hsi*33600+4202296)*1+lsi)*1]), &(inteval->stack[((hsi*29400+4053112)*1+lsi)*1]),28);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*53508+4279996)*1+lsi)*1]), &(inteval->stack[((hsi*44100+4235896)*1+lsi)*1]), &(inteval->stack[((hsi*38220+4082512)*1+lsi)*1]),28);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*61152+4333504)*1+lsi)*1]), &(inteval->stack[((hsi*53508+4279996)*1+lsi)*1]), &(inteval->stack[((hsi*45864+4120732)*1+lsi)*1]),28);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*14364+4394656)*1+lsi)*1]), &(inteval->stack[((hsi*5320+446628)*1+lsi)*1]), &(inteval->stack[((hsi*4788+451948)*1+lsi)*1]),28);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*25704+4409020)*1+lsi)*1]), &(inteval->stack[((hsi*14364+4394656)*1+lsi)*1]), &(inteval->stack[((hsi*12852+4166596)*1+lsi)*1]),28);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*38080+4434724)*1+lsi)*1]), &(inteval->stack[((hsi*25704+4409020)*1+lsi)*1]), &(inteval->stack[((hsi*22848+4179448)*1+lsi)*1]),28);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*50400+120978)*1+lsi)*1]), &(inteval->stack[((hsi*38080+4434724)*1+lsi)*1]), &(inteval->stack[((hsi*33600+4202296)*1+lsi)*1]),28);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*61740+4472804)*1+lsi)*1]), &(inteval->stack[((hsi*50400+120978)*1+lsi)*1]), &(inteval->stack[((hsi*44100+4235896)*1+lsi)*1]),28);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*71344+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*61740+4472804)*1+lsi)*1]), &(inteval->stack[((hsi*53508+4279996)*1+lsi)*1]),28);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*78624+171378)*1+lsi)*1]), &(inteval->stack[((hsi*71344+5715996)*1+lsi)*1]), &(inteval->stack[((hsi*61152+4333504)*1+lsi)*1]),28);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*15960+4534544)*1+lsi)*1]), &(inteval->stack[((hsi*5880+440748)*1+lsi)*1]), &(inteval->stack[((hsi*5320+446628)*1+lsi)*1]),28);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*28728+4550504)*1+lsi)*1]), &(inteval->stack[((hsi*15960+4534544)*1+lsi)*1]), &(inteval->stack[((hsi*14364+4394656)*1+lsi)*1]),28);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*42840+5787340)*1+lsi)*1]), &(inteval->stack[((hsi*28728+4550504)*1+lsi)*1]), &(inteval->stack[((hsi*25704+4409020)*1+lsi)*1]),28);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*57120+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5787340)*1+lsi)*1]), &(inteval->stack[((hsi*38080+4434724)*1+lsi)*1]),28);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*70560+4579232)*1+lsi)*1]), &(inteval->stack[((hsi*57120+3195852)*1+lsi)*1]), &(inteval->stack[((hsi*50400+120978)*1+lsi)*1]),28);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*82320+250002)*1+lsi)*1]), &(inteval->stack[((hsi*70560+4579232)*1+lsi)*1]), &(inteval->stack[((hsi*61740+4472804)*1+lsi)*1]),28);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*91728+5830180)*1+lsi)*1]), &(inteval->stack[((hsi*82320+250002)*1+lsi)*1]), &(inteval->stack[((hsi*71344+5715996)*1+lsi)*1]),28);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*98280+4166596)*1+lsi)*1]), &(inteval->stack[((hsi*91728+5830180)*1+lsi)*1]), &(inteval->stack[((hsi*78624+171378)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+4394656)*1+lsi)*1]), &(inteval->stack[((hsi*2184+473676)*1+lsi)*1]), &(inteval->stack[((hsi*1848+475860)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+3252972)*1+lsi)*1]), &(inteval->stack[((hsi*6552+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*5544+4394656)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+4394656)*1+lsi)*1]), &(inteval->stack[((hsi*13104+3876516)*1+lsi)*1]), &(inteval->stack[((hsi*11088+3252972)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+3252972)*1+lsi)*1]), &(inteval->stack[((hsi*21840+3913728)*1+lsi)*1]), &(inteval->stack[((hsi*18480+4394656)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+4394656)*1+lsi)*1]), &(inteval->stack[((hsi*32760+3988768)*1+lsi)*1]), &(inteval->stack[((hsi*27720+3252972)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*45864+4120732)*1+lsi)*1]), &(inteval->stack[((hsi*38808+4394656)*1+lsi)*1]),28);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*66528+3914064)*1+lsi)*1]), &(inteval->stack[((hsi*61152+4333504)*1+lsi)*1]), &(inteval->stack[((hsi*51744+3862320)*1+lsi)*1]),28);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*83160+4264876)*1+lsi)*1]), &(inteval->stack[((hsi*78624+171378)*1+lsi)*1]), &(inteval->stack[((hsi*66528+3914064)*1+lsi)*1]),28);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*101640+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*98280+4166596)*1+lsi)*1]), &(inteval->stack[((hsi*83160+4264876)*1+lsi)*1]),28);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*17640+4264876)*1+lsi)*1]), &(inteval->stack[((hsi*6468+434280)*1+lsi)*1]), &(inteval->stack[((hsi*5880+440748)*1+lsi)*1]),28);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*31920+4282516)*1+lsi)*1]), &(inteval->stack[((hsi*17640+4264876)*1+lsi)*1]), &(inteval->stack[((hsi*15960+4534544)*1+lsi)*1]),28);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*47880+4314436)*1+lsi)*1]), &(inteval->stack[((hsi*31920+4282516)*1+lsi)*1]), &(inteval->stack[((hsi*28728+4550504)*1+lsi)*1]),28);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*64260+4362316)*1+lsi)*1]), &(inteval->stack[((hsi*47880+4314436)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5787340)*1+lsi)*1]),28);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*79968+3963960)*1+lsi)*1]), &(inteval->stack[((hsi*64260+4362316)*1+lsi)*1]), &(inteval->stack[((hsi*57120+3195852)*1+lsi)*1]),28);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*94080+4264876)*1+lsi)*1]), &(inteval->stack[((hsi*79968+3963960)*1+lsi)*1]), &(inteval->stack[((hsi*70560+4579232)*1+lsi)*1]),28);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*105840+4358956)*1+lsi)*1]), &(inteval->stack[((hsi*94080+4264876)*1+lsi)*1]), &(inteval->stack[((hsi*82320+250002)*1+lsi)*1]),28);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*114660+120978)*1+lsi)*1]), &(inteval->stack[((hsi*105840+4358956)*1+lsi)*1]), &(inteval->stack[((hsi*91728+5830180)*1+lsi)*1]),28);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*120120+4264876)*1+lsi)*1]), &(inteval->stack[((hsi*114660+120978)*1+lsi)*1]), &(inteval->stack[((hsi*98280+4166596)*1+lsi)*1]),28);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*121968+4384996)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4264876)*1+lsi)*1]), &(inteval->stack[((hsi*101640+3862320)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*365904+3862320)*1+lsi)*1]), &(inteval->stack[((hsi*156816+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*121968+4384996)*1+lsi)*1]),4356);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*731808+9749652)*1+lsi)*1]), &(inteval->stack[((hsi*470448+3391872)*1+lsi)*1]), &(inteval->stack[((hsi*365904+3862320)*1+lsi)*1]),4356);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*1219680+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*940896+4775100)*1+lsi)*1]), &(inteval->stack[((hsi*731808+9749652)*1+lsi)*1]),4356);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*1829520+9749652)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+8181492)*1+lsi)*1]), &(inteval->stack[((hsi*1219680+3039036)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*7098+102648)*1+lsi)*1]), &(inteval->stack[((hsi*6084+109746)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+3057288)*1+lsi)*1]), &(inteval->stack[((hsi*8190+94458)*1+lsi)*1]), &(inteval->stack[((hsi*7098+102648)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+3078582)*1+lsi)*1]), &(inteval->stack[((hsi*21294+3057288)*1+lsi)*1]), &(inteval->stack[((hsi*18252+3039036)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+3115086)*1+lsi)*1]), &(inteval->stack[((hsi*9360+85098)*1+lsi)*1]), &(inteval->stack[((hsi*8190+94458)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+3139656)*1+lsi)*1]), &(inteval->stack[((hsi*24570+3115086)*1+lsi)*1]), &(inteval->stack[((hsi*21294+3057288)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+3182244)*1+lsi)*1]), &(inteval->stack[((hsi*42588+3139656)*1+lsi)*1]), &(inteval->stack[((hsi*36504+3078582)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+3243084)*1+lsi)*1]), &(inteval->stack[((hsi*10608+74490)*1+lsi)*1]), &(inteval->stack[((hsi*9360+85098)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+3271164)*1+lsi)*1]), &(inteval->stack[((hsi*28080+3243084)*1+lsi)*1]), &(inteval->stack[((hsi*24570+3115086)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+3320304)*1+lsi)*1]), &(inteval->stack[((hsi*49140+3271164)*1+lsi)*1]), &(inteval->stack[((hsi*42588+3139656)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+3391284)*1+lsi)*1]), &(inteval->stack[((hsi*70980+3320304)*1+lsi)*1]), &(inteval->stack[((hsi*60840+3182244)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+3482544)*1+lsi)*1]), &(inteval->stack[((hsi*11934+62556)*1+lsi)*1]), &(inteval->stack[((hsi*10608+74490)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+3514368)*1+lsi)*1]), &(inteval->stack[((hsi*31824+3482544)*1+lsi)*1]), &(inteval->stack[((hsi*28080+3243084)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+3570528)*1+lsi)*1]), &(inteval->stack[((hsi*56160+3514368)*1+lsi)*1]), &(inteval->stack[((hsi*49140+3271164)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+3652428)*1+lsi)*1]), &(inteval->stack[((hsi*81900+3570528)*1+lsi)*1]), &(inteval->stack[((hsi*70980+3320304)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+3758898)*1+lsi)*1]), &(inteval->stack[((hsi*106470+3652428)*1+lsi)*1]), &(inteval->stack[((hsi*91260+3391284)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+3886662)*1+lsi)*1]), &(inteval->stack[((hsi*13338+49218)*1+lsi)*1]), &(inteval->stack[((hsi*11934+62556)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+3922464)*1+lsi)*1]), &(inteval->stack[((hsi*35802+3886662)*1+lsi)*1]), &(inteval->stack[((hsi*31824+3482544)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+3986112)*1+lsi)*1]), &(inteval->stack[((hsi*63648+3922464)*1+lsi)*1]), &(inteval->stack[((hsi*56160+3514368)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+4079712)*1+lsi)*1]), &(inteval->stack[((hsi*93600+3986112)*1+lsi)*1]), &(inteval->stack[((hsi*81900+3570528)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+4202562)*1+lsi)*1]), &(inteval->stack[((hsi*122850+4079712)*1+lsi)*1]), &(inteval->stack[((hsi*106470+3652428)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+4351620)*1+lsi)*1]), &(inteval->stack[((hsi*149058+4202562)*1+lsi)*1]), &(inteval->stack[((hsi*127764+3758898)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+4521972)*1+lsi)*1]), &(inteval->stack[((hsi*14820+34398)*1+lsi)*1]), &(inteval->stack[((hsi*13338+49218)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+4561986)*1+lsi)*1]), &(inteval->stack[((hsi*40014+4521972)*1+lsi)*1]), &(inteval->stack[((hsi*35802+3886662)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+4633590)*1+lsi)*1]), &(inteval->stack[((hsi*71604+4561986)*1+lsi)*1]), &(inteval->stack[((hsi*63648+3922464)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+4739670)*1+lsi)*1]), &(inteval->stack[((hsi*106080+4633590)*1+lsi)*1]), &(inteval->stack[((hsi*93600+3986112)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+4880070)*1+lsi)*1]), &(inteval->stack[((hsi*140400+4739670)*1+lsi)*1]), &(inteval->stack[((hsi*122850+4079712)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+5052060)*1+lsi)*1]), &(inteval->stack[((hsi*171990+4880070)*1+lsi)*1]), &(inteval->stack[((hsi*149058+4202562)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+5250804)*1+lsi)*1]), &(inteval->stack[((hsi*198744+5052060)*1+lsi)*1]), &(inteval->stack[((hsi*170352+4351620)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+5469828)*1+lsi)*1]), &(inteval->stack[((hsi*16380+18018)*1+lsi)*1]), &(inteval->stack[((hsi*14820+34398)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+5514288)*1+lsi)*1]), &(inteval->stack[((hsi*44460+5469828)*1+lsi)*1]), &(inteval->stack[((hsi*40014+4521972)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+3886662)*1+lsi)*1]), &(inteval->stack[((hsi*80028+5514288)*1+lsi)*1]), &(inteval->stack[((hsi*71604+4561986)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+5594316)*1+lsi)*1]), &(inteval->stack[((hsi*119340+3886662)*1+lsi)*1]), &(inteval->stack[((hsi*106080+4633590)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+120978)*1+lsi)*1]), &(inteval->stack[((hsi*159120+5594316)*1+lsi)*1]), &(inteval->stack[((hsi*140400+4739670)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+4521972)*1+lsi)*1]), &(inteval->stack[((hsi*196560+120978)*1+lsi)*1]), &(inteval->stack[((hsi*171990+4880070)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+4006002)*1+lsi)*1]), &(inteval->stack[((hsi*229320+4521972)*1+lsi)*1]), &(inteval->stack[((hsi*198744+5052060)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+4751292)*1+lsi)*1]), &(inteval->stack[((hsi*255528+4006002)*1+lsi)*1]), &(inteval->stack[((hsi*219024+5250804)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+3482544)*1+lsi)*1]), &(inteval->stack[((hsi*6084+109746)*1+lsi)*1]), &(inteval->stack[((hsi*5148+115830)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+3497988)*1+lsi)*1]), &(inteval->stack[((hsi*18252+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*15444+3482544)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+5753436)*1+lsi)*1]), &(inteval->stack[((hsi*36504+3078582)*1+lsi)*1]), &(inteval->stack[((hsi*30888+3497988)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+3482544)*1+lsi)*1]), &(inteval->stack[((hsi*60840+3182244)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5753436)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*91260+3391284)*1+lsi)*1]), &(inteval->stack[((hsi*77220+3482544)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+3147144)*1+lsi)*1]), &(inteval->stack[((hsi*127764+3758898)*1+lsi)*1]), &(inteval->stack[((hsi*108108+3039036)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+3291288)*1+lsi)*1]), &(inteval->stack[((hsi*170352+4351620)*1+lsi)*1]), &(inteval->stack[((hsi*144144+3147144)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+3476616)*1+lsi)*1]), &(inteval->stack[((hsi*219024+5250804)*1+lsi)*1]), &(inteval->stack[((hsi*185328+3291288)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+5025072)*1+lsi)*1]), &(inteval->stack[((hsi*273780+4751292)*1+lsi)*1]), &(inteval->stack[((hsi*231660+3476616)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*18018+0)*1+lsi)*1]), &(inteval->stack[((hsi*16380+18018)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+3088176)*1+lsi)*1]), &(inteval->stack[((hsi*49140+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*44460+5469828)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+3177096)*1+lsi)*1]), &(inteval->stack[((hsi*88920+3088176)*1+lsi)*1]), &(inteval->stack[((hsi*80028+5514288)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+3310476)*1+lsi)*1]), &(inteval->stack[((hsi*133380+3177096)*1+lsi)*1]), &(inteval->stack[((hsi*119340+3886662)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+3489486)*1+lsi)*1]), &(inteval->stack[((hsi*179010+3310476)*1+lsi)*1]), &(inteval->stack[((hsi*159120+5594316)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+5308212)*1+lsi)*1]), &(inteval->stack[((hsi*222768+3489486)*1+lsi)*1]), &(inteval->stack[((hsi*196560+120978)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*262080+5308212)*1+lsi)*1]), &(inteval->stack[((hsi*229320+4521972)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+5308212)*1+lsi)*1]), &(inteval->stack[((hsi*294840+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*255528+4006002)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*319410+5308212)*1+lsi)*1]), &(inteval->stack[((hsi*273780+4751292)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+3373656)*1+lsi)*1]), &(inteval->stack[((hsi*334620+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*283140+5025072)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+3713424)*1+lsi)*1]), &(inteval->stack[((hsi*339768+3373656)*1+lsi)*1]), &(inteval->stack[((hsi*287496+5999136)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+4575912)*1+lsi)*1]), &(inteval->stack[((hsi*862488+3713424)*1+lsi)*1]), &(inteval->stack[((hsi*718740+6286632)*1+lsi)*1]),4356);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1960200+11579172)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+4575912)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+7005372)*1+lsi)*1]),4356);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*2352240+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+11579172)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+8181492)*1+lsi)*1]),4356);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*2561328+477708)*1+lsi)*1]), &(inteval->stack[((hsi*2352240+3039036)*1+lsi)*1]), &(inteval->stack[((hsi*1829520+9749652)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2561328+477708)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
