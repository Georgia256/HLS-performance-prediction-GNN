#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 890015864
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p[4][4], unsigned long p_5, unsigned int p_7,
              long long p_15, unsigned int p_17)
{
  int v_31;
  unsigned long long v_29;
  long long v_27;
  short v_25;
  unsigned int v_23;
  int v_21;
  short v_19;
  short v_13;
  int v_11;
  unsigned short v_9;
  long v;
  long long result;
  v_31 = -58127369;
  v_29 = (unsigned long long)p[2][3];
  v_27 = (long long)p[3][3];
  v_25 = (short)p_17;
  v_21 = (int)p[2][2];
  v_19 = (short)29218;
  v_13 = (short)-23583;
  v_11 = (int)p_5;
  v_9 = (unsigned short)18701;
  v = (long)p[0][0];
  result = 651105953LL;
  while (47260LL == ! (result / ((result - (long long)v_19) + 363LL))) {
    v_27 = (long long)(! ((v_11 * (int)-1.24665283004e+38f) * (int)(-1.75779139214e+38 + (double)v_9)));
    v_19 = (short)(! (397475 + ~ v_31));
    result = (long long)((unsigned long long)(~ (- v_25)) & ((unsigned long long)(
                                                             p_15 / 750130046LL) & (
                                                             (unsigned long long)v - 18446744073709543041ULL)));
  }
  while_0_break: ;
  if ((unsigned long long)p_17 >= (unsigned long long)((long long)((int)v_25 * (int)p[2][2]) / (
                                                       (long long)v_9 % (
                                                       v_27 + 90LL) + 824LL)) % (
                                  (unsigned long long)((long long)v_21 - p_15) * (
                                  v_29 + 4294921644ULL) + 597ULL)) {
    v_9 = (unsigned short)((long long)(((long)v_11 ^ -903306153L) / (long)(
                                       (int)v_13 + 533)) / (- (p_15 * (long long)p_17) + 73LL));
    v = (long)(~ (23079UL % (p_5 + 991UL)) & (unsigned long)((p_7 - (unsigned int)v_9) % (unsigned int)(
                                                             -154789048 % (
                                                             (int)p[3][2] + 643) + 554)));
    result = (long long)(! ((818214166L & v) * (long)((int)p[3][1] / 48)));
  }
  else {
    v_23 = (unsigned int)v_25;
    v_19 = (short)((unsigned int)(v_21 + (int)p[1][0]) * (p_17 % 3205916811U) >> (
                   (19986LL / (long long)(v_23 + 807U)) % 792079254LL & 31LL));
    result = -1LL / (long long)((int)v_19 + 646);
  }
  return result;
}

