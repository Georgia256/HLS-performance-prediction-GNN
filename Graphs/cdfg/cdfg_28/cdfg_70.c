#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 584703366
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned short p_11[5], int p_13,
          unsigned short p_15, double p_17[5][4][3])
{
  signed char v_9;
  float v_6;
  short v_4;
  unsigned short v;
  float result;
  v_6 = -906.667419434f;
  v_4 = (short)29190;
  result = -377.682281494f;
  v = (unsigned short)14810;
  while (54961 != (int)(- v)) {
    result = v_6 + (float)((int)v_4 >> 2ULL);
    v_6 = (float)(27600LL + (long long)((int)(- p_17[1][1][1]) * p_13));
    v_9 = (signed char)(! ((p_13 - 837) - (int)p_15 / ((int)p_15 + 134)));
    v = (unsigned short)((long)p / (((long)v_9 + ((long)p_11[3] - -337709351L)) + 560L));
  }
  while_0_break: ;
  return result;
}

