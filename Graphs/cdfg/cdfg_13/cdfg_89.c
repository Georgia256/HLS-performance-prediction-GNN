#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 260185941
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, unsigned char p_11, short p_13, int p_17,
        signed char p_19)
{
  short v_29;
  float v_27;
  long long v_25;
  char v_23;
  unsigned char v_21;
  long v_15;
  long v_9;
  signed char v_7;
  double v_4;
  long v;
  int result;
  v_29 = (short)-10053;
  v_27 = (float)p;
  v_25 = -440808798LL;
  v_23 = (char)-114;
  v_21 = (unsigned char)p_13;
  v_15 = (long)p_11;
  v_7 = (signed char)-43;
  v_4 = (double)p_19;
  result = (int)p_11;
  if ((unsigned long long)(((long long)(3906L % (v_15 + 727L)) - p) - (long long)(! (
                           (int)((signed char)v_4) % ((int)p_19 + 945)))) != 
      (unsigned long long)(~ (v_15 - (long)p_19)) + (((unsigned long long)p_13 + 18446744073695467556ULL) - (unsigned long long)(
                                                     (int)((signed char)v_27) + -49))) {
    result = (int)((long long)(- (! v_23)) & v_25);
    result = (int)(- ((long long)(27280 >> (result & 31)) + (long long)v_21 % 1056742212LL));
    v_15 = (long)(! ((int)v_21 ^ (int)v_7) / ((((int)v_23 - result) + (int)(! p_13)) + 990));
  }
  else {
    v_23 = (char)(~ ((int)((unsigned char)-6.22314569592e+37) | (int)v_21) % (
                  1 / ((int)(~ v_29) + 297) + 281));
    v_23 = (char)(((long long)(! p_17) ^ ((long long)v_23 - p)) - (long long)(
                  ! v_15 % (long)((int)(~ v_23) + 844)));
    v_15 = (long)(! (((long long)v_23 - p) - (long long)v_27 % (p + 92LL)));
  }
  if ((long long)p_13 * ((long long)v_15 * -56809LL) < (long long)((unsigned int)p_17 / (
                                                                   ((unsigned int)p_19 * 3774229467U ^ (unsigned int)(
                                                                    3.06214997348e+38f / (
                                                                    (float)p_17 + 219.f))) + 987U))) {
    v_4 = (double)(p / 722LL);
    v = (long)((v_4 * (double)result) * 3767662330.);
    result = (int)v;
  }
  else {
    v_9 = -52348L + (long)p_11;
    v_7 = (signed char)(! (- v_9));
    result = (int)v_7;
  }
  return result;
}

