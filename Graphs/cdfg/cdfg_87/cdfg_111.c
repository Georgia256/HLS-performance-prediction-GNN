#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 686008834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, double p_5, long long p_13[3][3], char p_15,
                  int p_25)
{
  int v_23;
  char v_21;
  unsigned long long v_19;
  short v_17;
  unsigned char v_11;
  short v_9;
  short v_7;
  int v;
  unsigned long result;
  v_23 = -545621213;
  v_21 = (char)p_13[2][2];
  v_19 = (unsigned long long)p_15;
  v_17 = (short)12096;
  v_7 = (short)p_15;
  result = 951575081UL;
  if ((unsigned long long)(p_25 | (int)v_17) % ((v_19 - (unsigned long long)p_25) + 174ULL) < (unsigned long long)(
      (int)p_15 + (int)((char)(137.889907837 / (p_5 + 985.) - (double)(
                               (int)v_7 + (int)v_17))))) {
    v = (int)(~ p_13[1][0]);
    result = (unsigned long)9734035467.99;
    v_11 = (unsigned char)((unsigned long)(- ((long)v_17 % 919708600L)) + 335118618UL);
  }
  else {
    v_11 = (unsigned char)(v_19 & (unsigned long long)v_23);
    v_17 = (short)((p_5 + -107.) + (double)(p_13[2][0] / (long long)(
                                            p + 578L)));
    v = (int)((18446744073709529819ULL + 18446744073709544718ULL % (v_19 + 509ULL)) - (unsigned long long)(
              (long long)(- v_21) / (p_13[0][2] + 562LL)));
  }
  while ((unsigned long)((p / (long)(v + 194)) % -113L + (long)v) <= 
         (unsigned long)((int)((short)(- p_5)) * (int)v_7) / ((3826439220UL - (unsigned long)(~ v)) + 248UL)) {
    v_9 = (unsigned long)v_11 / 3731UL;
    v_7 = (short)((int)v_9 / (- ((int)v_17 % ((int)p_15 + 588)) + 422));
    v_11 = (unsigned char)p_15;
    v = (int)((long long)(~ p * (long)(- p_5)) / ((~ p_13[2][2] - 67LL) + 222LL));
  }
  while_0_break: ;
  return result;
}

