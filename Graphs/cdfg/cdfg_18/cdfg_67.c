#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736283626
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[1], long long p_5[2], double p_7[5], char p_11,
              float p_15)
{
  signed char v_19;
  float v_17;
  long long v_13;
  short v_9;
  short v;
  long long result;
  v_19 = (signed char)28;
  v_13 = 36336984LL;
  v_17 = (float)v_19;
  if (! (v_13 % ((long long)p_15 + 282LL)) * (31032LL / (! v_13 + 770LL)) > (long long)(
      (- p_15 + v_17) + -68.f)) {
    v_9 = (short)p_11;
    v = (short)(((p_5[1] - (long long)2.66357364916e+38f) * (long long)(- p_7[2])) % (long long)(
                ((int)((short)3.34061398497e+21f) - (int)v_9) + 156));
    result = (long long)(p[0] * (double)v);
  }
  else {
    result = (long long)(18446744073677230257ULL + (unsigned long long)(! p_5[1]));
    result = ! (~ (111LL / (result + 918LL)));
  }
  return result;
}

