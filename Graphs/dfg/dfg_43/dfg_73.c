#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1073636387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long long p_5[5][1],
         unsigned long long p_7, unsigned long p_11, float p_13)
{
  long v_9;
  double v;
  char result;
  v_9 = (long)(- ((double)(- p_13) / -5170193245.77));
  v = (double)((! (p_7 - 18446744073709551558ULL) ^ (unsigned long long)(
                ((unsigned long)v_9 - p_11) + 31266UL)) * 18446744073709494308ULL);
  result = (char)p_5[0][0];
  result = (char)((4005234323U - (unsigned int)((int)((char)(- v)) % (
                                                (int)(~ result) + 924))) * (unsigned int)(
                  (double)(~ p) * 2.4579749408e+29));
  return result;
}

