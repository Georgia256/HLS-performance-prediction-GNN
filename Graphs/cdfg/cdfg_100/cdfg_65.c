#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 845596157
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, short p_4)
{
  short v_13;
  unsigned int v_11;
  unsigned int v_9;
  unsigned char v_7;
  long long v;
  unsigned long result;
  v_13 = p_4;
  v_11 = (unsigned int)p_4;
  v_9 = (unsigned int)p;
  v = 10672LL;
  result = (unsigned long)p_4;
  v_7 = (unsigned char)v_13;
  while ((long long)p < (long long)(4294928782UL * (unsigned long)((long)p_4 / -792880575L)) + 
                        v * ((long long)v_7 / 2248LL)) {
    v = (unsigned int)v_13 ^ (v_11 - 17U);
    v_9 = (unsigned int)((unsigned long)(v_9 / (unsigned int)((int)p_4 + 952) - (unsigned int)(~ v_7)) * (unsigned long)p);
    v_11 = (unsigned int)(~ (- p) - ! p / -46163L);
    v = ~ ((long long)(~ p_4) & v / -6097265664LL);
  }
  while_0_break: ;
  return result;
}

