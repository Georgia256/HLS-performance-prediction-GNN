#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 456349288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, double p_7, long long p_9, char p_11,
                       double p_19[3])
{
  long v_17;
  signed char v_15;
  signed char v_13;
  double v_5;
  unsigned int v;
  unsigned long long result;
  v_17 = (long)p_9;
  v_15 = (signed char)113;
  v_13 = (signed char)-113;
  v_5 = (double)p;
  result = 823344345ULL;
  if (~ (~ result) >= (unsigned long long)(- (-589.42673225 - (4692056983.05 + p_19[0])))) {
    v = (unsigned int)((long)((int)v_13 + (int)v_15) + v_17);
    result = (unsigned long long)(~ (~ (p_9 * (long long)p_11)));
    v = (unsigned int)((double)((unsigned long long)v_5 % ((unsigned long long)v % 2685ULL + 573ULL)) + - p_7);
  }
  else {
    result = (unsigned long long)(- (- p_7));
    v = (unsigned int)(~ (! p));
  }
  result = ((result | (unsigned long long)v) - (unsigned long long)(- p)) >> (
           ! (- result) & 63ULL);
  return result;
}

