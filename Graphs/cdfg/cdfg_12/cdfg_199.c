#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 495030025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, long p_9, double p_15[2][1], long long p_19,
         int p_25)
{
  signed char v_27;
  unsigned short v_23;
  unsigned int v_21;
  unsigned int v_17;
  signed char v_13;
  unsigned char v_11;
  double v_6;
  long long v_4;
  signed char v;
  long result;
  v_27 = (signed char)p_15[1][0];
  v_23 = (unsigned short)53272;
  v_13 = (signed char)p_19;
  v_6 = -113697703.294;
  v_4 = 787458647LL;
  v = (signed char)-94;
  result = -779459291L;
  result = - ((long)(- v_27) % (-28952L * result + 521L));
  if ((long long)((int)((unsigned short)v_6) ^ (int)(! v_23)) / (p_19 + 246LL) < 
      (p_19 % -17494LL) / (long long)(p_9 + 774L) + (long long)((long)(
                                                                (int)((unsigned short)v_6) - 4003) - result)) {
    v_11 = (unsigned char)(v_6 + (double)(225L * (-27836L * result)));
    v_13 = (signed char)((long)(! ((int)v_13 / 26534)) - ~ (result * 64L));
    result = (long)(((double)v - ((double)v_4 + v_6)) / ((double)((p * (unsigned long)p_9) % (unsigned long)(
                                                                  ((int)v_11 - (int)v_13) + 725)) + 528.));
  }
  else {
    v_21 = (unsigned int)v_27;
    v_17 = (unsigned int)(((538987574ULL - (unsigned long long)p_19) + (unsigned long long)(
                           (long long)v_21 ^ p_19)) / (unsigned long long)(
                          ((int)v_23 % (p_25 + 427) - -58637 * p_25) + 279));
    result = (long)(~ ((long long)((unsigned int)p_15[0][0] + v_17) * -55753LL));
  }
  return result;
}

