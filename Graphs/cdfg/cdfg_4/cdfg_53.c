#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176986071
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, long long p_7, unsigned char p_9,
                       float p_11, unsigned int p_13)
{
  unsigned long v_23;
  char v_21;
  char v_19;
  unsigned short v_17;
  unsigned int v_15;
  char v_5;
  float v;
  unsigned long long result;
  v_23 = (unsigned long)p_9;
  v_21 = (char)p_11;
  v_19 = (char)p_7;
  v = (float)p_13;
  if ((int)v_19 % -14573 < (((int)((char)p_11) * 47 ^ (int)(! v_21)) & (int)(
                            v / ((float)(v_23 - (unsigned long)p_9) + 518.f)))) 
    v_15 = (unsigned int)(- ((float)p_7 * (p_11 / ((float)p + 1003.f))));
  else {
    v_17 = (unsigned short)(p_7 / (p_7 + 621LL));
    v_15 = (unsigned int)(! (~ p_7 + (long long)(~ v_17)));
  }
  if ((unsigned int)p_11 >= ~ v_15) {
    v_5 = (char)((((float)p_9 / -2.16056015543e+38f) / -687659328.f) / (
                 - p_11 + 1018.f));
    v = (float)((long long)((unsigned int)v_5 / 440327399U) / (879641811LL % (
                                                               p_7 + 416LL) + 361LL));
    result = (unsigned long long)((int)(- (12504.f - v)) + 241 * (int)p);
  }
  else result = (unsigned long long)p_13;
  return result;
}

