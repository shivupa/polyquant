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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_l__0___CartesianMultipole_sB_0_c_0_c_2_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src2[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src2[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_z[vi], fp90, fp89);
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_z[vi] * fp92;
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_z[vi] * fp89;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src2[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp87;
fp87 = fp85 + fp88;
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src0[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp152 * fp139;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp87;
target[((hsi*135+35)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src2[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src2[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_z[vi], fp118, fp117);
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src2[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_z[vi], fp119, fp118);
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_z[vi], fp122, fp120);
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src0[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = fp151 * fp133;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp124;
target[((hsi*135+36)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = fp150 * fp132;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp124;
target[((hsi*135+37)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp116;
fp116 = inteval->BO_z[vi] * fp120;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_z[vi] * fp117;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src2[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp112 + fp114;
LIBINT2_REALTYPE fp115;
fp115 = fp113 + fp116;
LIBINT2_REALTYPE fp355;
fp355 = fp150 * fp133;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp115;
target[((hsi*135+38)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp62, fp61);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp63, fp62);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_z[vi], fp66, fp64);
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = fp159 * fp133;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp68;
target[((hsi*135+39)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = fp158 * fp132;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp68;
target[((hsi*135+40)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp64;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp61;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp349;
fp349 = fp158 * fp133;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp59;
target[((hsi*135+41)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src2[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BO_z[vi], fp91, fp90);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_z[vi], fp94, fp92);
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src0[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = fp155 * fp133;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp96;
target[((hsi*135+42)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp154 * fp132;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp96;
target[((hsi*135+43)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp343;
fp343 = fp154 * fp133;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp87;
target[((hsi*135+44)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp47);
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp48);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp52, fp50);
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp151 * fp143;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp54;
target[((hsi*135+45)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = fp150 * fp142;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp54;
target[((hsi*135+46)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp337;
fp337 = fp150 * fp143;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp45;
target[((hsi*135+47)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = fp159 * fp135;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp54;
target[((hsi*135+48)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp158 * fp134;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp54;
target[((hsi*135+49)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src0[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp431;
fp431 = fp161 * fp143;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp124;
target[((hsi*135+0)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp147 * fp129;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp124;
target[((hsi*135+66)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp148 * fp139;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp59;
target[((hsi*135+65)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp148 * fp138;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp68;
target[((hsi*135+64)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp149 * fp139;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp68;
target[((hsi*135+63)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp148 * fp135;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp87;
target[((hsi*135+62)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp148 * fp134;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp96;
target[((hsi*135+61)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp149 * fp135;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp96;
target[((hsi*135+60)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp331;
fp331 = fp158 * fp135;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp45;
target[((hsi*135+50)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp33);
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp34);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp38, fp36);
LIBINT2_REALTYPE fp315;
fp315 = fp148 * fp142;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp40;
target[((hsi*135+58)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp149 * fp143;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp40;
target[((hsi*135+57)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp148 * fp131;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp115;
target[((hsi*135+56)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp148 * fp130;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp124;
target[((hsi*135+55)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp149 * fp131;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp124;
target[((hsi*135+54)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp154 * fp139;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp45;
target[((hsi*135+53)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp154 * fp138;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp54;
target[((hsi*135+52)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp155 * fp139;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp54;
target[((hsi*135+51)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp313;
fp313 = fp148 * fp143;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp31;
target[((hsi*135+59)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = fp154 * fp136;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp124;
target[((hsi*135+16)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp401;
fp401 = fp155 * fp137;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp124;
target[((hsi*135+15)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = fp156 * fp143;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp87;
target[((hsi*135+14)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp156 * fp142;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp96;
target[((hsi*135+13)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = fp157 * fp143;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp96;
target[((hsi*135+12)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp156 * fp139;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp115;
target[((hsi*135+11)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp156 * fp138;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp124;
target[((hsi*135+10)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp363;
fp363 = fp152 * fp138;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp96;
target[((hsi*135+34)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src2[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src2[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BO_z[vi], fp104, fp103);
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_z[vi] * fp106;
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_z[vi] * fp103;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src2[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp98 + fp100;
LIBINT2_REALTYPE fp101;
fp101 = fp99 + fp102;
LIBINT2_REALTYPE fp415;
fp415 = fp158 * fp143;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp101;
target[((hsi*135+8)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src2[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_z[vi], fp105, fp104);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_z[vi], fp108, fp106);
LIBINT2_REALTYPE fp417;
fp417 = fp158 * fp142;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp110;
target[((hsi*135+7)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp159 * fp143;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp110;
target[((hsi*135+6)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = fp158 * fp141;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp115;
target[((hsi*135+5)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp423;
fp423 = fp158 * fp140;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp124;
target[((hsi*135+4)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp159 * fp141;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp124;
target[((hsi*135+3)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = fp160 * fp143;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp115;
target[((hsi*135+2)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp160 * fp142;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp124;
target[((hsi*135+1)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp413;
fp413 = fp157 * fp139;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp124;
target[((hsi*135+9)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src0[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = fp153 * fp139;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp96;
target[((hsi*135+33)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp152 * fp143;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp59;
target[((hsi*135+32)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp152 * fp142;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp68;
target[((hsi*135+31)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp153 * fp143;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp68;
target[((hsi*135+30)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp152 * fp135;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp115;
target[((hsi*135+29)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp152 * fp134;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp124;
target[((hsi*135+28)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp153 * fp135;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp124;
target[((hsi*135+27)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp397;
fp397 = fp154 * fp137;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp115;
target[((hsi*135+17)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src2[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_z[vi], fp76, fp75);
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src2[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_z[vi], fp77, fp76);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_z[vi], fp80, fp78);
LIBINT2_REALTYPE fp381;
fp381 = fp158 * fp138;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp82;
target[((hsi*135+25)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp159 * fp139;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp82;
target[((hsi*135+24)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_z[vi] * fp78;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_z[vi] * fp75;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src2[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp385;
fp385 = fp154 * fp143;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp73;
target[((hsi*135+23)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp154 * fp142;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp82;
target[((hsi*135+22)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp155 * fp143;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp82;
target[((hsi*135+21)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp158 * fp137;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp87;
target[((hsi*135+20)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp158 * fp136;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp96;
target[((hsi*135+19)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp159 * fp137;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp96;
target[((hsi*135+18)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp379;
fp379 = fp158 * fp139;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp73;
target[((hsi*135+26)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp5);
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp6);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp8);
LIBINT2_REALTYPE fp197;
fp197 = fp147 * fp139;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp12;
target[((hsi*135+117)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp150 * fp127;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp59;
target[((hsi*135+116)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp150 * fp126;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp68;
target[((hsi*135+115)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp151 * fp127;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp68;
target[((hsi*135+114)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp154 * fp127;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp31;
target[((hsi*135+113)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp154 * fp126;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp40;
target[((hsi*135+112)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp155 * fp127;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp40;
target[((hsi*135+111)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp146 * fp128;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp124;
target[((hsi*135+67)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp213;
fp213 = fp146 * fp126;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp96;
target[((hsi*135+109)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp147 * fp127;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp96;
target[((hsi*135+108)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp217;
fp217 = fp158 * fp127;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp3;
target[((hsi*135+107)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp158 * fp126;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp12;
target[((hsi*135+106)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp159 * fp127;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp12;
target[((hsi*135+105)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src0[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp144 * fp135;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp59;
target[((hsi*135+104)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp144 * fp134;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp68;
target[((hsi*135+103)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src0[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp145 * fp135;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp68;
target[((hsi*135+102)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp211;
fp211 = fp146 * fp127;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp87;
target[((hsi*135+110)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp163;
fp163 = fp150 * fp131;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp31;
target[((hsi*135+134)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp150 * fp130;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp40;
target[((hsi*135+133)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp151 * fp131;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp40;
target[((hsi*135+132)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp146 * fp135;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp31;
target[((hsi*135+131)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp146 * fp134;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp40;
target[((hsi*135+130)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp147 * fp135;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp40;
target[((hsi*135+129)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp146 * fp131;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp59;
target[((hsi*135+128)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp195;
fp195 = fp146 * fp138;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp12;
target[((hsi*135+118)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp179;
fp179 = fp147 * fp131;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp68;
target[((hsi*135+126)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp150 * fp135;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp3;
target[((hsi*135+125)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp150 * fp134;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp12;
target[((hsi*135+124)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp151 * fp135;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp12;
target[((hsi*135+123)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp154 * fp131;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp3;
target[((hsi*135+122)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp154 * fp130;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp12;
target[((hsi*135+121)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp155 * fp131;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp12;
target[((hsi*135+120)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp146 * fp139;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp3;
target[((hsi*135+119)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp177;
fp177 = fp146 * fp130;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp68;
target[((hsi*135+127)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp19);
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp265;
fp265 = fp158 * fp131;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp17;
target[((hsi*135+83)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp20);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp24, fp22);
LIBINT2_REALTYPE fp267;
fp267 = fp158 * fp130;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp26;
target[((hsi*135+82)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp159 * fp131;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp26;
target[((hsi*135+81)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp146 * fp143;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp17;
target[((hsi*135+80)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp146 * fp142;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp26;
target[((hsi*135+79)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp147 * fp143;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp26;
target[((hsi*135+78)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp154 * fp129;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp59;
target[((hsi*135+77)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp229;
fp229 = fp144 * fp139;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp31;
target[((hsi*135+101)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp281;
fp281 = fp155 * fp129;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp68;
target[((hsi*135+75)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp150 * fp129;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp87;
target[((hsi*135+74)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp150 * fp128;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp96;
target[((hsi*135+73)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp151 * fp129;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp96;
target[((hsi*135+72)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp158 * fp129;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp31;
target[((hsi*135+71)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp158 * fp128;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp40;
target[((hsi*135+70)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp159 * fp129;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp40;
target[((hsi*135+69)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp146 * fp129;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp115;
target[((hsi*135+68)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp279;
fp279 = fp154 * fp128;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp68;
target[((hsi*135+76)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp231;
fp231 = fp144 * fp138;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp40;
target[((hsi*135+100)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp145 * fp139;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp40;
target[((hsi*135+99)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp144 * fp131;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp87;
target[((hsi*135+98)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp144 * fp130;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp96;
target[((hsi*135+97)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp145 * fp131;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp96;
target[((hsi*135+96)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp144 * fp143;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp3;
target[((hsi*135+95)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp144 * fp142;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp12;
target[((hsi*135+94)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp263;
fp263 = fp151 * fp139;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp26;
target[((hsi*135+84)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp247;
fp247 = fp144 * fp127;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp115;
target[((hsi*135+92)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp144 * fp126;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp124;
target[((hsi*135+91)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp145 * fp127;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp124;
target[((hsi*135+90)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp154 * fp135;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp17;
target[((hsi*135+89)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp154 * fp134;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp26;
target[((hsi*135+88)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp155 * fp135;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp26;
target[((hsi*135+87)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp150 * fp139;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp17;
target[((hsi*135+86)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp150 * fp138;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp26;
target[((hsi*135+85)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp245;
fp245 = fp145 * fp143;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp12;
target[((hsi*135+93)*1+lsi)*1] = fp244;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 432 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif