#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 842222831
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, long p_4, signed char p_7, char p_11)
{
  long v_17;
  unsigned int v_15;
  unsigned char v_13;
  unsigned char v_9;
  double v;
  unsigned long long result;
  v_17 = (long)p_11;
  v_15 = 4166123605U;
  v_13 = (unsigned char)163;
  v_9 = (unsigned char)112;
  v = -1.51461928842e+38;
  result = 636872126ULL;
  v = (double)((unsigned long)(- (~ v_17)) / (((unsigned long)v_15 - (unsigned long)p_4) * (unsigned long)(- v) + 880UL));
  while ((result + (unsigned long long)p) - (unsigned long long)((int)(
                                                                 (double)p_4 * v) ^ 1) <= (unsigned long long)(
         (((int)p_7 << ((int)v_9 & 7)) - (int)p_11) / 11194)) {
    v_15 = (unsigned int)(~ p_11);
    v_9 = (unsigned char)((int)(~ p_7) % (- (53 % ((int)v_13 + 467)) + 1007));
    result = (unsigned long long)p_11 & 61913ULL * (unsigned long long)(- v_15);
  }
  while_0_break: ;
  return result;
}

