#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 593992084
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, double p_7, short p_13,
              unsigned short p_17[4][4], unsigned long long p_19)
{
  float v_25;
  unsigned char v_23;
  long v_21;
  long v_15;
  double v_11;
  double v_9;
  unsigned int v_5;
  double v;
  long long result;
  v_25 = (float)p_13;
  v_23 = (unsigned char)p_7;
  v_21 = (long)p_19;
  v_15 = 130679839L;
  v_11 = 435.032631055;
  v_9 = (double)p_13;
  v_5 = 3570688075U;
  v = (double)p_13;
  result = 239865144LL;
  if ((unsigned long)(- (! (-304439680L % (v_21 + 208L)))) > (unsigned long)v / (
                                                             ! (4082961145UL % (unsigned long)(
                                                                (int)p_13 + 96)) + 175UL)) {
    v_11 = (double)(! p);
    v = (double)((result / 403399896LL - (long long)v_11) % ((long long)(- v_23) * (
                                                             result % 179550472LL) + 958LL));
    v_5 = (unsigned int)(! (v_21 * (long)v) | (long)((119. - p_7) * (double)(
                                                     (int)((unsigned short)p_7) + (int)p_17[3][1])));
  }
  else {
    result = (long long)((unsigned long long)v_5 + ~ (p_19 / ((unsigned long long)v_9 + 126ULL)));
    v_15 = (long)result;
    v = (double)(((unsigned int)-1.57981612851e+38 - (unsigned int)v_25 * v_5) * (unsigned int)(
                 (float)((int)p_13 * (int)((short)p_7)) / 361.623168945f));
  }
  if ((unsigned long long)(! ((long long)(~ v_5) % -615757901LL)) >= 
      (unsigned long long)(769.910018948 / ((double)((int)p_17[0][0] | (int)p_13) + 574.)) / (
      p_19 + 191ULL)) {
    result = (long long)((unsigned long long)((int)((short)v_11) % ((int)p_13 + 530)) % 18446744073709514205ULL - (unsigned long long)(- v_15));
    v_9 = (double)(result + (long long)(p_7 * -654355229.));
    result = (long long)(- ((int)p >> ((int)((signed char)v) & 7)) % (
                         (int)(((double)v_5 / (p_7 + 1015.)) * (p_7 + v_9)) + 212));
  }
  else result = 680264921LL;
  return result;
}

