#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1020958436
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, char p_11)
{
  unsigned int v_13;
  double v_9;
  unsigned long long v_7;
  double v_5;
  double v;
  unsigned short result;
  v_13 = (unsigned int)p_11;
  v_9 = (double)p;
  v_5 = (double)p;
  v_7 = (unsigned long long)((unsigned int)((double)(~ p_11) + - v_5) & 4294901791U);
  if (~ ((unsigned long long)((int)((unsigned char)v_5) * 133) / ((v_7 + 37410ULL) + 700ULL)) >= (unsigned long long)(~ (
      (unsigned int)((int)((char)v_9) >> ((int)p_11 & 7)) + ~ v_13))) {
    result = (unsigned short)44730;
    v = (double)(~ (short)21071);
    result = (unsigned short)((double)result / ((26279. / (v + 284.) + (double)p) + 962.));
  }
  else result = (unsigned short)64281;
  return result;
}

