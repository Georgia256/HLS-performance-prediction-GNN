#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 251251074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned char p_7, double p_9[1][5], double p_11,
          unsigned short p_17)
{
  float v_27;
  double v_25;
  unsigned short v_23;
  short v_21;
  unsigned long long v_19;
  float v_15;
  short v_13;
  unsigned long v_5;
  unsigned int v;
  short result;
  v_27 = 7458033152.f;
  v_25 = 9996905180.32;
  v_23 = (unsigned short)p_11;
  v_21 = (short)p_17;
  v_19 = 18446744073505792158ULL;
  v_13 = (short)p_9[0][3];
  v_5 = 59866UL;
  if ((unsigned long long)v_23 <= v_19 % (v_19 + 119ULL) - ((unsigned long long)p_7 + 608572412ULL)) {
    result = (short)(~ p_7);
    v_19 = (unsigned long long)(((unsigned int)result * 3363865166U + (unsigned int)(
                                 (int)v_21 << 1UL)) % ((unsigned int)p_11 + 558U));
    v_15 = (float)((v_19 % (v_19 + 964ULL)) / (unsigned long long)((int)(- v_21) + 959) + 38ULL);
  }
  else {
    v_23 = (unsigned short)((int)(v_25 / (v_25 + 662.) + 53024.) / ((int)(
                                                                    47878. - p_9[0][4]) / (
                                                                    (
                                                                    (int)p_7 + (int)((unsigned char)v_27)) + 400) + 997));
    v_13 = (short)(56407 - (int)v_23);
    v_15 = (float)863;
  }
  if ((unsigned long long)v_13 < (unsigned long long)(-123894623. * p_9[0][2]) - - (- v_19)) {
    v = (unsigned int)((((int)p_7 - (int)((unsigned char)p_9[0][2])) * (int)(
                        p_11 + p)) / ((int)v_13 % ((int)((short)(831716672.f + v_15)) + 761) + 811));
    result = (short)(0 % (unsigned long long)(v_5 + 689UL));
    result = (short)((v ^ (unsigned int)((int)((unsigned short)p) * 23623)) * (unsigned int)result);
  }
  else result = (short)p_17;
  return result;
}

