#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 570826070
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, double p_9)
{
  long v_13;
  double v_11;
  double v_7;
  long long v_5;
  double v;
  long result;
  v_13 = (long)p;
  v_11 = 1848972333.98;
  v_7 = (double)p;
  v = (double)p;
  if ((long long)v_13 < -815259289LL) {
    v_5 = (long long)v_11;
    v = p_9;
    v_7 = (double)48301UL;
  }
  else {
    v = - (- v_7 - (double)(-67 * (int)((char)v)));
    v_11 = p_9;
    v_5 = (long long)(- ((unsigned long)((int)((unsigned short)v_11) * 11292) & 6034UL));
  }
  result = (long)(((long long)(- v) + (p + v_5)) + (long long)(- ((long)v_7 % -520819083L)));
  return result;
}

