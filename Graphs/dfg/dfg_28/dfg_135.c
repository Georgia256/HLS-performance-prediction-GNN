#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 934011942
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, double p_4[2][5][3], long long p_6[1],
                 long p_8, double p_10[4][4])
{
  long long v_15;
  long long v_13;
  unsigned short v;
  unsigned int result;
  v_15 = p;
  v_13 = (long long)p_8;
  v = (unsigned short)51437;
  v = (unsigned short)((3260665365LL % ((p_6[0] / 45481LL + (long long)p_10[2][0]) + 603LL)) % (
                       (v_15 + 4294958949LL) % (~ p * (long long)(! v) + 987LL) + 802LL));
  v = (unsigned short)((long long)(4294929317U << 25UL) / ((5918947169LL - (
                                                            v_13 & (long long)v)) + 505LL));
  result = (unsigned int)(! (! (p_8 + p_8) % (long)((((int)((unsigned short)p_10[3][2]) - (int)v) - 6600) + 11)));
  result = (unsigned int)(- (p % (long long)(((unsigned int)(p_4[0][4][1] / (
                                                             (double)p_6[0] + 489.)) - - result) + 236U)));
  return result;
}

