#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 71533385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, double p_9[5][4], float p_17, float p_19,
          float p_23[4][1])
{
  short v_31;
  long v_29;
  short v_27;
  float v_25;
  int v_21;
  double v_15;
  double v_13;
  long long v_11;
  unsigned short v_7;
  double v_5;
  double v;
  float result;
  v_31 = (short)p_9[4][1];
  v_29 = 417198323L;
  v_27 = (short)p;
  v_25 = (float)p;
  v_21 = (int)p_23[1][0];
  v_15 = -600.480915356;
  v_11 = (long long)p_17;
  v_7 = (unsigned short)24643;
  v = 128.945412135;
  while (- ((double)p_23[1][0] + v) * (double)(- v_25) < (double)(((int)((signed char)p_23[2][0]) / -114) * (int)v_27 - (int)p_23[2][0])) {
    v_21 = v_29 % 66L;
    v_27 = (short)((unsigned int)((int)((double)v_31 / -85.9609684174) + (
                                  104 - (int)((char)v_15))) % 4294952933U);
    v_11 = (long long)v_21;
    v = (double)((173ULL | (unsigned long long)p_17) * (unsigned long long)v_7);
  }
  while_0_break: ;
  if ((unsigned long long)p_19 > 55737ULL * ((unsigned long long)(v / (double)(
                                                                  p_19 + 3.f)) * (
                                             51563ULL / (unsigned long long)(
                                             v_21 + 957)))) {
    v_7 = (unsigned short)((4334LL % (122LL % (v_11 + 134LL) + 586LL)) * 89633145LL);
    v_5 = (double)(~ (52420 - (int)v_7)) * (p_9[4][1] - (double)p * -2916220270.05);
    result = (float)((double)p + (v * -693494772. + v / (v_5 + 174.)));
  }
  else {
    v_13 = (double)(- p_19);
    v_15 = (double)p_17;
    result = (float)(- ((v_13 - v_15) + (double)p_17));
  }
  return result;
}

