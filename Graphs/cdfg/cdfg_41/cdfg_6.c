#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 794227259
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, int p_9, long p_15[1][4])
{
  signed char v_17;
  char v_13;
  unsigned char v_11;
  double v_7;
  unsigned int v_5;
  signed char v;
  short result;
  v_17 = (signed char)-92;
  v_13 = (char)-54;
  v_11 = (unsigned char)p_15[0][2];
  v_7 = 2.7669116115e+38;
  v = (signed char)p;
  result = (short)p;
  if (((long)((int)(~ v) * (int)(~ p)) & p_15[0][0]) <= (long)v_17) {
    v = (signed char)(~ (11827ULL & (unsigned long long)(-82 - (int)p)));
    v_5 = (unsigned int)((long long)(~ v_11) - (685366402LL + (long long)(
                                                (int)v_13 << (p_15[0][1] & 7L))));
    result = (short)((- v_5 / 207U) * (unsigned int)(175 - (int)v));
  }
  else {
    v_5 = (unsigned int)result;
    v = (signed char)v_11;
    v_7 = (double)((unsigned long long)result / ((unsigned long long)p_15[0][2] % 31570ULL + 77ULL) + (unsigned long long)p_15[0][3]);
  }
  while (((int)(- v) * 19868 & (int)p % (30 % ((int)v + 48) + 699)) < ! (
         64 + ((int)v + (int)p))) {
    result = (unsigned int)v_7 / ((v_5 ^ 98U) + 273U);
    v_7 = (double)(~ (~ 269991204ULL));
    v_5 = (unsigned int)p_9;
    v = (signed char)p;
  }
  while_0_break: ;
  return result;
}

