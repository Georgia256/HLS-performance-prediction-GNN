#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 932786449
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, unsigned long p_4, unsigned short p_7,
                   unsigned char p_15, long p_17)
{
  signed char v_19;
  char v_13;
  unsigned int v_11;
  long long v_9;
  unsigned long long v;
  unsigned short result;
  v_19 = (signed char)-5;
  v_13 = (char)p_4;
  v_11 = (unsigned int)p_7;
  v = (unsigned long long)p_4;
  result = p_7;
  v_9 = (long long)v_19;
  while ((unsigned long long)(~ ((long long)result * 61212LL) + -613LL) != 
         v - (unsigned long long)((int)(! p_7) % -38391)) {
    v_9 = (long long)v_13 + (long long)v_11 % ((v_9 & 4294959184LL) + 799LL);
    v_11 = (unsigned int)p_17;
    result = (unsigned short)((680.457641602f * (float)(- p_15)) * (float)(- (
                              123ULL + v)));
    v = (unsigned long long)(! ((unsigned long)v_11 - 4241064183UL) >> (
                             v_11 / (unsigned int)((int)p_15 * 47366 + 918) & 31U));
  }
  while_0_break: ;
  return result;
}

