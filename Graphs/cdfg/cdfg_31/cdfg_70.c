#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 511973017
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned long long p_4, unsigned char p_6,
         unsigned long long p_15, long p_17[1])
{
  unsigned long long v_27;
  float v_25;
  unsigned long long v_23;
  char v_21;
  unsigned long long v_19;
  char v_13;
  long v_11;
  long long v_9;
  unsigned long long v;
  char result;
  v_25 = (float)p_4;
  v_23 = 14045ULL;
  v_21 = (char)p_6;
  v_19 = (unsigned long long)p_6;
  v_11 = -22668L;
  v_9 = (long long)p;
  result = (char)13;
  if ((unsigned long long)((long long)((int)(! result)) * 616636916LL) < 
      ~ (p_15 / 103ULL) - p) {
    v = - (((unsigned long long)v_9 * v_23) / (unsigned long long)(~ v_11 + 251L));
    result = (char)(! (p_4 % (unsigned long long)(v_9 + 524LL) - (unsigned long long)(
                       v_25 / ((float)v_9 + 542.f))));
    v_11 = (long)(v * (unsigned long long)(~ p_6) & (unsigned long long)(- (
                  (int)p_6 % ((int)v_21 + 676))));
  }
  else {
    v_27 = (unsigned long long)v_9 / (- p_15 / (unsigned long long)(- v_9 + 255LL) + 780ULL);
    v_23 = ! (! ((unsigned long long)p_6 / (v_27 + 381ULL)));
    v_25 = (float)16630UL;
  }
  if ((int)(4294913024.f * - (v_25 / ((float)p_17[0] + 332.f))) < 0) {
    v = (unsigned long long)(~ v_11 + -4904L);
    result = (char)(((v / (p_4 + 195ULL)) / (unsigned long long)((v_9 >> (
                                                                  (int)result & 63)) + 469LL)) * 47698ULL);
    result = (char)((unsigned long long)result / ((p - p_4) + 285ULL) & (unsigned long long)p_6);
  }
  else {
    result = (char)(- (694601838ULL % (v_19 + 907ULL)) / (((unsigned long long)(
                                                           118 & (int)v_21) - ~ v_23) + 549ULL));
    v_13 = (char)((unsigned long long)(((unsigned long)p_17[0] - 4294901899UL) * 54667UL) + (
                  (unsigned long long)(460900478LL - (long long)p_6) | (
                  (unsigned long long)result - 676353602ULL)));
    result = (char)(~ ((unsigned long long)(- v_13) - - p_15));
  }
  return result;
}

