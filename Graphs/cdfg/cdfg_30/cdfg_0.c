#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 439146698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, char p_9, long long p_19, long p_21[3])
{
  long v_17;
  short v_15;
  unsigned long v_13;
  long long v_11;
  double v_7;
  double v_4;
  int v;
  float result;
  v_17 = 291692045L;
  v_15 = (short)-14963;
  v_13 = (unsigned long)p_19;
  v_7 = -3.17329627028e+38;
  result = (float)p_9;
  if ((60184LL | (long long)((v_13 + (unsigned long)v_15) | (unsigned long)(
                             v_17 * (long)p_9))) >= (long long)((float)(- p_19) - 
                                                                (result / 1203.05065918f) * (float)(
                                                                (long long)p_21[0] + p_19))) {
    v = (int)(~ -282271210L);
    v_4 = v_7;
    result = (float)p;
  }
  else {
    v_11 = (long long)7635265536.f;
    v = (int)(- ((long long)p_9 + ! v_11));
    v_4 = (double)p_9;
  }
  result = (float)((unsigned long)((-13 + v) * (int)(v_4 * (double)result)) + 3306796885UL);
  return result;
}

