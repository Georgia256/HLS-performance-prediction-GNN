#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071661908
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p[3][3], unsigned int p_5,
                       unsigned long long p_13, unsigned int p_17, short p_19)
{
  short v_15;
  unsigned int v_11;
  unsigned char v_9;
  float v_7;
  short v;
  unsigned long long result;
  v_15 = (short)-13682;
  v_9 = (unsigned char)p_17;
  v_7 = (float)p_19;
  v = (short)28737;
  result = (unsigned long long)p_5;
  v_11 = ! (! p_17) % (unsigned int)(((int)v_9 * (int)p_19 - 51190) + 541);
  while ((unsigned long long)4.44326797893e+37f <= ((unsigned long long)(
                                                    p[1][2] % (61 * p[2][2] + 337)) | 
                                                    (result + (unsigned long long)v) / (unsigned long long)(
                                                    (p_5 + (unsigned int)v_7) + 278U))) {
    v_9 = (unsigned long)v_11 * (unsigned long)((long)v_9 % 19815L);
    v = (short)p_17;
    v_7 = (float)v_15;
    result = p_13;
  }
  while_0_break: ;
  return result;
}

