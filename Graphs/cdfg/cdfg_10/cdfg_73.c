#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626861275
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned short p_5[2][3])
{
  short v_13;
  float v_11;
  float v_9;
  int v_7;
  short v;
  unsigned long long result;
  v_13 = (short)-1815;
  v_11 = (float)p_5[0][2];
  v_9 = -7112939520.f;
  v_7 = 64670;
  result = (unsigned long long)p_5[1][2];
  while ((unsigned long)(((unsigned int)p_5[1][1] + (339U << 1U)) * 4294944097U) > (
         4241177081UL ^ (unsigned long)v_9)) {
    v_13 = (int)v_13 << (((int)((unsigned char)v_11) + 207) & 15);
    result = (unsigned long long)(~ (- (char)-114));
    v_11 = (float)(985412010U | (unsigned int)v_7);
    v_9 = (float)(0ULL ^ ~ result / 673ULL);
  }
  while_0_break: ;
  if (- ((unsigned long long)p_5[1][1] + result) / 121ULL == (unsigned long long)v_7) 
    result = (unsigned long long)p;
  else {
    v = (short)-28249;
    result = (unsigned long long)(- v);
  }
  return result;
}

