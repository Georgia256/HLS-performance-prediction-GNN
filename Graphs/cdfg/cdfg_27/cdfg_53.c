#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 266963803
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned char p_9, double p_17)
{
  signed char v_19;
  long v_15;
  float v_13;
  char v_11;
  short v_6;
  short v_4;
  double v;
  char result;
  v_19 = (signed char)-25;
  v_15 = (long)p_9;
  v_13 = (float)p_17;
  v_11 = (char)p_9;
  v_6 = (short)p_9;
  v = 1839413162.88;
  v_6 = (short)(v + (double)((long long)v_6 - 11732LL));
  if ((double)(! v_6) <= (double)(((int)p ^ (int)p_9) % (((int)v_11 - (int)v_11) + 143)) + (
                         9104. + p_17 * (double)v_19)) {
    v_13 = (float)((int)(- (v_13 * (float)v_15)) / (- ((int)((char)p_17) ^ (int)v_11) + 716));
    v_4 = (short)((float)(16395 ^ (int)p * (int)p_9) + ((float)((int)v_11 + (int)p_9) + (
                                                        (float)p + v_13)));
    result = (char)(- (- v) - (double)((int)v_4 % ((int)v_6 * (int)p + 233)));
  }
  else result = (char)p_9;
  return result;
}

