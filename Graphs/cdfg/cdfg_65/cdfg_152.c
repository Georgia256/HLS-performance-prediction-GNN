#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 151125799
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned long p_9, int p_11, char p_13,
                unsigned char p_17)
{
  unsigned short v_23;
  unsigned long v_21;
  unsigned long v_19;
  unsigned int v_15;
  float v_7;
  long long v_4;
  unsigned char v;
  signed char result;
  v_23 = (unsigned short)25544;
  v_21 = 466462165UL;
  v_19 = 357285027UL;
  v_15 = (unsigned int)p_17;
  v_7 = (float)p;
  v_4 = (long long)p_11;
  v = p_17;
  while (v_4 + (long long)p_13 <= ! (((long long)p_13 ^ -15824LL) >> (
                                     4294920884UL % (v_21 + 625UL) & 63UL))) {
    v_21 = (unsigned long)(! v_23);
    v_7 = (float)v_4;
    v_4 = (long long)(~ ((int)(- v_23) >> (5658 / ((int)v + 608) & 15)));
  }
  while_0_break: ;
  if ((unsigned long)(! (14U | v_15)) % (unsigned long)((long)((float)v_15 - 2660849664.f) / (
                                                        ((long)p_17 + -173929478L) + 378L) + 502L) <= (
      v_19 & 44570UL)) result = (signed char)-52;
  else {
    v = (unsigned char)((v_4 / (long long)((int)p_13 + 565) & (long long)(
                         3883154074UL - (unsigned long)v_15)) + (long long)p_17);
    v_4 = (long long)((unsigned long)(~ ((int)p % ((int)((signed char)v_7) + 893))) - (
                      ((unsigned long)p - p_9) - (unsigned long)(- p_11)));
    result = (signed char)(-50537LL / ((long long)(- v) / ((v_4 ^ 4294924326LL) + 398LL) + 844LL));
  }
  return result;
}

