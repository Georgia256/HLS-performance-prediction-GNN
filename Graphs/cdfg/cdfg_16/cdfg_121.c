#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 235305813
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, long p_5, unsigned char p_9,
                 unsigned char p_11[4], char p_13)
{
  unsigned long v_25;
  unsigned int v_23;
  int v_21;
  unsigned long long v_19;
  short v_17;
  unsigned long long v_15;
  int v_7;
  double v;
  unsigned int result;
  v_25 = 3723443697UL;
  v_23 = (unsigned int)p_9;
  v_21 = 35902;
  v_19 = 28952ULL;
  v_15 = (unsigned long long)p_5;
  v_7 = (int)p_11[1];
  v = (double)p;
  if (v_19 <= (8906501215ULL ^ v_15 / (unsigned long long)((int)p_11[2] + 108)) - (unsigned long long)(
              ! v_25 % (unsigned long)(v_21 + 717))) {
    v_25 = (unsigned long)((long)p_13 % (p_5 + 432L));
    v_7 = (int)(~ (v_25 * (unsigned long)((int)p_9 - 56355)));
    v = (double)(~ ((unsigned long long)(92 % ((int)p_13 + 997)) - p));
  }
  else {
    v = v;
    v_23 = (unsigned int)(((unsigned long long)(- v) | (v_15 - (unsigned long long)v_7)) * (unsigned long long)(
                          52649LL % (((long long)p_5 - 13130LL) + 617LL)));
    v_7 = (int)((unsigned long long)(42092 / (- v_21 + 6)) % (v_19 + 877ULL));
  }
  if (v_15 >= (unsigned long long)((int)(~ p_11[1]) ^ ~ (65 - v_7))) {
    v_7 = (int)(! p_11[2]);
    result = (unsigned int)((! p_5 * ((long)v_7 | p_5)) % ((long)(- (
                                                           1.91746785591e+38 + (double)p_9)) + 575L));
    result = (unsigned int)((unsigned long long)(- v) - (p / 18446744073709551560ULL + (unsigned long long)(! result)));
  }
  else {
    v_19 = (unsigned long long)(~ ((unsigned long)(v_23 + (unsigned int)p_11[0]) + (unsigned long)(~ p_5)));
    v_17 = (short)((7827ULL / (v_19 + 595ULL) | (unsigned long long)(- p_13)) - (unsigned long long)(
                   (long)v_21 * p_5 + (long)((int)p_11[2] * (int)p_13)));
    result = (unsigned int)((unsigned long long)(-520.211801156 + (double)p_13) * (
                            ~ v_15 << (((int)v_17 - (int)v_17) & 63)));
  }
  return result;
}

