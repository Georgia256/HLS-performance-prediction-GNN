#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 7782316
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, unsigned char p_7, unsigned char p_15,
         unsigned long long p_17[4][1][5])
{
  unsigned char v_23;
  unsigned short v_21;
  float v_19;
  long long v_13;
  unsigned long long v_11;
  double v_9;
  signed char v_5;
  float v;
  char result;
  v_23 = (unsigned char)p;
  v_21 = (unsigned short)9468;
  v_19 = (float)p_7;
  v_13 = 2587LL;
  v_11 = (unsigned long long)p_15;
  v_9 = (double)p_7;
  v_5 = (signed char)109;
  while (52120 <= ((int)((unsigned char)v_19) % ((int)p_7 + 558)) % (
                  (int)(- v_19) + 726) << ((int)v_5 & 31)) {
    result = (int)v_21 - (int)((unsigned short)-420.006959145);
    v_5 = (signed char)(- (- -0.0322754122317f));
    v_11 = (unsigned long long)((double)(3347616256.f + v_19) * (v_9 - (double)v_19)) % (
           ((p_17[1][0][3] + (unsigned long long)v_23) - 45763ULL) + 50ULL);
    v_19 = (float)(- ((int)p_15 * (int)(- result)));
  }
  while_0_break: ;
  if ((unsigned long long)v_9 - (v_11 * 56ULL + (unsigned long long)(
                                 v_13 * (long long)p_15)) != p_17[2][0][1]) 
    result = (char)(-1LL / (long long)(- (~ p) + 414U));
  else {
    v = (float)(- ((int)(~ p_7) / 627));
    v_5 = (signed char)(! (- (! p_7)));
    result = (char)((unsigned int)(((int)((signed char)v) + (int)v_5) / 4927) ^ ~ (! p));
  }
  return result;
}

