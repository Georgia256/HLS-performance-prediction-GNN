#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 683236772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, float p_5, float p_11, unsigned short p_17,
          unsigned short p_25)
{
  unsigned long v_27;
  unsigned long v_23;
  long long v_21;
  unsigned long v_19;
  unsigned char v_15;
  long v_13;
  float v_9;
  long v_7;
  long v;
  float result;
  v_27 = 3595281401UL;
  v_21 = -904276225LL;
  v_19 = 976045094UL;
  v_15 = (unsigned char)125;
  v_7 = (long)p_25;
  v = (long)p;
  result = -4774660608.f;
  v_13 = (long)((float)v + (float)((long long)v_15 % -740980915LL) * (
                           -9159.f * p_5));
  if (-31228LL >= v_21 - (long long)(((unsigned long)p_25 - v_27) << (
                                     (int)(! p) & 31))) {
    v_9 = (float)((long long)((long)p_11 % (-54795L / (v_13 + 158L) + 244L)) / (
                  (long long)((int)v_15 * (int)p_17) % ((long long)v_19 % (
                                                        v_21 + 1023LL) + 649LL) + 315LL));
    v = -38626L + (long)(- result - (float)(v_7 * (long)v_9));
    result = (float)((double)(((long)p ^ v) - (long)((int)p % ((int)((unsigned short)p_5) + 217))) + 
                     (-748.933528676 + (double)p) * (double)result);
  }
  else {
    v_27 = (unsigned long)((double)p + 9.36986603614e-45);
    v_23 = v_27;
    result = (float)((658680457ULL + (unsigned long long)v_23) % (unsigned long long)(
                     (int)p_25 * (int)p_17 + 204) & (unsigned long long)-111671768721.);
  }
  return result;
}

