#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 920308839
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, short p_11, short p_13, short p_15, unsigned long long p_19)
{
  unsigned short v_17;
  float v_9;
  float v_7;
  unsigned long v_5;
  double v;
  double result;
  v_7 = (float)p_19;
  v_5 = (unsigned long)p_13;
  v = (double)p_13;
  result = (double)p;
  if (v_7 / (-60.f / (v_7 + 868.f) + 169.f) - (float)((long)(! p_15) - 
                                                      (long)p_13 / 734278268L) > 0.f) {
    v_7 = (float)19494ULL;
    v_5 = (unsigned long)(! -61078L);
    v = (double)(p / ((int)(- v_7) + 795) - 241);
  }
  else {
    v_17 = (unsigned short)(61173 ^ ! (- p));
    v = (double)((unsigned long long)((int)p_15 % ((int)v_17 + 1019) + (int)(
                                      (double)p_19 + v)) / (- (18446744073371221812ULL % (unsigned long long)(
                                                               p + 557)) + 325ULL));
    result = (double)((long)p_15 * 7255L);
  }
  while (-35755. <= ((result - -1.82884357743e+38) - (double)p * v) * (double)(
                    13459UL - ((unsigned long)v + v_5))) {
    v_9 = v_7 - 297658976.f;
    v_7 = (float)((int)((unsigned char)v_9) & 157);
    v = (double)(64ULL * ! (18446744073058072281ULL - (unsigned long long)p_13));
    v = (double)(v_5 / ((unsigned long)(- v) + 661UL) - (unsigned long)((int)(
                 (double)p_11 / -1.63737245269e+38)));
  }
  while_0_break: ;
  return result;
}

