#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949997179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, char p_15[2], unsigned char p_17, int p_19)
{
  unsigned long v_13;
  long long v_11;
  unsigned long v_8;
  long long v_6;
  long v_4;
  unsigned long v;
  unsigned long long result;
  v_13 = (unsigned long)p_15[0];
  v_8 = 3902057490UL;
  v_6 = (long long)p_17;
  v_4 = (long)p_17;
  v = (unsigned long)p_19;
  result = 18446744073709547393ULL;
  if ((long long)((56522578U + (unsigned int)p_17) - (unsigned int)((int)(! p_15[0]) / 789)) < - (~ (
      (long long)p_19 * v_6))) {
    v_11 = (long long)(~ (~ p));
    v_8 = - ((unsigned long)(v_4 * (long)p) - v_13);
    v = (unsigned long)(v_11 / (long long)((unsigned long)((int)p - (int)p) % (
                                           (v_13 + 4294967188UL) + 797UL) + 112UL));
  }
  else {
    v_11 = 60019LL;
    v_4 = (long)(! ((unsigned long)((int)p * (int)p_15[1]) * (v_8 * 18048UL)));
    v_13 = (- v_8 + (unsigned long)((int)p & (int)p)) % 4294936781UL;
  }
  while ((-4188576660312LL - (long long)(22902UL % (v + 998UL))) / (long long)(
         v_4 / 1014L + 965L) < ((v_6 + 40378LL) + 125LL) - (long long)(
                               - v_8 * (unsigned long)p)) {
    v_11 = (float)v_11 / -6.9942271996e+37f;
    v_8 = -0UL;
    v_6 = (long long)(0 % (unsigned long long)(! v_8 * - v_13 + 69UL));
    v_4 = (long)(~ ((long long)((double)p / -3.36635800481e+38) % (40516LL / (long long)(
                                                                   (int)p + 352) + 361LL)));
  }
  while_0_break: ;
  return result;
}

