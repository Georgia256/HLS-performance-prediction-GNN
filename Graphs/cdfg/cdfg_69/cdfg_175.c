#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 185105910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p[2][1], int p_4, unsigned int p_6, short p_8,
        unsigned long long p_11)
{
  unsigned short v_21;
  unsigned short v_19;
  unsigned char v_17;
  double v_15;
  unsigned long long v_13;
  short v;
  int result;
  v_19 = (unsigned short)18871;
  v_17 = (unsigned char)p_4;
  v_15 = -776.256442877;
  v_13 = (unsigned long long)p_4;
  v = (short)p_11;
  result = 194740529;
  v_21 = (unsigned short)v_13;
  if ((unsigned long long)(result - (int)v) * (38197ULL * p_11) - (v_13 - (unsigned long long)p[1][0]) % (unsigned long long)(
                                                                  ((int)((unsigned char)v_15) << (
                                                                   (int)v_17 & 7)) + 513) <= (unsigned long long)(
      - (-454087551LL % (long long)((int)v_19 + 218)) % (long long)((int)v_21 + 604))) 
    result = (int)((float)(~ ((unsigned long long)p[1][0] - 325048899ULL)) * p[0][0]);
  else result = p_4;
  return result;
}

