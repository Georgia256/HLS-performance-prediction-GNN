#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 29763559
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, float p_4, short p_7, double p_13,
                  float p_21)
{
  short v_23;
  long v_19;
  double v_17;
  short v_15;
  short v_11;
  short v_9;
  double v;
  unsigned long result;
  v_23 = (short)24657;
  v_19 = -26507L;
  v_17 = (double)p_21;
  v_15 = (short)p;
  if (399195339UL >= (unsigned long)(! ((34018U * (unsigned int)v_23) % (
                                        (unsigned int)-839.891447052 + 883U)))) {
    v_11 = (short)(((double)v_15 * v_17 - (double)(12644L - v_19)) * (double)(
                   (int)(-677812352.f + p_21) % ((int)((signed char)p_13) % -10 + 835)));
    v_9 = v_11;
    v_11 = (short)20;
  }
  else {
    v_11 = (short)-18758;
    v_9 = (short)-29097;
  }
  if (- ((int)p_7 % ((int)v_9 % ((int)v_9 + 127) + 350)) <= (int)(~ v_11) * 102 - (int)(- (
                                                            170. * p_13))) 
    result = (unsigned long)(393582234ULL * (unsigned long long)((int)(! p) - 40));
  else {
    v = (double)(18446744073372297348ULL - (unsigned long long)(- ((long)p + 960143002L)));
    result = (unsigned long)((float)(837774993ULL - (unsigned long long)(
                                     2.04894078196e+38f * p_4)) / (((float)(
                                                                    (int)((char)v) % 3) + 2.21550413822e+37f) + 754.f));
  }
  return result;
}

