#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113751283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, signed char p_13[3][5], unsigned short p_15,
                   long long p_23, double p_25)
{
  char v_21;
  int v_19;
  signed char v_17;
  unsigned long v_11;
  long v_9;
  unsigned char v_6;
  unsigned short v_4;
  long long v;
  unsigned short result;
  v_21 = (char)p_25;
  v_19 = (int)p_25;
  v_11 = 790876289UL;
  v_9 = 19578L;
  v_6 = (unsigned char)63;
  v_4 = (unsigned short)p_23;
  v = -30723LL;
  result = (unsigned short)50835;
  if (v_9 != (long)(- (- p_25))) {
    v_21 = (char)(- result);
    result = (unsigned short)v_21;
    v_4 = p_15;
  }
  else {
    v_21 = (char)(((v_11 | 4294967252UL) & (unsigned long)((float)v_21 * 2.22981079219e+38f)) - (unsigned long)(
                  -496807376 | (int)(- v_4)));
    result = (unsigned short)((long long)p_15 / 1080LL);
    v_11 = (unsigned long)((long long)v_11 * (((long long)p_15 - p_23) % (long long)(
                                              ((int)((unsigned char)p_25) | (int)v_6) + 292)));
  }
  if ((long long)p_13[0][0] - p_23 < (long long)(~ v_9 * (long)((int)(- p_15) + (int)result))) {
    result = (unsigned short)((unsigned long long)((int)(- v_6) >> ((
                                                                    (unsigned long)p ^ 4294954594UL) & 7UL)) / (
                              (24ULL & (unsigned long long)(! v_9)) + 226ULL));
    result = result;
    result = (unsigned short)(0LL / (((long long)result * v) / (long long)(
                                     ((int)((unsigned short)-766.078186035f) | (int)v_4) + 820) + 778LL));
  }
  else {
    v_17 = (signed char)(((long long)(! v_21) - p_23) / ((long long)(
                                                         1.84467440733e+19 / (
                                                         p_25 + 872.)) * ! p_23 + 35LL));
    v_11 = ((unsigned long)(-30 - (int)p_13[2][3]) / (4294943186UL % (unsigned long)(
                                                      (int)p_15 + 703) + 403UL)) / (
           ((unsigned long)((int)v_17 | v_19) + (4294944830UL & v_11)) + 82UL);
    result = (unsigned short)((unsigned long)(~ p) / (26147UL % (v_11 + 745UL) + 315UL));
  }
  return result;
}

