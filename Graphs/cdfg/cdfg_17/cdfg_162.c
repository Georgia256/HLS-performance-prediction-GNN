#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 797011164
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, long p_5, double p_9, short p_13, short p_15)
{
  float v_27;
  short v_25;
  double v_23;
  unsigned int v_21;
  short v_19;
  signed char v_17;
  signed char v_11;
  unsigned int v_7;
  char v;
  unsigned long result;
  v_27 = 1148971776.f;
  v_25 = (short)p_9;
  v_19 = (short)-22458;
  v_17 = (signed char)-100;
  v_11 = (signed char)p_13;
  result = 4081818226UL;
  if ((- p_9 + (double)((int)v_17 % 104)) * (double)(-529 * (int)p_15) == (double)(! (
      (long)(742.061218262f - (float)v_17) & -58777L))) {
    v_21 = (unsigned int)((long)(50624 - (int)((unsigned short)-708.723266602f)) & p_5);
    v_17 = (signed char)((unsigned int)((int)p_15 + (int)(! v_25)) * (
                         (unsigned int)(13807 / ((int)p + 926)) & 3224856670U / (unsigned int)(
                                                                  (int)p_15 + 751)));
    result = (unsigned long)8807023148.75;
  }
  else {
    v_17 = (signed char)(- ((float)p_5 / (v_27 * -95094408.f + 716.f)));
    v_11 = (signed char)(~ p_13);
    v_21 = (unsigned int)v_19;
  }
  if ((long long)((p_5 + -10136L) / (p_5 / 52179L + 377L)) + -6283LL <= (long long)v_21) {
    v_7 = 0U;
    v = (char)(- (((unsigned long)p_5 ^ result) - (unsigned long)((double)v_7 - p_9)));
    result = (unsigned long)(- ((int)(~ v) + (int)p));
  }
  else {
    v_23 = (double)((long long)(p_5 / (long)(((int)p - 26651) + 339)) - -46299LL);
    v_19 = (short)((long long)v_11 + ((long long)(v_23 / ((double)p_13 + 124.)) + 739072449LL));
    result = (unsigned long)((long)((int)p_13 * (int)v_19) | (long)p_13 / -299178794L) - (unsigned long)v_21;
  }
  return result;
}

