#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 692634337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned char p_4[3][1], unsigned char p_6,
          unsigned int p_8, unsigned short p_11)
{
  unsigned int v_13;
  unsigned char v;
  short result;
  v = (unsigned char)139;
  v_13 = 26772U;
  if ((unsigned int)(((int)((unsigned char)8.38201244684e+37) + (int)p_4[0][0]) % (
                     (int)(~ p_6) + 633)) % (p_8 + 533U) >= (unsigned int)v + (
                                                            (unsigned int)p_11 + 
                                                            4294932114U * v_13)) 
    result = (short)-88;
  else result = (short)p;
  return result;
}

