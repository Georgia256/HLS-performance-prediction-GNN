#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 786162086
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, long p_4, unsigned long long p_6,
                       unsigned long long p_8[4][5], signed char p_10)
{
  unsigned long long v_23;
  unsigned long v_21;
  unsigned char v_19;
  unsigned long v_17;
  float v_15;
  float v_13;
  signed char v;
  unsigned long long result;
  v_23 = (unsigned long long)p;
  v_19 = (unsigned char)p_6;
  v_17 = 4294958994UL;
  v_15 = 2.3054337564e+38f;
  v_13 = (float)p_4;
  v = (signed char)7;
  result = (unsigned long long)p_4;
  if (0ULL <= 18446744073709541394ULL + (result + (unsigned long long)p_10) / (
                                        v_23 * (unsigned long long)p + 781ULL)) {
    v_21 = (unsigned long)p;
    v = (signed char)((unsigned long)((int)((unsigned char)838343658.655) * (int)v_19) * v_17 << (
                      v_21 & 31UL));
    v_17 = (unsigned long)(4294938732ULL * ((unsigned long long)((int)v + (int)v_19) / (
                                            (p_8[0][4] + (unsigned long long)p) + 309ULL)));
  }
  else {
    v_23 = (unsigned long long)((int)p * (int)((char)(-4294961920.f / (
                                                      (float)(! p_10) + 572.f))));
    result = - (v_23 | (unsigned long long)p_4) / ((p_6 / (unsigned long long)(
                                                    (int)p + 18)) * (unsigned long long)(- v_17) + 590ULL);
    v_13 = (float)(~ p_4);
  }
  while ((unsigned long long)((long)p | ~ p_4) / (p_6 + 797ULL) != ((
                                                                    (unsigned long long)2.07496635867e+38f << (
                                                                    p_8[3][0] & 63ULL)) % (unsigned long long)(
                                                                    (
                                                                    -560213601 - (int)p_10) + 174) ^ - (
                                                                    p_6 - (unsigned long long)v))) {
    v_17 |= (unsigned long)(v_15 + v_13 / 3525878272.f);
    result = 4294916908ULL;
    v_13 = (float)((- result - p_6) + (unsigned long long)-158.909362793f);
    v = (signed char)p_4;
  }
  while_0_break: ;
  return result;
}

