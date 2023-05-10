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
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
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
#include <_aB_M__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1009701)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*6006+908886)*1+lsi)*1]), &(inteval->stack[((hsi*5148+914892)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+7733385)*1+lsi)*1]), &(inteval->stack[((hsi*6930+901956)*1+lsi)*1]), &(inteval->stack[((hsi*6006+908886)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+7751403)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7733385)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7717941)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+7782291)*1+lsi)*1]), &(inteval->stack[((hsi*7920+894036)*1+lsi)*1]), &(inteval->stack[((hsi*6930+901956)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+7803081)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7782291)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7733385)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+7839117)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7803081)*1+lsi)*1]), &(inteval->stack[((hsi*30888+7751403)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+7890597)*1+lsi)*1]), &(inteval->stack[((hsi*8976+885060)*1+lsi)*1]), &(inteval->stack[((hsi*7920+894036)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+7914357)*1+lsi)*1]), &(inteval->stack[((hsi*23760+7890597)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7782291)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+7955937)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7914357)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7803081)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+8015997)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7955937)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7839117)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+7782291)*1+lsi)*1]), &(inteval->stack[((hsi*10098+874962)*1+lsi)*1]), &(inteval->stack[((hsi*8976+885060)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+8093217)*1+lsi)*1]), &(inteval->stack[((hsi*26928+7782291)*1+lsi)*1]), &(inteval->stack[((hsi*23760+7890597)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+8140737)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8093217)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7914357)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+8210037)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8140737)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7955937)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+7890597)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8210037)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8015997)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+8300127)*1+lsi)*1]), &(inteval->stack[((hsi*11286+863676)*1+lsi)*1]), &(inteval->stack[((hsi*10098+874962)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+8330421)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8300127)*1+lsi)*1]), &(inteval->stack[((hsi*26928+7782291)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+8384277)*1+lsi)*1]), &(inteval->stack[((hsi*53856+8330421)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8093217)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+8463477)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8384277)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8140737)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+8567427)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8463477)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8210037)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+8093217)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8567427)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7890597)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+8237361)*1+lsi)*1]), &(inteval->stack[((hsi*12540+851136)*1+lsi)*1]), &(inteval->stack[((hsi*11286+863676)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+8693553)*1+lsi)*1]), &(inteval->stack[((hsi*33858+8237361)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8300127)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+8754141)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8693553)*1+lsi)*1]), &(inteval->stack[((hsi*53856+8330421)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+8843901)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8754141)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8384277)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+8271219)*1+lsi)*1]), &(inteval->stack[((hsi*118800+8843901)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8463477)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+8962701)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8271219)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8567427)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+8416749)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8962701)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8093217)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+8602077)*1+lsi)*1]), &(inteval->stack[((hsi*13860+837276)*1+lsi)*1]), &(inteval->stack[((hsi*12540+851136)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+9130869)*1+lsi)*1]), &(inteval->stack[((hsi*37620+8602077)*1+lsi)*1]), &(inteval->stack[((hsi*33858+8237361)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+9198585)*1+lsi)*1]), &(inteval->stack[((hsi*67716+9130869)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8693553)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+9299565)*1+lsi)*1]), &(inteval->stack[((hsi*100980+9198585)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8754141)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+8639697)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9299565)*1+lsi)*1]), &(inteval->stack[((hsi*118800+8843901)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+9434205)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8639697)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8271219)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+9628245)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9434205)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8962701)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+8806017)*1+lsi)*1]), &(inteval->stack[((hsi*216216+9628245)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8416749)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+8237361)*1+lsi)*1]), &(inteval->stack[((hsi*5148+914892)*1+lsi)*1]), &(inteval->stack[((hsi*4356+920040)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+8250429)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*13068+8237361)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+8276565)*1+lsi)*1]), &(inteval->stack[((hsi*30888+7751403)*1+lsi)*1]), &(inteval->stack[((hsi*26136+8250429)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7839117)*1+lsi)*1]), &(inteval->stack[((hsi*43560+8276565)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+8237361)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8015997)*1+lsi)*1]), &(inteval->stack[((hsi*65340+7717941)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7890597)*1+lsi)*1]), &(inteval->stack[((hsi*91476+8237361)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+7839909)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8093217)*1+lsi)*1]), &(inteval->stack[((hsi*121968+7717941)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+7996725)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8416749)*1+lsi)*1]), &(inteval->stack[((hsi*156816+7839909)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+8192745)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8806017)*1+lsi)*1]), &(inteval->stack[((hsi*196020+7996725)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*15246+822030)*1+lsi)*1]), &(inteval->stack[((hsi*13860+837276)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+7759521)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*37620+8602077)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+7834761)*1+lsi)*1]), &(inteval->stack[((hsi*75240+7759521)*1+lsi)*1]), &(inteval->stack[((hsi*67716+9130869)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+7947621)*1+lsi)*1]), &(inteval->stack[((hsi*112860+7834761)*1+lsi)*1]), &(inteval->stack[((hsi*100980+9198585)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+9037677)*1+lsi)*1]), &(inteval->stack[((hsi*151470+7947621)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9299565)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*188496+9037677)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8639697)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+9037677)*1+lsi)*1]), &(inteval->stack[((hsi*221760+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9434205)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*249480+9037677)*1+lsi)*1]), &(inteval->stack[((hsi*216216+9628245)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+8432325)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8806017)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*283140+8432325)*1+lsi)*1]), &(inteval->stack[((hsi*239580+8192745)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+822030)*1+lsi)*1]), &(inteval->stack[((hsi*7098+803700)*1+lsi)*1]), &(inteval->stack[((hsi*6084+810798)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+840282)*1+lsi)*1]), &(inteval->stack[((hsi*8190+795510)*1+lsi)*1]), &(inteval->stack[((hsi*7098+803700)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+861576)*1+lsi)*1]), &(inteval->stack[((hsi*21294+840282)*1+lsi)*1]), &(inteval->stack[((hsi*18252+822030)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+898080)*1+lsi)*1]), &(inteval->stack[((hsi*9360+786150)*1+lsi)*1]), &(inteval->stack[((hsi*8190+795510)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*24570+898080)*1+lsi)*1]), &(inteval->stack[((hsi*21294+840282)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+8048025)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*36504+861576)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+8108865)*1+lsi)*1]), &(inteval->stack[((hsi*10608+775542)*1+lsi)*1]), &(inteval->stack[((hsi*9360+786150)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+8136945)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8108865)*1+lsi)*1]), &(inteval->stack[((hsi*24570+898080)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+8186085)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8136945)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8005437)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+8257065)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8186085)*1+lsi)*1]), &(inteval->stack[((hsi*60840+8048025)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*11934+763608)*1+lsi)*1]), &(inteval->stack[((hsi*10608+775542)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+8348325)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8108865)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+8404485)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8348325)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8136945)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+8486385)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8404485)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8186085)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+8108865)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8486385)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8257065)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+8592855)*1+lsi)*1]), &(inteval->stack[((hsi*13338+750270)*1+lsi)*1]), &(inteval->stack[((hsi*11934+763608)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+8628657)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8592855)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8005437)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+8692305)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8628657)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8348325)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+8785905)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8692305)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8404485)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+8908755)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8785905)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8486385)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+8348325)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8908755)*1+lsi)*1]), &(inteval->stack[((hsi*127764+8108865)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+8518677)*1+lsi)*1]), &(inteval->stack[((hsi*14820+735450)*1+lsi)*1]), &(inteval->stack[((hsi*13338+750270)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+9057813)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8518677)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8592855)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+9129417)*1+lsi)*1]), &(inteval->stack[((hsi*71604+9057813)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8628657)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+9235497)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9129417)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8692305)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+8558691)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9235497)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8785905)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+9375897)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8558691)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8908755)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+8730681)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9375897)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8348325)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+8949705)*1+lsi)*1]), &(inteval->stack[((hsi*16380+719070)*1+lsi)*1]), &(inteval->stack[((hsi*14820+735450)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+9574641)*1+lsi)*1]), &(inteval->stack[((hsi*44460+8949705)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8518677)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+9654669)*1+lsi)*1]), &(inteval->stack[((hsi*80028+9574641)*1+lsi)*1]), &(inteval->stack[((hsi*71604+9057813)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+9774009)*1+lsi)*1]), &(inteval->stack[((hsi*119340+9654669)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9129417)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+8994165)*1+lsi)*1]), &(inteval->stack[((hsi*159120+9774009)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9235497)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+9933129)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8994165)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8558691)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+10162449)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9933129)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9375897)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+9190725)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10162449)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8730681)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+8518677)*1+lsi)*1]), &(inteval->stack[((hsi*6084+810798)*1+lsi)*1]), &(inteval->stack[((hsi*5148+816882)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+8534121)*1+lsi)*1]), &(inteval->stack[((hsi*18252+822030)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8518677)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+8565009)*1+lsi)*1]), &(inteval->stack[((hsi*36504+861576)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8534121)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+735450)*1+lsi)*1]), &(inteval->stack[((hsi*60840+8048025)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8565009)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+8518677)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8257065)*1+lsi)*1]), &(inteval->stack[((hsi*77220+735450)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+735450)*1+lsi)*1]), &(inteval->stack[((hsi*127764+8108865)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8518677)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8348325)*1+lsi)*1]), &(inteval->stack[((hsi*144144+735450)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+8190765)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8730681)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8005437)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+8422425)*1+lsi)*1]), &(inteval->stack[((hsi*273780+9190725)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8190765)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*18018+701052)*1+lsi)*1]), &(inteval->stack[((hsi*16380+719070)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+8054577)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*44460+8949705)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+8705565)*1+lsi)*1]), &(inteval->stack[((hsi*88920+8054577)*1+lsi)*1]), &(inteval->stack[((hsi*80028+9574641)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*133380+8705565)*1+lsi)*1]), &(inteval->stack[((hsi*119340+9654669)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+9464505)*1+lsi)*1]), &(inteval->stack[((hsi*179010+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*159120+9774009)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*222768+9464505)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8994165)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+8705565)*1+lsi)*1]), &(inteval->stack[((hsi*262080+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9933129)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+9464505)*1+lsi)*1]), &(inteval->stack[((hsi*294840+8705565)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10162449)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+8705565)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9464505)*1+lsi)*1]), &(inteval->stack[((hsi*273780+9190725)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*334620+8705565)*1+lsi)*1]), &(inteval->stack[((hsi*283140+8422425)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+8345205)*1+lsi)*1]), &(inteval->stack[((hsi*339768+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*287496+7717941)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]), &(inteval->stack[((hsi*8281+679667)*1+lsi)*1]), &(inteval->stack[((hsi*7098+687948)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+722346)*1+lsi)*1]), &(inteval->stack[((hsi*9555+670112)*1+lsi)*1]), &(inteval->stack[((hsi*8281+679667)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+747189)*1+lsi)*1]), &(inteval->stack[((hsi*24843+722346)*1+lsi)*1]), &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+789777)*1+lsi)*1]), &(inteval->stack[((hsi*10920+659192)*1+lsi)*1]), &(inteval->stack[((hsi*9555+670112)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+818442)*1+lsi)*1]), &(inteval->stack[((hsi*28665+789777)*1+lsi)*1]), &(inteval->stack[((hsi*24843+722346)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*49686+818442)*1+lsi)*1]), &(inteval->stack[((hsi*42588+747189)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+868128)*1+lsi)*1]), &(inteval->stack[((hsi*12376+646816)*1+lsi)*1]), &(inteval->stack[((hsi*10920+659192)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+9278673)*1+lsi)*1]), &(inteval->stack[((hsi*32760+868128)*1+lsi)*1]), &(inteval->stack[((hsi*28665+789777)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+9336003)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9278673)*1+lsi)*1]), &(inteval->stack[((hsi*49686+818442)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+9418813)*1+lsi)*1]), &(inteval->stack[((hsi*82810+9336003)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9207693)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+789777)*1+lsi)*1]), &(inteval->stack[((hsi*13923+632893)*1+lsi)*1]), &(inteval->stack[((hsi*12376+646816)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+9525283)*1+lsi)*1]), &(inteval->stack[((hsi*37128+789777)*1+lsi)*1]), &(inteval->stack[((hsi*32760+868128)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+826905)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9525283)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9278673)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+9590803)*1+lsi)*1]), &(inteval->stack[((hsi*95550+826905)*1+lsi)*1]), &(inteval->stack[((hsi*82810+9336003)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+9715018)*1+lsi)*1]), &(inteval->stack[((hsi*124215+9590803)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9418813)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+9278673)*1+lsi)*1]), &(inteval->stack[((hsi*15561+617332)*1+lsi)*1]), &(inteval->stack[((hsi*13923+632893)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+9320442)*1+lsi)*1]), &(inteval->stack[((hsi*41769+9278673)*1+lsi)*1]), &(inteval->stack[((hsi*37128+789777)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+9864076)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9320442)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9525283)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+9973276)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9864076)*1+lsi)*1]), &(inteval->stack[((hsi*95550+826905)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+10116601)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9973276)*1+lsi)*1]), &(inteval->stack[((hsi*124215+9590803)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+10290502)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10116601)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9715018)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+9525283)*1+lsi)*1]), &(inteval->stack[((hsi*17290+600042)*1+lsi)*1]), &(inteval->stack[((hsi*15561+617332)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+9571966)*1+lsi)*1]), &(inteval->stack[((hsi*46683+9525283)*1+lsi)*1]), &(inteval->stack[((hsi*41769+9278673)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+789777)*1+lsi)*1]), &(inteval->stack[((hsi*83538+9571966)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9320442)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+10489246)*1+lsi)*1]), &(inteval->stack[((hsi*123760+789777)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9864076)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+10653046)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10489246)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9973276)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+9864076)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10653046)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10116601)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+10853701)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9864076)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10290502)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+10095944)*1+lsi)*1]), &(inteval->stack[((hsi*19110+580932)*1+lsi)*1]), &(inteval->stack[((hsi*17290+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+10147814)*1+lsi)*1]), &(inteval->stack[((hsi*51870+10095944)*1+lsi)*1]), &(inteval->stack[((hsi*46683+9525283)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+9278673)*1+lsi)*1]), &(inteval->stack[((hsi*93366+10147814)*1+lsi)*1]), &(inteval->stack[((hsi*83538+9571966)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+9525283)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9278673)*1+lsi)*1]), &(inteval->stack[((hsi*123760+789777)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+11109229)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9525283)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10489246)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+11338549)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11109229)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10653046)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+10489246)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11338549)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9864076)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+11606089)*1+lsi)*1]), &(inteval->stack[((hsi*298116+10489246)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10853701)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+9864076)*1+lsi)*1]), &(inteval->stack[((hsi*7098+687948)*1+lsi)*1]), &(inteval->stack[((hsi*6006+695046)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+9882094)*1+lsi)*1]), &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]), &(inteval->stack[((hsi*18018+9864076)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+9918130)*1+lsi)*1]), &(inteval->stack[((hsi*42588+747189)*1+lsi)*1]), &(inteval->stack[((hsi*36036+9882094)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+600042)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*60060+9918130)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+690132)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9418813)*1+lsi)*1]), &(inteval->stack[((hsi*90090+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+9864076)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9715018)*1+lsi)*1]), &(inteval->stack[((hsi*126126+690132)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+600042)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10290502)*1+lsi)*1]), &(inteval->stack[((hsi*168168+9864076)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+9710923)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10853701)*1+lsi)*1]), &(inteval->stack[((hsi*216216+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+11925499)*1+lsi)*1]), &(inteval->stack[((hsi*319410+11606089)*1+lsi)*1]), &(inteval->stack[((hsi*270270+9710923)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+9710923)*1+lsi)*1]), &(inteval->stack[((hsi*21021+559911)*1+lsi)*1]), &(inteval->stack[((hsi*19110+580932)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+559911)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9710923)*1+lsi)*1]), &(inteval->stack[((hsi*51870+10095944)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+9710923)*1+lsi)*1]), &(inteval->stack[((hsi*103740+559911)*1+lsi)*1]), &(inteval->stack[((hsi*93366+10147814)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+9866533)*1+lsi)*1]), &(inteval->stack[((hsi*155610+9710923)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9278673)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+10075378)*1+lsi)*1]), &(inteval->stack[((hsi*208845+9866533)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9525283)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10075378)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11109229)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+9513453)*1+lsi)*1]), &(inteval->stack[((hsi*305760+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11338549)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+10787362)*1+lsi)*1]), &(inteval->stack[((hsi*343980+9513453)*1+lsi)*1]), &(inteval->stack[((hsi*298116+10489246)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*372645+10787362)*1+lsi)*1]), &(inteval->stack[((hsi*319410+11606089)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+9598083)*1+lsi)*1]), &(inteval->stack[((hsi*390390+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*330330+11925499)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+9994479)*1+lsi)*1]), &(inteval->stack[((hsi*396396+9598083)*1+lsi)*1]), &(inteval->stack[((hsi*339768+8005437)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+11013783)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+9994479)*1+lsi)*1]), &(inteval->stack[((hsi*862488+8345205)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*9555+535236)*1+lsi)*1]), &(inteval->stack[((hsi*8190+544791)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+9232263)*1+lsi)*1]), &(inteval->stack[((hsi*11025+524211)*1+lsi)*1]), &(inteval->stack[((hsi*9555+535236)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+559911)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9232263)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9207693)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*12600+511611)*1+lsi)*1]), &(inteval->stack[((hsi*11025+524211)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+9260928)*1+lsi)*1]), &(inteval->stack[((hsi*33075+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9232263)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+609051)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9260928)*1+lsi)*1]), &(inteval->stack[((hsi*49140+559911)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+8038512)*1+lsi)*1]), &(inteval->stack[((hsi*14280+497331)*1+lsi)*1]), &(inteval->stack[((hsi*12600+511611)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+9318258)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8038512)*1+lsi)*1]), &(inteval->stack[((hsi*33075+8005437)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+8076312)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9318258)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9260928)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+690951)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8076312)*1+lsi)*1]), &(inteval->stack[((hsi*81900+609051)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+9384408)*1+lsi)*1]), &(inteval->stack[((hsi*16065+481266)*1+lsi)*1]), &(inteval->stack[((hsi*14280+497331)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+8171862)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9384408)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8038512)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+9427248)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8171862)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9318258)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+9232263)*1+lsi)*1]), &(inteval->stack[((hsi*110250+9427248)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8076312)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9232263)*1+lsi)*1]), &(inteval->stack[((hsi*122850+690951)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*17955+463311)*1+lsi)*1]), &(inteval->stack[((hsi*16065+481266)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+8053632)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9384408)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+12910749)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8053632)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8171862)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+8139312)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12910749)*1+lsi)*1]), &(inteval->stack[((hsi*110250+9427248)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+9375588)*1+lsi)*1]), &(inteval->stack[((hsi*165375+8139312)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9232263)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+13036749)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9375588)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12738759)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+9232263)*1+lsi)*1]), &(inteval->stack[((hsi*19950+443361)*1+lsi)*1]), &(inteval->stack[((hsi*17955+463311)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+813801)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9232263)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8005437)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+13266069)*1+lsi)*1]), &(inteval->stack[((hsi*96390+813801)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8053632)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+13408869)*1+lsi)*1]), &(inteval->stack[((hsi*142800+13266069)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12910749)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+13597869)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13408869)*1+lsi)*1]), &(inteval->stack[((hsi*165375+8139312)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*231525+13597869)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9375588)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+9286128)*1+lsi)*1]), &(inteval->stack[((hsi*267540+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13036749)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+12910749)*1+lsi)*1]), &(inteval->stack[((hsi*22050+421311)*1+lsi)*1]), &(inteval->stack[((hsi*19950+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+13829394)*1+lsi)*1]), &(inteval->stack[((hsi*59850+12910749)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9232263)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+13937124)*1+lsi)*1]), &(inteval->stack[((hsi*107730+13829394)*1+lsi)*1]), &(inteval->stack[((hsi*96390+813801)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+14097774)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13937124)*1+lsi)*1]), &(inteval->stack[((hsi*142800+13266069)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+14311974)*1+lsi)*1]), &(inteval->stack[((hsi*214200+14097774)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13408869)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+13266069)*1+lsi)*1]), &(inteval->stack[((hsi*264600+14311974)*1+lsi)*1]), &(inteval->stack[((hsi*231525+13597869)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+14576574)*1+lsi)*1]), &(inteval->stack[((hsi*308700+13266069)*1+lsi)*1]), &(inteval->stack[((hsi*267540+8005437)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+14920554)*1+lsi)*1]), &(inteval->stack[((hsi*343980+14576574)*1+lsi)*1]), &(inteval->stack[((hsi*294840+9286128)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*8190+544791)*1+lsi)*1]), &(inteval->stack[((hsi*6930+552981)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+8026227)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8005437)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+8067807)*1+lsi)*1]), &(inteval->stack[((hsi*49140+559911)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8026227)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+13574769)*1+lsi)*1]), &(inteval->stack[((hsi*81900+609051)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8067807)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*122850+690951)*1+lsi)*1]), &(inteval->stack[((hsi*103950+13574769)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+443361)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8005437)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13036749)*1+lsi)*1]), &(inteval->stack[((hsi*194040+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+443361)*1+lsi)*1]), &(inteval->stack[((hsi*294840+9286128)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8005437)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*368550+14920554)*1+lsi)*1]), &(inteval->stack[((hsi*311850+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+443361)*1+lsi)*1]), &(inteval->stack[((hsi*24255+397056)*1+lsi)*1]), &(inteval->stack[((hsi*22050+421311)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+509511)*1+lsi)*1]), &(inteval->stack[((hsi*66150+443361)*1+lsi)*1]), &(inteval->stack[((hsi*59850+12910749)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*119700+509511)*1+lsi)*1]), &(inteval->stack[((hsi*107730+13829394)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+397056)*1+lsi)*1]), &(inteval->stack[((hsi*179550+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13937124)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*240975+397056)*1+lsi)*1]), &(inteval->stack[((hsi*214200+14097774)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+13574769)*1+lsi)*1]), &(inteval->stack[((hsi*299880+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*264600+14311974)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+13927569)*1+lsi)*1]), &(inteval->stack[((hsi*352800+13574769)*1+lsi)*1]), &(inteval->stack[((hsi*308700+13266069)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*396900+13927569)*1+lsi)*1]), &(inteval->stack[((hsi*343980+14576574)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+13168734)*1+lsi)*1]), &(inteval->stack[((hsi*429975+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*368550+14920554)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+397056)*1+lsi)*1]), &(inteval->stack[((hsi*450450+13168734)*1+lsi)*1]), &(inteval->stack[((hsi*381150+9207693)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*457380+397056)*1+lsi)*1]), &(inteval->stack[((hsi*396396+9598083)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+13927947)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+9994479)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+15966555)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+13927947)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+11013783)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*10920+368856)*1+lsi)*1]), &(inteval->stack[((hsi*9360+379776)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+9235773)*1+lsi)*1]), &(inteval->stack[((hsi*12600+356256)*1+lsi)*1]), &(inteval->stack[((hsi*10920+368856)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+9268533)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9235773)*1+lsi)*1]), &(inteval->stack[((hsi*28080+9207693)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+9324693)*1+lsi)*1]), &(inteval->stack[((hsi*14400+341856)*1+lsi)*1]), &(inteval->stack[((hsi*12600+356256)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+9362493)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9324693)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9235773)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+9428013)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9362493)*1+lsi)*1]), &(inteval->stack[((hsi*56160+9268533)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+9521613)*1+lsi)*1]), &(inteval->stack[((hsi*16320+325536)*1+lsi)*1]), &(inteval->stack[((hsi*14400+341856)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+9564813)*1+lsi)*1]), &(inteval->stack[((hsi*43200+9521613)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9324693)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+9640413)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9564813)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9362493)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+9749613)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9640413)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9428013)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+9890013)*1+lsi)*1]), &(inteval->stack[((hsi*18360+307176)*1+lsi)*1]), &(inteval->stack[((hsi*16320+325536)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+9938973)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9890013)*1+lsi)*1]), &(inteval->stack[((hsi*43200+9521613)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+10025373)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9938973)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9564813)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+10151373)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10025373)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9640413)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+10315173)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10151373)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9749613)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+10511733)*1+lsi)*1]), &(inteval->stack[((hsi*20520+286656)*1+lsi)*1]), &(inteval->stack[((hsi*18360+307176)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+10566813)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10511733)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9890013)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+10664733)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10566813)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9938973)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10664733)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10025373)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+9890013)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10151373)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9890013)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10315173)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+9521613)*1+lsi)*1]), &(inteval->stack[((hsi*22800+263856)*1+lsi)*1]), &(inteval->stack[((hsi*20520+286656)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+10808733)*1+lsi)*1]), &(inteval->stack[((hsi*61560+9521613)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10511733)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+10119333)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10808733)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10566813)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+19103595)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10119333)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10664733)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+10511733)*1+lsi)*1]), &(inteval->stack[((hsi*216000+19103595)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8005437)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10511733)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9890013)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+19319595)*1+lsi)*1]), &(inteval->stack[((hsi*305760+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*262080+18841515)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+9890013)*1+lsi)*1]), &(inteval->stack[((hsi*25200+238656)*1+lsi)*1]), &(inteval->stack[((hsi*22800+263856)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+9583173)*1+lsi)*1]), &(inteval->stack[((hsi*68400+9890013)*1+lsi)*1]), &(inteval->stack[((hsi*61560+9521613)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+19656555)*1+lsi)*1]), &(inteval->stack[((hsi*123120+9583173)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10808733)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+19840155)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19656555)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10119333)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+9958413)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19840155)*1+lsi)*1]), &(inteval->stack[((hsi*216000+19103595)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+20084955)*1+lsi)*1]), &(inteval->stack[((hsi*302400+9958413)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10511733)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+10511733)*1+lsi)*1]), &(inteval->stack[((hsi*352800+20084955)*1+lsi)*1]), &(inteval->stack[((hsi*305760+8005437)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+20437755)*1+lsi)*1]), &(inteval->stack[((hsi*393120+10511733)*1+lsi)*1]), &(inteval->stack[((hsi*336960+19319595)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*9360+379776)*1+lsi)*1]), &(inteval->stack[((hsi*7920+389136)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+8029197)*1+lsi)*1]), &(inteval->stack[((hsi*28080+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8005437)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+8076717)*1+lsi)*1]), &(inteval->stack[((hsi*56160+9268533)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8029197)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9428013)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8076717)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9749613)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9207693)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10315173)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8005437)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+8005437)*1+lsi)*1]), &(inteval->stack[((hsi*262080+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*221760+9207693)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*336960+19319595)*1+lsi)*1]), &(inteval->stack[((hsi*285120+8005437)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+19197915)*1+lsi)*1]), &(inteval->stack[((hsi*421200+20437755)*1+lsi)*1]), &(inteval->stack[((hsi*356400+18841515)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*27720+210936)*1+lsi)*1]), &(inteval->stack[((hsi*25200+238656)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*68400+9890013)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*136800+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*123120+9583173)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+9412893)*1+lsi)*1]), &(inteval->stack[((hsi*205200+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19656555)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*275400+9412893)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19840155)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*342720+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*302400+9958413)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+9610893)*1+lsi)*1]), &(inteval->stack[((hsi*403200+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*352800+20084955)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+19633515)*1+lsi)*1]), &(inteval->stack[((hsi*453600+9610893)*1+lsi)*1]), &(inteval->stack[((hsi*393120+10511733)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*491400+19633515)*1+lsi)*1]), &(inteval->stack[((hsi*421200+20437755)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+9722493)*1+lsi)*1]), &(inteval->stack[((hsi*514800+9207693)*1+lsi)*1]), &(inteval->stack[((hsi*435600+19197915)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*522720+9722493)*1+lsi)*1]), &(inteval->stack[((hsi*457380+397056)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+20213655)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+18841515)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+12738759)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+22592031)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+20213655)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+13927947)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+25989711)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+22592031)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+15966555)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*5005+996776)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1001781)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+12751629)*1+lsi)*1]), &(inteval->stack[((hsi*5775+991001)*1+lsi)*1]), &(inteval->stack[((hsi*5005+996776)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+12766644)*1+lsi)*1]), &(inteval->stack[((hsi*15015+12751629)*1+lsi)*1]), &(inteval->stack[((hsi*12870+12738759)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+12792384)*1+lsi)*1]), &(inteval->stack[((hsi*6600+984401)*1+lsi)*1]), &(inteval->stack[((hsi*5775+991001)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+12809709)*1+lsi)*1]), &(inteval->stack[((hsi*17325+12792384)*1+lsi)*1]), &(inteval->stack[((hsi*15015+12751629)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+12839739)*1+lsi)*1]), &(inteval->stack[((hsi*30030+12809709)*1+lsi)*1]), &(inteval->stack[((hsi*25740+12766644)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+12882639)*1+lsi)*1]), &(inteval->stack[((hsi*7480+976921)*1+lsi)*1]), &(inteval->stack[((hsi*6600+984401)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+12902439)*1+lsi)*1]), &(inteval->stack[((hsi*19800+12882639)*1+lsi)*1]), &(inteval->stack[((hsi*17325+12792384)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+12937089)*1+lsi)*1]), &(inteval->stack[((hsi*34650+12902439)*1+lsi)*1]), &(inteval->stack[((hsi*30030+12809709)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+12987139)*1+lsi)*1]), &(inteval->stack[((hsi*50050+12937089)*1+lsi)*1]), &(inteval->stack[((hsi*42900+12839739)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+13051489)*1+lsi)*1]), &(inteval->stack[((hsi*8415+968506)*1+lsi)*1]), &(inteval->stack[((hsi*7480+976921)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+13073929)*1+lsi)*1]), &(inteval->stack[((hsi*22440+13051489)*1+lsi)*1]), &(inteval->stack[((hsi*19800+12882639)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+13113529)*1+lsi)*1]), &(inteval->stack[((hsi*39600+13073929)*1+lsi)*1]), &(inteval->stack[((hsi*34650+12902439)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+13171279)*1+lsi)*1]), &(inteval->stack[((hsi*57750+13113529)*1+lsi)*1]), &(inteval->stack[((hsi*50050+12937089)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+13246354)*1+lsi)*1]), &(inteval->stack[((hsi*75075+13171279)*1+lsi)*1]), &(inteval->stack[((hsi*64350+12987139)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+13336444)*1+lsi)*1]), &(inteval->stack[((hsi*9405+959101)*1+lsi)*1]), &(inteval->stack[((hsi*8415+968506)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+13361689)*1+lsi)*1]), &(inteval->stack[((hsi*25245+13336444)*1+lsi)*1]), &(inteval->stack[((hsi*22440+13051489)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+13406569)*1+lsi)*1]), &(inteval->stack[((hsi*44880+13361689)*1+lsi)*1]), &(inteval->stack[((hsi*39600+13073929)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+13472569)*1+lsi)*1]), &(inteval->stack[((hsi*66000+13406569)*1+lsi)*1]), &(inteval->stack[((hsi*57750+13113529)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+13559194)*1+lsi)*1]), &(inteval->stack[((hsi*86625+13472569)*1+lsi)*1]), &(inteval->stack[((hsi*75075+13171279)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+13664299)*1+lsi)*1]), &(inteval->stack[((hsi*105105+13559194)*1+lsi)*1]), &(inteval->stack[((hsi*90090+13246354)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+13784419)*1+lsi)*1]), &(inteval->stack[((hsi*10450+948651)*1+lsi)*1]), &(inteval->stack[((hsi*9405+959101)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+13812634)*1+lsi)*1]), &(inteval->stack[((hsi*28215+13784419)*1+lsi)*1]), &(inteval->stack[((hsi*25245+13336444)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+13863124)*1+lsi)*1]), &(inteval->stack[((hsi*50490+13812634)*1+lsi)*1]), &(inteval->stack[((hsi*44880+13361689)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+13937924)*1+lsi)*1]), &(inteval->stack[((hsi*74800+13863124)*1+lsi)*1]), &(inteval->stack[((hsi*66000+13406569)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+14036924)*1+lsi)*1]), &(inteval->stack[((hsi*99000+13937924)*1+lsi)*1]), &(inteval->stack[((hsi*86625+13472569)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+14158199)*1+lsi)*1]), &(inteval->stack[((hsi*121275+14036924)*1+lsi)*1]), &(inteval->stack[((hsi*105105+13559194)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+14298339)*1+lsi)*1]), &(inteval->stack[((hsi*140140+14158199)*1+lsi)*1]), &(inteval->stack[((hsi*120120+13664299)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+14452779)*1+lsi)*1]), &(inteval->stack[((hsi*11550+937101)*1+lsi)*1]), &(inteval->stack[((hsi*10450+948651)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+14484129)*1+lsi)*1]), &(inteval->stack[((hsi*31350+14452779)*1+lsi)*1]), &(inteval->stack[((hsi*28215+13784419)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+14540559)*1+lsi)*1]), &(inteval->stack[((hsi*56430+14484129)*1+lsi)*1]), &(inteval->stack[((hsi*50490+13812634)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+14624709)*1+lsi)*1]), &(inteval->stack[((hsi*84150+14540559)*1+lsi)*1]), &(inteval->stack[((hsi*74800+13863124)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+14736909)*1+lsi)*1]), &(inteval->stack[((hsi*112200+14624709)*1+lsi)*1]), &(inteval->stack[((hsi*99000+13937924)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+14875509)*1+lsi)*1]), &(inteval->stack[((hsi*138600+14736909)*1+lsi)*1]), &(inteval->stack[((hsi*121275+14036924)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+15037209)*1+lsi)*1]), &(inteval->stack[((hsi*161700+14875509)*1+lsi)*1]), &(inteval->stack[((hsi*140140+14158199)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*180180+15037209)*1+lsi)*1]), &(inteval->stack[((hsi*154440+14298339)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+15217389)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1001781)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1006071)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+15228279)*1+lsi)*1]), &(inteval->stack[((hsi*12870+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*10890+15217389)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+15250059)*1+lsi)*1]), &(inteval->stack[((hsi*25740+12766644)*1+lsi)*1]), &(inteval->stack[((hsi*21780+15228279)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+210936)*1+lsi)*1]), &(inteval->stack[((hsi*42900+12839739)*1+lsi)*1]), &(inteval->stack[((hsi*36300+15250059)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+15217389)*1+lsi)*1]), &(inteval->stack[((hsi*64350+12987139)*1+lsi)*1]), &(inteval->stack[((hsi*54450+210936)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+210936)*1+lsi)*1]), &(inteval->stack[((hsi*90090+13246354)*1+lsi)*1]), &(inteval->stack[((hsi*76230+15217389)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*120120+13664299)*1+lsi)*1]), &(inteval->stack[((hsi*101640+210936)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+12869439)*1+lsi)*1]), &(inteval->stack[((hsi*154440+14298339)*1+lsi)*1]), &(inteval->stack[((hsi*130680+12738759)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+13032789)*1+lsi)*1]), &(inteval->stack[((hsi*193050+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*163350+12869439)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+13232439)*1+lsi)*1]), &(inteval->stack[((hsi*12705+924396)*1+lsi)*1]), &(inteval->stack[((hsi*11550+937101)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+13267089)*1+lsi)*1]), &(inteval->stack[((hsi*34650+13232439)*1+lsi)*1]), &(inteval->stack[((hsi*31350+14452779)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+13329789)*1+lsi)*1]), &(inteval->stack[((hsi*62700+13267089)*1+lsi)*1]), &(inteval->stack[((hsi*56430+14484129)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+13423839)*1+lsi)*1]), &(inteval->stack[((hsi*94050+13329789)*1+lsi)*1]), &(inteval->stack[((hsi*84150+14540559)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+13550064)*1+lsi)*1]), &(inteval->stack[((hsi*126225+13423839)*1+lsi)*1]), &(inteval->stack[((hsi*112200+14624709)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+13707144)*1+lsi)*1]), &(inteval->stack[((hsi*157080+13550064)*1+lsi)*1]), &(inteval->stack[((hsi*138600+14736909)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+13891944)*1+lsi)*1]), &(inteval->stack[((hsi*184800+13707144)*1+lsi)*1]), &(inteval->stack[((hsi*161700+14875509)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+14099844)*1+lsi)*1]), &(inteval->stack[((hsi*207900+13891944)*1+lsi)*1]), &(inteval->stack[((hsi*180180+15037209)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+14325069)*1+lsi)*1]), &(inteval->stack[((hsi*225225+14099844)*1+lsi)*1]), &(inteval->stack[((hsi*193050+10245213)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+14561019)*1+lsi)*1]), &(inteval->stack[((hsi*235950+14325069)*1+lsi)*1]), &(inteval->stack[((hsi*199650+13032789)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+12738759)*1+lsi)*1]), &(inteval->stack[((hsi*287496+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*239580+14561019)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+13457499)*1+lsi)*1]), &(inteval->stack[((hsi*862488+8345205)*1+lsi)*1]), &(inteval->stack[((hsi*718740+12738759)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+30302151)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+11013783)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+13457499)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+15966555)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+30302151)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+30302151)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+25989711)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+10245213)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*12376+178976)*1+lsi)*1]), &(inteval->stack[((hsi*10608+191352)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+10277037)*1+lsi)*1]), &(inteval->stack[((hsi*14280+164696)*1+lsi)*1]), &(inteval->stack[((hsi*12376+178976)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+10314165)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10277037)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10245213)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+10377813)*1+lsi)*1]), &(inteval->stack[((hsi*16320+148376)*1+lsi)*1]), &(inteval->stack[((hsi*14280+164696)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+10420653)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10377813)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10277037)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+10494909)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10420653)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10314165)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+10600989)*1+lsi)*1]), &(inteval->stack[((hsi*18496+129880)*1+lsi)*1]), &(inteval->stack[((hsi*16320+148376)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+10649949)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10600989)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10377813)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+10735629)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10649949)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10420653)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+10859389)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10735629)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10494909)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+11018509)*1+lsi)*1]), &(inteval->stack[((hsi*20808+109072)*1+lsi)*1]), &(inteval->stack[((hsi*18496+129880)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+11073997)*1+lsi)*1]), &(inteval->stack[((hsi*55488+11018509)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10600989)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+11171917)*1+lsi)*1]), &(inteval->stack[((hsi*97920+11073997)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10649949)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+11314717)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11171917)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10735629)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+11500357)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11314717)*1+lsi)*1]), &(inteval->stack[((hsi*159120+10859389)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+11723125)*1+lsi)*1]), &(inteval->stack[((hsi*23256+85816)*1+lsi)*1]), &(inteval->stack[((hsi*20808+109072)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+11785549)*1+lsi)*1]), &(inteval->stack[((hsi*62424+11723125)*1+lsi)*1]), &(inteval->stack[((hsi*55488+11018509)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+11896525)*1+lsi)*1]), &(inteval->stack[((hsi*110976+11785549)*1+lsi)*1]), &(inteval->stack[((hsi*97920+11073997)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+12059725)*1+lsi)*1]), &(inteval->stack[((hsi*163200+11896525)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11171917)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+12273925)*1+lsi)*1]), &(inteval->stack[((hsi*214200+12059725)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11314717)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+12533821)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12273925)*1+lsi)*1]), &(inteval->stack[((hsi*222768+11500357)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+12830845)*1+lsi)*1]), &(inteval->stack[((hsi*25840+59976)*1+lsi)*1]), &(inteval->stack[((hsi*23256+85816)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+12900613)*1+lsi)*1]), &(inteval->stack[((hsi*69768+12830845)*1+lsi)*1]), &(inteval->stack[((hsi*62424+11723125)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+13025461)*1+lsi)*1]), &(inteval->stack[((hsi*124848+12900613)*1+lsi)*1]), &(inteval->stack[((hsi*110976+11785549)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+13210421)*1+lsi)*1]), &(inteval->stack[((hsi*184960+13025461)*1+lsi)*1]), &(inteval->stack[((hsi*163200+11896525)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+13455221)*1+lsi)*1]), &(inteval->stack[((hsi*244800+13210421)*1+lsi)*1]), &(inteval->stack[((hsi*214200+12059725)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+13755101)*1+lsi)*1]), &(inteval->stack[((hsi*299880+13455221)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12273925)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+14101629)*1+lsi)*1]), &(inteval->stack[((hsi*346528+13755101)*1+lsi)*1]), &(inteval->stack[((hsi*297024+12533821)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+14483517)*1+lsi)*1]), &(inteval->stack[((hsi*28560+31416)*1+lsi)*1]), &(inteval->stack[((hsi*25840+59976)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+14561037)*1+lsi)*1]), &(inteval->stack[((hsi*77520+14483517)*1+lsi)*1]), &(inteval->stack[((hsi*69768+12830845)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+14700573)*1+lsi)*1]), &(inteval->stack[((hsi*139536+14561037)*1+lsi)*1]), &(inteval->stack[((hsi*124848+12900613)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+14908653)*1+lsi)*1]), &(inteval->stack[((hsi*208080+14700573)*1+lsi)*1]), &(inteval->stack[((hsi*184960+13025461)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+15186093)*1+lsi)*1]), &(inteval->stack[((hsi*277440+14908653)*1+lsi)*1]), &(inteval->stack[((hsi*244800+13210421)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+15528813)*1+lsi)*1]), &(inteval->stack[((hsi*342720+15186093)*1+lsi)*1]), &(inteval->stack[((hsi*299880+13455221)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+15928653)*1+lsi)*1]), &(inteval->stack[((hsi*399840+15528813)*1+lsi)*1]), &(inteval->stack[((hsi*346528+13755101)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+16374189)*1+lsi)*1]), &(inteval->stack[((hsi*445536+15928653)*1+lsi)*1]), &(inteval->stack[((hsi*381888+14101629)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*10608+191352)*1+lsi)*1]), &(inteval->stack[((hsi*8976+201960)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+16851549)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*26928+7717941)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10314165)*1+lsi)*1]), &(inteval->stack[((hsi*53856+16851549)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+16851549)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10494909)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7717941)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*159120+10859389)*1+lsi)*1]), &(inteval->stack[((hsi*134640+16851549)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+16851549)*1+lsi)*1]), &(inteval->stack[((hsi*222768+11500357)*1+lsi)*1]), &(inteval->stack[((hsi*188496+7717941)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*297024+12533821)*1+lsi)*1]), &(inteval->stack[((hsi*251328+16851549)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+10568349)*1+lsi)*1]), &(inteval->stack[((hsi*381888+14101629)*1+lsi)*1]), &(inteval->stack[((hsi*323136+10245213)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+10972269)*1+lsi)*1]), &(inteval->stack[((hsi*477360+16374189)*1+lsi)*1]), &(inteval->stack[((hsi*403920+10568349)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+11465949)*1+lsi)*1]), &(inteval->stack[((hsi*31416+0)*1+lsi)*1]), &(inteval->stack[((hsi*28560+31416)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+11551629)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11465949)*1+lsi)*1]), &(inteval->stack[((hsi*77520+14483517)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+11706669)*1+lsi)*1]), &(inteval->stack[((hsi*155040+11551629)*1+lsi)*1]), &(inteval->stack[((hsi*139536+14561037)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+11939229)*1+lsi)*1]), &(inteval->stack[((hsi*232560+11706669)*1+lsi)*1]), &(inteval->stack[((hsi*208080+14700573)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+12251349)*1+lsi)*1]), &(inteval->stack[((hsi*312120+11939229)*1+lsi)*1]), &(inteval->stack[((hsi*277440+14908653)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+12639765)*1+lsi)*1]), &(inteval->stack[((hsi*388416+12251349)*1+lsi)*1]), &(inteval->stack[((hsi*342720+15186093)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+13096725)*1+lsi)*1]), &(inteval->stack[((hsi*456960+12639765)*1+lsi)*1]), &(inteval->stack[((hsi*399840+15528813)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+13610805)*1+lsi)*1]), &(inteval->stack[((hsi*514080+13096725)*1+lsi)*1]), &(inteval->stack[((hsi*445536+15928653)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+14167725)*1+lsi)*1]), &(inteval->stack[((hsi*556920+13610805)*1+lsi)*1]), &(inteval->stack[((hsi*477360+16374189)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+14751165)*1+lsi)*1]), &(inteval->stack[((hsi*583440+14167725)*1+lsi)*1]), &(inteval->stack[((hsi*493680+10972269)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*592416+14751165)*1+lsi)*1]), &(inteval->stack[((hsi*522720+9722493)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+11813373)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+10245213)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+18841515)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+14557653)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+11813373)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+20213655)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+14557653)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+22592031)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+12814461)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+7717941)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+25989711)*1+lsi)*1]),4356);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*6708240+1009701)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+12814461)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+30302151)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6708240+1009701)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
