#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 417293730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned long p_4, unsigned short p_6[2][1],
                  float p_8, short p_13)
{
  unsigned int v_29;
  unsigned char v_27;
  double v_25;
  char v_23;
  unsigned long long v_21;
  unsigned short v_19;
  char v_17;
  long long v_15;
  float v_11;
  double v;
  unsigned long result;
  v_29 = (unsigned int)p;
  v_27 = (unsigned char)p_6[1][0];
  v_25 = -211.705486916;
  v_23 = (char)p_6[0][0];
  v_21 = 18446744073709522039ULL;
  v_19 = (unsigned short)p_8;
  v_17 = (char)-89;
  v_15 = 41381109LL;
  if (((v_21 + (unsigned long long)v_23) / (unsigned long long)(-56 % (
                                                                (int)((signed char)v_25) + 507) + 498)) % (unsigned long long)(
      ((int)p_13 + 23368) * (int)(! v_17) + 276) > (unsigned long long)(
      (long long)((int)(! v_27) * (int)((unsigned char)(p_8 - (float)v_29))) - - (
      v_15 + -650LL))) {
    v_11 = p_8;
    v = (double)((unsigned long)p_13 - (p_4 + 19875UL));
  }
  else {
    v = (double)((long)((float)p_13 * p_8) + 670835737L);
    v_15 = (long long)(- ((unsigned int)((int)v_19 + (int)v_19) - 3937957888U));
    v_11 = (float)((v_15 & (long long)-1.85094450788e+38f) / 47906LL | (long long)(
                   -27248 * (int)(! v_17)));
  }
  if ((unsigned int)(! ((int)(- p_8) / -18)) >= 34542U % ((unsigned int)(
                                                          (52740. - v) / (
                                                          (double)((int)((short)v_11) * (int)p_13) + 50.)) + 710U)) 
    result = (unsigned long)p;
  else {
    result = 4294967219UL - ! p_4 / (unsigned long)((int)p * (int)((short)-7700790056.66) + 565);
    result = - (54635UL * result);
  }
  return result;
}

