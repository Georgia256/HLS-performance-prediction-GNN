#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 72883317
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, int p_4, unsigned char p_6,
                       long long p_8, unsigned char p_15)
{
  long v_17;
  unsigned long long v_13;
  char v_11;
  short v;
  unsigned long long result;
  v_17 = (long)p_4;
  v_13 = 18446744073709511256ULL;
  v_11 = (char)p_4;
  v = (short)28411;
  result = 367172315ULL;
  while (((p_4 & (int)p_6) - (int)(- v)) - (-89 / (p_4 + 589) << (v_13 * 62203ULL & 31ULL)) == - (- p_4)) {
    result = v_17 + 31320L;
    v_11 = (char)((- v_13 & (unsigned long long)((long)p_6 | 982859033L)) * ! (
                  p % (result + 269ULL)));
    v_11 = (char)((long long)(~ p_4 + (int)v_11) % (((long long)p_6 + 
                                                     p_8 % (long long)(
                                                     (int)v_11 + 884)) + 462LL));
    v_13 = (unsigned long long)(! (! (- v_11)));
  }
  while_0_break: ;
  while (! (result % (p + 368ULL)) % (~ p * (unsigned long long)(p_4 - (int)p_6) + 927ULL) <= (unsigned long long)(
         ! (809821459LL % (p_8 + 14LL)) - -1075LL)) {
    v_11 = v_13 - (unsigned long long)((unsigned long)v_11 + (unsigned long)v * 628487941UL);
    v = (short)5776508820.39;
    v_13 = (unsigned long long)p_15 % (p + 53ULL);
    result = ! 18446744073611118780ULL;
  }
  while_0_break_0: ;
  return result;
}

