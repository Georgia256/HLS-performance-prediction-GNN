#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 179941580
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned short p_13[1][4][3])
{
  signed char v_11;
  unsigned short v_9;
  unsigned long long v_7;
  unsigned long long v_4;
  float v;
  char result;
  v_11 = (signed char)p;
  v_9 = (unsigned short)43263;
  v_4 = (unsigned long long)p_13[0][0][1];
  v = (float)p_13[0][0][2];
  result = (char)p_13[0][1][1];
  v_7 = (unsigned long long)v_9;
  while ((unsigned long long)(- ((int)result - (37 - (int)((char)v)))) < 
         (18446744073709551566ULL / (v_4 + 172ULL)) % (- (p * v_7) + 35ULL)) {
    v_11 = (int)v_11 * (int)((signed char)823.929364915);
    v_9 = (unsigned short)(- ((int)(! p_13[0][0][1]) * (int)(- v_9)));
    v_4 = (unsigned long long)v_9;
    result = (char)p;
  }
  while_0_break: ;
  return result;
}

