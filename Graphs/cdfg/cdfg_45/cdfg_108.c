#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 234645032
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p[1], unsigned int p_4, long long p_6, char p_8,
                  unsigned char p_11)
{
  short v_15;
  double v_13;
  unsigned short v;
  unsigned char result;
  v_15 = (short)p_8;
  v_13 = -273.474817709;
  if ((int)((short)v_13) + (int)v_15 >= -22) v = (unsigned short)197;
  else v = (unsigned short)(~ p_11);
  if ((long)p_8 * ~ ((long)v - -445133060L) <= 0L) {
    result = (unsigned char)p_4;
    result = (unsigned char)(- ((long)(! result) & - p[0]));
  }
  else result = (unsigned char)(~ (-22566LL % (p_6 + 581LL) + 558LL));
  return result;
}

