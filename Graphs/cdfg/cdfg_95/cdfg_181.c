#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264776670
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, signed char p_7, long p_9, double p_13,
                long long p_15)
{
  unsigned short v_21;
  double v_19;
  unsigned char v_17;
  unsigned int v_11;
  char v_5;
  long v;
  signed char result;
  v_21 = (unsigned short)17870;
  v_19 = p_13;
  v_17 = (unsigned char)p_13;
  v_11 = 418504739U;
  v_5 = (char)0;
  v = p_9;
  result = p_7;
  while ((long long)p_9 - ((long long)((long)p * v) & - p_15) < (long long)(- (
         (long)p_7 + 19094L))) {
    v_17 = v_19 - 53808.;
    v_21 = (unsigned short)(((int)v_5 % ((int)v_5 + 599)) % ((int)v_5 + 447) - ~ (
                            (int)v_21 & -753106956));
    v_19 = ((double)v_5 + p_13 * 113.) * (double)((int)v_5 + (int)(! p_7));
    v = 10183L;
  }
  while_0_break: ;
  if (- (- (p_13 + (double)p_9)) < (double)(~ (71 | (int)v_17 / 262667839))) {
    v_5 = (char)((long long)(- ((unsigned int)v_5 * v_11)) * 647383262LL);
    v = (long)((unsigned long)(((int)v_5 - (int)result) + (int)((double)p_7 * -886.77362241)) - 
               (unsigned long)p_9 % 4294784712UL);
    result = (signed char)(- (- ((float)v + p)));
  }
  else result = (signed char)((int)p_13);
  return result;
}

