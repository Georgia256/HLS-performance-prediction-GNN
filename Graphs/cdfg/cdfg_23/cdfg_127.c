#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 912343803
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p[2][2][1], float p_9, unsigned int p_11,
         unsigned int p_15, unsigned char p_21)
{
  unsigned int v_31;
  float v_29;
  long v_27;
  char v_25;
  int v_23;
  char v_19;
  double v_17;
  unsigned int v_13;
  short v_7;
  char v_4;
  unsigned long v;
  long result;
  v_31 = 36760U;
  v_29 = (float)p_11;
  v_27 = -437463606L;
  v_25 = (char)p_15;
  v_23 = -18369;
  v_17 = (double)p_21;
  v_13 = 3907111034U;
  v_7 = (short)p_21;
  v_4 = (char)p_21;
  result = (long)p_21;
  while ((unsigned long)p_9 > (((unsigned long)((unsigned int)v_25 * p_11) - (
                                (unsigned long)v_27 | (unsigned long)p_15)) & (
                               (unsigned long)p_15 * (unsigned long)result - (unsigned long)p_11))) {
    v_31 = (double)v_31 + -6802946679.57;
    v_23 = - (! ((int)v_7 - v_23));
    v_25 = (char)(49300U / (v_13 + 824U));
    v_27 = (long)((int)((v_29 + 829.868103027f) * (float)v_4) % (((int)p[0][1][0] % 39210 & 10814) + 294));
  }
  while_0_break: ;
  if ((unsigned long)(- ((unsigned int)p_9 / 4294916069U) / (- p_15 % 791U + 844U)) <= 
      (62215UL * (unsigned long)p_21 | (unsigned long)((int)v_25 << 4LL)) * (unsigned long)(- (
      p_15 % 3383558535U))) {
    v = (unsigned long)((int)v_7 ^ -1);
    v_4 = (char)(! (-49273LL + (long long)((float)p[1][1][0] + -207.844207764f)));
    result = (long)(4294952070UL % (! (v * (unsigned long)v_4) + 541UL));
  }
  else {
    v_19 = (char)((unsigned long)(! (result * (long)v_23)) + (unsigned long)(
                  (3270217122U * (unsigned int)v_23) / 119U));
    v_13 = (unsigned int)((unsigned long)(p_11 % (p_15 + 872U)) / (unsigned long)(
                          ((long)v_17 + result) + 19L) + (unsigned long)(
                          (long)v_19 + ((long)p_21 | result)));
    result = (long)((p_9 * (float)(26707 >> (p_11 & 15U))) * (float)(! (
                    v_13 >> 7ULL)));
  }
  return result;
}

