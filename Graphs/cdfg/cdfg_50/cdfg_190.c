#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 287124036
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned int p_5, unsigned short p_7,
         unsigned long long p_9[3][5], unsigned int p_11)
{
  unsigned char v_13;
  short v;
  char result;
  v_13 = (unsigned char)p;
  if ((unsigned long long)v_13 / 16516ULL <= (362197155ULL - (unsigned long long)-8.7759805996e+37f % 272025498ULL) * (unsigned long long)p) {
    v = (short)(84LL * (long long)(p_5 - (unsigned int)(- p_7)));
    result = (char)((unsigned long long)(! (3294546712UL * p)) - ~ ((unsigned long long)v | 46023ULL));
  }
  else result = (char)(~ ((unsigned int)(! p_7) % 4294934289U));
  return result;
}

