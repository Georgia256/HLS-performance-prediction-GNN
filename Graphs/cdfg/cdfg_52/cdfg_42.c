#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 310680364
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, double p_5, int p_7, short p_15,
                 unsigned short p_19)
{
  char v_25;
  unsigned short v_23;
  unsigned long long v_21;
  short v_17;
  double v_13;
  signed char v_11;
  float v_9;
  int v;
  unsigned int result;
  v_25 = (char)-89;
  v_21 = (unsigned long long)p;
  v_17 = (short)p_7;
  v_13 = 9396969361.32;
  v_9 = (float)p_7;
  v = -1589;
  result = 4294965824U;
  if (p_7 << 18U == - (-110 - 211 * (int)v_25)) {
    v_23 = (unsigned short)((-2.56816110303e+38 * (double)((unsigned int)v_17 + result)) / -917199424.);
    v_13 = (double)((unsigned long long)(! ((int)p_15 * (int)p_15)) * (
                    (unsigned long long)(~ v_17) % (v_21 / (unsigned long long)(
                                                    (int)v_23 + 825) + 216ULL)));
    result = (unsigned int)(- ((int)p_19 | ((int)p_19 ^ (int)p_15)));
  }
  else {
    v_25 = (char)12;
    v_9 = (float)((double)(~ ((int)p_15 * (int)v_25)) * - (- v_13));
    result = ~ ((unsigned int)p_7 + (unsigned int)p_7 * 4294915125U);
  }
  while (((unsigned int)v / (p / ((unsigned int)p_5 + 944U) + 806U)) % 22652U < (unsigned int)p_7) {
    v_11 = v_13 / ((double)((int)v_9 - 740909822) + 452.);
    v_17 = (short)(! (~ v_11));
    v_11 = (signed char)p_19;
    v = (int)p_15 - ~ ((int)p_15 * (int)v_17);
  }
  while_0_break: ;
  return result;
}

