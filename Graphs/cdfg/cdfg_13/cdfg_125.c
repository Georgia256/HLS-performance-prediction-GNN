#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 818527631
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, double p_9, unsigned long long p_17, char p_21,
                int p_27)
{
  unsigned short v_31;
  long long v_29;
  unsigned char v_25;
  char v_23;
  unsigned short v_19;
  char v_15;
  unsigned int v_13;
  signed char v_11;
  double v_6;
  long long v_4;
  double v;
  signed char result;
  v_31 = (unsigned short)4561;
  v_29 = 28645LL;
  v_25 = (unsigned char)160;
  v_19 = (unsigned short)31411;
  v_15 = p_21;
  v_13 = (unsigned int)p;
  v_11 = (signed char)p_9;
  v_4 = (long long)p_21;
  while ((double)(- ((unsigned long long)p_21 / (p_17 + 29ULL)) & (unsigned long long)(~ (
                  (int)p / ((int)v_25 + 677)))) >= (((double)p_21 + p_9) * (double)v_25) * 2665.) {
    v_15 = v_29 / 667LL;
    v_11 = (signed char)(! ((int)v_31 + (int)((unsigned short)-3.15740387629e+38f)));
    v_29 = (long long)p_27;
    v_25 = (unsigned char)p;
  }
  while_0_break: ;
  if (((long long)v_13 % (v_4 + 343LL) | (long long)((int)(! v_15) / 245)) < 
      v_4 + (long long)(- ((int)((char)5786573857.27) + (int)p_21))) {
    v_6 = p_9 / ((double)(- (! v_11)) + 608.);
    v = (double)(~ (-13LL));
    result = (signed char)(- ((long long)v - v_4) - (long long)(v_6 / (
                                                                (double)p + 628.)));
  }
  else {
    v_23 = (char)((unsigned long long)((int)(~ v_25) / (((int)p_21 >> 2LL) + 209)) * - (
                  18446744072709316233ULL - (unsigned long long)p_27));
    v_13 = (unsigned int)((unsigned long long)((unsigned int)-6.86293662694e+37f | 860279063U) * (
                          (unsigned long long)v_15 + p_17) & (unsigned long long)(
                          (int)v_19 % ((int)p_21 + 971) ^ (int)(~ v_23)));
    result = (signed char)(- v_13);
  }
  return result;
}

