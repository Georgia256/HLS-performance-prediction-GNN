#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487399425
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, unsigned int p_7, unsigned long long p_9,
                 unsigned int p_11)
{
  unsigned char v_5;
  unsigned int v;
  unsigned int result;
  v_5 = (unsigned char)150;
  v = (unsigned int)((unsigned long long)((unsigned long)(p - (long)v_5) + (unsigned long)p_7) | 
                     ! p_9 % (unsigned long long)(20U * p_11 + 69U));
  result = ~ (v << 13L);
  return result;
}

