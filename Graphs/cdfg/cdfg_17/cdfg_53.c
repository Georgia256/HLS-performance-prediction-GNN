#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526745265
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, signed char p_7, unsigned long p_11,
                unsigned char p_17, unsigned char p_25)
{
  char v_27;
  unsigned short v_23;
  unsigned int v_21;
  char v_19;
  long long v_15;
  unsigned long v_13;
  unsigned long long v_9;
  signed char v_4;
  long v;
  signed char result;
  v_27 = (char)p_11;
  v_21 = (unsigned int)p_11;
  v_19 = (char)p_17;
  v_13 = (unsigned long)p_17;
  v_9 = 18446744073102188575ULL;
  v_4 = (signed char)p_25;
  v = (long)p_17;
  result = (signed char)-25;
  v_23 = (unsigned short)(((unsigned long)p & (64991UL >> 2)) % (unsigned long)(
                          ((int)v_27 / ((int)result + 450)) / ((int)p_17 + 731) + 394));
  if ((float)((long)((int)v_23 / ((int)p_7 + 591) >> (v % 41L & 31L)) - v) != - (
      (float)v_13 - 2.13463943878e+38f)) {
    v_4 = (signed char)((((unsigned long)p_7 + p_11) * (756461065UL - v_13)) * (unsigned long)(
                        (long)(~ v_4) - ~ v));
    result = (signed char)((unsigned long long)(-123 % ((int)v_4 + 497)) / (
                           v_9 + 729ULL) + 18446744073709545431ULL);
    result = (signed char)((unsigned long)(v - (long)v_4) / 60285UL - (unsigned long)(
                           (int)result * (int)p - (int)p_7 % ((int)result + 869)));
  }
  else {
    v_23 = (unsigned short)(~ (40525LL / (long long)((int)p_25 % ((int)v_27 + 698) + 156)));
    v_15 = (long long)((unsigned long long)v_19 * ((unsigned long long)(
                                                   (unsigned int)p_7 ^ v_21) / (
                                                   ((unsigned long long)v_23 - 54815ULL) + 1000ULL)));
    result = (signed char)(v_15 % -111LL & (long long)p_17);
  }
  return result;
}

