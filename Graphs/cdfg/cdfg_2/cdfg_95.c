#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 559179217
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, long long p_5, signed char p_11,
          unsigned int p_13, unsigned char p_15)
{
  signed char v_17;
  int v_9;
  unsigned char v_7;
  unsigned long long v;
  short result;
  v_17 = (signed char)-52;
  v_9 = 85692383;
  v = 136594956ULL;
  result = (short)10210;
  if ((unsigned int)(- v_9 % ((-5955 ^ v_9) + 38)) % 4294928864U > (unsigned int)v_17) 
    v = 1032130075ULL;
  else {
    v_9 = (int)((p_5 - (long long)(- p_13)) / (~ (p_5 / (long long)((int)p_11 + 733)) + 398LL));
    v_7 = (unsigned char)(((unsigned long long)((int)result / (v_9 + 900)) ^ ~ v) - 
                          ((unsigned long long)v_9 - v) % (unsigned long long)(
                          (45999 & (int)p_11) + 910));
    v = (unsigned long long)(((long long)(48626 * (int)p) * - p_5) % (long long)(
                             (702059325UL ^ (unsigned long)(! v_7)) + 302UL));
  }
  result = (short)(76ULL - v);
  return result;
}

