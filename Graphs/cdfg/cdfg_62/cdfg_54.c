#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1008223302
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p[5][1], unsigned long p_7, unsigned long p_9,
         long long p_17, float p_19)
{
  unsigned char v_27;
  unsigned int v_25;
  unsigned long v_23;
  double v_21;
  unsigned long long v_15;
  signed char v_13;
  float v_11;
  int v_4;
  unsigned char v;
  char result;
  v_27 = (unsigned char)p_9;
  v_25 = 3788483217U;
  v_23 = p_9;
  v_21 = 243.427101945;
  v_13 = (signed char)74;
  v_11 = (float)p[4][0];
  v_4 = (int)p_19;
  while (! (- (p_9 % ((unsigned long)-914.660827637f + 283UL))) <= p_9 + (unsigned long)(~ v_4)) {
    v_13 = v_23 ^ (unsigned long)-644.761697617;
    v_11 = (float)((unsigned long)v_21 + (! p_7 + (unsigned long)(- p_19)));
    v_21 = (double)(! v_25 - 63668U);
    v_4 = (int)(- ((double)p_19 * -638.324752393 + (double)((int)v_27 * -122)));
  }
  while_0_break: ;
  if (449874892UL << ((unsigned long)((1.84467440737e+19f + p_19) - 8080854528.f) & 31UL) <= (
      ((unsigned long)v_11 * p_9) / (unsigned long)(((int)((unsigned char)v_21) + 198) + 565) | (unsigned long)p_19)) {
    v_4 = (int)(- v_13) * (int)((signed char)-8575142400.f);
    v = (unsigned char)((double)((float)(30659ULL % (unsigned long long)(
                                         p_9 + 642UL)) / ((v_11 + 4294909184.f) + 963.f)) * (
                        ((double)p_7 * -111.088024843) / ((double)(34032U + (unsigned int)p[1][0]) + 599.)));
    result = (char)((unsigned long)((int)v / (v_4 + 622)) ^ ((unsigned long)(
                                                             p[2][0] + 33225.) - p_7));
  }
  else {
    v_15 = (unsigned long long)(! 33327LL);
    result = (char)((unsigned long long)((double)(v_15 / 51584ULL) - 
                                         -74. / (p[0][0] + 700.)) % (
                    (v_15 % 41ULL) / ((unsigned long long)p[4][0] + 381ULL) + 524ULL));
  }
  return result;
}

