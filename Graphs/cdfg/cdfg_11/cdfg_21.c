#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 839381179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, char p_5, unsigned short p_7, char p_9, float p_11)
{
  signed char v_23;
  unsigned short v_21;
  signed char v_19;
  int v_17;
  float v_15;
  char v_13;
  char v;
  double result;
  v_23 = (signed char)66;
  v_19 = (signed char)-25;
  v_17 = (int)p_11;
  v_21 = (unsigned short)p_9;
  if (((int)v_19 + (int)(~ v_21)) + (int)(p_11 * (float)p_9) * (p + (int)v_23) >= 
      - (p + p) / (p + 726)) {
    v = (char)(((unsigned int)(~ p_5) % (((unsigned int)p_7 - 570065914U) + 132U)) / (unsigned int)(
               ((p + (int)p_9) + 74) + 591));
    result = (double)v;
    result = - (result + 6323.) - (double)p;
  }
  else {
    v_13 = (char)(- (~ v_17));
    v_15 = (float)(- -18516LL);
    result = (double)(- ((int)((char)p_11) % -104) % (26226 % (((int)v_13 << (
                                                                (int)((char)v_15) & 7)) + 203) + 7));
  }
  return result;
}

