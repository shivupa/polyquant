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
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_M__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__L__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,127600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+647350)*1+lsi)*1]), &(inteval->stack[((hsi*4356+92444)*1+lsi)*1]), &(inteval->stack[((hsi*3630+96800)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+658240)*1+lsi)*1]), &(inteval->stack[((hsi*5148+87296)*1+lsi)*1]), &(inteval->stack[((hsi*4356+92444)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+671308)*1+lsi)*1]), &(inteval->stack[((hsi*13068+658240)*1+lsi)*1]), &(inteval->stack[((hsi*10890+647350)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+693088)*1+lsi)*1]), &(inteval->stack[((hsi*6006+81290)*1+lsi)*1]), &(inteval->stack[((hsi*5148+87296)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+708532)*1+lsi)*1]), &(inteval->stack[((hsi*15444+693088)*1+lsi)*1]), &(inteval->stack[((hsi*13068+658240)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+734668)*1+lsi)*1]), &(inteval->stack[((hsi*26136+708532)*1+lsi)*1]), &(inteval->stack[((hsi*21780+671308)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+658240)*1+lsi)*1]), &(inteval->stack[((hsi*3630+96800)*1+lsi)*1]), &(inteval->stack[((hsi*2970+100430)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+770968)*1+lsi)*1]), &(inteval->stack[((hsi*10890+647350)*1+lsi)*1]), &(inteval->stack[((hsi*8910+658240)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+788788)*1+lsi)*1]), &(inteval->stack[((hsi*21780+671308)*1+lsi)*1]), &(inteval->stack[((hsi*17820+770968)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+647350)*1+lsi)*1]), &(inteval->stack[((hsi*36300+734668)*1+lsi)*1]), &(inteval->stack[((hsi*29700+788788)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+770968)*1+lsi)*1]), &(inteval->stack[((hsi*6930+74360)*1+lsi)*1]), &(inteval->stack[((hsi*6006+81290)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+788986)*1+lsi)*1]), &(inteval->stack[((hsi*18018+770968)*1+lsi)*1]), &(inteval->stack[((hsi*15444+693088)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+819874)*1+lsi)*1]), &(inteval->stack[((hsi*30888+788986)*1+lsi)*1]), &(inteval->stack[((hsi*26136+708532)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+863434)*1+lsi)*1]), &(inteval->stack[((hsi*43560+819874)*1+lsi)*1]), &(inteval->stack[((hsi*36300+734668)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+691900)*1+lsi)*1]), &(inteval->stack[((hsi*54450+863434)*1+lsi)*1]), &(inteval->stack[((hsi*44550+647350)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+647350)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61412)*1+lsi)*1]), &(inteval->stack[((hsi*4290+66560)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+660220)*1+lsi)*1]), &(inteval->stack[((hsi*6084+55328)*1+lsi)*1]), &(inteval->stack[((hsi*5148+61412)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+74360)*1+lsi)*1]), &(inteval->stack[((hsi*15444+660220)*1+lsi)*1]), &(inteval->stack[((hsi*12870+647350)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+754270)*1+lsi)*1]), &(inteval->stack[((hsi*7098+48230)*1+lsi)*1]), &(inteval->stack[((hsi*6084+55328)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+772522)*1+lsi)*1]), &(inteval->stack[((hsi*18252+754270)*1+lsi)*1]), &(inteval->stack[((hsi*15444+660220)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+803410)*1+lsi)*1]), &(inteval->stack[((hsi*30888+772522)*1+lsi)*1]), &(inteval->stack[((hsi*25740+74360)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+660220)*1+lsi)*1]), &(inteval->stack[((hsi*4290+66560)*1+lsi)*1]), &(inteval->stack[((hsi*3510+70850)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+670750)*1+lsi)*1]), &(inteval->stack[((hsi*12870+647350)*1+lsi)*1]), &(inteval->stack[((hsi*10530+660220)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+846310)*1+lsi)*1]), &(inteval->stack[((hsi*25740+74360)*1+lsi)*1]), &(inteval->stack[((hsi*21060+670750)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+881410)*1+lsi)*1]), &(inteval->stack[((hsi*42900+803410)*1+lsi)*1]), &(inteval->stack[((hsi*35100+846310)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+55328)*1+lsi)*1]), &(inteval->stack[((hsi*8190+40040)*1+lsi)*1]), &(inteval->stack[((hsi*7098+48230)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+647350)*1+lsi)*1]), &(inteval->stack[((hsi*21294+55328)*1+lsi)*1]), &(inteval->stack[((hsi*18252+754270)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+40040)*1+lsi)*1]), &(inteval->stack[((hsi*36504+647350)*1+lsi)*1]), &(inteval->stack[((hsi*30888+772522)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+934060)*1+lsi)*1]), &(inteval->stack[((hsi*51480+40040)*1+lsi)*1]), &(inteval->stack[((hsi*42900+803410)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+754270)*1+lsi)*1]), &(inteval->stack[((hsi*64350+934060)*1+lsi)*1]), &(inteval->stack[((hsi*52650+881410)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*187110+827980)*1+lsi)*1]), &(inteval->stack[((hsi*73710+754270)*1+lsi)*1]), &(inteval->stack[((hsi*62370+691900)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+40040)*1+lsi)*1]), &(inteval->stack[((hsi*3630+118470)*1+lsi)*1]), &(inteval->stack[((hsi*3025+122100)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+49115)*1+lsi)*1]), &(inteval->stack[((hsi*4290+114180)*1+lsi)*1]), &(inteval->stack[((hsi*3630+118470)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+647350)*1+lsi)*1]), &(inteval->stack[((hsi*10890+49115)*1+lsi)*1]), &(inteval->stack[((hsi*9075+40040)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+60005)*1+lsi)*1]), &(inteval->stack[((hsi*5005+109175)*1+lsi)*1]), &(inteval->stack[((hsi*4290+114180)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+72875)*1+lsi)*1]), &(inteval->stack[((hsi*12870+60005)*1+lsi)*1]), &(inteval->stack[((hsi*10890+49115)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*21780+72875)*1+lsi)*1]), &(inteval->stack[((hsi*18150+647350)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+665500)*1+lsi)*1]), &(inteval->stack[((hsi*3025+122100)*1+lsi)*1]), &(inteval->stack[((hsi*2475+125125)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+672925)*1+lsi)*1]), &(inteval->stack[((hsi*9075+40040)*1+lsi)*1]), &(inteval->stack[((hsi*7425+665500)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+1045340)*1+lsi)*1]), &(inteval->stack[((hsi*18150+647350)*1+lsi)*1]), &(inteval->stack[((hsi*14850+672925)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+647350)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1045340)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+40040)*1+lsi)*1]), &(inteval->stack[((hsi*5775+103400)*1+lsi)*1]), &(inteval->stack[((hsi*5005+109175)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+94655)*1+lsi)*1]), &(inteval->stack[((hsi*15015+40040)*1+lsi)*1]), &(inteval->stack[((hsi*12870+60005)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1045340)*1+lsi)*1]), &(inteval->stack[((hsi*25740+94655)*1+lsi)*1]), &(inteval->stack[((hsi*21780+72875)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+40040)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1045340)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1015090)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*45375+40040)*1+lsi)*1]), &(inteval->stack[((hsi*37125+647350)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*155925+1067065)*1+lsi)*1]), &(inteval->stack[((hsi*62370+691900)*1+lsi)*1]), &(inteval->stack[((hsi*51975+1015090)*1+lsi)*1]),945);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*311850+1222990)*1+lsi)*1]), &(inteval->stack[((hsi*187110+827980)*1+lsi)*1]), &(inteval->stack[((hsi*155925+1067065)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*6006+24934)*1+lsi)*1]), &(inteval->stack[((hsi*5005+30940)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1030105)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17836)*1+lsi)*1]), &(inteval->stack[((hsi*6006+24934)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1048123)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1030105)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1015090)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1078153)*1+lsi)*1]), &(inteval->stack[((hsi*8281+9555)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17836)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1099447)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1078153)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1030105)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+647350)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1099447)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1048123)*1+lsi)*1]),91);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+40040)*1+lsi)*1]), &(inteval->stack[((hsi*5005+30940)*1+lsi)*1]), &(inteval->stack[((hsi*4095+35945)*1+lsi)*1]),91);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+1135483)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*12285+40040)*1+lsi)*1]),91);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+17836)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1048123)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1135483)*1+lsi)*1]),91);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+1135483)*1+lsi)*1]), &(inteval->stack[((hsi*50050+647350)*1+lsi)*1]), &(inteval->stack[((hsi*40950+17836)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+17836)*1+lsi)*1]), &(inteval->stack[((hsi*9555+0)*1+lsi)*1]), &(inteval->stack[((hsi*8281+9555)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+42679)*1+lsi)*1]), &(inteval->stack[((hsi*24843+17836)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1078153)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*42588+42679)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1099447)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+0)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*50050+647350)*1+lsi)*1]),91);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*75075+0)*1+lsi)*1]), &(inteval->stack[((hsi*61425+1135483)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*221130+1534840)*1+lsi)*1]), &(inteval->stack[((hsi*85995+1015090)*1+lsi)*1]), &(inteval->stack[((hsi*73710+754270)*1+lsi)*1]),945);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*374220+1755970)*1+lsi)*1]), &(inteval->stack[((hsi*221130+1534840)*1+lsi)*1]), &(inteval->stack[((hsi*187110+827980)*1+lsi)*1]),945);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*519750+127600)*1+lsi)*1]), &(inteval->stack[((hsi*374220+1755970)*1+lsi)*1]), &(inteval->stack[((hsi*311850+1222990)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*519750+127600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
