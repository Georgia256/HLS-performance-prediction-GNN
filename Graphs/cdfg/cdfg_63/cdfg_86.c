#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475305384
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p[1][4], int p_5, unsigned char p_17[4])
{
  long v_15;
  float v_13;
  short v_11;
  int v_9;
  float v_7;
  long v;
  int result;
  v_15 = (long)p_17[2];
  v_11 = (short)31115;
  v_9 = -583679707;
  v_7 = (float)p_5;
  v = 209273405L;
  result = p_5;
  while ((int)p[0][1] != p_5 * (int)p[0][2] + ((int)v_7 & v_9 / 21)) {
    v_13 = (int)v_11 - -7;
    v_11 = (short)((int)((float)(692032212ULL % (unsigned long long)(
                                 result + 645)) / (v_13 / ((float)p[0][2] + 644.f) + 49.f)) % (
                   ! (v_9 ^ (int)p_17[2]) + 921));
    v = (long)(((int)((signed char)440.41192627f) * -9) / ((int)(v_13 / (
                                                                 (float)v_15 + 692.f)) + 498) + 
               ((int)v_11 % ((int)v_11 + 640)) / 17);
    v_9 = p_5;
  }
  while_0_break: ;
  result = (int)v;
  return result;
}

