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
#include <CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2940)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+8340)*1+lsi)*1]), &(inteval->stack[((hsi*90+1842)*1+lsi)*1]), &(inteval->stack[((hsi*60+1992)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+8520)*1+lsi)*1]), &(inteval->stack[((hsi*126+1626)*1+lsi)*1]), &(inteval->stack[((hsi*90+1842)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+8790)*1+lsi)*1]), &(inteval->stack[((hsi*270+8520)*1+lsi)*1]), &(inteval->stack[((hsi*180+8340)*1+lsi)*1]),6);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*126+2664)*1+lsi)*1]), &(inteval->stack[((hsi*90+2790)*1+lsi)*1]), &(inteval->stack[((hsi*90+1842)*1+lsi)*1]),6);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*90+2790)*1+lsi)*1]), &(inteval->stack[((hsi*60+2880)*1+lsi)*1]), &(inteval->stack[((hsi*60+1992)*1+lsi)*1]),6);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*360+9600)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*180+8340)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*168+2496)*1+lsi)*1]), &(inteval->stack[((hsi*126+2664)*1+lsi)*1]), &(inteval->stack[((hsi*126+1626)*1+lsi)*1]),6);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*540+10338)*1+lsi)*1]), &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*270+8520)*1+lsi)*1]),6);
HRRPart1bra0ket0ff001(inteval, &(inteval->stack[((hsi*600+7740)*1+lsi)*1]), &(inteval->stack[((hsi*540+10338)*1+lsi)*1]), &(inteval->stack[((hsi*360+9600)*1+lsi)*1]), &(inteval->stack[((hsi*360+8790)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*126+1056)*1+lsi)*1]), &(inteval->stack[((hsi*90+1182)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*90+1182)*1+lsi)*1]), &(inteval->stack[((hsi*60+1272)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+2496)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*180+9420)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*168+888)*1+lsi)*1]), &(inteval->stack[((hsi*126+1056)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+10878)*1+lsi)*1]), &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]),6);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*600+4140)*1+lsi)*1]), &(inteval->stack[((hsi*540+10878)*1+lsi)*1]), &(inteval->stack[((hsi*360+2496)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*600+5940)*1+lsi)*1]), &(inteval->stack[((hsi*600+4140)*1+lsi)*1]), &(inteval->stack[((hsi*600+7740)*1+lsi)*1]));
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*126+2220)*1+lsi)*1]), &(inteval->stack[((hsi*90+2346)*1+lsi)*1]), &(inteval->stack[((hsi*90+1842)*1+lsi)*1]),6);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*90+2346)*1+lsi)*1]), &(inteval->stack[((hsi*60+2436)*1+lsi)*1]), &(inteval->stack[((hsi*60+1992)*1+lsi)*1]),6);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*360+888)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*180+8340)*1+lsi)*1]),6);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*168+2052)*1+lsi)*1]), &(inteval->stack[((hsi*126+2220)*1+lsi)*1]), &(inteval->stack[((hsi*126+1626)*1+lsi)*1]),6);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*540+11418)*1+lsi)*1]), &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*270+8520)*1+lsi)*1]),6);
HRRPart1bra0ket0ff010(inteval, &(inteval->stack[((hsi*600+7140)*1+lsi)*1]), &(inteval->stack[((hsi*540+11418)*1+lsi)*1]), &(inteval->stack[((hsi*360+888)*1+lsi)*1]), &(inteval->stack[((hsi*360+8790)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*126+612)*1+lsi)*1]), &(inteval->stack[((hsi*90+738)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*90+738)*1+lsi)*1]), &(inteval->stack[((hsi*60+828)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+2052)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*180+9420)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*168+444)*1+lsi)*1]), &(inteval->stack[((hsi*126+612)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+11958)*1+lsi)*1]), &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]),6);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*600+3540)*1+lsi)*1]), &(inteval->stack[((hsi*540+11958)*1+lsi)*1]), &(inteval->stack[((hsi*360+2052)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*600+5340)*1+lsi)*1]), &(inteval->stack[((hsi*600+3540)*1+lsi)*1]), &(inteval->stack[((hsi*600+7140)*1+lsi)*1]));
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*126+1500)*1+lsi)*1]), &(inteval->stack[((hsi*90+1752)*1+lsi)*1]), &(inteval->stack[((hsi*90+1842)*1+lsi)*1]),6);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*90+1752)*1+lsi)*1]), &(inteval->stack[((hsi*60+1932)*1+lsi)*1]), &(inteval->stack[((hsi*60+1992)*1+lsi)*1]),6);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*360+444)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*180+8340)*1+lsi)*1]),6);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*168+1332)*1+lsi)*1]), &(inteval->stack[((hsi*126+1500)*1+lsi)*1]), &(inteval->stack[((hsi*126+1626)*1+lsi)*1]),6);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*540+1248)*1+lsi)*1]), &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*270+8520)*1+lsi)*1]),6);
HRRPart1bra0ket0ff100(inteval, &(inteval->stack[((hsi*600+6540)*1+lsi)*1]), &(inteval->stack[((hsi*540+1248)*1+lsi)*1]), &(inteval->stack[((hsi*360+444)*1+lsi)*1]), &(inteval->stack[((hsi*360+8790)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*126+168)*1+lsi)*1]), &(inteval->stack[((hsi*90+294)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+9420)*1+lsi)*1]), &(inteval->stack[((hsi*90+294)*1+lsi)*1]), &(inteval->stack[((hsi*60+384)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+8340)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]), &(inteval->stack[((hsi*180+9420)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+168)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+12498)*1+lsi)*1]), &(inteval->stack[((hsi*378+9960)*1+lsi)*1]), &(inteval->stack[((hsi*270+9150)*1+lsi)*1]),6);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*600+2940)*1+lsi)*1]), &(inteval->stack[((hsi*540+12498)*1+lsi)*1]), &(inteval->stack[((hsi*360+8340)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*600+4740)*1+lsi)*1]), &(inteval->stack[((hsi*600+2940)*1+lsi)*1]), &(inteval->stack[((hsi*600+6540)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*600+2940)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*600+3540)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*600+4140)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*600+4740)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*600+5340)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*600+5940)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*600+6540)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*600+7140)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*600+7740)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
