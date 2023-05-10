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
#include <HRRPart0bra0ket0pdh.h>
#include <HRRPart0bra0ket0pdi.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfg.h>
#include <HRRPart0bra0ket0pfh.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgf.h>
#include <HRRPart0bra0ket0pgg.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0phd.h>
#include <HRRPart0bra0ket0phf.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0pid.h>
#include <HRRPart0bra0ket0pip.h>
#include <HRRPart0bra0ket0pkp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppi.h>
#include <HRRPart0bra0ket0ppk.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psk.h>
#include <HRRPart0bra0ket0psl.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1721610)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1600914)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1608012)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+14677182)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1592724)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1600914)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+14698476)*1+lsi)*1]), &(inteval->stack[((hsi*21294+14677182)*1+lsi)*1]), &(inteval->stack[((hsi*18252+14658930)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+14734980)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1583364)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1592724)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+14759550)*1+lsi)*1]), &(inteval->stack[((hsi*24570+14734980)*1+lsi)*1]), &(inteval->stack[((hsi*21294+14677182)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+14802138)*1+lsi)*1]), &(inteval->stack[((hsi*42588+14759550)*1+lsi)*1]), &(inteval->stack[((hsi*36504+14698476)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+14862978)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1572756)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1583364)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+14891058)*1+lsi)*1]), &(inteval->stack[((hsi*28080+14862978)*1+lsi)*1]), &(inteval->stack[((hsi*24570+14734980)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+14940198)*1+lsi)*1]), &(inteval->stack[((hsi*49140+14891058)*1+lsi)*1]), &(inteval->stack[((hsi*42588+14759550)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+15011178)*1+lsi)*1]), &(inteval->stack[((hsi*70980+14940198)*1+lsi)*1]), &(inteval->stack[((hsi*60840+14802138)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+14734980)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1560822)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1572756)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+15102438)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14734980)*1+lsi)*1]), &(inteval->stack[((hsi*28080+14862978)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+15158598)*1+lsi)*1]), &(inteval->stack[((hsi*56160+15102438)*1+lsi)*1]), &(inteval->stack[((hsi*49140+14891058)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+15240498)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15158598)*1+lsi)*1]), &(inteval->stack[((hsi*70980+14940198)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+14862978)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15240498)*1+lsi)*1]), &(inteval->stack[((hsi*91260+15011178)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+15346968)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1547484)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1560822)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+15382770)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15346968)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14734980)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+15446418)*1+lsi)*1]), &(inteval->stack[((hsi*63648+15382770)*1+lsi)*1]), &(inteval->stack[((hsi*56160+15102438)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+15540018)*1+lsi)*1]), &(inteval->stack[((hsi*93600+15446418)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15158598)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+15662868)*1+lsi)*1]), &(inteval->stack[((hsi*122850+15540018)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15240498)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+15102438)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15662868)*1+lsi)*1]), &(inteval->stack[((hsi*127764+14862978)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+15272790)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1532664)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1547484)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+15811926)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15272790)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15346968)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+15883530)*1+lsi)*1]), &(inteval->stack[((hsi*71604+15811926)*1+lsi)*1]), &(inteval->stack[((hsi*63648+15382770)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+15989610)*1+lsi)*1]), &(inteval->stack[((hsi*106080+15883530)*1+lsi)*1]), &(inteval->stack[((hsi*93600+15446418)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+15312804)*1+lsi)*1]), &(inteval->stack[((hsi*140400+15989610)*1+lsi)*1]), &(inteval->stack[((hsi*122850+15540018)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+16130010)*1+lsi)*1]), &(inteval->stack[((hsi*171990+15312804)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15662868)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+15484794)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16130010)*1+lsi)*1]), &(inteval->stack[((hsi*170352+15102438)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+15703818)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1516284)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1532664)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+16328754)*1+lsi)*1]), &(inteval->stack[((hsi*44460+15703818)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15272790)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+16408782)*1+lsi)*1]), &(inteval->stack[((hsi*80028+16328754)*1+lsi)*1]), &(inteval->stack[((hsi*71604+15811926)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+16528122)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16408782)*1+lsi)*1]), &(inteval->stack[((hsi*106080+15883530)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+15748278)*1+lsi)*1]), &(inteval->stack[((hsi*159120+16528122)*1+lsi)*1]), &(inteval->stack[((hsi*140400+15989610)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+16687242)*1+lsi)*1]), &(inteval->stack[((hsi*196560+15748278)*1+lsi)*1]), &(inteval->stack[((hsi*171990+15312804)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+16916562)*1+lsi)*1]), &(inteval->stack[((hsi*229320+16687242)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16130010)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+15944838)*1+lsi)*1]), &(inteval->stack[((hsi*255528+16916562)*1+lsi)*1]), &(inteval->stack[((hsi*219024+15484794)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+15272790)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1608012)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1614096)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+15288234)*1+lsi)*1]), &(inteval->stack[((hsi*18252+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*15444+15272790)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+15319122)*1+lsi)*1]), &(inteval->stack[((hsi*36504+14698476)*1+lsi)*1]), &(inteval->stack[((hsi*30888+15288234)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*60840+14802138)*1+lsi)*1]), &(inteval->stack[((hsi*51480+15319122)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+15272790)*1+lsi)*1]), &(inteval->stack[((hsi*91260+15011178)*1+lsi)*1]), &(inteval->stack[((hsi*77220+14658930)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*127764+14862978)*1+lsi)*1]), &(inteval->stack[((hsi*108108+15272790)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+14803074)*1+lsi)*1]), &(inteval->stack[((hsi*170352+15102438)*1+lsi)*1]), &(inteval->stack[((hsi*144144+14658930)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+14988402)*1+lsi)*1]), &(inteval->stack[((hsi*219024+15484794)*1+lsi)*1]), &(inteval->stack[((hsi*185328+14803074)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+15220062)*1+lsi)*1]), &(inteval->stack[((hsi*273780+15944838)*1+lsi)*1]), &(inteval->stack[((hsi*231660+14988402)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1498266)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1516284)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+14708070)*1+lsi)*1]), &(inteval->stack[((hsi*49140+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*44460+15703818)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+14796990)*1+lsi)*1]), &(inteval->stack[((hsi*88920+14708070)*1+lsi)*1]), &(inteval->stack[((hsi*80028+16328754)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+14930370)*1+lsi)*1]), &(inteval->stack[((hsi*133380+14796990)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16408782)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+16218618)*1+lsi)*1]), &(inteval->stack[((hsi*179010+14930370)*1+lsi)*1]), &(inteval->stack[((hsi*159120+16528122)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16218618)*1+lsi)*1]), &(inteval->stack[((hsi*196560+15748278)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+16218618)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*229320+16687242)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*294840+16218618)*1+lsi)*1]), &(inteval->stack[((hsi*255528+16916562)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+15503202)*1+lsi)*1]), &(inteval->stack[((hsi*319410+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*273780+15944838)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*334620+15503202)*1+lsi)*1]), &(inteval->stack[((hsi*283140+15220062)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1498266)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1476881)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1485162)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1519560)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1467326)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1476881)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1544403)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1519560)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1498266)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1456406)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1467326)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1519560)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+15048384)*1+lsi)*1]), &(inteval->stack[((hsi*49686+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1544403)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+15119364)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1444030)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1456406)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+15152124)*1+lsi)*1]), &(inteval->stack[((hsi*32760+15119364)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1586991)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+15209454)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15152124)*1+lsi)*1]), &(inteval->stack[((hsi*49686+14998698)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+15292264)*1+lsi)*1]), &(inteval->stack[((hsi*82810+15209454)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15048384)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1430107)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1444030)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+15398734)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*32760+15119364)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+15464254)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15398734)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15152124)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+15559804)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15464254)*1+lsi)*1]), &(inteval->stack[((hsi*82810+15209454)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+15119364)*1+lsi)*1]), &(inteval->stack[((hsi*124215+15559804)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15292264)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+15684019)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1414546)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1430107)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+15725788)*1+lsi)*1]), &(inteval->stack[((hsi*41769+15684019)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14998698)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+15800044)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15725788)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15398734)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+15909244)*1+lsi)*1]), &(inteval->stack[((hsi*109200+15800044)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15464254)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+16052569)*1+lsi)*1]), &(inteval->stack[((hsi*143325+15909244)*1+lsi)*1]), &(inteval->stack[((hsi*124215+15559804)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+15398734)*1+lsi)*1]), &(inteval->stack[((hsi*173901+16052569)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15119364)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+15597478)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1397256)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1414546)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+16226470)*1+lsi)*1]), &(inteval->stack[((hsi*46683+15597478)*1+lsi)*1]), &(inteval->stack[((hsi*41769+15684019)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+16310008)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16226470)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15725788)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+16433768)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16310008)*1+lsi)*1]), &(inteval->stack[((hsi*109200+15800044)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+15644161)*1+lsi)*1]), &(inteval->stack[((hsi*163800+16433768)*1+lsi)*1]), &(inteval->stack[((hsi*143325+15909244)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+16597568)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15644161)*1+lsi)*1]), &(inteval->stack[((hsi*173901+16052569)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+15844816)*1+lsi)*1]), &(inteval->stack[((hsi*231868+16597568)*1+lsi)*1]), &(inteval->stack[((hsi*198744+15398734)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+16100344)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1378146)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1397256)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+16829436)*1+lsi)*1]), &(inteval->stack[((hsi*51870+16100344)*1+lsi)*1]), &(inteval->stack[((hsi*46683+15597478)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+16922802)*1+lsi)*1]), &(inteval->stack[((hsi*93366+16829436)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16226470)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+17062032)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16922802)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16310008)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+16152214)*1+lsi)*1]), &(inteval->stack[((hsi*185640+17062032)*1+lsi)*1]), &(inteval->stack[((hsi*163800+16433768)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+17247672)*1+lsi)*1]), &(inteval->stack[((hsi*229320+16152214)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15644161)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+17515212)*1+lsi)*1]), &(inteval->stack[((hsi*267540+17247672)*1+lsi)*1]), &(inteval->stack[((hsi*231868+16597568)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+16381534)*1+lsi)*1]), &(inteval->stack[((hsi*298116+17515212)*1+lsi)*1]), &(inteval->stack[((hsi*255528+15844816)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+15597478)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1485162)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1492260)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+15615496)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1498266)*1+lsi)*1]), &(inteval->stack[((hsi*18018+15597478)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+15651532)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1544403)*1+lsi)*1]), &(inteval->stack[((hsi*36036+15615496)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1397256)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15048384)*1+lsi)*1]), &(inteval->stack[((hsi*60060+15651532)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+15597478)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15292264)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1397256)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+1397256)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15119364)*1+lsi)*1]), &(inteval->stack[((hsi*126126+15597478)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*198744+15398734)*1+lsi)*1]), &(inteval->stack[((hsi*168168+1397256)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+15214914)*1+lsi)*1]), &(inteval->stack[((hsi*255528+15844816)*1+lsi)*1]), &(inteval->stack[((hsi*216216+14998698)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+15485184)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16381534)*1+lsi)*1]), &(inteval->stack[((hsi*270270+15214914)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*21021+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1378146)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+15056028)*1+lsi)*1]), &(inteval->stack[((hsi*57330+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*51870+16100344)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+15815514)*1+lsi)*1]), &(inteval->stack[((hsi*103740+15056028)*1+lsi)*1]), &(inteval->stack[((hsi*93366+16829436)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*155610+15815514)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16922802)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+16700944)*1+lsi)*1]), &(inteval->stack[((hsi*208845+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*185640+17062032)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*259896+16700944)*1+lsi)*1]), &(inteval->stack[((hsi*229320+16152214)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+15815514)*1+lsi)*1]), &(inteval->stack[((hsi*305760+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*267540+17247672)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+16700944)*1+lsi)*1]), &(inteval->stack[((hsi*343980+15815514)*1+lsi)*1]), &(inteval->stack[((hsi*298116+17515212)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+15815514)*1+lsi)*1]), &(inteval->stack[((hsi*372645+16700944)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16381534)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*390390+15815514)*1+lsi)*1]), &(inteval->stack[((hsi*330330+15485184)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+15395094)*1+lsi)*1]), &(inteval->stack[((hsi*396396+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*339768+14658930)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1332450)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1342005)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1381695)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1321425)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1332450)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1410360)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1381695)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1357125)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1459500)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1308825)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1321425)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1492575)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1459500)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1381695)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1492575)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1410360)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+1549905)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1294545)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1308825)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+16496298)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1549905)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1459500)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+16562448)*1+lsi)*1]), &(inteval->stack[((hsi*66150+16496298)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1492575)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+16657998)*1+lsi)*1]), &(inteval->stack[((hsi*95550+16562448)*1+lsi)*1]), &(inteval->stack[((hsi*81900+16414398)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+1459500)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1278480)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1294545)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+16780848)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1459500)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1549905)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+1502340)*1+lsi)*1]), &(inteval->stack[((hsi*75600+16780848)*1+lsi)*1]), &(inteval->stack[((hsi*66150+16496298)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+16856448)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1502340)*1+lsi)*1]), &(inteval->stack[((hsi*95550+16562448)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+16999773)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16856448)*1+lsi)*1]), &(inteval->stack[((hsi*122850+16657998)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+16496298)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1260525)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1278480)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+16544493)*1+lsi)*1]), &(inteval->stack[((hsi*48195+16496298)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1459500)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+17171763)*1+lsi)*1]), &(inteval->stack[((hsi*85680+16544493)*1+lsi)*1]), &(inteval->stack[((hsi*75600+16780848)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+17297763)*1+lsi)*1]), &(inteval->stack[((hsi*126000+17171763)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1502340)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+17463138)*1+lsi)*1]), &(inteval->stack[((hsi*165375+17297763)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16856448)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+17663793)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17463138)*1+lsi)*1]), &(inteval->stack[((hsi*171990+16999773)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+16780848)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1260525)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+16834713)*1+lsi)*1]), &(inteval->stack[((hsi*53865+16780848)*1+lsi)*1]), &(inteval->stack[((hsi*48195+16496298)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+1459500)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16834713)*1+lsi)*1]), &(inteval->stack[((hsi*85680+16544493)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+17893113)*1+lsi)*1]), &(inteval->stack[((hsi*142800+1459500)*1+lsi)*1]), &(inteval->stack[((hsi*126000+17171763)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+18082113)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17893113)*1+lsi)*1]), &(inteval->stack[((hsi*165375+17297763)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+17171763)*1+lsi)*1]), &(inteval->stack[((hsi*231525+18082113)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17463138)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+18313638)*1+lsi)*1]), &(inteval->stack[((hsi*267540+17171763)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17663793)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+17439303)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1218525)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1240575)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+17499153)*1+lsi)*1]), &(inteval->stack[((hsi*59850+17439303)*1+lsi)*1]), &(inteval->stack[((hsi*53865+16780848)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+16496298)*1+lsi)*1]), &(inteval->stack[((hsi*107730+17499153)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16834713)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+16780848)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16496298)*1+lsi)*1]), &(inteval->stack[((hsi*142800+1459500)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+18608478)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16780848)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17893113)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+18873078)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18608478)*1+lsi)*1]), &(inteval->stack[((hsi*231525+18082113)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+17893113)*1+lsi)*1]), &(inteval->stack[((hsi*308700+18873078)*1+lsi)*1]), &(inteval->stack[((hsi*267540+17171763)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+19181778)*1+lsi)*1]), &(inteval->stack[((hsi*343980+17893113)*1+lsi)*1]), &(inteval->stack[((hsi*294840+18313638)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+17171763)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1342005)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1350195)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+17192553)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*20790+17171763)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+17234133)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1410360)*1+lsi)*1]), &(inteval->stack[((hsi*41580+17192553)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*81900+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*69300+17234133)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+1344525)*1+lsi)*1]), &(inteval->stack[((hsi*122850+16657998)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1240575)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+17171763)*1+lsi)*1]), &(inteval->stack[((hsi*171990+16999773)*1+lsi)*1]), &(inteval->stack[((hsi*145530+1344525)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17663793)*1+lsi)*1]), &(inteval->stack[((hsi*194040+17171763)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+16995048)*1+lsi)*1]), &(inteval->stack[((hsi*294840+18313638)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1240575)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+19550328)*1+lsi)*1]), &(inteval->stack[((hsi*368550+19181778)*1+lsi)*1]), &(inteval->stack[((hsi*311850+16995048)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+16995048)*1+lsi)*1]), &(inteval->stack[((hsi*24255+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1218525)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*66150+16995048)*1+lsi)*1]), &(inteval->stack[((hsi*59850+17439303)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+16995048)*1+lsi)*1]), &(inteval->stack[((hsi*119700+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*107730+17499153)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+17174598)*1+lsi)*1]), &(inteval->stack[((hsi*179550+16995048)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16496298)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+17415573)*1+lsi)*1]), &(inteval->stack[((hsi*240975+17174598)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16780848)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*299880+17415573)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18608478)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+16767198)*1+lsi)*1]), &(inteval->stack[((hsi*352800+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*308700+18873078)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+18237093)*1+lsi)*1]), &(inteval->stack[((hsi*396900+16767198)*1+lsi)*1]), &(inteval->stack[((hsi*343980+17893113)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*429975+18237093)*1+lsi)*1]), &(inteval->stack[((hsi*368550+19181778)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+16864848)*1+lsi)*1]), &(inteval->stack[((hsi*450450+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*381150+19550328)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+17322228)*1+lsi)*1]), &(inteval->stack[((hsi*457380+16864848)*1+lsi)*1]), &(inteval->stack[((hsi*396396+14998698)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+18511416)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+17322228)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+15395094)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1166070)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1176990)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1153470)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1166070)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+16442478)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*28080+16414398)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1139070)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1153470)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+1227030)*1+lsi)*1]), &(inteval->stack[((hsi*37800+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1194270)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+16498638)*1+lsi)*1]), &(inteval->stack[((hsi*65520+1227030)*1+lsi)*1]), &(inteval->stack[((hsi*56160+16442478)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+15036498)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1122750)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1139070)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+1292550)*1+lsi)*1]), &(inteval->stack[((hsi*43200+15036498)*1+lsi)*1]), &(inteval->stack[((hsi*37800+14998698)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+15079698)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1292550)*1+lsi)*1]), &(inteval->stack[((hsi*65520+1227030)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+16592238)*1+lsi)*1]), &(inteval->stack[((hsi*109200+15079698)*1+lsi)*1]), &(inteval->stack[((hsi*93600+16498638)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+1368150)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1104390)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1122750)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+15188898)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1368150)*1+lsi)*1]), &(inteval->stack[((hsi*43200+15036498)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+1417110)*1+lsi)*1]), &(inteval->stack[((hsi*86400+15188898)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1292550)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1417110)*1+lsi)*1]), &(inteval->stack[((hsi*109200+15079698)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*163800+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*140400+16592238)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1083870)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1104390)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+15053778)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1368150)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+20746584)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15053778)*1+lsi)*1]), &(inteval->stack[((hsi*86400+15188898)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+15151698)*1+lsi)*1]), &(inteval->stack[((hsi*144000+20746584)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1417110)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+1358070)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15151698)*1+lsi)*1]), &(inteval->stack[((hsi*163800+1194270)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+20890584)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1358070)*1+lsi)*1]), &(inteval->stack[((hsi*196560+20550024)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1061070)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1083870)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+16732638)*1+lsi)*1]), &(inteval->stack[((hsi*61560+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14998698)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+21152664)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16732638)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15053778)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+21315864)*1+lsi)*1]), &(inteval->stack[((hsi*163200+21152664)*1+lsi)*1]), &(inteval->stack[((hsi*144000+20746584)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+21531864)*1+lsi)*1]), &(inteval->stack[((hsi*216000+21315864)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15151698)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21531864)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1358070)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+1255830)*1+lsi)*1]), &(inteval->stack[((hsi*305760+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*262080+20890584)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+20746584)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1035870)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1061070)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+21796464)*1+lsi)*1]), &(inteval->stack[((hsi*68400+20746584)*1+lsi)*1]), &(inteval->stack[((hsi*61560+1194270)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+21919584)*1+lsi)*1]), &(inteval->stack[((hsi*123120+21796464)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16732638)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+22103184)*1+lsi)*1]), &(inteval->stack[((hsi*183600+21919584)*1+lsi)*1]), &(inteval->stack[((hsi*163200+21152664)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+22347984)*1+lsi)*1]), &(inteval->stack[((hsi*244800+22103184)*1+lsi)*1]), &(inteval->stack[((hsi*216000+21315864)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+21152664)*1+lsi)*1]), &(inteval->stack[((hsi*302400+22347984)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21531864)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+22650384)*1+lsi)*1]), &(inteval->stack[((hsi*352800+21152664)*1+lsi)*1]), &(inteval->stack[((hsi*305760+14998698)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+23043504)*1+lsi)*1]), &(inteval->stack[((hsi*393120+22650384)*1+lsi)*1]), &(inteval->stack[((hsi*336960+1255830)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1176990)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1186350)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+15022458)*1+lsi)*1]), &(inteval->stack[((hsi*28080+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*23760+14998698)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+15069978)*1+lsi)*1]), &(inteval->stack[((hsi*56160+16442478)*1+lsi)*1]), &(inteval->stack[((hsi*47520+15022458)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+21505464)*1+lsi)*1]), &(inteval->stack[((hsi*93600+16498638)*1+lsi)*1]), &(inteval->stack[((hsi*79200+15069978)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*140400+16592238)*1+lsi)*1]), &(inteval->stack[((hsi*118800+21505464)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*196560+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*166320+14998698)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*262080+20890584)*1+lsi)*1]), &(inteval->stack[((hsi*221760+16414398)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*336960+1255830)*1+lsi)*1]), &(inteval->stack[((hsi*285120+14998698)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+1061070)*1+lsi)*1]), &(inteval->stack[((hsi*421200+23043504)*1+lsi)*1]), &(inteval->stack[((hsi*356400+16414398)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*27720+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1035870)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*75600+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*68400+20746584)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*136800+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*123120+21796464)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*205200+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*183600+21919584)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*275400+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*244800+22103184)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+21505464)*1+lsi)*1]), &(inteval->stack[((hsi*342720+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*302400+22347984)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+21908664)*1+lsi)*1]), &(inteval->stack[((hsi*403200+21505464)*1+lsi)*1]), &(inteval->stack[((hsi*352800+21152664)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*453600+21908664)*1+lsi)*1]), &(inteval->stack[((hsi*393120+22650384)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+21041424)*1+lsi)*1]), &(inteval->stack[((hsi*491400+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*421200+23043504)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+21556224)*1+lsi)*1]), &(inteval->stack[((hsi*514800+21041424)*1+lsi)*1]), &(inteval->stack[((hsi*435600+1061070)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+22078944)*1+lsi)*1]), &(inteval->stack[((hsi*522720+21556224)*1+lsi)*1]), &(inteval->stack[((hsi*457380+16864848)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+23451084)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+22078944)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+17322228)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+25829460)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+23451084)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+18511416)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*12376+976190)*1+lsi)*1]), &(inteval->stack[((hsi*10608+988566)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+16446222)*1+lsi)*1]), &(inteval->stack[((hsi*14280+961910)*1+lsi)*1]), &(inteval->stack[((hsi*12376+976190)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+16483350)*1+lsi)*1]), &(inteval->stack[((hsi*37128+16446222)*1+lsi)*1]), &(inteval->stack[((hsi*31824+16414398)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+16546998)*1+lsi)*1]), &(inteval->stack[((hsi*16320+945590)*1+lsi)*1]), &(inteval->stack[((hsi*14280+961910)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+16589838)*1+lsi)*1]), &(inteval->stack[((hsi*42840+16546998)*1+lsi)*1]), &(inteval->stack[((hsi*37128+16446222)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+16664094)*1+lsi)*1]), &(inteval->stack[((hsi*74256+16589838)*1+lsi)*1]), &(inteval->stack[((hsi*63648+16483350)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+16770174)*1+lsi)*1]), &(inteval->stack[((hsi*18496+927094)*1+lsi)*1]), &(inteval->stack[((hsi*16320+945590)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+16819134)*1+lsi)*1]), &(inteval->stack[((hsi*48960+16770174)*1+lsi)*1]), &(inteval->stack[((hsi*42840+16546998)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+16904814)*1+lsi)*1]), &(inteval->stack[((hsi*85680+16819134)*1+lsi)*1]), &(inteval->stack[((hsi*74256+16589838)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+17028574)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16904814)*1+lsi)*1]), &(inteval->stack[((hsi*106080+16664094)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+17187694)*1+lsi)*1]), &(inteval->stack[((hsi*20808+906286)*1+lsi)*1]), &(inteval->stack[((hsi*18496+927094)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+17243182)*1+lsi)*1]), &(inteval->stack[((hsi*55488+17187694)*1+lsi)*1]), &(inteval->stack[((hsi*48960+16770174)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+17341102)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17243182)*1+lsi)*1]), &(inteval->stack[((hsi*85680+16819134)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+17483902)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17341102)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16904814)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*185640+17483902)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17028574)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+17669542)*1+lsi)*1]), &(inteval->stack[((hsi*23256+883030)*1+lsi)*1]), &(inteval->stack[((hsi*20808+906286)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+20772792)*1+lsi)*1]), &(inteval->stack[((hsi*62424+17669542)*1+lsi)*1]), &(inteval->stack[((hsi*55488+17187694)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+17731966)*1+lsi)*1]), &(inteval->stack[((hsi*110976+20772792)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17243182)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+20883768)*1+lsi)*1]), &(inteval->stack[((hsi*163200+17731966)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17341102)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+17895166)*1+lsi)*1]), &(inteval->stack[((hsi*214200+20883768)*1+lsi)*1]), &(inteval->stack[((hsi*185640+17483902)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*259896+17895166)*1+lsi)*1]), &(inteval->stack[((hsi*222768+20550024)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+17187694)*1+lsi)*1]), &(inteval->stack[((hsi*25840+857190)*1+lsi)*1]), &(inteval->stack[((hsi*23256+883030)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+21097968)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17187694)*1+lsi)*1]), &(inteval->stack[((hsi*62424+17669542)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+17257462)*1+lsi)*1]), &(inteval->stack[((hsi*124848+21097968)*1+lsi)*1]), &(inteval->stack[((hsi*110976+20772792)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17257462)*1+lsi)*1]), &(inteval->stack[((hsi*163200+17731966)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+17442422)*1+lsi)*1]), &(inteval->stack[((hsi*244800+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*214200+20883768)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+18155062)*1+lsi)*1]), &(inteval->stack[((hsi*299880+17442422)*1+lsi)*1]), &(inteval->stack[((hsi*259896+17895166)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+17742302)*1+lsi)*1]), &(inteval->stack[((hsi*346528+18155062)*1+lsi)*1]), &(inteval->stack[((hsi*297024+1008150)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+21222816)*1+lsi)*1]), &(inteval->stack[((hsi*28560+828630)*1+lsi)*1]), &(inteval->stack[((hsi*25840+857190)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+20772792)*1+lsi)*1]), &(inteval->stack[((hsi*77520+21222816)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17187694)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+1305174)*1+lsi)*1]), &(inteval->stack[((hsi*139536+20772792)*1+lsi)*1]), &(inteval->stack[((hsi*124848+21097968)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+20912328)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1305174)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17257462)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*277440+20912328)*1+lsi)*1]), &(inteval->stack[((hsi*244800+14998698)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+29569860)*1+lsi)*1]), &(inteval->stack[((hsi*342720+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*299880+17442422)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+17187694)*1+lsi)*1]), &(inteval->stack[((hsi*399840+29569860)*1+lsi)*1]), &(inteval->stack[((hsi*346528+18155062)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+29969700)*1+lsi)*1]), &(inteval->stack[((hsi*445536+17187694)*1+lsi)*1]), &(inteval->stack[((hsi*381888+17742302)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*10608+988566)*1+lsi)*1]), &(inteval->stack[((hsi*8976+999174)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+18124190)*1+lsi)*1]), &(inteval->stack[((hsi*31824+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*26928+14998698)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*63648+16483350)*1+lsi)*1]), &(inteval->stack[((hsi*53856+18124190)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+18124190)*1+lsi)*1]), &(inteval->stack[((hsi*106080+16664094)*1+lsi)*1]), &(inteval->stack[((hsi*89760+14998698)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17028574)*1+lsi)*1]), &(inteval->stack[((hsi*134640+18124190)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+16602894)*1+lsi)*1]), &(inteval->stack[((hsi*222768+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*188496+16414398)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*297024+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*251328+16602894)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*381888+17742302)*1+lsi)*1]), &(inteval->stack[((hsi*323136+14998698)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+17633230)*1+lsi)*1]), &(inteval->stack[((hsi*477360+29969700)*1+lsi)*1]), &(inteval->stack[((hsi*403920+16414398)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*31416+797214)*1+lsi)*1]), &(inteval->stack[((hsi*28560+828630)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+16500078)*1+lsi)*1]), &(inteval->stack[((hsi*85680+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*77520+21222816)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+16655118)*1+lsi)*1]), &(inteval->stack[((hsi*155040+16500078)*1+lsi)*1]), &(inteval->stack[((hsi*139536+20772792)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+797214)*1+lsi)*1]), &(inteval->stack[((hsi*232560+16655118)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1305174)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*312120+797214)*1+lsi)*1]), &(inteval->stack[((hsi*277440+20912328)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*388416+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*342720+29227140)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+797214)*1+lsi)*1]), &(inteval->stack[((hsi*456960+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*399840+29569860)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*514080+797214)*1+lsi)*1]), &(inteval->stack[((hsi*445536+17187694)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*556920+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*477360+29969700)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*583440+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*493680+17633230)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*592416+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*522720+21556224)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+22078944)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+31971420)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+23451084)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+35935380)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+31971420)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+25829460)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*13923+761259)*1+lsi)*1]), &(inteval->stack[((hsi*11934+775182)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+21178242)*1+lsi)*1]), &(inteval->stack[((hsi*16065+745194)*1+lsi)*1]), &(inteval->stack[((hsi*13923+761259)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+21220011)*1+lsi)*1]), &(inteval->stack[((hsi*41769+21178242)*1+lsi)*1]), &(inteval->stack[((hsi*35802+21142440)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+21291615)*1+lsi)*1]), &(inteval->stack[((hsi*18360+726834)*1+lsi)*1]), &(inteval->stack[((hsi*16065+745194)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+21339810)*1+lsi)*1]), &(inteval->stack[((hsi*48195+21291615)*1+lsi)*1]), &(inteval->stack[((hsi*41769+21178242)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+21423348)*1+lsi)*1]), &(inteval->stack[((hsi*83538+21339810)*1+lsi)*1]), &(inteval->stack[((hsi*71604+21220011)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+21542688)*1+lsi)*1]), &(inteval->stack[((hsi*20808+706026)*1+lsi)*1]), &(inteval->stack[((hsi*18360+726834)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+21597768)*1+lsi)*1]), &(inteval->stack[((hsi*55080+21542688)*1+lsi)*1]), &(inteval->stack[((hsi*48195+21291615)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+21694158)*1+lsi)*1]), &(inteval->stack[((hsi*96390+21597768)*1+lsi)*1]), &(inteval->stack[((hsi*83538+21339810)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+21833388)*1+lsi)*1]), &(inteval->stack[((hsi*139230+21694158)*1+lsi)*1]), &(inteval->stack[((hsi*119340+21423348)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+22012398)*1+lsi)*1]), &(inteval->stack[((hsi*23409+682617)*1+lsi)*1]), &(inteval->stack[((hsi*20808+706026)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+22074822)*1+lsi)*1]), &(inteval->stack[((hsi*62424+22012398)*1+lsi)*1]), &(inteval->stack[((hsi*55080+21542688)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+22184982)*1+lsi)*1]), &(inteval->stack[((hsi*110160+22074822)*1+lsi)*1]), &(inteval->stack[((hsi*96390+21597768)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+22345632)*1+lsi)*1]), &(inteval->stack[((hsi*160650+22184982)*1+lsi)*1]), &(inteval->stack[((hsi*139230+21694158)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+22554477)*1+lsi)*1]), &(inteval->stack[((hsi*208845+22345632)*1+lsi)*1]), &(inteval->stack[((hsi*179010+21833388)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+22805091)*1+lsi)*1]), &(inteval->stack[((hsi*26163+656454)*1+lsi)*1]), &(inteval->stack[((hsi*23409+682617)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+22875318)*1+lsi)*1]), &(inteval->stack[((hsi*70227+22805091)*1+lsi)*1]), &(inteval->stack[((hsi*62424+22012398)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+23000166)*1+lsi)*1]), &(inteval->stack[((hsi*124848+22875318)*1+lsi)*1]), &(inteval->stack[((hsi*110160+22074822)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+23183766)*1+lsi)*1]), &(inteval->stack[((hsi*183600+23000166)*1+lsi)*1]), &(inteval->stack[((hsi*160650+22184982)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+23424741)*1+lsi)*1]), &(inteval->stack[((hsi*240975+23183766)*1+lsi)*1]), &(inteval->stack[((hsi*208845+22345632)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+23717124)*1+lsi)*1]), &(inteval->stack[((hsi*292383+23424741)*1+lsi)*1]), &(inteval->stack[((hsi*250614+22554477)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+24051276)*1+lsi)*1]), &(inteval->stack[((hsi*29070+627384)*1+lsi)*1]), &(inteval->stack[((hsi*26163+656454)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+24129765)*1+lsi)*1]), &(inteval->stack[((hsi*78489+24051276)*1+lsi)*1]), &(inteval->stack[((hsi*70227+22805091)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+24270219)*1+lsi)*1]), &(inteval->stack[((hsi*140454+24129765)*1+lsi)*1]), &(inteval->stack[((hsi*124848+22875318)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+24478299)*1+lsi)*1]), &(inteval->stack[((hsi*208080+24270219)*1+lsi)*1]), &(inteval->stack[((hsi*183600+23000166)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+24753699)*1+lsi)*1]), &(inteval->stack[((hsi*275400+24478299)*1+lsi)*1]), &(inteval->stack[((hsi*240975+23183766)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+797214)*1+lsi)*1]), &(inteval->stack[((hsi*337365+24753699)*1+lsi)*1]), &(inteval->stack[((hsi*292383+23424741)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+22805091)*1+lsi)*1]), &(inteval->stack[((hsi*389844+797214)*1+lsi)*1]), &(inteval->stack[((hsi*334152+23717124)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+25091064)*1+lsi)*1]), &(inteval->stack[((hsi*32130+595254)*1+lsi)*1]), &(inteval->stack[((hsi*29070+627384)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+25178274)*1+lsi)*1]), &(inteval->stack[((hsi*87210+25091064)*1+lsi)*1]), &(inteval->stack[((hsi*78489+24051276)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+22012398)*1+lsi)*1]), &(inteval->stack[((hsi*156978+25178274)*1+lsi)*1]), &(inteval->stack[((hsi*140454+24129765)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+17982558)*1+lsi)*1]), &(inteval->stack[((hsi*234090+22012398)*1+lsi)*1]), &(inteval->stack[((hsi*208080+24270219)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+25335252)*1+lsi)*1]), &(inteval->stack[((hsi*312120+17982558)*1+lsi)*1]), &(inteval->stack[((hsi*275400+24478299)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+24051276)*1+lsi)*1]), &(inteval->stack[((hsi*385560+25335252)*1+lsi)*1]), &(inteval->stack[((hsi*337365+24753699)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+24501096)*1+lsi)*1]), &(inteval->stack[((hsi*449820+24051276)*1+lsi)*1]), &(inteval->stack[((hsi*389844+797214)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+797214)*1+lsi)*1]), &(inteval->stack[((hsi*501228+24501096)*1+lsi)*1]), &(inteval->stack[((hsi*429624+22805091)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+23234715)*1+lsi)*1]), &(inteval->stack[((hsi*11934+775182)*1+lsi)*1]), &(inteval->stack[((hsi*10098+787116)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+23265009)*1+lsi)*1]), &(inteval->stack[((hsi*35802+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*30294+23234715)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+14998698)*1+lsi)*1]), &(inteval->stack[((hsi*71604+21220011)*1+lsi)*1]), &(inteval->stack[((hsi*60588+23265009)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+23234715)*1+lsi)*1]), &(inteval->stack[((hsi*119340+21423348)*1+lsi)*1]), &(inteval->stack[((hsi*100980+14998698)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*179010+21833388)*1+lsi)*1]), &(inteval->stack[((hsi*151470+23234715)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+21354498)*1+lsi)*1]), &(inteval->stack[((hsi*250614+22554477)*1+lsi)*1]), &(inteval->stack[((hsi*212058+21142440)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+22246488)*1+lsi)*1]), &(inteval->stack[((hsi*334152+23717124)*1+lsi)*1]), &(inteval->stack[((hsi*282744+21354498)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*429624+22805091)*1+lsi)*1]), &(inteval->stack[((hsi*363528+22246488)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+22246488)*1+lsi)*1]), &(inteval->stack[((hsi*537030+797214)*1+lsi)*1]), &(inteval->stack[((hsi*454410+21142440)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*35343+559911)*1+lsi)*1]), &(inteval->stack[((hsi*32130+595254)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+22898268)*1+lsi)*1]), &(inteval->stack[((hsi*96390+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*87210+25091064)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+23072688)*1+lsi)*1]), &(inteval->stack[((hsi*174420+22898268)*1+lsi)*1]), &(inteval->stack[((hsi*156978+25178274)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*261630+23072688)*1+lsi)*1]), &(inteval->stack[((hsi*234090+22012398)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*351135+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*312120+17982558)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*436968+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*385560+25335252)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*514080+21142440)*1+lsi)*1]), &(inteval->stack[((hsi*449820+24051276)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+23380218)*1+lsi)*1]), &(inteval->stack[((hsi*578340+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*501228+24501096)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+24006753)*1+lsi)*1]), &(inteval->stack[((hsi*626535+23380218)*1+lsi)*1]), &(inteval->stack[((hsi*537030+797214)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*656370+24006753)*1+lsi)*1]), &(inteval->stack[((hsi*555390+22246488)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+23468346)*1+lsi)*1]), &(inteval->stack[((hsi*666468+22801878)*1+lsi)*1]), &(inteval->stack[((hsi*592416+20550024)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+41031900)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+23468346)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+16414398)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+44168220)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+41031900)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+29227140)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+48742020)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+44168220)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+31971420)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+54687960)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+48742020)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+35935380)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*15561+519726)*1+lsi)*1]), &(inteval->stack[((hsi*13338+535287)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+29267154)*1+lsi)*1]), &(inteval->stack[((hsi*17955+501771)*1+lsi)*1]), &(inteval->stack[((hsi*15561+519726)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+29313837)*1+lsi)*1]), &(inteval->stack[((hsi*46683+29267154)*1+lsi)*1]), &(inteval->stack[((hsi*40014+29227140)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+29393865)*1+lsi)*1]), &(inteval->stack[((hsi*20520+481251)*1+lsi)*1]), &(inteval->stack[((hsi*17955+501771)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+29447730)*1+lsi)*1]), &(inteval->stack[((hsi*53865+29393865)*1+lsi)*1]), &(inteval->stack[((hsi*46683+29267154)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+29541096)*1+lsi)*1]), &(inteval->stack[((hsi*93366+29447730)*1+lsi)*1]), &(inteval->stack[((hsi*80028+29313837)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+29674476)*1+lsi)*1]), &(inteval->stack[((hsi*23256+457995)*1+lsi)*1]), &(inteval->stack[((hsi*20520+481251)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+29736036)*1+lsi)*1]), &(inteval->stack[((hsi*61560+29674476)*1+lsi)*1]), &(inteval->stack[((hsi*53865+29393865)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+29843766)*1+lsi)*1]), &(inteval->stack[((hsi*107730+29736036)*1+lsi)*1]), &(inteval->stack[((hsi*93366+29447730)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+29999376)*1+lsi)*1]), &(inteval->stack[((hsi*155610+29843766)*1+lsi)*1]), &(inteval->stack[((hsi*133380+29541096)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+30199446)*1+lsi)*1]), &(inteval->stack[((hsi*26163+431832)*1+lsi)*1]), &(inteval->stack[((hsi*23256+457995)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+30269214)*1+lsi)*1]), &(inteval->stack[((hsi*69768+30199446)*1+lsi)*1]), &(inteval->stack[((hsi*61560+29674476)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+30392334)*1+lsi)*1]), &(inteval->stack[((hsi*123120+30269214)*1+lsi)*1]), &(inteval->stack[((hsi*107730+29736036)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+30571884)*1+lsi)*1]), &(inteval->stack[((hsi*179550+30392334)*1+lsi)*1]), &(inteval->stack[((hsi*155610+29843766)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+30805299)*1+lsi)*1]), &(inteval->stack[((hsi*233415+30571884)*1+lsi)*1]), &(inteval->stack[((hsi*200070+29999376)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+31085397)*1+lsi)*1]), &(inteval->stack[((hsi*29241+402591)*1+lsi)*1]), &(inteval->stack[((hsi*26163+431832)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+31163886)*1+lsi)*1]), &(inteval->stack[((hsi*78489+31085397)*1+lsi)*1]), &(inteval->stack[((hsi*69768+30199446)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+31303422)*1+lsi)*1]), &(inteval->stack[((hsi*139536+31163886)*1+lsi)*1]), &(inteval->stack[((hsi*123120+30269214)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+31508622)*1+lsi)*1]), &(inteval->stack[((hsi*205200+31303422)*1+lsi)*1]), &(inteval->stack[((hsi*179550+30392334)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+31777947)*1+lsi)*1]), &(inteval->stack[((hsi*269325+31508622)*1+lsi)*1]), &(inteval->stack[((hsi*233415+30571884)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+32104728)*1+lsi)*1]), &(inteval->stack[((hsi*326781+31777947)*1+lsi)*1]), &(inteval->stack[((hsi*280098+30805299)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+32478192)*1+lsi)*1]), &(inteval->stack[((hsi*32490+370101)*1+lsi)*1]), &(inteval->stack[((hsi*29241+402591)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+32565915)*1+lsi)*1]), &(inteval->stack[((hsi*87723+32478192)*1+lsi)*1]), &(inteval->stack[((hsi*78489+31085397)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+32722893)*1+lsi)*1]), &(inteval->stack[((hsi*156978+32565915)*1+lsi)*1]), &(inteval->stack[((hsi*139536+31163886)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+32955453)*1+lsi)*1]), &(inteval->stack[((hsi*232560+32722893)*1+lsi)*1]), &(inteval->stack[((hsi*205200+31303422)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+33263253)*1+lsi)*1]), &(inteval->stack[((hsi*307800+32955453)*1+lsi)*1]), &(inteval->stack[((hsi*269325+31508622)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+33640308)*1+lsi)*1]), &(inteval->stack[((hsi*377055+33263253)*1+lsi)*1]), &(inteval->stack[((hsi*326781+31777947)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*435708+33640308)*1+lsi)*1]), &(inteval->stack[((hsi*373464+32104728)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*35910+334191)*1+lsi)*1]), &(inteval->stack[((hsi*32490+370101)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+16511868)*1+lsi)*1]), &(inteval->stack[((hsi*97470+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*87723+32478192)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+34076016)*1+lsi)*1]), &(inteval->stack[((hsi*175446+16511868)*1+lsi)*1]), &(inteval->stack[((hsi*156978+32565915)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+16687314)*1+lsi)*1]), &(inteval->stack[((hsi*261630+34076016)*1+lsi)*1]), &(inteval->stack[((hsi*232560+32722893)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+21030192)*1+lsi)*1]), &(inteval->stack[((hsi*348840+16687314)*1+lsi)*1]), &(inteval->stack[((hsi*307800+32955453)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+34337646)*1+lsi)*1]), &(inteval->stack[((hsi*430920+21030192)*1+lsi)*1]), &(inteval->stack[((hsi*377055+33263253)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+17036154)*1+lsi)*1]), &(inteval->stack[((hsi*502740+34337646)*1+lsi)*1]), &(inteval->stack[((hsi*435708+33640308)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+32478192)*1+lsi)*1]), &(inteval->stack[((hsi*560196+17036154)*1+lsi)*1]), &(inteval->stack[((hsi*480168+20550024)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*13338+535287)*1+lsi)*1]), &(inteval->stack[((hsi*11286+548625)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+21494970)*1+lsi)*1]), &(inteval->stack[((hsi*40014+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*33858+21461112)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+370101)*1+lsi)*1]), &(inteval->stack[((hsi*80028+29313837)*1+lsi)*1]), &(inteval->stack[((hsi*67716+21494970)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*133380+29541096)*1+lsi)*1]), &(inteval->stack[((hsi*112860+370101)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+370101)*1+lsi)*1]), &(inteval->stack[((hsi*200070+29999376)*1+lsi)*1]), &(inteval->stack[((hsi*169290+21461112)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*280098+30805299)*1+lsi)*1]), &(inteval->stack[((hsi*237006+370101)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+29543148)*1+lsi)*1]), &(inteval->stack[((hsi*373464+32104728)*1+lsi)*1]), &(inteval->stack[((hsi*316008+29227140)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+29949444)*1+lsi)*1]), &(inteval->stack[((hsi*480168+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*406296+29543148)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+30457314)*1+lsi)*1]), &(inteval->stack[((hsi*600210+32478192)*1+lsi)*1]), &(inteval->stack[((hsi*507870+29949444)*1+lsi)*1]),171);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*107730+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*39501+294690)*1+lsi)*1]), &(inteval->stack[((hsi*35910+334191)*1+lsi)*1]),171);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*194940+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*107730+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*97470+16414398)*1+lsi)*1]),171);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*292410+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*194940+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*175446+16511868)*1+lsi)*1]),171);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*392445+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*292410+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*261630+34076016)*1+lsi)*1]),171);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*488376+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*392445+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*348840+16687314)*1+lsi)*1]),171);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*574560+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*488376+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*430920+21030192)*1+lsi)*1]),171);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*646380+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*574560+21461112)*1+lsi)*1]), &(inteval->stack[((hsi*502740+34337646)*1+lsi)*1]),171);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*700245+33078402)*1+lsi)*1]), &(inteval->stack[((hsi*646380+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*560196+17036154)*1+lsi)*1]),171);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*733590+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*700245+33078402)*1+lsi)*1]), &(inteval->stack[((hsi*600210+32478192)*1+lsi)*1]),171);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*744876+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*733590+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*620730+30457314)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1999404+31822920)*1+lsi)*1]), &(inteval->stack[((hsi*744876+31078044)*1+lsi)*1]), &(inteval->stack[((hsi*666468+22801878)*1+lsi)*1]),4356);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*3554496+61823088)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+31822920)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+23468346)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*5227200+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+61823088)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+41031900)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*6860700+65377584)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+20550024)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+44168220)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*8324316+72238284)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+65377584)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+48742020)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*9513504+41031900)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+72238284)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+54687960)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+50545404)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1706100)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1712106)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+50560848)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1699170)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1706100)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+50578866)*1+lsi)*1]), &(inteval->stack[((hsi*18018+50560848)*1+lsi)*1]), &(inteval->stack[((hsi*15444+50545404)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+50609754)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1691250)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1699170)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+50630544)*1+lsi)*1]), &(inteval->stack[((hsi*20790+50609754)*1+lsi)*1]), &(inteval->stack[((hsi*18018+50560848)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+50666580)*1+lsi)*1]), &(inteval->stack[((hsi*36036+50630544)*1+lsi)*1]), &(inteval->stack[((hsi*30888+50578866)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+50718060)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1682274)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1691250)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+50741820)*1+lsi)*1]), &(inteval->stack[((hsi*23760+50718060)*1+lsi)*1]), &(inteval->stack[((hsi*20790+50609754)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+50783400)*1+lsi)*1]), &(inteval->stack[((hsi*41580+50741820)*1+lsi)*1]), &(inteval->stack[((hsi*36036+50630544)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+50843460)*1+lsi)*1]), &(inteval->stack[((hsi*60060+50783400)*1+lsi)*1]), &(inteval->stack[((hsi*51480+50666580)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+50920680)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1672176)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1682274)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+50947608)*1+lsi)*1]), &(inteval->stack[((hsi*26928+50920680)*1+lsi)*1]), &(inteval->stack[((hsi*23760+50718060)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+50995128)*1+lsi)*1]), &(inteval->stack[((hsi*47520+50947608)*1+lsi)*1]), &(inteval->stack[((hsi*41580+50741820)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+51064428)*1+lsi)*1]), &(inteval->stack[((hsi*69300+50995128)*1+lsi)*1]), &(inteval->stack[((hsi*60060+50783400)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+51154518)*1+lsi)*1]), &(inteval->stack[((hsi*90090+51064428)*1+lsi)*1]), &(inteval->stack[((hsi*77220+50843460)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+51262626)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1660890)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1672176)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+51292920)*1+lsi)*1]), &(inteval->stack[((hsi*30294+51262626)*1+lsi)*1]), &(inteval->stack[((hsi*26928+50920680)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+51346776)*1+lsi)*1]), &(inteval->stack[((hsi*53856+51292920)*1+lsi)*1]), &(inteval->stack[((hsi*47520+50947608)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+51425976)*1+lsi)*1]), &(inteval->stack[((hsi*79200+51346776)*1+lsi)*1]), &(inteval->stack[((hsi*69300+50995128)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+51529926)*1+lsi)*1]), &(inteval->stack[((hsi*103950+51425976)*1+lsi)*1]), &(inteval->stack[((hsi*90090+51064428)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+51656052)*1+lsi)*1]), &(inteval->stack[((hsi*126126+51529926)*1+lsi)*1]), &(inteval->stack[((hsi*108108+51154518)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+51800196)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1648350)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1660890)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+51834054)*1+lsi)*1]), &(inteval->stack[((hsi*33858+51800196)*1+lsi)*1]), &(inteval->stack[((hsi*30294+51262626)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+51894642)*1+lsi)*1]), &(inteval->stack[((hsi*60588+51834054)*1+lsi)*1]), &(inteval->stack[((hsi*53856+51292920)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+51984402)*1+lsi)*1]), &(inteval->stack[((hsi*89760+51894642)*1+lsi)*1]), &(inteval->stack[((hsi*79200+51346776)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+52103202)*1+lsi)*1]), &(inteval->stack[((hsi*118800+51984402)*1+lsi)*1]), &(inteval->stack[((hsi*103950+51425976)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+52248732)*1+lsi)*1]), &(inteval->stack[((hsi*145530+52103202)*1+lsi)*1]), &(inteval->stack[((hsi*126126+51529926)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+52416900)*1+lsi)*1]), &(inteval->stack[((hsi*168168+52248732)*1+lsi)*1]), &(inteval->stack[((hsi*144144+51656052)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1634490)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1648350)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*37620+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*33858+51800196)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+52602228)*1+lsi)*1]), &(inteval->stack[((hsi*67716+16414398)*1+lsi)*1]), &(inteval->stack[((hsi*60588+51834054)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+33859944)*1+lsi)*1]), &(inteval->stack[((hsi*100980+52602228)*1+lsi)*1]), &(inteval->stack[((hsi*89760+51894642)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+16482114)*1+lsi)*1]), &(inteval->stack[((hsi*134640+33859944)*1+lsi)*1]), &(inteval->stack[((hsi*118800+51984402)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+52703208)*1+lsi)*1]), &(inteval->stack[((hsi*166320+16482114)*1+lsi)*1]), &(inteval->stack[((hsi*145530+52103202)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+33994584)*1+lsi)*1]), &(inteval->stack[((hsi*194040+52703208)*1+lsi)*1]), &(inteval->stack[((hsi*168168+52248732)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+16648434)*1+lsi)*1]), &(inteval->stack[((hsi*216216+33994584)*1+lsi)*1]), &(inteval->stack[((hsi*185328+52416900)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1712106)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1717254)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+29240208)*1+lsi)*1]), &(inteval->stack[((hsi*15444+50545404)*1+lsi)*1]), &(inteval->stack[((hsi*13068+29227140)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+29266344)*1+lsi)*1]), &(inteval->stack[((hsi*30888+50578866)*1+lsi)*1]), &(inteval->stack[((hsi*26136+29240208)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*51480+50666580)*1+lsi)*1]), &(inteval->stack[((hsi*43560+29266344)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*77220+50843460)*1+lsi)*1]), &(inteval->stack[((hsi*65340+52897248)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*108108+51154518)*1+lsi)*1]), &(inteval->stack[((hsi*91476+29227140)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*144144+51656052)*1+lsi)*1]), &(inteval->stack[((hsi*121968+52897248)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+50545404)*1+lsi)*1]), &(inteval->stack[((hsi*185328+52416900)*1+lsi)*1]), &(inteval->stack[((hsi*156816+29227140)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+50741424)*1+lsi)*1]), &(inteval->stack[((hsi*231660+16648434)*1+lsi)*1]), &(inteval->stack[((hsi*196020+50545404)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1619244)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1634490)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+29268720)*1+lsi)*1]), &(inteval->stack[((hsi*41580+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*37620+33822324)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*75240+29268720)*1+lsi)*1]), &(inteval->stack[((hsi*67716+16414398)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*112860+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*100980+52602228)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*151470+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*134640+33859944)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*188496+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*166320+16482114)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*221760+29227140)*1+lsi)*1]), &(inteval->stack[((hsi*194040+52703208)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+50981004)*1+lsi)*1]), &(inteval->stack[((hsi*249480+52897248)*1+lsi)*1]), &(inteval->stack[((hsi*216216+33994584)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+51251274)*1+lsi)*1]), &(inteval->stack[((hsi*270270+50981004)*1+lsi)*1]), &(inteval->stack[((hsi*231660+16648434)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+51534414)*1+lsi)*1]), &(inteval->stack[((hsi*283140+51251274)*1+lsi)*1]), &(inteval->stack[((hsi*239580+50741424)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+51821910)*1+lsi)*1]), &(inteval->stack[((hsi*339768+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*287496+51534414)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+15395094)*1+lsi)*1]), &(inteval->stack[((hsi*862488+51821910)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+50545404)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+18511416)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+33822324)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+25829460)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+50545404)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+80562600)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+35935380)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+14658930)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+86600016)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+54687960)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+80562600)*1+lsi)*1]),4356);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*10349856+50545404)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+41031900)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+86600016)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*17290+250040)*1+lsi)*1]), &(inteval->stack[((hsi*14820+267330)*1+lsi)*1]),190);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+33866784)*1+lsi)*1]), &(inteval->stack[((hsi*19950+230090)*1+lsi)*1]), &(inteval->stack[((hsi*17290+250040)*1+lsi)*1]),190);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+33918654)*1+lsi)*1]), &(inteval->stack[((hsi*51870+33866784)*1+lsi)*1]), &(inteval->stack[((hsi*44460+33822324)*1+lsi)*1]),190);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+34007574)*1+lsi)*1]), &(inteval->stack[((hsi*22800+207290)*1+lsi)*1]), &(inteval->stack[((hsi*19950+230090)*1+lsi)*1]),190);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+34067424)*1+lsi)*1]), &(inteval->stack[((hsi*59850+34007574)*1+lsi)*1]), &(inteval->stack[((hsi*51870+33866784)*1+lsi)*1]),190);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+34171164)*1+lsi)*1]), &(inteval->stack[((hsi*103740+34067424)*1+lsi)*1]), &(inteval->stack[((hsi*88920+33918654)*1+lsi)*1]),190);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+34319364)*1+lsi)*1]), &(inteval->stack[((hsi*25840+181450)*1+lsi)*1]), &(inteval->stack[((hsi*22800+207290)*1+lsi)*1]),190);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+34387764)*1+lsi)*1]), &(inteval->stack[((hsi*68400+34319364)*1+lsi)*1]), &(inteval->stack[((hsi*59850+34007574)*1+lsi)*1]),190);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+34507464)*1+lsi)*1]), &(inteval->stack[((hsi*119700+34387764)*1+lsi)*1]), &(inteval->stack[((hsi*103740+34067424)*1+lsi)*1]),190);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+34680364)*1+lsi)*1]), &(inteval->stack[((hsi*172900+34507464)*1+lsi)*1]), &(inteval->stack[((hsi*148200+34171164)*1+lsi)*1]),190);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*77520+34902664)*1+lsi)*1]), &(inteval->stack[((hsi*29070+152380)*1+lsi)*1]), &(inteval->stack[((hsi*25840+181450)*1+lsi)*1]),190);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+34980184)*1+lsi)*1]), &(inteval->stack[((hsi*77520+34902664)*1+lsi)*1]), &(inteval->stack[((hsi*68400+34319364)*1+lsi)*1]),190);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+35116984)*1+lsi)*1]), &(inteval->stack[((hsi*136800+34980184)*1+lsi)*1]), &(inteval->stack[((hsi*119700+34387764)*1+lsi)*1]),190);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*199500+35116984)*1+lsi)*1]), &(inteval->stack[((hsi*172900+34507464)*1+lsi)*1]),190);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+35316484)*1+lsi)*1]), &(inteval->stack[((hsi*259350+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*222300+34680364)*1+lsi)*1]),190);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+14918280)*1+lsi)*1]), &(inteval->stack[((hsi*32490+119890)*1+lsi)*1]), &(inteval->stack[((hsi*29070+152380)*1+lsi)*1]),190);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+15005490)*1+lsi)*1]), &(inteval->stack[((hsi*87210+14918280)*1+lsi)*1]), &(inteval->stack[((hsi*77520+34902664)*1+lsi)*1]),190);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+35627704)*1+lsi)*1]), &(inteval->stack[((hsi*155040+15005490)*1+lsi)*1]), &(inteval->stack[((hsi*136800+34980184)*1+lsi)*1]),190);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+15160530)*1+lsi)*1]), &(inteval->stack[((hsi*228000+35627704)*1+lsi)*1]), &(inteval->stack[((hsi*199500+35116984)*1+lsi)*1]),190);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+25777224)*1+lsi)*1]), &(inteval->stack[((hsi*299250+15160530)*1+lsi)*1]), &(inteval->stack[((hsi*259350+14658930)*1+lsi)*1]),190);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+35855704)*1+lsi)*1]), &(inteval->stack[((hsi*363090+25777224)*1+lsi)*1]), &(inteval->stack[((hsi*311220+35316484)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+15459780)*1+lsi)*1]), &(inteval->stack[((hsi*36100+83790)*1+lsi)*1]), &(inteval->stack[((hsi*32490+119890)*1+lsi)*1]),190);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+15557250)*1+lsi)*1]), &(inteval->stack[((hsi*97470+15459780)*1+lsi)*1]), &(inteval->stack[((hsi*87210+14918280)*1+lsi)*1]),190);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+26140314)*1+lsi)*1]), &(inteval->stack[((hsi*174420+15557250)*1+lsi)*1]), &(inteval->stack[((hsi*155040+15005490)*1+lsi)*1]),190);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+15731670)*1+lsi)*1]), &(inteval->stack[((hsi*258400+26140314)*1+lsi)*1]), &(inteval->stack[((hsi*228000+35627704)*1+lsi)*1]),190);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+36270664)*1+lsi)*1]), &(inteval->stack[((hsi*342000+15731670)*1+lsi)*1]), &(inteval->stack[((hsi*299250+15160530)*1+lsi)*1]),190);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+26398714)*1+lsi)*1]), &(inteval->stack[((hsi*418950+36270664)*1+lsi)*1]), &(inteval->stack[((hsi*363090+25777224)*1+lsi)*1]),190);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+16073670)*1+lsi)*1]), &(inteval->stack[((hsi*484120+26398714)*1+lsi)*1]), &(inteval->stack[((hsi*414960+35855704)*1+lsi)*1]),190);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*108300+36689614)*1+lsi)*1]), &(inteval->stack[((hsi*39900+43890)*1+lsi)*1]), &(inteval->stack[((hsi*36100+83790)*1+lsi)*1]),190);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*194940+36797914)*1+lsi)*1]), &(inteval->stack[((hsi*108300+36689614)*1+lsi)*1]), &(inteval->stack[((hsi*97470+15459780)*1+lsi)*1]),190);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*290700+26882834)*1+lsi)*1]), &(inteval->stack[((hsi*194940+36797914)*1+lsi)*1]), &(inteval->stack[((hsi*174420+15557250)*1+lsi)*1]),190);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*387600+36992854)*1+lsi)*1]), &(inteval->stack[((hsi*290700+26882834)*1+lsi)*1]), &(inteval->stack[((hsi*258400+26140314)*1+lsi)*1]),190);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*478800+16607190)*1+lsi)*1]), &(inteval->stack[((hsi*387600+36992854)*1+lsi)*1]), &(inteval->stack[((hsi*342000+15731670)*1+lsi)*1]),190);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*558600+27173534)*1+lsi)*1]), &(inteval->stack[((hsi*478800+16607190)*1+lsi)*1]), &(inteval->stack[((hsi*418950+36270664)*1+lsi)*1]),190);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*622440+37380454)*1+lsi)*1]), &(inteval->stack[((hsi*558600+27173534)*1+lsi)*1]), &(inteval->stack[((hsi*484120+26398714)*1+lsi)*1]),190);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*666900+17085990)*1+lsi)*1]), &(inteval->stack[((hsi*622440+37380454)*1+lsi)*1]), &(inteval->stack[((hsi*533520+16073670)*1+lsi)*1]),190);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*14820+267330)*1+lsi)*1]), &(inteval->stack[((hsi*12540+282150)*1+lsi)*1]),190);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+27769754)*1+lsi)*1]), &(inteval->stack[((hsi*44460+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*37620+27732134)*1+lsi)*1]),190);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+27844994)*1+lsi)*1]), &(inteval->stack[((hsi*88920+33918654)*1+lsi)*1]), &(inteval->stack[((hsi*75240+27769754)*1+lsi)*1]),190);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+27970394)*1+lsi)*1]), &(inteval->stack[((hsi*148200+34171164)*1+lsi)*1]), &(inteval->stack[((hsi*125400+27844994)*1+lsi)*1]),190);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+38002894)*1+lsi)*1]), &(inteval->stack[((hsi*222300+34680364)*1+lsi)*1]), &(inteval->stack[((hsi*188100+27970394)*1+lsi)*1]),190);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*311220+35316484)*1+lsi)*1]), &(inteval->stack[((hsi*263340+38002894)*1+lsi)*1]),190);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+38002894)*1+lsi)*1]), &(inteval->stack[((hsi*414960+35855704)*1+lsi)*1]), &(inteval->stack[((hsi*351120+27732134)*1+lsi)*1]),190);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*533520+16073670)*1+lsi)*1]), &(inteval->stack[((hsi*451440+38002894)*1+lsi)*1]),190);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*689700+38002894)*1+lsi)*1]), &(inteval->stack[((hsi*666900+17085990)*1+lsi)*1]), &(inteval->stack[((hsi*564300+27732134)*1+lsi)*1]),190);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*119700+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*43890+0)*1+lsi)*1]), &(inteval->stack[((hsi*39900+43890)*1+lsi)*1]),190);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*216600+27851834)*1+lsi)*1]), &(inteval->stack[((hsi*119700+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*108300+36689614)*1+lsi)*1]),190);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*324900+28068434)*1+lsi)*1]), &(inteval->stack[((hsi*216600+27851834)*1+lsi)*1]), &(inteval->stack[((hsi*194940+36797914)*1+lsi)*1]),190);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*436050+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*324900+28068434)*1+lsi)*1]), &(inteval->stack[((hsi*290700+26882834)*1+lsi)*1]),190);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*542640+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*436050+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*387600+36992854)*1+lsi)*1]),190);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*638400+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*542640+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*478800+16607190)*1+lsi)*1]),190);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*718200+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*638400+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*558600+27173534)*1+lsi)*1]),190);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*778050+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*718200+27732134)*1+lsi)*1]), &(inteval->stack[((hsi*622440+37380454)*1+lsi)*1]),190);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*815100+25777224)*1+lsi)*1]), &(inteval->stack[((hsi*778050+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*666900+17085990)*1+lsi)*1]),190);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*827640+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*815100+25777224)*1+lsi)*1]), &(inteval->stack[((hsi*689700+38002894)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*2234628+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*827640+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*744876+31078044)*1+lsi)*1]),4356);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*3998808+25777224)*1+lsi)*1]), &(inteval->stack[((hsi*2234628+33822324)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+31822920)*1+lsi)*1]),4356);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*5924160+29776032)*1+lsi)*1]), &(inteval->stack[((hsi*3998808+25777224)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+61823088)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*7840800+80562600)*1+lsi)*1]), &(inteval->stack[((hsi*5924160+29776032)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+20550024)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*9604980+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*7840800+80562600)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+65377584)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*11099088+24263910)*1+lsi)*1]), &(inteval->stack[((hsi*9604980+14658930)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+72238284)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*12231648+60895260)*1+lsi)*1]), &(inteval->stack[((hsi*11099088+24263910)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+41031900)*1+lsi)*1]),4356);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*12937320+1721610)*1+lsi)*1]), &(inteval->stack[((hsi*12231648+60895260)*1+lsi)*1]), &(inteval->stack[((hsi*10349856+50545404)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12937320+1721610)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
