#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 791762225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, unsigned long long p_9, long p_15, float p_19,
          char p_21)
{
  unsigned long long v_23;
  int v_17;
  unsigned short v_13;
  double v_11;
  long long v_6;
  int v_4;
  long v;
  float result;
  v_23 = p_9;
  v_13 = (unsigned short)44061;
  v_11 = 5.42725939666e+37;
  v_6 = 35827LL;
  v = p_15;
  if ((int)(40904. - v_11) > 0) {
    v_17 = (int)(- (! (p_15 * (long)p)));
    v_4 = (int)((double)(- ((float)v / (p_19 + 225.f))) + (-2804338720.53 / (
                                                           v_11 + 506.)) * 226.);
    v_6 = (long long)(- (- p_19 * 11191.f));
  }
  else {
    v_17 = (int)((unsigned long long)((long long)(181 | (int)p_21) * (
                                      (long long)p_15 - -39892151LL)) - 
                 (unsigned long long)-8818260992.f % (v_23 + 614ULL));
    v_13 = (unsigned short)(- (- (p_19 * 1.73890062357e+38f)));
    v_4 = v_17;
  }
  if (9634LL != (long long)((unsigned long)((long)v_13 / ((10704L ^ p_15) + 2L)) & (unsigned long)(! (
                            249809033U + (unsigned int)v_17)))) {
    v = (long)((long long)(! v_4) * v_6 ^ (long long)(33714L - (-36126L - (long)v_4)));
    result = (float)((-9L | v) % -3212L) / -2791448832.f;
    result = result;
  }
  else {
    v_11 = 825.945472765;
    result = (float)v_11;
    result = (float)((unsigned long long)(16778 ^ (int)((short)((float)p - result))) * p_9);
  }
  return result;
}

