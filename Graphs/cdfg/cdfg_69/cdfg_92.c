#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 76395765
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned int p_11[5])
{
  unsigned long v_13;
  long v_9;
  char v_7;
  unsigned int v_4;
  float v;
  unsigned char result;
  v_13 = (unsigned long)p;
  v_9 = (long)p;
  v_4 = 4294942073U;
  v = (float)p;
  result = (unsigned char)5;
  v_7 = (char)v_13;
  while ((unsigned long long)((double)(v * (float)(v_4 >> 27)) + -3510.01693125) > 
         - ((unsigned long long)p + 18446744073602304237ULL) * (unsigned long long)(~ p)) {
    result = v_9 - (long)((int)v_7 + 33);
    v_4 = 4294951539U;
    v_7 = (char)((unsigned long)(! (p_11[3] % (p_11[0] + 547U))) / ((
                                                                    4011105413UL - (unsigned long)p) + 440UL));
    v_4 = ! (- v_4 * (unsigned int)((int)result / 54216));
  }
  while_0_break: ;
  return result;
}

