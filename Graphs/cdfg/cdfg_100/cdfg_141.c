#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 527678507
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p[5][2], unsigned long long p_7, double p_9[2],
         double p_11, unsigned char p_15)
{
  long v_23;
  unsigned long long v_21;
  double v_19;
  short v_17;
  long v_13;
  short v_5;
  unsigned short v;
  long result;
  v_23 = (long)p_7;
  v_21 = 300156747ULL;
  v_19 = -6272261008.56;
  v_5 = (short)-31466;
  if ((unsigned long)(~ ((int)((char)((double)p_15 / -7003219549.7)) * -75)) <= ~ (
      (unsigned long)p_11 + (p[3][0] << ((int)v_5 & 31)))) {
    v_17 = (short)((p_7 / (p_7 + 511ULL)) % 878ULL - (((unsigned long long)v_19 + v_21) | 894938572ULL));
    v_13 = (long)507384165.234;
    result = (long)(~ (- (-12014LL)));
  }
  else {
    result = (long)p_15;
    v_17 = (short)(! (~ ((unsigned long)p_9[1] | p[3][0])));
    v_13 = (long)(((p[2][1] & 346753693UL) * (unsigned long)v_23) % 4294967272UL);
  }
  if ((unsigned long long)((double)(~ ((int)v_5 * 20172)) / (- (401.249165752 + p_11) + 865.)) <= 
      ~ p_7 % (unsigned long long)(((long)p_15 / (v_13 + 392L) << ((int)v_17 / 196 & 31)) + 860L)) {
    v = (unsigned short)((double)(- p_7) * - (p_9[0] + 80.));
    v_5 = (short)((unsigned long)((int)(4.29511223796e+37 / ((double)p[2][0] + 680.)) - (
                                  75 >> 1UL)) / (~ ((unsigned long)1.93026130452e+38f >> (
                                                    p[2][1] & 31UL)) + 163UL));
    result = (long)((~ p[0][0] + (unsigned long)(5812 ^ (int)v)) + (unsigned long)(
                    (result ^ (long)v_5) / 114L));
  }
  else {
    v_13 = (long)-963.388923055;
    result = - ((long)(p_9[1] / (p_11 + 317.)) / (v_13 + 30L));
  }
  return result;
}

