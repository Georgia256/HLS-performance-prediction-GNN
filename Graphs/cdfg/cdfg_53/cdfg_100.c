#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 98889637
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, long p_5)
{
  unsigned short v_15;
  long long v_13;
  signed char v_11;
  unsigned long long v_9;
  long v_7;
  long long v;
  unsigned char result;
  v_15 = (unsigned short)32900;
  v_13 = (long long)p;
  v_11 = (signed char)79;
  v_9 = (unsigned long long)p;
  v_7 = (long)p;
  v = -24024LL;
  result = (unsigned char)38;
  while ((long long)((unsigned long)(- p_5) * 3509992677UL) % ((38322LL | 
                                                                6851148800LL / (
                                                                v_13 + 945LL)) + 725LL) <= (long long)(- (
         - p * (unsigned long)v_7))) {
    v_11 = (signed char)v_15;
    v = (long long)(- (v_9 - (unsigned long long)(p_5 * p_5)));
    v_7 = (long)(- ((-1.9518460171e+38 - (double)p_5) * 32949.));
  }
  while_0_break: ;
  while (v % (long long)(p + 820UL) == (long long)(- (33714UL % (p + 305UL)) / (unsigned long)(
                                                   (188L | (p_5 & 39L)) + 440L))) {
    result = v_9 + (unsigned long long)(v_7 + 178L);
    v_7 = (long)(~ ((long long)(836127816UL % (p + 13UL)) % -1018144941LL));
    v_9 = (unsigned long long)(! v / (long long)((int)v_11 + 11));
    v = (long long)((unsigned long)(p_5 + 106L) + ((unsigned long)result + (
                                                   59127UL | p)));
  }
  while_0_break_0: ;
  return result;
}

