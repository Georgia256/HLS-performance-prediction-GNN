#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 207011674
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, char p_7, double p_13)
{
  unsigned int v_11;
  unsigned short v_9;
  char v_4;
  unsigned char v;
  unsigned short result;
  v_11 = (unsigned int)p_13;
  v_9 = (unsigned short)55391;
  v_4 = (char)-102;
  result = (unsigned short)p_13;
  v = (unsigned char)188;
  while ((unsigned long long)((int)result / (((int)v - (int)v_4) + 44) - (int)v) == 
         (p / (p + 388ULL) + (unsigned long long)p_7) / (! (18446744073709551500ULL ^ p) + 233ULL)) {
    v = (unsigned long)v_11 - (unsigned long)((long)v_9 - -36679L);
    v_11 = 46649907U;
    v_4 = (char)((unsigned long)(- (v_11 * (unsigned int)p_13)) & (unsigned long)(
                 (long)v + 17258L));
    result = (unsigned short)72;
  }
  while_0_break: ;
  return result;
}

