#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 162665475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned long long p_9)
{
  long long v_15;
  unsigned int v_13;
  unsigned int v_11;
  unsigned char v_7;
  int v_5;
  double v;
  char result;
  v_15 = (long long)p_9;
  v_13 = (unsigned int)p;
  v_11 = (unsigned int)p_9;
  v_7 = p;
  v_5 = (int)p;
  v = (double)p;
  result = (char)p;
  if ((unsigned long long)((int)p - (int)p % ((int)p + 524)) - (unsigned long long)(
                                                               v / 29289.) * (
                                                               p_9 + 824ULL) != (unsigned long long)(! v_15)) {
    v = (double)(- (~ -220691998109204780LL));
    v = (double)((long)((int)p + (int)p) + (-145265176L | (long)v) % (long)(
                                           (int)(! result) + 118));
    result = (char)(((int)(! result) + (int)p) - (int)(0. / (v * (double)v_5 + 360.)));
  }
  else {
    v_7 = (unsigned char)((long long)((v_11 - (unsigned int)v_7) & v_13 * 101U) / (
                          v_15 + 387LL));
    v_7 = v_7;
    result = (char)((unsigned long long)(~ (! v_7)) | p_9);
  }
  return result;
}

