#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 631859566
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, int p_11, unsigned long p_13, short p_15,
                       float p_17)
{
  int v_23;
  long long v_21;
  short v_19;
  long long v_8;
  long long v_6;
  int v_4;
  unsigned long long v;
  unsigned long long result;
  v_21 = (long long)p_15;
  v_19 = p_15;
  v_8 = -33985LL;
  v_4 = (int)p_13;
  v = (unsigned long long)p_17;
  result = (unsigned long long)p;
  while (52678LL == ((v_8 - (long long)p_15) & (long long)p_17) - (long long)(! (
                    -19125 >> ((int)((short)p_17) & 15)))) {
    v_23 = v_21 * (long long)((int)v_19 % 81);
    v_19 = (short)((unsigned long)v_23 / (p_13 + 115UL));
    v = 35612ULL;
    v_8 = (long long)v;
  }
  while_0_break: ;
  while (v <= 0ULL) {
    v_6 = (unsigned long)v_4 / 243891242UL;
    v_8 = (long long)(p_13 * p_13);
    v_4 = -521 >> ((p_11 - p_11) & 31);
    v = (unsigned long long)(v_8 | (v_8 - (long long)p)) * ((unsigned long long)(
                                                            (long long)p_11 - v_6) + ~ v);
  }
  while_0_break_0: ;
  return result;
}

