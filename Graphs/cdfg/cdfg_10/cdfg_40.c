#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 874118804
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, long long p_7, unsigned long long p_9, long p_11,
          signed char p_13)
{
  unsigned char v_19;
  int v_17;
  long long v_15;
  long long v_5;
  short v;
  short result;
  v_19 = (unsigned char)161;
  v_17 = (int)p_7;
  v_15 = 27456LL;
  v_5 = (long long)p_13;
  v = (short)24109;
  result = (short)p_9;
  while (~ (58878LL - p_7) * ((long long)(4294943355U * (unsigned int)result) / (
                              ~ p_7 + 702LL)) > (long long)p_11 / (v_15 + 684LL)) {
    v_5 = (p_7 | (long long)v_19) % (p / (p + 534LL) + 17LL) - (long long)(~ (
          (int)p_13 + -120));
    v_19 = (unsigned char)(- (v_5 / 1347LL) * ~ (34000LL * p_7));
    result = (short)(- ((unsigned long long)v_17 + p_9) / (unsigned long long)(
                     (-48653LL + v_15 % 77LL) + 61LL));
  }
  while_0_break: ;
  while (- ((p + 37773LL) - 290903124LL) >= (long long)(-237 + (int)v)) {
    result = (short)(~ ((unsigned long long)((long long)result % (v_5 + 49LL)) * (
                        88ULL % (p_9 + 59ULL))));
    v_5 = (long long)(~ result);
    v = (short)(18446744073600259103ULL + (unsigned long long)(! (p_7 + -33LL)));
  }
  while_0_break_0: ;
  return result;
}

