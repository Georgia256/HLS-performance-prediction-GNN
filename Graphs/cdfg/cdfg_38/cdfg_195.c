#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981647387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(void)
{
  unsigned char v_6;
  int v_4;
  short v;
  unsigned char result;
  v_6 = (unsigned char)17;
  v = (short)-27047;
  result = (unsigned char)137;
  v_4 = (int)((unsigned long long)(962010019L ^ (long)(~ v_6)));
  result = (unsigned char)(-22772 / (((int)(! v) ^ ((int)result + v_4)) + 609));
  return result;
}

