#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 296890657
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[4][1], unsigned char p_4, unsigned long p_6,
         double p_9, signed char p_21)
{
  unsigned long long v_29;
  long v_27;
  long long v_25;
  short v_23;
  unsigned char v_19;
  signed char v_17;
  unsigned char v_15;
  long long v_13;
  long long v_11;
  float v;
  long result;
  v_29 = (unsigned long long)p_4;
  v_27 = -10239L;
  v_23 = (short)p_6;
  v_17 = (signed char)-49;
  v_15 = (unsigned char)p[1][0];
  v_13 = (long long)p[1][0];
  v_11 = 659446793LL;
  v = (float)p[3][0];
  if ((unsigned long)(! v_27 ^ (long)((int)v_15 - (int)v_17)) % 51207UL >= 
      (((unsigned long)p[1][0] & p_6) ^ (unsigned long)(-388411240L / (
                                                        v_27 + 928L))) - (unsigned long)(- (
      p[3][0] + (unsigned int)v_17))) {
    v_19 = (unsigned char)(~ (((unsigned long)v_23 * p_6) * 38UL));
    v_15 = (unsigned char)((unsigned long)(((double)v_19 / 1.93623780084e+38) / 3724661835.) ^ 
                           (unsigned long)p_21 / (p_6 + 740UL));
    v = (float)v_17;
  }
  else {
    v_25 = (long long)(((185883042L / (long)((int)p_4 + 962)) * 39645L) / (
                       - (~ v_27) + 774L));
    v_13 = (long long)((unsigned long long)(- (p_9 - (double)p_21)) * (
                       26617ULL ^ (unsigned long long)v_27 / (v_29 + 732ULL)));
    v = (float)(((double)(p_6 / (unsigned long)((int)p_21 + 92)) / (p_9 * -33.2394617332 + 31.)) / (
                (double)(v_25 & (long long)(- v)) + 74.));
  }
  if ((unsigned long long)((((unsigned long)p_4 & p_6) / (p_6 + 967UL)) % (
                           (unsigned long)(((double)v + p_9) - (double)v_11) + 808UL)) != 
      ((unsigned long long)(- v_13) / 18446744072853657944ULL) / (unsigned long long)(
      (int)v_15 + 926)) result = (long)(~ (p[3][0] << 12LL) & (unsigned int)(- p_4));
  else result = 0L;
  return result;
}

