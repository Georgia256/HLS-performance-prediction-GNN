#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 192382811
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, short p_9, short p_17, long p_19, long p_21[2][1])
{
  double v_29;
  unsigned char v_27;
  char v_25;
  float v_23;
  unsigned long long v_15;
  signed char v_13;
  long v_11;
  unsigned int v_6;
  double v_4;
  unsigned long v;
  long result;
  v_29 = -4471310026.34;
  v_27 = (unsigned char)p_19;
  v_25 = (char)-61;
  v_23 = -8985293824.f;
  v_15 = (unsigned long long)p_9;
  v_11 = (long)p;
  v = 3662692324UL;
  while ((unsigned long)p_9 != 0UL - (~ v + (unsigned long)((int)p_17 * (int)((short)v_23)))) {
    v_11 = (int)v_27 / (((int)v_25 - 79) + 434);
    v_27 = (unsigned char)((unsigned long)((long)(~ p_9) % (p_21[1][0] + 435L)) + 
                           ((unsigned long)p_9 + 4294951429UL) * (unsigned long)v_29);
    v_23 = (float)v_29;
    v = (unsigned long)(- p);
  }
  while_0_break: ;
  if (6721162ULL <= - ((unsigned long long)((unsigned long)p + 751719556UL) & (
                       (unsigned long long)p_17 - v_15))) {
    v_6 = (unsigned int)p_9;
    v_4 = -57. - - (- p);
    result = (long)((double)((v + (unsigned long)v_4) % (unsigned long)(
                             v_6 * 40032U + 226U)) + p);
  }
  else {
    v_15 = (unsigned long long)p_9 / (v_15 + 129ULL);
    v_13 = (signed char)v_15;
    result = (long)(! ((unsigned long long)((long)p_9 + v_11) | (unsigned long long)v_13 / (
                                                                v_15 + 633ULL)));
  }
  return result;
}

