#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 126693880
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned short p_7[2][1], float p_11, float p_15,
                  unsigned long p_17)
{
  short v_19;
  unsigned long long v_13;
  unsigned char v_9;
  int v_4;
  short v;
  unsigned char result;
  v_19 = (short)17985;
  v_13 = 18446744073709505630ULL;
  v_9 = (unsigned char)p_11;
  v_4 = 35208;
  v = (short)p_7[0][0];
  result = (unsigned char)p_15;
  if (8 != -7 % (((23665 - (int)v) - (int)v_19 % 112) + 211)) {
    v = (short)v_4;
    v_9 = (unsigned char)v_13;
    result = (unsigned char)(- (- p_11) - 705.089416504f);
  }
  else {
    v_13 = (unsigned long long)((float)((int)(- p_7[0][0]) * (-71 + (int)((char)p_11))) - 
                                (p_11 / (p_15 + 12.f)) * (float)(p_17 % 4294940188UL));
    v_4 = 822893557;
    v = (short)(p_11 * (float)(v_13 * (unsigned long long)p_7[0][0]));
  }
  while (((unsigned int)(! ((int)v | v_4)) ^ (unsigned int)p * 23791820U) >= (unsigned int)p_7[0][0]) {
    result = (int)v_9 >> 7ULL;
    v_4 = (int)p;
    v_9 = (unsigned char)p;
    v = (short)(- (- p_11 - -54299.f));
  }
  while_0_break: ;
  return result;
}

