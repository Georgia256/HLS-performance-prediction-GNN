#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 611595038
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[5][3], unsigned long long p_4[5], char p_6,
         signed char p_8, short p_11[1])
{
  unsigned short v_13;
  unsigned int v;
  long result;
  v = 403908017U;
  v_13 = (unsigned short)(v - (unsigned int)((6842 - (int)p_6) + (int)(! p_11[0])));
  if ((unsigned long)(- v) < (unsigned long)((long)((int)p_11[0] + ((int)v_13 << (
                                                                    (int)p_6 & 15))) ^ -177004376L)) 
    result = -25893L;
  else result = (long)(- ((unsigned long long)p[1][2] % (p_4[0] + 551ULL)) - (unsigned long long)(
                       35 - (int)(- p_6)));
  return result;
}

