#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 104646606
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned char p_5, long p_7[4][2][4], signed char p_21)
{
  long long v_19;
  unsigned int v_17;
  unsigned long long v_15;
  char v_13;
  char v_11;
  unsigned long v_9;
  double v;
  char result;
  v_19 = 29243LL;
  v_17 = 44273U;
  v_15 = 57326ULL;
  v_13 = (char)p_21;
  v_11 = (char)p;
  v_9 = (unsigned long)p_21;
  v = -1.5694242055e+38;
  result = (char)-5;
  while (~ v_15 >= 18446744073709551606ULL) {
    result = v_17 * 4294951812U;
    v_9 = (unsigned long)(! ((long long)p_5 * v_19 | (long long)(p + (int)p_21)));
    v = (double)48717;
    v_15 = (unsigned long long)p_5;
  }
  while_0_break: ;
  while ((unsigned long)(((-566000249 + (int)v) + ! p) + ! (p % (p + 984))) != 
         (unsigned long)(~ ((long)p_5 * p_7[3][0][3])) / ((v_9 + v_9 / (unsigned long)(
                                                                 (int)p_5 + 840)) + 266UL)) {
    v_9 = v_15 + (unsigned long long)((int)v_13 * ((int)v_11 - 9));
    v_11 = (char)p_7[1][0][1];
    v_13 = (char)-73;
    v = (double)p;
  }
  while_0_break_0: ;
  return result;
}

