#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 951665039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned long p_4, unsigned char p_7,
        long long p_9, unsigned char p_11)
{
  unsigned long long v_27;
  long v_25;
  long long v_23;
  long v_21;
  long long v_19;
  signed char v_17;
  double v_15;
  signed char v_13;
  signed char v;
  int result;
  v_27 = (unsigned long long)p_11;
  v_25 = 29205L;
  v_23 = (long long)p_11;
  v_21 = -2691L;
  v_19 = 534284369LL;
  v_17 = (signed char)-103;
  v_15 = (double)p_11;
  v_13 = (signed char)p;
  v = (signed char)p_11;
  if ((v_19 | (long long)((unsigned int)((int)p_11 / ((int)p_11 + 104)) * (
                          (unsigned int)v & 4294912404U))) == (long long)(
      (int)v_17 - -10302)) {
    v_19 = ((long long)(v_21 * 55L) - v_23) % (v_19 % (long long)((int)p_11 + 1008) + 864LL);
    v_17 = (signed char)(~ ((long long)(12276 ^ (int)p_11) % (v_19 + 893LL)));
    v_13 = (signed char)(- ((double)(- p_11) * -137183834.115));
  }
  else {
    v_17 = (signed char)((int)((unsigned char)(- v_15)) % ((int)(! p_11) + 35));
    v_19 = (long long)(((unsigned long long)(p_4 / (unsigned long)((int)v_17 + 532)) + 
                        3687314860ULL / (p + 290ULL)) / (v_27 + 419ULL));
    v_15 = (double)(- (- ((float)v_25 / -1.39830866595e+38f)));
  }
  if (((unsigned long long)((unsigned int)p_11 + 4294942221U) * ((unsigned long long)v_13 % (
                                                                 p + 993ULL))) % (
      (unsigned long long)(- (- v_15)) + 926ULL) <= (unsigned long long)(
      (long long)(~ ((int)p_7 / ((int)((unsigned char)732.27035043) + 744))) % (
      (long long)((int)v_17 * (int)p_7) % (v_19 + 117LL) + 365LL))) result = (int)(
                                                                    (
                                                                    18446744073709529811ULL % (
                                                                    p + 338ULL) + (unsigned long long)(
                                                                    p_4 - 115UL)) / 45847ULL);
  else {
    v = (signed char)(~ (5049161133LL + p_9 * (long long)3.87938966359e+37));
    result = (int)((0ULL - - p) % (unsigned long long)(((int)(- v) | (
                                                        (int)p_7 - (int)p_7)) + 596));
  }
  return result;
}

