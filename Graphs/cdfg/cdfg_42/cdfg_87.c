#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 367303045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, signed char p_9, double p_15,
           unsigned long long p_19, float p_23)
{
  unsigned short v_29;
  long v_27;
  unsigned int v_25;
  double v_21;
  signed char v_17;
  signed char v_13;
  short v_11;
  unsigned int v_6;
  float v_4;
  unsigned char v;
  double result;
  v_29 = (unsigned short)p_23;
  v_27 = (long)p_23;
  v_25 = 35634U;
  v_21 = (double)p_19;
  v_17 = (signed char)p_23;
  v_13 = (signed char)p_15;
  v_11 = (short)p_15;
  v_6 = 4000236121U;
  v = (unsigned char)p_15;
  result = (double)p_23;
  while (((unsigned long long)((unsigned long)v_6 / (unsigned long)(v_27 + 169L)) & (
          p_19 - (unsigned long long)((int)((signed char)p_23) % ((int)p_9 + 166)))) <= (unsigned long long)(- (
         (p_15 - (double)v_13) * (double)((float)v - 987.373901367f)))) {
    v_21 = (int)v_29 + 22399;
    v_11 = (short)(~ (~ (- v_17)));
    v_29 = (unsigned short)(((result / 366.) / ((double)p_9 + 242.)) * p_15);
    v_13 = (signed char)(p + (unsigned long)((double)p_23 * p_15 - (double)(
                                             p % (unsigned long)((int)p_9 + 1002))));
  }
  while_0_break: ;
  if (((unsigned long long)v_17 * p_19) * 104ULL + (unsigned long long)(
      (v_21 * (double)p_23) * (double)(p_23 + (float)v_25)) > 18446744073256581318ULL + (unsigned long long)(
                                                              -5328608938. - (double)(- p_23))) {
    v = (unsigned char)228;
    result = (double)(~ 272909579LL);
    result = (double)((unsigned int)result % ((((unsigned int)v + 1044961482U) ^ 4294962668U) + 882U));
  }
  else {
    v_13 = (signed char)(- p_15);
    v_4 = (float)(((p - (unsigned long)p_9) * (unsigned long)((int)v_11 << (
                                                              (int)v_13 & 15))) / (
                  (unsigned long)(3700467532.81 / ((double)p_9 + 533.)) + 143UL));
    result = - (-338.509458015 - (double)(v_4 * (float)v_6));
  }
  return result;
}

