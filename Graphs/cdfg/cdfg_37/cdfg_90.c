#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986289366
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, int p_9, short p_11)
{
  unsigned char v_13;
  unsigned int v_6;
  unsigned long long v_4;
  unsigned char v;
  signed char result;
  v_6 = (unsigned int)p_11;
  v_4 = (unsigned long long)p_9;
  v = (unsigned char)191;
  result = (signed char)p;
  v_4 = v_4;
  while (-41797. > - (- (9790906692.85 * (double)result))) {
    v_13 = (unsigned long long)v_6 - (v_4 + (unsigned long long)((long long)v + 26134LL));
    v_6 = (unsigned int)(- (p | -33L) + (long)(p_9 + (int)(~ v_13)));
    v_4 = (unsigned long long)(- (((float)p_9 - 9.53971676146e+37f) - (float)(
                                  (unsigned long long)p_11 - 49471ULL)));
    result = (signed char)(- (~ (p % (p + 812L))));
  }
  while_0_break: ;
  return result;
}

