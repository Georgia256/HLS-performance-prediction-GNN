#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 998748105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, unsigned int p_9, char p_11[1][2][1], char p_13,
                   float p_15)
{
  long v_17;
  unsigned long long v_7;
  unsigned int v_5;
  char v;
  unsigned short result;
  v_17 = -104656614L;
  v_5 = 4294942725U;
  v = p_13;
  result = (unsigned short)36916;
  v_7 = 18446744073709543396ULL;
  if (p >= (double)(- ((-974.804077148f * (float)v_17) * 20.f))) {
    result = (unsigned short)(p / ((double)((int)(~ result) * (int)(~ result)) + 923.));
    result = (unsigned short)((((unsigned long long)v_5 + v_7) + (unsigned long long)(
                               (int)((unsigned short)p) * (int)result)) % (unsigned long long)(
                              p_9 + 884U));
    result = (unsigned short)((-126807592L * (long)v | (long)(-31137 | (int)result)) + (long)p);
  }
  else {
    v = p_13;
    v_5 = (unsigned int)((double)p_11[0][0][0] / 1374.60170094);
    result = (unsigned short)(- ((unsigned int)v % (v_5 + 260U) << 17));
  }
  return result;
}

