#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 663202561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned char p_11)
{
  signed char v_15;
  long long v_13;
  unsigned char v_9;
  short v_7;
  int v_4;
  int v;
  signed char result;
  v_15 = (signed char)-78;
  v_13 = -986053097LL;
  v_9 = (unsigned char)107;
  v_7 = (short)7121;
  v_4 = 32797;
  v = 56183;
  result = (signed char)60;
  while (- ((unsigned long long)v_4 - 18446744072908928329ULL) * (unsigned long long)(~ p) < 0ULL) {
    v_9 = (unsigned long long)v_15 % ((unsigned long long)v_13 / 763210144ULL + 501ULL);
    v = (int)p_11 / 235;
    v_9 = (unsigned char)(- (! ((long long)v_9 / 35632LL)));
    v_4 = (int)((4294953812UL % (p + 942UL)) / (unsigned long)((int)v_9 + 784));
  }
  while_0_break: ;
  result = (signed char)(~ (-51 % (v + 640)) ^ (int)result);
  return result;
}

