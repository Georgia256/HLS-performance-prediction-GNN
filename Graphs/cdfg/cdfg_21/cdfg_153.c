#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 330952972
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p[3][1][5], float p_4, unsigned int p_9,
              unsigned char p_15, char p_19)
{
  long long v_27;
  signed char v_25;
  unsigned int v_23;
  unsigned short v_21;
  unsigned int v_17;
  double v_13;
  int v_11;
  double v_7;
  unsigned char v;
  long long result;
  v_27 = 59591LL;
  v_25 = (signed char)106;
  v_23 = 422367617U;
  v_21 = (unsigned short)46038;
  v_7 = 2.65322828246e+37;
  result = -54322LL;
  if ((long long)(! (46 - (int)v_21)) - ! v_27 == (long long)(v_23 ^ 1027427328U)) {
    v_21 = (unsigned short)(- p_19);
    v_11 = (int)p_15;
    v_17 = (unsigned int)(- (result % 50LL) - (long long)(9867 & (int)p_19));
  }
  else {
    v_11 = (int)p_19;
    v_17 = (unsigned int)((int)p_15 + (int)v_25);
    v_7 = (double)(((v_23 * 3841U) * ((unsigned int)p_15 * v_23)) * (unsigned int)(- (
                   p_4 - (float)p[0][0][4])));
  }
  if ((float)((int)p[2][0][3] - -83) / ((p_4 - 221.f) + 105.f) + (float)v_17 < (float)(
      (int)p_15 ^ (int)p[1][0][0])) {
    v = (unsigned char)(~ ((unsigned int)(- v_7) / (p_9 / (unsigned int)(
                                                    v_11 + 631) + 384U)));
    result = (long long)((int)p[2][0][3] % ((int)((unsigned char)(- p_4 * (float)(~ v))) + 451));
    result = result;
  }
  else {
    result = (long long)p_19;
    v_13 = (double)(((long long)p_19 & result) * ((long long)(p_9 / (unsigned int)(
                                                              (int)p[0][0][2] + 6)) * (
                                                  (long long)v_21 - 41860LL)));
    result = (long long)(- ((v_13 - (double)p_15) + (double)(13229U - v_17)));
  }
  return result;
}

