#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 77517643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned long long p_5, long p_7, signed char p_11,
         signed char p_13)
{
  unsigned int v_27;
  unsigned int v_25;
  signed char v_23;
  unsigned short v_21;
  int v_19;
  long v_17;
  long long v_15;
  signed char v_9;
  unsigned long v;
  long result;
  v_27 = 3863445801U;
  v_25 = 4294919111U;
  v_23 = (signed char)-86;
  v_21 = (unsigned short)40;
  v_19 = -600749922;
  v_17 = -277664424L;
  v_15 = -1026306787LL;
  v_9 = (signed char)p_7;
  v_17 = - (! v_17) + (long)((int)v_9 * (int)((signed char)(- p)));
  if (- ((unsigned long long)v_23 + 922407508ULL) < ((unsigned long long)v_25 ^ (
                                                     (unsigned long long)v_27 | 18446744072958162438ULL)) % (unsigned long long)(
                                                    (v_17 - (long)((int)p_11 / (
                                                                   v_19 + 620))) + 873L)) {
    v_9 = (signed char)((long long)(-112L - (long)((double)v_15 / (p + 70.))) ^ (
                        121LL * v_15 | (long long)(~ v_17)));
    v = (unsigned long)(! (((int)v_9 & (int)p_11) % ((int)p_13 + 578)));
    result = (long)(((double)v / ((61861. + p) + 743.)) * (double)((p_5 - 18446744073709518472ULL) * (
                                                                   (unsigned long long)p_7 * 20396ULL)));
  }
  else {
    v_19 = -16100;
    v_15 = (long long)-922.467224121f;
    result = (long)(v_15 % (long long)((p_7 % (long)(v_19 + 268) - (long)v_21) + 823L));
  }
  return result;
}

