#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986231290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned long p_5, float p_7, unsigned int p_11,
           unsigned short p_13)
{
  int v_27;
  unsigned long v_25;
  float v_23;
  short v_21;
  long long v_19;
  unsigned long v_17;
  short v_15;
  unsigned int v_9;
  double v;
  double result;
  v_27 = 656440292;
  v_25 = (unsigned long)p_7;
  v_23 = (float)p_11;
  v_19 = 18561LL;
  v_17 = 4294943591UL;
  v_15 = (short)p_7;
  v_9 = 36191U;
  v = -2.28543458527e+38;
  if (v_25 / (unsigned long)(((8 << (v_9 & 7U)) - 90) + 185) <= (unsigned long)v_27) {
    result = (double)((20169.f + p_7) * (float)((long long)p % (((long long)p_11 ^ v_19) + 122LL)));
    v = (double)(- v_17);
    v_9 = (unsigned int)v_15;
  }
  else {
    v_21 = (short)-20237;
    v_19 = (long long)(18446744073709536448ULL ^ (unsigned long long)(
                       (double)(~ v_21) - (v - (double)v_23)));
    result = (double)(((-45LL & v_19) - 4294952016LL) * (long long)(~ p_11 * (unsigned int)(
                                                                    v + 504863948.)));
  }
  while (0. / ((v + (double)p / (v + 885.)) + 734.) != (double)((p_5 & 
                                                                 4035708873UL / (
                                                                 (unsigned long)p_7 + 555UL)) ^ (unsigned long)p)) {
    v = (long long)v_9 ^ 504442578LL;
    result = (double)(- -2.90397151746e+38f);
    result = (double)((unsigned int)-6622097033.74 % (((unsigned int)result << (
                                                       p_11 & 31U)) + 886U));
    v = (double)((((unsigned int)-8165156864.f % (p_11 + 310U)) % ((unsigned int)(- v) + 459U)) / (unsigned int)(
                 (int)p_13 + 672));
  }
  while_0_break: ;
  return result;
}

