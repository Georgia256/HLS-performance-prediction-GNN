#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468456543
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, short p_7, unsigned int p_9,
                 unsigned char p_15[3][1][4], unsigned long p_17)
{
  char v_13;
  signed char v_11;
  long v_5;
  char v;
  unsigned int result;
  v_13 = (char)p;
  v_11 = (signed char)-11;
  v_5 = -16093L;
  result = (unsigned int)(! (~ (~ p_15[1][0][2])));
  if ((unsigned long)((double)(! ((unsigned long)result / (unsigned long)(
                                  v_5 + 30L))) / (((double)p_7 + 2.11100124145e+38) * (double)(
                                                  4294919973U << (p_9 & 31U)) + 873.)) < 
      (unsigned long)(((int)v_11 - (int)v_13) & (int)(! p_15[1][0][2])) - p_17) {
    v = (char)(~ 4405036U);
    result = (unsigned int)(! v);
  }
  else result = (unsigned int)(- ((p - 598734272.f) * 0.f));
  return result;
}

