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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_M__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1247004)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1146189)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1152195)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+9887328)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1139259)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1146189)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+9905346)*1+lsi)*1]), &(inteval->stack[((hsi*18018+9887328)*1+lsi)*1]), &(inteval->stack[((hsi*15444+9871884)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+9936234)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1131339)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1139259)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+9957024)*1+lsi)*1]), &(inteval->stack[((hsi*20790+9936234)*1+lsi)*1]), &(inteval->stack[((hsi*18018+9887328)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+9993060)*1+lsi)*1]), &(inteval->stack[((hsi*36036+9957024)*1+lsi)*1]), &(inteval->stack[((hsi*30888+9905346)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+10044540)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1122363)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1131339)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+10068300)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10044540)*1+lsi)*1]), &(inteval->stack[((hsi*20790+9936234)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+10109880)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10068300)*1+lsi)*1]), &(inteval->stack[((hsi*36036+9957024)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+10169940)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10109880)*1+lsi)*1]), &(inteval->stack[((hsi*51480+9993060)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+9936234)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1112265)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1122363)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+10247160)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9936234)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10044540)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+10294680)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10247160)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10068300)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+10363980)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10294680)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10109880)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+10044540)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10363980)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10169940)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+10454070)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1100979)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1112265)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+10484364)*1+lsi)*1]), &(inteval->stack[((hsi*30294+10454070)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9936234)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+10538220)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10484364)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10247160)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+10617420)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10538220)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10294680)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+10721370)*1+lsi)*1]), &(inteval->stack[((hsi*103950+10617420)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10363980)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+10247160)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10721370)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10044540)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+10391304)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1088439)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1100979)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+10847496)*1+lsi)*1]), &(inteval->stack[((hsi*33858+10391304)*1+lsi)*1]), &(inteval->stack[((hsi*30294+10454070)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+10908084)*1+lsi)*1]), &(inteval->stack[((hsi*60588+10847496)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10484364)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+10997844)*1+lsi)*1]), &(inteval->stack[((hsi*89760+10908084)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10538220)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+10425162)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10997844)*1+lsi)*1]), &(inteval->stack[((hsi*103950+10617420)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+11116644)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10425162)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10721370)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+10570692)*1+lsi)*1]), &(inteval->stack[((hsi*168168+11116644)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10247160)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+10756020)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1074579)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1088439)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+11284812)*1+lsi)*1]), &(inteval->stack[((hsi*37620+10756020)*1+lsi)*1]), &(inteval->stack[((hsi*33858+10391304)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+11352528)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11284812)*1+lsi)*1]), &(inteval->stack[((hsi*60588+10847496)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+11453508)*1+lsi)*1]), &(inteval->stack[((hsi*100980+11352528)*1+lsi)*1]), &(inteval->stack[((hsi*89760+10908084)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+10793640)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11453508)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10997844)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+11588148)*1+lsi)*1]), &(inteval->stack[((hsi*166320+10793640)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10425162)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+11782188)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11588148)*1+lsi)*1]), &(inteval->stack[((hsi*168168+11116644)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+10959960)*1+lsi)*1]), &(inteval->stack[((hsi*216216+11782188)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10570692)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+10391304)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1152195)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1157343)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+10404372)*1+lsi)*1]), &(inteval->stack[((hsi*15444+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*13068+10391304)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+10430508)*1+lsi)*1]), &(inteval->stack[((hsi*30888+9905346)*1+lsi)*1]), &(inteval->stack[((hsi*26136+10404372)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*51480+9993060)*1+lsi)*1]), &(inteval->stack[((hsi*43560+10430508)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+10391304)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10169940)*1+lsi)*1]), &(inteval->stack[((hsi*65340+9871884)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10044540)*1+lsi)*1]), &(inteval->stack[((hsi*91476+10391304)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+9993852)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10247160)*1+lsi)*1]), &(inteval->stack[((hsi*121968+9871884)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+10150668)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10570692)*1+lsi)*1]), &(inteval->stack[((hsi*156816+9993852)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+10346688)*1+lsi)*1]), &(inteval->stack[((hsi*231660+10959960)*1+lsi)*1]), &(inteval->stack[((hsi*196020+10150668)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1059333)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1074579)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+9913464)*1+lsi)*1]), &(inteval->stack[((hsi*41580+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*37620+10756020)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+9988704)*1+lsi)*1]), &(inteval->stack[((hsi*75240+9913464)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11284812)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+10101564)*1+lsi)*1]), &(inteval->stack[((hsi*112860+9988704)*1+lsi)*1]), &(inteval->stack[((hsi*100980+11352528)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+11191620)*1+lsi)*1]), &(inteval->stack[((hsi*151470+10101564)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11453508)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*188496+11191620)*1+lsi)*1]), &(inteval->stack[((hsi*166320+10793640)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+11191620)*1+lsi)*1]), &(inteval->stack[((hsi*221760+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11588148)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*249480+11191620)*1+lsi)*1]), &(inteval->stack[((hsi*216216+11782188)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+10586268)*1+lsi)*1]), &(inteval->stack[((hsi*270270+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*231660+10959960)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10586268)*1+lsi)*1]), &(inteval->stack[((hsi*239580+10346688)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1059333)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1041003)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1048101)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1077585)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1032813)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1041003)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1098879)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1077585)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1059333)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1023453)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1032813)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1135383)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1077585)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+10201968)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1098879)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+10262808)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1012845)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1023453)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+10290888)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10262808)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1135383)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+10340028)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10290888)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10159380)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+10411008)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10340028)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10201968)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1000911)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1012845)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+10502268)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10262808)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+10558428)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10502268)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10290888)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+10640328)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10558428)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10340028)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+10262808)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10640328)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10411008)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+10746798)*1+lsi)*1]), &(inteval->stack[((hsi*13338+987573)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1000911)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+10782600)*1+lsi)*1]), &(inteval->stack[((hsi*35802+10746798)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10159380)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+10846248)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10782600)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10502268)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+10939848)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10846248)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10558428)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+11062698)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10939848)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10640328)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+10502268)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11062698)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10262808)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+10672620)*1+lsi)*1]), &(inteval->stack[((hsi*14820+972753)*1+lsi)*1]), &(inteval->stack[((hsi*13338+987573)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+11211756)*1+lsi)*1]), &(inteval->stack[((hsi*40014+10672620)*1+lsi)*1]), &(inteval->stack[((hsi*35802+10746798)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+11283360)*1+lsi)*1]), &(inteval->stack[((hsi*71604+11211756)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10782600)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+11389440)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11283360)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10846248)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+10712634)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11389440)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10939848)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+11529840)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10712634)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11062698)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+10884624)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11529840)*1+lsi)*1]), &(inteval->stack[((hsi*170352+10502268)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+11103648)*1+lsi)*1]), &(inteval->stack[((hsi*16380+956373)*1+lsi)*1]), &(inteval->stack[((hsi*14820+972753)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+11728584)*1+lsi)*1]), &(inteval->stack[((hsi*44460+11103648)*1+lsi)*1]), &(inteval->stack[((hsi*40014+10672620)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+11808612)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11728584)*1+lsi)*1]), &(inteval->stack[((hsi*71604+11211756)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+11927952)*1+lsi)*1]), &(inteval->stack[((hsi*119340+11808612)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11283360)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+11148108)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11927952)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11389440)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+12087072)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11148108)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10712634)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+12316392)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12087072)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11529840)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+11344668)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12316392)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10884624)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+10672620)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1048101)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1054185)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+10688064)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1059333)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10672620)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+10718952)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1098879)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10688064)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+972753)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10201968)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10718952)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+10672620)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10411008)*1+lsi)*1]), &(inteval->stack[((hsi*77220+972753)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+972753)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10262808)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10672620)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*170352+10502268)*1+lsi)*1]), &(inteval->stack[((hsi*144144+972753)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+10344708)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10884624)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10159380)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+10576368)*1+lsi)*1]), &(inteval->stack[((hsi*273780+11344668)*1+lsi)*1]), &(inteval->stack[((hsi*231660+10344708)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*18018+938355)*1+lsi)*1]), &(inteval->stack[((hsi*16380+956373)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+10208520)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*44460+11103648)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+10859508)*1+lsi)*1]), &(inteval->stack[((hsi*88920+10208520)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11728584)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*133380+10859508)*1+lsi)*1]), &(inteval->stack[((hsi*119340+11808612)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+11618448)*1+lsi)*1]), &(inteval->stack[((hsi*179010+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11927952)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*222768+11618448)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11148108)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+10859508)*1+lsi)*1]), &(inteval->stack[((hsi*262080+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12087072)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+11618448)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10859508)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12316392)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+10859508)*1+lsi)*1]), &(inteval->stack[((hsi*319410+11618448)*1+lsi)*1]), &(inteval->stack[((hsi*273780+11344668)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*334620+10859508)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10576368)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+10499148)*1+lsi)*1]), &(inteval->stack[((hsi*339768+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*287496+9871884)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]), &(inteval->stack[((hsi*8281+916970)*1+lsi)*1]), &(inteval->stack[((hsi*7098+925251)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+959649)*1+lsi)*1]), &(inteval->stack[((hsi*9555+907415)*1+lsi)*1]), &(inteval->stack[((hsi*8281+916970)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+984492)*1+lsi)*1]), &(inteval->stack[((hsi*24843+959649)*1+lsi)*1]), &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*10920+896495)*1+lsi)*1]), &(inteval->stack[((hsi*9555+907415)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1055745)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*24843+959649)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1055745)*1+lsi)*1]), &(inteval->stack[((hsi*42588+984492)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1105431)*1+lsi)*1]), &(inteval->stack[((hsi*12376+884119)*1+lsi)*1]), &(inteval->stack[((hsi*10920+896495)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+11432616)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1105431)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1027080)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+11489946)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11432616)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1055745)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+11572756)*1+lsi)*1]), &(inteval->stack[((hsi*82810+11489946)*1+lsi)*1]), &(inteval->stack[((hsi*70980+11361636)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*13923+870196)*1+lsi)*1]), &(inteval->stack[((hsi*12376+884119)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+11679226)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1105431)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+1064208)*1+lsi)*1]), &(inteval->stack[((hsi*65520+11679226)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11432616)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+11744746)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1064208)*1+lsi)*1]), &(inteval->stack[((hsi*82810+11489946)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+11868961)*1+lsi)*1]), &(inteval->stack[((hsi*124215+11744746)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11572756)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+11432616)*1+lsi)*1]), &(inteval->stack[((hsi*15561+854635)*1+lsi)*1]), &(inteval->stack[((hsi*13923+870196)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+11474385)*1+lsi)*1]), &(inteval->stack[((hsi*41769+11432616)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1027080)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+12018019)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11474385)*1+lsi)*1]), &(inteval->stack[((hsi*65520+11679226)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+12127219)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12018019)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1064208)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+12270544)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12127219)*1+lsi)*1]), &(inteval->stack[((hsi*124215+11744746)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+12444445)*1+lsi)*1]), &(inteval->stack[((hsi*173901+12270544)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11868961)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+11679226)*1+lsi)*1]), &(inteval->stack[((hsi*17290+837345)*1+lsi)*1]), &(inteval->stack[((hsi*15561+854635)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+11725909)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11679226)*1+lsi)*1]), &(inteval->stack[((hsi*41769+11432616)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*83538+11725909)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11474385)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+12643189)*1+lsi)*1]), &(inteval->stack[((hsi*123760+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12018019)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+12806989)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12643189)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12127219)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+12018019)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12806989)*1+lsi)*1]), &(inteval->stack[((hsi*173901+12270544)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+13007644)*1+lsi)*1]), &(inteval->stack[((hsi*231868+12018019)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12444445)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+12249887)*1+lsi)*1]), &(inteval->stack[((hsi*19110+818235)*1+lsi)*1]), &(inteval->stack[((hsi*17290+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+12301757)*1+lsi)*1]), &(inteval->stack[((hsi*51870+12249887)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11679226)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+11432616)*1+lsi)*1]), &(inteval->stack[((hsi*93366+12301757)*1+lsi)*1]), &(inteval->stack[((hsi*83538+11725909)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+11679226)*1+lsi)*1]), &(inteval->stack[((hsi*139230+11432616)*1+lsi)*1]), &(inteval->stack[((hsi*123760+1027080)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+13263172)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11679226)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12643189)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+13492492)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13263172)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12806989)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+12643189)*1+lsi)*1]), &(inteval->stack[((hsi*267540+13492492)*1+lsi)*1]), &(inteval->stack[((hsi*231868+12018019)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+13760032)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12643189)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13007644)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+12018019)*1+lsi)*1]), &(inteval->stack[((hsi*7098+925251)*1+lsi)*1]), &(inteval->stack[((hsi*6006+932349)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+12036037)*1+lsi)*1]), &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]), &(inteval->stack[((hsi*18018+12018019)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+12072073)*1+lsi)*1]), &(inteval->stack[((hsi*42588+984492)*1+lsi)*1]), &(inteval->stack[((hsi*36036+12036037)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+837345)*1+lsi)*1]), &(inteval->stack[((hsi*70980+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*60060+12072073)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+927435)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11572756)*1+lsi)*1]), &(inteval->stack[((hsi*90090+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+12018019)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11868961)*1+lsi)*1]), &(inteval->stack[((hsi*126126+927435)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+837345)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12444445)*1+lsi)*1]), &(inteval->stack[((hsi*168168+12018019)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+11864866)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13007644)*1+lsi)*1]), &(inteval->stack[((hsi*216216+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+14079442)*1+lsi)*1]), &(inteval->stack[((hsi*319410+13760032)*1+lsi)*1]), &(inteval->stack[((hsi*270270+11864866)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+11864866)*1+lsi)*1]), &(inteval->stack[((hsi*21021+797214)*1+lsi)*1]), &(inteval->stack[((hsi*19110+818235)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+797214)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11864866)*1+lsi)*1]), &(inteval->stack[((hsi*51870+12249887)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+11864866)*1+lsi)*1]), &(inteval->stack[((hsi*103740+797214)*1+lsi)*1]), &(inteval->stack[((hsi*93366+12301757)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+12020476)*1+lsi)*1]), &(inteval->stack[((hsi*155610+11864866)*1+lsi)*1]), &(inteval->stack[((hsi*139230+11432616)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+12229321)*1+lsi)*1]), &(inteval->stack[((hsi*208845+12020476)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11679226)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12229321)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13263172)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+11667396)*1+lsi)*1]), &(inteval->stack[((hsi*305760+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*267540+13492492)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+12941305)*1+lsi)*1]), &(inteval->stack[((hsi*343980+11667396)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12643189)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*372645+12941305)*1+lsi)*1]), &(inteval->stack[((hsi*319410+13760032)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+11752026)*1+lsi)*1]), &(inteval->stack[((hsi*390390+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*330330+14079442)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+12148422)*1+lsi)*1]), &(inteval->stack[((hsi*396396+11752026)*1+lsi)*1]), &(inteval->stack[((hsi*339768+10159380)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+13167726)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+12148422)*1+lsi)*1]), &(inteval->stack[((hsi*862488+10499148)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*9555+772539)*1+lsi)*1]), &(inteval->stack[((hsi*8190+782094)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+11386206)*1+lsi)*1]), &(inteval->stack[((hsi*11025+761514)*1+lsi)*1]), &(inteval->stack[((hsi*9555+772539)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+797214)*1+lsi)*1]), &(inteval->stack[((hsi*28665+11386206)*1+lsi)*1]), &(inteval->stack[((hsi*24570+11361636)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*12600+748914)*1+lsi)*1]), &(inteval->stack[((hsi*11025+761514)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+11414871)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*28665+11386206)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+846354)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11414871)*1+lsi)*1]), &(inteval->stack[((hsi*49140+797214)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+10192455)*1+lsi)*1]), &(inteval->stack[((hsi*14280+734634)*1+lsi)*1]), &(inteval->stack[((hsi*12600+748914)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+11472201)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10192455)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10159380)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+10230255)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11472201)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11414871)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+928254)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10230255)*1+lsi)*1]), &(inteval->stack[((hsi*81900+846354)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+11538351)*1+lsi)*1]), &(inteval->stack[((hsi*16065+718569)*1+lsi)*1]), &(inteval->stack[((hsi*14280+734634)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+10325805)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11538351)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10192455)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+11581191)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10325805)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11472201)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+11386206)*1+lsi)*1]), &(inteval->stack[((hsi*110250+11581191)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10230255)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11386206)*1+lsi)*1]), &(inteval->stack[((hsi*122850+928254)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*17955+700614)*1+lsi)*1]), &(inteval->stack[((hsi*16065+718569)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+10207575)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11538351)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+15064692)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10207575)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10325805)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+10293255)*1+lsi)*1]), &(inteval->stack[((hsi*126000+15064692)*1+lsi)*1]), &(inteval->stack[((hsi*110250+11581191)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+11529531)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10293255)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11386206)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+15190692)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11529531)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14892702)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+11386206)*1+lsi)*1]), &(inteval->stack[((hsi*19950+680664)*1+lsi)*1]), &(inteval->stack[((hsi*17955+700614)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+1051104)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11386206)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10159380)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+15420012)*1+lsi)*1]), &(inteval->stack[((hsi*96390+1051104)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10207575)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+15562812)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15420012)*1+lsi)*1]), &(inteval->stack[((hsi*126000+15064692)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+15751812)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15562812)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10293255)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15751812)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11529531)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+11440071)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15190692)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+15064692)*1+lsi)*1]), &(inteval->stack[((hsi*22050+658614)*1+lsi)*1]), &(inteval->stack[((hsi*19950+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+15983337)*1+lsi)*1]), &(inteval->stack[((hsi*59850+15064692)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11386206)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+16091067)*1+lsi)*1]), &(inteval->stack[((hsi*107730+15983337)*1+lsi)*1]), &(inteval->stack[((hsi*96390+1051104)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+16251717)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16091067)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15420012)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+16465917)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16251717)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15562812)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+15420012)*1+lsi)*1]), &(inteval->stack[((hsi*264600+16465917)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15751812)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+16730517)*1+lsi)*1]), &(inteval->stack[((hsi*308700+15420012)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10159380)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+17074497)*1+lsi)*1]), &(inteval->stack[((hsi*343980+16730517)*1+lsi)*1]), &(inteval->stack[((hsi*294840+11440071)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*8190+782094)*1+lsi)*1]), &(inteval->stack[((hsi*6930+790284)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+10180170)*1+lsi)*1]), &(inteval->stack[((hsi*24570+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*20790+10159380)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+10221750)*1+lsi)*1]), &(inteval->stack[((hsi*49140+797214)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10180170)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+15728712)*1+lsi)*1]), &(inteval->stack[((hsi*81900+846354)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10221750)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*122850+928254)*1+lsi)*1]), &(inteval->stack[((hsi*103950+15728712)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+680664)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10159380)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15190692)*1+lsi)*1]), &(inteval->stack[((hsi*194040+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+680664)*1+lsi)*1]), &(inteval->stack[((hsi*294840+11440071)*1+lsi)*1]), &(inteval->stack[((hsi*249480+10159380)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*368550+17074497)*1+lsi)*1]), &(inteval->stack[((hsi*311850+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+680664)*1+lsi)*1]), &(inteval->stack[((hsi*24255+634359)*1+lsi)*1]), &(inteval->stack[((hsi*22050+658614)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+746814)*1+lsi)*1]), &(inteval->stack[((hsi*66150+680664)*1+lsi)*1]), &(inteval->stack[((hsi*59850+15064692)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*119700+746814)*1+lsi)*1]), &(inteval->stack[((hsi*107730+15983337)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+634359)*1+lsi)*1]), &(inteval->stack[((hsi*179550+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16091067)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*240975+634359)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16251717)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+15728712)*1+lsi)*1]), &(inteval->stack[((hsi*299880+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*264600+16465917)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+16081512)*1+lsi)*1]), &(inteval->stack[((hsi*352800+15728712)*1+lsi)*1]), &(inteval->stack[((hsi*308700+15420012)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*396900+16081512)*1+lsi)*1]), &(inteval->stack[((hsi*343980+16730517)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+15322677)*1+lsi)*1]), &(inteval->stack[((hsi*429975+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*368550+17074497)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+634359)*1+lsi)*1]), &(inteval->stack[((hsi*450450+15322677)*1+lsi)*1]), &(inteval->stack[((hsi*381150+11361636)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*457380+634359)*1+lsi)*1]), &(inteval->stack[((hsi*396396+11752026)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+16081890)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+12148422)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+18120498)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+16081890)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+13167726)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*10920+606159)*1+lsi)*1]), &(inteval->stack[((hsi*9360+617079)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+11389716)*1+lsi)*1]), &(inteval->stack[((hsi*12600+593559)*1+lsi)*1]), &(inteval->stack[((hsi*10920+606159)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+11422476)*1+lsi)*1]), &(inteval->stack[((hsi*32760+11389716)*1+lsi)*1]), &(inteval->stack[((hsi*28080+11361636)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+11478636)*1+lsi)*1]), &(inteval->stack[((hsi*14400+579159)*1+lsi)*1]), &(inteval->stack[((hsi*12600+593559)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+11516436)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11478636)*1+lsi)*1]), &(inteval->stack[((hsi*32760+11389716)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+11581956)*1+lsi)*1]), &(inteval->stack[((hsi*65520+11516436)*1+lsi)*1]), &(inteval->stack[((hsi*56160+11422476)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+11675556)*1+lsi)*1]), &(inteval->stack[((hsi*16320+562839)*1+lsi)*1]), &(inteval->stack[((hsi*14400+579159)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+11718756)*1+lsi)*1]), &(inteval->stack[((hsi*43200+11675556)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11478636)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+11794356)*1+lsi)*1]), &(inteval->stack[((hsi*75600+11718756)*1+lsi)*1]), &(inteval->stack[((hsi*65520+11516436)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+11903556)*1+lsi)*1]), &(inteval->stack[((hsi*109200+11794356)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11581956)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+12043956)*1+lsi)*1]), &(inteval->stack[((hsi*18360+544479)*1+lsi)*1]), &(inteval->stack[((hsi*16320+562839)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+12092916)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12043956)*1+lsi)*1]), &(inteval->stack[((hsi*43200+11675556)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+12179316)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12092916)*1+lsi)*1]), &(inteval->stack[((hsi*75600+11718756)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+12305316)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12179316)*1+lsi)*1]), &(inteval->stack[((hsi*109200+11794356)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+12469116)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12305316)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11903556)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+12665676)*1+lsi)*1]), &(inteval->stack[((hsi*20520+523959)*1+lsi)*1]), &(inteval->stack[((hsi*18360+544479)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+12720756)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12665676)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12043956)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+12818676)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12720756)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12092916)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*144000+12818676)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12179316)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+12043956)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12305316)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12043956)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12469116)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+11675556)*1+lsi)*1]), &(inteval->stack[((hsi*22800+501159)*1+lsi)*1]), &(inteval->stack[((hsi*20520+523959)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+12962676)*1+lsi)*1]), &(inteval->stack[((hsi*61560+11675556)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12665676)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+12273276)*1+lsi)*1]), &(inteval->stack[((hsi*110160+12962676)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12720756)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+21257538)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12273276)*1+lsi)*1]), &(inteval->stack[((hsi*144000+12818676)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+12665676)*1+lsi)*1]), &(inteval->stack[((hsi*216000+21257538)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10159380)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12665676)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12043956)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+21473538)*1+lsi)*1]), &(inteval->stack[((hsi*305760+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*262080+20995458)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+12043956)*1+lsi)*1]), &(inteval->stack[((hsi*25200+475959)*1+lsi)*1]), &(inteval->stack[((hsi*22800+501159)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+11737116)*1+lsi)*1]), &(inteval->stack[((hsi*68400+12043956)*1+lsi)*1]), &(inteval->stack[((hsi*61560+11675556)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+21810498)*1+lsi)*1]), &(inteval->stack[((hsi*123120+11737116)*1+lsi)*1]), &(inteval->stack[((hsi*110160+12962676)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+21994098)*1+lsi)*1]), &(inteval->stack[((hsi*183600+21810498)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12273276)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+12112356)*1+lsi)*1]), &(inteval->stack[((hsi*244800+21994098)*1+lsi)*1]), &(inteval->stack[((hsi*216000+21257538)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+22238898)*1+lsi)*1]), &(inteval->stack[((hsi*302400+12112356)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12665676)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+12665676)*1+lsi)*1]), &(inteval->stack[((hsi*352800+22238898)*1+lsi)*1]), &(inteval->stack[((hsi*305760+10159380)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+22591698)*1+lsi)*1]), &(inteval->stack[((hsi*393120+12665676)*1+lsi)*1]), &(inteval->stack[((hsi*336960+21473538)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*9360+617079)*1+lsi)*1]), &(inteval->stack[((hsi*7920+626439)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+10183140)*1+lsi)*1]), &(inteval->stack[((hsi*28080+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10159380)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+10230660)*1+lsi)*1]), &(inteval->stack[((hsi*56160+11422476)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10183140)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11581956)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10230660)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11903556)*1+lsi)*1]), &(inteval->stack[((hsi*118800+11361636)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12469116)*1+lsi)*1]), &(inteval->stack[((hsi*166320+10159380)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+10159380)*1+lsi)*1]), &(inteval->stack[((hsi*262080+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*221760+11361636)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*336960+21473538)*1+lsi)*1]), &(inteval->stack[((hsi*285120+10159380)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+21351858)*1+lsi)*1]), &(inteval->stack[((hsi*421200+22591698)*1+lsi)*1]), &(inteval->stack[((hsi*356400+20995458)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*27720+448239)*1+lsi)*1]), &(inteval->stack[((hsi*25200+475959)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*75600+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*68400+12043956)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*136800+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*123120+11737116)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+11566836)*1+lsi)*1]), &(inteval->stack[((hsi*205200+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*183600+21810498)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*275400+11566836)*1+lsi)*1]), &(inteval->stack[((hsi*244800+21994098)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*342720+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*302400+12112356)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+11764836)*1+lsi)*1]), &(inteval->stack[((hsi*403200+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*352800+22238898)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+21787458)*1+lsi)*1]), &(inteval->stack[((hsi*453600+11764836)*1+lsi)*1]), &(inteval->stack[((hsi*393120+12665676)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*491400+21787458)*1+lsi)*1]), &(inteval->stack[((hsi*421200+22591698)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+11876436)*1+lsi)*1]), &(inteval->stack[((hsi*514800+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*435600+21351858)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*522720+11876436)*1+lsi)*1]), &(inteval->stack[((hsi*457380+634359)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+22367598)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+14892702)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+24745974)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+22367598)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+16081890)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+28143654)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+24745974)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+18120498)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*12376+416279)*1+lsi)*1]), &(inteval->stack[((hsi*10608+428655)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+14924526)*1+lsi)*1]), &(inteval->stack[((hsi*14280+401999)*1+lsi)*1]), &(inteval->stack[((hsi*12376+416279)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+14961654)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14924526)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14892702)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+15025302)*1+lsi)*1]), &(inteval->stack[((hsi*16320+385679)*1+lsi)*1]), &(inteval->stack[((hsi*14280+401999)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+15068142)*1+lsi)*1]), &(inteval->stack[((hsi*42840+15025302)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14924526)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+15142398)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15068142)*1+lsi)*1]), &(inteval->stack[((hsi*63648+14961654)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+15248478)*1+lsi)*1]), &(inteval->stack[((hsi*18496+367183)*1+lsi)*1]), &(inteval->stack[((hsi*16320+385679)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+15297438)*1+lsi)*1]), &(inteval->stack[((hsi*48960+15248478)*1+lsi)*1]), &(inteval->stack[((hsi*42840+15025302)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+15383118)*1+lsi)*1]), &(inteval->stack[((hsi*85680+15297438)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15068142)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+15506878)*1+lsi)*1]), &(inteval->stack[((hsi*123760+15383118)*1+lsi)*1]), &(inteval->stack[((hsi*106080+15142398)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+15665998)*1+lsi)*1]), &(inteval->stack[((hsi*20808+346375)*1+lsi)*1]), &(inteval->stack[((hsi*18496+367183)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+15721486)*1+lsi)*1]), &(inteval->stack[((hsi*55488+15665998)*1+lsi)*1]), &(inteval->stack[((hsi*48960+15248478)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+15819406)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15721486)*1+lsi)*1]), &(inteval->stack[((hsi*85680+15297438)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+15962206)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15819406)*1+lsi)*1]), &(inteval->stack[((hsi*123760+15383118)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+16147846)*1+lsi)*1]), &(inteval->stack[((hsi*185640+15962206)*1+lsi)*1]), &(inteval->stack[((hsi*159120+15506878)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+16370614)*1+lsi)*1]), &(inteval->stack[((hsi*23256+323119)*1+lsi)*1]), &(inteval->stack[((hsi*20808+346375)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+16433038)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16370614)*1+lsi)*1]), &(inteval->stack[((hsi*55488+15665998)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+16544014)*1+lsi)*1]), &(inteval->stack[((hsi*110976+16433038)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15721486)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+16707214)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16544014)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15819406)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+16921414)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16707214)*1+lsi)*1]), &(inteval->stack[((hsi*185640+15962206)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+17181310)*1+lsi)*1]), &(inteval->stack[((hsi*259896+16921414)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16147846)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+12399156)*1+lsi)*1]), &(inteval->stack[((hsi*25840+297279)*1+lsi)*1]), &(inteval->stack[((hsi*23256+323119)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+448239)*1+lsi)*1]), &(inteval->stack[((hsi*69768+12399156)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16370614)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+12468924)*1+lsi)*1]), &(inteval->stack[((hsi*124848+448239)*1+lsi)*1]), &(inteval->stack[((hsi*110976+16433038)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+17478334)*1+lsi)*1]), &(inteval->stack[((hsi*184960+12468924)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16544014)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+573087)*1+lsi)*1]), &(inteval->stack[((hsi*244800+17478334)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16707214)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+16370614)*1+lsi)*1]), &(inteval->stack[((hsi*299880+573087)*1+lsi)*1]), &(inteval->stack[((hsi*259896+16921414)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*346528+16370614)*1+lsi)*1]), &(inteval->stack[((hsi*297024+17181310)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+12653884)*1+lsi)*1]), &(inteval->stack[((hsi*28560+268719)*1+lsi)*1]), &(inteval->stack[((hsi*25840+297279)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+15665998)*1+lsi)*1]), &(inteval->stack[((hsi*77520+12653884)*1+lsi)*1]), &(inteval->stack[((hsi*69768+12399156)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+16717142)*1+lsi)*1]), &(inteval->stack[((hsi*139536+15665998)*1+lsi)*1]), &(inteval->stack[((hsi*124848+448239)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+12731404)*1+lsi)*1]), &(inteval->stack[((hsi*208080+16717142)*1+lsi)*1]), &(inteval->stack[((hsi*184960+12468924)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+17723134)*1+lsi)*1]), &(inteval->stack[((hsi*277440+12731404)*1+lsi)*1]), &(inteval->stack[((hsi*244800+17478334)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+32456094)*1+lsi)*1]), &(inteval->stack[((hsi*342720+17723134)*1+lsi)*1]), &(inteval->stack[((hsi*299880+573087)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+448239)*1+lsi)*1]), &(inteval->stack[((hsi*399840+32456094)*1+lsi)*1]), &(inteval->stack[((hsi*346528+16370614)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+32855934)*1+lsi)*1]), &(inteval->stack[((hsi*445536+448239)*1+lsi)*1]), &(inteval->stack[((hsi*381888+11361636)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+16370614)*1+lsi)*1]), &(inteval->stack[((hsi*10608+428655)*1+lsi)*1]), &(inteval->stack[((hsi*8976+439263)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+15805534)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*26928+16370614)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+16370614)*1+lsi)*1]), &(inteval->stack[((hsi*63648+14961654)*1+lsi)*1]), &(inteval->stack[((hsi*53856+15805534)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+15805534)*1+lsi)*1]), &(inteval->stack[((hsi*106080+15142398)*1+lsi)*1]), &(inteval->stack[((hsi*89760+16370614)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*159120+15506878)*1+lsi)*1]), &(inteval->stack[((hsi*134640+15805534)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+15081198)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16147846)*1+lsi)*1]), &(inteval->stack[((hsi*188496+14892702)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+15805534)*1+lsi)*1]), &(inteval->stack[((hsi*297024+17181310)*1+lsi)*1]), &(inteval->stack[((hsi*251328+15081198)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+16925222)*1+lsi)*1]), &(inteval->stack[((hsi*381888+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*323136+15805534)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+15805534)*1+lsi)*1]), &(inteval->stack[((hsi*477360+32855934)*1+lsi)*1]), &(inteval->stack[((hsi*403920+16925222)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+16925222)*1+lsi)*1]), &(inteval->stack[((hsi*31416+237303)*1+lsi)*1]), &(inteval->stack[((hsi*28560+268719)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*85680+16925222)*1+lsi)*1]), &(inteval->stack[((hsi*77520+12653884)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+16925222)*1+lsi)*1]), &(inteval->stack[((hsi*155040+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*139536+15665998)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*232560+16925222)*1+lsi)*1]), &(inteval->stack[((hsi*208080+16717142)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+16299214)*1+lsi)*1]), &(inteval->stack[((hsi*312120+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*277440+12731404)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+16687630)*1+lsi)*1]), &(inteval->stack[((hsi*388416+16299214)*1+lsi)*1]), &(inteval->stack[((hsi*342720+17723134)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+17144590)*1+lsi)*1]), &(inteval->stack[((hsi*456960+16687630)*1+lsi)*1]), &(inteval->stack[((hsi*399840+32456094)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*514080+17144590)*1+lsi)*1]), &(inteval->stack[((hsi*445536+448239)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+16299214)*1+lsi)*1]), &(inteval->stack[((hsi*556920+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*477360+32855934)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+16882654)*1+lsi)*1]), &(inteval->stack[((hsi*583440+16299214)*1+lsi)*1]), &(inteval->stack[((hsi*493680+15805534)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*592416+16882654)*1+lsi)*1]), &(inteval->stack[((hsi*522720+11876436)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+32456094)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+14892702)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+20995458)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+35200374)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+32456094)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+22367598)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+39164334)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+35200374)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+24745974)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+39164334)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+28143654)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1234079)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1239084)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+11374506)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1228304)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1234079)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+11389521)*1+lsi)*1]), &(inteval->stack[((hsi*15015+11374506)*1+lsi)*1]), &(inteval->stack[((hsi*12870+11361636)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+11415261)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1221704)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1228304)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+11432586)*1+lsi)*1]), &(inteval->stack[((hsi*17325+11415261)*1+lsi)*1]), &(inteval->stack[((hsi*15015+11374506)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+11462616)*1+lsi)*1]), &(inteval->stack[((hsi*30030+11432586)*1+lsi)*1]), &(inteval->stack[((hsi*25740+11389521)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+11505516)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1214224)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1221704)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+11525316)*1+lsi)*1]), &(inteval->stack[((hsi*19800+11505516)*1+lsi)*1]), &(inteval->stack[((hsi*17325+11415261)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+11559966)*1+lsi)*1]), &(inteval->stack[((hsi*34650+11525316)*1+lsi)*1]), &(inteval->stack[((hsi*30030+11432586)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+11610016)*1+lsi)*1]), &(inteval->stack[((hsi*50050+11559966)*1+lsi)*1]), &(inteval->stack[((hsi*42900+11462616)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+11674366)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1205809)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1214224)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+11696806)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11674366)*1+lsi)*1]), &(inteval->stack[((hsi*19800+11505516)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+11736406)*1+lsi)*1]), &(inteval->stack[((hsi*39600+11696806)*1+lsi)*1]), &(inteval->stack[((hsi*34650+11525316)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+11794156)*1+lsi)*1]), &(inteval->stack[((hsi*57750+11736406)*1+lsi)*1]), &(inteval->stack[((hsi*50050+11559966)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+11869231)*1+lsi)*1]), &(inteval->stack[((hsi*75075+11794156)*1+lsi)*1]), &(inteval->stack[((hsi*64350+11610016)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+11959321)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1196404)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1205809)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+11984566)*1+lsi)*1]), &(inteval->stack[((hsi*25245+11959321)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11674366)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+12029446)*1+lsi)*1]), &(inteval->stack[((hsi*44880+11984566)*1+lsi)*1]), &(inteval->stack[((hsi*39600+11696806)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*66000+12029446)*1+lsi)*1]), &(inteval->stack[((hsi*57750+11736406)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+12095446)*1+lsi)*1]), &(inteval->stack[((hsi*86625+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*75075+11794156)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+27119499)*1+lsi)*1]), &(inteval->stack[((hsi*105105+12095446)*1+lsi)*1]), &(inteval->stack[((hsi*90090+11869231)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+12200551)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1185954)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1196404)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+12228766)*1+lsi)*1]), &(inteval->stack[((hsi*28215+12200551)*1+lsi)*1]), &(inteval->stack[((hsi*25245+11959321)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+237303)*1+lsi)*1]), &(inteval->stack[((hsi*50490+12228766)*1+lsi)*1]), &(inteval->stack[((hsi*44880+11984566)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+27239619)*1+lsi)*1]), &(inteval->stack[((hsi*74800+237303)*1+lsi)*1]), &(inteval->stack[((hsi*66000+12029446)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+12279256)*1+lsi)*1]), &(inteval->stack[((hsi*99000+27239619)*1+lsi)*1]), &(inteval->stack[((hsi*86625+27032874)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+312103)*1+lsi)*1]), &(inteval->stack[((hsi*121275+12279256)*1+lsi)*1]), &(inteval->stack[((hsi*105105+12095446)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+27338619)*1+lsi)*1]), &(inteval->stack[((hsi*140140+312103)*1+lsi)*1]), &(inteval->stack[((hsi*120120+27119499)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+12400531)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1174404)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1185954)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+12431881)*1+lsi)*1]), &(inteval->stack[((hsi*31350+12400531)*1+lsi)*1]), &(inteval->stack[((hsi*28215+12200551)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+452243)*1+lsi)*1]), &(inteval->stack[((hsi*56430+12431881)*1+lsi)*1]), &(inteval->stack[((hsi*50490+12228766)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+12488311)*1+lsi)*1]), &(inteval->stack[((hsi*84150+452243)*1+lsi)*1]), &(inteval->stack[((hsi*74800+237303)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+27493059)*1+lsi)*1]), &(inteval->stack[((hsi*112200+12488311)*1+lsi)*1]), &(inteval->stack[((hsi*99000+27239619)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+17475070)*1+lsi)*1]), &(inteval->stack[((hsi*138600+27493059)*1+lsi)*1]), &(inteval->stack[((hsi*121275+12279256)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+536393)*1+lsi)*1]), &(inteval->stack[((hsi*161700+17475070)*1+lsi)*1]), &(inteval->stack[((hsi*140140+312103)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+12600511)*1+lsi)*1]), &(inteval->stack[((hsi*180180+536393)*1+lsi)*1]), &(inteval->stack[((hsi*154440+27338619)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+27631659)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1239084)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1243374)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+27642549)*1+lsi)*1]), &(inteval->stack[((hsi*12870+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*10890+27631659)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+17636770)*1+lsi)*1]), &(inteval->stack[((hsi*25740+11389521)*1+lsi)*1]), &(inteval->stack[((hsi*21780+27642549)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+27631659)*1+lsi)*1]), &(inteval->stack[((hsi*42900+11462616)*1+lsi)*1]), &(inteval->stack[((hsi*36300+17636770)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+17636770)*1+lsi)*1]), &(inteval->stack[((hsi*64350+11610016)*1+lsi)*1]), &(inteval->stack[((hsi*54450+27631659)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+27631659)*1+lsi)*1]), &(inteval->stack[((hsi*90090+11869231)*1+lsi)*1]), &(inteval->stack[((hsi*76230+17636770)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*120120+27119499)*1+lsi)*1]), &(inteval->stack[((hsi*101640+27631659)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+11492316)*1+lsi)*1]), &(inteval->stack[((hsi*154440+27338619)*1+lsi)*1]), &(inteval->stack[((hsi*130680+11361636)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+11655666)*1+lsi)*1]), &(inteval->stack[((hsi*193050+12600511)*1+lsi)*1]), &(inteval->stack[((hsi*163350+11492316)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+11855316)*1+lsi)*1]), &(inteval->stack[((hsi*12705+1161699)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1174404)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+716573)*1+lsi)*1]), &(inteval->stack[((hsi*34650+11855316)*1+lsi)*1]), &(inteval->stack[((hsi*31350+12400531)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+11855316)*1+lsi)*1]), &(inteval->stack[((hsi*62700+716573)*1+lsi)*1]), &(inteval->stack[((hsi*56430+12431881)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+11949366)*1+lsi)*1]), &(inteval->stack[((hsi*94050+11855316)*1+lsi)*1]), &(inteval->stack[((hsi*84150+452243)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+716573)*1+lsi)*1]), &(inteval->stack[((hsi*126225+11949366)*1+lsi)*1]), &(inteval->stack[((hsi*112200+12488311)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+11855316)*1+lsi)*1]), &(inteval->stack[((hsi*157080+716573)*1+lsi)*1]), &(inteval->stack[((hsi*138600+27493059)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*184800+11855316)*1+lsi)*1]), &(inteval->stack[((hsi*161700+17475070)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+27240774)*1+lsi)*1]), &(inteval->stack[((hsi*207900+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*180180+536393)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+237303)*1+lsi)*1]), &(inteval->stack[((hsi*225225+27240774)*1+lsi)*1]), &(inteval->stack[((hsi*193050+12600511)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+11855316)*1+lsi)*1]), &(inteval->stack[((hsi*235950+237303)*1+lsi)*1]), &(inteval->stack[((hsi*199650+11655666)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*287496+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*239580+11855316)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+11361636)*1+lsi)*1]), &(inteval->stack[((hsi*862488+10499148)*1+lsi)*1]), &(inteval->stack[((hsi*718740+27032874)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+44260854)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+13167726)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+11361636)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+18120498)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+44260854)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+44260854)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+28143654)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+9871884)*1+lsi)*1]),4356);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*6708240+49292034)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+20995458)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+44260854)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*13923+201348)*1+lsi)*1]), &(inteval->stack[((hsi*11934+215271)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+27068676)*1+lsi)*1]), &(inteval->stack[((hsi*16065+185283)*1+lsi)*1]), &(inteval->stack[((hsi*13923+201348)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+27110445)*1+lsi)*1]), &(inteval->stack[((hsi*41769+27068676)*1+lsi)*1]), &(inteval->stack[((hsi*35802+27032874)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+27182049)*1+lsi)*1]), &(inteval->stack[((hsi*18360+166923)*1+lsi)*1]), &(inteval->stack[((hsi*16065+185283)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+27230244)*1+lsi)*1]), &(inteval->stack[((hsi*48195+27182049)*1+lsi)*1]), &(inteval->stack[((hsi*41769+27068676)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+27313782)*1+lsi)*1]), &(inteval->stack[((hsi*83538+27230244)*1+lsi)*1]), &(inteval->stack[((hsi*71604+27110445)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+44260854)*1+lsi)*1]), &(inteval->stack[((hsi*20808+146115)*1+lsi)*1]), &(inteval->stack[((hsi*18360+166923)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+27433122)*1+lsi)*1]), &(inteval->stack[((hsi*55080+44260854)*1+lsi)*1]), &(inteval->stack[((hsi*48195+27182049)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*96390+27433122)*1+lsi)*1]), &(inteval->stack[((hsi*83538+27230244)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+44315934)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*119340+27313782)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+27529512)*1+lsi)*1]), &(inteval->stack[((hsi*23409+122706)*1+lsi)*1]), &(inteval->stack[((hsi*20808+146115)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+10011114)*1+lsi)*1]), &(inteval->stack[((hsi*62424+27529512)*1+lsi)*1]), &(inteval->stack[((hsi*55080+44260854)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+27591936)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10011114)*1+lsi)*1]), &(inteval->stack[((hsi*96390+27433122)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+44494944)*1+lsi)*1]), &(inteval->stack[((hsi*160650+27591936)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9871884)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+10121274)*1+lsi)*1]), &(inteval->stack[((hsi*208845+44494944)*1+lsi)*1]), &(inteval->stack[((hsi*179010+44315934)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+27752586)*1+lsi)*1]), &(inteval->stack[((hsi*26163+96543)*1+lsi)*1]), &(inteval->stack[((hsi*23409+122706)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+27822813)*1+lsi)*1]), &(inteval->stack[((hsi*70227+27752586)*1+lsi)*1]), &(inteval->stack[((hsi*62424+27529512)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+44703789)*1+lsi)*1]), &(inteval->stack[((hsi*124848+27822813)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10011114)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+10371888)*1+lsi)*1]), &(inteval->stack[((hsi*183600+44703789)*1+lsi)*1]), &(inteval->stack[((hsi*160650+27591936)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+27947661)*1+lsi)*1]), &(inteval->stack[((hsi*240975+10371888)*1+lsi)*1]), &(inteval->stack[((hsi*208845+44494944)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+44887389)*1+lsi)*1]), &(inteval->stack[((hsi*292383+27947661)*1+lsi)*1]), &(inteval->stack[((hsi*250614+10121274)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+10612863)*1+lsi)*1]), &(inteval->stack[((hsi*29070+67473)*1+lsi)*1]), &(inteval->stack[((hsi*26163+96543)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+28240044)*1+lsi)*1]), &(inteval->stack[((hsi*78489+10612863)*1+lsi)*1]), &(inteval->stack[((hsi*70227+27752586)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+10691352)*1+lsi)*1]), &(inteval->stack[((hsi*140454+28240044)*1+lsi)*1]), &(inteval->stack[((hsi*124848+27822813)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+28380498)*1+lsi)*1]), &(inteval->stack[((hsi*208080+10691352)*1+lsi)*1]), &(inteval->stack[((hsi*183600+44703789)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+45221541)*1+lsi)*1]), &(inteval->stack[((hsi*275400+28380498)*1+lsi)*1]), &(inteval->stack[((hsi*240975+10371888)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+10899432)*1+lsi)*1]), &(inteval->stack[((hsi*337365+45221541)*1+lsi)*1]), &(inteval->stack[((hsi*292383+27947661)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+28655898)*1+lsi)*1]), &(inteval->stack[((hsi*389844+10899432)*1+lsi)*1]), &(inteval->stack[((hsi*334152+44887389)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+45558906)*1+lsi)*1]), &(inteval->stack[((hsi*32130+35343)*1+lsi)*1]), &(inteval->stack[((hsi*29070+67473)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+45646116)*1+lsi)*1]), &(inteval->stack[((hsi*87210+45558906)*1+lsi)*1]), &(inteval->stack[((hsi*78489+10612863)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+11289276)*1+lsi)*1]), &(inteval->stack[((hsi*156978+45646116)*1+lsi)*1]), &(inteval->stack[((hsi*140454+28240044)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+17475070)*1+lsi)*1]), &(inteval->stack[((hsi*234090+11289276)*1+lsi)*1]), &(inteval->stack[((hsi*208080+10691352)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+45803094)*1+lsi)*1]), &(inteval->stack[((hsi*312120+17475070)*1+lsi)*1]), &(inteval->stack[((hsi*275400+28380498)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+29085522)*1+lsi)*1]), &(inteval->stack[((hsi*385560+45803094)*1+lsi)*1]), &(inteval->stack[((hsi*337365+45221541)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+11523366)*1+lsi)*1]), &(inteval->stack[((hsi*449820+29085522)*1+lsi)*1]), &(inteval->stack[((hsi*389844+10899432)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+17787190)*1+lsi)*1]), &(inteval->stack[((hsi*501228+11523366)*1+lsi)*1]), &(inteval->stack[((hsi*429624+28655898)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+46188654)*1+lsi)*1]), &(inteval->stack[((hsi*11934+215271)*1+lsi)*1]), &(inteval->stack[((hsi*10098+227205)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+46218948)*1+lsi)*1]), &(inteval->stack[((hsi*35802+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*30294+46188654)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+46279536)*1+lsi)*1]), &(inteval->stack[((hsi*71604+27110445)*1+lsi)*1]), &(inteval->stack[((hsi*60588+46218948)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*119340+27313782)*1+lsi)*1]), &(inteval->stack[((hsi*100980+46279536)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+46188654)*1+lsi)*1]), &(inteval->stack[((hsi*179010+44315934)*1+lsi)*1]), &(inteval->stack[((hsi*151470+29535342)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*250614+10121274)*1+lsi)*1]), &(inteval->stack[((hsi*212058+46188654)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+46188654)*1+lsi)*1]), &(inteval->stack[((hsi*334152+44887389)*1+lsi)*1]), &(inteval->stack[((hsi*282744+29535342)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*429624+28655898)*1+lsi)*1]), &(inteval->stack[((hsi*363528+46188654)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+46188654)*1+lsi)*1]), &(inteval->stack[((hsi*537030+17787190)*1+lsi)*1]), &(inteval->stack[((hsi*454410+29535342)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*35343+0)*1+lsi)*1]), &(inteval->stack[((hsi*32130+35343)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*96390+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*87210+45558906)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*174420+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*156978+45646116)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*261630+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*234090+11289276)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*351135+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*312120+17475070)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*436968+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*385560+45803094)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*514080+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*449820+29085522)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*578340+29535342)*1+lsi)*1]), &(inteval->stack[((hsi*501228+11523366)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*626535+12024594)*1+lsi)*1]), &(inteval->stack[((hsi*537030+17787190)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*656370+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*555390+46188654)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*666468+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*592416+16882654)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+44260854)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+14892702)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+44260854)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+32456094)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+35200374)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+39164334)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+9871884)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+20995458)*1+lsi)*1]),4356);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*8624880+1247004)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+27032874)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+49292034)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8624880+1247004)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
