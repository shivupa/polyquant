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
void OSVRRP0InBra_aB_p__0__i__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp202;
fp202 = inteval->WP_x[vi] * src0[((hsi*28+22)*1+lsi)*1];
target[((hsi*84+22)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp200;
fp200 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp199;
fp199 = fp200 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+23)*1+lsi)*1], fp199);
target[((hsi*84+23)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp196;
fp196 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp195;
fp195 = fp196 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+24)*1+lsi)*1], fp195);
target[((hsi*84+24)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp192;
fp192 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp191;
fp191 = fp192 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+25)*1+lsi)*1], fp191);
target[((hsi*84+25)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp188;
fp188 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+26)*1+lsi)*1], fp187);
target[((hsi*84+26)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp184;
fp184 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp183;
fp183 = fp184 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+27)*1+lsi)*1], fp183);
target[((hsi*84+27)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WP_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*84+28)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp179;
fp179 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp178);
target[((hsi*84+29)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_y[vi] * src0[((hsi*28+2)*1+lsi)*1];
target[((hsi*84+30)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp271;
fp271 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp270;
fp270 = fp271 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp270);
target[((hsi*84+0)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_y[vi] * src0[((hsi*28+4)*1+lsi)*1];
target[((hsi*84+32)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp169;
fp169 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp168;
fp168 = fp169 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+5)*1+lsi)*1], fp168);
target[((hsi*84+33)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp165;
fp165 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp164;
fp164 = fp165 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+6)*1+lsi)*1], fp164);
target[((hsi*84+34)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_y[vi] * src0[((hsi*28+7)*1+lsi)*1];
target[((hsi*84+35)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp160;
fp160 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+8)*1+lsi)*1], fp159);
target[((hsi*84+36)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp156;
fp156 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp155;
fp155 = fp156 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+9)*1+lsi)*1], fp155);
target[((hsi*84+37)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_y[vi] * src0[((hsi*28+10)*1+lsi)*1];
target[((hsi*84+38)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp150;
fp150 = fp151 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+11)*1+lsi)*1], fp150);
target[((hsi*84+39)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp147;
fp147 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+12)*1+lsi)*1], fp146);
target[((hsi*84+40)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp143;
fp143 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+13)*1+lsi)*1], fp142);
target[((hsi*84+41)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp174;
fp174 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp173;
fp173 = fp174 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp173);
target[((hsi*84+31)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp268;
fp268 = inteval->WP_x[vi] * src0[((hsi*28+1)*1+lsi)*1];
target[((hsi*84+1)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp267;
fp267 = inteval->WP_x[vi] * src0[((hsi*28+2)*1+lsi)*1];
target[((hsi*84+2)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp265;
fp265 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp264;
fp264 = fp265 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+3)*1+lsi)*1], fp264);
target[((hsi*84+3)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp261;
fp261 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp260;
fp260 = fp261 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+4)*1+lsi)*1], fp260);
target[((hsi*84+4)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp257;
fp257 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp256;
fp256 = fp257 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp255;
fp255 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+5)*1+lsi)*1], fp256);
target[((hsi*84+5)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp254;
fp254 = inteval->WP_x[vi] * src0[((hsi*28+6)*1+lsi)*1];
target[((hsi*84+6)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp252;
fp252 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp251;
fp251 = fp252 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+7)*1+lsi)*1], fp251);
target[((hsi*84+7)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = inteval->WP_x[vi] * src0[((hsi*28+8)*1+lsi)*1];
target[((hsi*84+8)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp247;
fp247 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp246;
fp246 = fp247 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+9)*1+lsi)*1], fp246);
target[((hsi*84+9)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp205;
fp205 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp204;
fp204 = fp205 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+21)*1+lsi)*1], fp204);
target[((hsi*84+21)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp239;
fp239 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp238;
fp238 = fp239 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+11)*1+lsi)*1], fp238);
target[((hsi*84+11)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp235;
fp235 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp234;
fp234 = fp235 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
LIBINT2_REALTYPE fp233;
fp233 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+12)*1+lsi)*1], fp234);
target[((hsi*84+12)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_x[vi] * src0[((hsi*28+13)*1+lsi)*1];
target[((hsi*84+13)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+14)*1+lsi)*1], fp229);
target[((hsi*84+14)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp226;
fp226 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp225;
fp225 = fp226 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+15)*1+lsi)*1], fp225);
target[((hsi*84+15)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp223;
fp223 = inteval->WP_x[vi] * src0[((hsi*28+16)*1+lsi)*1];
target[((hsi*84+16)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp221;
fp221 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp220;
fp220 = fp221 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+17)*1+lsi)*1], fp220);
target[((hsi*84+17)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp217;
fp217 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+18)*1+lsi)*1], fp216);
target[((hsi*84+18)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp213;
fp213 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+19)*1+lsi)*1], fp212);
target[((hsi*84+19)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp209;
fp209 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp208;
fp208 = fp209 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+20)*1+lsi)*1], fp208);
target[((hsi*84+20)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp243;
fp243 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp242;
fp242 = fp243 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*28+10)*1+lsi)*1], fp242);
target[((hsi*84+10)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp69;
fp69 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp68);
target[((hsi*84+64)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
target[((hsi*84+65)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp64;
fp64 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+10)*1+lsi)*1], fp63);
target[((hsi*84+66)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp60;
fp60 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp59);
target[((hsi*84+67)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
target[((hsi*84+68)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp54);
target[((hsi*84+69)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp50);
target[((hsi*84+70)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp47;
fp47 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+15)*1+lsi)*1], fp46);
target[((hsi*84+71)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp42);
target[((hsi*84+72)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp139;
fp139 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+14)*1+lsi)*1], fp138);
target[((hsi*84+42)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
target[((hsi*84+74)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp34;
fp34 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp33);
target[((hsi*84+75)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp29);
target[((hsi*84+76)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+21)*1+lsi)*1], fp25);
target[((hsi*84+77)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp21);
target[((hsi*84+78)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp17);
target[((hsi*84+79)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp13);
target[((hsi*84+80)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp9);
target[((hsi*84+81)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp5);
target[((hsi*84+82)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp1);
target[((hsi*84+83)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp39;
fp39 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp39 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp38);
target[((hsi*84+73)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp136;
fp136 = inteval->WP_y[vi] * src0[((hsi*28+15)*1+lsi)*1];
target[((hsi*84+43)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+16)*1+lsi)*1], fp133);
target[((hsi*84+44)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp130;
fp130 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+17)*1+lsi)*1], fp129);
target[((hsi*84+45)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp126;
fp126 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+18)*1+lsi)*1], fp125);
target[((hsi*84+46)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_y[vi] * src0[((hsi*28+19)*1+lsi)*1];
target[((hsi*84+47)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp121;
fp121 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+20)*1+lsi)*1], fp120);
target[((hsi*84+48)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+21)*1+lsi)*1], fp116);
target[((hsi*84+49)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp113;
fp113 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+22)*1+lsi)*1], fp112);
target[((hsi*84+50)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+23)*1+lsi)*1], fp108);
target[((hsi*84+51)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp73;
fp73 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp72);
target[((hsi*84+63)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+25)*1+lsi)*1], fp100);
target[((hsi*84+53)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+26)*1+lsi)*1], fp96);
target[((hsi*84+54)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp93;
fp93 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+27)*1+lsi)*1], fp92);
target[((hsi*84+55)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*84+56)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
target[((hsi*84+57)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp87;
fp87 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp86);
target[((hsi*84+58)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
target[((hsi*84+59)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
fp82 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp81);
target[((hsi*84+60)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
target[((hsi*84+61)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*28+6)*1+lsi)*1], fp76);
target[((hsi*84+62)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp105;
fp105 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*28+24)*1+lsi)*1], fp104);
target[((hsi*84+52)*1+lsi)*1] = fp103;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 273 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif