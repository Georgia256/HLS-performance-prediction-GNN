#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83649345
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p[4][3][2], unsigned int p_11,
                       unsigned short p_15[5][2], unsigned char p_17,
                       double p_25)
{
  float v_31;
  signed char v_29;
  unsigned int v_27;
  long v_23;
  long v_21;
  unsigned long v_19;
  unsigned long v_13;
  short v_9;
  unsigned int v_7;
  long long v_5;
  unsigned int v;
  unsigned long long result;
  v_31 = (float)p_15[3][1];
  v_29 = (signed char)82;
  v_27 = 4294930680U;
  v_23 = 3902L;
  v_21 = (long)p[3][2][0];
  v_19 = (unsigned long)p_15[3][0];
  v_13 = 52501UL;
  v_9 = (short)p_15[1][0];
  v_7 = (unsigned int)p_25;
  while (4294906071UL >= (unsigned long)(~ v_7 % (v_27 + 331U)) % 1879531UL) {
    v_23 = (long long)v_31 % (((long long)v_29 - -44039LL) + 238LL);
    v_21 = (long)(! ((unsigned long long)((long)p_17 - v_21) & p[0][0][0]));
    v_29 = (signed char)(~ (p[0][0][0] % (unsigned long long)(v_23 + 639L) - (unsigned long long)p_11));
    v_7 = (unsigned int)((unsigned long long)((unsigned long)p_17 ^ v_13) + (unsigned long long)(
                         (unsigned long)(! p_15[2][1]) / 4094518453UL));
  }
  while_0_break: ;
  if (v_19 + (unsigned long)(! ((long)p_17 | v_21)) == (24902UL + (unsigned long)(! v_23)) + (unsigned long)(
                                                       (unsigned int)p_25 + (
                                                       v_27 | 41U))) {
    v_5 = (long long)((p[3][1][1] - (unsigned long long)v_7) * (unsigned long long)(! v_9) + (unsigned long long)(
                      (9264UL - (unsigned long)p_11) % (v_13 / (unsigned long)(
                                                        (int)p_15[1][0] + 871) + 29UL)));
    v = (unsigned int)((long long)(~ (4294948099UL << (p[0][1][1] & 31ULL))) + (
                       v_5 + (long long)(-30423 / ((int)-2.7468597987e+37 + 677))));
    result = (unsigned long long)(- v);
  }
  else result = (unsigned long long)(~ p_17);
  return result;
}

