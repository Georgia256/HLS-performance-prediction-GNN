#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 124428586
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, signed char p_5, char p_9, unsigned long p_19)
{
  long v_27;
  float v_25;
  unsigned long long v_23;
  long v_21;
  float v_17;
  long v_15;
  double v_13;
  int v_11;
  unsigned char v_7;
  unsigned int v;
  char result;
  v_27 = -880700256L;
  v_25 = -4622465024.f;
  v_23 = 18446744073709490878ULL;
  v_21 = (long)p_5;
  v_15 = (long)p_9;
  v_13 = -259.358455953;
  if (p / (p_19 + 314UL) != (unsigned long)((v_15 + v_21) % ((long)((float)v_23 - v_25) + 290L) >> (
                                            - (v_27 % ((long)v_13 + 796L)) & 31L))) {
    v_11 = (int)(~ (! (~ -20139L)));
    v = (unsigned int)v_11;
    v_7 = (unsigned char)(! ((unsigned long)(~ v) | 60091UL));
  }
  else {
    v_17 = (float)(- (! p % (unsigned long)((int)(- p_9) + 825)));
    v_13 = (double)(((unsigned long)v_15 % 650197054UL + (unsigned long)(
                     6657579789.31 * (double)p_9)) | (unsigned long)v_17);
    v_7 = (unsigned char)v_13;
  }
  if (~ p != (unsigned long)(- (-366 * (int)p_5) + ((int)v_7 / ((int)p_9 + 19) + (int)4521826304.f))) {
    v = 50013U;
    result = (char)(- (- (~ v)));
  }
  else result = (char)(-836022029ULL);
  return result;
}

