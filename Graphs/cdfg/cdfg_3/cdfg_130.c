#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 644541741
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, int p_4[3][4], unsigned long long p_13, unsigned int p_15,
         long p_17)
{
  long long v_19;
  unsigned long long v_11;
  unsigned int v_9;
  unsigned long v_7;
  unsigned int v;
  char result;
  v_19 = 1021749427LL;
  v_11 = 18446744073174957896ULL;
  v_9 = (unsigned int)p_13;
  v_7 = 1036474287UL;
  v = (unsigned int)p;
  result = (char)p;
  if ((unsigned long long)(~ (- v_9 * (916U % (p_15 + 343U)))) > (unsigned long long)(~ (
                                                                 v_19 % (long long)(
                                                                 v_7 + 344UL))) - p_13) {
    v_7 = (unsigned long)((int)1.50312988279e+38f + p_4[0][1]);
    v_9 = ~ (! (v / (unsigned int)(p + 552)));
    result = (char)((unsigned long long)(p_17 * (long)result) / (18446744073709523719ULL * p_13 + 491ULL) + (unsigned long long)(
                    (4294918874U << (p_4[2][1] & 31)) - (unsigned int)(! p)));
  }
  else {
    v_11 = ~ (41618ULL + p_13) - 18446744073139915726ULL;
    v_7 = (unsigned long)v_19;
    result = (char)p_15;
  }
  while ((unsigned int)(~ ((int)-7483881472.f & (p_4[1][1] + 30190))) <= ~ (- (- v))) {
    v_7 = v_11 + (unsigned long long)((long long)v_9 / (((long long)v_7 - 470106428LL) + 943LL));
    result = (char)p_15;
    v_11 = - ((unsigned long long)(- result) + ~ p_13);
    v = (unsigned int)(- (! (! result)));
  }
  while_0_break: ;
  return result;
}

