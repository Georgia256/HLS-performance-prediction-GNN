#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 754870931
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned int p_4, unsigned short p_6, char p_8,
           unsigned long long p_21)
{
  short v_23;
  short v_19;
  long long v_17;
  long long v_15;
  unsigned short v_13;
  signed char v_11;
  unsigned char v;
  double result;
  v_23 = (short)p_6;
  v_17 = (long long)p_21;
  v_15 = 587376255LL;
  v_13 = p_6;
  v_11 = (signed char)p_21;
  v = (unsigned char)141;
  result = (double)p_6;
  if ((11414LL | -31LL / (p + 327LL)) % (long long)((int)v_23 + 634) >= 0LL) {
    v_19 = (short)v_11;
    v_11 = (signed char)((long long)p_4 & (long long)((int)p_8 * (int)v_19) * v_17);
    v_11 = (signed char)((-19625LL % (long long)((int)v_13 + 701)) * (long long)(! v_11) - (long long)(! v_13));
  }
  else {
    v_17 = (long long)(- (! (p_21 << (p & 63LL))));
    v = (unsigned char)(! v_15);
    v_19 = (short)(((long long)(4294913900UL * (unsigned long)p_4) + 
                    (long long)v / (v_17 + 900LL)) / (long long)((-92 << (
                                                                  v_15 / (
                                                                  p + 646LL) & 7LL)) + 504));
  }
  while ((long)(! v) < 30581L - (0 ^ (long)v_11)) {
    result = v_17 % (v_15 % (long long)(((unsigned int)v_13 + 43648U) + 212U) + 701LL);
    v_11 = (signed char)((unsigned int)(- (- p_6)) - 924822470U);
    v_15 = (long long)((int)-2.9309947859e+38f - (int)((short)((double)v_19 + result)) / -27617);
    v = (unsigned char)(~ ((p + (long long)v_11) / -29009LL));
  }
  while_0_break: ;
  return result;
}

