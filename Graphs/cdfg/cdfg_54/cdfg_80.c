#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 884398937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, double p_5[2][5], int p_7, signed char p_9, short p_11)
{
  int v_23;
  unsigned char v_21;
  unsigned int v_19;
  long v_17;
  long v_15;
  long v_13;
  unsigned long long v;
  long result;
  v_23 = (int)p_9;
  v_21 = (unsigned char)250;
  v_19 = 4294964833U;
  v_17 = -574689183L;
  v_15 = 17961L;
  v_13 = 901069556L;
  v = 19436ULL;
  while ((unsigned int)p_5[0][2] == v_19) {
    v = (unsigned long)v_21 * 3862283462UL;
    v_15 = (long)((unsigned long long)(p & 169LL) / (- ((unsigned long long)p_7 - v) + 243ULL));
    v_17 = (long)(~ (- v << 1LL));
    v_19 = (unsigned int)(~ ((long long)v_23 - p) / (long long)(((unsigned long)p_7 % 63894UL << 16) + 290UL));
  }
  while_0_break: ;
  if (v_13 >> ((unsigned long long)(v_15 + 54360L) / ((v ^ 18345ULL) + 321ULL) & 31ULL) <= 
      -34L % (v_17 + 86L)) {
    v = (unsigned long long)(~ p);
    result = (long)(- (- ((float)v - -1.07583549189e+38f)));
  }
  else {
    v = (unsigned long long)p;
    v = v;
    result = (long)(((double)v / (p_5[1][4] + 466.) - -1.41162934128e+38) + (double)p_7);
  }
  return result;
}

