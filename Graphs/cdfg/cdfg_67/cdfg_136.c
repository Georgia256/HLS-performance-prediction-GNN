#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 672787780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, signed char p_9[2][1][1], double p_13,
                long p_17[5], int p_19[4][3][5])
{
  unsigned long v_15;
  unsigned long long v_11;
  unsigned long v_7;
  double v_5;
  unsigned char v;
  signed char result;
  v_15 = 45142UL;
  v_11 = (unsigned long long)(- ((unsigned long)((long)3279584256.f + p_17[1]) - 4146768657UL));
  if ((unsigned long long)((long)((int)((unsigned char)p_13) + (int)p) * (
                           (long)(p_13 * (double)v_15) % (- p_17[1] + 211L))) != 
      18446744073649721097ULL + (unsigned long long)(3765762 * p_19[2][0][4])) {
    v = ! p;
    result = (signed char)(((long)(1.90997767798e+38f * (float)p) - 655425499L) % (long)(
                           (int)v + 607));
    result = result;
  }
  else {
    v_7 = (unsigned long)((unsigned long long)(- ((int)p ^ (int)p)) + 
                          (unsigned long long)((int)p_9[0][0][0] % -96) % (
                          v_11 + 218ULL));
    v_5 = (double)(- ((int)((unsigned short)-38136.796875f) * 11914));
    result = (signed char)(- ((v_5 * (double)v_7) / 3898863418.));
  }
  return result;
}

