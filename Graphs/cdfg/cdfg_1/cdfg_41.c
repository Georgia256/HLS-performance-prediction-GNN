#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 442359922
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long p_9, int p_17, short p_21,
              unsigned short p_23)
{
  long v_27;
  unsigned long v_25;
  unsigned long v_19;
  int v_15;
  unsigned int v_13;
  unsigned int v_11;
  unsigned char v_7;
  int v_4;
  unsigned long v;
  long long result;
  v_27 = (long)p;
  v_25 = 412435448UL;
  v_19 = (unsigned long)p;
  v_13 = (unsigned int)p_23;
  v_4 = (int)p_9;
  v = (unsigned long)p_21;
  result = (long long)p_9;
  if (result < (long long)(v_25 / (unsigned long)((unsigned int)p_21 * v_13 + 304U) + (unsigned long)(
                           (long)(~ p_21) + v_27))) {
    v_11 = v_13;
    v_4 = (int)(- (4294960237UL - (unsigned long)v_11 * 4294930710UL));
    v_7 = (unsigned char)-0.f;
  }
  else {
    v_15 = (int)(-(short)22647);
    v_7 = (unsigned char)(((unsigned long)v_15 - 818724684UL) - ((unsigned long)p_17 * v_19 + (unsigned long)(
                                                                 (int)p_21 % (
                                                                 (int)p_23 + 381))));
    v = (unsigned long)p;
  }
  if (v % (unsigned long)(-93 % (~ v_4 + 167) + 849) > (unsigned long)(
      (p * (unsigned int)v_7 + 84U) << (p_9 & 31L))) result = -4062LL;
  else result = (long long)(! 65080UL);
  return result;
}

