#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 750177182
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, char p_5)
{
  int v_7;
  unsigned long long v;
  char result;
  v_7 = (int)p_5;
  v = (unsigned long long)((16338UL / (unsigned long)((int)p_5 + 999)) * (unsigned long)(- p)) & (
      679798398530ULL & (unsigned long long)(- v_7));
  result = (char)(18446744073709551583ULL - ! ((unsigned long long)p / (
                                               v + 296ULL)));
  return result;
}

