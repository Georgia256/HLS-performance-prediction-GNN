#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264242288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, float p_13, unsigned long p_17)
{
  float v_15;
  unsigned char v_11;
  long v_9;
  long long v_7;
  float v_5;
  long long v;
  float result;
  v_15 = p_13;
  v_11 = (unsigned char)p;
  v_9 = 58329L;
  v_7 = -860133304LL;
  v_5 = 2.02894212327e+38f;
  v = (long long)p;
  while ((long long)((50116 - (int)((unsigned short)-1.22483253208e+37f)) - (int)v_5) % (
         v_7 + 627LL) == 630508253LL * (long long)(- (~ v_9))) {
    v_9 = (int)v_11 % ((int)((unsigned char)483.302946296) + 499);
    v_11 = (unsigned char)((long long)p / (~ (v_7 + (long long)p_17) + 883LL));
    v = (long long)(- (- p_13) + (1.84467440737e+19f * v_15 - (float)(
                                  44372LL / (v + 707LL))));
    v_5 = p_13;
  }
  while_0_break: ;
  result = (float)(! (v * (long long)p) << 29UL);
  return result;
}

