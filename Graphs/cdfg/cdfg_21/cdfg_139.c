#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641659302
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned long long p_4[4][1],
                       unsigned char p_7[1][1][4], unsigned short p_9,
                       int p_11[3][4][5])
{
  float v_25;
  unsigned long v_23;
  unsigned short v_21;
  unsigned char v_19;
  double v_17;
  double v_15;
  long v_13;
  unsigned long long v;
  unsigned long long result;
  v_25 = (float)p_11[0][2][3];
  v_23 = 4294963155UL;
  v_21 = (unsigned short)54696;
  v_19 = (unsigned char)240;
  v_17 = -506.851974521;
  v_15 = -1517984939.78;
  v_13 = (long)p;
  v = 21862ULL;
  result = (unsigned long long)p;
  while ((long long)(! ((unsigned long)(! p_11[2][1][1]) & 44272UL)) == 
         -2786LL << ((long long)(- (- v_15)) & 63LL)) {
    v_25 *= -19709.f;
    v_23 = (unsigned long)(v_17 - (double)(~ (p_4[3][0] - (unsigned long long)p)));
    result = p_4[0][0];
    v_15 = (double)30868;
  }
  while_0_break: ;
  while (0ULL / ((unsigned long long)(31697UL ^ p) * p_4[2][0] + 429ULL) >= 
         ((v + 47669202ULL) + (unsigned long long)((int)p_7[0][0][2] / (
                                                   (int)p_9 + 577))) >> (
         (unsigned long long)p_7[0][0][1] % (result / (unsigned long long)(
                                             p_11[1][1][1] + 1011) + 125ULL) & 63ULL)) {
    v_17 = v_15 * (double)(v_13 % 19849L);
    v_15 = (double)((unsigned long)(- p_11[2][0][0] / (-12905 % ((int)v_21 + 355) + 504)) % (
                    ((unsigned long)(v_17 / -7399952896.) - v_23) + 274UL));
    v_13 = (long)((result - 31860ULL) * (unsigned long long)(((int)v_19 + 15197) / (
                                                             ! p_11[1][0][2] + 820)));
    result = (unsigned long long)(50373LL / (long long)((int)(- v_15) % (
                                                        - p_11[1][0][4] + 108) + 449));
  }
  while_0_break_0: ;
  return result;
}

