#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 754771216
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p)
{
  int v_15;
  unsigned short v_13;
  int v_11;
  double v_8;
  unsigned long v_6;
  short v_4;
  long v;
  float result;
  v_15 = -972889643;
  v_13 = (unsigned short)p;
  v_11 = 221019328;
  v_8 = 9368705640.29;
  v_6 = (unsigned long)p;
  v_4 = (short)p;
  result = -7360588800.f;
  v = (long)(((571832098UL << ((unsigned long)-1.79132943545e+38f & 31UL)) >> (
              (unsigned long)(result - 9497750528.f) & 31UL)) - (unsigned long)(! (
             (int)p + (int)p)));
  while ((unsigned long)v < ~ ((unsigned long)v_4 * v_6) + (unsigned long)(
                            (int)((char)v_8) - (int)p)) {
    v_6 = v_11 / 49864;
    v_8 = (double)((int)((char)((double)result / (v_8 + 104.))) * (int)(! p) - ! (
                   v_15 * -67));
    v = (long)(! (18446744072864680487ULL + (unsigned long long)v_6) % (unsigned long long)(
               (-71 / ((int)v_13 + 783)) / (v_15 + 352) + 1017));
    v_6 = (unsigned long)(! (-18446744073709535881ULL));
  }
  while_0_break: ;
  return result;
}

