#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 977240223
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned long p_9, float p_15, short p_17[5])
{
  unsigned long v_19;
  unsigned int v_13;
  double v_11;
  unsigned long v_7;
  unsigned short v_4;
  float v;
  unsigned long result;
  v_13 = (unsigned int)p;
  v_11 = (double)p;
  v_7 = p_9;
  v_4 = (unsigned short)58354;
  v = (float)p;
  result = 458677541UL;
  v_7 = v_7;
  while ((unsigned long)((int)((unsigned short)(v + 4294959104.f)) * (int)(- (- v_4))) >= (
         ((unsigned long)(p - -660835297) | v_7 / (unsigned long)((int)v_4 + 607)) | ~ (
         p_9 * 503832254UL))) {
    v_19 = v_13 + (unsigned int)((int)((short)v_11) * 30226);
    v_13 = (unsigned int)((unsigned long)p_17[3] | - (39400785UL + v_19));
    v_4 = (unsigned short)((int)p_15 % (25486 * (int)(- v) + 354));
    v_7 = 38093UL * ((unsigned long)(- p) - (p_9 ^ (unsigned long)p));
  }
  while_0_break: ;
  return result;
}

