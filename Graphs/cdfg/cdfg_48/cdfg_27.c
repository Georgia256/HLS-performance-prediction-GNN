#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 987456921
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, signed char p_5, float p_13)
{
  long v_15;
  double v_11;
  double v_9;
  double v_7;
  unsigned short v;
  unsigned short result;
  v_15 = (long)p_5;
  v_11 = (double)p;
  v_9 = (double)p_5;
  v_7 = (double)p;
  v = p;
  result = (unsigned short)46820;
  while (((double)(~ result) + v_7) + (double)(((int)p_5 % ((int)p + 1015)) % (
                                               (int)(p_13 + 1.84467440737e+19f) + 195)) <= (double)p) {
    v = (unsigned long)v_15 / 9891UL;
    v_7 = v_7;
    v_11 = ((double)((int)v + -27272) / (v_11 + 919.)) * (double)(~ (
           (int)p / ((int)((unsigned short)v_7) + 406)));
    result = (unsigned short)(21465U | (unsigned int)1.63607157036e+37f);
  }
  while_0_break: ;
  if ((double)p_5 >= v_11) {
    v_7 = (-482874821. - v_9 / (v_9 + 907.)) * ((v_11 * v_9) * (53. - v_7));
    result = (unsigned short)v_7;
    result = (unsigned short)(53285ULL % (unsigned long long)(((int)result + (int)p) + 103) - (unsigned long long)(
                              ((int)v * 124) % (((int)p_5 & -788171739) + 132)));
  }
  else result = (unsigned short)108;
  return result;
}

