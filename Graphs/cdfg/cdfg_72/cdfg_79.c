#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 667089740
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned long long p_7[3], float p_9,
              long long p_11[3][2], long p_13)
{
  unsigned long v_15;
  int v_5;
  long v;
  long long result;
  v_15 = (unsigned long)p_13;
  if ((unsigned long long)(~ (4294966873UL - v_15) + (unsigned long)p) < 
      (12461ULL / (unsigned long long)(p_13 + 481L) & (unsigned long long)9.35390667381e+36) - (unsigned long long)(~ (
      p_11[2][1] % (long long)((int)p + 801)))) {
    v_5 = 29998;
    v = -2038L;
  }
  else {
    v_5 = -783744607;
    v = (long)(- (2803 * (v_5 / 23975)));
    v_5 = (int)(p_9 * (float)(v / (v + 379L)) + -62685.f);
  }
  if ((unsigned long long)v - (unsigned long long)v_5 % (p_7[0] % 48490ULL + 563ULL) > (unsigned long long)-419.416264219) 
    result = (long long)(- -3.20129075137e+38f);
  else result = (long long)(- (-13402 << ((int)p & 15)));
  return result;
}

