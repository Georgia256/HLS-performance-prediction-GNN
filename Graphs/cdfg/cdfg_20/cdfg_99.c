#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226488895
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned int p_4, char p_9, signed char p_11, int p_13)
{
  unsigned short v_27;
  int v_25;
  float v_23;
  unsigned short v_21;
  signed char v_19;
  char v_17;
  float v_15;
  short v_7;
  long v;
  float result;
  v_27 = (unsigned short)p;
  v_25 = -57567;
  v_23 = (float)p;
  v_21 = (unsigned short)37975;
  v_19 = (signed char)p_13;
  v_17 = (char)116;
  v_15 = 921.708435059f;
  v_7 = (short)16757;
  v = -55745L;
  while (((((int)v_21 & p_13) ^ (int)v_23 % (p_13 + 515)) ^ (int)v_21) != v_25) {
    v_15 = (float)((((int)v_7 % ((int)v_21 + 837)) % ((int)v_7 + 649)) * 31392);
    v_21 = (unsigned short)((long long)((long)(~ v_27) * (v / (long)(
                                                          v_25 + 44))) + p);
    v_25 = (int)p_4;
  }
  while_0_break: ;
  if ((long long)(! ((int)(! p_11) + p_13 % -21)) < ((long long)(485051139.003 + (double)v_15) * (
                                                     (long long)v_17 ^ p)) * (long long)v_19) 
    result = (float)(- (! (~ p)));
  else {
    v = (long)(! 0);
    v = (long)(p & (long long)((long)((int)v_7 * (int)p_9) + ~ v));
    result = (float)(4294939215UL + ((unsigned long)(p_4 * p_4) + (unsigned long)v));
  }
  return result;
}

