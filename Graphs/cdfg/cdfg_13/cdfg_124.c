#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 292319972
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[5][4], char p_4, unsigned int p_6,
         unsigned short p_8[1][2][5], long long p_10)
{
  long long v_27;
  unsigned long long v_25;
  double v_23;
  unsigned int v_21;
  double v_19;
  unsigned short v_17;
  long v_15;
  unsigned long v_13;
  short v;
  long result;
  v_27 = -10823LL;
  v_25 = (unsigned long long)p_10;
  v_23 = -7.31707633101e+37;
  v_21 = (unsigned int)p_8[0][1][4];
  v_19 = (double)p_6;
  v_17 = (unsigned short)p[0][1];
  v_15 = -31831L;
  v_13 = (unsigned long)p[3][1];
  v = (short)1871;
  result = 57767L;
  while ((unsigned long)(v_21 >> (~ p_10 % 3250464466LL & 31LL)) >= (
                                                                    (unsigned long)(
                                                                    167.043220739 + v_23) ^ (
                                                                    (unsigned long)v_23 - v_13)) << (
                                                                    (int)(! v) % (
                                                                    (int)p_8[0][1][3] % 41322 + 404) & 31)) {
    v_17 = v_25 >> 33;
    v_23 = (double)(~ v_27);
    v = (short)result;
    v_21 = (unsigned int)((long long)(116 / ((40692 + (int)v_17) + 126)) / (
                          ((long long)p_4 * p_10) * -40LL + 26LL));
  }
  while_0_break: ;
  if (((p_10 >> 17) * (long long)((unsigned long)v * v_13) & (long long)p_6) <= (long long)(- (
      (double)(v_15 / (long)((int)v_17 + 62)) / (v_19 + 385.)))) result = (long)(- (! (
                                                                 18446744073004796042ULL % (
                                                                 (unsigned long long)p[2][3] + 931ULL))));
  else result = (long)(-10214LL * (long long)(- p_4));
  return result;
}

