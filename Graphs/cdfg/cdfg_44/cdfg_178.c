#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 752930867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned short p_13)
{
  long v_11;
  unsigned char v_9;
  double v_6;
  short v_4;
  unsigned long long v;
  unsigned short result;
  v_11 = -34790L;
  v_9 = (unsigned char)118;
  v_6 = 7321939525.14;
  v_4 = (short)24522;
  v = 18446744073709518124ULL;
  result = (unsigned short)p;
  while ((int)v_4 / (((int)(- v_6) + (p + p)) + 988) < (int)(- (-42. + v_6)) * (
                                                       p % ((int)v_9 + 1011) + 98)) {
    result = v_11 << ((long)4590623744.f & 31L);
    v_11 = (long)(- (~ p_13));
    v_6 = (double)p;
    v_4 = (short)p_13;
  }
  while_0_break: ;
  result = (unsigned short)(~ (- ((unsigned long long)result * v)));
  return result;
}

