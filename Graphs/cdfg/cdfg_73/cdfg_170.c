#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 954116792
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned long long p_4, long p_6, short p_9, long p_11)
{
  float v_15;
  unsigned long v_13;
  char v;
  char result;
  v_15 = p;
  v_13 = (unsigned long)p_4;
  if (((unsigned long)(- (- p_9)) | (unsigned long)(! p_11) % ((v_13 + 1UL) + 125UL)) > (unsigned long)(
      v_15 * 191474096.f)) result = (char)(- (! (~ 49814ULL)));
  else {
    v = (char)(! (! 4294947857UL));
    result = (char)((unsigned long long)((unsigned long)(p - (float)p_4) * (
                                         163884973UL >> (p_6 & 31L))));
  }
  return result;
}

