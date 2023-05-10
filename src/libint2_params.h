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

#ifndef _libint2_libint2params_h_
#define _libint2_libint2params_h_

#ifndef LIBINT2_API_PREFIX
# define LIBINT2_API_PREFIX 
#endif
#ifndef LIBINT2_MAX_VECLEN
# define LIBINT2_MAX_VECLEN 1
#endif
#ifndef LIBINT2_ALIGN_SIZE
# define LIBINT2_ALIGN_SIZE 0
#endif
#ifndef LIBINT2_REALTYPE
# define LIBINT2_REALTYPE double
#endif
#ifndef LIBINT2_CONTRACTED_INTS
# define LIBINT2_CONTRACTED_INTS 1
#endif
#ifndef LIBINT2_USE_COMPOSITE_EVALUATORS
# define LIBINT2_USE_COMPOSITE_EVALUATORS 1
#endif

#ifndef LIBINT2_CARTGAUSS_MAX_AM
# define LIBINT2_CARTGAUSS_MAX_AM 32
#endif

#ifndef LIBINT2_CGSHELL_ORDERING
# define LIBINT2_CGSHELL_ORDERING 3
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_STANDARD
# define LIBINT2_CGSHELL_ORDERING_STANDARD 1
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_INTV3
# define LIBINT2_CGSHELL_ORDERING_INTV3 2
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_GAMESS
# define LIBINT2_CGSHELL_ORDERING_GAMESS 3
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_ORCA
# define LIBINT2_CGSHELL_ORDERING_ORCA 4
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_BAGEL
# define LIBINT2_CGSHELL_ORDERING_BAGEL 5
#endif

#ifndef LIBINT2_SHELLQUARTET_SET
# define LIBINT2_SHELLQUARTET_SET 1
#endif

#ifndef LIBINT2_SHELLQUARTET_SET_STANDARD
# define LIBINT2_SHELLQUARTET_SET_STANDARD 1
#endif

#ifndef LIBINT2_SHELLQUARTET_SET_ORCA
# define LIBINT2_SHELLQUARTET_SET_ORCA 2
#endif

#ifndef LIBINT2_MAX_AM
# define LIBINT2_MAX_AM 10
#endif

#ifndef LIBINT2_MAX_AM_default
# define LIBINT2_MAX_AM_default 10
#endif

#ifndef LIBINT2_MAX_AM_overlap
# define LIBINT2_MAX_AM_overlap 10
#endif

#ifndef LIBINT2_MAX_AM_kinetic
# define LIBINT2_MAX_AM_kinetic 10
#endif

#ifndef LIBINT2_MAX_AM_elecpot
# define LIBINT2_MAX_AM_elecpot 10
#endif

#ifndef LIBINT2_MAX_AM_1emultipole
# define LIBINT2_MAX_AM_1emultipole 10
#endif

#ifndef LIBINT2_MAX_AM_2emultipole
# define LIBINT2_MAX_AM_2emultipole 10
#endif

#ifndef LIBINT2_MAX_AM_3emultipole
# define LIBINT2_MAX_AM_3emultipole 10
#endif

#ifndef LIBINT2_MAX_AM_sphemultipole
# define LIBINT2_MAX_AM_sphemultipole 10
#endif

#ifndef LIBINT2_MAX_AM_eri
# define LIBINT2_MAX_AM_eri 10
#endif

#ifndef LIBINT2_MAX_AM_3eri
# define LIBINT2_MAX_AM_3eri 10
#endif

#ifndef LIBINT2_MAX_AM_2eri
# define LIBINT2_MAX_AM_2eri 10
#endif

#ifndef LIBINT2_SUPPORT_ONEBODY
# define LIBINT2_SUPPORT_ONEBODY 1
#endif

#ifndef LIBINT2_DERIV_ONEBODY_ORDER
# define LIBINT2_DERIV_ONEBODY_ORDER 0
#endif

#ifndef LIBINT2_DERIV_ONEBODY_PROPERTY_ORDER
# define LIBINT2_DERIV_ONEBODY_PROPERTY_ORDER 0
#endif

#ifndef LIBINT2_SUPPORT_ERI
# define LIBINT2_SUPPORT_ERI 1
#endif

#ifndef LIBINT2_DERIV_ERI_ORDER
# define LIBINT2_DERIV_ERI_ORDER 0
#endif

#ifndef LIBINT2_SUPPORT_ERI3
# define LIBINT2_SUPPORT_ERI3 1
#endif

#ifndef LIBINT2_DERIV_ERI3_ORDER
# define LIBINT2_DERIV_ERI3_ORDER 0
#endif

#ifndef LIBINT2_SUPPORT_ERI2
# define LIBINT2_SUPPORT_ERI2 1
#endif

#ifndef LIBINT2_DERIV_ERI2_ORDER
# define LIBINT2_DERIV_ERI2_ORDER 0
#endif

#ifndef LIBINT2_MAX_DERIV_ORDER
# define LIBINT2_MAX_DERIV_ORDER 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0overlap
# define LIBINT2_TASK_EXISTS_0overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0kinetic
# define LIBINT2_TASK_EXISTS_0kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0elecpot
# define LIBINT2_TASK_EXISTS_0elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_01emultipole
# define LIBINT2_TASK_EXISTS_01emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_02emultipole
# define LIBINT2_TASK_EXISTS_02emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_03emultipole
# define LIBINT2_TASK_EXISTS_03emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0sphemultipole
# define LIBINT2_TASK_EXISTS_0sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0eri
# define LIBINT2_TASK_EXISTS_0eri 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12kg12
# define LIBINT2_TASK_EXISTS_0r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_0_g12
# define LIBINT2_TASK_EXISTS_0r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_2_g12
# define LIBINT2_TASK_EXISTS_0r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12_T1_g12
# define LIBINT2_TASK_EXISTS_0g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12dkh
# define LIBINT2_TASK_EXISTS_0g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1overlap
# define LIBINT2_TASK_EXISTS_1overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1kinetic
# define LIBINT2_TASK_EXISTS_1kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1elecpot
# define LIBINT2_TASK_EXISTS_1elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_11emultipole
# define LIBINT2_TASK_EXISTS_11emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_12emultipole
# define LIBINT2_TASK_EXISTS_12emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_13emultipole
# define LIBINT2_TASK_EXISTS_13emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1sphemultipole
# define LIBINT2_TASK_EXISTS_1sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1eri
# define LIBINT2_TASK_EXISTS_1eri 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12kg12
# define LIBINT2_TASK_EXISTS_1r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_0_g12
# define LIBINT2_TASK_EXISTS_1r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_2_g12
# define LIBINT2_TASK_EXISTS_1r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12_T1_g12
# define LIBINT2_TASK_EXISTS_1g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12dkh
# define LIBINT2_TASK_EXISTS_1g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2overlap
# define LIBINT2_TASK_EXISTS_2overlap 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2kinetic
# define LIBINT2_TASK_EXISTS_2kinetic 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2elecpot
# define LIBINT2_TASK_EXISTS_2elecpot 1
#endif

#ifndef LIBINT2_TASK_EXISTS_21emultipole
# define LIBINT2_TASK_EXISTS_21emultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_22emultipole
# define LIBINT2_TASK_EXISTS_22emultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_23emultipole
# define LIBINT2_TASK_EXISTS_23emultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2sphemultipole
# define LIBINT2_TASK_EXISTS_2sphemultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2eri
# define LIBINT2_TASK_EXISTS_2eri 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12kg12
# define LIBINT2_TASK_EXISTS_2r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_0_g12
# define LIBINT2_TASK_EXISTS_2r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_2_g12
# define LIBINT2_TASK_EXISTS_2r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12_T1_g12
# define LIBINT2_TASK_EXISTS_2g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12dkh
# define LIBINT2_TASK_EXISTS_2g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3overlap
# define LIBINT2_TASK_EXISTS_3overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3kinetic
# define LIBINT2_TASK_EXISTS_3kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3elecpot
# define LIBINT2_TASK_EXISTS_3elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_31emultipole
# define LIBINT2_TASK_EXISTS_31emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_32emultipole
# define LIBINT2_TASK_EXISTS_32emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_33emultipole
# define LIBINT2_TASK_EXISTS_33emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3sphemultipole
# define LIBINT2_TASK_EXISTS_3sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3eri
# define LIBINT2_TASK_EXISTS_3eri 1
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12kg12
# define LIBINT2_TASK_EXISTS_3r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_0_g12
# define LIBINT2_TASK_EXISTS_3r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_2_g12
# define LIBINT2_TASK_EXISTS_3r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12_T1_g12
# define LIBINT2_TASK_EXISTS_3g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12dkh
# define LIBINT2_TASK_EXISTS_3g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4overlap
# define LIBINT2_TASK_EXISTS_4overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4kinetic
# define LIBINT2_TASK_EXISTS_4kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4elecpot
# define LIBINT2_TASK_EXISTS_4elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_41emultipole
# define LIBINT2_TASK_EXISTS_41emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_42emultipole
# define LIBINT2_TASK_EXISTS_42emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_43emultipole
# define LIBINT2_TASK_EXISTS_43emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4sphemultipole
# define LIBINT2_TASK_EXISTS_4sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4eri
# define LIBINT2_TASK_EXISTS_4eri 1
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12kg12
# define LIBINT2_TASK_EXISTS_4r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_0_g12
# define LIBINT2_TASK_EXISTS_4r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_2_g12
# define LIBINT2_TASK_EXISTS_4r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12_T1_g12
# define LIBINT2_TASK_EXISTS_4g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12dkh
# define LIBINT2_TASK_EXISTS_4g12dkh 0
#endif

#define LIBINT2_NUM_TARGETS_default 1
#define LIBINT2_MAX_STACK_SIZE_0_default 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_default 0
#define LIBINT2_MAX_HRR_HSRANK_0_default 0
#define LIBINT2_MAX_HRR_LSRANK_0_default 0
#define LIBINT2_NUM_TARGETS_overlap 1
#define LIBINT2_MAX_STACK_SIZE_0_overlap 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_0_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_0_overlap 0
#define LIBINT2_MAX_STACK_SIZE_1_overlap 165
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_1_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_1_overlap 0
#define LIBINT2_MAX_STACK_SIZE_2_overlap 462
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_2_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_2_overlap 0
#define LIBINT2_MAX_STACK_SIZE_3_overlap 891
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_3_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_3_overlap 0
#define LIBINT2_MAX_STACK_SIZE_4_overlap 1452
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_4_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_4_overlap 0
#define LIBINT2_MAX_STACK_SIZE_5_overlap 2145
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_5_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_5_overlap 0
#define LIBINT2_MAX_STACK_SIZE_6_overlap 2970
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_6_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_6_overlap 0
#define LIBINT2_MAX_STACK_SIZE_7_overlap 3927
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_7_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_7_overlap 0
#define LIBINT2_MAX_STACK_SIZE_8_overlap 5016
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_8_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_8_overlap 0
#define LIBINT2_MAX_STACK_SIZE_9_overlap 6350
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_9_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_9_overlap 0
#define LIBINT2_MAX_STACK_SIZE_10_overlap 9075
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_10_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_10_overlap 0
#define LIBINT2_NUM_TARGETS_kinetic 1
#define LIBINT2_MAX_STACK_SIZE_0_kinetic 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_0_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_0_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_1_kinetic 204
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_1_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_1_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_2_kinetic 504
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_2_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_2_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_3_kinetic 936
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_3_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_3_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_4_kinetic 1500
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_4_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_4_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_5_kinetic 2196
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_5_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_5_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_6_kinetic 3024
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_6_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_6_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_7_kinetic 3984
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_7_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_7_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_8_kinetic 5076
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_8_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_8_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_9_kinetic 6413
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_9_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_9_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_10_kinetic 9144
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_10_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_10_kinetic 0
#define LIBINT2_NUM_TARGETS_elecpot 1
#define LIBINT2_MAX_STACK_SIZE_0_elecpot 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_0_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_0_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_1_elecpot 589
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_1_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_1_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_2_elecpot 865
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_2_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_2_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_3_elecpot 1145
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_3_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_3_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_4_elecpot 2569
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_4_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_4_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_5_elecpot 5005
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_5_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_5_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_6_elecpot 6644
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_6_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_6_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_7_elecpot 10698
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_7_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_7_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_8_elecpot 17001
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_8_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_8_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_9_elecpot 24256
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_9_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_9_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_10_elecpot 38127
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_10_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_10_elecpot 0
#define LIBINT2_NUM_TARGETS_1emultipole 4
#define LIBINT2_MAX_STACK_SIZE_0_1emultipole 4
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_1emultipole 564
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_1emultipole 1656
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_1emultipole 3276
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_1emultipole 5424
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_1emultipole 8100
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_6_1emultipole 11304
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_6_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_6_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_7_1emultipole 15036
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_7_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_7_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_8_1emultipole 19296
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_8_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_8_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_9_1emultipole 24530
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_9_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_9_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_10_1emultipole 35244
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_10_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_10_1emultipole 0
#define LIBINT2_NUM_TARGETS_2emultipole 10
#define LIBINT2_MAX_STACK_SIZE_0_2emultipole 10
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_2emultipole 1359
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_2emultipole 4038
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_2emultipole 8037
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_2emultipole 13356
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_2emultipole 19995
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_6_2emultipole 27954
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_6_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_6_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_7_2emultipole 37233
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_7_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_7_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_8_2emultipole 47832
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_8_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_8_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_9_2emultipole 60860
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_9_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_9_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_10_2emultipole 87549
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_10_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_10_2emultipole 0
#define LIBINT2_NUM_TARGETS_3emultipole 20
#define LIBINT2_MAX_STACK_SIZE_0_3emultipole 20
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_3emultipole 2682
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_3emultipole 8004
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_3emultipole 15966
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_3emultipole 26568
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_3emultipole 39810
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_6_3emultipole 55692
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_6_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_6_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_7_3emultipole 74214
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_7_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_7_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_8_3emultipole 95376
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_8_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_8_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_9_3emultipole 121390
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_9_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_9_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_10_3emultipole 174702
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_10_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_10_3emultipole 0
#define LIBINT2_NUM_TARGETS_sphemultipole 25
#define LIBINT2_MAX_STACK_SIZE_0_sphemultipole 25
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_sphemultipole 4631
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_sphemultipole 8550
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_sphemultipole 21823
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_sphemultipole 40393
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_sphemultipole 66445
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_6_sphemultipole 96188
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_6_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_6_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_7_sphemultipole 135712
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_7_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_7_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_8_sphemultipole 180822
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_8_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_8_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_9_sphemultipole 242807
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_9_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_9_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_10_sphemultipole 350784
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_10_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_10_sphemultipole 0
#define LIBINT2_NUM_TARGETS_eri 1
#define LIBINT2_MAX_STACK_SIZE_0_eri 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_eri 0
#define LIBINT2_MAX_HRR_HSRANK_0_eri 0
#define LIBINT2_MAX_HRR_LSRANK_0_eri 0
#define LIBINT2_MAX_STACK_SIZE_1_eri 114381
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_eri 0
#define LIBINT2_MAX_HRR_HSRANK_1_eri 0
#define LIBINT2_MAX_HRR_LSRANK_1_eri 0
#define LIBINT2_MAX_STACK_SIZE_2_eri 438750
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_eri 0
#define LIBINT2_MAX_HRR_HSRANK_2_eri 0
#define LIBINT2_MAX_HRR_LSRANK_2_eri 0
#define LIBINT2_MAX_STACK_SIZE_3_eri 1179471
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_eri 0
#define LIBINT2_MAX_HRR_HSRANK_3_eri 0
#define LIBINT2_MAX_HRR_LSRANK_3_eri 0
#define LIBINT2_MAX_STACK_SIZE_4_eri 2799192
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_eri 0
#define LIBINT2_MAX_HRR_HSRANK_4_eri 0
#define LIBINT2_MAX_HRR_LSRANK_4_eri 0
#define LIBINT2_MAX_STACK_SIZE_5_eri 6461331
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_eri 0
#define LIBINT2_MAX_HRR_HSRANK_5_eri 0
#define LIBINT2_MAX_HRR_LSRANK_5_eri 0
#define LIBINT2_MAX_STACK_SIZE_6_eri 13539372
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_eri 0
#define LIBINT2_MAX_HRR_HSRANK_6_eri 0
#define LIBINT2_MAX_HRR_LSRANK_6_eri 0
#define LIBINT2_MAX_STACK_SIZE_7_eri 24698256
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_eri 0
#define LIBINT2_MAX_HRR_HSRANK_7_eri 0
#define LIBINT2_MAX_HRR_LSRANK_7_eri 0
#define LIBINT2_MAX_STACK_SIZE_8_eri 49980708
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_eri 0
#define LIBINT2_MAX_HRR_HSRANK_8_eri 0
#define LIBINT2_MAX_HRR_LSRANK_8_eri 0
#define LIBINT2_MAX_STACK_SIZE_9_eri 72523001
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_eri 0
#define LIBINT2_MAX_HRR_HSRANK_9_eri 0
#define LIBINT2_MAX_HRR_LSRANK_9_eri 0
#define LIBINT2_MAX_STACK_SIZE_10_eri 167800311
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_eri 0
#define LIBINT2_MAX_HRR_HSRANK_10_eri 0
#define LIBINT2_MAX_HRR_LSRANK_10_eri 0
#define LIBINT2_NUM_TARGETS_3eri 1
#define LIBINT2_MAX_STACK_SIZE_0_3eri 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_0_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_0_3eri 0
#define LIBINT2_MAX_STACK_SIZE_1_3eri 38127
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_1_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_1_3eri 0
#define LIBINT2_MAX_STACK_SIZE_2_3eri 114381
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_2_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_2_3eri 0
#define LIBINT2_MAX_STACK_SIZE_3_3eri 228762
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_3_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_3_3eri 0
#define LIBINT2_MAX_STACK_SIZE_4_3eri 381270
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_4_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_4_3eri 0
#define LIBINT2_MAX_STACK_SIZE_5_3eri 571905
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_5_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_5_3eri 0
#define LIBINT2_MAX_STACK_SIZE_6_3eri 800667
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_6_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_6_3eri 0
#define LIBINT2_MAX_STACK_SIZE_7_3eri 1067556
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_7_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_7_3eri 0
#define LIBINT2_MAX_STACK_SIZE_8_3eri 1372572
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_8_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_8_3eri 0
#define LIBINT2_MAX_STACK_SIZE_9_3eri 1715715
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_9_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_9_3eri 0
#define LIBINT2_MAX_STACK_SIZE_10_3eri 2516382
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_10_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_10_3eri 0
#define LIBINT2_NUM_TARGETS_2eri 1
#define LIBINT2_MAX_STACK_SIZE_0_2eri 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_0_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_0_2eri 0
#define LIBINT2_MAX_STACK_SIZE_1_2eri 532
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_1_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_1_2eri 0
#define LIBINT2_MAX_STACK_SIZE_2_2eri 744
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_2_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_2_2eri 0
#define LIBINT2_MAX_STACK_SIZE_3_2eri 1859
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_3_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_3_2eri 0
#define LIBINT2_MAX_STACK_SIZE_4_2eri 2849
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_4_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_4_2eri 0
#define LIBINT2_MAX_STACK_SIZE_5_2eri 5398
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_5_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_5_2eri 0
#define LIBINT2_MAX_STACK_SIZE_6_2eri 9447
#define LIBINT2_MAX_VECTOR_STACK_SIZE_6_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_6_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_6_2eri 0
#define LIBINT2_MAX_STACK_SIZE_7_2eri 14141
#define LIBINT2_MAX_VECTOR_STACK_SIZE_7_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_7_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_7_2eri 0
#define LIBINT2_MAX_STACK_SIZE_8_2eri 22114
#define LIBINT2_MAX_VECTOR_STACK_SIZE_8_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_8_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_8_2eri 0
#define LIBINT2_MAX_STACK_SIZE_9_2eri 38884
#define LIBINT2_MAX_VECTOR_STACK_SIZE_9_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_9_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_9_2eri 0
#define LIBINT2_MAX_STACK_SIZE_10_2eri 65233
#define LIBINT2_MAX_VECTOR_STACK_SIZE_10_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_10_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_10_2eri 0
#endif

