#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 498136561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned long long p_7[2],
                   unsigned short p_11, int p_13, unsigned char p_15)
{
  unsigned short v_9;
  float v_5;
  int v;
  unsigned short result;
  result = p_11;
  if (! (317682140LL / (long long)((int)result + 615)) != (long long)p_15) {
    v_9 = (unsigned short)(1 ^ (unsigned long)p_11);
    v = (int)-8.11392829338e+37;
    v_5 = (float)((long long)result + 18325256163843LL);
  }
  else {
    v_5 = (float)(- (~ (65499ULL % (unsigned long long)((int)p_15 + 150))));
    v = -46702;
    v_9 = (unsigned short)(p_13 % ((int)p_15 + 286));
  }
  result = (unsigned short)((unsigned long long)((p / (unsigned int)(v + 867)) % (
                                                 (unsigned int)v_5 + 17U)) / (
                            (! p_7[1] + (unsigned long long)v_9) + 864ULL));
  return result;
}

