#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 757180016
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned char p_13, unsigned long p_15[4][4],
         unsigned short p_17, long p_19)
{
  signed char v_11;
  short v_8;
  long v_6;
  unsigned short v_4;
  char v;
  char result;
  v_6 = -192212974L;
  v = (char)-101;
  result = (char)p_13;
  v_11 = (signed char)(~ (((long long)v_6 * -16996LL) * (long long)(- v_6)));
  if (p >= ((unsigned long long)v_11 - (p - (unsigned long long)p_13)) + (unsigned long long)(
           p_15[1][1] % (unsigned long)((int)result + 827) - (unsigned long)(
           (long)p_17 + p_19))) {
    v_8 = (short)-27600;
    v_4 = (unsigned short)(v_6 % (long)((int)(~ v_8) + 647));
    result = (char)(~ ((int)v % ((int)(! v_4) + 410)));
  }
  else result = (char)-58;
  return result;
}

