#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 859398126
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, unsigned long p_11, unsigned char p_15,
          signed char p_17, unsigned char p_23)
{
  char v_27;
  long long v_25;
  char v_21;
  unsigned int v_19;
  float v_13;
  long long v_9;
  char v_7;
  char v_5;
  short v;
  float result;
  v_27 = (char)-100;
  v_25 = (long long)p;
  v_21 = (char)-114;
  v_19 = 202899855U;
  v_13 = -202.348617554f;
  v_9 = -858325126LL;
  v_7 = (char)122;
  while ((unsigned long long)v_19 < (unsigned long long)(-39LL / (v_25 / (
                                                                  v_9 + 729LL) + 1018LL)) % (
                                    (((unsigned long long)p_17 + 18446744073709537221ULL) + (unsigned long long)(- p)) + 129ULL)) {
    v_9 = (int)v_27 + -45;
    v_13 = (float)(! p_15);
    v_25 = (long long)(4520064451.43 * (double)(4294916069UL / (! p_11 + 75UL)));
    v_19 = (unsigned int)(((long long)p ^ (long long)p_23 / (v_9 + 986LL)) | 4294927474LL);
  }
  while_0_break: ;
  if (((unsigned long)(4294966989U / ((unsigned int)v_13 + 278U)) - p / (unsigned long)(
                                                                    (int)p_15 + 1009)) % (unsigned long)(
      ((unsigned int)p_17 % (v_19 + 184U)) * 553U + 827U) > - ((unsigned long)(
                                                               (int)v_21 + (int)p_23) / (
                                                               p / (unsigned long)(
                                                               (int)p_15 + 773) + 629UL))) {
    v_5 = v_7;
    v = (short)(3521993141UL % (((unsigned long)(- v_5) - 4294921412UL) + 62UL));
    result = (float)((unsigned long)v & - (~ p));
  }
  else {
    v_9 = (long long)(- (- -146.954147339f));
    result = (float)v_9 - - (-8.71650953228e+37f - (float)p_11);
  }
  return result;
}

