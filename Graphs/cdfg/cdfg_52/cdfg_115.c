#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 696060633
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, long long p_7[1][1][4])
{
  unsigned short v_11;
  long v_9;
  int v_5;
  unsigned long v;
  unsigned short result;
  v_11 = (unsigned short)p;
  v_9 = (long)p_7[0][0][3];
  v_5 = -3504;
  if ((unsigned long long)(! (~ v_5)) % 18446744073107340149ULL != (unsigned long long)(
                                                                   (float)(
                                                                   8064LL % (
                                                                   p_7[0][0][3] + 742LL)) + 
                                                                   5738323968.f * (float)v_9) / (
                                                                   (642410350ULL + (unsigned long long)(
                                                                    129 | (int)v_11)) + 835ULL)) 
    v = (unsigned long)(-60103LL - (long long)(- p));
  else v = (unsigned long)p;
  result = (unsigned short)v;
  return result;
}

