#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 753831730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, int p_4, unsigned long p_6, short p_11,
              signed char p_15)
{
  char v_23;
  long v_21;
  long long v_19;
  float v_17;
  unsigned long v_13;
  signed char v_9;
  long v;
  long long result;
  v_23 = (char)27;
  v_21 = -727364630L;
  v_19 = (long long)p_11;
  v_17 = (float)p_4;
  v_13 = (unsigned long)p_15;
  v_9 = (signed char)p_11;
  v = -877676588L;
  result = -27707LL;
  while ((long long)v_9 > v_19) {
    v_19 = v_21 - 155L;
    result = (long long)(1.24479866286e+37f - (float)((long long)(~ p_4) - ~ v_19));
    v_13 = (unsigned long)v_23;
    v_9 = (signed char)result;
  }
  while_0_break: ;
  while (p * (p * (long long)p_4 >> (p_6 * (unsigned long)v & 63UL)) > 
         result * (result * (long long)p_4 + (long long)((int)v_9 + (int)p_11))) {
    v_19 = v_13 * 4294967174UL;
    v_9 = (signed char)((- p % ((v_19 + (long long)p_6) + 706LL)) / 704413299LL);
    v_13 = (unsigned long)(- ((unsigned long long)(p_6 & (unsigned long)v_17) + 1561ULL));
    v = (long)p_15;
  }
  while_0_break_0: ;
  return result;
}

