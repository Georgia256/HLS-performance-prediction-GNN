#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 352970768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned short p_4, unsigned int p_6[2],
          long p_11[5][3][4], char p_13)
{
  int v_15;
  float v_9;
  unsigned short v;
  short result;
  result = (short)-6068;
  v_15 = (int)((unsigned long)(- (p_11[2][0][1] - (long)p)) + (unsigned long)(
               (unsigned int)(! result) * (p_6[0] >> ((unsigned int)p & 31U))));
  if (0UL % ((unsigned long)((long)v_15 * p_11[0][1][1]) % (unsigned long)(
             ! p_6[1] + 686U) + 628UL) <= (unsigned long)((-112L - p_11[1][2][0]) / (long)(
                                                          (int)(! p_4) + 735)) - (unsigned long)p_6[1]) {
    result = (short)(~ (- (! p_4)));
    result = (short)((int)((short)p) % ((int)result + 606));
  }
  else {
    v_9 = (float)(! (unsigned short)40453);
    v = (unsigned short)(8913L / (- (p_11[2][1][1] / (long)((int)p_13 + 624)) + 56L));
    result = (short)((float)(p_6[0] % (unsigned int)(((int)result + (int)v) + 909)) - v_9);
  }
  return result;
}

