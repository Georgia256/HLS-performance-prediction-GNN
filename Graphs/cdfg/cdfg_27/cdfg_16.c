#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 9146548
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, double p_15, unsigned long long p_17)
{
  long v_13;
  int v_11;
  unsigned long v_9;
  int v_7;
  float v_4;
  long v;
  unsigned long result;
  v_13 = (long)p_15;
  v_11 = -434864060;
  v_7 = -45409;
  v = (long)p_17;
  result = (unsigned long)p;
  if (((unsigned long long)v + p / (unsigned long long)(v_11 + 1001)) + (unsigned long long)(~ result) > (unsigned long long)(- (- (
      p_15 + (double)p_17)))) {
    v_4 = (float)(! (~ (result % 3469536806UL)));
    v_13 = (long)p;
    v_9 = result << (((unsigned long long)(v_11 >> 20) + (p + p)) & 31ULL);
  }
  else {
    v_7 = (int)(p - ((unsigned long long)-3.07356045147e+38f / (p + 645ULL)) / 66ULL);
    v_9 = (unsigned long)(! p);
    v_4 = (float)(- (481672113UL / (result + 101UL)));
  }
  while ((unsigned long long)((v - -8L) + (long)(- v_4)) / (p + 117ULL) <= (unsigned long long)(! (
         v_7 ^ (int)(-1069048832.f / (v_4 + 996.f))))) {
    result = v_9 % 210UL;
    v = (long)(((unsigned int)(740.068908691f - (float)v_11) ^ 3943944584U) + (unsigned int)-9.12562085535e+37);
    v_11 = (int)(-331L * - (- v_13));
    v_4 = (float)(! 0);
  }
  while_0_break: ;
  return result;
}

