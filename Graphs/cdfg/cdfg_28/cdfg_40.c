#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 695735927
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, long p_11, unsigned int p_13,
          unsigned long p_15[4][1])
{
  unsigned short v_21;
  double v_19;
  unsigned char v_17;
  long long v_9;
  double v_6;
  unsigned long v_4;
  char v;
  float result;
  v_21 = (unsigned short)p_13;
  v_19 = -888.956744767;
  v_17 = (unsigned char)p_11;
  v_6 = (double)p_11;
  v_4 = p;
  v = (char)-49;
  while (-915327106LL * (long long)(- v_6 - 78991.) > (long long)(v_19 / (
                                                                  (double)p_15[1][0] + 904.))) {
    v_17 = (long long)v_21 & -430949340LL;
    v_4 = (unsigned long)p_13;
    v_6 = (double)(~ (! (p % (unsigned long)((int)v_17 + 301))));
    v_19 = (double)((unsigned int)(- (12 * (int)((unsigned char)v_19))) - p_13);
  }
  while_0_break: ;
  if (v_4 == (unsigned long)v_17) {
    result = (float)(~ (! (~ p)));
    v_4 = 4294938507UL % (- p % (p + 1013UL) + 109UL);
    result = (float)((((long)result - -52487L) / 685L) % ((long)((double)(
                                                                 64919 + (int)v) + (
                                                                 (double)v_4 + v_6)) + 449L));
  }
  else {
    v_9 = (long long)(~ (- ((unsigned long)p_11 / 3766224584UL)));
    result = (float)v_9;
  }
  return result;
}

