#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 541113825
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, double p_9[4][2], signed char p_11[2],
              float p_15[1][5][3], long long p_17)
{
  unsigned long long v_29;
  char v_27;
  char v_25;
  float v_23;
  short v_21;
  unsigned long v_19;
  unsigned char v_13;
  int v_6;
  short v_4;
  float v;
  long long result;
  v_29 = 373081619ULL;
  v_27 = (char)-120;
  v_25 = (char)-50;
  v_23 = (float)p_17;
  v_19 = (unsigned long)p_17;
  v_6 = 782708726;
  if (((unsigned long long)(- p) | ~ v_29) + (unsigned long long)(- (- p_15[0][0][0])) < 0ULL) {
    v_6 = (int)(- ((float)p_17 * v_23) / (((float)v_25 - p_15[0][0][1]) * (
                                          p_15[0][0][2] * (float)p) + 824.f));
    v_21 = (short)-503968715.162;
    v_4 = (short)p_11[1];
  }
  else {
    v_21 = (short)((int)(- ((float)v_27 / 1.77490757969e+38f)) + ((int)((signed char)p_9[1][0]) + (int)p_11[1]) * (
                                                                 v_6 >> (
                                                                 v_6 & 31)));
    v_19 = (unsigned long)(p / (- (p * 12242LL) + 477LL));
    v_4 = (short)p;
  }
  if ((float)v_19 >= - (1.20874115283e+38f * (p_15[0][4][0] + (float)v_21))) {
    v = (float)(- v_6);
    v = (v * (float)v_6) / ((float)p + 818.f) - (float)((long long)((double)p / (
                                                                    p_9[2][1] + 649.)) + 
                                                        p * p);
    result = (long long)(~ (~ ((int)((short)v) / ((int)v_4 + 505))));
  }
  else {
    result = p_17 * (p_17 + ! p_17);
    v_13 = (unsigned char)(- p_15[0][2][0]);
    result = (result & (long long)p_11[0]) % (long long)(((unsigned int)(
                                                          (float)v_13 * -2.40748186078e+38f) - 48145U) + 619U);
  }
  return result;
}

