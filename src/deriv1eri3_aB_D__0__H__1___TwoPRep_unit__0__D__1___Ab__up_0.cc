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
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3354)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+10158)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+10536)*1+lsi)*1]), &(inteval->stack[((hsi*168+2934)*1+lsi)*1]), &(inteval->stack[((hsi*126+3228)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+10914)*1+lsi)*1]), &(inteval->stack[((hsi*216+2550)*1+lsi)*1]), &(inteval->stack[((hsi*168+2934)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*756+9402)*1+lsi)*1]), &(inteval->stack[((hsi*504+10914)*1+lsi)*1]), &(inteval->stack[((hsi*378+10536)*1+lsi)*1]), &(inteval->stack[((hsi*378+10158)*1+lsi)*1]),6);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+11418)*1+lsi)*1]), &(inteval->stack[((hsi*168+1914)*1+lsi)*1]), &(inteval->stack[((hsi*126+2208)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+11796)*1+lsi)*1]), &(inteval->stack[((hsi*216+1530)*1+lsi)*1]), &(inteval->stack[((hsi*168+1914)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*756+8646)*1+lsi)*1]), &(inteval->stack[((hsi*504+11796)*1+lsi)*1]), &(inteval->stack[((hsi*378+11418)*1+lsi)*1]), &(inteval->stack[((hsi*378+10158)*1+lsi)*1]),6);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+12300)*1+lsi)*1]), &(inteval->stack[((hsi*168+768)*1+lsi)*1]), &(inteval->stack[((hsi*126+1188)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+12678)*1+lsi)*1]), &(inteval->stack[((hsi*216+384)*1+lsi)*1]), &(inteval->stack[((hsi*168+768)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*756+7890)*1+lsi)*1]), &(inteval->stack[((hsi*504+12678)*1+lsi)*1]), &(inteval->stack[((hsi*378+12300)*1+lsi)*1]), &(inteval->stack[((hsi*378+10158)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+13182)*1+lsi)*1]), &(inteval->stack[((hsi*168+2766)*1+lsi)*1]), &(inteval->stack[((hsi*126+3102)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+13560)*1+lsi)*1]), &(inteval->stack[((hsi*216+2334)*1+lsi)*1]), &(inteval->stack[((hsi*168+2766)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+4866)*1+lsi)*1]), &(inteval->stack[((hsi*504+13560)*1+lsi)*1]), &(inteval->stack[((hsi*378+13182)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+14064)*1+lsi)*1]), &(inteval->stack[((hsi*168+1746)*1+lsi)*1]), &(inteval->stack[((hsi*126+2082)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+14442)*1+lsi)*1]), &(inteval->stack[((hsi*216+1314)*1+lsi)*1]), &(inteval->stack[((hsi*168+1746)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+4110)*1+lsi)*1]), &(inteval->stack[((hsi*504+14442)*1+lsi)*1]), &(inteval->stack[((hsi*378+14064)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+14946)*1+lsi)*1]), &(inteval->stack[((hsi*168+600)*1+lsi)*1]), &(inteval->stack[((hsi*126+1062)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+15324)*1+lsi)*1]), &(inteval->stack[((hsi*216+168)*1+lsi)*1]), &(inteval->stack[((hsi*168+600)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+3354)*1+lsi)*1]), &(inteval->stack[((hsi*504+15324)*1+lsi)*1]), &(inteval->stack[((hsi*378+14946)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*168+2766)*1+lsi)*1]), &(inteval->stack[((hsi*168+2934)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2766)*1+lsi)*1]), &(inteval->stack[((hsi*126+3102)*1+lsi)*1]), &(inteval->stack[((hsi*126+3228)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*378+2892)*1+lsi)*1]), &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*126+2766)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+15996)*1+lsi)*1]), &(inteval->stack[((hsi*216+2334)*1+lsi)*1]), &(inteval->stack[((hsi*216+2550)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+2334)*1+lsi)*1]), &(inteval->stack[((hsi*216+15996)*1+lsi)*1]), &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*756+7134)*1+lsi)*1]), &(inteval->stack[((hsi*504+2334)*1+lsi)*1]), &(inteval->stack[((hsi*378+2892)*1+lsi)*1]), &(inteval->stack[((hsi*378+10158)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*168+1746)*1+lsi)*1]), &(inteval->stack[((hsi*168+1914)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+1746)*1+lsi)*1]), &(inteval->stack[((hsi*126+2082)*1+lsi)*1]), &(inteval->stack[((hsi*126+2208)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*378+1872)*1+lsi)*1]), &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*126+1746)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+15996)*1+lsi)*1]), &(inteval->stack[((hsi*216+1314)*1+lsi)*1]), &(inteval->stack[((hsi*216+1530)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+1314)*1+lsi)*1]), &(inteval->stack[((hsi*216+15996)*1+lsi)*1]), &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*756+6378)*1+lsi)*1]), &(inteval->stack[((hsi*504+1314)*1+lsi)*1]), &(inteval->stack[((hsi*378+1872)*1+lsi)*1]), &(inteval->stack[((hsi*378+10158)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*168+600)*1+lsi)*1]), &(inteval->stack[((hsi*168+768)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+600)*1+lsi)*1]), &(inteval->stack[((hsi*126+1062)*1+lsi)*1]), &(inteval->stack[((hsi*126+1188)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*378+15996)*1+lsi)*1]), &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*126+600)*1+lsi)*1]), &(inteval->stack[((hsi*126+936)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+600)*1+lsi)*1]), &(inteval->stack[((hsi*216+168)*1+lsi)*1]), &(inteval->stack[((hsi*216+384)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+16374)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]), &(inteval->stack[((hsi*168+15828)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*756+5622)*1+lsi)*1]), &(inteval->stack[((hsi*504+16374)*1+lsi)*1]), &(inteval->stack[((hsi*378+15996)*1+lsi)*1]), &(inteval->stack[((hsi*378+10158)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*756+3354)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*756+4110)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*756+4866)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*756+5622)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*756+6378)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*756+7134)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*756+7890)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*756+8646)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*756+9402)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
