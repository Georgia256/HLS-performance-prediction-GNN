#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600407541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, short p_4, float p_6, char p_8,
         unsigned long long p_11[1][4])
{
  char v_19;
  double v_17;
  unsigned char v_15;
  unsigned short v_13;
  signed char v;
  char result;
  v_19 = (char)p;
  v_17 = (double)p_6;
  v_15 = (unsigned char)p_11[0][1];
  v_13 = (unsigned short)p_4;
  if (((unsigned long long)((int)v_19 << 2LL) / ((unsigned long long)v_13 * 18446744072953096836ULL + 961ULL)) / (
      p_11[0][2] + 257ULL) < (unsigned long long)((int)v_15 & (int)p_8)) {
    v_15 = (unsigned char)(~ p_8);
    v = (signed char)((float)(~ p_4) * (-9129712640.f / ((float)v_15 + 784.f)));
    v_13 = (unsigned short)33299;
  }
  else {
    v_15 = (unsigned char)p_6;
    v_13 = (unsigned short)((float)p_4 / (p_6 + 897.f));
    v = (signed char)(0. / (- v_17 + 862.));
  }
  if ((unsigned long long)v + 18446744073363977927ULL <= (p_11[0][0] - (unsigned long long)(
                                                          (int)v_13 * (int)p_8)) * (unsigned long long)(
                                                         (int)((unsigned char)1.13557729246e+38) + (int)v_15)) 
    result = (char)(! (p / (unsigned int)((int)p_4 + 586)));
  else result = (char)((unsigned long long)(! ((long)p_6 - -874818446L)) % (
                       ((unsigned long long)p_8 & 18446744073265238036ULL) + 935ULL));
  return result;
}

