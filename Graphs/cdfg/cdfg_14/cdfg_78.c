#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 393368613
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, int p_5, int p_7, unsigned long p_11,
                  double p_17)
{
  unsigned int v_15;
  int v_13;
  unsigned long v_9;
  long long v;
  unsigned char result;
  v_15 = 1733U;
  v_9 = 835098220UL;
  v = (long long)p_5;
  result = (unsigned char)57;
  v_13 = 0;
  while ((long long)((-614.496398926f / ((float)v + 453.f)) / ((float)(! p) + 251.f)) % (
         (long long)p_5 / 486761168LL + 988LL) < (long long)((unsigned long)p_7 / (
                                                             (v_9 | p_11) + 904UL) ^ 43478UL)) {
    v_15 = (unsigned int)(35789UL % (unsigned long)(! v_15 + 913U));
    result = (unsigned char)(- ((unsigned long)-720.963989258f % (p_11 + 340UL) - (unsigned long)(- p_17)));
    v_9 = (unsigned long)((double)((unsigned int)(v_13 - p_5) + (unsigned int)p_7 % (
                                                                v_15 + 341U)) - 2.86717321371e+38);
  }
  while_0_break: ;
  return result;
}

