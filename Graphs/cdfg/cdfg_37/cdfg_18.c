#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 417403245
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, double p_4[1], unsigned long long p_7, char p_9,
          double p_15)
{
  int v_19;
  float v_17;
  long long v_13;
  unsigned long v_11;
  signed char v;
  short result;
  v_19 = -934493699;
  v_17 = (float)p;
  v_13 = (long long)p;
  v = (signed char)p_7;
  v_11 = (unsigned long)((long long)(- ((int)((signed char)p_4[0]) - (int)v)) % (
                         0LL % ((long long)(- v_17) + 49LL) + 679LL));
  if ((long long)((double)(- (v_17 - 37838.f)) / (123. * - p_4[0] + 804.)) != 
      (long long)v_19 * (-72LL - (long long)v_11 / (v_13 + 435LL))) {
    v = (signed char)p_7;
    result = (short)((int)(! p) / ((int)((short)p_4[0]) + 506) + (int)(~ v));
  }
  else {
    v_11 = (unsigned long)(- ((double)v_13 - p_15) / ((double)p_9 + 951.));
    result = (short)(4294967211UL + - (v_11 / 30UL));
    result = (short)((int)p_9 + (int)((char)((float)(! result) * -4.41509317669e+37f)));
  }
  return result;
}

