#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 591645070
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, int p_4[3], long long p_6,
                   unsigned long p_8[5][1][3], short p_11)
{
  long long v_25;
  long long v_23;
  int v_21;
  double v_19;
  double v_17;
  unsigned char v_15;
  unsigned char v_13;
  unsigned long v;
  unsigned short result;
  v_25 = 919865388LL;
  v_23 = -784203295LL;
  v_21 = (int)p_6;
  v_19 = (double)p_11;
  v_15 = (unsigned char)18;
  v_13 = (unsigned char)116;
  v = 566572333UL;
  result = (unsigned short)p_11;
  if ((long long)(v_21 / 712) <= ((v_25 + v_23) ^ 0LL) % (long long)(
                                 ((int)p_11 - -91) + 629)) {
    v_15 = (unsigned char)((double)(! v_15) * v_19);
    v = (unsigned long)(14441LL * (p_6 * -569596998LL) - p_6);
    result = (unsigned short)(! ((long)p_4[0] | -665300053L));
  }
  else {
    v_21 = (int)p_6;
    v_15 = (unsigned char)(p_6 / ((v_23 | (long long)v) + 820LL) + (long long)(
                           (int)p_11 >> (v_25 & 15LL)));
    v = (unsigned long)((unsigned long long)p_8[2][0][0] ^ ! ((unsigned long long)v_21 & 18446744073709546177ULL));
  }
  while ((long long)(p * (long)(p_4[2] - -59)) % (((p_6 - 4294911341LL) - (long long)(~ p_8[2][0][0])) + 90LL) > (long long)(
         0UL % ((unsigned long)-1.99905213906e+38f / ((v + (unsigned long)p_11) + 430UL) + 881UL))) {
    v_15 = (long)v_15 - 12151L;
    result = (unsigned short)139;
    v_17 = (double)(! p_11);
    v = ((p_8[3][0][2] | (unsigned long)p_11) | (unsigned long)((int)v_13 % (
                                                                (int)v_13 + 440))) + (unsigned long)(
        12624L % (((long)v_17 - -37388L) + 1003L));
  }
  while_0_break: ;
  return result;
}

