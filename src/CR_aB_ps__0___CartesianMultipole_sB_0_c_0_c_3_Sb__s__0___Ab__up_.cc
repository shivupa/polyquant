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
void CR_aB_ps__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src2[((hsi*44+6)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src2[((hsi*44+5)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_z[vi], fp132, fp131);
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src2[((hsi*44+4)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->BO_z[vi], fp133, fp132);
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->BO_z[vi], fp136, fp134);
LIBINT2_REALTYPE fp143;
fp143 = inteval->BO_z[vi] * fp140;
LIBINT2_REALTYPE fp139;
fp139 = inteval->BO_z[vi] * fp134;
LIBINT2_REALTYPE fp130;
fp130 = inteval->BO_z[vi] * fp131;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src2[((hsi*44+7)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp128 + fp130;
LIBINT2_REALTYPE fp138;
fp138 = fp129 + fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp138 + fp143;
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src1[((hsi*44+12)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = 0.0000000000000000e+00 + src0[((hsi*44+24)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp189 * fp180;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp142;
target[((hsi*66+32)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*44+18)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*44+17)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp35);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*44+16)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp37, fp36);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_z[vi], fp40, fp38);
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_z[vi] * fp44;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*44+19)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp32 + fp34;
LIBINT2_REALTYPE fp42;
fp42 = fp33 + fp43;
LIBINT2_REALTYPE fp46;
fp46 = fp42 + fp47;
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + src1[((hsi*44+0)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp189 * fp186;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp46;
target[((hsi*66+31)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src2[((hsi*44+2)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src2[((hsi*44+1)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->BO_z[vi], fp164, fp163);
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + src2[((hsi*44+0)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->BO_z[vi], fp165, fp164);
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->BO_z[vi], fp168, fp166);
LIBINT2_REALTYPE fp175;
fp175 = inteval->BO_z[vi] * fp172;
LIBINT2_REALTYPE fp171;
fp171 = inteval->BO_z[vi] * fp166;
LIBINT2_REALTYPE fp162;
fp162 = inteval->BO_z[vi] * fp163;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src2[((hsi*44+3)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp160 + fp162;
LIBINT2_REALTYPE fp170;
fp170 = fp161 + fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp170 + fp175;
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src1[((hsi*44+16)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp189 * fp178;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp174;
target[((hsi*66+30)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src2[((hsi*44+30)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src2[((hsi*44+29)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp52, fp51);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*44+28)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_z[vi], fp53, fp52);
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_z[vi], fp56, fp54);
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_z[vi] * fp60;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_z[vi] * fp51;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*44+31)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp48 + fp50;
LIBINT2_REALTYPE fp58;
fp58 = fp49 + fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp58 + fp63;
LIBINT2_REALTYPE fp194;
fp194 = 0.0000000000000000e+00 + src0[((hsi*44+4)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + src1[((hsi*44+8)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp194 * fp182;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp62;
target[((hsi*66+29)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + src1[((hsi*44+4)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + src0[((hsi*44+8)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp192 * fp184;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp62;
target[((hsi*66+28)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + src0[((hsi*44+0)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp196 * fp180;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp62;
target[((hsi*66+27)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src0[((hsi*44+12)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp190 * fp186;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp62;
target[((hsi*66+26)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src2[((hsi*44+10)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src2[((hsi*44+9)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_z[vi], fp100, fp99);
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src2[((hsi*44+8)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BO_z[vi], fp101, fp100);
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_z[vi], fp104, fp102);
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_z[vi] * fp108;
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_z[vi] * fp102;
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_z[vi] * fp99;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src2[((hsi*44+11)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp96 + fp98;
LIBINT2_REALTYPE fp106;
fp106 = fp97 + fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp106 + fp111;
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src1[((hsi*44+28)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp194 * fp179;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp110;
target[((hsi*66+25)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp192 * fp179;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp142;
target[((hsi*66+24)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src2[((hsi*44+14)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*44+13)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_z[vi], fp68, fp67);
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src2[((hsi*44+12)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_z[vi], fp69, fp68);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_z[vi], fp72, fp70);
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_z[vi] * fp76;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_z[vi] * fp70;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_z[vi] * fp67;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src2[((hsi*44+15)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp64 + fp66;
LIBINT2_REALTYPE fp74;
fp74 = fp65 + fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp74 + fp79;
LIBINT2_REALTYPE fp283;
fp283 = fp196 * fp179;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp78;
target[((hsi*66+23)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp190 * fp179;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp174;
target[((hsi*66+22)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + src0[((hsi*44+28)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = fp191 * fp184;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp110;
target[((hsi*66+21)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp191 * fp182;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp142;
target[((hsi*66+20)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp191 * fp186;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp78;
target[((hsi*66+19)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp191 * fp180;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp174;
target[((hsi*66+18)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + src0[((hsi*44+40)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp197 * fp186;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp174;
target[((hsi*66+0)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src1[((hsi*44+40)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = fp196 * fp185;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp174;
target[((hsi*66+1)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src2[((hsi*44+42)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src2[((hsi*44+41)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->BO_z[vi], fp148, fp147);
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src2[((hsi*44+40)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->BO_z[vi], fp149, fp148);
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->BO_z[vi], fp152, fp150);
LIBINT2_REALTYPE fp159;
fp159 = inteval->BO_z[vi] * fp156;
LIBINT2_REALTYPE fp155;
fp155 = inteval->BO_z[vi] * fp150;
LIBINT2_REALTYPE fp146;
fp146 = inteval->BO_z[vi] * fp147;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src2[((hsi*44+43)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp144 + fp146;
LIBINT2_REALTYPE fp154;
fp154 = fp145 + fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp154 + fp159;
LIBINT2_REALTYPE fp325;
fp325 = fp196 * fp186;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp158;
target[((hsi*66+2)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + src0[((hsi*44+36)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp195 * fp184;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp174;
target[((hsi*66+3)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp321;
fp321 = fp195 * fp186;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp142;
target[((hsi*66+4)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + src1[((hsi*44+36)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp194 * fp183;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp174;
target[((hsi*66+5)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp317;
fp317 = fp196 * fp183;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp142;
target[((hsi*66+6)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src2[((hsi*44+38)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src2[((hsi*44+37)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BO_z[vi], fp116, fp115);
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src2[((hsi*44+36)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_z[vi], fp117, fp116);
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_z[vi], fp120, fp118);
LIBINT2_REALTYPE fp127;
fp127 = inteval->BO_z[vi] * fp124;
LIBINT2_REALTYPE fp123;
fp123 = inteval->BO_z[vi] * fp118;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_z[vi] * fp115;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src2[((hsi*44+39)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp112 + fp114;
LIBINT2_REALTYPE fp122;
fp122 = fp113 + fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp122 + fp127;
LIBINT2_REALTYPE fp315;
fp315 = fp194 * fp186;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp126;
target[((hsi*66+7)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src2[((hsi*44+34)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src2[((hsi*44+33)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_z[vi], fp84, fp83);
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src2[((hsi*44+32)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_z[vi], fp85, fp84);
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_z[vi], fp88, fp86);
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_z[vi] * fp92;
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_z[vi] * fp86;
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_z[vi] * fp83;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*44+35)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp80 + fp82;
LIBINT2_REALTYPE fp90;
fp90 = fp81 + fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp90 + fp95;
LIBINT2_REALTYPE fp295;
fp295 = fp194 * fp184;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp94;
target[((hsi*66+17)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp193;
fp193 = 0.0000000000000000e+00 + src0[((hsi*44+32)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp193 * fp182;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp174;
target[((hsi*66+9)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp309;
fp309 = fp193 * fp186;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp110;
target[((hsi*66+10)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp307;
fp307 = fp193 * fp184;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp142;
target[((hsi*66+11)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src1[((hsi*44+32)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp192 * fp181;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp174;
target[((hsi*66+12)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp303;
fp303 = fp196 * fp181;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp110;
target[((hsi*66+13)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp301;
fp301 = fp194 * fp181;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp142;
target[((hsi*66+14)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp299;
fp299 = fp192 * fp186;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp94;
target[((hsi*66+15)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp297;
fp297 = fp196 * fp182;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp94;
target[((hsi*66+16)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp313;
fp313 = fp196 * fp184;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp126;
target[((hsi*66+8)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp199;
fp199 = fp190 * fp180;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp46;
target[((hsi*66+65)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp190 * fp178;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp78;
target[((hsi*66+64)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp192 * fp178;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp46;
target[((hsi*66+63)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src0[((hsi*44+16)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp188 * fp180;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp78;
target[((hsi*66+62)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp188 * fp182;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp46;
target[((hsi*66+61)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp188 * fp178;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp110;
target[((hsi*66+60)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*44+22)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*44+21)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp4, fp3);
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*44+20)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp5, fp4);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp8, fp6);
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*44+23)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp10;
fp10 = fp1 + fp11;
LIBINT2_REALTYPE fp14;
fp14 = fp10 + fp15;
LIBINT2_REALTYPE fp211;
fp211 = fp192 * fp180;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp14;
target[((hsi*66+59)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp190 * fp182;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp14;
target[((hsi*66+58)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp194 * fp178;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp14;
target[((hsi*66+57)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp188 * fp184;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp14;
target[((hsi*66+56)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src1[((hsi*44+20)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp192 * fp176;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp78;
target[((hsi*66+55)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp190 * fp176;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp110;
target[((hsi*66+54)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp194 * fp176;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp46;
target[((hsi*66+53)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp188 * fp176;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp142;
target[((hsi*66+52)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp196 * fp176;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp14;
target[((hsi*66+51)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp263;
fp263 = fp189 * fp184;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp78;
target[((hsi*66+33)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp261;
fp261 = fp189 * fp182;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp110;
target[((hsi*66+34)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src1[((hsi*44+24)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp188 * fp177;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp174;
target[((hsi*66+35)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp257;
fp257 = fp196 * fp177;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp46;
target[((hsi*66+36)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = fp190 * fp177;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp142;
target[((hsi*66+37)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp253;
fp253 = fp194 * fp177;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp78;
target[((hsi*66+38)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp251;
fp251 = fp192 * fp177;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp110;
target[((hsi*66+39)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*44+26)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*44+25)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp19);
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*44+24)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp20);
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp24, fp22);
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*44+27)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp16 + fp18;
LIBINT2_REALTYPE fp26;
fp26 = fp17 + fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp26 + fp31;
LIBINT2_REALTYPE fp249;
fp249 = fp188 * fp186;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp30;
target[((hsi*66+40)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + src0[((hsi*44+20)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp187 * fp182;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp78;
target[((hsi*66+50)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp245;
fp245 = fp190 * fp184;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp30;
target[((hsi*66+42)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp243;
fp243 = fp194 * fp180;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp30;
target[((hsi*66+43)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp241;
fp241 = fp192 * fp182;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp30;
target[((hsi*66+44)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp239;
fp239 = fp187 * fp176;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp174;
target[((hsi*66+45)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp237;
fp237 = fp187 * fp186;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp14;
target[((hsi*66+46)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp235;
fp235 = fp187 * fp178;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp142;
target[((hsi*66+47)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp233;
fp233 = fp187 * fp184;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp46;
target[((hsi*66+48)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp231;
fp231 = fp187 * fp180;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp110;
target[((hsi*66+49)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp247;
fp247 = fp196 * fp178;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp30;
target[((hsi*66+41)*1+lsi)*1] = fp246;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 330 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif