#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 859592700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, unsigned int p_5, long long p_7[3],
                  unsigned long p_11, float p_15)
{
  char v_17;
  unsigned char v_13;
  int v_9;
  unsigned int v;
  unsigned char result;
  v_17 = (char)-106;
  v_9 = (int)v_17;
  if (~ (4294909975U - (unsigned int)(v_9 + -12)) < ! (- ((unsigned int)p_15 & p_5))) {
    v_9 = (int)((long long)(! p_11) - -17229LL * (long long)(-64 | v_9));
    v = (unsigned int)(~ v_9);
    result = (unsigned char)((p * (long long)v) % (p * (long long)p_5 + 176LL) + p_7[2]);
  }
  else {
    v_13 = (unsigned char)((unsigned int)((float)(-40549 + (int)p_15) - (
                                          545.302062988f - (float)p)) % (
                           p_5 + 42U));
    result = (unsigned char)(! ((long long)(- v_13) + (p << (p_5 & 63U))));
  }
  return result;
}

