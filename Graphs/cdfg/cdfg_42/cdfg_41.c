#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 41931
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, long p_5, unsigned short p_9[4],
                  signed char p_13, unsigned short p_15)
{
  char v_25;
  signed char v_23;
  char v_21;
  int v_19;
  unsigned int v_17;
  char v_11;
  signed char v_7;
  long long v;
  unsigned char result;
  v_25 = (char)p;
  v_23 = (signed char)p_9[2];
  v_21 = (char)43;
  v_19 = -51026;
  v_17 = 3742175647U;
  v_11 = (char)p_13;
  v_7 = (signed char)20;
  v = 741930644LL;
  result = (unsigned char)179;
  while ((long long)((((int)v_7 + -28478) + (int)p / (v_19 + 95)) / (
                     ((int)v_21 % 114) % (((int)v_23 ^ (int)result) + 444) + 607)) >= 
         (long long)p_5 + v) {
    v_19 = (((int)v_11 - (int)p_9[3]) - 143 % ((int)((unsigned char)363166399.639) + 83)) + (
           (int)((unsigned short)-5868874240.f) % ((int)p + 617) ^ (int)p_9[0] % (
                                                                   (int)v_23 + 325));
    v_23 = (signed char)(4287116441U << ((23891 - (int)v_25) & 31));
    result = (unsigned char)240;
  }
  while_0_break: ;
  if ((unsigned long)(! p_5) <= (unsigned long)(~ v_17)) {
    v_11 = (char)(! ((unsigned long long)(4601 / ((int)result + 463)) * (
                     18446744073709499882ULL % (unsigned long long)((int)p_9[3] + 400))));
    v = (long long)(((long)result * p_5 - (long)((int)v_7 * (int)p_9[1])) / (long)(
                    ((58756 + (int)v_11) - -276191998) + 12));
    result = (unsigned char)(~ v * (long long)p);
  }
  else result = (unsigned char)p_13;
  return result;
}

