#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 555008546
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, long long p_5, char p_15, int p_17,
          unsigned long long p_19)
{
  long v_23;
  char v_21;
  double v_13;
  char v_11;
  char v_9;
  char v_7;
  unsigned long v;
  float result;
  v_23 = (long)p_17;
  v_21 = (char)31;
  v_11 = (char)-77;
  v_9 = (char)3;
  v_7 = (char)p_19;
  v = (unsigned long)p_17;
  if (! (~ p_19 * (unsigned long long)(50505 % ((int)v_11 + 123))) >= (unsigned long long)(
      (long)v_21 - 553271117L * v_23)) {
    v = (unsigned long)((long long)(v % 64067UL - 50UL) % ((long long)(
                                                           (int)v_9 << 2) * (
                                                           (long long)v_11 * p) + 139LL));
    v_7 = (char)(- ((long long)((unsigned long)v_7 - v) % ((p_5 >> 49L) + 1024LL)));
    v = (unsigned long)(~ (-832587095LL % (long long)((int)(! v_7) + 163)));
  }
  else {
    v_13 = (double)p_17;
    v = (unsigned long)((- v_13 - (double)((int)p_15 * p_17)) / 327741696.);
  }
  result = (float)(((long long)(v + 64UL) * (p - p_5)) / -32942LL);
  return result;
}

