#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 269367697
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, unsigned short p_4[1][3], unsigned short p_6,
         unsigned long p_8, short p_13)
{
  long long v_21;
  unsigned long v_19;
  signed char v_17;
  long v_15;
  unsigned long v_11;
  double v;
  char result;
  v_21 = -133564694LL;
  v_19 = (unsigned long)p;
  v_17 = (signed char)-18;
  v_15 = (long)p_8;
  v_11 = 22131UL;
  v = -9840405827.67;
  result = (char)p;
  while ((double)((long)((double)v_17 / (v + 175.)) % 25382L) - 578.215180424 < (double)(
         (unsigned long)p + - v_19)) {
    result = (char)(247LL / (((-906241305LL - (long long)v_17) + (long long)(
                              p_8 << 9LL)) + 623LL));
    v_17 = (signed char)(v_15 * (long)p_6);
    v_19 = (unsigned long)v_21;
  }
  while_0_break: ;
  while ((double)(25304U % ((8418U + p) + 772U)) / -710.353454704 <= (double)(
         (unsigned long)p_4[0][2] * ((unsigned long)p_6 * p_8) - (unsigned long)(- v))) {
    v_15 = (long long)v_11 + -17568LL;
    result = result;
    v_11 = (p_8 / (unsigned long)(v_15 + 814L)) / ((p_8 + (unsigned long)p_4[0][1]) + 863UL) + 1816534777UL;
    v = (double)(~ (36U / (p + 1016U) & (unsigned int)p_13));
  }
  while_0_break_0: ;
  return result;
}

