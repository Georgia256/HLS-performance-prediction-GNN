#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 192582583
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, int p_5[5], signed char p_9, signed char p_13,
                  char p_19)
{
  unsigned long v_23;
  unsigned char v_21;
  float v_17;
  float v_15;
  char v_11;
  long long v_7;
  unsigned long long v;
  unsigned char result;
  v_23 = 3277567825UL;
  v_21 = (unsigned char)242;
  v_17 = (float)p_13;
  v_15 = -637.75604248f;
  v_11 = (char)p_9;
  v = 18446744073709528301ULL;
  if (((unsigned long long)((int)(v_15 - 62181.f) % (((int)p_19 | 60456) + 59)) & 
       (unsigned long long)p_13 * (25718ULL - v)) >= (unsigned long long)v_23) {
    result = (unsigned char)(! p_13);
    v_15 = (float)((int)result - -98 / (((int)p_19 - 56335) + 459));
    v_7 = (long long)(- (v_17 * (float)p_5[1]));
  }
  else {
    v_15 = (float)((long long)(((unsigned long)p_19 - 3292157995UL) % (unsigned long)(
                               (int)v_21 + 769)) - -104856618LL * (long long)(- p_5[1]));
    v_11 = (char)(- ((int)((char)v_15) * (int)p_19) * (int)(- (- v_17)));
    v_7 = (long long)(~ (p_5[0] * (int)p_13 - 27187));
  }
  if ((((long long)p_5[3] - v_7) & (long long)p_9) < (long long)((unsigned int)(
                                                                 (int)v_11 % (
                                                                 (int)p_13 + 935)) % 108U + (unsigned int)(- (- v_15)))) 
    result = (unsigned char)p;
  else {
    v = (unsigned long long)-1833293824.f;
    result = (unsigned char)(- ((float)(! v) / 1841.25048828f));
  }
  return result;
}

