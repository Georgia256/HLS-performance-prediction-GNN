#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1005778063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, unsigned short p_7,
                       signed char p_11, unsigned long p_13,
                       unsigned int p_15)
{
  unsigned char v_23;
  int v_21;
  long v_19;
  long long v_17;
  float v_9;
  long long v_5;
  unsigned char v;
  unsigned long long result;
  v_23 = (unsigned char)p;
  v_21 = 984898360;
  v_19 = (long)p_7;
  v_17 = (long long)p_11;
  if ((unsigned long long)v_17 + ((unsigned long long)(v_19 ^ (long)v_21) ^ (
                                  (unsigned long long)v_23 + p)) > (unsigned long long)(- (
                                                                   (unsigned long)p_7 / (
                                                                   p_13 + 560UL))) % (
                                                                   p + 26ULL)) 
    v_9 = (float)((int)p_7 << (282328396LL % (long long)(((unsigned int)p_11 + p_15) + 730U) & 15LL));
  else v_9 = (float)1024155892ULL;
  if ((unsigned long)(! ((int)((unsigned short)v_9) % 65134)) < (unsigned long)(
                                                                (int)(! p_11) & 33445) % (
                                                                ~ (4294937376UL * p_13) + 728UL)) {
    v_5 = (long long)2.04696527526e+38f;
    v = (unsigned char)(- (! p % (unsigned long long)((v_5 + (long long)p_7) + 884LL)));
    result = (unsigned long long)(- (! ((int)v >> 6)));
  }
  else result = 16960ULL;
  return result;
}

