#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 66193239
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned char p_9, unsigned short p_11, char p_17,
         short p_21[1])
{
  unsigned long long v_29;
  float v_27;
  unsigned int v_25;
  int v_23;
  short v_19;
  unsigned int v_15;
  signed char v_13;
  double v_6;
  long long v_4;
  float v;
  long result;
  v_29 = (unsigned long long)p_17;
  v_27 = 2.72911402473e+38f;
  v_25 = (unsigned int)p_17;
  v_23 = -97081466;
  v_19 = (short)p_11;
  v_15 = (unsigned int)p_21[0];
  v_13 = (signed char)p_11;
  result = (long)p_17;
  if (875U > (! v_15 ^ (unsigned int)p_17) - 967U) {
    v_19 = (short)((unsigned long)((unsigned int)v_19 * v_25) / ((unsigned long)v_15 * 2679UL + 286UL) + (
                   4294914722UL % (unsigned long)(result + 447L) - 27684UL / (unsigned long)(
                                                                   v_15 + 314U)));
    v_23 = (int)(- v_27);
    v_6 = (double)((unsigned long long)(120U / (((unsigned int)6.9509257296e+37 + v_15) + 973U)) + (
                   882576338ULL ^ (unsigned long long)((int)p_17 % ((int)v_19 + 635))));
  }
  else {
    v_25 = (unsigned int)((int)p_11 | (0 - ((int)p_17 - (int)p_9)));
    v_6 = (double)(! (653759633ULL + (unsigned long long)p_9) - ~ (v_29 % (unsigned long long)(
                                                                   (int)v_13 + 193)));
    v_15 = (unsigned int)((v_29 / 36ULL) % (unsigned long long)(((int)p_11 + (
                                                                 (int)p_17 + (int)v_19)) + 618));
  }
  if ((long long)(v_23 + -32384) == ! ((long long)(4294940741U + v_25) + 
                                       (long long)p_17 % -13519LL)) {
    v_4 = (long long)((unsigned int)((int)p_11 | (int)v_13) * ((unsigned int)p + v_15) - 17726U);
    v = (float)(~ v_4 / (long long)(((int)((char)v_6) ^ (int)p) + 432) << (
                (int)(! p_9) & 63));
    result = (long)v;
  }
  else {
    v_19 = (short)-9853;
    result = (long)((((int)p_17 & 22837) * (int)(! v_19)) / ((int)v_19 + 387));
  }
  return result;
}

