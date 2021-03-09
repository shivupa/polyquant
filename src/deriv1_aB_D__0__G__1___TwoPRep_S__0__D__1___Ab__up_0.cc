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
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3672)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+10152)*1+lsi)*1]), &(inteval->stack[((hsi*126+2304)*1+lsi)*1]), &(inteval->stack[((hsi*90+2724)*1+lsi)*1]),6);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+10422)*1+lsi)*1]), &(inteval->stack[((hsi*126+3456)*1+lsi)*1]), &(inteval->stack[((hsi*90+3582)*1+lsi)*1]), &(inteval->stack[((hsi*90+2724)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+10692)*1+lsi)*1]), &(inteval->stack[((hsi*168+3288)*1+lsi)*1]), &(inteval->stack[((hsi*126+3456)*1+lsi)*1]), &(inteval->stack[((hsi*126+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*540+9612)*1+lsi)*1]), &(inteval->stack[((hsi*378+10692)*1+lsi)*1]), &(inteval->stack[((hsi*270+10422)*1+lsi)*1]), &(inteval->stack[((hsi*270+10152)*1+lsi)*1]),6);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+11070)*1+lsi)*1]), &(inteval->stack[((hsi*126+3072)*1+lsi)*1]), &(inteval->stack[((hsi*90+3198)*1+lsi)*1]), &(inteval->stack[((hsi*90+2724)*1+lsi)*1]),6);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+11340)*1+lsi)*1]), &(inteval->stack[((hsi*168+2904)*1+lsi)*1]), &(inteval->stack[((hsi*126+3072)*1+lsi)*1]), &(inteval->stack[((hsi*126+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*540+9072)*1+lsi)*1]), &(inteval->stack[((hsi*378+11340)*1+lsi)*1]), &(inteval->stack[((hsi*270+11070)*1+lsi)*1]), &(inteval->stack[((hsi*270+10152)*1+lsi)*1]),6);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+11718)*1+lsi)*1]), &(inteval->stack[((hsi*126+2598)*1+lsi)*1]), &(inteval->stack[((hsi*90+2814)*1+lsi)*1]), &(inteval->stack[((hsi*90+2724)*1+lsi)*1]),6);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+11988)*1+lsi)*1]), &(inteval->stack[((hsi*168+2430)*1+lsi)*1]), &(inteval->stack[((hsi*126+2598)*1+lsi)*1]), &(inteval->stack[((hsi*126+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*540+8532)*1+lsi)*1]), &(inteval->stack[((hsi*378+11988)*1+lsi)*1]), &(inteval->stack[((hsi*270+11718)*1+lsi)*1]), &(inteval->stack[((hsi*270+10152)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]), &(inteval->stack[((hsi*126+2088)*1+lsi)*1]), &(inteval->stack[((hsi*126+3456)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3456)*1+lsi)*1]), &(inteval->stack[((hsi*90+1062)*1+lsi)*1]), &(inteval->stack[((hsi*90+2214)*1+lsi)*1]), &(inteval->stack[((hsi*90+3582)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*270+12492)*1+lsi)*1]), &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*90+3456)*1+lsi)*1]), &(inteval->stack[((hsi*90+2724)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+3456)*1+lsi)*1]), &(inteval->stack[((hsi*168+768)*1+lsi)*1]), &(inteval->stack[((hsi*168+1920)*1+lsi)*1]), &(inteval->stack[((hsi*168+3288)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*378+12762)*1+lsi)*1]), &(inteval->stack[((hsi*168+3456)*1+lsi)*1]), &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*126+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*540+7992)*1+lsi)*1]), &(inteval->stack[((hsi*378+12762)*1+lsi)*1]), &(inteval->stack[((hsi*270+12492)*1+lsi)*1]), &(inteval->stack[((hsi*270+10152)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*126+552)*1+lsi)*1]), &(inteval->stack[((hsi*126+1704)*1+lsi)*1]), &(inteval->stack[((hsi*126+3072)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3288)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]), &(inteval->stack[((hsi*90+1830)*1+lsi)*1]), &(inteval->stack[((hsi*90+3198)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*270+3378)*1+lsi)*1]), &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*90+3288)*1+lsi)*1]), &(inteval->stack[((hsi*90+2724)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+3072)*1+lsi)*1]), &(inteval->stack[((hsi*168+384)*1+lsi)*1]), &(inteval->stack[((hsi*168+1536)*1+lsi)*1]), &(inteval->stack[((hsi*168+2904)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*378+13140)*1+lsi)*1]), &(inteval->stack[((hsi*168+3072)*1+lsi)*1]), &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*126+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*540+7452)*1+lsi)*1]), &(inteval->stack[((hsi*378+13140)*1+lsi)*1]), &(inteval->stack[((hsi*270+3378)*1+lsi)*1]), &(inteval->stack[((hsi*270+10152)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*126+168)*1+lsi)*1]), &(inteval->stack[((hsi*126+1320)*1+lsi)*1]), &(inteval->stack[((hsi*126+2598)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2904)*1+lsi)*1]), &(inteval->stack[((hsi*90+294)*1+lsi)*1]), &(inteval->stack[((hsi*90+1446)*1+lsi)*1]), &(inteval->stack[((hsi*90+2814)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*270+2994)*1+lsi)*1]), &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*90+2904)*1+lsi)*1]), &(inteval->stack[((hsi*90+2724)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+2598)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*168+1152)*1+lsi)*1]), &(inteval->stack[((hsi*168+2430)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*378+13518)*1+lsi)*1]), &(inteval->stack[((hsi*168+2598)*1+lsi)*1]), &(inteval->stack[((hsi*126+12366)*1+lsi)*1]), &(inteval->stack[((hsi*126+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*540+6912)*1+lsi)*1]), &(inteval->stack[((hsi*378+13518)*1+lsi)*1]), &(inteval->stack[((hsi*270+2994)*1+lsi)*1]), &(inteval->stack[((hsi*270+10152)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+2304)*1+lsi)*1]), &(inteval->stack[((hsi*126+2088)*1+lsi)*1]), &(inteval->stack[((hsi*90+2214)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+2574)*1+lsi)*1]), &(inteval->stack[((hsi*168+1920)*1+lsi)*1]), &(inteval->stack[((hsi*126+2088)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+6372)*1+lsi)*1]), &(inteval->stack[((hsi*378+2574)*1+lsi)*1]), &(inteval->stack[((hsi*270+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1920)*1+lsi)*1]), &(inteval->stack[((hsi*126+1704)*1+lsi)*1]), &(inteval->stack[((hsi*90+1830)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+13896)*1+lsi)*1]), &(inteval->stack[((hsi*168+1536)*1+lsi)*1]), &(inteval->stack[((hsi*126+1704)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+5832)*1+lsi)*1]), &(inteval->stack[((hsi*378+13896)*1+lsi)*1]), &(inteval->stack[((hsi*270+1920)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1536)*1+lsi)*1]), &(inteval->stack[((hsi*126+1320)*1+lsi)*1]), &(inteval->stack[((hsi*90+1446)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+14274)*1+lsi)*1]), &(inteval->stack[((hsi*168+1152)*1+lsi)*1]), &(inteval->stack[((hsi*126+1320)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+5292)*1+lsi)*1]), &(inteval->stack[((hsi*378+14274)*1+lsi)*1]), &(inteval->stack[((hsi*270+1536)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1152)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]), &(inteval->stack[((hsi*90+1062)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+14652)*1+lsi)*1]), &(inteval->stack[((hsi*168+768)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+4752)*1+lsi)*1]), &(inteval->stack[((hsi*378+14652)*1+lsi)*1]), &(inteval->stack[((hsi*270+1152)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+768)*1+lsi)*1]), &(inteval->stack[((hsi*126+552)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+15030)*1+lsi)*1]), &(inteval->stack[((hsi*168+384)*1+lsi)*1]), &(inteval->stack[((hsi*126+552)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+4212)*1+lsi)*1]), &(inteval->stack[((hsi*378+15030)*1+lsi)*1]), &(inteval->stack[((hsi*270+768)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+384)*1+lsi)*1]), &(inteval->stack[((hsi*126+168)*1+lsi)*1]), &(inteval->stack[((hsi*90+294)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+15408)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+168)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+3672)*1+lsi)*1]), &(inteval->stack[((hsi*378+15408)*1+lsi)*1]), &(inteval->stack[((hsi*270+384)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*540+3672)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*540+4212)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*540+4752)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*540+5292)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*540+5832)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*540+6372)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*540+6912)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*540+7452)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*540+7992)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*540+8532)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*540+9072)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*540+9612)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
