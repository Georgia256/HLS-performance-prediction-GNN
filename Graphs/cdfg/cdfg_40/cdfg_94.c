#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 647042651
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p[5][4][3], int p_5, int p_9, unsigned int p_11,
                unsigned short p_13)
{
  unsigned long v_15;
  int v_7;
  int v;
  signed char result;
  v_15 = 4294916168UL;
  if (! (v_15 + (unsigned long)(p_5 / ((int)9380559872.f + 350))) != (unsigned long)p[2][3][0]) 
    v_7 = 1 | (-152481535 >> ((int)p_13 & 31)) % ((int)p_13 / ((int)p_13 + 22) + 167);
  else v_7 = 9 & p_5;
  if (v_7 >> ((unsigned int)(p_9 - 501) / (p_11 / (unsigned int)((int)p_13 + 151) + 276U) & 31U) < (int)p_13) {
    v = (int)(! p[0][3][1]);
    result = (signed char)(- (822975617LL - (long long)v / -154475732LL));
  }
  else result = (signed char)(p_5 / (- (83 / (p_5 + 484)) + 30));
  return result;
}

