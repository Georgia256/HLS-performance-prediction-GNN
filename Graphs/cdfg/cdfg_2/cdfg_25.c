#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 446050481
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned long long p_4, float p_7,
                 char p_13, int p_21)
{
  unsigned short v_27;
  long v_25;
  float v_23;
  int v_19;
  signed char v_17;
  unsigned short v_15;
  unsigned char v_11;
  int v_9;
  unsigned long long v;
  unsigned int result;
  v_27 = (unsigned short)p_7;
  v_25 = (long)p_7;
  v_23 = -7591532032.f;
  v_19 = -27445;
  v_17 = (signed char)-78;
  v_15 = (unsigned short)18181;
  v_9 = p_21;
  if (p != (unsigned long)(~ v_15)) {
    v_11 = (unsigned char)203;
    v_15 = (unsigned short)v_23;
    v_17 = (signed char)((unsigned long long)(- p_21 * 220) / (((unsigned long long)p + 36911ULL) / (
                                                               p_4 + 243ULL) + 416ULL));
  }
  else {
    v_15 = (unsigned short)((unsigned long long)(- (104 - (int)v_27)) * (
                            p_4 & 18446744073709551570ULL));
    v_19 = 622992828;
    v_11 = (unsigned char)((float)(18446744073709551537ULL | p_4) * p_7 + (float)(
                           - v_25 + (long)(~ v_9)));
  }
  if ((long long)(~ v_15) == ! (-49661LL / (long long)((int)v_17 + 413) - (long long)(
                                (int)-6309220547.77 + v_19))) {
    v_9 = (int)v_11;
    v = (unsigned long long)((long long)p_7 & 1992LL / (long long)(- v_9 + 596));
    result = (unsigned int)((unsigned long long)(p | (unsigned long)-1383140200.55) * - (
                            p_4 - v));
  }
  else {
    v_9 = (int)p_13;
    result = (unsigned int)(~ (! v_9) * 161);
  }
  return result;
}

