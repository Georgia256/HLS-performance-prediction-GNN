#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175198927
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned char p_5, unsigned int p_17,
              float p_19, unsigned int p_21)
{
  unsigned long long v_23;
  double v_15;
  unsigned char v_13;
  double v_11;
  double v_9;
  unsigned int v_7;
  unsigned long v;
  long long result;
  v_23 = (unsigned long long)p_21;
  v_15 = 1.17312315888e+38;
  v_13 = (unsigned char)p_21;
  v_9 = 7574345443.84;
  v_7 = (unsigned int)p_19;
  v = (unsigned long)p;
  result = -54794508LL;
  if ((float)(p_21 % 103U) / ((((float)result + p_19) + (float)p_5) + 818.f) >= (float)(
      (unsigned long long)(v_7 + (unsigned int)(- p_19)) + (unsigned long long)p_21 / (
                                                           ((unsigned long long)p_21 + p) + 935ULL))) {
    v_15 = v_15;
    v_7 = ~ (- (- p_21));
    v_7 = ! (- p_21) + (unsigned int)((double)((unsigned long)v_7 % 22053UL) - (
                                      v_15 - (double)p));
  }
  else {
    v_15 = (double)((unsigned long)((double)v_23 / ((v_9 + (double)p_17) + 306.)) / (
                    (unsigned long)(~ p_17) / (33320UL * v + 485UL) + 506UL));
    v_7 = (unsigned int)-8.3336443173e+37;
    v_13 = (unsigned char)213;
  }
  while ((unsigned long long)(- (- result)) * (((unsigned long long)v & p) | (unsigned long long)(! p_5)) < 91070204ULL) {
    v = v_7 % 21480U;
    v_9 = (double)(! (p_17 * (unsigned int)p_19 << (p & 31ULL)));
    v_11 = - ((v_15 + (double)p) - 0.);
    result = (long long)(- v_9 * ((v_11 / -1.57211701854e+38) * (double)(~ v_13)));
  }
  while_0_break: ;
  return result;
}

