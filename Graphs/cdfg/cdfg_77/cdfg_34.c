#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 968246916
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, signed char p_11, unsigned short p_13)
{
  signed char v_19;
  unsigned short v_17;
  char v_15;
  short v_9;
  unsigned long v_7;
  int v_5;
  float v;
  int result;
  v_19 = (signed char)-57;
  v_17 = (unsigned short)47235;
  v_15 = (char)p_13;
  v_7 = (unsigned long)p_11;
  v_5 = -535008798;
  v = (float)p;
  result = (int)p_13;
  v_9 = (short)(- (~ p) / (p + 351UL));
  while (v / ((float)((v_5 * 135) * 835) + 479.f) <= -111.f) {
    v_9 = (unsigned long)v_9 / ((v_7 - 4294967252UL) + 1013UL);
    v_5 = ! ((int)v_17 * (int)p_13) - ((int)v_19 - (int)(~ p_11));
    v_7 = (unsigned long)(((int)p_11 | (int)p_13) + 65275) + ! ((unsigned long)v_15 * 3777348009UL);
    v = (float)(p % 4294967271UL);
  }
  while_0_break: ;
  return result;
}

