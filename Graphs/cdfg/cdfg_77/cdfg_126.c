#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 150419499
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, short p_9[2][1][5], char p_11,
                       int p_13, int p_15)
{
  unsigned short v_25;
  unsigned short v_23;
  unsigned short v_21;
  unsigned long v_19;
  unsigned long long v_17;
  signed char v_7;
  int v_4;
  int v;
  unsigned long long result;
  v_25 = (unsigned short)39995;
  v_23 = (unsigned short)p_15;
  v_21 = (unsigned short)15165;
  v_19 = 4294922920UL;
  v_17 = 18446744072929225079ULL;
  v = -786804184;
  while (~ ((unsigned long)(47299 % ((int)p_11 + 659)) % (- v_19 + 718UL)) < (unsigned long)(! (
         p_13 / ((int)(- v_21) + 20)))) {
    v_17 = (int)v_25 - (int)v_23 % -49;
    v_19 = (unsigned long)((unsigned long long)(-53 & ~ p_13) + v_17);
    v_17 = ((unsigned long long)p_15 + 188059502ULL) / 9981ULL + ((p + 54ULL) - (unsigned long long)(
                                                                  65 * p_13));
    v_21 = (unsigned short)(- (~ ((int)p_11 % ((int)p_9[0][0][3] + 1007))));
  }
  while_0_break: ;
  if ((unsigned long long)v <= (unsigned long long)(- p_11) % (v_17 + 488ULL)) {
    v_7 = (signed char)12;
    v_4 = (int)((unsigned long long)(25755 >> (~ p & 15ULL)) * ((unsigned long long)v_7 % (
                                                                p / (unsigned long long)(
                                                                (int)p_9[1][0][4] + 685) + 563ULL)));
    result = (unsigned long long)(~ (v * - v_4));
  }
  else result = (unsigned long long)(! p_11) * ((18446744073709524785ULL >> (
                                                 p_13 & 63)) - (unsigned long long)(
                                                (long long)p_15 & -1016117644LL));
  return result;
}

