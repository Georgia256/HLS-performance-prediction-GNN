#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 826462530
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, long p_15, short p_21)
{
  double v_23;
  long long v_19;
  int v_17;
  signed char v_13;
  unsigned long long v_11;
  unsigned char v_9;
  long long v_7;
  unsigned int v_4;
  signed char v;
  signed char result;
  v_23 = (double)p_15;
  v_19 = (long long)p;
  v_17 = -42800;
  v_9 = (unsigned char)p_21;
  v_4 = (unsigned int)((int)((unsigned char)-2.52711765383e+38f) / ((int)(- v_9) + 258)) + 3627534449U;
  if ((double)(~ ((v_19 - -2409LL) ^ (188472683LL ^ (long long)p_21))) != v_23) {
    v_7 = -993513936LL;
    v = (signed char)((long long)v_4 - (((long long)p & v_7) | (long long)(
                                        (double)v_9 / 6418976166.91)));
    result = v;
  }
  else {
    v_11 = (unsigned long long)(~ ((unsigned long)(p_15 | (long)v_17) % 5282UL));
    v_13 = (signed char)(- (~ 8));
    result = (signed char)(- ((v_11 - 61238ULL) % (unsigned long long)(
                              -761133674L % (long)((int)v_13 + 571) + 979L)));
  }
  return result;
}

