#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 921297693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, long p_4, unsigned long p_7,
                 unsigned long long p_9, char p_15[3][5][2])
{
  signed char v_13;
  signed char v_11;
  int v;
  unsigned int result;
  result = 39953U;
  v_11 = (signed char)p;
  if ((unsigned long)(~ (- (~ v_11))) >= 0UL) {
    v = (int)(~ ((unsigned long long)p_7 % (~ p_9 + 183ULL)));
    result = (unsigned int)(- ((long)p / (p_4 + 155L) + (long)(-954013594 * v)));
  }
  else {
    v_13 = (signed char)(- (! ((unsigned int)p_15[2][4][1] - result)));
    result = (unsigned int)v_13;
    result = 0U % ((unsigned int)v_11 * - result + 377U);
  }
  return result;
}

