#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 547738487
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned short p_5, unsigned long p_7,
         signed char p_13, unsigned short p_17[5])
{
  unsigned char v_15;
  char v_11;
  unsigned long long v_9;
  unsigned long v;
  char result;
  v_15 = (unsigned char)71;
  v = (unsigned long)p_5;
  if (! ((unsigned long)((int)p_17[3] + (int)((unsigned short)83888064.f)) + v) <= (unsigned long)(! p)) 
    v = ~ ((unsigned long)((int)p / ((int)p_5 + 600)) + p_7);
  else {
    v_11 = (char)((int)((unsigned char)-5298711611.04) ^ (int)v_15);
    v_9 = (unsigned long long)p_13;
    v = (unsigned long)((0ULL / (- v_9 + 221ULL)) % (unsigned long long)(
                        (int)(- v_11) + 333));
  }
  result = (char)(- v);
  return result;
}

