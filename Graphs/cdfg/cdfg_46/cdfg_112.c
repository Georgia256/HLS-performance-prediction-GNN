#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 351032347
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, long p_4, long long p_7, unsigned short p_11,
         signed char p_15)
{
  unsigned long v_23;
  short v_21;
  char v_19;
  long long v_17;
  unsigned char v_13;
  unsigned long v_9;
  unsigned short v;
  char result;
  v_23 = 3237410706UL;
  v_21 = (short)p_15;
  v_17 = -15025LL;
  v_13 = (unsigned char)85;
  v_9 = 3556212221UL;
  v = (unsigned short)21333;
  result = (char)-121;
  if ((16713LL * v_17 - (long long)((int)result - (int)v)) / (long long)(
      ((unsigned long)p - 4294967255UL % (v_23 + 378UL)) + 549UL) <= (long long)(
      -118L / (~ ((long)p_11 - p_4) + 688L))) {
    v_19 = (char)(((unsigned long long)v_9 * 860665154ULL - (unsigned long long)(- v_13)) * (unsigned long long)p_15);
    v_13 = (unsigned char)((unsigned long)(3239 + (int)v * 42) / (! (
                                                                  (unsigned long)v_19 * v_9) + 464UL));
    result = (char)((double)(((long long)p_4 * v_17) % 3298525878LL) / 994.62193273);
  }
  else {
    v_13 = (unsigned char)(- (180LL + (49336LL ^ (long long)v_21)));
    v = (unsigned short)((unsigned long long)((long)p_15 - p_4) % ((18446744072648490666ULL << (
                                                                    (int)p_11 & 63)) + 344ULL) - (unsigned long long)p_7);
    result = (char)(- ((p + 12990.f) / 1.84467440737e+19f));
  }
  if ((unsigned long long)(32826 << ((int)v / ((int)result + 186) & 15)) + (
      (664058272ULL | (unsigned long long)result) - (unsigned long long)result) < (unsigned long long)p_7) 
    result = (char)-59;
  else {
    v_9 = (unsigned long)(-1L / (long)(((int)v - (int)v_13) * (int)(- p) + 417));
    v = (unsigned short)(~ ((v_9 + (unsigned long)p_11) * (unsigned long)(~ v)));
    result = (char)((long long)((long)(128 - (int)((unsigned char)p)) * (
                                p_4 % (long)((int)v + 808))) ^ ((long long)v - (
                                                                5368LL + p_7)));
  }
  return result;
}

