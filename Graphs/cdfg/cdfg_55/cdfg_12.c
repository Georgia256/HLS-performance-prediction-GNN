#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 241104246
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, float p_5, short p_7, unsigned int p_13, char p_23)
{
  int v_21;
  char v_19;
  char v_17;
  unsigned char v_15;
  unsigned int v_11;
  long long v_9;
  unsigned long v;
  char result;
  v_21 = -795604262;
  v_19 = p_23;
  v_17 = (char)p_5;
  v_15 = (unsigned char)255;
  v_11 = (unsigned int)p_7;
  v_9 = -669770321LL;
  if ((int)p_7 / ((int)((short)((double)(v_9 / (long long)(v_11 + 283U)) / (
                                ((double)p_13 - -99.5998160649) + 372.))) + 826) >= (
      ((int)(! v_15) | (int)v_17) & ((int)v_19 & 55832) * (v_21 - (int)p_23))) 
    v = (unsigned long)-1.39370279486e+38;
  else v = (unsigned long)p_5;
  result = (char)(- (~ (v - (unsigned long)p)));
  return result;
}

