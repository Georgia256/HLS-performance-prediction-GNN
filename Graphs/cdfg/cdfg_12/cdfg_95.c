#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1057740470
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p[2], short p_5, double p_11, int p_13,
                unsigned short p_15)
{
  signed char v_17;
  unsigned char v_9;
  double v_7;
  long v;
  signed char result;
  v_17 = (signed char)105;
  v_7 = -1459099115.73;
  v_7 = 0. / (v_7 + 69.);
  if ((unsigned long long)(- v_7) < (~ p[0] >> (((int)v_17 + (int)((signed char)-432.326324463f)) & 63)) * (unsigned long long)(
                                    (long long)p_5 % 60471LL)) {
    v_7 = (double)(-18446438446457122487ULL);
    v = (long)(~ (p[0] << ((int)p_5 & 63)) ^ (unsigned long long)((long long)v_7 / -934883705LL));
    result = (signed char)(-75L / (v + 382L));
  }
  else {
    v_9 = (unsigned char)0;
    result = (signed char)v_9;
  }
  return result;
}

