#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 651229003
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, double p_4, unsigned long long p_6[1][2],
                  short p_8[5][5][5], double p_21)
{
  char v_19;
  unsigned long long v_17;
  char v_15;
  long long v_13;
  int v_11;
  int v;
  unsigned char result;
  v_19 = (char)-72;
  v_17 = p_6[0][1];
  v_15 = (char)p_6[0][0];
  v_13 = (long long)p_4;
  v_11 = (int)p_6[0][1];
  v = -525269538;
  result = (unsigned char)60;
  while ((unsigned long long)(! (586446003UL % (unsigned long)(! p + 1014L))) <= 
         (unsigned long long)v_11 % (((unsigned long long)((long long)v_11 + v_13) + (
                                      (unsigned long long)v_15 - v_17)) + 348ULL)) {
    v_13 = (long long)v_19;
    v = (int)((long long)(- (190. / (p_21 + 919.))) - ~ (! v_13));
    v_17 = (unsigned long long)((int)(! p_8[1][3][3]) % (22 / ((int)p_8[4][0][0] % (
                                                               (int)p_8[0][2][4] + 599) + 603) + 113));
  }
  while_0_break: ;
  if ((long long)((double)((int)result << (p & 7L)) * (p_4 / ((double)p_6[0][1] + 876.))) + (
      ((long long)p ^ 844270506LL) - (long long)(! p_8[2][2][2])) != (long long)(! v)) 
    result = (unsigned char)232;
  else {
    result = (unsigned char)250;
    result = (unsigned char)(104 % ((int)result + 353));
  }
  return result;
}

