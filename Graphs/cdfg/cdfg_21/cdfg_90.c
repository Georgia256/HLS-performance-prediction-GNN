#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 627617340
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, short p_7, double p_9[3], unsigned long long p_11,
              unsigned short p_15)
{
  double v_23;
  unsigned short v_21;
  unsigned char v_19;
  double v_17;
  unsigned long v_13;
  char v_5;
  unsigned short v;
  long long result;
  v_23 = (double)p_7;
  v_21 = (unsigned short)10472;
  v_19 = (unsigned char)10;
  v_13 = 4294923151UL;
  v_5 = (char)p_11;
  result = (long long)p_7;
  if (((p_11 - 18446744073709518876ULL) ^ 0) - (unsigned long long)(- result % (long long)(
                                                                    (int)p_7 * (int)v_21 + 325)) < (unsigned long long)(
      (result * p + -464LL) << ((long long)(1.84467440733e+19 * (-4472876544. / (
                                                                 p_9[1] + 549.))) & 63LL))) {
    v_17 = (double)-4238220032.f;
    v_13 = (unsigned long)(~ (- p_11 - (unsigned long long)p_7));
    result = (long long)v_17;
  }
  else {
    result = (long long)(- ((int)v_19 / ((int)v_21 + 517) - (int)((char)v_23) / -75));
    v_5 = (char)1.46031290482e+38f;
    v_17 = (double)p;
  }
  if (-1.49862016311e+38 < - (v_17 - v_17) / ((double)((p_11 | p_11) | (unsigned long long)p_15) + 880.)) {
    v_5 = (char)((unsigned long long)((double)(result * (long long)p_7) * (
                                      p_9[2] / ((double)v_5 + 840.))) + 
                 (p_11 % (unsigned long long)(v_13 + 376UL)) % (unsigned long long)(
                 (int)(! p_15) + 904));
    v = (unsigned short)(! v_5);
    result = (long long)(- ((int)v % -39570)) - p;
  }
  else result = ! (p / (long long)((int)p_15 + 524) + 3728754340LL);
  return result;
}

