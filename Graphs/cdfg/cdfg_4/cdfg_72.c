#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 926508992
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned short p_4, long p_7,
                       long long p_11, float p_19)
{
  unsigned long v_17;
  float v_15;
  unsigned int v_13;
  signed char v_9;
  long v;
  unsigned long long result;
  v_17 = 3904049320UL;
  v_15 = 111.693656921f;
  v_13 = 29059U;
  v_9 = (signed char)p_4;
  v = 278047466L;
  while ((long long)(1009714550L ^ 82L * (p_7 - (long)v_9)) > ! (39569LL * (
                                                                 p_11 + 223766132LL))) {
    v_15 = v_17 + (unsigned long)(v_15 + (float)(v_13 % ((unsigned int)1.89975500866e+38 + 580U)));
    v = (long)p_4;
    v = (long)((float)v - p_19);
    v_9 = (signed char)-58;
  }
  while_0_break: ;
  result = (unsigned long long)((unsigned long)((int)(~ p) + (int)p_4 % 60) * (
                                (unsigned long)(- v) / 4176563886UL));
  return result;
}

