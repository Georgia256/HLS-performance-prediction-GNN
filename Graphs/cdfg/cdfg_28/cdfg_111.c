#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 441119609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned long p_11, unsigned char p_13,
          unsigned char p_17[2][3])
{
  unsigned long long v_19;
  int v_15;
  short v_9;
  signed char v_7;
  signed char v_4;
  unsigned char v;
  float result;
  v_19 = (unsigned long long)p;
  v_15 = 531528778;
  v_9 = (short)4254;
  result = -3.31610440153e+38f;
  v_4 = (signed char)((unsigned long long)((float)((int)p_17[0][1] + (int)p_17[0][1]) * 33952.0859375f) - v_19);
  if ((float)(~ (~ (p * (unsigned int)p_13))) != ((float)(p * (unsigned int)result) + result) + (float)v_15) 
    result = (float)(~ 4294912018UL);
  else {
    v_7 = (signed char)p;
    v = (unsigned char)(- (- result / ((float)((unsigned int)v_9 & p) + 937.f)));
    result = (float)((unsigned long)((unsigned int)((int)v | (int)v_4) + ! p) * (unsigned long)(
                     38096L - (long)v_7 / 4635L));
  }
  return result;
}

