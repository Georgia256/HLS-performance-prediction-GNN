#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 80252332
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p[1][1][3], long p_11, signed char p_13, unsigned int p_15,
        signed char p_17)
{
  unsigned short v_25;
  double v_23;
  long long v_21;
  unsigned short v_19;
  unsigned char v_9;
  short v_7;
  unsigned int v_5;
  signed char v;
  int result;
  v_25 = (unsigned short)60737;
  v_23 = (double)p_17;
  v_21 = (long long)p_17;
  v_9 = (unsigned char)p_15;
  v_5 = (unsigned int)p_17;
  v = (signed char)p_15;
  result = -627719811;
  if ((double)(~ (! p_13)) * (0. * ((double)v_9 * p[0][0][1])) < (double)(
      (-1 | (int)v_9 * (int)p_17) + (int)6776285696.f)) {
    v_19 = (unsigned short)46;
    result = (int)v_19;
    v_7 = (short)((int)v / ((int)((signed char)(p[0][0][0] * (double)(- p_13))) + 46));
  }
  else {
    v_7 = (short)(~ (((long)p_17 | p_11) << ((long)((double)v_25 * p[0][0][0]) & 31L)));
    v_23 = (double)(! ((int)p_13 * result) - ~ ((int)p_13 % ((int)((signed char)v_23) + 649)));
    v_9 = (unsigned char)(! (((long long)p_17 | v_21) ^ (long long)((int)p_13 + (int)((signed char)v_23))));
  }
  if ((long)(- (~ p_13)) * ! (p_11 % (long)((int)p_13 + 619)) > (long)(
      (int)(- v_7) & (int)((short)(p[0][0][0] - (double)result)))) {
    v = (signed char)((int)p_13 * (int)((signed char)(- (6975939513.24 - (double)p_11))));
    v_7 = (short)(~ (p_11 * (long)2491930880.f));
    result = (int)((float)((unsigned int)((int)((signed char)p[0][0][0]) & (int)v) | v_5) * (
                   817.117553711f - (float)((int)v_7 - (int)v_9)));
  }
  else {
    result = (int)((long long)(- (- p[0][0][1])) % ((long long)(! p_17) % -59495LL + 679LL));
    result = (int)((unsigned int)result * ~ (~ p_15));
  }
  return result;
}

