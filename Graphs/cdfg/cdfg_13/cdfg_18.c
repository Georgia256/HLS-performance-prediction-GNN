#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 994968182
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[5], unsigned long long p_7, short p_9,
                       float p_11, short p_15)
{
  unsigned char v_25;
  double v_23;
  unsigned long v_21;
  unsigned char v_19;
  long long v_17;
  unsigned int v_13;
  unsigned short v_5;
  signed char v;
  unsigned long long result;
  v_25 = (unsigned char)p_7;
  v_23 = 640.132647696;
  v_21 = 83436725UL;
  v_19 = (unsigned char)133;
  v_17 = -19956580LL;
  v_5 = (unsigned short)p_7;
  result = 612868169ULL;
  if ((float)(~ (((unsigned long)v_5 | v_21) - (unsigned long)(~ v_19))) > 
      (float)v_25 - p_11) {
    v_13 = (unsigned int)((unsigned long long)((double)(- result) + 547.732526538) * (
                          (unsigned long long)v_17 % (p_7 + 645ULL) - 111ULL));
    v_5 = (unsigned short)p_9;
    v = (signed char)(! (v_13 * (unsigned int)p_15 & (unsigned int)(~ p_9)));
  }
  else {
    v_21 = (unsigned long)(-18446744073384994798ULL);
    v = (signed char)((unsigned long long)(- (v_23 + 217.40914917)) / (
                      (p_7 % ((unsigned long long)p_11 + 97ULL)) % (651698271ULL * p_7 + 278ULL) + 26ULL));
    result = (unsigned long long)((unsigned long)(~ (! v_19)) ^ v_21);
  }
  while (10850ULL % (((unsigned long long)-799.727752678 & ~ result) + 524ULL) < (unsigned long long)(! p[1])) {
    v_5 = (unsigned int)v_5 / (((unsigned int)v + 4294943633U) + 409U);
    result = (unsigned long long)p_11;
    v = (signed char)result;
    result = ((unsigned long long)v / (p_7 + 674ULL) - (unsigned long long)v) + (unsigned long long)p_9;
  }
  while_0_break: ;
  return result;
}

