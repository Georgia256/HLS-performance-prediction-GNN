#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950658103
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, signed char p_7, unsigned char p_9[1],
         unsigned long p_11[5][4][2], unsigned long long p_13)
{
  unsigned long v_23;
  int v_21;
  unsigned short v_19;
  double v_17;
  unsigned long v_15;
  long v_5;
  unsigned char v;
  char result;
  v_23 = (unsigned long)p_9[0];
  v_21 = -18246;
  v_19 = (unsigned short)p_9[0];
  v_15 = (unsigned long)p_13;
  v_5 = (long)p_7;
  if (v_21 < v_21) {
    result = (char)(p_11[1][3][0] % (unsigned long)((int)v_19 + 437));
    v_17 = (double)((unsigned long long)(! (45147 % ((int)p_7 + 561))) * (
                    p_13 + (unsigned long long)((long long)p_9[0] % 42597LL)));
    v = (unsigned char)((unsigned long long)(v_15 % ((unsigned long)v_17 + 626UL) & (unsigned long)(
                                             -125155568L * (long)p_7)) / (
                        (! p_13 + (unsigned long long)(~ p_9[0])) + 907ULL));
  }
  else {
    result = (char)(v_23 + (unsigned long)(((double)p_9[0] + -3.35588409964e+38) / (
                                           (double)(-5157 + (int)v_19) + 905.)));
    v = (unsigned char)(~ (! v_21) * ~ v_21);
    v_15 = - p_11[2][0][0];
  }
  while ((long)(400265728.f - p) / -4894020L + (long)(- (! result)) != (long)(
         (int)((unsigned char)(- p)) + (int)(~ (~ v)))) {
    v = (unsigned long long)v_5 - 18446744073709540785ULL;
    result = (char)(((p_13 >> ((int)v & 63)) << (- v_15 & 63UL)) * (! p_13 / 18446744073709519591ULL));
    v_5 = (long)((unsigned long)(- ((int)p_9[0] % ((int)p_7 + 666))) % (
                 ((unsigned long)(26937.f * p) << (p_11[0][2][1] & 31UL)) + 780UL));
    v = (unsigned char)((unsigned long long)((int)(- p_7) - (int)(- p_7)) / 690868835ULL);
  }
  while_0_break: ;
  return result;
}

