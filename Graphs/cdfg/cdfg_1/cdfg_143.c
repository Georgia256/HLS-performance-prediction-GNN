#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 851478372
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p[4][2], unsigned char p_5, char p_7,
                 double p_11, unsigned int p_15)
{
  unsigned short v_19;
  int v_17;
  unsigned short v_13;
  double v_9;
  unsigned long long v;
  unsigned int result;
  v_19 = (unsigned short)15419;
  v_13 = (unsigned short)50194;
  v = (unsigned long long)p_11;
  result = (unsigned int)p_11;
  if ((unsigned long long)(((long)(~ v_13) * ((long)p_7 - 806985645L)) % (
                           (long)((p_11 * 3509752690.) * (double)((int)p_7 / (
                                                                  (int)((char)p_11) + 619))) + 588L)) != 
      (18446744073709532137ULL * (unsigned long long)p_11 - (unsigned long long)(- p_11)) % (unsigned long long)(
      (int)p[1][1] + 236)) {
    result = (unsigned int)(! p_7);
    v_17 = 16508;
    v_9 = (double)((int)-4.96297701165e+37 - ! v_17);
  }
  else {
    v_13 = (unsigned short)p_7;
    v_9 = (double)(v & (18ULL / (v + 888ULL)) / (unsigned long long)(
                       (int)v_19 + 793));
    v_17 = (int)(v + ((v + (unsigned long long)p[0][0]) | (unsigned long long)p_15));
  }
  if (((unsigned int)((int)p_11 % -5230) % (((unsigned int)v_13 - p_15) + 169U)) / (unsigned int)(
      v_17 + 563) < (unsigned int)(v_17 >> (result / (unsigned int)((int)p_7 + 129) & 31U))) 
    result = (unsigned int)(~ 0);
  else {
    v = (unsigned long long)(- (- v_9) / 1203.);
    result = (unsigned int)p_7;
    result = (unsigned int)((unsigned long long)((unsigned int)p[1][0] | result) * (
                            v * (unsigned long long)p_5) + (unsigned long long)(
                            (unsigned long)result + (14108UL + (unsigned long)4790059133.22)));
  }
  return result;
}

