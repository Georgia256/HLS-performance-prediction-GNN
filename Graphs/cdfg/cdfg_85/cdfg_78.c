#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948921157
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, long p_4, unsigned long long p_11, unsigned int p_17,
              double p_19)
{
  double v_15;
  float v_13;
  int v_9;
  long v_7;
  unsigned long long v;
  long long result;
  v_9 = -23214;
  v = 19490ULL;
  result = 26040LL;
  v_7 = (long)(result * -508948022LL);
  while ((long long)((unsigned long)((long)(p + 523885484) / (! p_4 + 136L)) / (
                     - ((unsigned long)p % 4294918196UL) + 192UL)) <= 
         result - (long long)p) {
    v_15 = (unsigned long long)v_7 + v * 18446744073545996275ULL;
    v_13 = (float)(- (p_19 / ((double)v_9 + 827.) - -1761202861.38));
    v_9 = (int)(- ((double)v_13 / (v_15 + 1005.)) - (double)(p_17 % 646721308U << (
                                                             (unsigned int)(
                                                             p_19 * (double)p) & 31U)));
    result = (long long)((unsigned long long)((int)((double)p - -233.718553231) % (
                                              (-53479 + v_9) + 949)) - 
                         ~ p_11 / (- p_11 + 473ULL));
  }
  while_0_break: ;
  return result;
}

