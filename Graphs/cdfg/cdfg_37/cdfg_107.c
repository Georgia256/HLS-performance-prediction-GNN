#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299282304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, long long p_4, long p_6, long long p_8, long p_10)
{
  unsigned long long v_25;
  short v_23;
  unsigned long long v_21;
  long long v_19;
  signed char v_17;
  float v_15;
  float v_13;
  char v;
  int result;
  v_25 = (unsigned long long)p_4;
  v_23 = (short)p_8;
  v_21 = (unsigned long long)p_10;
  v_19 = 1028371549LL;
  v_17 = (signed char)p_4;
  v_15 = 816.464660645f;
  v_13 = (float)p_10;
  result = 1046708453;
  while (~ (- (v_21 + 18446744073244505556ULL)) >= (unsigned long long)p_10) {
    v_15 = (int)v_23 + (int)((short)-285520701.001);
    v_13 = (float)p;
    v_17 = (signed char)(- (result % 156));
    v_21 = ! ((unsigned long long)v_17 % (v_25 + 581ULL) - (unsigned long long)(! p_10));
  }
  while_0_break: ;
  if ((long long)((v_13 / ((v_15 + 4294964480.f) + 845.f)) / 772.f) == (
      -1LL | 0LL / ((long long)v_17 % (v_19 + 654LL) + 556LL))) result = (int)(
                                                                70LL % (
                                                                (long long)(~ p) % (
                                                                p_4 / (long long)(
                                                                p_6 + 227L) + 190LL) + 382LL));
  else {
    v = (char)(! ((long long)p_6 / ((-60LL + p_4) + 290LL)));
    result = (int)((p_8 / (long long)(p_10 + 928L)) % (long long)((unsigned long)v * p + 431UL) + -119LL);
    result = result;
  }
  return result;
}

