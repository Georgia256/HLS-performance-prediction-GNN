#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 47581283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, char p_4, short p_6, unsigned char p_11)
{
  float v_13;
  unsigned long long v_9;
  unsigned char v;
  signed char result;
  v_13 = (float)p_4;
  v_9 = 18446744073539263872ULL;
  v = (unsigned char)((unsigned long long)((int)(466161632.f / (v_13 + 908.f)) % -28416) + 27241ULL);
  if ((unsigned long long)(- (~ p_6)) - ~ ((unsigned long long)v | v_9) < (unsigned long long)p_11) 
    result = (signed char)p;
  else result = (signed char)-102;
  return result;
}

