#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 567624060
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned int p_11[2], double p_13, float p_15,
        long long p_17[3])
{
  double v_21;
  unsigned short v_19;
  unsigned char v_8;
  int v_6;
  unsigned char v_4;
  double v;
  int result;
  v_21 = p;
  v_19 = (unsigned short)p_15;
  v_8 = (unsigned char)p;
  v_4 = (unsigned char)36;
  if (-8718222LL <= ((long long)v_19 | 218LL / (~ p_17[2] + 471LL))) {
    v_8 = (unsigned char)(907LL | (p_17[2] * (long long)p_15) % (long long)(
                                  (int)v_19 + 497));
    result = -47082;
    v_4 = (unsigned char)21;
  }
  else {
    result = ~ ((int)((unsigned short)((double)p_15 + p)) + (int)v_19);
    v_6 = (int)p_11[1];
    v_8 = (unsigned char)((double)((long)((int)p * 129063784) | ((long)v_8 | -34879L)) - 
                          (double)(! v_6) * (360705512. - v_21));
  }
  if ((float)((int)p_13 * ! (result * (int)v_8)) < p_15) {
    v_6 = (int)(~ v_8) % ((int)((unsigned char)((p - p) + p / 1.8446744073e+19)) + 963);
    v = (double)-397293L;
    result = (int)((39438L * (long)(3.34278578442e+38 * v)) % (long)(
                   ((int)v_4 + v_6) + 606));
  }
  else result = (int)p_11[0];
  return result;
}

