#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 611080225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, double p_5, unsigned long long p_7,
                  unsigned long long p_11[1][1][4], short p_13)
{
  int v_21;
  double v_19;
  long v_17;
  unsigned char v_15;
  unsigned char v_9;
  unsigned int v;
  unsigned char result;
  v_21 = 8072;
  v_19 = 9886182191.73;
  v_17 = -538375406L;
  v_15 = (unsigned char)249;
  v_9 = (unsigned char)187;
  v = 3941959897U;
  while (! v <= (unsigned int)((78.6173060889 / ((double)v_17 + 600.)) * (
                               (double)v_9 - v_19)) + 3434199028U) {
    v_15 = (unsigned char)(! p_11[0][0][0] % (unsigned long long)(v + 257U));
    v_15 = (unsigned char)(~ ((int)((unsigned char)p_5) + (int)(- v_15)));
    v = (unsigned int)-8234867200.f;
  }
  while_0_break: ;
  if ((((unsigned long long)p_13 * p_11[0][0][2]) / (unsigned long long)(
       (int)p + 699) & - (~ p_7)) != (unsigned long long)(~ ((unsigned int)(
                                                             (int)v_15 % (
                                                             (int)p + 291)) + ~ v))) {
    v = 59727U;
    v = ! 0U;
    result = (unsigned char)((double)((unsigned long long)(-15011 >> (
                                                           v & 31U)) % (
                                      ((unsigned long long)p + 4871ULL) + 180ULL)) + 
                             (1.84467440737e+19 * p_5) * (double)(p_7 - (unsigned long long)v_9));
  }
  else result = (unsigned char)((unsigned long long)(! ((long long)p + 811458257LL)) + (
                                (3541318372ULL - p_11[0][0][2]) << ((
                                                                    (int)p + (int)p_13) & 63)));
  return result;
}

