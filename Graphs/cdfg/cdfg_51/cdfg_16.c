#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999413982
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, long p_4, int p_19)
{
  char v_23;
  int v_21;
  unsigned long v_17;
  unsigned char v_15;
  unsigned int v_13;
  unsigned long long v_11;
  unsigned char v_9;
  unsigned long v_7;
  unsigned int v;
  unsigned int result;
  v_23 = (char)-76;
  v_21 = -724899440;
  v_17 = 28626UL;
  v_11 = 18446744073709501136ULL;
  v_9 = (unsigned char)36;
  v_7 = 4294959109UL;
  v = (unsigned int)p_4;
  result = 4294917440U;
  if ((int)p % ((- p_19 + - p_19) + 510) > (-23 * p_19) * (int)(~ (- v_9))) {
    v = (unsigned int)p_19;
    v_13 = (unsigned int)((unsigned long long)(- v >> (v_17 & 31UL)) | ~ (
                          (unsigned long long)p * v_11));
    v_11 = (unsigned long long)v_9;
  }
  else {
    v_11 = (unsigned long long)(~ (- v_23)) & (unsigned long long)(p_19 / (
                                                                   p_19 + 782)) / 18446744073709494722ULL;
    v_13 = (unsigned int)(- (v_7 * 3493231591UL) * (unsigned long)((60043 | v_21) / 1020));
    v_9 = (unsigned char)(- p);
  }
  while ((unsigned long)p <= 1UL % (((unsigned long)p_4 % (unsigned long)(
                                     v + 1006U) - (unsigned long)((double)v_7 * p)) + 798UL)) {
    v_15 = (int)v_9 ^ -85;
    v = (unsigned int)((! v_7 - 232UL) * (unsigned long)(v_13 / (unsigned int)(
                                                         (int)v_15 + 914) + (unsigned int)(~ v_15)));
    result = 25383U / (- (! v) + 968U);
    v = (unsigned int)(v_11 & - (952205721ULL % ((unsigned long long)p + 60ULL)));
  }
  while_0_break: ;
  return result;
}

