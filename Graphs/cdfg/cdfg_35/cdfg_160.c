#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 760478136
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, short p_5, unsigned char p_11, unsigned char p_13,
         int p_15)
{
  unsigned short v_23;
  char v_21;
  unsigned long v_19;
  double v_17;
  unsigned int v_9;
  unsigned long long v_7;
  signed char v;
  long result;
  v_23 = (unsigned short)43796;
  if ((int)(~ (- v_23)) >= 30) {
    v_19 = ~ (- (4294925996UL - (unsigned long)p_11));
    v_17 = (double)(- ((unsigned long)((int)p_5 & 2785) / (v_19 + 801UL)));
    v_9 = (unsigned int)(~ p_5);
  }
  else {
    v_21 = (char)-90;
    v_9 = (unsigned int)(! v_21);
    v_17 = (double)(- p_15);
  }
  if ((double)((int)p_13 ^ ~ p_15) > - (v_17 + 13576.)) {
    v = (signed char)p_5;
    result = (long)((long long)v % (((-583672662LL | (long long)p) - (long long)(
                                     10 - (int)p)) + 79LL));
  }
  else {
    v_7 = (unsigned long long)v_9;
    result = (long)(- ((unsigned long long)(- p) % (- v_7 + 232ULL)));
    result = result;
  }
  return result;
}

