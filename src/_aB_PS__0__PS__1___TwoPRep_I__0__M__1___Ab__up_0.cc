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
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,988680)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*7098+883230)*1+lsi)*1]), &(inteval->stack[((hsi*6084+890328)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+7715172)*1+lsi)*1]), &(inteval->stack[((hsi*8190+875040)*1+lsi)*1]), &(inteval->stack[((hsi*7098+883230)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+7736466)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7715172)*1+lsi)*1]), &(inteval->stack[((hsi*18252+7696920)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+7772970)*1+lsi)*1]), &(inteval->stack[((hsi*9360+865680)*1+lsi)*1]), &(inteval->stack[((hsi*8190+875040)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+7797540)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7772970)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7715172)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+7840128)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7797540)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7736466)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+7900968)*1+lsi)*1]), &(inteval->stack[((hsi*10608+855072)*1+lsi)*1]), &(inteval->stack[((hsi*9360+865680)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+7929048)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7900968)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7772970)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+7978188)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7929048)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7797540)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+8049168)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7978188)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7840128)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+7772970)*1+lsi)*1]), &(inteval->stack[((hsi*11934+843138)*1+lsi)*1]), &(inteval->stack[((hsi*10608+855072)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+8140428)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7772970)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7900968)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+8196588)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8140428)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7929048)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+8278488)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8196588)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7978188)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+7900968)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8278488)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8049168)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+8384958)*1+lsi)*1]), &(inteval->stack[((hsi*13338+829800)*1+lsi)*1]), &(inteval->stack[((hsi*11934+843138)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+8420760)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8384958)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7772970)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+8484408)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8420760)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8140428)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+8578008)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8484408)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8196588)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+8700858)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8578008)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8278488)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+8140428)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8700858)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7900968)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+8310780)*1+lsi)*1]), &(inteval->stack[((hsi*14820+814980)*1+lsi)*1]), &(inteval->stack[((hsi*13338+829800)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+8849916)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8310780)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8384958)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+8921520)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8849916)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8420760)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+9027600)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8921520)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8484408)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+8350794)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9027600)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8578008)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+9168000)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8350794)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8700858)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+8522784)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9168000)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8140428)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*6084+890328)*1+lsi)*1]), &(inteval->stack[((hsi*5148+896412)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+8757252)*1+lsi)*1]), &(inteval->stack[((hsi*18252+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8741808)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+829800)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7736466)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8757252)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7840128)*1+lsi)*1]), &(inteval->stack[((hsi*51480+829800)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8049168)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7696920)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7900968)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8741808)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+7841064)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8140428)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7696920)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+8026392)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8522784)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7841064)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*16380+798600)*1+lsi)*1]), &(inteval->stack[((hsi*14820+814980)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+7741380)*1+lsi)*1]), &(inteval->stack[((hsi*44460+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8310780)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+7821408)*1+lsi)*1]), &(inteval->stack[((hsi*80028+7741380)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8849916)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*119340+7821408)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8921520)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*159120+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9027600)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*196560+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8350794)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9168000)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*255528+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8522784)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+8258052)*1+lsi)*1]), &(inteval->stack[((hsi*273780+8741808)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8026392)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*8281+777215)*1+lsi)*1]), &(inteval->stack[((hsi*7098+785496)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+7718214)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767660)*1+lsi)*1]), &(inteval->stack[((hsi*8281+777215)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+7743057)*1+lsi)*1]), &(inteval->stack[((hsi*24843+7718214)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7696920)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+7785645)*1+lsi)*1]), &(inteval->stack[((hsi*10920+756740)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767660)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+7814310)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7785645)*1+lsi)*1]), &(inteval->stack[((hsi*24843+7718214)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+7863996)*1+lsi)*1]), &(inteval->stack[((hsi*49686+7814310)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7743057)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+7934976)*1+lsi)*1]), &(inteval->stack[((hsi*12376+744364)*1+lsi)*1]), &(inteval->stack[((hsi*10920+756740)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+7967736)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7934976)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7785645)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+8025066)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7967736)*1+lsi)*1]), &(inteval->stack[((hsi*49686+7814310)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+8107876)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8025066)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7863996)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+798600)*1+lsi)*1]), &(inteval->stack[((hsi*13923+730441)*1+lsi)*1]), &(inteval->stack[((hsi*12376+744364)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+7785645)*1+lsi)*1]), &(inteval->stack[((hsi*37128+798600)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7934976)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7785645)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7967736)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+8636742)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8025066)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+7934976)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8636742)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8107876)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+835728)*1+lsi)*1]), &(inteval->stack[((hsi*15561+714880)*1+lsi)*1]), &(inteval->stack[((hsi*13923+730441)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+8760957)*1+lsi)*1]), &(inteval->stack[((hsi*41769+835728)*1+lsi)*1]), &(inteval->stack[((hsi*37128+798600)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+8835213)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8760957)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7785645)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+8944413)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8835213)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8541192)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+9087738)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8944413)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8636742)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9087738)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7934976)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+7785645)*1+lsi)*1]), &(inteval->stack[((hsi*17290+697590)*1+lsi)*1]), &(inteval->stack[((hsi*15561+714880)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+9261639)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7785645)*1+lsi)*1]), &(inteval->stack[((hsi*41769+835728)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+9345177)*1+lsi)*1]), &(inteval->stack[((hsi*83538+9261639)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8760957)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+9468937)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9345177)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8835213)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+8739936)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9468937)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8944413)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+9632737)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8739936)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9087738)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+8940591)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9632737)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8541192)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+798600)*1+lsi)*1]), &(inteval->stack[((hsi*7098+785496)*1+lsi)*1]), &(inteval->stack[((hsi*6006+792594)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+816618)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*18018+798600)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+714880)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7743057)*1+lsi)*1]), &(inteval->stack[((hsi*36036+816618)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+774940)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7863996)*1+lsi)*1]), &(inteval->stack[((hsi*60060+714880)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+9864605)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8107876)*1+lsi)*1]), &(inteval->stack[((hsi*90090+774940)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+714880)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7934976)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9864605)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+7832328)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*168168+714880)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+9864605)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8940591)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7832328)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+7832328)*1+lsi)*1]), &(inteval->stack[((hsi*19110+678480)*1+lsi)*1]), &(inteval->stack[((hsi*17290+697590)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+7884198)*1+lsi)*1]), &(inteval->stack[((hsi*51870+7832328)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7785645)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+7977564)*1+lsi)*1]), &(inteval->stack[((hsi*93366+7884198)*1+lsi)*1]), &(inteval->stack[((hsi*83538+9261639)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*139230+7977564)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9345177)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+7882560)*1+lsi)*1]), &(inteval->stack[((hsi*185640+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9468937)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+9196119)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7882560)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8739936)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9196119)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9632737)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+9196119)*1+lsi)*1]), &(inteval->stack[((hsi*298116+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8940591)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9196119)*1+lsi)*1]), &(inteval->stack[((hsi*270270+9864605)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*849420+8871522)*1+lsi)*1]), &(inteval->stack[((hsi*330330+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*283140+8258052)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*9555+653805)*1+lsi)*1]), &(inteval->stack[((hsi*8190+663360)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+7721490)*1+lsi)*1]), &(inteval->stack[((hsi*11025+642780)*1+lsi)*1]), &(inteval->stack[((hsi*9555+653805)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+7750155)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7721490)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7696920)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+7799295)*1+lsi)*1]), &(inteval->stack[((hsi*12600+630180)*1+lsi)*1]), &(inteval->stack[((hsi*11025+642780)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+7832370)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7799295)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7721490)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+7889700)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7832370)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7750155)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+7971600)*1+lsi)*1]), &(inteval->stack[((hsi*14280+615900)*1+lsi)*1]), &(inteval->stack[((hsi*12600+630180)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+8009400)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7971600)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7799295)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+678480)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8009400)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7832370)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+8075550)*1+lsi)*1]), &(inteval->stack[((hsi*95550+678480)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7889700)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+774030)*1+lsi)*1]), &(inteval->stack[((hsi*16065+599835)*1+lsi)*1]), &(inteval->stack[((hsi*14280+615900)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+7799295)*1+lsi)*1]), &(inteval->stack[((hsi*42840+774030)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7971600)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7799295)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8009400)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+9831192)*1+lsi)*1]), &(inteval->stack[((hsi*110250+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*95550+678480)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+9974517)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9831192)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8075550)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+7971600)*1+lsi)*1]), &(inteval->stack[((hsi*17955+581880)*1+lsi)*1]), &(inteval->stack[((hsi*16065+599835)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+678480)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7971600)*1+lsi)*1]), &(inteval->stack[((hsi*42840+774030)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+764160)*1+lsi)*1]), &(inteval->stack[((hsi*85680+678480)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7799295)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+10146507)*1+lsi)*1]), &(inteval->stack[((hsi*126000+764160)*1+lsi)*1]), &(inteval->stack[((hsi*110250+9720942)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+10311882)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10146507)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9831192)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10311882)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9974517)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+7799295)*1+lsi)*1]), &(inteval->stack[((hsi*19950+561930)*1+lsi)*1]), &(inteval->stack[((hsi*17955+581880)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+10512537)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7799295)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7971600)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+10608927)*1+lsi)*1]), &(inteval->stack[((hsi*96390+10512537)*1+lsi)*1]), &(inteval->stack[((hsi*85680+678480)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+10751727)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10608927)*1+lsi)*1]), &(inteval->stack[((hsi*126000+764160)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+10940727)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10751727)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10146507)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+11172252)*1+lsi)*1]), &(inteval->stack[((hsi*231525+10940727)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10311882)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+10146507)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11172252)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9720942)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+678480)*1+lsi)*1]), &(inteval->stack[((hsi*8190+663360)*1+lsi)*1]), &(inteval->stack[((hsi*6930+671550)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+699270)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*20790+678480)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+740850)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7750155)*1+lsi)*1]), &(inteval->stack[((hsi*41580+699270)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+7971600)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7889700)*1+lsi)*1]), &(inteval->stack[((hsi*69300+740850)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+581880)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8075550)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7971600)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+7853160)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9974517)*1+lsi)*1]), &(inteval->stack[((hsi*145530+581880)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+581880)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7853160)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10146507)*1+lsi)*1]), &(inteval->stack[((hsi*249480+581880)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+7853160)*1+lsi)*1]), &(inteval->stack[((hsi*22050+539880)*1+lsi)*1]), &(inteval->stack[((hsi*19950+561930)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+539880)*1+lsi)*1]), &(inteval->stack[((hsi*59850+7853160)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7799295)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*107730+539880)*1+lsi)*1]), &(inteval->stack[((hsi*96390+10512537)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+7857570)*1+lsi)*1]), &(inteval->stack[((hsi*160650+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10608927)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+539880)*1+lsi)*1]), &(inteval->stack[((hsi*214200+7857570)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10751727)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*264600+539880)*1+lsi)*1]), &(inteval->stack[((hsi*231525+10940727)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+10441347)*1+lsi)*1]), &(inteval->stack[((hsi*308700+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11172252)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*343980+10441347)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10146507)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+10032792)*1+lsi)*1]), &(inteval->stack[((hsi*368550+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*311850+9720942)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*990990+10413942)*1+lsi)*1]), &(inteval->stack[((hsi*381150+10032792)*1+lsi)*1]), &(inteval->stack[((hsi*330330+8541192)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1698840+11404932)*1+lsi)*1]), &(inteval->stack[((hsi*990990+10413942)*1+lsi)*1]), &(inteval->stack[((hsi*849420+8871522)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*10920+511680)*1+lsi)*1]), &(inteval->stack[((hsi*9360+522600)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+7725000)*1+lsi)*1]), &(inteval->stack[((hsi*12600+499080)*1+lsi)*1]), &(inteval->stack[((hsi*10920+511680)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+7757760)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7725000)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7696920)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+7813920)*1+lsi)*1]), &(inteval->stack[((hsi*14400+484680)*1+lsi)*1]), &(inteval->stack[((hsi*12600+499080)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+7851720)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7813920)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7725000)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+539880)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7851720)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7757760)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+7917240)*1+lsi)*1]), &(inteval->stack[((hsi*16320+468360)*1+lsi)*1]), &(inteval->stack[((hsi*14400+484680)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7917240)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7813920)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7851720)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+7960440)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*93600+539880)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+633480)*1+lsi)*1]), &(inteval->stack[((hsi*18360+450000)*1+lsi)*1]), &(inteval->stack[((hsi*16320+468360)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+8616792)*1+lsi)*1]), &(inteval->stack[((hsi*48960+633480)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7917240)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+682440)*1+lsi)*1]), &(inteval->stack[((hsi*86400+8616792)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8541192)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+9830142)*1+lsi)*1]), &(inteval->stack[((hsi*126000+682440)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9720942)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9830142)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7960440)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+8703192)*1+lsi)*1]), &(inteval->stack[((hsi*20520+429480)*1+lsi)*1]), &(inteval->stack[((hsi*18360+450000)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+8100840)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8703192)*1+lsi)*1]), &(inteval->stack[((hsi*48960+633480)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+7813920)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8100840)*1+lsi)*1]), &(inteval->stack[((hsi*86400+8616792)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+13300332)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7813920)*1+lsi)*1]), &(inteval->stack[((hsi*126000+682440)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+633480)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13300332)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9830142)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*229320+633480)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13103772)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*22800+406680)*1+lsi)*1]), &(inteval->stack[((hsi*20520+429480)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+8758272)*1+lsi)*1]), &(inteval->stack[((hsi*61560+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8703192)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+13489332)*1+lsi)*1]), &(inteval->stack[((hsi*110160+8758272)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8100840)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+13652532)*1+lsi)*1]), &(inteval->stack[((hsi*163200+13489332)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7813920)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+13868532)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13652532)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13300332)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+14133132)*1+lsi)*1]), &(inteval->stack[((hsi*264600+13868532)*1+lsi)*1]), &(inteval->stack[((hsi*229320+633480)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+14438892)*1+lsi)*1]), &(inteval->stack[((hsi*305760+14133132)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9720942)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+633480)*1+lsi)*1]), &(inteval->stack[((hsi*9360+522600)*1+lsi)*1]), &(inteval->stack[((hsi*7920+531960)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+657240)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*23760+633480)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+704760)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7757760)*1+lsi)*1]), &(inteval->stack[((hsi*47520+657240)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*93600+539880)*1+lsi)*1]), &(inteval->stack[((hsi*79200+704760)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+429480)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7960440)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7696920)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*166320+429480)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+429480)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*221760+7696920)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*336960+14438892)*1+lsi)*1]), &(inteval->stack[((hsi*285120+429480)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+429480)*1+lsi)*1]), &(inteval->stack[((hsi*25200+381480)*1+lsi)*1]), &(inteval->stack[((hsi*22800+406680)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+497880)*1+lsi)*1]), &(inteval->stack[((hsi*68400+429480)*1+lsi)*1]), &(inteval->stack[((hsi*61560+8541192)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*123120+497880)*1+lsi)*1]), &(inteval->stack[((hsi*110160+8758272)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+381480)*1+lsi)*1]), &(inteval->stack[((hsi*183600+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*163200+13489332)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*244800+381480)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13652532)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+381480)*1+lsi)*1]), &(inteval->stack[((hsi*302400+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*264600+13868532)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*352800+381480)*1+lsi)*1]), &(inteval->stack[((hsi*305760+14133132)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+13496892)*1+lsi)*1]), &(inteval->stack[((hsi*393120+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*336960+14438892)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+381480)*1+lsi)*1]), &(inteval->stack[((hsi*421200+13496892)*1+lsi)*1]), &(inteval->stack[((hsi*356400+7696920)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1143450+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*435600+381480)*1+lsi)*1]), &(inteval->stack[((hsi*381150+10032792)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1981980+14247222)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*990990+10413942)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2831400+16229202)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+14247222)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+11404932)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*12376+349520)*1+lsi)*1]), &(inteval->stack[((hsi*10608+361896)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+9752766)*1+lsi)*1]), &(inteval->stack[((hsi*14280+335240)*1+lsi)*1]), &(inteval->stack[((hsi*12376+349520)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+9789894)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9752766)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9720942)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+9853542)*1+lsi)*1]), &(inteval->stack[((hsi*16320+318920)*1+lsi)*1]), &(inteval->stack[((hsi*14280+335240)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+9896382)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9853542)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9752766)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+9970638)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9896382)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9789894)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+10076718)*1+lsi)*1]), &(inteval->stack[((hsi*18496+300424)*1+lsi)*1]), &(inteval->stack[((hsi*16320+318920)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+10125678)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10076718)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9853542)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+10211358)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10125678)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9896382)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+10335118)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10211358)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9970638)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+10494238)*1+lsi)*1]), &(inteval->stack[((hsi*20808+279616)*1+lsi)*1]), &(inteval->stack[((hsi*18496+300424)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+10549726)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10494238)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10076718)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+10647646)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10549726)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10125678)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+10790446)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10647646)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10211358)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10790446)*1+lsi)*1]), &(inteval->stack[((hsi*159120+10335118)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+10976086)*1+lsi)*1]), &(inteval->stack[((hsi*23256+256360)*1+lsi)*1]), &(inteval->stack[((hsi*20808+279616)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+11038510)*1+lsi)*1]), &(inteval->stack[((hsi*62424+10976086)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10494238)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+7919688)*1+lsi)*1]), &(inteval->stack[((hsi*110976+11038510)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10549726)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*163200+7919688)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10647646)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+10494238)*1+lsi)*1]), &(inteval->stack[((hsi*214200+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10790446)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+19060602)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10494238)*1+lsi)*1]), &(inteval->stack[((hsi*222768+7696920)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+10076718)*1+lsi)*1]), &(inteval->stack[((hsi*25840+230520)*1+lsi)*1]), &(inteval->stack[((hsi*23256+256360)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+11149486)*1+lsi)*1]), &(inteval->stack[((hsi*69768+10076718)*1+lsi)*1]), &(inteval->stack[((hsi*62424+10976086)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+10754134)*1+lsi)*1]), &(inteval->stack[((hsi*124848+11149486)*1+lsi)*1]), &(inteval->stack[((hsi*110976+11038510)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+19357626)*1+lsi)*1]), &(inteval->stack[((hsi*184960+10754134)*1+lsi)*1]), &(inteval->stack[((hsi*163200+7919688)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+7919688)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19357626)*1+lsi)*1]), &(inteval->stack[((hsi*214200+8541192)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+19602426)*1+lsi)*1]), &(inteval->stack[((hsi*299880+7919688)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10494238)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+19948954)*1+lsi)*1]), &(inteval->stack[((hsi*346528+19602426)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19060602)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*10608+361896)*1+lsi)*1]), &(inteval->stack[((hsi*8976+372504)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+8568120)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*26928+8541192)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+10494238)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9789894)*1+lsi)*1]), &(inteval->stack[((hsi*53856+8568120)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+8541192)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9970638)*1+lsi)*1]), &(inteval->stack[((hsi*89760+10494238)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*159120+10335118)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8541192)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+10146486)*1+lsi)*1]), &(inteval->stack[((hsi*222768+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*188496+9720942)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+10397814)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19060602)*1+lsi)*1]), &(inteval->stack[((hsi*251328+10146486)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+20330842)*1+lsi)*1]), &(inteval->stack[((hsi*381888+19948954)*1+lsi)*1]), &(inteval->stack[((hsi*323136+10397814)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+10146486)*1+lsi)*1]), &(inteval->stack[((hsi*28560+201960)*1+lsi)*1]), &(inteval->stack[((hsi*25840+230520)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+10224006)*1+lsi)*1]), &(inteval->stack[((hsi*77520+10146486)*1+lsi)*1]), &(inteval->stack[((hsi*69768+10076718)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*139536+10224006)*1+lsi)*1]), &(inteval->stack[((hsi*124848+11149486)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+9929022)*1+lsi)*1]), &(inteval->stack[((hsi*208080+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*184960+10754134)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+10206462)*1+lsi)*1]), &(inteval->stack[((hsi*277440+9929022)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19357626)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+10549182)*1+lsi)*1]), &(inteval->stack[((hsi*342720+10206462)*1+lsi)*1]), &(inteval->stack[((hsi*299880+7919688)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*399840+10549182)*1+lsi)*1]), &(inteval->stack[((hsi*346528+19602426)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+10166478)*1+lsi)*1]), &(inteval->stack[((hsi*445536+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*381888+19948954)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+19060602)*1+lsi)*1]), &(inteval->stack[((hsi*477360+10166478)*1+lsi)*1]), &(inteval->stack[((hsi*403920+20330842)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1306800+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*493680+19060602)*1+lsi)*1]), &(inteval->stack[((hsi*435600+381480)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2286900+19554282)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+9720942)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+13103772)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3303300+21841182)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+19554282)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+14247222)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*4247100+25144482)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+21841182)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+16229202)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*6006+973170)*1+lsi)*1]), &(inteval->stack[((hsi*5148+979176)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+13119216)*1+lsi)*1]), &(inteval->stack[((hsi*6930+966240)*1+lsi)*1]), &(inteval->stack[((hsi*6006+973170)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+13137234)*1+lsi)*1]), &(inteval->stack[((hsi*18018+13119216)*1+lsi)*1]), &(inteval->stack[((hsi*15444+13103772)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+13168122)*1+lsi)*1]), &(inteval->stack[((hsi*7920+958320)*1+lsi)*1]), &(inteval->stack[((hsi*6930+966240)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+13188912)*1+lsi)*1]), &(inteval->stack[((hsi*20790+13168122)*1+lsi)*1]), &(inteval->stack[((hsi*18018+13119216)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+13224948)*1+lsi)*1]), &(inteval->stack[((hsi*36036+13188912)*1+lsi)*1]), &(inteval->stack[((hsi*30888+13137234)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+13276428)*1+lsi)*1]), &(inteval->stack[((hsi*8976+949344)*1+lsi)*1]), &(inteval->stack[((hsi*7920+958320)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+13300188)*1+lsi)*1]), &(inteval->stack[((hsi*23760+13276428)*1+lsi)*1]), &(inteval->stack[((hsi*20790+13168122)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+13341768)*1+lsi)*1]), &(inteval->stack[((hsi*41580+13300188)*1+lsi)*1]), &(inteval->stack[((hsi*36036+13188912)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+13401828)*1+lsi)*1]), &(inteval->stack[((hsi*60060+13341768)*1+lsi)*1]), &(inteval->stack[((hsi*51480+13224948)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+13479048)*1+lsi)*1]), &(inteval->stack[((hsi*10098+939246)*1+lsi)*1]), &(inteval->stack[((hsi*8976+949344)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+13505976)*1+lsi)*1]), &(inteval->stack[((hsi*26928+13479048)*1+lsi)*1]), &(inteval->stack[((hsi*23760+13276428)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+13553496)*1+lsi)*1]), &(inteval->stack[((hsi*47520+13505976)*1+lsi)*1]), &(inteval->stack[((hsi*41580+13300188)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+13622796)*1+lsi)*1]), &(inteval->stack[((hsi*69300+13553496)*1+lsi)*1]), &(inteval->stack[((hsi*60060+13341768)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+13712886)*1+lsi)*1]), &(inteval->stack[((hsi*90090+13622796)*1+lsi)*1]), &(inteval->stack[((hsi*77220+13401828)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+13820994)*1+lsi)*1]), &(inteval->stack[((hsi*11286+927960)*1+lsi)*1]), &(inteval->stack[((hsi*10098+939246)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+13851288)*1+lsi)*1]), &(inteval->stack[((hsi*30294+13820994)*1+lsi)*1]), &(inteval->stack[((hsi*26928+13479048)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+13905144)*1+lsi)*1]), &(inteval->stack[((hsi*53856+13851288)*1+lsi)*1]), &(inteval->stack[((hsi*47520+13505976)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+13984344)*1+lsi)*1]), &(inteval->stack[((hsi*79200+13905144)*1+lsi)*1]), &(inteval->stack[((hsi*69300+13553496)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+14088294)*1+lsi)*1]), &(inteval->stack[((hsi*103950+13984344)*1+lsi)*1]), &(inteval->stack[((hsi*90090+13622796)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+14214420)*1+lsi)*1]), &(inteval->stack[((hsi*126126+14088294)*1+lsi)*1]), &(inteval->stack[((hsi*108108+13712886)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+14358564)*1+lsi)*1]), &(inteval->stack[((hsi*12540+915420)*1+lsi)*1]), &(inteval->stack[((hsi*11286+927960)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+14392422)*1+lsi)*1]), &(inteval->stack[((hsi*33858+14358564)*1+lsi)*1]), &(inteval->stack[((hsi*30294+13820994)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+14453010)*1+lsi)*1]), &(inteval->stack[((hsi*60588+14392422)*1+lsi)*1]), &(inteval->stack[((hsi*53856+13851288)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+14542770)*1+lsi)*1]), &(inteval->stack[((hsi*89760+14453010)*1+lsi)*1]), &(inteval->stack[((hsi*79200+13905144)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+14661570)*1+lsi)*1]), &(inteval->stack[((hsi*118800+14542770)*1+lsi)*1]), &(inteval->stack[((hsi*103950+13984344)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+14807100)*1+lsi)*1]), &(inteval->stack[((hsi*145530+14661570)*1+lsi)*1]), &(inteval->stack[((hsi*126126+14088294)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+14975268)*1+lsi)*1]), &(inteval->stack[((hsi*168168+14807100)*1+lsi)*1]), &(inteval->stack[((hsi*144144+14214420)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+15160596)*1+lsi)*1]), &(inteval->stack[((hsi*5148+979176)*1+lsi)*1]), &(inteval->stack[((hsi*4356+984324)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+15173664)*1+lsi)*1]), &(inteval->stack[((hsi*15444+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*13068+15160596)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+15199800)*1+lsi)*1]), &(inteval->stack[((hsi*30888+13137234)*1+lsi)*1]), &(inteval->stack[((hsi*26136+15173664)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+15243360)*1+lsi)*1]), &(inteval->stack[((hsi*51480+13224948)*1+lsi)*1]), &(inteval->stack[((hsi*43560+15199800)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+15308700)*1+lsi)*1]), &(inteval->stack[((hsi*77220+13401828)*1+lsi)*1]), &(inteval->stack[((hsi*65340+15243360)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+15400176)*1+lsi)*1]), &(inteval->stack[((hsi*108108+13712886)*1+lsi)*1]), &(inteval->stack[((hsi*91476+15308700)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*144144+14214420)*1+lsi)*1]), &(inteval->stack[((hsi*121968+15400176)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+13260588)*1+lsi)*1]), &(inteval->stack[((hsi*185328+14975268)*1+lsi)*1]), &(inteval->stack[((hsi*156816+13103772)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+15160596)*1+lsi)*1]), &(inteval->stack[((hsi*13860+901560)*1+lsi)*1]), &(inteval->stack[((hsi*12540+915420)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+15198216)*1+lsi)*1]), &(inteval->stack[((hsi*37620+15160596)*1+lsi)*1]), &(inteval->stack[((hsi*33858+14358564)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+15265932)*1+lsi)*1]), &(inteval->stack[((hsi*67716+15198216)*1+lsi)*1]), &(inteval->stack[((hsi*60588+14392422)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+13456608)*1+lsi)*1]), &(inteval->stack[((hsi*100980+15265932)*1+lsi)*1]), &(inteval->stack[((hsi*89760+14453010)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+15160596)*1+lsi)*1]), &(inteval->stack[((hsi*134640+13456608)*1+lsi)*1]), &(inteval->stack[((hsi*118800+14542770)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+13456608)*1+lsi)*1]), &(inteval->stack[((hsi*166320+15160596)*1+lsi)*1]), &(inteval->stack[((hsi*145530+14661570)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+13650648)*1+lsi)*1]), &(inteval->stack[((hsi*194040+13456608)*1+lsi)*1]), &(inteval->stack[((hsi*168168+14807100)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+13866864)*1+lsi)*1]), &(inteval->stack[((hsi*216216+13650648)*1+lsi)*1]), &(inteval->stack[((hsi*185328+14975268)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+14098524)*1+lsi)*1]), &(inteval->stack[((hsi*231660+13866864)*1+lsi)*1]), &(inteval->stack[((hsi*196020+13260588)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*718740+14338104)*1+lsi)*1]), &(inteval->stack[((hsi*283140+8258052)*1+lsi)*1]), &(inteval->stack[((hsi*239580+14098524)*1+lsi)*1]),3630);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1437480+29391582)*1+lsi)*1]), &(inteval->stack[((hsi*849420+8871522)*1+lsi)*1]), &(inteval->stack[((hsi*718740+14338104)*1+lsi)*1]),3630);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2395800+13103772)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+11404932)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+29391582)*1+lsi)*1]),3630);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*3593700+29391582)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+16229202)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+13103772)*1+lsi)*1]),3630);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*5031180+11027742)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+25144482)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+29391582)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*13923+166005)*1+lsi)*1]), &(inteval->stack[((hsi*11934+179928)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+16094724)*1+lsi)*1]), &(inteval->stack[((hsi*16065+149940)*1+lsi)*1]), &(inteval->stack[((hsi*13923+166005)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+16136493)*1+lsi)*1]), &(inteval->stack[((hsi*41769+16094724)*1+lsi)*1]), &(inteval->stack[((hsi*35802+16058922)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+16208097)*1+lsi)*1]), &(inteval->stack[((hsi*18360+131580)*1+lsi)*1]), &(inteval->stack[((hsi*16065+149940)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+16256292)*1+lsi)*1]), &(inteval->stack[((hsi*48195+16208097)*1+lsi)*1]), &(inteval->stack[((hsi*41769+16094724)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+16339830)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16256292)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16136493)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+16459170)*1+lsi)*1]), &(inteval->stack[((hsi*20808+110772)*1+lsi)*1]), &(inteval->stack[((hsi*18360+131580)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+16514250)*1+lsi)*1]), &(inteval->stack[((hsi*55080+16459170)*1+lsi)*1]), &(inteval->stack[((hsi*48195+16208097)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+16610640)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16514250)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16256292)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+16749870)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16610640)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16339830)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+16928880)*1+lsi)*1]), &(inteval->stack[((hsi*23409+87363)*1+lsi)*1]), &(inteval->stack[((hsi*20808+110772)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+16991304)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16928880)*1+lsi)*1]), &(inteval->stack[((hsi*55080+16459170)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16991304)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16514250)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+17101464)*1+lsi)*1]), &(inteval->stack[((hsi*160650+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16610640)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+7857570)*1+lsi)*1]), &(inteval->stack[((hsi*208845+17101464)*1+lsi)*1]), &(inteval->stack[((hsi*179010+16749870)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+17310309)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61200)*1+lsi)*1]), &(inteval->stack[((hsi*23409+87363)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+17380536)*1+lsi)*1]), &(inteval->stack[((hsi*70227+17310309)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16928880)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+8108184)*1+lsi)*1]), &(inteval->stack[((hsi*124848+17380536)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16991304)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+17505384)*1+lsi)*1]), &(inteval->stack[((hsi*183600+8108184)*1+lsi)*1]), &(inteval->stack[((hsi*160650+7696920)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+8291784)*1+lsi)*1]), &(inteval->stack[((hsi*240975+17505384)*1+lsi)*1]), &(inteval->stack[((hsi*208845+17101464)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+17746359)*1+lsi)*1]), &(inteval->stack[((hsi*292383+8291784)*1+lsi)*1]), &(inteval->stack[((hsi*250614+7857570)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+8584167)*1+lsi)*1]), &(inteval->stack[((hsi*29070+32130)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61200)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+8662656)*1+lsi)*1]), &(inteval->stack[((hsi*78489+8584167)*1+lsi)*1]), &(inteval->stack[((hsi*70227+17310309)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+18080511)*1+lsi)*1]), &(inteval->stack[((hsi*140454+8662656)*1+lsi)*1]), &(inteval->stack[((hsi*124848+17380536)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+8803110)*1+lsi)*1]), &(inteval->stack[((hsi*208080+18080511)*1+lsi)*1]), &(inteval->stack[((hsi*183600+8108184)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+201960)*1+lsi)*1]), &(inteval->stack[((hsi*275400+8803110)*1+lsi)*1]), &(inteval->stack[((hsi*240975+17505384)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+16928880)*1+lsi)*1]), &(inteval->stack[((hsi*337365+201960)*1+lsi)*1]), &(inteval->stack[((hsi*292383+8291784)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+18288591)*1+lsi)*1]), &(inteval->stack[((hsi*389844+16928880)*1+lsi)*1]), &(inteval->stack[((hsi*334152+17746359)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+9078510)*1+lsi)*1]), &(inteval->stack[((hsi*11934+179928)*1+lsi)*1]), &(inteval->stack[((hsi*10098+191862)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+9108804)*1+lsi)*1]), &(inteval->stack[((hsi*35802+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9078510)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+9169392)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16136493)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9108804)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+8108184)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16339830)*1+lsi)*1]), &(inteval->stack[((hsi*100980+9169392)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*179010+16749870)*1+lsi)*1]), &(inteval->stack[((hsi*151470+8108184)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+16270980)*1+lsi)*1]), &(inteval->stack[((hsi*250614+7857570)*1+lsi)*1]), &(inteval->stack[((hsi*212058+16058922)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*334152+17746359)*1+lsi)*1]), &(inteval->stack[((hsi*282744+16270980)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*429624+18288591)*1+lsi)*1]), &(inteval->stack[((hsi*363528+7696920)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*32130+0)*1+lsi)*1]), &(inteval->stack[((hsi*29070+32130)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+7784130)*1+lsi)*1]), &(inteval->stack[((hsi*87210+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*78489+8584167)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+17318724)*1+lsi)*1]), &(inteval->stack[((hsi*156978+7784130)*1+lsi)*1]), &(inteval->stack[((hsi*140454+8662656)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*234090+17318724)*1+lsi)*1]), &(inteval->stack[((hsi*208080+18080511)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+17318724)*1+lsi)*1]), &(inteval->stack[((hsi*312120+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*275400+8803110)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*385560+17318724)*1+lsi)*1]), &(inteval->stack[((hsi*337365+201960)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+8146740)*1+lsi)*1]), &(inteval->stack[((hsi*449820+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*389844+16928880)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+16513332)*1+lsi)*1]), &(inteval->stack[((hsi*501228+8146740)*1+lsi)*1]), &(inteval->stack[((hsi*429624+18288591)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*537030+16513332)*1+lsi)*1]), &(inteval->stack[((hsi*454410+16058922)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1481040+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*555390+7696920)*1+lsi)*1]), &(inteval->stack[((hsi*493680+19060602)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2613600+29391582)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+9720942)*1+lsi)*1]),3630);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3811500+32005182)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+29391582)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+19554282)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4954950+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+32005182)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+21841182)*1+lsi)*1]),3630);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*5945940+29391582)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+16058922)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+25144482)*1+lsi)*1]),3630);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*6708240+988680)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+29391582)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+11027742)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6708240+988680)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
