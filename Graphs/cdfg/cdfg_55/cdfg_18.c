#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1009632439
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, unsigned int p_4[3][2], long p_6, unsigned int p_8)
{
  unsigned int v;
  int result;
  v = 62908U;
  v = (unsigned int)((unsigned long)(- p_6) % (unsigned long)(~ (! v) + 723U));
  if ((unsigned long)(73U & - (~ p_8)) >= (unsigned long)(! v << 28) % (
                                          (4294908949UL ^ (unsigned long)(
                                           p_8 & 63592U)) + 38UL)) result = (int)(
                                                                   - (
                                                                   (unsigned int)p % (
                                                                   p_4[1][1] + 709U)) % 45323U);
  else result = (int)p_6;
  return result;
}

