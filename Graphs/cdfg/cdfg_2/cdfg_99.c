#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 848794992
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, long long p_5, unsigned int p_7[3],
                  signed char p_11[2][1][2], double p_13)
{
  signed char v_21;
  unsigned char v_19;
  int v_17;
  unsigned char v_15;
  unsigned long long v_9;
  double v;
  unsigned char result;
  v_21 = (signed char)p;
  v_19 = (unsigned char)p_5;
  v_17 = (int)p;
  v_15 = (unsigned char)163;
  v_9 = 18446744073121396509ULL;
  while (v_9 > (unsigned long long)((((int)p_11[1][0][0] - 17258) - (int)v_15 * 32788) * (
                                    (v_17 % ((int)v_19 + 51)) * ((int)p_11[1][0][0] * (int)((signed char)p_13))))) {
    v_21 = (int)v_21 - -1388;
    v_19 = v_19;
    v_9 = (unsigned long long)p_11[1][0][1];
    v_17 = (int)(- (- p)) % ((int)v_15 + 20);
  }
  while_0_break: ;
  if (- ((unsigned long long)(1070354892UL * (unsigned long)p_7[0]) % (
         v_9 + 924ULL)) < (unsigned long long)((long long)((unsigned int)p_11[0][0][1] - 
                                                           4138823777U % (
                                                           p_7[1] + 361U)) - (
                                               -440227238LL & (long long)p_13))) 
    result = (unsigned char)-2055059.875f;
  else {
    v = (double)(p_5 >> ((795471688LL - -248349758LL % (p_5 + 360LL)) & 63LL));
    result = (unsigned char)(- (- ((double)p * v)));
  }
  return result;
}

