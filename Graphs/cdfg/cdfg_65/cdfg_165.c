#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 758120036
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, double p_15[1][5], double p_17[1][4],
              unsigned short p_21[4][2][2], double p_25[1][1][2])
{
  unsigned long long v_23;
  int v_19;
  int v_13;
  unsigned long v_10;
  unsigned short v_8;
  long v_6;
  char v_4;
  unsigned long long v;
  long long result;
  v_23 = (unsigned long long)p_25[0][0][0];
  v_19 = (int)p_25[0][0][1];
  v_10 = (unsigned long)p;
  v_8 = (unsigned short)p_15[0][0];
  v_6 = (long)p_21[1][0][1];
  v = (unsigned long long)p_21[2][1][1];
  v_4 = (char)((unsigned long)(p_25[0][0][0] - ((double)v_6 + p_17[0][0])) * (
               (unsigned long)(p_25[0][0][1] - -59841.) + v_10));
  if (18446744073008232721ULL < ~ ((unsigned long long)p_21[0][0][0] % (
                                   ((unsigned long long)2.6283433065e+38f + v_23) + 753ULL))) {
    v_6 = (long)v_8;
    v = (unsigned long long)((double)(! v_4) / ((double)v_6 / 2.49373852076e+37 + 947.));
    result = (long long)v;
  }
  else {
    v_13 = (int)((double)((unsigned long long)v_4 + - v) * (- p_17[0][3] + (double)(
                                                            (long long)v_19 | -1066434335LL)));
    v_10 = (unsigned long)(- (- ((double)v_13 + p_15[0][2])));
    result = (long long)(((float)(v_10 * (unsigned long)p) + ((float)p - 2.67916189789e+38f)) + 970771648.f);
  }
  return result;
}

