#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 619004551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, signed char p_4[4][4][3],
                       unsigned int p_6, unsigned long p_8,
                       unsigned long p_11)
{
  signed char v_23;
  long long v_21;
  int v_19;
  double v_17;
  unsigned short v_15;
  long long v_13;
  double v;
  unsigned long long result;
  v_23 = (signed char)p_11;
  v_21 = (long long)p;
  v_19 = 27618;
  v_17 = 3849631784.94;
  v_15 = (unsigned short)2546;
  v = (double)p_11;
  if ((-6734LL % (long long)((-36 + (int)v_23) + 379)) % ((long long)(
                                                          (int)p_4[0][0][0] % (
                                                          v_19 + 601)) * v_21 + 587LL) != 
      (long long)p_6 % (((long long)v_15 - ~ v_21) + 767LL)) {
    v = (((double)v_19 + v) * 0.) / ((double)(- (! v_21)) + 69.);
    v_13 = (long long)(((623.759208204 + v) / (v_17 + 447.)) / ((double)(- (
                                                                94 * (int)p_4[3][2][2])) + 688.));
    v = - (- v + (double)(p_11 - (unsigned long)v_15));
  }
  else {
    v_13 = 28LL;
    v = (double)18446744072759465457ULL;
  }
  if ((unsigned long)(- (p_6 - (unsigned int)p)) - p_8 != (unsigned long)(
      ((int)((signed char)(- v)) - 66) << (- ((long long)p_11 - v_13) & 31LL))) 
    result = (unsigned long long)(((int)(! p) - (int)(! p_4[0][2][2])) + 99);
  else result = (unsigned long long)(! (3516800284U - (unsigned int)(! p)));
  return result;
}

