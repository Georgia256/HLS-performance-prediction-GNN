#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231132844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned char p_5[3][1][4],
                 unsigned short p_7, unsigned int p_9, int p_17)
{
  char v_27;
  unsigned char v_25;
  unsigned char v_23;
  long long v_21;
  unsigned char v_19;
  double v_15;
  unsigned short v_13;
  long long v_11;
  char v;
  unsigned int result;
  v_25 = (unsigned char)p_17;
  v_23 = (unsigned char)p_7;
  v_21 = -39953LL;
  v_19 = (unsigned char)146;
  v_11 = (long long)p_7;
  v = (char)106;
  while ((long long)v - v_21 >= -505955218LL) {
    v_23 = (int)v_25 * ((int)v_23 * (int)((unsigned char)-732.632629395f));
    v_21 = 0LL ^ ! (v_11 - 243LL);
    v_27 = (char)p_17;
    v = ! (- v_27);
  }
  while_0_break: ;
  if ((unsigned int)v_19 <= p_9) {
    v = (char)(! (- (-799999615ULL)));
    result = (unsigned int)((int)(- v) / ((int)(- p) + 386) ^ ((int)p_5[1][0][0] | 
                                                               (int)p_7 / -4));
  }
  else {
    v_15 = (double)p_17;
    v_13 = (unsigned short)p;
    result = (unsigned int)((double)((long long)p_9 - v_11) * ((double)v_13 / (
                                                               v_15 + 701.)) + 4294915122.);
  }
  return result;
}

