#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 85672356
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, unsigned long long p_9[4][5],
                   signed char p_11, double p_21[2][1][2], char p_23[5])
{
  char v_25;
  int v_19;
  long long v_17;
  unsigned int v_15;
  unsigned short v_13;
  int v_6;
  signed char v_4;
  signed char v;
  unsigned short result;
  v_25 = (char)p_11;
  v_17 = (long long)p_11;
  v_15 = (unsigned int)p;
  v_6 = -14115;
  v_4 = (signed char)-76;
  v = (signed char)-123;
  result = (unsigned short)17093;
  while (! (p_9[0][4] - (unsigned long long)result) * (unsigned long long)p == 21270ULL) {
    v_4 = (int)v_25 | 137;
    v_6 = (int)(771625295ULL % (p_9[1][4] % (unsigned long long)(p + 1018LL) + 13ULL) - (unsigned long long)(
                v_15 / 4294967226U));
    v_25 = (char)v_6;
    result = (unsigned short)((p_9[0][1] * (unsigned long long)v_6) * (
                              (unsigned long long)v + 6876ULL) + (unsigned long long)(~ v_25));
  }
  while_0_break: ;
  if (((p_21[1][0][0] - (double)v_17) + p_21[1][0][0]) + - (- p_21[0][0][0]) > (double)(~ v_4)) {
    v = (signed char)((unsigned long long)((long long)(v_6 * 122) / (
                                           p % (p + 470LL) + 357LL)) | p_9[3][4]);
    result = (unsigned short)((int)(- v) % (! (-2447 * (int)v_4) + 899));
    result = (unsigned short)(6750381197091ULL % (unsigned long long)(
                              (int)result + 958));
  }
  else {
    v_19 = (int)p_9[2][3];
    v_13 = (unsigned short)(~ ((unsigned long long)v_15 - 879018151ULL) & (unsigned long long)(
                            (v_17 % (long long)(v_19 + 258)) * (long long)(
                            (int)v + (int)((signed char)p_21[0][0][1]))));
    result = (unsigned short)(! ((int)p_11 + (int)v_13) * 27);
  }
  return result;
}

