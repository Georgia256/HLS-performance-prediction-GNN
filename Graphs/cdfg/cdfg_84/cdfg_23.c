#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 837502803
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, long long p_4, double p_6, double p_8, short p_11)
{
  long v_23;
  double v_21;
  unsigned long long v_19;
  short v_17;
  unsigned short v_15;
  signed char v_13;
  long long v;
  unsigned int result;
  v_23 = (long)p_6;
  v_19 = 42973ULL;
  v_17 = (short)p_6;
  v = -8515LL;
  if ((v_19 & 26111ULL) % 269ULL <= (unsigned long long)((int)((short)(
                                                         -2.28092794064e+38f + (float)v_23)) - (int)(~ p_11))) {
    v_15 = (unsigned short)(- (! (v / 22LL)));
    v_13 = (signed char)(- ((int)((unsigned short)p_8) | 52116) << ((
                                                                    (unsigned long long)(
                                                                    (int)v_15 * (int)v_17) + (
                                                                    18446744073709547053ULL ^ v_19)) & 31ULL));
    v = (long long)((int)((signed char)p_6) * (int)v_13 + (int)(- (p_8 - (double)v_13)));
  }
  else {
    v_21 = (double)p_4;
    v = (long long)v_21;
  }
  if (p_6 < (double)(! ((long long)p_8 & v) + (long long)(~ ((int)p_11 / 1789)))) 
    result = 4294943436U;
  else result = (unsigned int)(! (508261256LL - (long long)p % (p_4 + 350LL)));
  return result;
}

