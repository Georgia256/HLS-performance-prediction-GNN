#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 249858131
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, short p_7[1][2],
                       unsigned long long p_11[3], unsigned int p_23[3][3])
{
  float v_27;
  double v_25;
  float v_21;
  double v_19;
  unsigned short v_17;
  long v_15;
  long v_13;
  short v_9;
  long long v_4;
  unsigned long v;
  unsigned long long result;
  v_27 = 246335392.f;
  v_25 = -2.74985659779e+38;
  v_21 = (float)p_23[1][2];
  v_19 = (double)p_23[0][2];
  v_17 = (unsigned short)49886;
  v_13 = (long)p_23[1][2];
  v_9 = (short)p;
  v_4 = (long long)p_23[1][1];
  v = (unsigned long)p_23[1][2];
  result = 18446744073641856387ULL;
  while ((unsigned long long)(- v_19 / ((double)(p_11[2] - 18549ULL) + 120.) - (double)(
                              (unsigned long long)p_23[2][1] ^ result)) == ~ (
         (unsigned long long)(v_25 - (double)p_11[1]) | ((unsigned long long)v_21 - 50826ULL))) {
    v_21 = (int)v_27;
    v_9 = (short)(! ((unsigned long)(! v_9) / (v + 196UL)));
    v_13 = (long)(~ 64598);
    v_25 = (double)((unsigned long)((double)p_7[0][1] - v_25 * 1363.) % (
                    (3468420702UL << (p_11[0] & 31ULL)) + 777UL));
  }
  while_0_break: ;
  if ((unsigned long long)(~ (- v_4 * 903983522LL)) != (unsigned long long)(
                                                       -0.207878309431 * (double)p_11[2]) % (
                                                       (p_11[0] % (unsigned long long)(
                                                        (int)v_17 + 1015)) % (unsigned long long)(
                                                       v_4 + 823LL) + 287ULL)) {
    v_4 = (long long)((unsigned long long)(-379.01279654 * (double)(p - (unsigned long)p_7[0][0])) + (
                      (unsigned long long)v_9 / (p_11[0] + 320ULL) + 50ULL));
    v = (unsigned long)(- 5697051619.67);
    result = (unsigned long long)((long long)(~ v) * v_4 - (long long)(~ (
                                  p % (v + 371UL))));
  }
  else {
    v_15 = (long)(51582LL | ~ v_4 % ((v_4 + (long long)v_21) + 247LL));
    v_17 = (unsigned short)((unsigned long)(v_15 % 5L ^ (long)v_9) / (
                            p + 311UL));
    result = (unsigned long long)((v_13 << (v_15 & 31L)) / (long)(! (
                                                                  (int)v_17 * (int)((unsigned short)v_19)) + 914));
  }
  return result;
}

