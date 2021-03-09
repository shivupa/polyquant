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
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8820)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+25830)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+2499)*1+lsi)*1]),21);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+26775)*1+lsi)*1]), &(inteval->stack[((hsi*441+7749)*1+lsi)*1]), &(inteval->stack[((hsi*315+8505)*1+lsi)*1]), &(inteval->stack[((hsi*315+2499)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+27720)*1+lsi)*1]), &(inteval->stack[((hsi*588+6720)*1+lsi)*1]), &(inteval->stack[((hsi*441+7749)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1890+23940)*1+lsi)*1]), &(inteval->stack[((hsi*1323+27720)*1+lsi)*1]), &(inteval->stack[((hsi*945+26775)*1+lsi)*1]), &(inteval->stack[((hsi*945+25830)*1+lsi)*1]),21);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+29043)*1+lsi)*1]), &(inteval->stack[((hsi*441+5061)*1+lsi)*1]), &(inteval->stack[((hsi*315+5817)*1+lsi)*1]), &(inteval->stack[((hsi*315+2499)*1+lsi)*1]),21);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+29988)*1+lsi)*1]), &(inteval->stack[((hsi*588+4032)*1+lsi)*1]), &(inteval->stack[((hsi*441+5061)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1890+22050)*1+lsi)*1]), &(inteval->stack[((hsi*1323+29988)*1+lsi)*1]), &(inteval->stack[((hsi*945+29043)*1+lsi)*1]), &(inteval->stack[((hsi*945+25830)*1+lsi)*1]),21);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+31311)*1+lsi)*1]), &(inteval->stack[((hsi*441+2058)*1+lsi)*1]), &(inteval->stack[((hsi*315+3129)*1+lsi)*1]), &(inteval->stack[((hsi*315+2499)*1+lsi)*1]),21);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+32256)*1+lsi)*1]), &(inteval->stack[((hsi*588+1029)*1+lsi)*1]), &(inteval->stack[((hsi*441+2058)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1890+20160)*1+lsi)*1]), &(inteval->stack[((hsi*1323+32256)*1+lsi)*1]), &(inteval->stack[((hsi*945+31311)*1+lsi)*1]), &(inteval->stack[((hsi*945+25830)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+33579)*1+lsi)*1]), &(inteval->stack[((hsi*441+7308)*1+lsi)*1]), &(inteval->stack[((hsi*315+8190)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+34524)*1+lsi)*1]), &(inteval->stack[((hsi*588+6132)*1+lsi)*1]), &(inteval->stack[((hsi*441+7308)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+12600)*1+lsi)*1]), &(inteval->stack[((hsi*1323+34524)*1+lsi)*1]), &(inteval->stack[((hsi*945+33579)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+35847)*1+lsi)*1]), &(inteval->stack[((hsi*441+4620)*1+lsi)*1]), &(inteval->stack[((hsi*315+5502)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+36792)*1+lsi)*1]), &(inteval->stack[((hsi*588+3444)*1+lsi)*1]), &(inteval->stack[((hsi*441+4620)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+10710)*1+lsi)*1]), &(inteval->stack[((hsi*1323+36792)*1+lsi)*1]), &(inteval->stack[((hsi*945+35847)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+38115)*1+lsi)*1]), &(inteval->stack[((hsi*441+1617)*1+lsi)*1]), &(inteval->stack[((hsi*315+2814)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+39060)*1+lsi)*1]), &(inteval->stack[((hsi*588+441)*1+lsi)*1]), &(inteval->stack[((hsi*441+1617)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+8820)*1+lsi)*1]), &(inteval->stack[((hsi*1323+39060)*1+lsi)*1]), &(inteval->stack[((hsi*945+38115)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*441+7308)*1+lsi)*1]), &(inteval->stack[((hsi*441+7749)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+7308)*1+lsi)*1]), &(inteval->stack[((hsi*315+8190)*1+lsi)*1]), &(inteval->stack[((hsi*315+8505)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+7623)*1+lsi)*1]), &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*315+7308)*1+lsi)*1]), &(inteval->stack[((hsi*315+2499)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+40824)*1+lsi)*1]), &(inteval->stack[((hsi*588+6132)*1+lsi)*1]), &(inteval->stack[((hsi*588+6720)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1323+6132)*1+lsi)*1]), &(inteval->stack[((hsi*588+40824)*1+lsi)*1]), &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*1890+18270)*1+lsi)*1]), &(inteval->stack[((hsi*1323+6132)*1+lsi)*1]), &(inteval->stack[((hsi*945+7623)*1+lsi)*1]), &(inteval->stack[((hsi*945+25830)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*441+4620)*1+lsi)*1]), &(inteval->stack[((hsi*441+5061)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+4620)*1+lsi)*1]), &(inteval->stack[((hsi*315+5502)*1+lsi)*1]), &(inteval->stack[((hsi*315+5817)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+4935)*1+lsi)*1]), &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*315+4620)*1+lsi)*1]), &(inteval->stack[((hsi*315+2499)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+40824)*1+lsi)*1]), &(inteval->stack[((hsi*588+3444)*1+lsi)*1]), &(inteval->stack[((hsi*588+4032)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1323+3444)*1+lsi)*1]), &(inteval->stack[((hsi*588+40824)*1+lsi)*1]), &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*1890+16380)*1+lsi)*1]), &(inteval->stack[((hsi*1323+3444)*1+lsi)*1]), &(inteval->stack[((hsi*945+4935)*1+lsi)*1]), &(inteval->stack[((hsi*945+25830)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*441+1617)*1+lsi)*1]), &(inteval->stack[((hsi*441+2058)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+1617)*1+lsi)*1]), &(inteval->stack[((hsi*315+2814)*1+lsi)*1]), &(inteval->stack[((hsi*315+3129)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+40824)*1+lsi)*1]), &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*315+1617)*1+lsi)*1]), &(inteval->stack[((hsi*315+2499)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+1617)*1+lsi)*1]), &(inteval->stack[((hsi*588+441)*1+lsi)*1]), &(inteval->stack[((hsi*588+1029)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1323+41769)*1+lsi)*1]), &(inteval->stack[((hsi*588+1617)*1+lsi)*1]), &(inteval->stack[((hsi*441+40383)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*1890+14490)*1+lsi)*1]), &(inteval->stack[((hsi*1323+41769)*1+lsi)*1]), &(inteval->stack[((hsi*945+40824)*1+lsi)*1]), &(inteval->stack[((hsi*945+25830)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1890+8820)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1890+10710)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1890+12600)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1890+14490)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1890+16380)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1890+18270)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1890+20160)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1890+22050)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1890+23940)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
