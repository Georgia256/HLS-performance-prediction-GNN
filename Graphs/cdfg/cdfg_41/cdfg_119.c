#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 731809949
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, double p_7, char p_9, long long p_15, int p_17)
{
  long v_27;
  long long v_25;
  unsigned int v_23;
  long long v_21;
  char v_19;
  unsigned long v_13;
  long long v_11;
  double v_5;
  double v;
  char result;
  v_27 = -329152081L;
  v_25 = 17932LL;
  v_19 = (char)p_15;
  v_13 = (unsigned long)p_7;
  result = (char)p_15;
  if (1) {
    v_11 = (long long)((int)result + (((int)v_19 - (int)v_19) + ((int)p_7 - p_17)));
    v_5 = (double)(((unsigned long long)((int)((char)p_7) * (int)p_9) ^ 18446744073709549191ULL) * (unsigned long long)(
                   (v_11 + (long long)v_13) + p_15 % (long long)(p_17 + 255)));
    v = v_5;
  }
  else {
    v_23 = (unsigned int)(26685 >> ((int)((short)(p / ((-3.88250837613e+37 + (double)v_25) + 766.))) & 15));
    v_21 = 4007587391LL;
    v = - ((double)v_21 * p) / ((double)(- (! v_23)) + 763.);
  }
  result = (char)(((117501155LL + (long long)p) / 889LL) % ((long long)v + 501LL));
  return result;
}

