#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 100693120
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p[1], unsigned int p_13)
{
  unsigned long v_19;
  unsigned char v_17;
  char v_15;
  unsigned char v_11;
  unsigned int v_9;
  unsigned long v_6;
  unsigned int v_4;
  double v;
  unsigned long result;
  v_19 = 4294958530UL;
  v_17 = (unsigned char)p_13;
  v_15 = (char)p[0];
  v_11 = (unsigned char)p_13;
  v_9 = p_13;
  v_4 = 30344U;
  v = -779.287974774;
  if ((unsigned long long)(v_4 * (unsigned int)v_17) * (p[0] & (18446744073662911880ULL + (unsigned long long)v_17)) >= (unsigned long long)(
      (double)((unsigned long long)p_13 ^ ~ p[0]) * (((double)v_17 - v) * 5.))) {
    v_11 = (unsigned char)((4294956500UL ^ (unsigned long)v_11) + (v_19 & (unsigned long)p_13) % (unsigned long)(
                                                                  (int)v_17 + 130));
    result = (unsigned long)(- (v / ((double)p_13 + 107.)) - (double)(
                             p[0] >> 37));
    v_15 = (char)((unsigned long long)(48 - (int)((double)result + v)) / (
                  p[0] + 359ULL));
  }
  else {
    v_9 = (unsigned int)((v - (double)v_17) * ((double)p[0] - v) + (double)v_9);
    v_17 = (unsigned char)194;
    v_15 = (char)((unsigned long)(- v_9 / (! p_13 + 135U)) * ((unsigned long)(! v_15) & 249905737UL));
  }
  if (8033LL * ((long long)(2258U / (v_9 + 975U)) / ((long long)v_11 / 61334LL + 628LL)) >= (long long)(
      (unsigned long)(p_13 * (unsigned int)v_15) * 4188079752UL + (unsigned long)(
      18964U >> ((unsigned long)v_17 / (v_19 + 428UL) & 31UL)))) result = (unsigned long)2825017571.71;
  else {
    v_6 = (unsigned long)p[0];
    v = (double)(v_4 >> (v_6 & 31UL));
    result = (unsigned long)(! ((unsigned long long)((unsigned int)v + 63704U) + 68ULL));
  }
  return result;
}

