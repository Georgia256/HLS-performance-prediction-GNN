#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 611701709
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned int p_4, int p_6,
                unsigned int p_13[3], char p_19)
{
  int v_17;
  double v_15;
  unsigned short v_11;
  float v_9;
  float v;
  signed char result;
  v_17 = 63810;
  v_15 = (double)p_6;
  v_9 = 310.75088501f;
  v = 2820668672.f;
  result = (signed char)(v_15 - (double)(v_17 * ((int)p_19 % 166)));
  while ((unsigned long long)(p | 56671UL) == (4294944302ULL * ((unsigned long long)p_4 % 18446744072988795745ULL)) * (unsigned long long)(
                                              (unsigned int)(- result) % (
                                              p_4 * (unsigned int)p_6 + 764U))) {
    v_11 = (double)v_9 + ((double)v + -7.30196983137e+37);
    v_11 = (unsigned short)((29133 / ((int)(- result) + 940)) / ((int)(- v_11) + 629));
    v = (float)(9195 + (int)((unsigned short)7441653760.f));
    result = (signed char)(! (602576552UL * (unsigned long)(p_13[2] + (unsigned int)p_6)));
  }
  while_0_break: ;
  return result;
}

