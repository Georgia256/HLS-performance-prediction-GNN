#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 470190884
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p[1], unsigned long p_7, signed char p_9[1], long p_13[4],
         unsigned long p_15)
{
  unsigned long v_33;
  unsigned int v_31;
  unsigned long v_29;
  double v_27;
  long v_25;
  int v_23;
  double v_21;
  unsigned int v_19;
  unsigned int v_17;
  char v_11;
  float v_5;
  double v;
  long result;
  v_33 = 2562UL;
  v_31 = 3274170646U;
  v_29 = 4171337408UL;
  v_27 = -3.24149021109e+38;
  v_25 = 21209L;
  v_23 = -52052;
  v_21 = 394.448122615;
  v_19 = (unsigned int)p_7;
  v_11 = (char)-10;
  v = -1.10166418524e+38;
  result = (long)p[0];
  while ((unsigned long)((double)((long long)(-99 | (int)((char)v_21)) / (
                                  13474LL * (long long)p_9[0] + 296LL)) / (
                         v_27 + 383.)) <= (unsigned long)(v_31 - 78U) / (
                                          (4294936886UL * (unsigned long)result | (unsigned long)(
                                           (int)((signed char)v) + (int)p_9[0])) + 859UL)) {
    v_23 = v_33 * 4294967242UL;
    v_31 = (unsigned int)(! p_7);
    v_11 = (char)(-18446744073709491741ULL);
    v_21 = (double)(((long)v_11 / (p_13[1] + 953L) - (long)((float)v_19 * -155.472900391f)) % (
                    (long)(12. - - v) + 632L));
  }
  while_0_break: ;
  if (- (~ (~ p_15)) >= ! (- v_29 / 35943UL)) {
    v_5 = (float)((unsigned long)(- p_9[0]) - ((unsigned long)((long)v_11 % (
                                                               p_13[0] + 398L)) - p_15));
    v = (double)(((float)((unsigned int)p[0] + 655094220U) * v_5) * (float)p_7);
    result = (long)v;
  }
  else {
    v_21 = ((double)v_25 * 2.56235999982e+38) * (double)(64568U | (unsigned int)v_27) - (double)(
           (unsigned long)p[0] * ~ v_29);
    v_17 = ! (549875566U % (v_19 + 806U)) % (unsigned int)(- ((int)v_21 >> (
                                                              v_23 & 31)) + 966);
    result = (long)v_17;
  }
  return result;
}

