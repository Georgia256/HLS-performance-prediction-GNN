#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113027978
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, short p_4, long long p_6, unsigned long long p_8,
           float p_10)
{
  unsigned long v_29;
  float v_27;
  unsigned long v_25;
  short v_23;
  signed char v_21;
  unsigned short v_19;
  unsigned int v_17;
  int v_15;
  int v_13;
  int v;
  double result;
  v_29 = (unsigned long)p;
  v_27 = (float)p;
  v_25 = 4294909446UL;
  v_23 = p_4;
  v_21 = (signed char)p_4;
  v_19 = (unsigned short)p_10;
  v_17 = 254232888U;
  while ((unsigned long long)(~ (~ p_4)) != ((unsigned long long)(~ p_6 / (long long)(
                                                                  (int)(- v_21) + 502)) & - p_8)) {
    v_19 = (unsigned long long)v_27 % (((unsigned long long)v_25 - ((unsigned long long)v_23 ^ 18446744073709542499ULL)) + 232ULL);
    v_13 = (int)((unsigned long)(- ((double)p_4 * 6772804923.16)) * (
                 (v_29 + 4294931307UL) & (unsigned long)((int)p - -104)));
    v_17 = (unsigned int)(! v_13);
    v_21 = (signed char)-29;
  }
  while_0_break: ;
  if (((long long)((int)p / ((int)((signed char)-558.375549316f) + 521)) ^ p_6) > (long long)v_19) {
    v = 41239;
    result = (double)(! ((int)p_10 / (v + 286) - (int)p % (v + 6)));
    result = (double)(((long long)((int)p - (int)p_4) + - p_6) - (long long)(
                      result + (result + (double)p_8)));
  }
  else {
    v_15 = (int)(- (- p_6 + (long long)(v_17 / (unsigned int)((int)p + 1003))));
    v_13 = (int)(p_6 / ((long long)((float)p * p_10) + 606LL) & (((long long)v_15 ^ p_6) | ~ p_6));
    result = (double)v_13;
  }
  return result;
}

