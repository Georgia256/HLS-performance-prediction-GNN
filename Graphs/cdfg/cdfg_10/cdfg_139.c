#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 775128260
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, signed char p_11, unsigned int p_17[5][3],
                 long long p_19, long p_21[4][2][5])
{
  unsigned char v_25;
  long v_23;
  unsigned long long v_15;
  unsigned long v_13;
  double v_9;
  short v_7;
  unsigned short v_5;
  long v;
  unsigned int result;
  v_25 = (unsigned char)p_21[3][0][0];
  v_23 = p_21[3][1][4];
  v_15 = 18446744073709542238ULL;
  v_9 = (double)p_17[2][1];
  v_7 = (short)-13221;
  v_5 = (unsigned short)p_11;
  v = (long)p_11;
  result = 4294938250U;
  if (p_17[3][0] >= (unsigned int)(~ v_5)) {
    v_13 = (unsigned long)(- ((unsigned long long)(v_9 / ((double)p_17[3][0] + 740.)) / (
                              (v_15 + (unsigned long long)p_11) + 676ULL)));
    v_9 = (double)(! p_21[0][0][0] - -4L) / (((double)(v_15 * (unsigned long long)v_5) - v_9) + 697.);
    v_7 = (short)v_23;
  }
  else {
    v_15 = (unsigned long long)v_7;
    result = (unsigned int)(! -696348514);
    v_13 = (unsigned long)(- (4LL / ((p_19 & (long long)v_23) + 587LL)));
  }
  if (25439ULL < (unsigned long long)(! (v_13 + (unsigned long)p_17[0][0]) | (unsigned long)v_25)) {
    v_13 = (unsigned long)(874801250 / ((int)v_7 + 307));
    v_5 = (unsigned short)((unsigned long long)(- (result / (unsigned int)(
                                                   (int)v_7 + 798))) + 
                           (unsigned long long)(v_9 + (double)p_11) % (
                           ((unsigned long long)v_13 - v_15) + 881ULL));
    result = (unsigned int)((unsigned long)((long)p % (v * (long)v_5 + 1003L)) % (unsigned long)(
                            - (~ result) + 209U));
  }
  else {
    result = (unsigned int)(v_23 % 247L);
    v_13 = - (! ((unsigned long)p_21[1][1][3] % (unsigned long)(result + 660U)));
    result = (unsigned int)((unsigned long long)(((unsigned long)p_17[1][0] + v_13) * 4294665869UL) - 
                            24977ULL * ((unsigned long long)p_19 & 18446744073709508962ULL));
  }
  return result;
}

