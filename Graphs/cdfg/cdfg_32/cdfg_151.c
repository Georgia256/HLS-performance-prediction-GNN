#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675073995
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, char p_7, int p_9, double p_11, double p_13)
{
  unsigned char v_23;
  unsigned char v_21;
  unsigned long long v_19;
  unsigned char v_17;
  unsigned int v_15;
  float v_5;
  int v;
  char result;
  v_23 = (unsigned char)p_7;
  v_21 = (unsigned char)154;
  v_19 = 696965920ULL;
  v_17 = (unsigned char)p_9;
  v_15 = (unsigned int)p_11;
  v_5 = (float)p_9;
  v = (int)p_7;
  result = (char)p_9;
  while ((741120122UL | (unsigned long)((int)result * (int)((char)p_13) - (int)(- p))) == (unsigned long)(
         (unsigned int)v * v_15)) {
    v_19 |= 107ULL;
    v = (45180 * (int)v_21 + (int)v_23 * (int)v_17) - (int)result;
    v_17 = (unsigned char)((unsigned long long)(~ (- v_15)) % 18446744071087148920ULL);
    v_15 = ~ 3273037027U;
  }
  while_0_break: ;
  if ((double)(((55843.f + v_5) - -20.f) - (float)((int)(! p_7) | (int)((char)(
                                                   (double)p_9 / (p_11 + 836.))))) > p_13) {
    v = (int)(295LL - (long long)(! (- p)));
    result = (char)v;
  }
  else result = (char)94;
  return result;
}

