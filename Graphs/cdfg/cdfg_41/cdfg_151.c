#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62536564
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, short p_4, unsigned char p_6,
                  unsigned long p_9[3][5][4], long p_11[1][2])
{
  unsigned short v_27;
  double v_25;
  float v_23;
  char v_21;
  unsigned char v_19;
  signed char v_17;
  unsigned long v_15;
  int v_13;
  long long v;
  unsigned char result;
  v_27 = (unsigned short)4839;
  v_25 = -689.50772497;
  v_23 = (float)p_9[0][2][2];
  v_19 = (unsigned char)p;
  v_17 = (signed char)19;
  v_13 = 38165;
  result = (unsigned char)p_11[0][1];
  if (0L < ((long)((int)v_27 % -18346 | 16) | (~ p_11[0][1] + (long)v_19))) {
    v_21 = (char)((p_9[0][0][1] | (unsigned long)result) % (unsigned long)(
                  (int)(! (- p_4)) + 623));
    v_25 = (double)(- ((p_9[2][2][0] - 44522UL) ^ (unsigned long)((int)result + (int)p_6)));
    v_19 = (unsigned char)(- ((int)p_6 * (int)v_27));
  }
  else {
    v_21 = (char)(~ ((int)p_4 % (v_13 / (p + 172) + 916)));
    v_27 = (unsigned short)((((unsigned long)p_6 * p_9[0][3][1]) % ((unsigned long)v_25 + 271UL)) * (unsigned long)(
                            84970189. * v_25 + 1.84467440726e+19));
    v_25 = (double)((unsigned long)result / 107UL);
  }
  if ((int)(! (! p_6)) % ((int)((unsigned char)(v_25 * 28130. + -29914360.)) + 439) < 
      ((int)v_17 / (p + 242) >> ((int)p_4 & 31)) * (int)((float)(p_9[2][2][3] - (unsigned long)v_27) + (
                                                         (float)p - v_23))) {
    v = (long long)p_11[0][1];
    result = (unsigned char)(- (203476408166564295LL - v % (long long)(
                                                       p_9[1][0][3] + 175UL)));
    result = (unsigned char)((p / ((int)p_4 + 476) + (int)p_6) * (int)result);
  }
  else {
    v_17 = (signed char)((double)(((int)v_19 | (int)v_21) + ((int)p_4 - -31153)) * (
                         (double)v_23 / 1.2203565831e+38));
    v_15 = (unsigned long)v_17;
    result = (unsigned char)((unsigned long)v_13 + v_15);
  }
  return result;
}

