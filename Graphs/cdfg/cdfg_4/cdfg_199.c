#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 786855414
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, char p_5,
                   unsigned long p_9[2][4][5], signed char p_11)
{
  unsigned char v_19;
  long v_17;
  unsigned long v_15;
  long v_13;
  double v_7;
  signed char v;
  unsigned short result;
  v_17 = (long)p;
  v_15 = 394430772UL;
  v_13 = 39258L;
  v_7 = (double)p;
  result = (unsigned short)p_5;
  v = (signed char)p_9[1][1][3];
  while (((18446744073443868087ULL >> (p & 63ULL)) % (unsigned long long)(
          (int)(! v) + 301) | (unsigned long long)p_5) == (unsigned long long)(
         ! ((unsigned long)v_7 * p_9[1][1][3]) % (unsigned long)((132 / (
                                                                  (int)p_11 + 257)) * 8 + 190))) {
    v_19 = (long long)v_15 / (((long long)v_13 | 44184LL) + 574LL);
    result = (unsigned short)(11343LL | (long long)((v_17 % (long)((int)v_19 + 428)) % (long)(
                                                    (int)v + 319)));
    v_15 = (unsigned long)(~ -1025469248LL);
    v_7 = (double)-21007L;
  }
  while_0_break: ;
  return result;
}

