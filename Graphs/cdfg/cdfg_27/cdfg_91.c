#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 748294154
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, int p_4, unsigned int p_7,
                       char p_13, unsigned char p_17)
{
  unsigned long long v_25;
  signed char v_23;
  long long v_21;
  unsigned long v_19;
  unsigned long long v_15;
  signed char v_11;
  unsigned char v_9;
  long long v;
  unsigned long long result;
  v_25 = 18446744073060513196ULL;
  v_23 = (signed char)p;
  v_21 = 1017571633LL;
  v_15 = (unsigned long long)p_17;
  v_9 = (unsigned char)p_7;
  result = (unsigned long long)p_4;
  if ((unsigned long long)p_4 >= v_15 % (! ((unsigned long long)p_17 + result) + 773ULL)) {
    v_11 = (signed char)v_15;
    v = (long long)(((unsigned long long)(- v_11) % (v_15 + 221ULL)) * (unsigned long long)(
                    ((int)v_11 | (int)p_13) * ~ p_4));
    v_9 = (unsigned char)((long long)((int)v_9 / (((int)v_11 | (int)p_13) + 146)) & 
                          (long long)(~ p_4) * ((long long)p_13 % -30639LL));
  }
  else {
    v = (long long)((unsigned long long)v_23 / ((unsigned long long)(- p_17) % (
                                                (18446744073709551547ULL & v_25) + 755ULL) + 780ULL));
    v_19 = (unsigned long)((long long)(p_7 - p_7 % 4294967286U) - v_21);
    v_9 = (unsigned char)(393142389UL - ((unsigned long)p_17 - (unsigned long)p_7 % (
                                                               v_19 + 102UL)));
  }
  if (~ ((long long)(~ p_4) + v * -1036198617LL) < (long long)(p_7 - (unsigned int)(! (- v_9)))) 
    result = (unsigned long long)(- -700359262L);
  else result = ~ (! (p % (p + 494ULL)));
  return result;
}

