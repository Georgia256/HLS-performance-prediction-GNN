#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 27940358
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, short p_4[1][2], long long p_15)
{
  long v_17;
  int v_13;
  signed char v_11;
  int v_9;
  unsigned long long v_7;
  float v;
  unsigned long result;
  v_17 = (long)p_15;
  v_13 = (int)p_15;
  v_11 = (signed char)-1;
  v_9 = (int)p;
  v_7 = (unsigned long long)p_15;
  v = 9518029824.f;
  result = 4250006610UL;
  if ((unsigned long long)(v_13 % 1618640896) % ((1528ULL % (unsigned long long)(
                                                  (int)p_4[0][1] + 789) - 18446744073709551516ULL) + 192ULL) > (unsigned long long)(- (
      ! p - (long)((int)p_4[0][0] % 11291)))) {
    v_13 = (int)((unsigned int)(15764 % ((int)v_11 + 809)) ^ ((unsigned int)(! p_4[0][1]) & 57101U));
    v = (float)(~ (! 703779066UL));
    v_13 = (int)(((long long)((int)((signed char)3352684838.82) % -22) % (
                  p_15 * 11617LL + 772LL)) * (long long)(v_13 - (int)(- v)));
  }
  else {
    result = 0UL;
    v_9 = (int)result;
    v_7 = ((unsigned long long)result * 17976ULL - (unsigned long long)p_15) >> (
          ((long long)result - p_15) / -705036370LL & 63LL);
  }
  while ((unsigned long long)p * ! ((unsigned long long)9.73439350059e+37 / 18446744073636609121ULL) >= (unsigned long long)(
         (float)p_4[0][1] + - v)) {
    v_11 = (signed char)((unsigned long long)((int)p_4[0][1] % ((int)9159481606.92 % (
                                                                v_9 + 738) + 77)) % (
                         (18446744073709529351ULL - v_7) * (unsigned long long)(
                         (int)p_4[0][1] * (int)p_4[0][0]) + 575ULL));
    result = (unsigned long)((long)(- (v_9 * (int)v_11)) & p / (long)(
                                                           ! v_13 + 439));
    v = (float)1.60124048766e+38;
  }
  while_0_break: ;
  return result;
}

