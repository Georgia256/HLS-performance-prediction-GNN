#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 53599801
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, long p_4[5], float p_7, unsigned int p_15, char p_17[1][5])
{
  short v_23;
  short v_21;
  unsigned long v_19;
  double v_13;
  signed char v_11;
  unsigned int v_9;
  float v;
  short result;
  v_23 = (short)-24412;
  v_21 = (short)p_7;
  v_19 = (unsigned long)p_17[0][0];
  v_13 = 3301820478.59;
  v_11 = (signed char)p_17[0][0];
  v_9 = 3887963180U;
  result = (short)p_15;
  while (- (! ((unsigned int)p_17[0][1] + p_15)) >= v_9 % (((unsigned int)p & v_9) + 676U)) {
    result = (unsigned long long)v_23 - 89319326ULL;
    v_23 = (short)(! (-25601 * p));
    v_21 = (short)((978892358L & (long)2.89461662803e+38) + (long)p_7);
    v_9 = (unsigned int)(- v_13);
  }
  while_0_break: ;
  if ((((unsigned long)result * v_19) / 4294967280UL) * (unsigned long)(
      (long)p / ((long)v_21 % (p_4[2] + 843L) + 436L)) == ~ ((unsigned long)(
                                                             p_15 / 4294967240U) * (
                                                             (unsigned long)p_4[1] & (unsigned long)v_9))) {
    v = (float)((long)(- (- p_7)) * ((long)((int)v_11 * (int)((signed char)v_13)) / 650838016L));
    result = (short)(((long)p * p_4[1]) % ((long)(v / (p_7 + 975.f)) + 303L) << (
                     - v_9 & 31U));
    result = (short)((int)result - (int)(- (~ result)));
  }
  else result = (short)-1;
  return result;
}

