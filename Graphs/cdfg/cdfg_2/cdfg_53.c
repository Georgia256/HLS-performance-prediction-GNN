#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 983451096
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, long long p_9)
{
  float v_17;
  unsigned long long v_15;
  unsigned long v_13;
  double v_11;
  int v_7;
  double v_5;
  float v;
  char result;
  v_17 = (float)p_9;
  v_15 = (unsigned long long)p;
  v_13 = 351177603UL;
  v_11 = 792.136451038;
  v_7 = 430338310;
  v = (float)p_9;
  while (p * 0.f < v + (float)(50ULL / (v_15 + 996ULL) - 83259879ULL)) {
    v_13 = 47698UL;
    v_7 = (int)p_9;
    v = v_17;
  }
  while_0_break: ;
  if (- ((v_11 - 595863782.) * (double)(~ p_9)) < (double)v_13) {
    v_5 = (double)(v_7 + 92);
    v = (float)v_5;
    result = (char)(- (- p) * - v);
  }
  else {
    v = (float)(318608LL % (p_9 + 444LL));
    v_5 = (double)v;
    result = (char)(117362. / (-15030. / (- v_5 + 997.) + 740.));
  }
  return result;
}

