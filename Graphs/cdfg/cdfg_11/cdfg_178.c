#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 841691386
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, double p_4, float p_6, signed char p_8,
                signed char p_10)
{
  unsigned char v_19;
  unsigned int v_17;
  float v_15;
  signed char v_13;
  unsigned long long v;
  signed char result;
  v_19 = (unsigned char)13;
  v_17 = (unsigned int)p_4;
  v_15 = (float)p_4;
  v_13 = (signed char)p_6;
  v = p;
  result = (signed char)-68;
  while (- ((-7435708513.93 + (double)p) * (double)(- p_6)) != (double)(
         - p_6 / (- (v_15 - (float)v_17) + 436.f))) {
    v_15 = (int)v_19 + -637945987;
    result = (signed char)(! (p % ((unsigned long long)p_4 + 1005ULL) + (unsigned long long)(
                              (long)result + -7209L)));
    v_19 = (unsigned char)((- p_4 + (double)(~ result)) * (double)(- p_8));
    v_17 = (unsigned int)(- (! (-41405L + (long)v_19)));
  }
  while_0_break: ;
  if ((unsigned long long)p_10 % 895333ULL == (unsigned long long)((int)(
                                                                   447.392333984f * (float)v) / (
                                                                   (int)v_13 % 106 + 125) & -13445)) 
    result = (signed char)(- (! p));
  else result = (signed char)(- (p_4 / (double)(p_6 + 230.f)) + (double)(
                              (unsigned long)(68204116L % (long)((int)p_8 + 96)) * (unsigned long)(
                              (unsigned int)p_8 * 989502111U)));
  return result;
}

