#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 123933682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, double p_4, char p_6, short p_8,
                   unsigned int p_11)
{
  double v_25;
  short v_23;
  double v_21;
  unsigned long v_19;
  long long v_17;
  float v_15;
  short v_13;
  int v;
  unsigned short result;
  v_25 = (double)p;
  v_21 = (double)p;
  v_19 = 11160UL;
  v_17 = -147756788LL;
  v_15 = 9817957376.f;
  v_13 = (short)11950;
  v = -62426;
  result = (unsigned short)59713;
  if (p_4 / (double)(- ((float)v_17 * -1344265472.f) + 189.f) >= (double)(
      46 - ! ((int)result + (int)result))) {
    v_13 = (short)((double)(~ v_17) * - p_4 - (double)((unsigned long)((int)v_13) / (
                                                       ((unsigned long)p_6 + v_19) + 555UL)));
    result = (unsigned short)p_11;
    v_15 = (float)(! (-1067841004L));
  }
  else {
    v_23 = (short)((long long)(522678252 >> (-202812484 % (v + 550) & 31)) ^ 
                   (581020799LL & (long long)p_6) % (long long)((4294923284UL & (unsigned long)v_25) + 393UL));
    result = (unsigned short)((long long)((unsigned long)((int)v_23 % -58) / (
                                          (unsigned long)v_21 / 22005UL + 384UL)) + -762716383LL);
    v = (int)(- v_21);
  }
  while ((unsigned int)((((int)((unsigned short)p) * (int)result) / (
                         (int)result * (int)((unsigned short)p_4) + 284)) % (
                        ((int)(~ p_6) + (int)(- p_8)) + 65)) < (unsigned int)(
                                                               v / ((int)result + 652) >> (
                                                               (int)-7908810752.f & 31)) / (
                                                               p_11 + 907U)) {
    v_17 = (int)v_15 - (int)v_13 * 86;
    v_13 = (short)v_17;
    v_15 = (float)v_17;
    v = (int)(((6236559642.86 / ((double)result + 439.)) * (double)(~ p_6)) / (
              (double)((unsigned int)v_15 - 39043U) + 927.));
  }
  while_0_break: ;
  return result;
}

