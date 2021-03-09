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
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1260)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+3690)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+357)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+3825)*1+lsi)*1]), &(inteval->stack[((hsi*63+1107)*1+lsi)*1]), &(inteval->stack[((hsi*45+1215)*1+lsi)*1]), &(inteval->stack[((hsi*45+357)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+3960)*1+lsi)*1]), &(inteval->stack[((hsi*84+960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1107)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*270+3420)*1+lsi)*1]), &(inteval->stack[((hsi*189+3960)*1+lsi)*1]), &(inteval->stack[((hsi*135+3825)*1+lsi)*1]), &(inteval->stack[((hsi*135+3690)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+4149)*1+lsi)*1]), &(inteval->stack[((hsi*63+723)*1+lsi)*1]), &(inteval->stack[((hsi*45+831)*1+lsi)*1]), &(inteval->stack[((hsi*45+357)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+4284)*1+lsi)*1]), &(inteval->stack[((hsi*84+576)*1+lsi)*1]), &(inteval->stack[((hsi*63+723)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*270+3150)*1+lsi)*1]), &(inteval->stack[((hsi*189+4284)*1+lsi)*1]), &(inteval->stack[((hsi*135+4149)*1+lsi)*1]), &(inteval->stack[((hsi*135+3690)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+4473)*1+lsi)*1]), &(inteval->stack[((hsi*63+294)*1+lsi)*1]), &(inteval->stack[((hsi*45+447)*1+lsi)*1]), &(inteval->stack[((hsi*45+357)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+4608)*1+lsi)*1]), &(inteval->stack[((hsi*84+147)*1+lsi)*1]), &(inteval->stack[((hsi*63+294)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*270+2880)*1+lsi)*1]), &(inteval->stack[((hsi*189+4608)*1+lsi)*1]), &(inteval->stack[((hsi*135+4473)*1+lsi)*1]), &(inteval->stack[((hsi*135+3690)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4797)*1+lsi)*1]), &(inteval->stack[((hsi*63+1044)*1+lsi)*1]), &(inteval->stack[((hsi*45+1170)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+4932)*1+lsi)*1]), &(inteval->stack[((hsi*84+876)*1+lsi)*1]), &(inteval->stack[((hsi*63+1044)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+1800)*1+lsi)*1]), &(inteval->stack[((hsi*189+4932)*1+lsi)*1]), &(inteval->stack[((hsi*135+4797)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+5121)*1+lsi)*1]), &(inteval->stack[((hsi*63+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+786)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+5256)*1+lsi)*1]), &(inteval->stack[((hsi*84+492)*1+lsi)*1]), &(inteval->stack[((hsi*63+660)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+1530)*1+lsi)*1]), &(inteval->stack[((hsi*189+5256)*1+lsi)*1]), &(inteval->stack[((hsi*135+5121)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+5445)*1+lsi)*1]), &(inteval->stack[((hsi*63+231)*1+lsi)*1]), &(inteval->stack[((hsi*45+402)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+5580)*1+lsi)*1]), &(inteval->stack[((hsi*84+63)*1+lsi)*1]), &(inteval->stack[((hsi*63+231)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+1260)*1+lsi)*1]), &(inteval->stack[((hsi*189+5580)*1+lsi)*1]), &(inteval->stack[((hsi*135+5445)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*63+1044)*1+lsi)*1]), &(inteval->stack[((hsi*63+1107)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+1044)*1+lsi)*1]), &(inteval->stack[((hsi*45+1170)*1+lsi)*1]), &(inteval->stack[((hsi*45+1215)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*135+1089)*1+lsi)*1]), &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*45+1044)*1+lsi)*1]), &(inteval->stack[((hsi*45+357)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+5832)*1+lsi)*1]), &(inteval->stack[((hsi*84+876)*1+lsi)*1]), &(inteval->stack[((hsi*84+960)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*189+876)*1+lsi)*1]), &(inteval->stack[((hsi*84+5832)*1+lsi)*1]), &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*270+2610)*1+lsi)*1]), &(inteval->stack[((hsi*189+876)*1+lsi)*1]), &(inteval->stack[((hsi*135+1089)*1+lsi)*1]), &(inteval->stack[((hsi*135+3690)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*63+660)*1+lsi)*1]), &(inteval->stack[((hsi*63+723)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+786)*1+lsi)*1]), &(inteval->stack[((hsi*45+831)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*135+705)*1+lsi)*1]), &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*45+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+357)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+5832)*1+lsi)*1]), &(inteval->stack[((hsi*84+492)*1+lsi)*1]), &(inteval->stack[((hsi*84+576)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*189+492)*1+lsi)*1]), &(inteval->stack[((hsi*84+5832)*1+lsi)*1]), &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*270+2340)*1+lsi)*1]), &(inteval->stack[((hsi*189+492)*1+lsi)*1]), &(inteval->stack[((hsi*135+705)*1+lsi)*1]), &(inteval->stack[((hsi*135+3690)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*63+231)*1+lsi)*1]), &(inteval->stack[((hsi*63+294)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+231)*1+lsi)*1]), &(inteval->stack[((hsi*45+402)*1+lsi)*1]), &(inteval->stack[((hsi*45+447)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*135+5832)*1+lsi)*1]), &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*45+231)*1+lsi)*1]), &(inteval->stack[((hsi*45+357)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+231)*1+lsi)*1]), &(inteval->stack[((hsi*84+63)*1+lsi)*1]), &(inteval->stack[((hsi*84+147)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*189+5967)*1+lsi)*1]), &(inteval->stack[((hsi*84+231)*1+lsi)*1]), &(inteval->stack[((hsi*63+5769)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*270+2070)*1+lsi)*1]), &(inteval->stack[((hsi*189+5967)*1+lsi)*1]), &(inteval->stack[((hsi*135+5832)*1+lsi)*1]), &(inteval->stack[((hsi*135+3690)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*270+1260)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*270+1530)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*270+1800)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*270+2070)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*270+2340)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*270+2610)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*270+2880)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*270+3150)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*270+3420)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
