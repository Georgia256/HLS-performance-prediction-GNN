#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1063540147
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned long long p_4, unsigned char p_6,
          unsigned long long p_9, unsigned long long p_19)
{
  unsigned short v_23;
  float v_21;
  long long v_17;
  int v_15;
  int v_13;
  double v_11;
  double v;
  short result;
  v_23 = (unsigned short)39255;
  v_21 = (float)p;
  v_15 = 16021;
  v_11 = (double)p;
  v = 5.94958786685e+37;
  result = (short)-30529;
  if (3713625672UL > (unsigned long)v) {
    v_13 = (int)v_11;
    v_11 = (double)(-16699LL + (long long)(v_21 / ((float)p + 554.f) - (float)v_23));
    v = v_11;
  }
  else {
    v_11 = (double)(p_9 % (unsigned long long)(v_15 + 624));
    v_13 = (int)(- (((double)p_19 * -3.22974687894e+38) * 46647.));
    result = (short)((double)(~ (-510422379 % ((int)p_6 + 663))) + (242. - (
                                                                    3828216729.75 - (double)p)));
  }
  while ((unsigned long long)(- (- v)) < (unsigned long long)(((int)((short)2.04197134037e+38f) - (int)result) / 56) * p_9) {
    v_17 = (int)((short)v_11) - 1551;
    v_15 = (int)((unsigned long long)v_17 * (p_19 ^ p_19) + (18446744073709506999ULL - (unsigned long long)(- v_13)));
    v = (double)v_15;
    v = v;
  }
  while_0_break: ;
  return result;
}

