#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 20323230
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, double p_5, unsigned int p_7, unsigned char p_9,
          float p_11)
{
  char v_27;
  int v_25;
  short v_23;
  double v_21;
  unsigned char v_19;
  double v_17;
  unsigned long v_15;
  double v_13;
  short v;
  float result;
  v_27 = (char)p_11;
  v_25 = (int)p;
  v_23 = (short)-23988;
  v_21 = (double)p;
  v_19 = (unsigned char)62;
  v_17 = (double)p_9;
  v_15 = (unsigned long)p_7;
  v_13 = 1.11559011964e+38;
  if ((int)((v_17 * v_17) / (v_13 + 507.) - -5296671370.97) != (int)p_5 * (
                                                               (int)((char)p) % -31 - (
                                                               (int)v_19 | (int)v_23))) {
    v_19 = (unsigned char)((- v_21 - (double)(v_15 * 53UL)) / (((double)(- p) - -8631130144.52) + 781.));
    v_13 = (double)(- (-2.95049530861e+38f - p_11)) / (v_13 * (double)(! v_19) + 404.);
    v_15 = (unsigned long)(! (-63802 - (88 | (int)((char)v_13))));
  }
  else {
    v_15 = (unsigned long)p_9;
    v = (short)((long)((v_25 + (int)v_27) * (int)(- p)) % ((long)p_5 % -7049L + 154L));
    v_17 = (double)(v_15 / (unsigned long)(((unsigned int)v - p_7) + 405U) + - (
                    3464398638UL - (unsigned long)v_23));
  }
  if ((double)(- v_15) >= v_17) {
    v = (short)(- (- p * (float)((unsigned int)p_5 % (p_7 + 416U))));
    result = (float)(! v);
  }
  else {
    v_13 = (double)((long)(- (- p_11)) | 21585L);
    result = (float)((double)((int)p_9 - (int)((unsigned char)(- p_11))) - - (
                     73915992. / (v_13 + 25.)));
  }
  return result;
}

