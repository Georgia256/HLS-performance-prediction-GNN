#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 811670159
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, signed char p_5[3][3][4], int p_7[3][3][3],
          unsigned long long p_9, unsigned short p_11[5][4])
{
  unsigned long long v_21;
  float v_19;
  unsigned long v_17;
  long long v_15;
  int v_13;
  double v;
  short result;
  v_21 = p_9;
  v_17 = (unsigned long)p;
  v_15 = (long long)p_7[0][2][2];
  v_13 = -9322;
  result = (short)p_7[1][0][0];
  while (! (- (p_9 + (unsigned long long)1.73586990607e+38)) <= (unsigned long long)(! (
         ((int)p_5[0][2][0] >> (v_15 & 7LL)) % 91))) {
    v_19 = v_21 / (((unsigned long long)v_17 & 18446744073709523345ULL) + 238ULL);
    v_21 = (unsigned long long)(0 ^ (int)(v_19 / ((float)p_5[2][2][0] + 934.f)) / -10185);
    result = (short)(((int)p - p_7[1][0][2]) * ((int)p | (int)p_5[2][0][2]) >> (
                     ((int)(- p_11[0][2]) + p_7[2][2][2] * -3129) & 31));
    v_15 = (long long)v_13;
  }
  while_0_break: ;
  if (- ((long long)p_5[2][2][3]) < (long long)(- (14 - (int)result) & (
                                                ((int)p_5[0][0][3] - 770745885) + (
                                                (int)p_11[0][3] & v_13)))) {
    v = (double)(~ ((int)(~ p) + (int)p_5[2][1][2]));
    result = (short)((unsigned long long)v + 950440327ULL);
  }
  else {
    v = (double)(! (p_9 / (unsigned long long)((int)p_11[3][2] + 368) >> (
                    (int)(! p) & 63)));
    v = (double)((unsigned int)(- (-12 / (p_7[1][1][2] + 752))) - (unsigned int)(
                                                                  (double)p_7[1][0][0] / (
                                                                  v + 584.)) * 623807416U);
    result = (short)(v + (double)(- (! p)));
  }
  return result;
}

