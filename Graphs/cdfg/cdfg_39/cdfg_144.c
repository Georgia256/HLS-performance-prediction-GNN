#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448830150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, short p_5, unsigned short p_7,
        signed char p_9[1][4][1], unsigned short p_15)
{
  long long v_23;
  long long v_21;
  short v_19;
  signed char v_17;
  signed char v_13;
  signed char v_11;
  unsigned long v;
  int result;
  v_23 = (long long)p_9[0][3][0];
  v_21 = (long long)p_5;
  v_19 = (short)6480;
  v_17 = (signed char)p_7;
  v_11 = (signed char)-73;
  v = 45223UL;
  result = 25934;
  if ((long long)v <= ((v_23 * 829928424LL) / (long long)((int)(~ v_19) + 678)) / (long long)(
                      (int)p_9[0][1][0] + 432)) {
    v_13 = (signed char)(result / ((int)(~ (~ p_7)) + 230));
    result = (int)v_19;
    v_11 = (signed char)-69;
  }
  else {
    v = 609277399UL;
    result = (int)(~ ((v_21 % (long long)((int)p_9[0][1][0] + 450)) % (long long)(
                      ((int)v_11 + (int)p) + 738)));
    v_13 = (signed char)(- (-3.19973509055e+38f / ((float)p_7 + 3.f)) - 60.f);
  }
  if ((long)(~ (~ ((int)p_7 - (int)v_11))) <= ((long)((int)p_9[0][3][0] + (int)v_13) & 
                                               (long)(- p_15) / ((388900527L - (long)v_17) + 124L))) 
    result = 941688102;
  else {
    v -= (unsigned long)(((int)p_5 % (result + 594)) * ((int)p_7 - (int)p_9[0][0][0]));
    v = ! ((v + 43307UL) + (87UL - v));
    result = (int)((((unsigned long)result + v) >> ((int)(~ p) & 31)) + (
                   32683UL + (unsigned long)4.34169898146e+18));
  }
  return result;
}

