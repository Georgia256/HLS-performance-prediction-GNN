#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 159085499
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, signed char p_9, int p_11, long p_13,
                  unsigned char p_15)
{
  int v_19;
  signed char v_17;
  int v_6;
  long v_4;
  float v;
  unsigned long result;
  v_19 = (int)p;
  v_17 = (signed char)p_11;
  v_6 = (int)p;
  v_4 = (long)p_11;
  v = (float)p_9;
  if (! (((long)2.8672624477e+36f / -7263L) * (v_4 >> ((int)p_9 & 31))) == (long)(! (! (
      v_6 + (int)p_15)))) {
    result = (unsigned long)v_6;
    v_6 = (int)(- (((unsigned long)p_13 & result) - (unsigned long)p_15));
    result = (unsigned long)p_11;
  }
  else {
    v_4 = (long)((int)(- (- v_17)) / (- v_19 + 391));
    result = 28260UL;
    v = (float)p_9;
  }
  while (~ ((long)v * v_4) != 17753L) {
    v_4 = (long)((int)(! p_9) % ((840952382 + (int)(~ p)) + 189));
    result = (unsigned long)(((int)(- p) * v_6) % 953676498);
    v = (float)(short)6195;
  }
  while_0_break: ;
  return result;
}

