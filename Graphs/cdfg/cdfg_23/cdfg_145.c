#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 834176820
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, long long p_5, float p_9, float p_19, double p_21)
{
  unsigned char v_29;
  char v_27;
  long v_25;
  short v_23;
  long v_17;
  unsigned int v_15;
  char v_13;
  double v_11;
  unsigned char v_7;
  double v;
  int result;
  v_29 = (unsigned char)p_5;
  v_27 = (char)-69;
  v_25 = (long)p_9;
  v_23 = (short)26261;
  v_17 = (long)p_21;
  v_15 = 57475U;
  v_11 = -3501050168.97;
  v = 1.82353591435e+38;
  result = -1052257833;
  if ((double)((27902 * (int)v_27) / (((int)v_27 / ((int)((char)1.74137953967e+38f) + 952) + (int)(
                                       (double)v_15 + p_21)) + 896)) != 
      (v / -5354946560. - -19.) / (double)(- ((float)v_15 - p_19) + 144.f)) {
    v_15 = (unsigned int)(! (! v_23)) % 238567441U;
    v_27 = (char)(((long long)((int)v % -5934) - ((long long)p - p_5)) | (long long)(
                  (double)(- p_19) * p_21));
    v = (double)(((unsigned long)(- v_15) - (unsigned long)p) - (unsigned long)(
                 (1.8446744073e+19 * v_11) / ((double)(v_25 ^ (long)v_27) + 747.)));
  }
  else {
    v_11 = (double)((unsigned long)(v_15 + 40775U) % (27458UL * (unsigned long)(
                                                      (long)v_29 + -621451331L) + 827UL));
    v_23 = (short)(! (4294949525UL ^ (unsigned long)(p_21 / (double)(
                                                     p_19 + 198.f))));
    result = (int)p_9;
  }
  if ((double)((11 - (int)((char)(- v_11))) / ((int)(! v_23) + 750)) <= p_21) {
    v_7 = (unsigned char)(~ (((unsigned int)p_9 % 3971136469U) % ((unsigned int)v + 511U)));
    v = (double)((((long long)p + p_5) << ((long long)1.29302972016e+38 & 63LL)) * (long long)(
                 (int)v / ((int)((unsigned char)-3.32665956718e+38) / (
                           (int)v_7 + 410) + 716)));
    result = (int)(- (v * 648773077.) + -259.288116455);
  }
  else {
    v_13 = (char)(- ((double)(! result) * p_21));
    v_15 = (unsigned int)(61900UL + (unsigned long)(v_17 - (long)(- p_19)));
    result = (int)(- ((unsigned int)(- v_11) << ((unsigned int)v_13 / (
                                                 v_15 + 290U) & 31U)));
  }
  return result;
}

