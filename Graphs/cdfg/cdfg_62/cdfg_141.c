#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 380606816
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, float p_11, unsigned int p_21)
{
  unsigned long long v_19;
  unsigned long v_17;
  unsigned long v_15;
  unsigned long v_13;
  int v_9;
  unsigned short v_7;
  double v_4;
  char v;
  char result;
  v_19 = (unsigned long long)p_11;
  v_17 = (unsigned long)p_11;
  v_15 = (unsigned long)p;
  v_13 = (unsigned long)p_11;
  v_9 = -619;
  v_7 = (unsigned short)38963;
  v_4 = 2.7711419531e+38;
  v = (char)-100;
  result = (char)p;
  if (v_19 != (unsigned long long)((unsigned int)((double)v_17 + (double)result * v_4) ^ ! (
                                   p_21 + (unsigned int)v_9))) {
    v_4 = (double)((unsigned long)((int)((unsigned short)(159.f * p_11)) + (int)v_7) * ! (
                   736961098UL | v_13));
    result = (char)((7701852160.f * p + (float)((long)v + 43275L)) / (
                    (p_11 + p) * - p_11 + 315.f));
    v_4 -= (double)((float)((long)v_9 % -56900L) - - p);
  }
  else {
    v_19 = (unsigned long long)(((unsigned int)((int)((signed char)v_4) - -29) * - p_21) / (unsigned int)(
                                (int)(- (- result)) + 960));
    v_4 = (double)(4294918640ULL / (((unsigned long long)(v_15 & v_17) - (
                                     v_19 << 25ULL)) + 983ULL));
    result = (char)((-3.69053683598e+42 - (v_4 + 2.97945606193e+38)) * (double)(
                    - p_11 / 476.f));
  }
  while (4139367218U <= (unsigned int)((float)(- result) + -5584285184.f)) {
    v = v_4 - 53414.;
    v_7 = (unsigned short)35346;
    v_4 = (double)v_7;
    result = (char)((float)(! (! v)) + p);
  }
  while_0_break: ;
  return result;
}

