#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944339588
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, short p_9[3][1][4], unsigned int p_13[1][2][3],
         double p_15, signed char p_19[2][1])
{
  double v_17;
  unsigned short v_11;
  double v_7;
  unsigned char v_4;
  unsigned long long v;
  char result;
  v_17 = (double)(14389774LL + (long long)(! (~ p_19[0][0])));
  if (p_15 >= (double)((((int)((unsigned short)v_17) + 41315) | (int)p_19[0][0]) + (int)p)) {
    v_4 = (unsigned char)(! (~ 452410048LL));
    v = (unsigned long long)((long)(! ((int)v_4 * (int)p)) & 41313L);
    result = (char)v;
  }
  else {
    v_11 = (unsigned short)((0U / (p_13[0][1][0] + 334U)) / (p_13[0][1][1] + 932U));
    v_7 = (double)((unsigned long)((int)p_9[2][0][1] - 29247) / 4294915432UL + (unsigned long)v_11);
    result = (char)v_7;
  }
  return result;
}

