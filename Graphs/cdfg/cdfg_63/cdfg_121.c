#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 123069425
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p[5][2][3], int p_4, long p_6, unsigned short p_9,
         signed char p_15)
{
  unsigned long v_21;
  unsigned long long v_19;
  double v_17;
  unsigned char v_13;
  long v_11;
  unsigned char v;
  long result;
  v_21 = 4294946577UL;
  v_19 = (unsigned long long)p_4;
  v_17 = (double)p_6;
  if ((unsigned long long)(~ (! p_15)) % (((unsigned long long)p_15 * v_19) / (
                                          (unsigned long long)(177650320.f + p[4][1][1]) + 602ULL) + 458ULL) <= (unsigned long long)(
      ((unsigned long)p[1][0][0] - v_21) % (unsigned long)((int)(~ p_15) + 902) + (unsigned long)(
      42L * ~ p_6))) {
    v_13 = (unsigned char)(- ((int)p_15 / ((int)((signed char)v_17) % -94 + 706)));
    v_11 = (long)v_13;
    v = (unsigned char)((double)((unsigned long)(46L - v_11) % 4256345245UL) / 107197.89418);
  }
  else {
    v_17 = (double)(! p_4);
    v = (unsigned char)(- (- (v_17 + (double)p_6)));
  }
  if (p_6 != (long)((int)v & (int)(- p_9))) result = (long)(- ((p[0][1][1] / (
                                                                (float)p_4 + 970.f)) * - p[4][0][2]));
  else result = (long)p_4;
  return result;
}

