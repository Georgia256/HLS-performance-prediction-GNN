#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 787410426
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned char p_4[3][5], char p_7,
         unsigned short p_9, long p_13)
{
  int v_21;
  unsigned int v_19;
  unsigned short v_17;
  double v_15;
  unsigned int v_11;
  long long v;
  long result;
  v_21 = (int)p_9;
  v_19 = 4294953137U;
  v_17 = (unsigned short)p_13;
  v_15 = (double)p_4[1][0];
  v_11 = 39060U;
  result = -996827208L;
  v_15 = - (- (v_15 / ((double)result + 675.)));
  if ((unsigned long)(p_13 * (long)((double)((long)p / 595L) + v_15)) >= 
      (unsigned long)(((unsigned int)p / (v_11 + 755U)) * (unsigned int)(
                      73 >> 1)) * 56296UL) {
    v_11 = (unsigned int)(~ result / (p_13 + 369L));
    v = (long long)((unsigned int)p_7 & (unsigned int)(1568250112.f * (float)p_9) / (
                                        (v_11 ^ v_11) + 560U));
    result = (long)((long long)(~ ((int)p / ((int)p_4[1][1] + 695))) * v);
  }
  else {
    v_17 = (unsigned short)(((unsigned int)((int)v_17 / (v_21 + 657)) - v_19) ^ 530488U);
    v_11 = (unsigned int)(((18446744073474578651ULL + (unsigned long long)v_15) & (unsigned long long)(- p_9)) * (unsigned long long)(
                          (unsigned long)((long)v_17 * p_13) - ((unsigned long)v_19 ^ (unsigned long)result)));
    result = (long)(~ v_11);
  }
  return result;
}

