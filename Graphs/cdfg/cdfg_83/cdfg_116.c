#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 718560397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p)
{
  char v_15;
  long long v_13;
  float v_11;
  short v_9;
  int v_6;
  short v_4;
  signed char v;
  short result;
  v_15 = (char)71;
  v_13 = p;
  v_11 = 610.248901367f;
  v_9 = (short)p;
  v_6 = 497870607;
  v_4 = (short)-3184;
  v = (signed char)p;
  while ((long long)(7751L + (long)(-82 * v_6)) + - p * 64236LL > (long long)(
         101 | ! ((int)v_9 * (int)((short)v_11)))) {
    v = (long long)v_15 - v_13 / 3891000921LL;
    v_11 = (float)((int)v_4 / -64580);
    v_15 = (char)6;
    v_6 = (int)(- (~ p) / (((p ^ -4LL) + 21011LL) + 687LL));
  }
  while_0_break: ;
  result = (short)((181740530LL - (long long)v) - (long long)(~ v_4));
  return result;
}

