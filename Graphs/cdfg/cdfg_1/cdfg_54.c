#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 496246051
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, unsigned int p_11, unsigned long p_13, long p_17,
                signed char p_23[1][3])
{
  double v_25;
  char v_21;
  int v_19;
  int v_15;
  unsigned long long v_9;
  unsigned short v_7;
  unsigned short v_5;
  double v;
  signed char result;
  v_25 = -3460291937.13;
  v_21 = (char)p_23[0][0];
  v_19 = (int)p_17;
  v_15 = -756806766;
  v_9 = 18446744073709541355ULL;
  v_5 = (unsigned short)p_13;
  v = -957.343637102;
  if ((((unsigned long long)v_19 & v_9) - (unsigned long long)v_21) / (unsigned long long)(
      (unsigned long)(- v_5) % 715161427UL + 485UL) > (unsigned long long)(- (
      (int)(-575280226. + v_25) % ((int)p % ((int)((char)1.76600238493e+38f) + 768) + 71)))) {
    v = (double)(~ (! (! 3283788630U)));
    v_5 = (unsigned short)(~ p_13 / (unsigned long)((int)(~ p) + 552) + (unsigned long)(! (
                           4294967189U * p_11)));
    v_9 = (unsigned long long)(- ((unsigned int)(- v_5) * (18U / (p_11 + 888U))));
  }
  else {
    v_5 = (unsigned short)((long long)(! (13949UL % (unsigned long)((int)v_21 + 733))) - 
                           204LL / ((long long)((double)p_23[0][0] - v) + 16LL));
    v = (double)(131 - (int)v_5);
    v_9 = (unsigned long long)((unsigned long)((long)(v_15 * 112) * (
                                               p_17 / (long)(v_19 + 128))) | (
                               - p_13 - (unsigned long)((long)v_5 - 590007386L)));
  }
  if (v != (double)(11863LL / (! (57060LL + (long long)2.00586692727e+37f) + 750LL))) {
    v = (double)(-(signed char)8);
    result = (signed char)(- ((double)(! p) + (1.78223297519e+38 - v)));
  }
  else {
    v_7 = (unsigned short)p;
    v_5 = (unsigned short)((unsigned long long)((46158U - (unsigned int)v_7) + 43052U) % (
                           v_9 + 816ULL));
    result = (signed char)((long)((int)(! v_5) / ((int)v_5 + 413)) * (
                           ((long)v - 33810L) + 144502832L));
  }
  return result;
}

