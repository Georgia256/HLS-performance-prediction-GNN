#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 98930433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, unsigned char p_13[3], long long p_17, unsigned int p_19)
{
  unsigned long long v_21;
  double v_15;
  int v_11;
  unsigned long v_9;
  short v_7;
  short v_4;
  unsigned long v;
  long result;
  v_21 = (unsigned long long)p_17;
  v_15 = 7245511429.36;
  v_11 = (int)p_19;
  v_9 = 4294933246UL;
  v_7 = (short)29040;
  v_4 = (short)p_13[2];
  v = 4294905174UL;
  result = 1022222557L;
  if ((unsigned long)(~ p + (int)v_7) - ~ (v % (unsigned long)(p + 322)) >= 772452996UL) {
    v_11 = (int)p_13[0];
    v_4 = (short)(- (((int)p_13[0] % (p + 430)) * p));
    v_7 = (short)(~ (~ (~ 360501348ULL)));
  }
  else {
    v_11 = (int)((unsigned long long)(- v_11) - ((unsigned long long)(- v_4) & 
                                                 v_21 * (unsigned long long)v_7));
    v_7 = (short)((v_15 + 806555797.) / ((double)(p_17 % (long long)(
                                                  v_9 + 407UL)) + 316.) + (double)p_19);
    v = (unsigned long)6973874688.f;
  }
  while ((long long)((v - (unsigned long)v_4) % (unsigned long)(p * 16 + 580)) / -930659823LL > (long long)v_7) {
    v = (unsigned long)v_11 % (v_9 / 6965UL + 383UL);
    v_11 = ! 42;
    result = (long)(- ((v_11 / ((int)v_7 + 680)) % (p + 827)));
    v_4 = (short)(- (- (7410543616.f - (float)result)));
  }
  while_0_break: ;
  return result;
}

