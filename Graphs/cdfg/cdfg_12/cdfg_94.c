#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 624877610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned short p_11, unsigned long long p_13,
                  long long p_19, unsigned char p_21)
{
  unsigned char v_31;
  unsigned char v_29;
  unsigned long long v_27;
  unsigned long long v_25;
  signed char v_23;
  float v_17;
  double v_15;
  char v_9;
  float v_7;
  unsigned long v_4;
  char v;
  unsigned long result;
  v_31 = (unsigned char)58;
  v_29 = (unsigned char)159;
  v_27 = (unsigned long long)p;
  v_25 = (unsigned long long)p_11;
  v_23 = (signed char)109;
  v_17 = (float)p_13;
  v_9 = (char)37;
  v_4 = 3962202564UL;
  v = (char)-25;
  if (((unsigned long long)(- (p_19 + (long long)v_9)) | ! (v_25 - (unsigned long long)p_11)) != 
      (unsigned long long)(- p_19 / (p_19 * (long long)v_9 + 856LL)) % (
      ((unsigned long long)v_31 - ((unsigned long long)v_23 + 18446744072919158112ULL)) + 76ULL)) {
    v_25 = (unsigned long long)p_19;
    v_7 = (float)v_25;
    v_9 = (char)p;
  }
  else {
    v = (char)(v_27 * (unsigned long long)((long)((int)p_11 / ((int)v_29 + 939)) ^ 
                                           p % (long)((int)p_11 + 413)));
    v_9 = (char)p_11;
    v_7 = (float)(~ 44680ULL);
  }
  if (((unsigned long long)p - (p_13 + (unsigned long long)v)) + (unsigned long long)(
      v_4 / (unsigned long)(p + 137L) - 136439005UL) > (unsigned long long)v_23) {
    v_7 = (float)((int)((char)v_7) + (int)v_9);
    v = (char)((float)(- (p / (p + 55L))) * v_7);
    result = (unsigned long)(- (629141650ULL - (unsigned long long)v) - (unsigned long long)(
                             - v_4 / 810UL));
  }
  else {
    v_15 = (-8971499410.08 - (double)v_17) - (double)(-835218848LL * p_19 | (long long)(~ p_21));
    v_7 = (float)(~ (0 / ((unsigned int)v_15 + 37U)));
    result = (unsigned long)(((int)-3477900456.99 + (int)p_11 % ((int)p_11 + 403)) << (
                             (int)(43225.f * ((float)p_13 / (v_7 + 862.f))) & 31));
  }
  return result;
}

