#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 504910426
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned char p_7, unsigned short p_9, long p_11,
                  short p_17)
{
  char v_21;
  long v_19;
  unsigned int v_15;
  long long v_13;
  int v_5;
  long v;
  unsigned char result;
  v_21 = (char)p_9;
  v_19 = 962429182L;
  v_13 = (long long)p_11;
  v = 27025L;
  v_15 = (unsigned int)((unsigned long)((int)p_17 | (int)(- p_17)) % (
                        (3303140821UL ^ (unsigned long)(v_19 >> ((int)v_21 & 31))) + 349UL));
  if ((long long)v != ! (-35361LL % (((long long)v_15 + v_13) + 409LL))) {
    v_5 = (int)((unsigned long)((int)(! p_7) / ((int)(- p_9) + 946)) / (
                ~ ((unsigned long)p_11 / 61629UL) + 113UL));
    result = (unsigned char)((! v + (long)((int)p >> (v & 7L))) * ((long)p * -734357627L + (long)v_5));
    result = (unsigned char)(~ (- ((int)result - (int)result)));
  }
  else {
    v_13 = (long long)(- (! (! p)));
    result = (unsigned char)v_13;
  }
  return result;
}

