#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071356702
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, long long p_5, short p_9[5][4][3],
                   double p_13, unsigned long long p_19)
{
  long v_25;
  signed char v_23;
  unsigned long long v_21;
  char v_17;
  double v_15;
  short v_11;
  unsigned long long v_7;
  unsigned long long v;
  unsigned short result;
  v_25 = 671976535L;
  v_23 = (signed char)p_5;
  v_21 = (unsigned long long)p_5;
  v_17 = (char)-16;
  v_15 = -9884269246.12;
  v_11 = (short)7608;
  v_7 = 18446744073167775557ULL;
  while ((unsigned int)p_9[2][3][1] <= (unsigned int)(- v_23) % (- (332594371U - p) + 736U)) {
    v_21 = v_25 / -22L;
    v_25 = (long)((unsigned long long)((int)v_17 % ((int)((char)v_15) + 928) | (
                                       (int)v_11 >> (v_21 & 15ULL))) % (
                  (8ULL | ((unsigned long long)p_5 + v_7)) + 80ULL));
    v_11 = (short)225;
    v_23 = (signed char)62;
  }
  while_0_break: ;
  if ((float)((int)((short)(((double)v_11 + v_15) * (double)(- v_17)))) == 
      (float)p_19 / (((float)v_21 + -6.08811131115e+36f) + 980.f) + - (
      2598339584.f / ((float)v_23 + 97.f))) {
    v = (unsigned long long)((long long)(p ^ - p) - 32LL * ! p_5);
    result = (unsigned short)v;
  }
  else {
    v = (unsigned long long)(- (- p_13));
    v_11 = (short)(902.354370117f * (float)(-3 + (int)3376524106.67 * 40279));
    result = (unsigned short)(((unsigned long long)p_5 % (v_7 + 885ULL) - (unsigned long long)(! p_9[2][1][0])) + 
                              (unsigned long long)v_11 / ((v + 18446744073709541219ULL) + 760ULL));
  }
  return result;
}

