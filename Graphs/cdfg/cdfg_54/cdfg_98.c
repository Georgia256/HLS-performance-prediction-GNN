#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 167089432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, long p_4, unsigned long long p_6, char p_9,
                unsigned short p_11)
{
  short v_23;
  unsigned long long v_21;
  signed char v_19;
  unsigned short v_17;
  unsigned int v_15;
  unsigned short v_13;
  signed char v;
  signed char result;
  v_23 = (short)p_6;
  v_21 = (unsigned long long)p_11;
  v_19 = (signed char)-109;
  v_13 = (unsigned short)35016;
  if (p_4 / 64941L >= (long)(! (- ((int)p_9 / ((int)v_23 + 958))))) {
    result = (signed char)p_9;
    v = (signed char)((unsigned long)((long)(! p_11) * p_4) / ((0UL - (unsigned long)p_4) + 575UL));
    v_17 = (unsigned short)(~ p_9);
  }
  else {
    v = (signed char)(! (- v_21 % 59541343ULL));
    v_17 = (unsigned short)(! (~ p_6 * (unsigned long long)((unsigned long)v_19 % 4294939764UL)));
    result = (signed char)(! (- ((int)p_9 * -24110)));
  }
  while ((int)v > ((int)p_9 + (int)p_11) * ((int)p_11 * (int)v) >> 22) {
    v_15 = (unsigned long long)v_13 - 18446744073709496564ULL;
    v_13 = (unsigned short)((float)p / 9920279552.f);
    result = (signed char)(63460U + (((unsigned int)p + v_15) + (unsigned int)v_17));
    v = (signed char)(~ (100 / ((int)result + 263)));
  }
  while_0_break: ;
  return result;
}

