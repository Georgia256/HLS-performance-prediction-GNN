#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62441315
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p)
{
  long long v_9;
  int v_7;
  unsigned int v_5;
  char v;
  char result;
  v_5 = 4137446793U;
  v = (char)-30;
  result = (char)44;
  v_7 = (int)-38.3080390689;
  while (- ((long long)v - (long long)v * 42595LL) > (long long)(- (! p * 767135777))) {
    v_5 = (unsigned int)v_7 / ((v_5 + 185U) + 258U);
    v = (char)117;
    v_9 = (long long)p;
    v = (char)((long long)v * (388862882LL - (long long)p / (v_9 + 5LL)));
  }
  while_0_break: ;
  return result;
}

