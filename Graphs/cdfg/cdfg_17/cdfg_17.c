#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1019162779
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(void)
{
  unsigned int v_4;
  char v;
  unsigned long long result;
  v_4 = 446553160U;
  v = (char)123;
  result = 32700ULL;
  result = 864998956ULL * (result ^ (unsigned long long)v_4) + (unsigned long long)-2.14158656972e+38f;
  result = (unsigned long long)(- ((long)v / 214142563L)) / (! (18446744073371770729ULL + result) + 834ULL);
  return result;
}

