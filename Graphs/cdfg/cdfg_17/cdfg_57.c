#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 419223593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned int p_4, double p_7, float p_11,
          unsigned short p_15)
{
  unsigned char v_21;
  unsigned long v_19;
  unsigned long v_17;
  unsigned int v_13;
  unsigned int v_9;
  float v;
  short result;
  v_21 = (unsigned char)76;
  v_19 = (unsigned long)p_4;
  v_9 = 4294904651U;
  if ((double)(177 / (((int)p_15 - (int)((unsigned short)p_7)) + 897)) / 114. != (double)(
      ((int)((unsigned char)p) % ((int)v_21 + 655) + ((int)((unsigned short)p_11) + 28396)) + 
      (195 >> (v_9 & 7U)) % 16058)) {
    v_17 = v_19;
    v_9 = (unsigned int)3.94798446645e+37f;
    v_13 = (unsigned int)((unsigned long)(~ (! v_9)) / (v_17 + 144UL));
  }
  else v_13 = (unsigned int)(! ((long long)p_15 / 59623334LL));
  if ((float)v_13 != (float)(-2425LL + (long long)((int)p_15 - 18)) / (
                     2.97265091831e-06f / ((float)(28135ULL - (unsigned long long)p_4) + 917.f) + 606.f)) 
    result = (short)(77 * (int)((char)6591193088.f));
  else {
    v_9 = (unsigned int)(! (! (-23980LL - (long long)p_11)));
    v = (float)(! (~ v_9 ^ 4294949188U));
    result = (short)((double)(((unsigned int)p / (p_4 + 662U)) / ((unsigned int)(- v) + 857U)) - 
                     - p_7 / -3.31936094522e+38);
  }
  return result;
}

