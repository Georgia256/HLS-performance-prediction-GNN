#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 155025681
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p[4][1][5], double p_7, unsigned long p_9,
           unsigned short p_15)
{
  unsigned int v_25;
  int v_23;
  signed char v_21;
  double v_19;
  char v_17;
  unsigned long long v_13;
  long v_11;
  long long v_5;
  unsigned int v;
  double result;
  v_25 = (unsigned int)p_15;
  v_23 = (int)p_15;
  v_21 = (signed char)p_7;
  v_19 = p_7;
  v_17 = (char)p_7;
  v_11 = -57926L;
  v_5 = (long long)p_15;
  v = 4294921661U;
  result = -805.621220976;
  if ((unsigned long long)((long)(47549 + (int)v_21) * ((long)(p_7 - 1.84467440737e+19) % (
                                                        (158681937L - (long)v_19) + 543L))) != 
      (594449747ULL | (unsigned long long)((long long)v_21 * v_5)) % 32ULL) {
    v = (unsigned int)(((int)((unsigned short)v_19) - (int)p_15) * 48 + (int)(
                       - v_19 * (double)(18829 - (int)((short)407060708.504))));
    result = (double)(unsigned short)59500;
    v_11 = (long)((double)(p_9 / (unsigned long)((int)p_15 + 628) + (unsigned long)p_15 / 559774282UL) * - (
                  (double)v_17 / -1.42516656455e+38));
  }
  else {
    v_17 = (char)(((v_19 + (double)v_23) - 12292.) - (double)v_25);
    v_13 = (unsigned long long)(~ (unsigned char)104);
    v_5 = (long long)((int)(- ((double)v_13 * result)) / (((int)v_21 * (int)v_17 ^ 
                                                           v_23 % 16381) + 113));
  }
  while ((double)((unsigned long long)(! p[2][0][3]) / ((unsigned long long)p[2][0][1] % 18446744073452234170ULL + 776ULL)) * (
         (double)((long long)v % (v_5 + 669LL)) * - p_7) > (double)(- (
                                                                    (float)p_9 * -2204168960.f) / (
                                                                    (float)(~ v) + 106.f))) {
    result = (long long)v_11 - -205931483LL;
    v = (unsigned int)(- (- (- p_7)));
    v_13 = 137ULL;
    v_5 = (long long)v_13;
  }
  while_0_break: ;
  return result;
}

