#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 784951132
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p[3][1][2], short p_13, unsigned short p_17)
{
  short v_15;
  signed char v_11;
  float v_9;
  float v_6;
  unsigned int v_4;
  char v;
  short result;
  v_15 = (short)p[2][0][1];
  v_11 = (signed char)-84;
  v_4 = (unsigned int)p_13;
  result = (short)23129;
  v_9 = (float)(~ ((int)p_13 & (int)result % ((int)p_17 + 970)) * 56667);
  v = (char)(~ ((unsigned int)v_15 + ((unsigned int)v_11 & 5827U)));
  v_6 = (float)4111653673UL;
  result = (short)((! ((unsigned int)v / (v_4 + 21U)) | (unsigned int)(
                    v_6 * (float)p[2][0][0] + (float)((int)((signed char)v_9) - (int)v_11))) + (unsigned int)(
                   ((int)p_13 ^ -6605) + (int)(! v_15)));
  return result;
}

