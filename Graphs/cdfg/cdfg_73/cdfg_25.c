#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1050285498
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned int p_5[2], unsigned char p_7,
                   unsigned long p_9)
{
  double v_17;
  long long v_15;
  float v_13;
  signed char v_11;
  unsigned long long v;
  unsigned short result;
  v_17 = (double)p_9;
  v_13 = -1.40003429336e+38f;
  v_11 = (signed char)-39;
  v = (unsigned long long)p;
  result = (unsigned short)25825;
  while (((unsigned long)(! p_5[0]) | (unsigned long)p_7 % 167829203UL) % (
         p + 84UL) <= 50413UL * ((51719UL + p_9) + (unsigned long)((int)v_11 + (int)((signed char)-8.56651556188e+37)))) {
    v = (unsigned int)v_13 - 3528228853U;
    v_13 = (float)((unsigned long long)((long long)v_17 / 793965496LL) % (
                   ! v + 810ULL) + (unsigned long long)p_7);
    v_15 = (long long)((unsigned long)(! (- p_5[1])) - 4294944171UL);
    v_11 = (signed char)(217LL / (((long long)((unsigned int)result + p_5[1]) + (
                                   4294940816LL ^ v_15)) + 787LL));
  }
  while_0_break: ;
  result = (unsigned short)v;
  return result;
}

