#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221665162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned long long p_4, float p_6,
                  unsigned char p_8, long long p_10)
{
  double v_19;
  float v_17;
  long long v_15;
  unsigned int v_13;
  long long v;
  unsigned long result;
  v_19 = (double)p_6;
  v_17 = (float)p_8;
  v_15 = 53171LL;
  v_13 = 183837714U;
  v = (long long)p_8;
  result = 4083620931UL;
  while (56955UL != result) {
    v_13 = v_19 / 8073.;
    result = (unsigned long)((unsigned long long)((v_15 - 13LL) / (long long)(
                                                  result + 171UL)) - 
                             p_4 / (~ p_4 + 695ULL));
    v_15 = (long long)(((unsigned long long)p_8 + 914478480ULL) - 192ULL);
    result = (unsigned long)(! (p_10 + (long long)v_17) + (long long)(
                             (unsigned long)(p_6 / 1519.18017578f) - 
                             4294967280UL / (result + 295UL)));
  }
  while_0_break: ;
  if ((unsigned long long)((long long)(p_6 * 1.84467440737e+19f) * (v * v)) / (
      (361461669ULL / (p_4 + 401ULL)) / (unsigned long long)(((int)((unsigned short)p_6) >> 9) + 780) + 467ULL) > 
      ! ((unsigned long long)v_13 % (p_4 + 568ULL)) * (unsigned long long)v_15) {
    result = (unsigned long)(- (- p_6 - (float)p_8));
    result = (unsigned long)((unsigned long long)((result % 3920449948UL) / (unsigned long)(
                                                  ((int)((signed char)-901.734375f) & (int)p) + 687)) - p_4);
  }
  else result = (unsigned long)(! (p_10 - 36663LL));
  return result;
}

