#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 714166710
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p)
{
  float v_8;
  long long v_6;
  unsigned char v_4;
  unsigned long v;
  unsigned long long result;
  v_6 = -61947LL;
  v = (unsigned long)p;
  v_4 = (unsigned char)p;
  v_8 = (float)(! (((int)v_4 << (v & 7UL)) % 649 ^ (int)(! (! v_4))));
  v = (unsigned long)(- (((long long)((int)v_4 % 76) + ! v_6) + (long long)(
                         (unsigned long)((int)v_4 + (int)((unsigned char)v_8)) % 21671UL)));
  result = (unsigned long long)(! (v + 4294956241UL) >> ((unsigned long)-4.10263909456e+37 & 31UL));
  return result;
}

