#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 897374069
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, unsigned long p_4, unsigned short p_6[4],
                 unsigned short p_8, short p_10)
{
  int v_23;
  unsigned long long v_21;
  char v_19;
  float v_17;
  long long v_15;
  long v_13;
  unsigned long long v;
  unsigned int result;
  v_23 = -57034;
  v_21 = (unsigned long long)p_6[2];
  v_19 = (char)-84;
  v_17 = 2.01067497388e+38f;
  v_15 = 75732659LL;
  v_13 = (long)p_10;
  v = (unsigned long long)p_10;
  result = 55356U;
  while ((unsigned long long)(v_17 / ((float)((int)v_19 / ((int)((char)(- v_17)) + 698)) + 355.f)) <= - (
         v_21 * (unsigned long long)(- p_4))) {
    v_13 = v_23 + (int)-8.20160354909e+37f;
    v_13 = (long)(50 >> (v_13 & 7L));
    v = (unsigned long long)((long long)((long)(- p_6[2]) + v_13) % (
                             (((long long)v_19 + v_15) + (long long)p_6[2]) + 297LL));
    v_21 = (unsigned long long)(~ ((v_13 / (long)((int)p_10 + 997)) / (long)(
                                   (int)p_6[3] + 668)));
  }
  while_0_break: ;
  while ((int)p_10 == (int)((short)((float)(! (664550120L + (long)p_6[1])) / (
                                    - (7483618304.f + (float)v) + 157.f)))) {
    v = v_15 / ((long long)((double)v_13 - -1.01324502552e+38) + 25LL);
    v_13 = (long)((unsigned long long)((unsigned long)p_8 - - p_4) - v);
    v_17 = (float)((0 / (((int)p_6[1] >> (p_4 & 15UL)) + 406)) % ((((int)p_10 + 42) | (int)(- p_8)) + 328));
    v = ! ((v + (unsigned long long)p) - (unsigned long long)(v_17 + (float)result));
  }
  while_0_break_0: ;
  return result;
}

