#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 614206609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p[4][3][4], long p_7, short p_9, short p_13,
                 char p_15[5])
{
  unsigned long v_25;
  unsigned long long v_23;
  unsigned long v_21;
  long long v_19;
  double v_17;
  int v_11;
  long v_5;
  unsigned char v;
  unsigned int result;
  v_25 = 533037437UL;
  v_23 = 18446744073709500382ULL;
  v_19 = 960168245LL;
  if ((long long)(- (- (! p_15[0]))) <= (p[2][1][3] * (long long)v_25 & (long long)(- (! p_13)))) {
    v_11 = - (! ((int)p_13 << (p[0][0][3] & 15LL)));
    v_5 = (long)(~ ((int)p_9 & v_11) * v_11);
  }
  else {
    v_21 = (unsigned long)((long)((float)v_23 / 6644578304.f) ^ -56709L);
    v_17 = (double)(~ ((long long)(104UL + v_21) - p[3][2][0] * 11201LL));
    v_5 = (long)((long long)((int)(! p_15[0]) + (int)((char)(- v_17))) % (
                 (long long)(- v_17) * ! v_19 + 42LL));
  }
  if (v_5 == p_7) result = (unsigned int)p[3][2][1];
  else {
    v = (unsigned char)p[3][2][3];
    result = (unsigned int)v;
    result = (unsigned int)(161528662 << (~ (result % 4294930638U) & 31U));
  }
  return result;
}

