#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 390956554
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned char p_11, unsigned short p_17, int p_23)
{
  unsigned long v_25;
  short v_21;
  long v_19;
  unsigned short v_15;
  float v_13;
  unsigned long v_8;
  unsigned int v_6;
  unsigned long v_4;
  char v;
  int result;
  v_21 = (short)p_11;
  v_19 = -38403L;
  v_15 = (unsigned short)p_11;
  v_8 = (unsigned long)p_23;
  v_6 = (unsigned int)p_23;
  v = (char)-1;
  result = -8307;
  v_25 = (unsigned long)(0 % (unsigned long long)(v_6 + 792U) + 18446744073709551593ULL);
  if ((unsigned long)((long)p_17 + ~ (8621L << (v_19 & 31L))) >= (unsigned long)(- (
                                                                 (int)v_21 * p_23)) + v_25) {
    v_4 = ! (v_8 % ((unsigned long)-311.328641358 + 816UL)) >> ((int)(- p) & 31);
    v_6 = (unsigned int)1058663557.51;
    result = (int)(~ ((unsigned long)v * v_4) / (unsigned long)(((unsigned int)(
                                                                 result - -10501) + (
                                                                 v_6 ^ 4294967260U)) + 672U));
  }
  else {
    v_4 = (unsigned long)(~ (12121ULL + (unsigned long long)p_17));
    v_13 = (float)(-4959L * (long)v_15);
    result = (int)((unsigned long)(- ((float)p_11 * v_13)) ^ v_4);
  }
  return result;
}

