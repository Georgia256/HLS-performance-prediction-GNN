#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 631398394
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p[5], double p_4, short p_7, unsigned long long p_9,
           signed char p_11)
{
  short v_29;
  long long v_27;
  char v_25;
  long long v_23;
  unsigned int v_21;
  float v_19;
  long v_17;
  unsigned long long v_15;
  char v_13;
  long v;
  double result;
  v_29 = (short)-22064;
  v_27 = -33184LL;
  v_25 = (char)p[1];
  v_23 = (long long)p_9;
  v_21 = 4121344361U;
  v_19 = (float)p[3];
  v_17 = -35690L;
  v_15 = 505221863ULL;
  if ((long long)v_21 == (long long)(- v_19) / -588809322LL - (long long)(
                         ~ v_17 * (long)(p_4 * (double)p_11))) {
    v_13 = (char)p_11;
    result = (double)(! (- v_15));
    v = (long)(((unsigned long long)p_11 & 18446744073315471383ULL * (unsigned long long)1.38915107711e+38) % (
               (unsigned long long)((-25261. * result) / ((double)v_13 + 593.)) + 240ULL));
  }
  else {
    v_19 = (float)((28680 + (int)v_25 / 30201) << (- (v_27 | (long long)v_29) & 31LL));
    v_13 = (char)((long long)(- p_4 - (double)((int)((signed char)v_19) % -25)) + 
                  (long long)(v_21 * 991403547U) * ((long long)p[4] % (
                                                    v_23 + 587LL)));
    v = - v_17 << ((long long)(! v_13) & 31LL);
  }
  if ((unsigned long long)(v + v) + ((unsigned long long)p[4] / 33721ULL) / (unsigned long long)(
                                    (int)(- p_7) + 210) <= (p_9 % (unsigned long long)(
                                                            25330 % (
                                                            (int)p_11 + 151) + 992)) % (unsigned long long)(
                                                           ! (4294951638U * (unsigned int)p[2]) + 763U)) 
    result = (double)p[2];
  else result = p_4 + 0.;
  return result;
}

