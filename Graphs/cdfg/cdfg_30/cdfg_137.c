#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 727269621
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, unsigned int p_7, signed char p_15,
                  unsigned short p_17[3], long long p_21)
{
  float v_19;
  long v_13;
  unsigned short v_11;
  int v_9;
  long v_4;
  float v;
  unsigned long result;
  v_19 = -1.95832668316e+38f;
  v_13 = (long)p_17[2];
  v_4 = 55363L;
  result = (unsigned long)p_17[0];
  v = (float)p;
  if ((long long)(~ (v_4 >> (result & 31UL))) % (~ (~ p) + 638LL) != (long long)(~ (
      ((int)p_17[0] & (int)((unsigned short)1.30293864634e+38f)) + (int)(
      v_19 + (float)p_21)))) {
    v_4 = (long)(23950LL * (p + (long long)p_7) >> ((long long)(- v) / (
                                                    (long long)result % -867969617LL + 406LL) & 63LL));
    v = (float)(! (-399399173LL - - p));
    result = (unsigned long)(! (~ ((long)v * v_4)));
  }
  else {
    v_9 = 56805;
    v_11 = (unsigned short)(- ((v_13 * (long)p_15) % (long)((int)(~ p_15) + 986)));
    result = (unsigned long)((long)(! v_9 - (int)v_11) | ~ (-3L * v_13));
  }
  return result;
}

