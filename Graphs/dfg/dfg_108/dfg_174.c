#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 654921472
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long long p_5[1][5], char p_9[4][2][2],
         unsigned long p_13, unsigned char p_15[2][5][3])
{
  long long v_19;
  double v_17;
  unsigned char v_11;
  short v_7;
  long v;
  long result;
  v_19 = 271131867LL;
  v_11 = (unsigned char)53;
  result = -36734L;
  v_17 = (double)(((v_19 - (long long)p_13) / 181LL + (long long)(- (~ v_11))) - ! p_5[0][3]);
  v_7 = (short)(((unsigned long)(- v_11) - (unsigned long)(- result) / (
                                           p_13 % (unsigned long)((int)p_15[1][0][1] + 7) + 823UL)) % (unsigned long)(
                ((int)((short)(- (- v_17))) + -28533) + 853));
  v = result;
  result = (long)((long long)((unsigned long)(v / (long)((int)p + 955)) * 4294966250UL) * (
                  (p_5[0][1] % (long long)((int)v_7 + 903)) * (long long)p_9[2][0][1]));
  return result;
}

