#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 992621923
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p[5][5])
{
  unsigned long v_9;
  long long v_7;
  float v_5;
  long v;
  unsigned long long result;
  v_7 = 35910LL;
  v_5 = (float)p[1][1];
  result = 18446744072674301636ULL;
  v = - p[4][1] - - (280L / (p[4][0] + 164L));
  while (950298257 > ~ (627 << (v / (p[0][2] + 691L) & 15L))) {
    v_9 = v_7 * -289LL;
    result = (unsigned long long)v_9;
    v_7 = (long long)((p[2][1] - 46L) / (- p[2][4] + 564L) + -123L);
    v = (long)(- (~ ((int)((signed char)v_5) % 47)));
  }
  while_0_break: ;
  return result;
}

