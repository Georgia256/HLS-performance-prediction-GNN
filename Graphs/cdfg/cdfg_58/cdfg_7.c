#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1058473449
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long p_7, unsigned char p_9,
                  unsigned long long p_11, unsigned int p_13)
{
  float v_23;
  int v_21;
  short v_19;
  double v_17;
  signed char v_15;
  float v_5;
  double v;
  unsigned long result;
  v_23 = 3.17582091268e+38f;
  v_21 = 51293;
  v_19 = (short)p_13;
  v_17 = (double)p_9;
  v_15 = (signed char)p_13;
  v_23 = v_23;
  if ((int)((double)((long)(-6337 * (int)v_15) / ((long)v_17 / -510904444L + 99L)) + (
            (double)(p_11 + (unsigned long long)p_9) + p * (double)v_19)) >= 
      (v_21 * (int)(v_23 + (float)p_7)) % 448) result = (unsigned long)(- p);
  else {
    v_5 = (float)(((unsigned long long)p_9 / (p_11 + 189ULL) - (unsigned long long)p_13) - (unsigned long long)p_13);
    v = (double)340018488U;
    result = (unsigned long)(1.84467440727e+19 - (v + (double)v_5) / (
                                                 (double)p_7 + 257.));
  }
  return result;
}

