#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 645165872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p[5], unsigned long long p_7, int p_9,
                unsigned long p_11, unsigned int p_13)
{
  unsigned char v_29;
  short v_27;
  double v_25;
  unsigned char v_23;
  unsigned int v_21;
  int v_19;
  unsigned long v_17;
  float v_15;
  unsigned long v_5;
  long v;
  signed char result;
  v_29 = (unsigned char)55;
  v_27 = (short)p_13;
  v_25 = (double)p[3];
  v_23 = (unsigned char)p_13;
  v_21 = (unsigned int)p_11;
  v_19 = (int)p_7;
  v = (long)p_13;
  if ((long)(2.16826286944e+38 / ((double)p_9 + 277.)) + - (-44560L + v) <= (long)v_23) {
    v_19 = (int)(-37261LL * (long long)p_9);
    v_17 = (unsigned long)(~ (~ p_9 | v_19));
    v_15 = (float)p_11;
  }
  else {
    v_21 = (unsigned int)(((unsigned long)p[3] + p_11) % (unsigned long)(
                          ((unsigned int)v_25 & v_21) + 152U) - (unsigned long)(
                          v_19 * (int)v_27 + (int)v_29));
    v_17 = (unsigned long)((long long)(~ v_21 << (- p_9 & 31)) - ((-33363LL + (long long)v_23) - (long long)(- p[0])));
    v_15 = (float)p_7;
  }
  if ((unsigned long long)((double)(v_15 - 23.f) / 1.39653166954e+38) % 516ULL == (unsigned long long)(! (
      (long long)((unsigned int)p[1] % 3827121403U) / (((long long)v_17 ^ 367878542LL) + 60LL)))) {
    v_5 = ! ((unsigned long)(~ p_13) ^ (4011437356UL + (unsigned long)p_13));
    v = (long)(((unsigned long long)((unsigned long)p[2] - v_5) % (! p_7 + 946ULL)) % (unsigned long long)(
               ((unsigned long)(~ p_9) - - p_11) + 851UL));
    result = (signed char)v;
  }
  else result = (signed char)(~ (-4294939043U));
  return result;
}

