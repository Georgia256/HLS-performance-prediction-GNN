#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 440998343
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, unsigned long p_11)
{
  unsigned long v_17;
  unsigned char v_15;
  short v_13;
  double v_9;
  long v_7;
  long long v_5;
  long v;
  long long result;
  v_17 = (unsigned long)p;
  v_15 = (unsigned char)p;
  v_7 = -26093L;
  v_5 = -38397LL;
  v = p;
  result = (long long)p;
  v_9 = (double)((int)(~ (! v_15)) % 216068310);
  while ((long long)v < (long long)(~ p ^ -39551L) - - (v_5 * v_5)) {
    v_13 = v_7 | -761989646L;
    v_7 = (long)(v_5 / (long long)(- ((unsigned long)p + v_17) + 349UL));
    result = (long long)(~ (p_11 & (unsigned long)v_13) + (unsigned long)(
                         268773297 & (int)((unsigned char)v_9) % ((int)v_15 + 942)));
    v = p;
  }
  while_0_break: ;
  return result;
}

