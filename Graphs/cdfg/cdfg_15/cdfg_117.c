#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 316297399
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, unsigned long p_7, signed char p_9[3][4],
                  unsigned long p_11, long long p_13)
{
  unsigned long long v_17;
  float v_15;
  double v_4;
  char v;
  unsigned long result;
  v_17 = 37686ULL;
  v_15 = 1.61286654159e+38f;
  v = p;
  if ((unsigned long long)(- ((int)v << ((int)p & 7)) * ((int)(- p) % (
                                                         (int)((char)(- v_15)) + 848))) == 
      (v_17 + 173440941ULL) + 16588ULL) {
    v = (char)-67;
    v_4 = (double)p;
  }
  else {
    v = (char)-2.41985088546e+38f;
    v_4 = (double)0;
  }
  result = (unsigned long)((int)v * ((int)((unsigned short)v_4) + 31649));
  return result;
}

