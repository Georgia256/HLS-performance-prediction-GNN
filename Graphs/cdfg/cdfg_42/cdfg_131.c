#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1055414115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p[4][1], char p_13)
{
  double v_17;
  long v_15;
  short v_11;
  signed char v_9;
  unsigned char v_6;
  int v_4;
  unsigned int v;
  char result;
  v_17 = -142.226834181;
  v_15 = 3763L;
  v_6 = (unsigned char)45;
  v_4 = 7277;
  result = (char)p[2][0];
  v = (unsigned int)((double)v_15 * (19254. + v_17));
  if ((int)p_13 >= (int)(- p[3][0]) / (((int)(! v_6) + (int)(! p_13)) + 24)) {
    result = (char)(! (v * (unsigned int)v_4 & (unsigned int)((float)v_6 - p[2][0])));
    result = (char)(! ((int)(~ result) - (int)(- result)));
    result = (char)(~ (62801 - (int)(- result)));
  }
  else {
    v_11 = (short)(~ ((long long)p_13));
    v_9 = (signed char)(((int)((short)p[1][0]) * (int)v_11) * (int)result);
    result = (char)v_9;
  }
  return result;
}

