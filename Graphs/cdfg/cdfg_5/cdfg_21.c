#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 84694068
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned long long p_9, unsigned short p_13,
                  unsigned long p_15, unsigned int p_23)
{
  signed char v_25;
  signed char v_21;
  float v_19;
  float v_17;
  long long v_11;
  char v_7;
  signed char v_4;
  long v;
  unsigned char result;
  v_25 = (signed char)110;
  v_21 = (signed char)97;
  v_19 = -1253128064.f;
  v_17 = -3.97160713538e+37f;
  v = (long)p_23;
  v_4 = (signed char)(127 - (int)((unsigned char)v_17));
  if (~ (- p_23 ^ 47U) >= (unsigned int)v_25) {
    v_7 = (char)((unsigned long long)v * ((p_9 - (unsigned long long)v) + - p_9));
    v = (long)(- (38365 * (int)v_7) - ((int)(- v_4) + (int)((signed char)(
                                       -7748449792.f - (float)p))));
    result = (unsigned char)((double)((v >> 26L) | (long)((int)v_4 + 46748)) * (
                             (double)((int)p - 164) / 9840176044.56));
  }
  else {
    v_17 = (float)(~ (~ ((int)v_21 % ((int)v_4 + 453))));
    v_11 = (long long)((int)p_13 - (int)((unsigned short)((float)(~ p_15) + 
                                                          v_17 / (v_19 + 380.f))));
    result = (unsigned char)(~ v_11);
  }
  return result;
}

