#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 63770237
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, short p_5[5][4][1], unsigned long p_9,
         unsigned long long p_11, int p_19)
{
  signed char v_21;
  long v_17;
  unsigned char v_15;
  signed char v_13;
  long v_7;
  long long v;
  char result;
  v_21 = (signed char)75;
  v_17 = -760814664L;
  v_13 = (signed char)32;
  result = (char)p_19;
  if ((unsigned long long)((-25599LL * (-19931LL % (long long)(v_17 + 638L))) % (long long)(
                           (int)v_21 + 626)) == (unsigned long long)(
                                                (p_19 - (int)v_21) >> (
                                                (int)p & 31)) / (~ ((unsigned long long)p_9 * p_11) + 488ULL)) {
    v_15 = (unsigned char)v_13;
    v_7 = (long)(864700417UL % (unsigned long)(((long)v_15 * v_17 + (long)-3.35555291105e+14) + 102L));
    v = (long long)((unsigned long long)((unsigned long)((unsigned int)-9.17002340803e+37 / 422072582U) % (unsigned long)(
                                         v_7 + 588L)) % ((((unsigned long long)p_9 - p_11) + (unsigned long long)(! v_13)) + 20ULL));
  }
  else {
    result = ! result;
    v_13 = (signed char)p_9;
    v = (long long)((p_19 * (int)v_13 << 2) - (p_19 + (int)(! result)));
  }
  result = (char)(((long long)((int)p * (int)((char)735.245605469f)) - v) - (long long)(- p_5[4][0][0]));
  return result;
}

