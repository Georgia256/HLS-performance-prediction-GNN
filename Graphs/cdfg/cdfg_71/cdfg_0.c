#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 570528358
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, long p_9, float p_13, unsigned long p_15,
                       float p_21)
{
  unsigned long v_27;
  int v_25;
  char v_23;
  int v_19;
  float v_17;
  signed char v_11;
  unsigned char v_7;
  float v_5;
  unsigned short v;
  unsigned long long result;
  v_25 = -46230;
  v_23 = (char)p_13;
  v_19 = (int)p_15;
  v_17 = -589.375854492f;
  v_7 = (unsigned char)p_15;
  v_5 = -1.5226447046e+38f;
  v = (unsigned short)p_21;
  result = 18446744073119526492ULL;
  if (- (1576UL << (18446744073233336458ULL % (unsigned long long)(p_9 + 69L) & 31ULL)) <= (unsigned long)(
      (double)(- ((int)v_23 - (int)v)) * 351358247208.)) {
    v_5 = (float)p;
    v_7 = (unsigned char)(- (((int)((char)p_21) & (int)v_23) * v_25));
    v_19 = -72;
  }
  else {
    v_27 = 4294967173UL;
    v_17 = (float)(- (- result) * (unsigned long long)(-24 - (int)(~ v_7)));
    v_7 = (unsigned char)(((p_15 + (unsigned long)v_17) - p_15) - (unsigned long)(
                                                                  -9074 & (int)v_7) * ~ v_27);
  }
  if (19648ULL >= (unsigned long long)(- (((int)((signed char)-919.860168457f) | 94) + 
                                          p % ((int)v_7 + 113)))) {
    v = (unsigned short)(- ((unsigned long long)-864.934448242f - 15568ULL) - (unsigned long long)(
                         (int)((unsigned char)(- v_5)) * (int)(~ v_7)));
    result = (unsigned long long)(p - (int)(~ v) / ((p << 7) + 681));
    result = result;
  }
  else {
    v_5 = (float)((int)(- v_17) / (! v_19 * (p / 26229) + 306));
    v_11 = (signed char)(- ((-55.f * v_5) * (float)(p_15 / 52UL)));
    result = (unsigned long long)((float)((847L + p_9) % (long)((int)v_11 / 97 + 587)) - - (- p_13));
  }
  return result;
}

