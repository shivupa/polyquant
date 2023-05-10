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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0ki.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
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
#include <_aB_K__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,738276)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*4095+671865)*1+lsi)*1]), &(inteval->stack[((hsi*3510+675960)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+5139654)*1+lsi)*1]), &(inteval->stack[((hsi*4725+667140)*1+lsi)*1]), &(inteval->stack[((hsi*4095+671865)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+5151939)*1+lsi)*1]), &(inteval->stack[((hsi*12285+5139654)*1+lsi)*1]), &(inteval->stack[((hsi*10530+5129124)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+5172999)*1+lsi)*1]), &(inteval->stack[((hsi*5400+661740)*1+lsi)*1]), &(inteval->stack[((hsi*4725+667140)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+5187174)*1+lsi)*1]), &(inteval->stack[((hsi*14175+5172999)*1+lsi)*1]), &(inteval->stack[((hsi*12285+5139654)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+5211744)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5187174)*1+lsi)*1]), &(inteval->stack[((hsi*21060+5151939)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+5246844)*1+lsi)*1]), &(inteval->stack[((hsi*6120+655620)*1+lsi)*1]), &(inteval->stack[((hsi*5400+661740)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+5263044)*1+lsi)*1]), &(inteval->stack[((hsi*16200+5246844)*1+lsi)*1]), &(inteval->stack[((hsi*14175+5172999)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+5291394)*1+lsi)*1]), &(inteval->stack[((hsi*28350+5263044)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5187174)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+5332344)*1+lsi)*1]), &(inteval->stack[((hsi*40950+5291394)*1+lsi)*1]), &(inteval->stack[((hsi*35100+5211744)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+5172999)*1+lsi)*1]), &(inteval->stack[((hsi*6885+648735)*1+lsi)*1]), &(inteval->stack[((hsi*6120+655620)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+5384994)*1+lsi)*1]), &(inteval->stack[((hsi*18360+5172999)*1+lsi)*1]), &(inteval->stack[((hsi*16200+5246844)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+5417394)*1+lsi)*1]), &(inteval->stack[((hsi*32400+5384994)*1+lsi)*1]), &(inteval->stack[((hsi*28350+5263044)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+5464644)*1+lsi)*1]), &(inteval->stack[((hsi*47250+5417394)*1+lsi)*1]), &(inteval->stack[((hsi*40950+5291394)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+5246844)*1+lsi)*1]), &(inteval->stack[((hsi*61425+5464644)*1+lsi)*1]), &(inteval->stack[((hsi*52650+5332344)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+5526069)*1+lsi)*1]), &(inteval->stack[((hsi*7695+641040)*1+lsi)*1]), &(inteval->stack[((hsi*6885+648735)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+5546724)*1+lsi)*1]), &(inteval->stack[((hsi*20655+5526069)*1+lsi)*1]), &(inteval->stack[((hsi*18360+5172999)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+5583444)*1+lsi)*1]), &(inteval->stack[((hsi*36720+5546724)*1+lsi)*1]), &(inteval->stack[((hsi*32400+5384994)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+5637444)*1+lsi)*1]), &(inteval->stack[((hsi*54000+5583444)*1+lsi)*1]), &(inteval->stack[((hsi*47250+5417394)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+5708319)*1+lsi)*1]), &(inteval->stack[((hsi*70875+5637444)*1+lsi)*1]), &(inteval->stack[((hsi*61425+5464644)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+5384994)*1+lsi)*1]), &(inteval->stack[((hsi*85995+5708319)*1+lsi)*1]), &(inteval->stack[((hsi*73710+5246844)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+5483274)*1+lsi)*1]), &(inteval->stack[((hsi*8550+632490)*1+lsi)*1]), &(inteval->stack[((hsi*7695+641040)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+5794314)*1+lsi)*1]), &(inteval->stack[((hsi*23085+5483274)*1+lsi)*1]), &(inteval->stack[((hsi*20655+5526069)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+5835624)*1+lsi)*1]), &(inteval->stack[((hsi*41310+5794314)*1+lsi)*1]), &(inteval->stack[((hsi*36720+5546724)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+5896824)*1+lsi)*1]), &(inteval->stack[((hsi*61200+5835624)*1+lsi)*1]), &(inteval->stack[((hsi*54000+5583444)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+5506359)*1+lsi)*1]), &(inteval->stack[((hsi*81000+5896824)*1+lsi)*1]), &(inteval->stack[((hsi*70875+5637444)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+5977824)*1+lsi)*1]), &(inteval->stack[((hsi*99225+5506359)*1+lsi)*1]), &(inteval->stack[((hsi*85995+5708319)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+5605584)*1+lsi)*1]), &(inteval->stack[((hsi*114660+5977824)*1+lsi)*1]), &(inteval->stack[((hsi*98280+5384994)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+5731944)*1+lsi)*1]), &(inteval->stack[((hsi*9450+623040)*1+lsi)*1]), &(inteval->stack[((hsi*8550+632490)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+6092484)*1+lsi)*1]), &(inteval->stack[((hsi*25650+5731944)*1+lsi)*1]), &(inteval->stack[((hsi*23085+5483274)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+6138654)*1+lsi)*1]), &(inteval->stack[((hsi*46170+6092484)*1+lsi)*1]), &(inteval->stack[((hsi*41310+5794314)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+6207504)*1+lsi)*1]), &(inteval->stack[((hsi*68850+6138654)*1+lsi)*1]), &(inteval->stack[((hsi*61200+5835624)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+5757594)*1+lsi)*1]), &(inteval->stack[((hsi*91800+6207504)*1+lsi)*1]), &(inteval->stack[((hsi*81000+5896824)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+6299304)*1+lsi)*1]), &(inteval->stack[((hsi*113400+5757594)*1+lsi)*1]), &(inteval->stack[((hsi*99225+5506359)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+6431604)*1+lsi)*1]), &(inteval->stack[((hsi*132300+6299304)*1+lsi)*1]), &(inteval->stack[((hsi*114660+5977824)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+5870994)*1+lsi)*1]), &(inteval->stack[((hsi*147420+6431604)*1+lsi)*1]), &(inteval->stack[((hsi*126360+5605584)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+5483274)*1+lsi)*1]), &(inteval->stack[((hsi*3510+675960)*1+lsi)*1]), &(inteval->stack[((hsi*2970+679470)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+5492184)*1+lsi)*1]), &(inteval->stack[((hsi*10530+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*8910+5483274)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+5510004)*1+lsi)*1]), &(inteval->stack[((hsi*21060+5151939)*1+lsi)*1]), &(inteval->stack[((hsi*17820+5492184)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*35100+5211744)*1+lsi)*1]), &(inteval->stack[((hsi*29700+5510004)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+5483274)*1+lsi)*1]), &(inteval->stack[((hsi*52650+5332344)*1+lsi)*1]), &(inteval->stack[((hsi*44550+5129124)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*73710+5246844)*1+lsi)*1]), &(inteval->stack[((hsi*62370+5483274)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+5212284)*1+lsi)*1]), &(inteval->stack[((hsi*98280+5384994)*1+lsi)*1]), &(inteval->stack[((hsi*83160+5129124)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+5319204)*1+lsi)*1]), &(inteval->stack[((hsi*126360+5605584)*1+lsi)*1]), &(inteval->stack[((hsi*106920+5212284)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+5452854)*1+lsi)*1]), &(inteval->stack[((hsi*157950+5870994)*1+lsi)*1]), &(inteval->stack[((hsi*133650+5319204)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*10395+612645)*1+lsi)*1]), &(inteval->stack[((hsi*9450+623040)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+5157474)*1+lsi)*1]), &(inteval->stack[((hsi*28350+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*25650+5731944)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+5208774)*1+lsi)*1]), &(inteval->stack[((hsi*51300+5157474)*1+lsi)*1]), &(inteval->stack[((hsi*46170+6092484)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+5285724)*1+lsi)*1]), &(inteval->stack[((hsi*76950+5208774)*1+lsi)*1]), &(inteval->stack[((hsi*68850+6138654)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+6028944)*1+lsi)*1]), &(inteval->stack[((hsi*103275+5285724)*1+lsi)*1]), &(inteval->stack[((hsi*91800+6207504)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*128520+6028944)*1+lsi)*1]), &(inteval->stack[((hsi*113400+5757594)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+6028944)*1+lsi)*1]), &(inteval->stack[((hsi*151200+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*132300+6299304)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*170100+6028944)*1+lsi)*1]), &(inteval->stack[((hsi*147420+6431604)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+5616204)*1+lsi)*1]), &(inteval->stack[((hsi*184275+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*157950+5870994)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*193050+5616204)*1+lsi)*1]), &(inteval->stack[((hsi*163350+5452854)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+612645)*1+lsi)*1]), &(inteval->stack[((hsi*5005+599720)*1+lsi)*1]), &(inteval->stack[((hsi*4290+604725)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+625515)*1+lsi)*1]), &(inteval->stack[((hsi*5775+593945)*1+lsi)*1]), &(inteval->stack[((hsi*5005+599720)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+640530)*1+lsi)*1]), &(inteval->stack[((hsi*15015+625515)*1+lsi)*1]), &(inteval->stack[((hsi*12870+612645)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*6600+587345)*1+lsi)*1]), &(inteval->stack[((hsi*5775+593945)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+5342469)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*15015+625515)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+5372499)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5342469)*1+lsi)*1]), &(inteval->stack[((hsi*25740+640530)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+5415399)*1+lsi)*1]), &(inteval->stack[((hsi*7480+579865)*1+lsi)*1]), &(inteval->stack[((hsi*6600+587345)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+5435199)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5415399)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5325144)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+5469849)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5435199)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5342469)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+5519899)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5469849)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5372499)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*8415+571450)*1+lsi)*1]), &(inteval->stack[((hsi*7480+579865)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+5584249)*1+lsi)*1]), &(inteval->stack[((hsi*22440+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5415399)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+5623849)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5584249)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5435199)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+5681599)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5623849)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5469849)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+5415399)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5681599)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5519899)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+5756674)*1+lsi)*1]), &(inteval->stack[((hsi*9405+562045)*1+lsi)*1]), &(inteval->stack[((hsi*8415+571450)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+5781919)*1+lsi)*1]), &(inteval->stack[((hsi*25245+5756674)*1+lsi)*1]), &(inteval->stack[((hsi*22440+5325144)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+5826799)*1+lsi)*1]), &(inteval->stack[((hsi*44880+5781919)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5584249)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+5892799)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5826799)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5623849)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+5979424)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5892799)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5681599)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+5584249)*1+lsi)*1]), &(inteval->stack[((hsi*105105+5979424)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5415399)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+5704369)*1+lsi)*1]), &(inteval->stack[((hsi*10450+551595)*1+lsi)*1]), &(inteval->stack[((hsi*9405+562045)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+6084529)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5704369)*1+lsi)*1]), &(inteval->stack[((hsi*25245+5756674)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+6135019)*1+lsi)*1]), &(inteval->stack[((hsi*50490+6084529)*1+lsi)*1]), &(inteval->stack[((hsi*44880+5781919)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+6209819)*1+lsi)*1]), &(inteval->stack[((hsi*74800+6135019)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5826799)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+5732584)*1+lsi)*1]), &(inteval->stack[((hsi*99000+6209819)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5892799)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+6308819)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5732584)*1+lsi)*1]), &(inteval->stack[((hsi*105105+5979424)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+5853859)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6308819)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5584249)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+6008299)*1+lsi)*1]), &(inteval->stack[((hsi*11550+540045)*1+lsi)*1]), &(inteval->stack[((hsi*10450+551595)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+6448959)*1+lsi)*1]), &(inteval->stack[((hsi*31350+6008299)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5704369)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+6505389)*1+lsi)*1]), &(inteval->stack[((hsi*56430+6448959)*1+lsi)*1]), &(inteval->stack[((hsi*50490+6084529)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+6589539)*1+lsi)*1]), &(inteval->stack[((hsi*84150+6505389)*1+lsi)*1]), &(inteval->stack[((hsi*74800+6135019)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+6039649)*1+lsi)*1]), &(inteval->stack[((hsi*112200+6589539)*1+lsi)*1]), &(inteval->stack[((hsi*99000+6209819)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+6701739)*1+lsi)*1]), &(inteval->stack[((hsi*138600+6039649)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5732584)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+6863439)*1+lsi)*1]), &(inteval->stack[((hsi*161700+6701739)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6308819)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+6178249)*1+lsi)*1]), &(inteval->stack[((hsi*180180+6863439)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5853859)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+5704369)*1+lsi)*1]), &(inteval->stack[((hsi*4290+604725)*1+lsi)*1]), &(inteval->stack[((hsi*3630+609015)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+5715259)*1+lsi)*1]), &(inteval->stack[((hsi*12870+612645)*1+lsi)*1]), &(inteval->stack[((hsi*10890+5704369)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+5737039)*1+lsi)*1]), &(inteval->stack[((hsi*25740+640530)*1+lsi)*1]), &(inteval->stack[((hsi*21780+5715259)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+551595)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5372499)*1+lsi)*1]), &(inteval->stack[((hsi*36300+5737039)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+5704369)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5519899)*1+lsi)*1]), &(inteval->stack[((hsi*54450+551595)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+551595)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5415399)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5704369)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5584249)*1+lsi)*1]), &(inteval->stack[((hsi*101640+551595)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+5455824)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5853859)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5325144)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+5619174)*1+lsi)*1]), &(inteval->stack[((hsi*193050+6178249)*1+lsi)*1]), &(inteval->stack[((hsi*163350+5455824)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*12705+527340)*1+lsi)*1]), &(inteval->stack[((hsi*11550+540045)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+5359794)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*31350+6008299)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*62700+5359794)*1+lsi)*1]), &(inteval->stack[((hsi*56430+6448959)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*94050+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*84150+6505389)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*126225+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*112200+6589539)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+6371299)*1+lsi)*1]), &(inteval->stack[((hsi*157080+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*138600+6039649)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*184800+6371299)*1+lsi)*1]), &(inteval->stack[((hsi*161700+6701739)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+6371299)*1+lsi)*1]), &(inteval->stack[((hsi*207900+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*180180+6863439)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*225225+6371299)*1+lsi)*1]), &(inteval->stack[((hsi*193050+6178249)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5818824)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5619174)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+5564724)*1+lsi)*1]), &(inteval->stack[((hsi*239580+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*196020+5129124)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+527340)*1+lsi)*1]), &(inteval->stack[((hsi*6006+511830)*1+lsi)*1]), &(inteval->stack[((hsi*5148+517836)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+542784)*1+lsi)*1]), &(inteval->stack[((hsi*6930+504900)*1+lsi)*1]), &(inteval->stack[((hsi*6006+511830)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+560802)*1+lsi)*1]), &(inteval->stack[((hsi*18018+542784)*1+lsi)*1]), &(inteval->stack[((hsi*15444+527340)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+591690)*1+lsi)*1]), &(inteval->stack[((hsi*7920+496980)*1+lsi)*1]), &(inteval->stack[((hsi*6930+504900)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+612480)*1+lsi)*1]), &(inteval->stack[((hsi*20790+591690)*1+lsi)*1]), &(inteval->stack[((hsi*18018+542784)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*36036+612480)*1+lsi)*1]), &(inteval->stack[((hsi*30888+560802)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+648516)*1+lsi)*1]), &(inteval->stack[((hsi*8976+488004)*1+lsi)*1]), &(inteval->stack[((hsi*7920+496980)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+6204264)*1+lsi)*1]), &(inteval->stack[((hsi*23760+648516)*1+lsi)*1]), &(inteval->stack[((hsi*20790+591690)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+6245844)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6204264)*1+lsi)*1]), &(inteval->stack[((hsi*36036+612480)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+6305904)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6245844)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6152784)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+591690)*1+lsi)*1]), &(inteval->stack[((hsi*10098+477906)*1+lsi)*1]), &(inteval->stack[((hsi*8976+488004)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+6383124)*1+lsi)*1]), &(inteval->stack[((hsi*26928+591690)*1+lsi)*1]), &(inteval->stack[((hsi*23760+648516)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+6430644)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6383124)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6204264)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6499944)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6430644)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6245844)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+6590034)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6499944)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6305904)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+6204264)*1+lsi)*1]), &(inteval->stack[((hsi*11286+466620)*1+lsi)*1]), &(inteval->stack[((hsi*10098+477906)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+6234558)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6204264)*1+lsi)*1]), &(inteval->stack[((hsi*26928+591690)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+591690)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6234558)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6383124)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+6698142)*1+lsi)*1]), &(inteval->stack[((hsi*79200+591690)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6430644)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+6802092)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6698142)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6499944)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+6383124)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6802092)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6590034)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+6527268)*1+lsi)*1]), &(inteval->stack[((hsi*12540+454080)*1+lsi)*1]), &(inteval->stack[((hsi*11286+466620)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+6928218)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6527268)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6204264)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+6988806)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6928218)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6234558)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+7078566)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6988806)*1+lsi)*1]), &(inteval->stack[((hsi*79200+591690)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+7197366)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7078566)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6698142)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+7342896)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7197366)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6802092)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+6698142)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7342896)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6383124)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+6204264)*1+lsi)*1]), &(inteval->stack[((hsi*13860+440220)*1+lsi)*1]), &(inteval->stack[((hsi*12540+454080)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+591690)*1+lsi)*1]), &(inteval->stack[((hsi*37620+6204264)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6527268)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+7511064)*1+lsi)*1]), &(inteval->stack[((hsi*67716+591690)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6928218)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+7612044)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7511064)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6988806)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+6883470)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7612044)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7078566)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+7746684)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6883470)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7197366)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+7049790)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7746684)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7342896)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+7266006)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7049790)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6698142)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+6241884)*1+lsi)*1]), &(inteval->stack[((hsi*5148+517836)*1+lsi)*1]), &(inteval->stack[((hsi*4356+522984)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+454080)*1+lsi)*1]), &(inteval->stack[((hsi*15444+527340)*1+lsi)*1]), &(inteval->stack[((hsi*13068+6241884)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+480216)*1+lsi)*1]), &(inteval->stack[((hsi*30888+560802)*1+lsi)*1]), &(inteval->stack[((hsi*26136+454080)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+523776)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*43560+480216)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+7940724)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6305904)*1+lsi)*1]), &(inteval->stack[((hsi*65340+523776)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+6241884)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6590034)*1+lsi)*1]), &(inteval->stack[((hsi*91476+7940724)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+6527268)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6383124)*1+lsi)*1]), &(inteval->stack[((hsi*121968+6241884)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6241884)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6698142)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6527268)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+6437904)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7266006)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6241884)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*15246+424974)*1+lsi)*1]), &(inteval->stack[((hsi*13860+440220)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+6241884)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*37620+6204264)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*75240+6241884)*1+lsi)*1]), &(inteval->stack[((hsi*67716+591690)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*112860+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7511064)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+424974)*1+lsi)*1]), &(inteval->stack[((hsi*151470+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7612044)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*188496+424974)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6883470)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*221760+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7746684)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*249480+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7049790)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*270270+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7266006)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+6960624)*1+lsi)*1]), &(inteval->stack[((hsi*283140+6677484)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6437904)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*287496+6960624)*1+lsi)*1]), &(inteval->stack[((hsi*239580+5325144)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+7248120)*1+lsi)*1]), &(inteval->stack[((hsi*718740+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*588060+5564724)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+424974)*1+lsi)*1]), &(inteval->stack[((hsi*7098+406644)*1+lsi)*1]), &(inteval->stack[((hsi*6084+413742)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*8190+398454)*1+lsi)*1]), &(inteval->stack[((hsi*7098+406644)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+443226)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*18252+424974)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+5346438)*1+lsi)*1]), &(inteval->stack[((hsi*9360+389094)*1+lsi)*1]), &(inteval->stack[((hsi*8190+398454)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+479730)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5346438)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5325144)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+5371008)*1+lsi)*1]), &(inteval->stack[((hsi*42588+479730)*1+lsi)*1]), &(inteval->stack[((hsi*36504+443226)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+522318)*1+lsi)*1]), &(inteval->stack[((hsi*10608+378486)*1+lsi)*1]), &(inteval->stack[((hsi*9360+389094)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+5431848)*1+lsi)*1]), &(inteval->stack[((hsi*28080+522318)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5346438)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+550398)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5431848)*1+lsi)*1]), &(inteval->stack[((hsi*42588+479730)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*70980+550398)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5371008)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+6871524)*1+lsi)*1]), &(inteval->stack[((hsi*11934+366552)*1+lsi)*1]), &(inteval->stack[((hsi*10608+378486)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+5480988)*1+lsi)*1]), &(inteval->stack[((hsi*31824+6871524)*1+lsi)*1]), &(inteval->stack[((hsi*28080+522318)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+8515500)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5480988)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5431848)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+8597400)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8515500)*1+lsi)*1]), &(inteval->stack[((hsi*70980+550398)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+479730)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8597400)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8424240)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+607494)*1+lsi)*1]), &(inteval->stack[((hsi*13338+353214)*1+lsi)*1]), &(inteval->stack[((hsi*11934+366552)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+8703870)*1+lsi)*1]), &(inteval->stack[((hsi*35802+607494)*1+lsi)*1]), &(inteval->stack[((hsi*31824+6871524)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+8767518)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8703870)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5480988)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+5431848)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8767518)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8515500)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+8861118)*1+lsi)*1]), &(inteval->stack[((hsi*122850+5431848)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8597400)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+8515500)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8861118)*1+lsi)*1]), &(inteval->stack[((hsi*127764+479730)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+6871524)*1+lsi)*1]), &(inteval->stack[((hsi*14820+338394)*1+lsi)*1]), &(inteval->stack[((hsi*13338+353214)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+9010176)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6871524)*1+lsi)*1]), &(inteval->stack[((hsi*35802+607494)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+9081780)*1+lsi)*1]), &(inteval->stack[((hsi*71604+9010176)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8703870)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+9187860)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9081780)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8767518)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+8685852)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9187860)*1+lsi)*1]), &(inteval->stack[((hsi*122850+5431848)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+9328260)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8685852)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8861118)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+9527004)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9328260)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8515500)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+8857842)*1+lsi)*1]), &(inteval->stack[((hsi*16380+322014)*1+lsi)*1]), &(inteval->stack[((hsi*14820+338394)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+5431848)*1+lsi)*1]), &(inteval->stack[((hsi*44460+8857842)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6871524)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+9746028)*1+lsi)*1]), &(inteval->stack[((hsi*80028+5431848)*1+lsi)*1]), &(inteval->stack[((hsi*71604+9010176)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+8902302)*1+lsi)*1]), &(inteval->stack[((hsi*119340+9746028)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9081780)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+9865368)*1+lsi)*1]), &(inteval->stack[((hsi*159120+8902302)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9187860)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+9061422)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9865368)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8685852)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+10061928)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9061422)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9328260)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+10317456)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10061928)*1+lsi)*1]), &(inteval->stack[((hsi*219024+9527004)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+9290742)*1+lsi)*1]), &(inteval->stack[((hsi*6084+413742)*1+lsi)*1]), &(inteval->stack[((hsi*5148+419826)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+9306186)*1+lsi)*1]), &(inteval->stack[((hsi*18252+424974)*1+lsi)*1]), &(inteval->stack[((hsi*15444+9290742)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+9337074)*1+lsi)*1]), &(inteval->stack[((hsi*36504+443226)*1+lsi)*1]), &(inteval->stack[((hsi*30888+9306186)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+8685852)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5371008)*1+lsi)*1]), &(inteval->stack[((hsi*51480+9337074)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+9290742)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8685852)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+8685852)*1+lsi)*1]), &(inteval->stack[((hsi*127764+479730)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9290742)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+338394)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8515500)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8685852)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*219024+9527004)*1+lsi)*1]), &(inteval->stack[((hsi*185328+338394)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+9290742)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10317456)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8424240)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*18018+303996)*1+lsi)*1]), &(inteval->stack[((hsi*16380+322014)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+8473380)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*44460+8857842)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+303996)*1+lsi)*1]), &(inteval->stack[((hsi*88920+8473380)*1+lsi)*1]), &(inteval->stack[((hsi*80028+5431848)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*133380+303996)*1+lsi)*1]), &(inteval->stack[((hsi*119340+9746028)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+303996)*1+lsi)*1]), &(inteval->stack[((hsi*179010+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*159120+8902302)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*222768+303996)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9865368)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+9573882)*1+lsi)*1]), &(inteval->stack[((hsi*262080+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9061422)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*294840+9573882)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10061928)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+9573882)*1+lsi)*1]), &(inteval->stack[((hsi*319410+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10317456)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*334620+9573882)*1+lsi)*1]), &(inteval->stack[((hsi*283140+9290742)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+8764008)*1+lsi)*1]), &(inteval->stack[((hsi*339768+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*287496+6960624)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+9626496)*1+lsi)*1]), &(inteval->stack[((hsi*862488+8764008)*1+lsi)*1]), &(inteval->stack[((hsi*718740+6152784)*1+lsi)*1]),4356);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1960200+11063976)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+9626496)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+7248120)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*8281+282611)*1+lsi)*1]), &(inteval->stack[((hsi*7098+290892)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+6174078)*1+lsi)*1]), &(inteval->stack[((hsi*9555+273056)*1+lsi)*1]), &(inteval->stack[((hsi*8281+282611)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+6198921)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6174078)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6152784)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+6241509)*1+lsi)*1]), &(inteval->stack[((hsi*10920+262136)*1+lsi)*1]), &(inteval->stack[((hsi*9555+273056)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+6270174)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6241509)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6174078)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6319860)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6270174)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6198921)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+6390840)*1+lsi)*1]), &(inteval->stack[((hsi*12376+249760)*1+lsi)*1]), &(inteval->stack[((hsi*10920+262136)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6423600)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6390840)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6241509)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+6480930)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6423600)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6270174)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+6563740)*1+lsi)*1]), &(inteval->stack[((hsi*82810+6480930)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6319860)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+6670210)*1+lsi)*1]), &(inteval->stack[((hsi*13923+235837)*1+lsi)*1]), &(inteval->stack[((hsi*12376+249760)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+6707338)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6670210)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6390840)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+6772858)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6707338)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6423600)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+6868408)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6772858)*1+lsi)*1]), &(inteval->stack[((hsi*82810+6480930)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+303996)*1+lsi)*1]), &(inteval->stack[((hsi*124215+6868408)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6563740)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6992623)*1+lsi)*1]), &(inteval->stack[((hsi*15561+220276)*1+lsi)*1]), &(inteval->stack[((hsi*13923+235837)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6992623)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6670210)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+453054)*1+lsi)*1]), &(inteval->stack[((hsi*74256+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6707338)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+7034392)*1+lsi)*1]), &(inteval->stack[((hsi*109200+453054)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6772858)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+6670210)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7034392)*1+lsi)*1]), &(inteval->stack[((hsi*124215+6868408)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*173901+6670210)*1+lsi)*1]), &(inteval->stack[((hsi*149058+303996)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+6390840)*1+lsi)*1]), &(inteval->stack[((hsi*17290+202986)*1+lsi)*1]), &(inteval->stack[((hsi*15561+220276)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+5399400)*1+lsi)*1]), &(inteval->stack[((hsi*46683+6390840)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6992623)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+6844111)*1+lsi)*1]), &(inteval->stack[((hsi*83538+5399400)*1+lsi)*1]), &(inteval->stack[((hsi*74256+5325144)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+13222920)*1+lsi)*1]), &(inteval->stack[((hsi*123760+6844111)*1+lsi)*1]), &(inteval->stack[((hsi*109200+453054)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+453054)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13222920)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7034392)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+6967871)*1+lsi)*1]), &(inteval->stack[((hsi*200655+453054)*1+lsi)*1]), &(inteval->stack[((hsi*173901+6670210)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+13386720)*1+lsi)*1]), &(inteval->stack[((hsi*231868+6967871)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13024176)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+6670210)*1+lsi)*1]), &(inteval->stack[((hsi*19110+183876)*1+lsi)*1]), &(inteval->stack[((hsi*17290+202986)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+6437523)*1+lsi)*1]), &(inteval->stack[((hsi*51870+6670210)*1+lsi)*1]), &(inteval->stack[((hsi*46683+6390840)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+13642248)*1+lsi)*1]), &(inteval->stack[((hsi*93366+6437523)*1+lsi)*1]), &(inteval->stack[((hsi*83538+5399400)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13642248)*1+lsi)*1]), &(inteval->stack[((hsi*123760+6844111)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+6722080)*1+lsi)*1]), &(inteval->stack[((hsi*185640+5325144)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13222920)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+13781478)*1+lsi)*1]), &(inteval->stack[((hsi*229320+6722080)*1+lsi)*1]), &(inteval->stack[((hsi*200655+453054)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+14049018)*1+lsi)*1]), &(inteval->stack[((hsi*267540+13781478)*1+lsi)*1]), &(inteval->stack[((hsi*231868+6967871)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+14347134)*1+lsi)*1]), &(inteval->stack[((hsi*298116+14049018)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13386720)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+6951400)*1+lsi)*1]), &(inteval->stack[((hsi*7098+290892)*1+lsi)*1]), &(inteval->stack[((hsi*6006+297990)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+6969418)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6951400)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+7005454)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6198921)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6969418)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+453054)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6319860)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7005454)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+6951400)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6563740)*1+lsi)*1]), &(inteval->stack[((hsi*90090+453054)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*149058+303996)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6951400)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+202986)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6152784)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13386720)*1+lsi)*1]), &(inteval->stack[((hsi*216216+202986)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+202986)*1+lsi)*1]), &(inteval->stack[((hsi*319410+14347134)*1+lsi)*1]), &(inteval->stack[((hsi*270270+13024176)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*21021+162855)*1+lsi)*1]), &(inteval->stack[((hsi*19110+183876)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+13081506)*1+lsi)*1]), &(inteval->stack[((hsi*57330+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*51870+6670210)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+13185246)*1+lsi)*1]), &(inteval->stack[((hsi*103740+13081506)*1+lsi)*1]), &(inteval->stack[((hsi*93366+6437523)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*155610+13185246)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13642248)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*208845+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*185640+5325144)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*259896+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*229320+6722080)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+6458544)*1+lsi)*1]), &(inteval->stack[((hsi*305760+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*267540+13781478)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*343980+6458544)*1+lsi)*1]), &(inteval->stack[((hsi*298116+14049018)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*372645+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*319410+14347134)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+6543174)*1+lsi)*1]), &(inteval->stack[((hsi*390390+6152784)*1+lsi)*1]), &(inteval->stack[((hsi*330330+202986)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*396396+6543174)*1+lsi)*1]), &(inteval->stack[((hsi*339768+8424240)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+14043480)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+13024176)*1+lsi)*1]), &(inteval->stack[((hsi*862488+8764008)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+15768456)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+14043480)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+9626496)*1+lsi)*1]),4356);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2940300+18164256)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+15768456)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+11063976)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*3276+729816)*1+lsi)*1]), &(inteval->stack[((hsi*2808+733092)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+8432664)*1+lsi)*1]), &(inteval->stack[((hsi*3780+726036)*1+lsi)*1]), &(inteval->stack[((hsi*3276+729816)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+8442492)*1+lsi)*1]), &(inteval->stack[((hsi*9828+8432664)*1+lsi)*1]), &(inteval->stack[((hsi*8424+8424240)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+8459340)*1+lsi)*1]), &(inteval->stack[((hsi*4320+721716)*1+lsi)*1]), &(inteval->stack[((hsi*3780+726036)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+8470680)*1+lsi)*1]), &(inteval->stack[((hsi*11340+8459340)*1+lsi)*1]), &(inteval->stack[((hsi*9828+8432664)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+8490336)*1+lsi)*1]), &(inteval->stack[((hsi*19656+8470680)*1+lsi)*1]), &(inteval->stack[((hsi*16848+8442492)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+8518416)*1+lsi)*1]), &(inteval->stack[((hsi*4896+716820)*1+lsi)*1]), &(inteval->stack[((hsi*4320+721716)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+8531376)*1+lsi)*1]), &(inteval->stack[((hsi*12960+8518416)*1+lsi)*1]), &(inteval->stack[((hsi*11340+8459340)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+8554056)*1+lsi)*1]), &(inteval->stack[((hsi*22680+8531376)*1+lsi)*1]), &(inteval->stack[((hsi*19656+8470680)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+8586816)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8554056)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8490336)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+8628936)*1+lsi)*1]), &(inteval->stack[((hsi*5508+711312)*1+lsi)*1]), &(inteval->stack[((hsi*4896+716820)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+8643624)*1+lsi)*1]), &(inteval->stack[((hsi*14688+8628936)*1+lsi)*1]), &(inteval->stack[((hsi*12960+8518416)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+8669544)*1+lsi)*1]), &(inteval->stack[((hsi*25920+8643624)*1+lsi)*1]), &(inteval->stack[((hsi*22680+8531376)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+8707344)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8669544)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8554056)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+8756484)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8707344)*1+lsi)*1]), &(inteval->stack[((hsi*42120+8586816)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+8815452)*1+lsi)*1]), &(inteval->stack[((hsi*6156+705156)*1+lsi)*1]), &(inteval->stack[((hsi*5508+711312)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+8831976)*1+lsi)*1]), &(inteval->stack[((hsi*16524+8815452)*1+lsi)*1]), &(inteval->stack[((hsi*14688+8628936)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+8861352)*1+lsi)*1]), &(inteval->stack[((hsi*29376+8831976)*1+lsi)*1]), &(inteval->stack[((hsi*25920+8643624)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+8904552)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8861352)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8669544)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+8961252)*1+lsi)*1]), &(inteval->stack[((hsi*56700+8904552)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8707344)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+9030048)*1+lsi)*1]), &(inteval->stack[((hsi*68796+8961252)*1+lsi)*1]), &(inteval->stack[((hsi*58968+8756484)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+9108672)*1+lsi)*1]), &(inteval->stack[((hsi*6840+698316)*1+lsi)*1]), &(inteval->stack[((hsi*6156+705156)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+9127140)*1+lsi)*1]), &(inteval->stack[((hsi*18468+9108672)*1+lsi)*1]), &(inteval->stack[((hsi*16524+8815452)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+9160188)*1+lsi)*1]), &(inteval->stack[((hsi*33048+9127140)*1+lsi)*1]), &(inteval->stack[((hsi*29376+8831976)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+9209148)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9160188)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8861352)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+9273948)*1+lsi)*1]), &(inteval->stack[((hsi*64800+9209148)*1+lsi)*1]), &(inteval->stack[((hsi*56700+8904552)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+9353328)*1+lsi)*1]), &(inteval->stack[((hsi*79380+9273948)*1+lsi)*1]), &(inteval->stack[((hsi*68796+8961252)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+9445056)*1+lsi)*1]), &(inteval->stack[((hsi*91728+9353328)*1+lsi)*1]), &(inteval->stack[((hsi*78624+9030048)*1+lsi)*1]),36);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*20520+9546144)*1+lsi)*1]), &(inteval->stack[((hsi*7560+690756)*1+lsi)*1]), &(inteval->stack[((hsi*6840+698316)*1+lsi)*1]),36);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*36936+9566664)*1+lsi)*1]), &(inteval->stack[((hsi*20520+9546144)*1+lsi)*1]), &(inteval->stack[((hsi*18468+9108672)*1+lsi)*1]),36);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*55080+9603600)*1+lsi)*1]), &(inteval->stack[((hsi*36936+9566664)*1+lsi)*1]), &(inteval->stack[((hsi*33048+9127140)*1+lsi)*1]),36);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*73440+9658680)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9603600)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9160188)*1+lsi)*1]),36);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*90720+9732120)*1+lsi)*1]), &(inteval->stack[((hsi*73440+9658680)*1+lsi)*1]), &(inteval->stack[((hsi*64800+9209148)*1+lsi)*1]),36);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*105840+9822840)*1+lsi)*1]), &(inteval->stack[((hsi*90720+9732120)*1+lsi)*1]), &(inteval->stack[((hsi*79380+9273948)*1+lsi)*1]),36);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*117936+9928680)*1+lsi)*1]), &(inteval->stack[((hsi*105840+9822840)*1+lsi)*1]), &(inteval->stack[((hsi*91728+9353328)*1+lsi)*1]),36);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*126360+10046616)*1+lsi)*1]), &(inteval->stack[((hsi*117936+9928680)*1+lsi)*1]), &(inteval->stack[((hsi*101088+9445056)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+10172976)*1+lsi)*1]), &(inteval->stack[((hsi*2808+733092)*1+lsi)*1]), &(inteval->stack[((hsi*2376+735900)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+10180104)*1+lsi)*1]), &(inteval->stack[((hsi*8424+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*7128+10172976)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+10194360)*1+lsi)*1]), &(inteval->stack[((hsi*16848+8442492)*1+lsi)*1]), &(inteval->stack[((hsi*14256+10180104)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+10218120)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8490336)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10194360)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+10253760)*1+lsi)*1]), &(inteval->stack[((hsi*42120+8586816)*1+lsi)*1]), &(inteval->stack[((hsi*35640+10218120)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+10303656)*1+lsi)*1]), &(inteval->stack[((hsi*58968+8756484)*1+lsi)*1]), &(inteval->stack[((hsi*49896+10253760)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+10370184)*1+lsi)*1]), &(inteval->stack[((hsi*78624+9030048)*1+lsi)*1]), &(inteval->stack[((hsi*66528+10303656)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+8424240)*1+lsi)*1]), &(inteval->stack[((hsi*101088+9445056)*1+lsi)*1]), &(inteval->stack[((hsi*85536+10370184)*1+lsi)*1]),36);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*130680+8531160)*1+lsi)*1]), &(inteval->stack[((hsi*126360+10046616)*1+lsi)*1]), &(inteval->stack[((hsi*106920+8424240)*1+lsi)*1]),36);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*22680+10172976)*1+lsi)*1]), &(inteval->stack[((hsi*8316+682440)*1+lsi)*1]), &(inteval->stack[((hsi*7560+690756)*1+lsi)*1]),36);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*41040+8661840)*1+lsi)*1]), &(inteval->stack[((hsi*22680+10172976)*1+lsi)*1]), &(inteval->stack[((hsi*20520+9546144)*1+lsi)*1]),36);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*61560+10172976)*1+lsi)*1]), &(inteval->stack[((hsi*41040+8661840)*1+lsi)*1]), &(inteval->stack[((hsi*36936+9566664)*1+lsi)*1]),36);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*82620+8661840)*1+lsi)*1]), &(inteval->stack[((hsi*61560+10172976)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9603600)*1+lsi)*1]),36);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*102816+8744460)*1+lsi)*1]), &(inteval->stack[((hsi*82620+8661840)*1+lsi)*1]), &(inteval->stack[((hsi*73440+9658680)*1+lsi)*1]),36);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*120960+10172976)*1+lsi)*1]), &(inteval->stack[((hsi*102816+8744460)*1+lsi)*1]), &(inteval->stack[((hsi*90720+9732120)*1+lsi)*1]),36);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*136080+8661840)*1+lsi)*1]), &(inteval->stack[((hsi*120960+10172976)*1+lsi)*1]), &(inteval->stack[((hsi*105840+9822840)*1+lsi)*1]),36);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*147420+8797920)*1+lsi)*1]), &(inteval->stack[((hsi*136080+8661840)*1+lsi)*1]), &(inteval->stack[((hsi*117936+9928680)*1+lsi)*1]),36);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*154440+8945340)*1+lsi)*1]), &(inteval->stack[((hsi*147420+8797920)*1+lsi)*1]), &(inteval->stack[((hsi*126360+10046616)*1+lsi)*1]),36);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*156816+9099780)*1+lsi)*1]), &(inteval->stack[((hsi*154440+8945340)*1+lsi)*1]), &(inteval->stack[((hsi*130680+8531160)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*470448+9256596)*1+lsi)*1]), &(inteval->stack[((hsi*196020+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*156816+9099780)*1+lsi)*1]),4356);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*940896+9727044)*1+lsi)*1]), &(inteval->stack[((hsi*588060+5564724)*1+lsi)*1]), &(inteval->stack[((hsi*470448+9256596)*1+lsi)*1]),4356);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*1568160+21104556)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+7248120)*1+lsi)*1]), &(inteval->stack[((hsi*940896+9727044)*1+lsi)*1]),4356);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*2352240+6939570)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+11063976)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+21104556)*1+lsi)*1]),4356);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*3293136+9291810)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+18164256)*1+lsi)*1]), &(inteval->stack[((hsi*2352240+6939570)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+6939570)*1+lsi)*1]), &(inteval->stack[((hsi*9555+138180)*1+lsi)*1]), &(inteval->stack[((hsi*8190+147735)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+6964140)*1+lsi)*1]), &(inteval->stack[((hsi*11025+127155)*1+lsi)*1]), &(inteval->stack[((hsi*9555+138180)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+6992805)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6964140)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6939570)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+7041945)*1+lsi)*1]), &(inteval->stack[((hsi*12600+114555)*1+lsi)*1]), &(inteval->stack[((hsi*11025+127155)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+7075020)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7041945)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6964140)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+7132350)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7075020)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6992805)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+7214250)*1+lsi)*1]), &(inteval->stack[((hsi*14280+100275)*1+lsi)*1]), &(inteval->stack[((hsi*12600+114555)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+7252050)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7214250)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7041945)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+7318200)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7252050)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7075020)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+7413750)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7318200)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7132350)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+7536600)*1+lsi)*1]), &(inteval->stack[((hsi*16065+84210)*1+lsi)*1]), &(inteval->stack[((hsi*14280+100275)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+7579440)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7536600)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7214250)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+7655040)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7579440)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7252050)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+7765290)*1+lsi)*1]), &(inteval->stack[((hsi*110250+7655040)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7318200)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7765290)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7413750)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+7908615)*1+lsi)*1]), &(inteval->stack[((hsi*17955+66255)*1+lsi)*1]), &(inteval->stack[((hsi*16065+84210)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+7956810)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7908615)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7536600)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+8042490)*1+lsi)*1]), &(inteval->stack[((hsi*85680+7956810)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7579440)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+5301114)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8042490)*1+lsi)*1]), &(inteval->stack[((hsi*110250+7655040)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+8168490)*1+lsi)*1]), &(inteval->stack[((hsi*165375+5301114)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7765290)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+5466489)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8168490)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5129124)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+8369145)*1+lsi)*1]), &(inteval->stack[((hsi*19950+46305)*1+lsi)*1]), &(inteval->stack[((hsi*17955+66255)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+8423010)*1+lsi)*1]), &(inteval->stack[((hsi*53865+8369145)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7908615)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+5695809)*1+lsi)*1]), &(inteval->stack[((hsi*96390+8423010)*1+lsi)*1]), &(inteval->stack[((hsi*85680+7956810)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+8519400)*1+lsi)*1]), &(inteval->stack[((hsi*142800+5695809)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8042490)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+5838609)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8519400)*1+lsi)*1]), &(inteval->stack[((hsi*165375+5301114)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+7536600)*1+lsi)*1]), &(inteval->stack[((hsi*231525+5838609)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8168490)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+8708400)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7536600)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5466489)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+162855)*1+lsi)*1]), &(inteval->stack[((hsi*22050+24255)*1+lsi)*1]), &(inteval->stack[((hsi*19950+46305)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+7804140)*1+lsi)*1]), &(inteval->stack[((hsi*59850+162855)*1+lsi)*1]), &(inteval->stack[((hsi*53865+8369145)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+222705)*1+lsi)*1]), &(inteval->stack[((hsi*107730+7804140)*1+lsi)*1]), &(inteval->stack[((hsi*96390+8423010)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+7911870)*1+lsi)*1]), &(inteval->stack[((hsi*160650+222705)*1+lsi)*1]), &(inteval->stack[((hsi*142800+5695809)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+6070134)*1+lsi)*1]), &(inteval->stack[((hsi*214200+7911870)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8519400)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+8126070)*1+lsi)*1]), &(inteval->stack[((hsi*264600+6070134)*1+lsi)*1]), &(inteval->stack[((hsi*231525+5838609)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+12584946)*1+lsi)*1]), &(inteval->stack[((hsi*308700+8126070)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7536600)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+5695809)*1+lsi)*1]), &(inteval->stack[((hsi*343980+12584946)*1+lsi)*1]), &(inteval->stack[((hsi*294840+8708400)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+383355)*1+lsi)*1]), &(inteval->stack[((hsi*8190+147735)*1+lsi)*1]), &(inteval->stack[((hsi*6930+155925)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+404145)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6939570)*1+lsi)*1]), &(inteval->stack[((hsi*20790+383355)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+445725)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6992805)*1+lsi)*1]), &(inteval->stack[((hsi*41580+404145)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+9003240)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7132350)*1+lsi)*1]), &(inteval->stack[((hsi*69300+445725)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+6939570)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7413750)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9003240)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+7085100)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6939570)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+7279140)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5466489)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7085100)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*294840+8708400)*1+lsi)*1]), &(inteval->stack[((hsi*249480+7279140)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+6939570)*1+lsi)*1]), &(inteval->stack[((hsi*368550+5695809)*1+lsi)*1]), &(inteval->stack[((hsi*311850+5129124)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+8434770)*1+lsi)*1]), &(inteval->stack[((hsi*24255+0)*1+lsi)*1]), &(inteval->stack[((hsi*22050+24255)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+8500920)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8434770)*1+lsi)*1]), &(inteval->stack[((hsi*59850+162855)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+8620620)*1+lsi)*1]), &(inteval->stack[((hsi*119700+8500920)*1+lsi)*1]), &(inteval->stack[((hsi*107730+7804140)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+7320720)*1+lsi)*1]), &(inteval->stack[((hsi*179550+8620620)*1+lsi)*1]), &(inteval->stack[((hsi*160650+222705)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+8434770)*1+lsi)*1]), &(inteval->stack[((hsi*240975+7320720)*1+lsi)*1]), &(inteval->stack[((hsi*214200+7911870)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+7320720)*1+lsi)*1]), &(inteval->stack[((hsi*299880+8434770)*1+lsi)*1]), &(inteval->stack[((hsi*264600+6070134)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+8434770)*1+lsi)*1]), &(inteval->stack[((hsi*352800+7320720)*1+lsi)*1]), &(inteval->stack[((hsi*308700+8126070)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+7320720)*1+lsi)*1]), &(inteval->stack[((hsi*396900+8434770)*1+lsi)*1]), &(inteval->stack[((hsi*343980+12584946)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+7750695)*1+lsi)*1]), &(inteval->stack[((hsi*429975+7320720)*1+lsi)*1]), &(inteval->stack[((hsi*368550+5695809)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*450450+7750695)*1+lsi)*1]), &(inteval->stack[((hsi*381150+6939570)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+6939570)*1+lsi)*1]), &(inteval->stack[((hsi*457380+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*396396+6543174)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+21104556)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+6939570)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+13024176)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+21104556)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+14043480)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+21104556)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+5129124)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+15768456)*1+lsi)*1]),4356);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*4116420+12584946)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+21104556)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+18164256)*1+lsi)*1]),4356);
HRRPart0bra0ket0ki(inteval, &(inteval->stack[((hsi*4390848+738276)*1+lsi)*1]), &(inteval->stack[((hsi*4116420+12584946)*1+lsi)*1]), &(inteval->stack[((hsi*3293136+9291810)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4390848+738276)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
