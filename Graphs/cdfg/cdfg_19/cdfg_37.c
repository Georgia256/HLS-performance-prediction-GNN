#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 660782496
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, unsigned long long p_4, unsigned short p_6,
                long long p_8, char p_10)
{
  unsigned char v_17;
  signed char v_15;
  double v_13;
  unsigned short v;
  signed char result;
  v_17 = (unsigned char)p_6;
  v_15 = (signed char)-38;
  v_13 = (double)p_8;
  v = (unsigned short)(~ p_4 / (unsigned long long)(((int)p_6 ^ (int)v_17) + 10) >> (
                       ((int)(- p_10) << (30698251LL % (p_8 + 65LL) & 7LL)) & 63));
  if ((unsigned long long)((int)(~ p_10) >> (((unsigned long long)((int)p_6 / (
                                                                   (int)v + 46)) - (
                                              (unsigned long long)p_6 + 975652992ULL)) & 7ULL)) >= 
      (unsigned long long)((int)((signed char)v_13) % ((int)v_15 + 228)) % (
      p_4 + 850ULL) - 125ULL) result = (signed char)(- (- (812.f + p)));
  else result = (signed char)((p_4 % (unsigned long long)((int)p_6 + 155) + 209ULL) * (unsigned long long)(~ p_8));
  return result;
}

