#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 805796165
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, long p_4, signed char p_9, int p_13,
                 unsigned long p_15)
{
  long long v_21;
  short v_19;
  long long v_17;
  unsigned long long v_11;
  unsigned long long v_7;
  signed char v;
  unsigned int result;
  v_21 = 846547805LL;
  v_19 = (short)p_4;
  v_17 = (long long)p;
  v_11 = 54497ULL;
  v_7 = 18446744073709515897ULL;
  if ((v_17 * (long long)v_19) * 429467729LL != ((v_21 ^ -26LL) + 1947265LL) * (
                                                ((long long)p_15 * v_17) % (long long)(
                                                (int)(~ v_19) + 874))) {
    result = (unsigned int)((322326541ULL % (v_11 + 233ULL)) / (unsigned long long)(
                            ~ p_15 + 478UL) << (((long)p_13 * p_4) * (
                                                90L / (p_4 + 452L)) & 63L));
    v_11 = (unsigned long long)(~ ((unsigned long)(result + (unsigned int)p_9) * (
                                   271712854UL % (unsigned long)(p_13 + 706))));
    v = (signed char)(- ((709043383ULL + v_11) * (unsigned long long)p_13));
  }
  else {
    v_7 = (unsigned long long)(! -588838035);
    v = (signed char)59;
  }
  if (! ((unsigned long long)v - v_7) % (unsigned long long)((int)p + 569) != (unsigned long long)p_9) 
    result = (unsigned int)p;
  else result = (unsigned int)(- (~ (- p_4)));
  return result;
}

