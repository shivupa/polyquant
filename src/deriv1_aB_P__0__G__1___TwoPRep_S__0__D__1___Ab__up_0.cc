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
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001d.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010d.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100d.h>
#include <HRRPart1bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_P__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1836)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+5076)*1+lsi)*1]), &(inteval->stack[((hsi*63+1152)*1+lsi)*1]), &(inteval->stack[((hsi*45+1362)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+5211)*1+lsi)*1]), &(inteval->stack[((hsi*63+1728)*1+lsi)*1]), &(inteval->stack[((hsi*45+1791)*1+lsi)*1]), &(inteval->stack[((hsi*45+1362)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+5346)*1+lsi)*1]), &(inteval->stack[((hsi*84+1644)*1+lsi)*1]), &(inteval->stack[((hsi*63+1728)*1+lsi)*1]), &(inteval->stack[((hsi*63+1152)*1+lsi)*1]),3);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*270+4806)*1+lsi)*1]), &(inteval->stack[((hsi*189+5346)*1+lsi)*1]), &(inteval->stack[((hsi*135+5211)*1+lsi)*1]), &(inteval->stack[((hsi*135+5076)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+5535)*1+lsi)*1]), &(inteval->stack[((hsi*63+1536)*1+lsi)*1]), &(inteval->stack[((hsi*45+1599)*1+lsi)*1]), &(inteval->stack[((hsi*45+1362)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+5670)*1+lsi)*1]), &(inteval->stack[((hsi*84+1452)*1+lsi)*1]), &(inteval->stack[((hsi*63+1536)*1+lsi)*1]), &(inteval->stack[((hsi*63+1152)*1+lsi)*1]),3);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*270+4536)*1+lsi)*1]), &(inteval->stack[((hsi*189+5670)*1+lsi)*1]), &(inteval->stack[((hsi*135+5535)*1+lsi)*1]), &(inteval->stack[((hsi*135+5076)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+5859)*1+lsi)*1]), &(inteval->stack[((hsi*63+1299)*1+lsi)*1]), &(inteval->stack[((hsi*45+1407)*1+lsi)*1]), &(inteval->stack[((hsi*45+1362)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+5994)*1+lsi)*1]), &(inteval->stack[((hsi*84+1215)*1+lsi)*1]), &(inteval->stack[((hsi*63+1299)*1+lsi)*1]), &(inteval->stack[((hsi*63+1152)*1+lsi)*1]),3);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*270+4266)*1+lsi)*1]), &(inteval->stack[((hsi*189+5994)*1+lsi)*1]), &(inteval->stack[((hsi*135+5859)*1+lsi)*1]), &(inteval->stack[((hsi*135+5076)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]), &(inteval->stack[((hsi*63+1044)*1+lsi)*1]), &(inteval->stack[((hsi*63+1728)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+1728)*1+lsi)*1]), &(inteval->stack[((hsi*45+531)*1+lsi)*1]), &(inteval->stack[((hsi*45+1107)*1+lsi)*1]), &(inteval->stack[((hsi*45+1791)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*135+6246)*1+lsi)*1]), &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*45+1728)*1+lsi)*1]), &(inteval->stack[((hsi*45+1362)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+1728)*1+lsi)*1]), &(inteval->stack[((hsi*84+384)*1+lsi)*1]), &(inteval->stack[((hsi*84+960)*1+lsi)*1]), &(inteval->stack[((hsi*84+1644)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*189+6381)*1+lsi)*1]), &(inteval->stack[((hsi*84+1728)*1+lsi)*1]), &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*63+1152)*1+lsi)*1]),3);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*270+3996)*1+lsi)*1]), &(inteval->stack[((hsi*189+6381)*1+lsi)*1]), &(inteval->stack[((hsi*135+6246)*1+lsi)*1]), &(inteval->stack[((hsi*135+5076)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*63+276)*1+lsi)*1]), &(inteval->stack[((hsi*63+852)*1+lsi)*1]), &(inteval->stack[((hsi*63+1536)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+1644)*1+lsi)*1]), &(inteval->stack[((hsi*45+339)*1+lsi)*1]), &(inteval->stack[((hsi*45+915)*1+lsi)*1]), &(inteval->stack[((hsi*45+1599)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*135+1689)*1+lsi)*1]), &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*45+1644)*1+lsi)*1]), &(inteval->stack[((hsi*45+1362)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+1536)*1+lsi)*1]), &(inteval->stack[((hsi*84+192)*1+lsi)*1]), &(inteval->stack[((hsi*84+768)*1+lsi)*1]), &(inteval->stack[((hsi*84+1452)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*189+6570)*1+lsi)*1]), &(inteval->stack[((hsi*84+1536)*1+lsi)*1]), &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*63+1152)*1+lsi)*1]),3);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*270+3726)*1+lsi)*1]), &(inteval->stack[((hsi*189+6570)*1+lsi)*1]), &(inteval->stack[((hsi*135+1689)*1+lsi)*1]), &(inteval->stack[((hsi*135+5076)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*63+84)*1+lsi)*1]), &(inteval->stack[((hsi*63+660)*1+lsi)*1]), &(inteval->stack[((hsi*63+1299)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+1452)*1+lsi)*1]), &(inteval->stack[((hsi*45+147)*1+lsi)*1]), &(inteval->stack[((hsi*45+723)*1+lsi)*1]), &(inteval->stack[((hsi*45+1407)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*135+1497)*1+lsi)*1]), &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*45+1452)*1+lsi)*1]), &(inteval->stack[((hsi*45+1362)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+1299)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]), &(inteval->stack[((hsi*84+576)*1+lsi)*1]), &(inteval->stack[((hsi*84+1215)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*189+6759)*1+lsi)*1]), &(inteval->stack[((hsi*84+1299)*1+lsi)*1]), &(inteval->stack[((hsi*63+6183)*1+lsi)*1]), &(inteval->stack[((hsi*63+1152)*1+lsi)*1]),3);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*270+3456)*1+lsi)*1]), &(inteval->stack[((hsi*189+6759)*1+lsi)*1]), &(inteval->stack[((hsi*135+1497)*1+lsi)*1]), &(inteval->stack[((hsi*135+5076)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1152)*1+lsi)*1]), &(inteval->stack[((hsi*63+1044)*1+lsi)*1]), &(inteval->stack[((hsi*45+1107)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1287)*1+lsi)*1]), &(inteval->stack[((hsi*84+960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1044)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+3186)*1+lsi)*1]), &(inteval->stack[((hsi*189+1287)*1+lsi)*1]), &(inteval->stack[((hsi*135+1152)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+960)*1+lsi)*1]), &(inteval->stack[((hsi*63+852)*1+lsi)*1]), &(inteval->stack[((hsi*45+915)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6948)*1+lsi)*1]), &(inteval->stack[((hsi*84+768)*1+lsi)*1]), &(inteval->stack[((hsi*63+852)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+2916)*1+lsi)*1]), &(inteval->stack[((hsi*189+6948)*1+lsi)*1]), &(inteval->stack[((hsi*135+960)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+768)*1+lsi)*1]), &(inteval->stack[((hsi*63+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+723)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+7137)*1+lsi)*1]), &(inteval->stack[((hsi*84+576)*1+lsi)*1]), &(inteval->stack[((hsi*63+660)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+2646)*1+lsi)*1]), &(inteval->stack[((hsi*189+7137)*1+lsi)*1]), &(inteval->stack[((hsi*135+768)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+576)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]), &(inteval->stack[((hsi*45+531)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+7326)*1+lsi)*1]), &(inteval->stack[((hsi*84+384)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+2376)*1+lsi)*1]), &(inteval->stack[((hsi*189+7326)*1+lsi)*1]), &(inteval->stack[((hsi*135+576)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+384)*1+lsi)*1]), &(inteval->stack[((hsi*63+276)*1+lsi)*1]), &(inteval->stack[((hsi*45+339)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+7515)*1+lsi)*1]), &(inteval->stack[((hsi*84+192)*1+lsi)*1]), &(inteval->stack[((hsi*63+276)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+2106)*1+lsi)*1]), &(inteval->stack[((hsi*189+7515)*1+lsi)*1]), &(inteval->stack[((hsi*135+384)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+192)*1+lsi)*1]), &(inteval->stack[((hsi*63+84)*1+lsi)*1]), &(inteval->stack[((hsi*45+147)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+7704)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]), &(inteval->stack[((hsi*63+84)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+1836)*1+lsi)*1]), &(inteval->stack[((hsi*189+7704)*1+lsi)*1]), &(inteval->stack[((hsi*135+192)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*270+1836)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*270+2106)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*270+2376)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*270+2646)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*270+2916)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*270+3186)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*270+3456)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*270+3726)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*270+3996)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*270+4266)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*270+4536)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*270+4806)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
