#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 851241354
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned long p_4, double p_6, long p_8,
                 unsigned long p_13)
{
  unsigned char v_25;
  unsigned long long v_23;
  int v_21;
  long long v_19;
  unsigned long v_17;
  float v_15;
  long v_11;
  unsigned long v;
  unsigned int result;
  v_25 = (unsigned char)118;
  v_23 = 18446744072873835432ULL;
  v_21 = (int)p_6;
  v_19 = (long long)p_4;
  v_17 = 59715UL;
  v_15 = (float)p_13;
  v = 981489829UL;
  result = (unsigned int)p_13;
  if (((long long)p_4 ^ ~ v_19 * -17LL) >= -51482LL) {
    v_11 = ~ ((long)(-2057677952 + v_21) / ((p_8 + 63L) + 818L));
    v_21 = (int)p_4;
    v = (unsigned long)(((double)((float)v_21 / 416.694061279f) - 412.336308691) - (double)(
                        v_23 * (unsigned long long)p_13 - v_23));
  }
  else {
    result = (unsigned int)((unsigned long long)result / 18446744073709513843ULL & (unsigned long long)(
                            (unsigned long)p / ((p_4 << ((int)p & 31)) + 395UL)));
    v_15 = (float)((long long)v_25 + ! ((long long)p_6 + 60241LL));
    v_11 = (long)v_17;
  }
  if (~ ((unsigned long)v_11 * (v_17 + 32295UL)) > (((unsigned long)v_15 / (
                                                     v_17 + 87UL)) / (
                                                    v + 638UL)) / (- (~ p_4) + 772UL)) {
    v = (unsigned long)(! ((long long)(p_13 % 3695311309UL) * (-896661916LL - (long long)v_15)));
    result = (unsigned int)((unsigned long)(p_8 + (long)p) * ~ v ^ (unsigned long)v_11);
    result = (unsigned int)(- ((unsigned long)p - p_4) - (unsigned long)(
                            result * 518U >> ((35594 + (int)((unsigned short)p_6)) & 31)));
  }
  else {
    v_19 = (long long)((unsigned long)(- (result + 22994U)) + 1945UL);
    v_17 = (unsigned long)((long long)(p_13 * (unsigned long)(- p_8)) * ! (
                           21LL | v_19));
    result = (unsigned int)(((double)((unsigned long)p | v_17) + 9642920921.52) + (double)(~ (
                            p_4 * 149UL)));
  }
  return result;
}

