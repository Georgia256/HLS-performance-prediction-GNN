#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156014184
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p[5][4], signed char p_11, float p_13, short p_15,
         char p_17)
{
  short v_25;
  char v_23;
  unsigned long long v_21;
  int v_19;
  unsigned char v_9;
  long v_7;
  unsigned long v_5;
  double v;
  long result;
  v_25 = (short)p_11;
  v_23 = (char)-90;
  v_21 = (unsigned long long)p[0][0];
  v_9 = (unsigned char)91;
  v_7 = 1039167781L;
  v_5 = (unsigned long)p_13;
  result = (long)p[3][1];
  if ((long)v_9 > result % (long)(((int)p_15 - (int)p_15 / ((int)v_25 + 809)) + 1012)) {
    v_19 = 0;
    result = (long)((unsigned long long)v_23 * 18446744073355773847ULL);
    result = (long)((v_21 % ((v_21 | (unsigned long long)p_11) + 655ULL)) / (unsigned long long)(
                    (long)(- p_17) % (- result + 166L) + 131L));
  }
  else {
    v_19 = (int)p_15;
    result = (long)((float)(4294925929ULL + 18446744073634586399ULL / (unsigned long long)(
                                            (int)p_11 + 520)) + p_13 * (float)p[3][3]);
    v_9 = (unsigned char)p_13;
  }
  if ((((long)(-12587 >> 4) | result % 119L) | -400L) <= (long)v_19) {
    v_7 = (long)p_11;
    v = (double)((((unsigned long)-893.524414062f | v_5) + 3242498329UL) - (unsigned long)(
                 ~ v_7 + (long)v_9));
    result = (long)((int)p[4][1] * ! ((int)((unsigned short)v) / 65483));
  }
  else result = (long)((int)(- (1.84467440737e+19f - p_13)) * ((int)p_15 + (int)(! p_17)));
  return result;
}

