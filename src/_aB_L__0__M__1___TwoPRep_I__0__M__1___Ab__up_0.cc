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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0ml.h>
#include <HRRPart1bra0ket0mm.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__M__1___TwoPRep_I__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_I__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,652400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_I__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*4290+589030)*1+lsi)*1]), &(inteval->stack[((hsi*3630+593320)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+4474790)*1+lsi)*1]), &(inteval->stack[((hsi*5005+584025)*1+lsi)*1]), &(inteval->stack[((hsi*4290+589030)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+4487660)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4474790)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4463900)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+4509440)*1+lsi)*1]), &(inteval->stack[((hsi*5775+578250)*1+lsi)*1]), &(inteval->stack[((hsi*5005+584025)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+4524455)*1+lsi)*1]), &(inteval->stack[((hsi*15015+4509440)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4474790)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+4550195)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4524455)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4487660)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+4586495)*1+lsi)*1]), &(inteval->stack[((hsi*6600+571650)*1+lsi)*1]), &(inteval->stack[((hsi*5775+578250)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+4603820)*1+lsi)*1]), &(inteval->stack[((hsi*17325+4586495)*1+lsi)*1]), &(inteval->stack[((hsi*15015+4509440)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+4633850)*1+lsi)*1]), &(inteval->stack[((hsi*30030+4603820)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4524455)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+4676750)*1+lsi)*1]), &(inteval->stack[((hsi*42900+4633850)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4550195)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+4509440)*1+lsi)*1]), &(inteval->stack[((hsi*7480+564170)*1+lsi)*1]), &(inteval->stack[((hsi*6600+571650)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+4731200)*1+lsi)*1]), &(inteval->stack[((hsi*19800+4509440)*1+lsi)*1]), &(inteval->stack[((hsi*17325+4586495)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+4765850)*1+lsi)*1]), &(inteval->stack[((hsi*34650+4731200)*1+lsi)*1]), &(inteval->stack[((hsi*30030+4603820)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+4815900)*1+lsi)*1]), &(inteval->stack[((hsi*50050+4765850)*1+lsi)*1]), &(inteval->stack[((hsi*42900+4633850)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+4586495)*1+lsi)*1]), &(inteval->stack[((hsi*64350+4815900)*1+lsi)*1]), &(inteval->stack[((hsi*54450+4676750)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+4880250)*1+lsi)*1]), &(inteval->stack[((hsi*8415+555755)*1+lsi)*1]), &(inteval->stack[((hsi*7480+564170)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+4902690)*1+lsi)*1]), &(inteval->stack[((hsi*22440+4880250)*1+lsi)*1]), &(inteval->stack[((hsi*19800+4509440)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+4942290)*1+lsi)*1]), &(inteval->stack[((hsi*39600+4902690)*1+lsi)*1]), &(inteval->stack[((hsi*34650+4731200)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+5000040)*1+lsi)*1]), &(inteval->stack[((hsi*57750+4942290)*1+lsi)*1]), &(inteval->stack[((hsi*50050+4765850)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+5075115)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5000040)*1+lsi)*1]), &(inteval->stack[((hsi*64350+4815900)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+4731200)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5075115)*1+lsi)*1]), &(inteval->stack[((hsi*76230+4586495)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+4832840)*1+lsi)*1]), &(inteval->stack[((hsi*9405+546350)*1+lsi)*1]), &(inteval->stack[((hsi*8415+555755)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+5165205)*1+lsi)*1]), &(inteval->stack[((hsi*25245+4832840)*1+lsi)*1]), &(inteval->stack[((hsi*22440+4880250)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+5210085)*1+lsi)*1]), &(inteval->stack[((hsi*44880+5165205)*1+lsi)*1]), &(inteval->stack[((hsi*39600+4902690)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+5276085)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5210085)*1+lsi)*1]), &(inteval->stack[((hsi*57750+4942290)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+4858085)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5276085)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5000040)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+5362710)*1+lsi)*1]), &(inteval->stack[((hsi*105105+4858085)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5075115)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+4963190)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5362710)*1+lsi)*1]), &(inteval->stack[((hsi*101640+4731200)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+5093870)*1+lsi)*1]), &(inteval->stack[((hsi*3630+593320)*1+lsi)*1]), &(inteval->stack[((hsi*3025+596950)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+5102945)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*9075+5093870)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+555755)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4487660)*1+lsi)*1]), &(inteval->stack[((hsi*18150+5102945)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4550195)*1+lsi)*1]), &(inteval->stack[((hsi*30250+555755)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+4509275)*1+lsi)*1]), &(inteval->stack[((hsi*54450+4676750)*1+lsi)*1]), &(inteval->stack[((hsi*45375+4463900)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+5482830)*1+lsi)*1]), &(inteval->stack[((hsi*76230+4586495)*1+lsi)*1]), &(inteval->stack[((hsi*63525+4509275)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*101640+4731200)*1+lsi)*1]), &(inteval->stack[((hsi*84700+5482830)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+4572800)*1+lsi)*1]), &(inteval->stack[((hsi*130680+4963190)*1+lsi)*1]), &(inteval->stack[((hsi*108900+4463900)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*10450+535900)*1+lsi)*1]), &(inteval->stack[((hsi*9405+546350)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*28215+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*25245+4832840)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*50490+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*44880+5165205)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+5093870)*1+lsi)*1]), &(inteval->stack[((hsi*74800+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5210085)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*99000+5093870)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5276085)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+5093870)*1+lsi)*1]), &(inteval->stack[((hsi*121275+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*105105+4858085)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*140140+5093870)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5362710)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+5093870)*1+lsi)*1]), &(inteval->stack[((hsi*154440+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*130680+4963190)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*163350+5093870)*1+lsi)*1]), &(inteval->stack[((hsi*136125+4572800)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*5148+522766)*1+lsi)*1]), &(inteval->stack[((hsi*4356+527914)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+4476968)*1+lsi)*1]), &(inteval->stack[((hsi*6006+516760)*1+lsi)*1]), &(inteval->stack[((hsi*5148+522766)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+4492412)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4476968)*1+lsi)*1]), &(inteval->stack[((hsi*13068+4463900)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+4518548)*1+lsi)*1]), &(inteval->stack[((hsi*6930+509830)*1+lsi)*1]), &(inteval->stack[((hsi*6006+516760)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+4536566)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4518548)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4476968)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+4567454)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4536566)*1+lsi)*1]), &(inteval->stack[((hsi*26136+4492412)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+4611014)*1+lsi)*1]), &(inteval->stack[((hsi*7920+501910)*1+lsi)*1]), &(inteval->stack[((hsi*6930+509830)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+4631804)*1+lsi)*1]), &(inteval->stack[((hsi*20790+4611014)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4518548)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+535900)*1+lsi)*1]), &(inteval->stack[((hsi*36036+4631804)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4536566)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*51480+535900)*1+lsi)*1]), &(inteval->stack[((hsi*43560+4567454)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+4518548)*1+lsi)*1]), &(inteval->stack[((hsi*8976+492934)*1+lsi)*1]), &(inteval->stack[((hsi*7920+501910)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+4940640)*1+lsi)*1]), &(inteval->stack[((hsi*23760+4518548)*1+lsi)*1]), &(inteval->stack[((hsi*20790+4611014)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+4982220)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4940640)*1+lsi)*1]), &(inteval->stack[((hsi*36036+4631804)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+4611014)*1+lsi)*1]), &(inteval->stack[((hsi*60060+4982220)*1+lsi)*1]), &(inteval->stack[((hsi*51480+535900)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+5042280)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4611014)*1+lsi)*1]), &(inteval->stack[((hsi*65340+4875300)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+535900)*1+lsi)*1]), &(inteval->stack[((hsi*10098+482836)*1+lsi)*1]), &(inteval->stack[((hsi*8976+492934)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+5133756)*1+lsi)*1]), &(inteval->stack[((hsi*26928+535900)*1+lsi)*1]), &(inteval->stack[((hsi*23760+4518548)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+5181276)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5133756)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4940640)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+5250576)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5181276)*1+lsi)*1]), &(inteval->stack[((hsi*60060+4982220)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+5340666)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5250576)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4611014)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+5448774)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5340666)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5042280)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+4940640)*1+lsi)*1]), &(inteval->stack[((hsi*11286+471550)*1+lsi)*1]), &(inteval->stack[((hsi*10098+482836)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+4611014)*1+lsi)*1]), &(inteval->stack[((hsi*30294+4940640)*1+lsi)*1]), &(inteval->stack[((hsi*26928+535900)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+5570742)*1+lsi)*1]), &(inteval->stack[((hsi*53856+4611014)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5133756)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+5649942)*1+lsi)*1]), &(inteval->stack[((hsi*79200+5570742)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5181276)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+5753892)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5649942)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5250576)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+5133756)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5753892)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5340666)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+5277900)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5133756)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5448774)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+4970934)*1+lsi)*1]), &(inteval->stack[((hsi*4356+527914)*1+lsi)*1]), &(inteval->stack[((hsi*3630+532270)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+482836)*1+lsi)*1]), &(inteval->stack[((hsi*13068+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4970934)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+504616)*1+lsi)*1]), &(inteval->stack[((hsi*26136+4492412)*1+lsi)*1]), &(inteval->stack[((hsi*21780+482836)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*43560+4567454)*1+lsi)*1]), &(inteval->stack[((hsi*36300+504616)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+482836)*1+lsi)*1]), &(inteval->stack[((hsi*65340+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*54450+4463900)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5042280)*1+lsi)*1]), &(inteval->stack[((hsi*76230+482836)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+4970934)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5448774)*1+lsi)*1]), &(inteval->stack[((hsi*101640+4463900)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+5880018)*1+lsi)*1]), &(inteval->stack[((hsi*156816+5277900)*1+lsi)*1]), &(inteval->stack[((hsi*130680+4970934)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+4970934)*1+lsi)*1]), &(inteval->stack[((hsi*12540+459010)*1+lsi)*1]), &(inteval->stack[((hsi*11286+471550)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*33858+4970934)*1+lsi)*1]), &(inteval->stack[((hsi*30294+4940640)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*60588+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*53856+4611014)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*89760+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*79200+5570742)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*118800+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5649942)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+5434716)*1+lsi)*1]), &(inteval->stack[((hsi*145530+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5753892)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+5602884)*1+lsi)*1]), &(inteval->stack[((hsi*168168+5434716)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5133756)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*185328+5602884)*1+lsi)*1]), &(inteval->stack[((hsi*156816+5277900)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+5071320)*1+lsi)*1]), &(inteval->stack[((hsi*196020+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*163350+5880018)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*499125+5270970)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5071320)*1+lsi)*1]), &(inteval->stack[((hsi*166375+4708925)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*6084+443488)*1+lsi)*1]), &(inteval->stack[((hsi*5148+449572)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+4479344)*1+lsi)*1]), &(inteval->stack[((hsi*7098+436390)*1+lsi)*1]), &(inteval->stack[((hsi*6084+443488)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+4497596)*1+lsi)*1]), &(inteval->stack[((hsi*18252+4479344)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4463900)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*8190+428200)*1+lsi)*1]), &(inteval->stack[((hsi*7098+436390)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+4528484)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*18252+4479344)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+4896594)*1+lsi)*1]), &(inteval->stack[((hsi*36504+4528484)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4497596)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+4564988)*1+lsi)*1]), &(inteval->stack[((hsi*9360+418840)*1+lsi)*1]), &(inteval->stack[((hsi*8190+428200)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+459010)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4564988)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4875300)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+4948074)*1+lsi)*1]), &(inteval->stack[((hsi*42588+459010)*1+lsi)*1]), &(inteval->stack[((hsi*36504+4528484)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+4589558)*1+lsi)*1]), &(inteval->stack[((hsi*60840+4948074)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4896594)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+501598)*1+lsi)*1]), &(inteval->stack[((hsi*10608+408232)*1+lsi)*1]), &(inteval->stack[((hsi*9360+418840)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+529678)*1+lsi)*1]), &(inteval->stack[((hsi*28080+501598)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4564988)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*49140+529678)*1+lsi)*1]), &(inteval->stack[((hsi*42588+459010)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+5841075)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*60840+4948074)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+4948074)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5841075)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4589558)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+4528484)*1+lsi)*1]), &(inteval->stack[((hsi*11934+396298)*1+lsi)*1]), &(inteval->stack[((hsi*10608+408232)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+5932335)*1+lsi)*1]), &(inteval->stack[((hsi*31824+4528484)*1+lsi)*1]), &(inteval->stack[((hsi*28080+501598)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+5988495)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5932335)*1+lsi)*1]), &(inteval->stack[((hsi*49140+529678)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+459010)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5988495)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5770095)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+6070395)*1+lsi)*1]), &(inteval->stack[((hsi*106470+459010)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5841075)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6070395)*1+lsi)*1]), &(inteval->stack[((hsi*108108+4948074)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+4666778)*1+lsi)*1]), &(inteval->stack[((hsi*13338+382960)*1+lsi)*1]), &(inteval->stack[((hsi*11934+396298)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+6198159)*1+lsi)*1]), &(inteval->stack[((hsi*35802+4666778)*1+lsi)*1]), &(inteval->stack[((hsi*31824+4528484)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+6261807)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6198159)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5932335)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+6355407)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6261807)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5988495)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+5914239)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6355407)*1+lsi)*1]), &(inteval->stack[((hsi*106470+459010)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+6478257)*1+lsi)*1]), &(inteval->stack[((hsi*149058+5914239)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6070395)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+6648609)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6478257)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5770095)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+459010)*1+lsi)*1]), &(inteval->stack[((hsi*5148+449572)*1+lsi)*1]), &(inteval->stack[((hsi*4290+454720)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+6063297)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*12870+459010)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+396298)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4497596)*1+lsi)*1]), &(inteval->stack[((hsi*25740+6063297)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+439198)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4896594)*1+lsi)*1]), &(inteval->stack[((hsi*42900+396298)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+6063297)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4589558)*1+lsi)*1]), &(inteval->stack[((hsi*64350+439198)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+396298)*1+lsi)*1]), &(inteval->stack[((hsi*108108+4948074)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6063297)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*120120+396298)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+396298)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6648609)*1+lsi)*1]), &(inteval->stack[((hsi*154440+4463900)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*14820+368140)*1+lsi)*1]), &(inteval->stack[((hsi*13338+382960)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*40014+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*35802+4666778)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*71604+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6198159)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+6063297)*1+lsi)*1]), &(inteval->stack[((hsi*106080+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6261807)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6063297)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6355407)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+6063297)*1+lsi)*1]), &(inteval->stack[((hsi*171990+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*149058+5914239)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*198744+6063297)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6478257)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+5989119)*1+lsi)*1]), &(inteval->stack[((hsi*219024+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6648609)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*231660+5989119)*1+lsi)*1]), &(inteval->stack[((hsi*193050+396298)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*235950+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5071320)*1+lsi)*1]),3025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*998250+6369045)*1+lsi)*1]), &(inteval->stack[((hsi*598950+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*499125+5270970)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*7098+350031)*1+lsi)*1]), &(inteval->stack[((hsi*6006+357129)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+4893318)*1+lsi)*1]), &(inteval->stack[((hsi*8281+341750)*1+lsi)*1]), &(inteval->stack[((hsi*7098+350031)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+4914612)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4893318)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4875300)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+4950648)*1+lsi)*1]), &(inteval->stack[((hsi*9555+332195)*1+lsi)*1]), &(inteval->stack[((hsi*8281+341750)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+4975491)*1+lsi)*1]), &(inteval->stack[((hsi*24843+4950648)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4893318)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+5018079)*1+lsi)*1]), &(inteval->stack[((hsi*42588+4975491)*1+lsi)*1]), &(inteval->stack[((hsi*36036+4914612)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+368140)*1+lsi)*1]), &(inteval->stack[((hsi*10920+321275)*1+lsi)*1]), &(inteval->stack[((hsi*9555+332195)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+396805)*1+lsi)*1]), &(inteval->stack[((hsi*28665+368140)*1+lsi)*1]), &(inteval->stack[((hsi*24843+4950648)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+5078139)*1+lsi)*1]), &(inteval->stack[((hsi*49686+396805)*1+lsi)*1]), &(inteval->stack[((hsi*42588+4975491)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+446491)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5078139)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5018079)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+5149119)*1+lsi)*1]), &(inteval->stack[((hsi*12376+308899)*1+lsi)*1]), &(inteval->stack[((hsi*10920+321275)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+5181879)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5149119)*1+lsi)*1]), &(inteval->stack[((hsi*28665+368140)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*57330+5181879)*1+lsi)*1]), &(inteval->stack[((hsi*49686+396805)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+7450105)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5078139)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+7556575)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7450105)*1+lsi)*1]), &(inteval->stack[((hsi*90090+446491)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+368140)*1+lsi)*1]), &(inteval->stack[((hsi*13923+294976)*1+lsi)*1]), &(inteval->stack[((hsi*12376+308899)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+5078139)*1+lsi)*1]), &(inteval->stack[((hsi*37128+368140)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5149119)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+7682701)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5078139)*1+lsi)*1]), &(inteval->stack[((hsi*57330+5181879)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+5143659)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7682701)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7367295)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+7778251)*1+lsi)*1]), &(inteval->stack[((hsi*124215+5143659)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7450105)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7778251)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7556575)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+4950648)*1+lsi)*1]), &(inteval->stack[((hsi*15561+279415)*1+lsi)*1]), &(inteval->stack[((hsi*13923+294976)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+7927309)*1+lsi)*1]), &(inteval->stack[((hsi*41769+4950648)*1+lsi)*1]), &(inteval->stack[((hsi*37128+368140)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+8001565)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7927309)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5078139)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+8110765)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8001565)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7682701)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+8254090)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8110765)*1+lsi)*1]), &(inteval->stack[((hsi*124215+5143659)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+8427991)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8254090)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7778251)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+7682701)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8427991)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7367295)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+5078139)*1+lsi)*1]), &(inteval->stack[((hsi*6006+357129)*1+lsi)*1]), &(inteval->stack[((hsi*5005+363135)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+5093154)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*15015+5078139)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+294976)*1+lsi)*1]), &(inteval->stack[((hsi*36036+4914612)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5093154)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+5078139)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5018079)*1+lsi)*1]), &(inteval->stack[((hsi*50050+294976)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+294976)*1+lsi)*1]), &(inteval->stack[((hsi*90090+446491)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5078139)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+4992417)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7556575)*1+lsi)*1]), &(inteval->stack[((hsi*105105+294976)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+294976)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*140140+4992417)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7682701)*1+lsi)*1]), &(inteval->stack[((hsi*180180+294976)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+294976)*1+lsi)*1]), &(inteval->stack[((hsi*17290+262125)*1+lsi)*1]), &(inteval->stack[((hsi*15561+279415)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+4992417)*1+lsi)*1]), &(inteval->stack[((hsi*46683+294976)*1+lsi)*1]), &(inteval->stack[((hsi*41769+4950648)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+262125)*1+lsi)*1]), &(inteval->stack[((hsi*83538+4992417)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7927309)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*123760+262125)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8001565)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+262125)*1+lsi)*1]), &(inteval->stack[((hsi*163800+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8110765)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*200655+262125)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8254090)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+7898917)*1+lsi)*1]), &(inteval->stack[((hsi*231868+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8427991)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*255528+7898917)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7682701)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+262125)*1+lsi)*1]), &(inteval->stack[((hsi*270270+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*225225+7367295)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*275275+262125)*1+lsi)*1]), &(inteval->stack[((hsi*235950+4463900)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+8075145)*1+lsi)*1]), &(inteval->stack[((hsi*707850+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*598950+5770095)*1+lsi)*1]),3025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1663750+9273045)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+8075145)*1+lsi)*1]), &(inteval->stack[((hsi*998250+6369045)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*8190+241230)*1+lsi)*1]), &(inteval->stack[((hsi*6930+249420)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+5790885)*1+lsi)*1]), &(inteval->stack[((hsi*9555+231675)*1+lsi)*1]), &(inteval->stack[((hsi*8190+241230)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+5815455)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5790885)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5770095)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+5857035)*1+lsi)*1]), &(inteval->stack[((hsi*11025+220650)*1+lsi)*1]), &(inteval->stack[((hsi*9555+231675)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+5885700)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5857035)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5790885)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+5934840)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5885700)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5815455)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*12600+208050)*1+lsi)*1]), &(inteval->stack[((hsi*11025+220650)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+6004140)*1+lsi)*1]), &(inteval->stack[((hsi*33075+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5857035)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+4908375)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6004140)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5885700)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+6061470)*1+lsi)*1]), &(inteval->stack[((hsi*81900+4908375)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5934840)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+4990275)*1+lsi)*1]), &(inteval->stack[((hsi*14280+193770)*1+lsi)*1]), &(inteval->stack[((hsi*12600+208050)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4990275)*1+lsi)*1]), &(inteval->stack[((hsi*33075+4875300)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+5028075)*1+lsi)*1]), &(inteval->stack[((hsi*66150+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6004140)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+6165420)*1+lsi)*1]), &(inteval->stack[((hsi*95550+5028075)*1+lsi)*1]), &(inteval->stack[((hsi*81900+4908375)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+4530050)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6165420)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6061470)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+5123625)*1+lsi)*1]), &(inteval->stack[((hsi*16065+177705)*1+lsi)*1]), &(inteval->stack[((hsi*14280+193770)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5123625)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4990275)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*75600+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*66150+4463900)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+11047045)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*95550+5028075)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+4950900)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11047045)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6165420)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+6165420)*1+lsi)*1]), &(inteval->stack[((hsi*171990+4950900)*1+lsi)*1]), &(inteval->stack[((hsi*145530+4530050)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+5166465)*1+lsi)*1]), &(inteval->stack[((hsi*17955+159750)*1+lsi)*1]), &(inteval->stack[((hsi*16065+177705)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+11190370)*1+lsi)*1]), &(inteval->stack[((hsi*48195+5166465)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5123625)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+11276050)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11190370)*1+lsi)*1]), &(inteval->stack[((hsi*75600+4875300)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+11402050)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11276050)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10936795)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+11567425)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11402050)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11047045)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11567425)*1+lsi)*1]), &(inteval->stack[((hsi*171990+4950900)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*194040+6165420)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+5857035)*1+lsi)*1]), &(inteval->stack[((hsi*6930+249420)*1+lsi)*1]), &(inteval->stack[((hsi*5775+256350)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+177705)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5857035)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+5857035)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5815455)*1+lsi)*1]), &(inteval->stack[((hsi*34650+177705)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5934840)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5857035)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+5856720)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6061470)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5770095)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+5977995)*1+lsi)*1]), &(inteval->stack[((hsi*145530+4530050)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5856720)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*194040+6165420)*1+lsi)*1]), &(inteval->stack[((hsi*161700+5977995)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+5977995)*1+lsi)*1]), &(inteval->stack[((hsi*249480+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*207900+5770095)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*19950+139800)*1+lsi)*1]), &(inteval->stack[((hsi*17955+159750)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*53865+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*48195+5166465)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*96390+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11190370)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*142800+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11276050)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*189000+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11402050)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+11166115)*1+lsi)*1]), &(inteval->stack[((hsi*231525+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11567425)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+11433655)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11166115)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10936795)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*294840+11433655)*1+lsi)*1]), &(inteval->stack[((hsi*249480+4875300)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*311850+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*259875+5977995)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*317625+4875300)*1+lsi)*1]), &(inteval->stack[((hsi*275275+262125)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+11762620)*1+lsi)*1]), &(inteval->stack[((hsi*825825+10936795)*1+lsi)*1]), &(inteval->stack[((hsi*707850+7367295)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+13178320)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+11762620)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+8075145)*1+lsi)*1]),3025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2495625+15174820)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+13178320)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+9273045)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*3510+643445)*1+lsi)*1]), &(inteval->stack[((hsi*2970+646955)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+7376205)*1+lsi)*1]), &(inteval->stack[((hsi*4095+639350)*1+lsi)*1]), &(inteval->stack[((hsi*3510+643445)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+7386735)*1+lsi)*1]), &(inteval->stack[((hsi*10530+7376205)*1+lsi)*1]), &(inteval->stack[((hsi*8910+7367295)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+7404555)*1+lsi)*1]), &(inteval->stack[((hsi*4725+634625)*1+lsi)*1]), &(inteval->stack[((hsi*4095+639350)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+7416840)*1+lsi)*1]), &(inteval->stack[((hsi*12285+7404555)*1+lsi)*1]), &(inteval->stack[((hsi*10530+7376205)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+7437900)*1+lsi)*1]), &(inteval->stack[((hsi*21060+7416840)*1+lsi)*1]), &(inteval->stack[((hsi*17820+7386735)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+7467600)*1+lsi)*1]), &(inteval->stack[((hsi*5400+629225)*1+lsi)*1]), &(inteval->stack[((hsi*4725+634625)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+7481775)*1+lsi)*1]), &(inteval->stack[((hsi*14175+7467600)*1+lsi)*1]), &(inteval->stack[((hsi*12285+7404555)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+7506345)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7481775)*1+lsi)*1]), &(inteval->stack[((hsi*21060+7416840)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+7541445)*1+lsi)*1]), &(inteval->stack[((hsi*35100+7506345)*1+lsi)*1]), &(inteval->stack[((hsi*29700+7437900)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+7585995)*1+lsi)*1]), &(inteval->stack[((hsi*6120+623105)*1+lsi)*1]), &(inteval->stack[((hsi*5400+629225)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+7602195)*1+lsi)*1]), &(inteval->stack[((hsi*16200+7585995)*1+lsi)*1]), &(inteval->stack[((hsi*14175+7467600)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+7630545)*1+lsi)*1]), &(inteval->stack[((hsi*28350+7602195)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7481775)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+7671495)*1+lsi)*1]), &(inteval->stack[((hsi*40950+7630545)*1+lsi)*1]), &(inteval->stack[((hsi*35100+7506345)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+7724145)*1+lsi)*1]), &(inteval->stack[((hsi*52650+7671495)*1+lsi)*1]), &(inteval->stack[((hsi*44550+7541445)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+7786515)*1+lsi)*1]), &(inteval->stack[((hsi*6885+616220)*1+lsi)*1]), &(inteval->stack[((hsi*6120+623105)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+7804875)*1+lsi)*1]), &(inteval->stack[((hsi*18360+7786515)*1+lsi)*1]), &(inteval->stack[((hsi*16200+7585995)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+7837275)*1+lsi)*1]), &(inteval->stack[((hsi*32400+7804875)*1+lsi)*1]), &(inteval->stack[((hsi*28350+7602195)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+7884525)*1+lsi)*1]), &(inteval->stack[((hsi*47250+7837275)*1+lsi)*1]), &(inteval->stack[((hsi*40950+7630545)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+7945950)*1+lsi)*1]), &(inteval->stack[((hsi*61425+7884525)*1+lsi)*1]), &(inteval->stack[((hsi*52650+7671495)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+8019660)*1+lsi)*1]), &(inteval->stack[((hsi*73710+7945950)*1+lsi)*1]), &(inteval->stack[((hsi*62370+7724145)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+8102820)*1+lsi)*1]), &(inteval->stack[((hsi*7695+608525)*1+lsi)*1]), &(inteval->stack[((hsi*6885+616220)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+8123475)*1+lsi)*1]), &(inteval->stack[((hsi*20655+8102820)*1+lsi)*1]), &(inteval->stack[((hsi*18360+7786515)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+8160195)*1+lsi)*1]), &(inteval->stack[((hsi*36720+8123475)*1+lsi)*1]), &(inteval->stack[((hsi*32400+7804875)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+8214195)*1+lsi)*1]), &(inteval->stack[((hsi*54000+8160195)*1+lsi)*1]), &(inteval->stack[((hsi*47250+7837275)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+8285070)*1+lsi)*1]), &(inteval->stack[((hsi*70875+8214195)*1+lsi)*1]), &(inteval->stack[((hsi*61425+7884525)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+8371065)*1+lsi)*1]), &(inteval->stack[((hsi*85995+8285070)*1+lsi)*1]), &(inteval->stack[((hsi*73710+7945950)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+8469345)*1+lsi)*1]), &(inteval->stack[((hsi*98280+8371065)*1+lsi)*1]), &(inteval->stack[((hsi*83160+8019660)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*2970+646955)*1+lsi)*1]), &(inteval->stack[((hsi*2475+649925)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+8583690)*1+lsi)*1]), &(inteval->stack[((hsi*8910+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*7425+8576265)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+8598540)*1+lsi)*1]), &(inteval->stack[((hsi*17820+7386735)*1+lsi)*1]), &(inteval->stack[((hsi*14850+8583690)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+8623290)*1+lsi)*1]), &(inteval->stack[((hsi*29700+7437900)*1+lsi)*1]), &(inteval->stack[((hsi*24750+8598540)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+8660415)*1+lsi)*1]), &(inteval->stack[((hsi*44550+7541445)*1+lsi)*1]), &(inteval->stack[((hsi*37125+8623290)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+5770095)*1+lsi)*1]), &(inteval->stack[((hsi*62370+7724145)*1+lsi)*1]), &(inteval->stack[((hsi*51975+8660415)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*83160+8019660)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5770095)*1+lsi)*1]),45);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*111375+7367295)*1+lsi)*1]), &(inteval->stack[((hsi*106920+8469345)*1+lsi)*1]), &(inteval->stack[((hsi*89100+8576265)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*8550+599975)*1+lsi)*1]), &(inteval->stack[((hsi*7695+608525)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+8599350)*1+lsi)*1]), &(inteval->stack[((hsi*23085+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*20655+8102820)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+7478670)*1+lsi)*1]), &(inteval->stack[((hsi*41310+8599350)*1+lsi)*1]), &(inteval->stack[((hsi*36720+8123475)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*61200+7478670)*1+lsi)*1]), &(inteval->stack[((hsi*54000+8160195)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+7478670)*1+lsi)*1]), &(inteval->stack[((hsi*81000+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*70875+8214195)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+7577895)*1+lsi)*1]), &(inteval->stack[((hsi*99225+7478670)*1+lsi)*1]), &(inteval->stack[((hsi*85995+8285070)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*114660+7577895)*1+lsi)*1]), &(inteval->stack[((hsi*98280+8371065)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+7478670)*1+lsi)*1]), &(inteval->stack[((hsi*126360+8576265)*1+lsi)*1]), &(inteval->stack[((hsi*106920+8469345)*1+lsi)*1]),45);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*136125+7612320)*1+lsi)*1]), &(inteval->stack[((hsi*133650+7478670)*1+lsi)*1]), &(inteval->stack[((hsi*111375+7367295)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*408375+7748445)*1+lsi)*1]), &(inteval->stack[((hsi*166375+4708925)*1+lsi)*1]), &(inteval->stack[((hsi*136125+7612320)*1+lsi)*1]),3025);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*816750+8156820)*1+lsi)*1]), &(inteval->stack[((hsi*499125+5270970)*1+lsi)*1]), &(inteval->stack[((hsi*408375+7748445)*1+lsi)*1]),3025);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1361250+17670445)*1+lsi)*1]), &(inteval->stack[((hsi*998250+6369045)*1+lsi)*1]), &(inteval->stack[((hsi*816750+8156820)*1+lsi)*1]),3025);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2041875+5192925)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+9273045)*1+lsi)*1]), &(inteval->stack[((hsi*1361250+17670445)*1+lsi)*1]),3025);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*2858625+7234800)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+15174820)*1+lsi)*1]), &(inteval->stack[((hsi*2041875+5192925)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+5192925)*1+lsi)*1]), &(inteval->stack[((hsi*9360+115920)*1+lsi)*1]), &(inteval->stack[((hsi*7920+125280)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+5216685)*1+lsi)*1]), &(inteval->stack[((hsi*10920+105000)*1+lsi)*1]), &(inteval->stack[((hsi*9360+115920)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+5244765)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5216685)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5192925)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+5292285)*1+lsi)*1]), &(inteval->stack[((hsi*12600+92400)*1+lsi)*1]), &(inteval->stack[((hsi*10920+105000)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+5325045)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5292285)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5216685)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+5381205)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5325045)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5244765)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+5460405)*1+lsi)*1]), &(inteval->stack[((hsi*14400+78000)*1+lsi)*1]), &(inteval->stack[((hsi*12600+92400)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+5498205)*1+lsi)*1]), &(inteval->stack[((hsi*37800+5460405)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5292285)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+5563725)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5498205)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5325045)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+5657325)*1+lsi)*1]), &(inteval->stack[((hsi*93600+5563725)*1+lsi)*1]), &(inteval->stack[((hsi*79200+5381205)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+5776125)*1+lsi)*1]), &(inteval->stack[((hsi*16320+61680)*1+lsi)*1]), &(inteval->stack[((hsi*14400+78000)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+5819325)*1+lsi)*1]), &(inteval->stack[((hsi*43200+5776125)*1+lsi)*1]), &(inteval->stack[((hsi*37800+5460405)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+5894925)*1+lsi)*1]), &(inteval->stack[((hsi*75600+5819325)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5498205)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+6004125)*1+lsi)*1]), &(inteval->stack[((hsi*109200+5894925)*1+lsi)*1]), &(inteval->stack[((hsi*93600+5563725)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+6144525)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6004125)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5657325)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+6310845)*1+lsi)*1]), &(inteval->stack[((hsi*18360+43320)*1+lsi)*1]), &(inteval->stack[((hsi*16320+61680)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+6359805)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6310845)*1+lsi)*1]), &(inteval->stack[((hsi*43200+5776125)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*86400+6359805)*1+lsi)*1]), &(inteval->stack[((hsi*75600+5819325)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+6446205)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*109200+5894925)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+10219425)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6446205)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6004125)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+6610005)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10219425)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6144525)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+10415985)*1+lsi)*1]), &(inteval->stack[((hsi*20520+22800)*1+lsi)*1]), &(inteval->stack[((hsi*18360+43320)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+139800)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10415985)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6310845)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+10471065)*1+lsi)*1]), &(inteval->stack[((hsi*97920+139800)*1+lsi)*1]), &(inteval->stack[((hsi*86400+6359805)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+237720)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10471065)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10093425)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*189000+237720)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6446205)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+6831765)*1+lsi)*1]), &(inteval->stack[((hsi*229320+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10219425)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+5776125)*1+lsi)*1]), &(inteval->stack[((hsi*262080+6831765)*1+lsi)*1]), &(inteval->stack[((hsi*221760+6610005)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*7920+125280)*1+lsi)*1]), &(inteval->stack[((hsi*6600+133200)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+10615065)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5192925)*1+lsi)*1]), &(inteval->stack[((hsi*19800+10093425)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5244765)*1+lsi)*1]), &(inteval->stack[((hsi*39600+10615065)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+10615065)*1+lsi)*1]), &(inteval->stack[((hsi*79200+5381205)*1+lsi)*1]), &(inteval->stack[((hsi*66000+10093425)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+5192925)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5657325)*1+lsi)*1]), &(inteval->stack[((hsi*99000+10615065)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+5331525)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6144525)*1+lsi)*1]), &(inteval->stack[((hsi*138600+5192925)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+6061245)*1+lsi)*1]), &(inteval->stack[((hsi*221760+6610005)*1+lsi)*1]), &(inteval->stack[((hsi*184800+5331525)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+5192925)*1+lsi)*1]), &(inteval->stack[((hsi*285120+5776125)*1+lsi)*1]), &(inteval->stack[((hsi*237600+6061245)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+6061245)*1+lsi)*1]), &(inteval->stack[((hsi*22800+0)*1+lsi)*1]), &(inteval->stack[((hsi*20520+22800)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+6122805)*1+lsi)*1]), &(inteval->stack[((hsi*61560+6061245)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10415985)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+6232965)*1+lsi)*1]), &(inteval->stack[((hsi*110160+6122805)*1+lsi)*1]), &(inteval->stack[((hsi*97920+139800)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+6396165)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6232965)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10471065)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*216000+6396165)*1+lsi)*1]), &(inteval->stack[((hsi*189000+237720)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+6061245)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*229320+4463900)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*305760+6061245)*1+lsi)*1]), &(inteval->stack[((hsi*262080+6831765)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+6061245)*1+lsi)*1]), &(inteval->stack[((hsi*336960+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*285120+5776125)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*356400+6061245)*1+lsi)*1]), &(inteval->stack[((hsi*297000+5192925)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+5192925)*1+lsi)*1]), &(inteval->stack[((hsi*363000+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*317625+4875300)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+17670445)*1+lsi)*1]), &(inteval->stack[((hsi*952875+5192925)*1+lsi)*1]), &(inteval->stack[((hsi*825825+10936795)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+17670445)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+11762620)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+4463900)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+13178320)*1+lsi)*1]),3025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*3493875+17670445)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+10093425)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+15174820)*1+lsi)*1]),3025);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*3811500+652400)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+17670445)*1+lsi)*1]), &(inteval->stack[((hsi*2858625+7234800)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3811500+652400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
