#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950104789
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, short p_5, double p_9, signed char p_11,
                   unsigned long p_15)
{
  unsigned short v_19;
  unsigned int v_17;
  signed char v_13;
  unsigned short v_7;
  signed char v;
  unsigned short result;
  v_19 = (unsigned short)p_15;
  v_17 = (unsigned int)p_5;
  v_7 = (unsigned short)p;
  if ((long long)((unsigned int)((int)p_11 % ((int)p_5 + 220)) * (v_17 / (unsigned int)(
                                                                  (int)v_19 / (
                                                                  (int)p_11 + 78) + 299))) <= 
      0 / (long long)(((int)((char)5363147633.05) - (int)p) + 48) << (
      ((unsigned long)((int)p_5 * (int)p_5) - ! p_15) & 63UL)) {
    v_13 = (signed char)(- (- (p_9 * (double)p_5)));
    v_7 = (unsigned short)(((unsigned long)((int)v_13 - (int)v_7) + - p_15) % 1073415598UL);
    v = (signed char)(0 - (long long)(((int)p_5 % ((int)v_7 + 168)) % (
                                      (int)((signed char)p_9) % ((int)p_11 + 524) + 1003)));
  }
  else v = (signed char)((int)p / ((int)((char)(- p_9)) + 34));
  result = (unsigned short)(171 - ((int)p - (int)p) * ((int)v + (int)p_5));
  return result;
}

