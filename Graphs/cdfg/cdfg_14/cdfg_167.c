#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 70775093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, long long p_9, double p_11, signed char p_15, int p_17)
{
  int v_13;
  double v_7;
  int v_5;
  unsigned short v;
  double result;
  v_13 = 15022;
  v_5 = (int)p_11;
  v = (unsigned short)p_11;
  v_7 = (double)(- (3368285181UL & (unsigned long)(11804 / (v_5 + 433))));
  if ((long long)(v_13 + (int)(~ p_15) / (- p_17 + 466)) < 0LL) {
    v_7 = (double)(0 / 63LL) / (- v_7 + 430.);
    v_5 = (int)((double)(- (- p)) - 917706793. / (v_7 + 140.));
    result = (double)((unsigned long long)((int)(- p) * ((int)v % ((int)((unsigned short)p) + 437))) / (
                      (2512795623750ULL - (unsigned long long)(! v_5)) + 485ULL));
  }
  else {
    result = (double)(! p_9);
    result = (double)(! (~ (-305684960L - (long)result)));
  }
  return result;
}

