#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 174337716
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, char p_4, unsigned long p_9, double p_13[5], char p_15)
{
  char v_25;
  unsigned long long v_23;
  float v_21;
  int v_19;
  long long v_17;
  double v_11;
  unsigned char v_7;
  unsigned long v;
  long result;
  v_25 = (char)p_9;
  v_23 = (unsigned long long)p_13[2];
  v_21 = -297.055145264f;
  v_19 = (int)p_9;
  v_17 = -40921LL;
  v_11 = (double)p_9;
  v_7 = (unsigned char)p;
  if (-21112LL - (long long)(-59354L - (long)-3.20221672166e+37) % ((
                                                                    v_17 + 324518851LL) + 715LL) < (long long)(
      (int)p * ((int)((char)(- v_11)) + (int)p_15))) {
    v = (unsigned long)(- (15556L ^ 166608138L * (long)2370155264.f));
    v_17 = 0LL;
    result = (long)((unsigned long)p * v & (unsigned long)(~ v_19 * (int)p_15));
  }
  else {
    result = (long)((((unsigned long long)p_9 - v_23) % (unsigned long long)(
                     (int)p_15 * (int)v_25 + 910)) % (unsigned long long)(
                    (int)p_15 + 1));
    v = (unsigned long)v_21;
    v_7 = (unsigned char)p_13[4];
  }
  if (v_17 != (long long)(- ((long)p_15 + 1626L) - (long)(~ (v_19 - v_19)))) 
    result = (long)(((int)p / 46469 - (127 + (int)p)) << ((0LL - ((long long)p_4 - -18202LL)) & 31LL));
  else {
    v_11 = (double)(((long long)((int)p_15 / -780153495) % -47560LL) / (long long)(
                    (int)(! v_7) + 257));
    v_7 = (unsigned char)((double)p_9 - ((v_11 + -1.05545044627e+38) - p_13[1]));
    result = (long)((! v % (unsigned long)(~ result + 655L)) % ((unsigned long)(- (
                                                                (double)v_7 + -7885243657.28)) + 567UL));
  }
  return result;
}

