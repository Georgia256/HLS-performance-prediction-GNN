#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1029332341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned long long p_4, short p_11,
              unsigned short p_13, long long p_15)
{
  int v_25;
  long v_23;
  long long v_21;
  short v_19;
  unsigned long long v_17;
  float v_9;
  unsigned long v_7;
  int v;
  long long result;
  v_25 = 32819;
  v_23 = (long)p_15;
  v_17 = 13756ULL;
  v_9 = (float)p_15;
  v_7 = 430574841UL;
  result = -25044LL;
  if (((p_4 - (unsigned long long)v_25) * (unsigned long long)v_25) / (
      - (p_4 + p_4) + 707ULL) <= 96238480ULL) {
    v = (int)((~ p_4 - (p - (unsigned long long)p_11)) % (unsigned long long)(
              (long long)v_9 % ((-15725LL + result) + 52LL) + 805LL));
    v_7 = (unsigned long)(((result + -22376LL) / 3291807690LL) % (long long)(
                          (int)p_13 + 31));
    v_9 = (float)4294942418UL;
  }
  else {
    v_19 = (short)((double)(((int)p_11 + (int)p_11) ^ (int)(- v_9)) + -4.12020847178e+37);
    v_21 = (long long)v_23;
    v = (int)(((24057LL - p_15) - 44679LL) % (((long long)((double)v_17 - -560.226834725) - 
                                               (long long)v_19 % (v_21 + 165LL)) + 314LL));
  }
  if ((p_4 * (unsigned long long)6.41350226195e+37f >> (~ v & 63)) + 
      (unsigned long long)(~ v_7) * (p * (unsigned long long)v_9) != (unsigned long long)(- p_11)) 
    result = (long long)(~ (unsigned short)41268);
  else result = (long long)(~ p);
  return result;
}

