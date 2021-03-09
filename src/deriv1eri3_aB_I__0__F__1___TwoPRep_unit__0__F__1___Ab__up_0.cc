/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <CR_DerivGaussP1InBra_aB_I__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0fd001.h>
#include <HRRPart1bra0ket0fd010.h>
#include <HRRPart1bra0ket0fd100.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0ff001.h>
#include <HRRPart1bra0ket0ff010.h>
#include <HRRPart1bra0ket0ff100.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,13720)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+38920)*1+lsi)*1]), &(inteval->stack[((hsi*420+8596)*1+lsi)*1]), &(inteval->stack[((hsi*280+9296)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+39760)*1+lsi)*1]), &(inteval->stack[((hsi*588+7588)*1+lsi)*1]), &(inteval->stack[((hsi*420+8596)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+41020)*1+lsi)*1]), &(inteval->stack[((hsi*1260+39760)*1+lsi)*1]), &(inteval->stack[((hsi*840+38920)*1+lsi)*1]),28);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*588+12432)*1+lsi)*1]), &(inteval->stack[((hsi*420+13020)*1+lsi)*1]), &(inteval->stack[((hsi*420+8596)*1+lsi)*1]),28);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*420+13020)*1+lsi)*1]), &(inteval->stack[((hsi*280+13440)*1+lsi)*1]), &(inteval->stack[((hsi*280+9296)*1+lsi)*1]),28);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*1680+44800)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*840+38920)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*784+11648)*1+lsi)*1]), &(inteval->stack[((hsi*588+12432)*1+lsi)*1]), &(inteval->stack[((hsi*588+7588)*1+lsi)*1]),28);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*2520+48244)*1+lsi)*1]), &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+39760)*1+lsi)*1]),28);
HRRPart1bra0ket0ff001(inteval, &(inteval->stack[((hsi*2800+36120)*1+lsi)*1]), &(inteval->stack[((hsi*2520+48244)*1+lsi)*1]), &(inteval->stack[((hsi*1680+44800)*1+lsi)*1]), &(inteval->stack[((hsi*1680+41020)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*588+4928)*1+lsi)*1]), &(inteval->stack[((hsi*420+5516)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*420+5516)*1+lsi)*1]), &(inteval->stack[((hsi*280+5936)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+11648)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*840+43960)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*784+4144)*1+lsi)*1]), &(inteval->stack[((hsi*588+4928)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+50764)*1+lsi)*1]), &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]),28);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2800+19320)*1+lsi)*1]), &(inteval->stack[((hsi*2520+50764)*1+lsi)*1]), &(inteval->stack[((hsi*1680+11648)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2800+27720)*1+lsi)*1]), &(inteval->stack[((hsi*2800+19320)*1+lsi)*1]), &(inteval->stack[((hsi*2800+36120)*1+lsi)*1]));
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*588+10360)*1+lsi)*1]), &(inteval->stack[((hsi*420+10948)*1+lsi)*1]), &(inteval->stack[((hsi*420+8596)*1+lsi)*1]),28);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*420+10948)*1+lsi)*1]), &(inteval->stack[((hsi*280+11368)*1+lsi)*1]), &(inteval->stack[((hsi*280+9296)*1+lsi)*1]),28);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*1680+4144)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*840+38920)*1+lsi)*1]),28);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*784+9576)*1+lsi)*1]), &(inteval->stack[((hsi*588+10360)*1+lsi)*1]), &(inteval->stack[((hsi*588+7588)*1+lsi)*1]),28);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*2520+53284)*1+lsi)*1]), &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+39760)*1+lsi)*1]),28);
HRRPart1bra0ket0ff010(inteval, &(inteval->stack[((hsi*2800+33320)*1+lsi)*1]), &(inteval->stack[((hsi*2520+53284)*1+lsi)*1]), &(inteval->stack[((hsi*1680+4144)*1+lsi)*1]), &(inteval->stack[((hsi*1680+41020)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*588+2856)*1+lsi)*1]), &(inteval->stack[((hsi*420+3444)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*420+3444)*1+lsi)*1]), &(inteval->stack[((hsi*280+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+9576)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*840+43960)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*784+2072)*1+lsi)*1]), &(inteval->stack[((hsi*588+2856)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+55804)*1+lsi)*1]), &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]),28);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2800+16520)*1+lsi)*1]), &(inteval->stack[((hsi*2520+55804)*1+lsi)*1]), &(inteval->stack[((hsi*1680+9576)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2800+24920)*1+lsi)*1]), &(inteval->stack[((hsi*2800+16520)*1+lsi)*1]), &(inteval->stack[((hsi*2800+33320)*1+lsi)*1]));
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*588+7000)*1+lsi)*1]), &(inteval->stack[((hsi*420+8176)*1+lsi)*1]), &(inteval->stack[((hsi*420+8596)*1+lsi)*1]),28);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*420+8176)*1+lsi)*1]), &(inteval->stack[((hsi*280+9016)*1+lsi)*1]), &(inteval->stack[((hsi*280+9296)*1+lsi)*1]),28);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*1680+2072)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*840+38920)*1+lsi)*1]),28);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*784+6216)*1+lsi)*1]), &(inteval->stack[((hsi*588+7000)*1+lsi)*1]), &(inteval->stack[((hsi*588+7588)*1+lsi)*1]),28);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*2520+5824)*1+lsi)*1]), &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+39760)*1+lsi)*1]),28);
HRRPart1bra0ket0ff100(inteval, &(inteval->stack[((hsi*2800+30520)*1+lsi)*1]), &(inteval->stack[((hsi*2520+5824)*1+lsi)*1]), &(inteval->stack[((hsi*1680+2072)*1+lsi)*1]), &(inteval->stack[((hsi*1680+41020)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*588+784)*1+lsi)*1]), &(inteval->stack[((hsi*420+1372)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+43960)*1+lsi)*1]), &(inteval->stack[((hsi*420+1372)*1+lsi)*1]), &(inteval->stack[((hsi*280+1792)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+38920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]), &(inteval->stack[((hsi*840+43960)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+784)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+58324)*1+lsi)*1]), &(inteval->stack[((hsi*1764+46480)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42700)*1+lsi)*1]),28);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2800+13720)*1+lsi)*1]), &(inteval->stack[((hsi*2520+58324)*1+lsi)*1]), &(inteval->stack[((hsi*1680+38920)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2800+22120)*1+lsi)*1]), &(inteval->stack[((hsi*2800+13720)*1+lsi)*1]), &(inteval->stack[((hsi*2800+30520)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2800+13720)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2800+16520)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2800+19320)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2800+22120)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2800+24920)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2800+27720)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2800+30520)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2800+33320)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2800+36120)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
