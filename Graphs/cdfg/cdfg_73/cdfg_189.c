#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 220515474
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned int p_4[3], signed char p_6, int p_13,
         int p_15)
{
  unsigned long long v_21;
  float v_19;
  long v_17;
  float v_11;
  signed char v_9;
  unsigned char v;
  long result;
  v_21 = 18446744073709498954ULL;
  v_19 = -1661850368.f;
  v_17 = (long)p_13;
  v_11 = (float)p_4[0];
  if (v_21 % 18446735004408994181ULL > 2554672384ULL) {
    result = (long)(! (! p)) | ! (v_17 / (v_17 + 474L));
    v = (unsigned char)((long)(((int)p_6 * p_13) % (p_15 % ((int)p_6 + 1010) + 357)) | (
                        (long)(! p_15) - 30L % (result + 407L)));
    result = (long)(! (~ (p_4[2] + 982U)));
  }
  else {
    result = (long)((float)(((int)p & 44531) - (int)p % 17067) * - (v_19 - (float)p));
    v_11 = (float)p;
    v = (unsigned char)(! 57617);
  }
  while ((unsigned int)p <= ((p_4[0] & (unsigned int)((int)p % ((int)p_6 + 845))) & (unsigned int)(~ (! v)))) {
    v_9 = v_11 + 95.f;
    v_11 = (float)v_9;
    v_9 = (signed char)((long)((float)p_13 * (6.f / (v_11 + 321.f))) / 887765329L);
    v = (unsigned char)((long long)(((unsigned int)p * p_4[2]) % 50625U) * -263988335LL);
  }
  while_0_break: ;
  return result;
}

