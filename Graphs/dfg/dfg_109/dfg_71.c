#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 779506590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned char p_5, long long p_7[2],
         float p_9, long p_13)
{
  short v_17;
  double v_15;
  unsigned char v_11;
  unsigned short v;
  long result;
  v_17 = (short)14581;
  v_15 = 353.943427997;
  v_11 = (unsigned char)((int)((short)v_15) + (int)v_17);
  v = (unsigned short)(~ (((long)v_11 * p_13) / (long)(((int)p_5 - (int)v_11) + 906) - (long)p_5));
  result = (long)((float)((4294964610UL ^ (unsigned long)(24070 % ((int)p_5 + 253))) >> (
                          (int)v & 31)) + - ((float)p_7[1] * - p_9));
  result = (long)((float)(- (~ result % 20050L)) + - ((float)v * (7.7449268427e+37f * (float)p)));
  return result;
}

