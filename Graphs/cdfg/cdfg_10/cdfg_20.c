#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 537898227
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p[4][2], unsigned int p_5[2][1], unsigned long p_13[2][1],
         unsigned char p_15, long p_23)
{
  unsigned short v_21;
  long v_19;
  long long v_17;
  double v_11;
  double v_9;
  unsigned int v_7;
  int v;
  long result;
  v_21 = (unsigned short)p_15;
  v_19 = 38226L;
  v_17 = (long long)p_23;
  v_11 = (double)p[1][0];
  v_9 = (double)p_13[1][0];
  v = -143274786;
  result = 128562103L;
  while (- (43501.f * ((float)v_19 / (p[1][0] + 49.f))) <= (float)(52783 + (int)(
                                                                   (double)(
                                                                   p_5[1][0] + 4294967239U) - 
                                                                   -5822291822.82 / (
                                                                   (double)p_13[1][0] + 768.)))) {
    v_21 = (long)v_21 + 855372142L;
    v_9 = (double)v_19;
    v_11 = (double)(v_17 * (long long)p_23);
    v_19 = 12968L;
  }
  while_0_break: ;
  if (~ (53729L - result) / (long)(! (v - v) + 488) > (long)((-315.468963184 + (double)(
                                                              (int)p_15 * v)) / (
                                                             - (v_9 / (
                                                                (double)v_17 + 243.)) + 724.))) {
    v = (int)v_11;
    v_7 = (unsigned int)(- v_9);
    result = (long)((unsigned int)((float)(v - 8953) / (p[0][1] / 1011.f + 321.f)) - ~ (
                    p_5[1][0] ^ v_7));
  }
  else result = (long)(! (~ (~ p_13[0][0])));
  return result;
}

