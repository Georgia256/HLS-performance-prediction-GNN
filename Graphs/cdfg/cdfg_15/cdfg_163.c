#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 729951453
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, short p_9, long long p_13[4][3][3],
                unsigned long long p_17, float p_19)
{
  double v_21;
  unsigned int v_15;
  unsigned short v_11;
  short v_7;
  int v_5;
  unsigned int v;
  signed char result;
  v_21 = (double)p;
  v_15 = 678983933U;
  v_7 = (short)p_17;
  v = 3394088764U;
  result = (signed char)p_19;
  if ((unsigned long)(- (- v_21) + -8.94239257676e+46) != ~ (- (3276319619UL << (
                                                                (int)result & 31)))) {
    v_5 = (int)(- (p_19 - (float)p_17) - (float)(- (! p_9)));
    result = (signed char)((unsigned long long)(v_5 / (- v_5 + 50)) - (
                           (p_17 & (unsigned long long)v_15) - 18446744073709551615ULL));
    v_11 = (unsigned short)46590;
  }
  else {
    v = (unsigned int)(((long long)(- p_9) - (p_13[2][2][2] + -98LL)) | (long long)(
                       5230U * v_15 << ((unsigned int)((double)p_19 - -7.81951827934e+37) & 31U)));
    result = (signed char)(~ ((int)result * (int)((signed char)1.86420352469e+38f)));
    v_11 = (unsigned short)(~ (979759745ULL * (unsigned long long)((long)v_7 & -930307505L)));
  }
  if ((unsigned int)p_9 > v + ((unsigned int)(- p_9) ^ (v_15 + (unsigned int)p_9))) 
    result = (signed char)p;
  else {
    v_5 = (int)(-47114LL + ~ p_13[2][1][0]);
    v = (unsigned int)(((unsigned long long)(v_5 / ((int)v_7 + 417)) & (
                        835376926ULL + p)) % (unsigned long long)(((int)(! p_9) - (
                                                                   (int)v_11 | (int)((unsigned short)5625488896.f))) + 172));
    result = (signed char)(~ ((unsigned long)((int)result << 6) * ((unsigned long)v + 37487UL)));
  }
  return result;
}

