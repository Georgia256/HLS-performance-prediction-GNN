#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 141964599
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, float p_4, signed char p_6, char p_11[1][1][1], int p_13)
{
  long v_23;
  double v_21;
  unsigned short v_19;
  signed char v_17;
  long v_15;
  unsigned long v_9;
  unsigned long v;
  short result;
  v_23 = (long)p_13;
  v_21 = 8875385055.82;
  v_19 = (unsigned short)4254;
  v_17 = p_6;
  v_15 = (long)p_13;
  v_9 = (unsigned long)p_13;
  result = (short)9048;
  if ((double)(0UL % (~ (! v_9) + 345UL)) == v_21 * (double)(v_23 * v_15) + 700181559.) {
    v = 612711108UL;
    result = (short)23655;
  }
  else {
    v = (unsigned long)p;
    v_15 = (long)((int)(! (! v_17)) + (int)(- v_19));
    result = (short)((long)((int)p_11[0][0][0] % ((int)result + 413)) * (
                     (long)(p_4 * 4712.f) * v_15));
  }
  while ((long long)-7.7203961403e+37 != ~ ((long long)((int)result % (
                                                        (int)p_6 + 691)) / -29271LL)) {
    v_9 = v % 295461738UL;
    v = (unsigned long)p_4;
    result = (short)((v_9 - (unsigned long)p_11[0][0][0]) >> ((unsigned long)(
                                                              4294951926U * (unsigned int)p_13) * (unsigned long)(
                                                              -23264L >> (
                                                              p_13 & 31)) & 31UL));
  }
  while_0_break: ;
  return result;
}

