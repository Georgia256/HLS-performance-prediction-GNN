#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 197878756
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned long p_13)
{
  long long v_19;
  unsigned long v_17;
  long v_15;
  float v_11;
  float v_9;
  unsigned char v_7;
  int v_5;
  int v;
  unsigned long result;
  v_19 = (long long)p_13;
  v_17 = 33742UL;
  v_15 = 4521L;
  v = 292002841;
  result = 4152771454UL;
  if (~ (- v_17 + (unsigned long)(p % (p + 494L))) > 23524UL) {
    v_7 = (unsigned char)164;
    v_9 = (float)(! 29348U);
    v_15 = (long)-1.9031287139e+38f;
  }
  else {
    v_17 = result;
    v_7 = (unsigned char)((long long)((unsigned long)(v_15 * (long)v) % (
                                      v_17 * (unsigned long)p + 486UL)) * v_19);
    v_9 = (float)572638218L;
  }
  if (~ (! (52964UL - (unsigned long)v_15)) == 4294967268UL) {
    v_5 = (int)(! (p * (long)(- v_9)));
    v = - (v_5 / -60) - (int)(~ v_7);
    result = ! ((unsigned long)p % 3694254636UL) | (unsigned long)v;
  }
  else {
    v_11 = (float)(~ ((p_13 + (unsigned long)p) & 4294967233UL));
    result = (unsigned long)(8273L - (long)v_11);
  }
  return result;
}

