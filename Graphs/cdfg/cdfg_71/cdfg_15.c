#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 691329613
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p[3][5][5], unsigned short p_5[1][1][3],
                  long p_7, char p_15, unsigned long p_17[1])
{
  char v_13;
  unsigned short v_11;
  unsigned long v_9;
  signed char v;
  unsigned char result;
  v_13 = (char)90;
  v_11 = (unsigned short)p_15;
  v = (signed char)p_17[0];
  result = (unsigned char)p[1][1][0];
  v_9 = (unsigned long)(! v_11) - 4049657095UL;
  while ((long)((int)v | ((int)(~ p[2][3][1]) - (int)p_5[0][0][0])) > ! (
         ~ p_7 >> ((int)result & 31))) {
    v_11 = v_9 - 4294967205UL;
    v_9 = (unsigned long)(~ (-4462LL / (long long)((unsigned long)v_13 * p_17[0] + 627UL)));
    result = (unsigned char)(- (25092806UL - - p_17[0]));
    v = (signed char)((long)((int)v_11 - (int)v_13) % ((p_7 - (long)v) + 437L) - (long)(
                      (int)p_15 % ((int)p_15 + 768) - (int)(~ p_15)));
  }
  while_0_break: ;
  return result;
}

