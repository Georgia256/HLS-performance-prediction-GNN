#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 909675392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, signed char p_9, unsigned int p_11,
                       unsigned long p_19)
{
  double v_21;
  unsigned short v_17;
  unsigned int v_15;
  float v_13;
  double v_7;
  long long v_5;
  unsigned long v;
  unsigned long long result;
  v_21 = 7569570237.94;
  v_17 = (unsigned short)p;
  v_15 = p_11;
  v_13 = -2.7008046487e+38f;
  v = 4294966160UL;
  result = (unsigned long long)p_19;
  while (- (- (- v_13)) > (float)p_11) {
    result = (unsigned int)v_17 / ((v_15 >> 12) + 512U);
    v_17 = (unsigned short)(- (405674360UL * p_19));
    v_15 = (unsigned int)(- (! (p_19 * (unsigned long)v_21)));
    v_13 = (float)(short)-27084;
  }
  while_0_break: ;
  while (53815283ULL != ((unsigned long long)p * ! result) / ((unsigned long long)(
                                                              (double)(
                                                              (unsigned long long)-1.43816106294e+38 * 18446744072939755406ULL) - 3.02340329228e+38) + 750ULL)) {
    v_7 = (double)(! ((p - (int)p_9) + ! p));
    v_5 = (long long)(-19207556 / ((int)((short)v_7) + 819));
    result = (unsigned long long)((v_5 - (long long)(v + 4223807416UL)) | 4294958663LL);
  }
  while_0_break_0: ;
  return result;
}

