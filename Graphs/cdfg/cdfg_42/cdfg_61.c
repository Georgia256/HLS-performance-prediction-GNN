#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 792117274
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[4], int p_5, float p_9, signed char p_11[2],
           short p_17[4][5])
{
  unsigned int v_27;
  short v_25;
  float v_23;
  double v_21;
  signed char v_19;
  unsigned short v_15;
  unsigned short v_13;
  long v_7;
  unsigned short v;
  double result;
  v_27 = (unsigned int)p_9;
  v_25 = p[1];
  v_23 = (float)p_11[1];
  v_21 = -164.658678826;
  v_19 = (signed char)p_9;
  v_15 = (unsigned short)p_9;
  v_13 = (unsigned short)p[1];
  v = (unsigned short)3493;
  result = (double)p_11[0];
  if ((int)v_19 >= (int)p_17[3][2] - (int)(! (~ p_11[0]))) {
    v_13 = (unsigned short)(((int)v_13 + ((int)v_13 ^ (int)v_15)) ^ (
                                                                    (int)p_9 - -72716518) % (
                                                                    (int)p[0] * (int)((short)v_21) + 903));
    v_7 = (long)(((int)((unsigned short)result) / ((int)v_15 + 767) & (int)p_17[0][1]) + (
                 21880 * (int)v_19 - (int)v % ((int)((unsigned short)v_21) + 802)));
    v_15 = (unsigned short)p_9;
  }
  else {
    v_13 = (unsigned short)p_11[0];
    v_7 = (long)(((int)(! v_25) / ((int)((unsigned short)-3.30584582648e+38) % (
                                   (int)v + 522) + 702)) % ((((int)p_11[0] + 216) - (int)(
                                                             (float)v_27 + v_23)) + 426));
    v_15 = (unsigned short)(((int)((short)((float)p_5 - v_23)) & (int)(! p_17[3][1])) - 
                            ((int)p_17[0][0] % 43160) / (p_5 % 1780 + 624));
  }
  if ((unsigned long)(v_7 & (long)(-10 % ((int)((char)p_9) + 232))) * 4294921630UL == (unsigned long)(- (
      (int)p_11[1] / ((int)v_13 + 941) + (int)v_15 * (int)p_17[3][3]))) {
    result = (double)p_5;
    v = (unsigned short)((int)(! p[2]) >> 4ULL);
    result = (21404. + result) - (double)(- v);
  }
  else result = (double)18446744073709486610ULL;
  return result;
}

