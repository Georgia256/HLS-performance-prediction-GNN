#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 477706705
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, unsigned char p_11, unsigned int p_15,
                  unsigned short p_17[4])
{
  long v_13;
  short v_9;
  long v_6;
  unsigned int v_4;
  short v;
  unsigned long result;
  v_13 = 822801740L;
  v_9 = (short)p_15;
  v_6 = (long)p;
  v = (short)(~ ((int)((char)4.47689682326e+37) % 73));
  v_4 = (unsigned int)(~ ((unsigned long)v_13 * (unsigned long)((p_15 + 63U) - (unsigned int)(
                                                                28 * (int)p_17[1]))));
  v_6 = (long)((unsigned long)(! (124U + (p + p))) / (unsigned long)(
               ((v_6 - (long)(-27111 + (int)v_9)) + (long)p_11) + 507L));
  result = - ((unsigned long)(((unsigned int)v * v_4) / (v_4 + 94U)) ^ (unsigned long)v_6);
  return result;
}

