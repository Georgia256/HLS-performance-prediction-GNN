#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 701181311
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, short p_15)
{
  unsigned int v_13;
  unsigned char v_11;
  int v_9;
  signed char v_6;
  unsigned long long v_4;
  unsigned long long v;
  char result;
  v_13 = 3834459518U;
  v_11 = (unsigned char)p;
  v_9 = (int)p;
  v_6 = (signed char)p_15;
  v_4 = 264202019ULL;
  v = 298075360ULL;
  while (v_4 <= (unsigned long long)(! ((long)v_6 / (p + 30L)) / 8918L)) {
    v_13 += (unsigned int)((int)v_11 / ((v_9 << 3ULL) + 472));
    v_11 = (unsigned char)(p + (long)(57077 - (int)((unsigned short)5075924992.f)) % (
                               p * (long)p_15 + 1017L));
    v_9 = (int)p;
    v_4 = 221ULL;
  }
  while_0_break: ;
  result = (char)((v + (unsigned long long)-9652434247.13) * 18446744073709551509ULL + 4294937123ULL);
  return result;
}

