#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 394442784
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, int p_11)
{
  unsigned int v_9;
  unsigned char v_7;
  unsigned int v_5;
  long long v;
  unsigned long long result;
  v_9 = (unsigned int)p;
  v_7 = (unsigned char)p_11;
  v = (long long)p_11;
  result = 18446744072933046242ULL;
  v_5 = (unsigned int)(~ ((int)p - (p_11 + (int)p)));
  while ((unsigned long long)(- (25268LL / (v + 428LL))) - (result * (unsigned long long)p | (unsigned long long)(~ v_5)) != (unsigned long long)p) {
    v = (long long)v_9 + 5141LL;
    v_9 = (unsigned int)(- (- v % (long long)((v_5 << (p_11 & 31)) + 960U)));
    v_7 = (unsigned char)((long long)((unsigned int)p + (unsigned int)v_7 / (
                                                        v_9 + 658U)) % (
                          (1023052249LL + ! v) + 616LL));
    v_5 = - ((unsigned int)-2.42996876549e+38f % (v_9 + 251U)) / ((~ v_5 | (unsigned int)(
                                                                   (int)p % -394905456)) + 129U);
  }
  while_0_break: ;
  return result;
}

