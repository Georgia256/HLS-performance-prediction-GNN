#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 316006121
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, char p_4[5], char p_7, unsigned short p_11,
         char p_15[5])
{
  int v_13;
  int v_9;
  double v;
  long result;
  v_13 = -676278260;
  v_9 = (int)p_11;
  if ((v_9 & 113 % (((int)p_11 | v_13) + 433)) == - (~ v_9) * ((int)p_15[3] * (int)p_15[4] << 21LL)) 
    result = (long)p;
  else {
    v = (double)(! (158768430L / (long)((int)p_7 / 72 + 678)));
    result = (long)(3433612287UL + (unsigned long)v);
    result = (long)p_4[2] + result;
  }
  return result;
}

