#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 285651003
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned long long p_4[4][2][4],
                   float p_6, short p_8, unsigned long p_13)
{
  unsigned char v_23;
  unsigned int v_21;
  signed char v_19;
  unsigned short v_17;
  unsigned char v_15;
  double v_11;
  long v;
  unsigned short result;
  v_23 = (unsigned char)247;
  v_19 = (signed char)-120;
  v_17 = (unsigned short)p_6;
  v_11 = (double)p_6;
  v = (long)p;
  result = (unsigned short)p_6;
  if ((unsigned long)v_19 < p_13 - (unsigned long)(~ ((int)v_23 - (int)p_8))) {
    v_21 = (unsigned int)(241790078UL / (p_13 + 716UL));
    v_15 = (unsigned char)(! (~ v_21 % ((unsigned int)p_6 + 326U)));
    v_19 = (signed char)v_15;
  }
  else {
    v_11 = (double)((p_6 * (float)v_23) / (((float)v_23 + p_6) + 682.f) - (float)(! (
                    (int)v_23 - (int)v_17)));
    v = (long)((double)((unsigned long long)-2278848256.f / 18446744073546944054ULL) - v_11);
    v_19 = (signed char)(- 195.126735371);
  }
  while (((unsigned long long)p ^ ! (~ p_4[2][0][1])) < (unsigned long long)(
         (long)(((int)((unsigned short)p_6) - (int)result) - (int)p_8) & ! v)) {
    v_17 = (unsigned long long)v_11 - 35092ULL;
    v_11 = (double)(((int)v_17 % ((int)v_19 + 1002) << ((p_4[1][0][3] & 18446744073709494851ULL) & 31ULL)) >> (
                    (int)p_8 & 31));
    v_15 = (unsigned char)44;
    result = (unsigned short)(p_13 - ((unsigned long)v_15 - (220UL - p_13)));
  }
  while_0_break: ;
  return result;
}

