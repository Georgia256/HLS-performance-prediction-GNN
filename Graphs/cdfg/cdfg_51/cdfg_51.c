#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 97562165
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, double p_4, long p_11, unsigned long p_13[5][2])
{
  unsigned long long v_9;
  unsigned long long v_7;
  short v;
  char result;
  v_7 = (unsigned long long)p_13[4][0];
  v = (short)p_4;
  result = (char)p;
  result = result;
  while ((unsigned long long)(1LL | (130LL - p)) != (unsigned long long)(
                                                    (-25 + (int)((signed char)p_4)) * (int)result) + 18446744073138849574ULL) {
    v_9 = v_7 % (unsigned long long)((unsigned long)v * 4152351846UL + 768UL);
    v_7 = v_9;
    v = (short)7019;
    result = (char)((long long)p_11 % ((-544843330LL % (long long)(p_13[3][0] + 972UL)) * (long long)(
                                       38 / ((int)((char)-1421781376.f) + 742)) + 516LL));
  }
  while_0_break: ;
  return result;
}

