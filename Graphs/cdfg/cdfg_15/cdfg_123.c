#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986599004
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, long long p_4, long long p_6[4][3], int p_8,
              float p_17[3][3])
{
  unsigned char v_19;
  char v_15;
  int v_13;
  char v_11;
  long v;
  long long result;
  v_19 = (unsigned char)201;
  v_15 = (char)p_4;
  v_13 = 87398293;
  v_11 = (char)p_8;
  v = -60834L;
  result = (long long)p;
  while ((unsigned long long)((long long)v + p_6[0][2]) == 18446744073472880753ULL - 
                                                           12119752256962ULL * (unsigned long long)(- v_11)) {
    result = (int)v_15 % (v_13 * 60 + 596);
    v_13 = (int)((long long)p_8 % (-22726LL / ((long long)-9.90052561651e+37f + 402LL) + 679LL) ^ 4294960167LL);
    v = (long)((p_6[1][2] * (long long)v_19) % (long long)((4294960827UL & (unsigned long)p_8) + 653UL) + (
               (long long)((int)v_19 % ((int)((unsigned char)p_17[2][0]) + 14)) + 555LL));
    v_11 = (char)((int)p_17[1][2] - 898 * (-4775 * (int)p));
  }
  while_0_break: ;
  if (! (p_4 - p_6[3][2]) * ~ (result / (result + 832LL)) > (long long)(
      (long)(- p_8 ^ 44977) / -20463L)) {
    result = 80LL;
    result = result;
  }
  else {
    result = (long long)((int)p % ((int)p + 171));
    result = (long long)p / (result + 536LL);
  }
  return result;
}

