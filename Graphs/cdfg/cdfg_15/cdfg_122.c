#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250950813
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, signed char p_5, unsigned int p_9, unsigned char p_11,
           float p_13)
{
  short v_25;
  unsigned short v_23;
  unsigned long long v_21;
  long v_19;
  long long v_17;
  long long v_15;
  short v_7;
  unsigned short v;
  double result;
  v_25 = (short)1073;
  v_23 = (unsigned short)9171;
  v_21 = 292806789ULL;
  v_19 = (long)p;
  v_17 = -4959LL;
  v_15 = (long long)p;
  v_7 = (short)p_13;
  v = (unsigned short)50760;
  result = 391.332188186;
  if (! ((unsigned long long)v_19 % 161611262ULL) * (unsigned long long)(- (
      (int)v_25 >> ((int)((short)result) & 15))) == (unsigned long long)(~ v_17) * 489737879ULL) {
    v_19 = (long)(21. * - ((double)v_21 + result));
    result = (double)((p - (float)v_17) * (float)v - (float)((unsigned long)v_19 - (unsigned long)p_9));
    v_7 = (short)(((unsigned long)(p_13 + 53136.f) & 18769UL) % (unsigned long)(
                  (int)(- v) + 537));
  }
  else {
    v_17 = (long long)((((unsigned int)p_11 ^ p_9) >> ((4294952393ULL | v_21) & 31ULL)) << (
                       (-973005621LL ^ (long long)p_11) / (long long)(
                       ((int)((short)result) | (int)v_25) + 210) & 31LL));
    result = (double)(! ((long long)((int)((signed char)p_13) % -13) - 
                         v_17 * (long long)p_11));
    v_15 = 1069824209LL % (long long)(((-5416L - (long)p_5) + (long)(~ v_23)) + 492L);
  }
  if (252LL >= - ((long long)((float)v_7 + p_13) >> ((v_15 + 203LL) & 63LL))) {
    result = (double)(579464840UL % ((unsigned long)p + 274UL));
    result = - result;
    result -= (double)(61 >> 6);
  }
  else {
    v_7 = (short)238;
    v = (unsigned short)(((unsigned int)(-739.571655273f * (float)v_7) + (
                          p_9 + 46008U)) % ((unsigned int)((float)((int)((unsigned char)result) | (int)p_11) * (
                                                           13.f - p_13)) + 550U));
    result = (double)((int)(- (p * (float)v)) / ((int)(p - (float)p_5) * (
                                                 (int)v - 222) + 526));
  }
  return result;
}

