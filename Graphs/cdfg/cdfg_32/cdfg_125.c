#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 533740748
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(void)
{
  long long v_8;
  short v_6;
  unsigned short v_4;
  unsigned char v;
  long result;
  v_6 = (short)31956;
  v_4 = (unsigned short)34646;
  v = (unsigned char)122;
  while ((unsigned long long)v_4 != ((18446744073671056312ULL - (unsigned long long)v) - 57392ULL) + (unsigned long long)(- v_4)) {
    v_4 = (int)v_6 % 1469;
    v_6 = (short)-54;
    v_8 = (long long)(- (- (- 9.70973811645e+37f)));
    v = (unsigned char)(- (~ v_8 % (! v_8 + 448LL)));
  }
  while_0_break: ;
  result = (long)(72 + (int)v);
  return result;
}

