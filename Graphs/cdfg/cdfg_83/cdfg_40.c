#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 480524075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, double p_7[1][4], int p_9, long long p_17, long long p_23)
{
  double v_25;
  signed char v_21;
  long v_19;
  long long v_15;
  unsigned long v_13;
  short v_11;
  long v_5;
  unsigned long v;
  short result;
  v_25 = (double)p_9;
  v_21 = (signed char)-39;
  v_19 = 22416L;
  v_15 = p_23;
  v_11 = (short)p_17;
  v_5 = -975472712L;
  v = 627513790UL;
  if (p >= (int)(- (- v_25) * (double)(- v / (unsigned long)((p_9 >> (
                                                              p_23 & 31LL)) + 883)))) {
    v_13 = (unsigned long)((26899 - p_9) % (! p_9 + 622));
    result = (short)v_15;
    v = (unsigned long)(-205L % (v_5 + 329L) - (long)result) - (unsigned long)(
                                                               137 - p_9) * (
                                                               (unsigned long)v_11 + v_13);
  }
  else {
    v = (unsigned long)((long long)((v_19 - (long)v_21) % 190L) % (! p_23 + 85LL));
    v_5 = (long)(~ 0U);
    result = (short)(- (~ (-11446LL + p_17)));
  }
  if ((double)v > (double)((unsigned long long)((long)result * v_5) * 18446744073709530628ULL) + p_7[0][1]) 
    result = (short)6;
  else result = (short)(- (~ (! p)));
  return result;
}

