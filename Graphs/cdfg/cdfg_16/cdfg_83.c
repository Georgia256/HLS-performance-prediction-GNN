#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 394394510
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, double p_11, double p_13)
{
  unsigned short v_21;
  signed char v_19;
  long v_17;
  unsigned int v_15;
  long v_9;
  char v_7;
  unsigned long long v_5;
  int v;
  float result;
  v_21 = (unsigned short)p;
  v_19 = (signed char)p;
  v_17 = -25024L;
  v_15 = (unsigned int)p;
  v_7 = (char)p_13;
  v_5 = (unsigned long long)p_13;
  v = 670216446;
  result = 233.64692688f;
  while ((unsigned long)(! (v_15 ^ 3595051967U)) > (unsigned long)(- v_17)) {
    v = (unsigned int)v_19 - 3858838440U;
    v_7 = (char)(~ (4294911702UL | (unsigned long)v));
    result = (float)(- (p_13 / 19988. - (double)((int)v_21 - 340)));
    v_17 = (long)(p % ((int)(4279869904. / (((double)v_15 - p_13) + 295.)) + 932));
  }
  while_0_break: ;
  while ((unsigned long long)(~ (59 + v % (p + 506))) == ((unsigned long long)(
                                                          11 | (int)((unsigned char)2.74020221524e+38f)) + (
                                                          3020ULL & v_5)) % (unsigned long long)(
                                                         ~ (473029963 + (int)1.62484335517e+37f) + 108)) {
    v_9 = (int)v_7 % ((int)((char)-637.714521714) + 137);
    result = (float)((long long)((int)p_13 % (! p + 669)) - -518228745LL);
    v_5 = (unsigned long long)(! (~ ((long)p * v_9)));
    v = (int)((double)p / (((double)(-913L / (v_9 + 131L)) + (p_11 - -3.25731259211e+38)) + 441.));
  }
  while_0_break_0: ;
  return result;
}

