#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 340341816
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p[2], double p_7, char p_13, unsigned long p_23)
{
  short v_21;
  unsigned char v_19;
  unsigned long v_17;
  long v_15;
  short v_11;
  long v_9;
  int v_5;
  unsigned char v;
  double result;
  v_21 = (short)p_13;
  v_19 = (unsigned char)p_13;
  v_17 = (unsigned long)p_13;
  v_15 = -156702061L;
  v_11 = (short)p_13;
  v_9 = 44465L;
  v_5 = 6823;
  v = (unsigned char)p[1];
  result = p_7;
  if ((unsigned long)v_11 < (unsigned long)((int)v_21 / ((int)v_11 * (int)v + 910)) + p_23) {
    v_11 = (short)(-553240946ULL);
    v_9 = (long)((int)((unsigned char)(- result)) % ((int)v_19 + 906));
    v_17 = (unsigned long)(v_5 - (int)(- v_11) % ((int)v_11 + 979));
  }
  else {
    v_19 = (unsigned char)p_13;
    v_17 = v_17;
    v_11 = (short)((-607395526L + (long)(764451362. * result)) - (long)(- (
                   (int)p_7 * v_5)));
  }
  if ((unsigned long)(- (- result)) - ((unsigned long)(! v_15) - ! v_17) >= (unsigned long)(
      (long)p_13 ^ (long)((double)v_19 * p_7) % (~ v_9 + 809L))) result = (double)(- (-18446744073709532189ULL));
  else {
    v = (unsigned char)((unsigned long long)(! v_9 / (long)((-25 | (int)v_11) + 805)) / (
                        ! (18446744072872766699ULL % (unsigned long long)(
                           (int)p_13 + 430)) + 716ULL));
    v_5 = (int)p_7;
    result = (double)(- (((long)v - p[1]) * (p[1] + (long)v_5)));
  }
  return result;
}

