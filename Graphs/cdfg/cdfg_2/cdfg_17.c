#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 219929761
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, short p_7, unsigned long long p_9, unsigned long p_11,
              char p_15)
{
  double v_29;
  int v_27;
  signed char v_25;
  long v_23;
  unsigned char v_21;
  unsigned short v_19;
  double v_17;
  double v_13;
  int v_5;
  int v;
  long long result;
  v_29 = (double)p;
  v_27 = (int)p_11;
  v_25 = (signed char)p_11;
  v_21 = (unsigned char)241;
  v_19 = (unsigned short)p_9;
  v_17 = (double)p_15;
  v_13 = (double)p_9;
  if (((double)(18446744072670602832ULL + p_9) + v_13 / 21744.) + (double)v_27 == (double)(
      (long long)(v_17 / (- v_29 + 222.)) ^ ((-6728LL << (p & 63)) | 148LL))) {
    v_23 = -532615400L;
    v_17 = (double)(43230LL * (-41125LL * (long long)v_23));
    v_13 = (double)(47929UL - - (3314764783UL ^ (unsigned long)v_17));
  }
  else {
    v_13 = (double)(! 0L);
    v_19 = (unsigned short)(- (93. / (- v_17 + 900.)));
    v_17 = (double)(~ (- v_25));
  }
  if ((double)p_15 * v_17 != (double)((unsigned long long)((int)v_19 << (
                                                           (int)v_19 & 15)) / (
                                      (unsigned long long)v_21 % (p_9 / (
                                                                  p_9 + 636ULL) + 866ULL) + 742ULL))) {
    v_5 = (int)v_13;
    v = (int)((unsigned long long)((v_5 | 13777) * ((int)p_7 / 40)) % (
              (p_9 + (unsigned long long)p_11) % (unsigned long long)(
              42508 % ((int)p_7 + 506) + 112) + 435ULL));
    result = (long long)(v / (- (v - p) + 589));
  }
  else result = (long long)p_15;
  return result;
}

