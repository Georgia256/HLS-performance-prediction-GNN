#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 850636696
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, int p_5, signed char p_9, unsigned char p_13,
                   unsigned long p_17)
{
  unsigned int v_21;
  long long v_19;
  short v_15;
  long v_11;
  double v_7;
  int v;
  unsigned short result;
  v_21 = (unsigned int)p_13;
  v_19 = 11576LL;
  v_15 = (short)p;
  v_11 = (long)p_17;
  v = 7416;
  result = (unsigned short)p_13;
  v_15 = (short)((unsigned int)p_13 % (v_21 / (unsigned int)(((int)p_9 - (int)v_15) + 531) + 494U));
  if (((long long)(~ ((unsigned long)v_15 / (p_17 + 323UL))) ^ 58LL % (
                                                               ((long long)p_9 - v_19) + 709LL)) == -996402360LL) 
    result = (unsigned short)7935;
  else {
    v_7 = (double)((unsigned long long)(- v_11 / (long)((int)(- p_13) + 650)) + ~ (
                   (unsigned long long)result * 899157096ULL));
    result = (unsigned short)(- ((int)((unsigned char)v_7) % 32) ^ (int)p_9);
    result = (unsigned short)(((int)result % (v + 384)) / (p / (p + 784) + 462) - p_5);
  }
  return result;
}

