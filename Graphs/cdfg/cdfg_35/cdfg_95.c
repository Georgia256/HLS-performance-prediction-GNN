#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1035078214
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, signed char p_7, char p_13, double p_15, int p_21)
{
  char v_23;
  char v_19;
  signed char v_17;
  unsigned char v_11;
  long long v_9;
  float v_5;
  long long v;
  unsigned char result;
  v_23 = (char)86;
  v_19 = (char)-62;
  v_17 = (signed char)11;
  v_11 = (unsigned char)p_15;
  v_9 = 19491LL;
  v_5 = (float)p_21;
  result = (unsigned char)p_21;
  while (p_15 * (p_15 * (double)v_11) - -1.42785445767e+38 > (double)(
         (int)(- (- p_15)) ^ ! ((int)v_17 >> (p & 7)))) {
    v = (int)v_19 + 2939;
    v = (long long)(-2844901120.f * (float)(35869ULL & (unsigned long long)p_7)) + (
        ((long long)p_21 + v) - (long long)((int)p_13 + (int)v_23));
    v_9 = (long long)((((double)v - -6629203802.68) / ((p_15 - (double)v_17) + 183.)) / (
                      (double)p_7 + 933.));
    v_11 = (unsigned char)(p_15 + (double)p_7);
  }
  while_0_break: ;
  if ((unsigned long long)(- (- v_11)) - (304121680ULL + (unsigned long long)2.3005189229e+38f) >= (unsigned long long)(
      ((long long)((int)p_13 / 178) + (v_9 - 3711337763LL)) - (long long)(~ p_7))) 
    result = (unsigned char)165;
  else {
    v = (long long)p_7;
    v = ~ ((long long)(v_5 + (float)p_7) - v_9 % (v + 56LL));
    result = (unsigned char)(((float)result + -8221031424.f * (float)p) / (
                             (float)v + 716.f));
  }
  return result;
}

