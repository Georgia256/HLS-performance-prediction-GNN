#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 938880870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, short p_5, signed char p_7, char p_9[1][5],
        unsigned int p_11)
{
  unsigned long v_19;
  long v_17;
  unsigned long v_15;
  unsigned short v_13;
  unsigned char v;
  int result;
  v_19 = p;
  v_17 = (long)p_7;
  v_15 = (unsigned long)p_7;
  v_13 = (unsigned short)p_9[0][0];
  while ((long long)(~ (p ^ 0UL)) > 0LL) {
    v_19 = (unsigned long long)v_19 - ((unsigned long long)v_17 + 18446744073426649773ULL);
    v_13 = (unsigned short)p_11;
    v_17 = 32224923L;
    v_13 = (unsigned short)(! ((10720 | (int)v_13) + -14545));
  }
  while_0_break: ;
  if ((unsigned long)(- (~ p_9[0][4])) / 1385UL > (unsigned long)(((int)((unsigned short)-2.64373643845e+38f) + (int)v_13) / 891426304)) {
    v = (unsigned char)(((4289767408UL & p) - (unsigned long)p_11) % (unsigned long)(
                        (int)p_9[0][2] + 456));
    result = (int)(((unsigned long)(! v) * (p * (unsigned long)p_5)) * (unsigned long)(
                   (int)(~ p_7) * (int)(- p_9[0][0])));
  }
  else result = (int)(- (- (! p_11)));
  return result;
}

