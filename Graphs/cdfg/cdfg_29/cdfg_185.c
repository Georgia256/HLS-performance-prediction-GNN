#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177070740
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p[3][1][4], short p_9, unsigned short p_11,
                 double p_17, float p_19)
{
  unsigned long v_15;
  unsigned long v_13;
  unsigned long v_7;
  unsigned long long v_5;
  int v;
  unsigned int result;
  v_15 = (unsigned long)p_11;
  v_13 = (unsigned long)p_9;
  v_7 = 4294902125UL;
  result = (unsigned int)p_17;
  v_13 = (unsigned long)((float)((3229UL % (v_13 + 604UL)) % 44625UL) / (
                         p_19 + 740.f));
  if ((-9424529408. + (double)p_11 / 1367.06710383) - (double)(- (1013UL * v_13)) == 
      (double)(! v_15) * p_17) result = (unsigned int)(- (- (- p[0][0][1])));
  else {
    v_5 = (unsigned long long)(v_7 / (unsigned long)((int)p_9 + 991));
    v = (int)((v_5 - 963532938ULL) + (unsigned long long)((unsigned int)(- p[2][0][2]) / (
                                                          result + 873U)));
    result = (unsigned int)((int)-3708705536.f % (v + 93)) / (result + 88U) - (
             result / ((unsigned int)7845220352.f + 686U) - (unsigned int)(
             3.10091709195e+38 + (double)v_5));
  }
  return result;
}

