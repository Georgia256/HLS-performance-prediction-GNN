#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 79843569
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, int p_13[4][1][5])
{
  float v_19;
  unsigned char v_17;
  signed char v_15;
  unsigned short v_11;
  long long v_9;
  unsigned short v_7;
  double v_5;
  unsigned long v;
  unsigned char result;
  v_19 = 6631922688.f;
  v_17 = (unsigned char)p_13[2][0][3];
  v_15 = p;
  v_11 = (unsigned short)p;
  v_9 = -631516049LL;
  v_7 = (unsigned short)6754;
  v_5 = (double)p;
  v = (unsigned long)p_13[0][0][3];
  result = (unsigned char)243;
  if ((-116LL + (-431817246LL + (long long)result)) + 3653384384LL != 
      (long long)(16197UL % (unsigned long)((p_13[3][0][2] - -5) + 1017)) % (
      (v_9 - (long long)(~ p_13[3][0][2])) + 933LL)) {
    v = ~ ((unsigned long)((long)v_7 + -55944L) ^ ! v);
    v_9 = (long long)((float)((int)((signed char)7335832804.) * (int)v_15) * -2242089728.f - (float)(
                      (int)((unsigned short)((double)v + v_5)) - (int)(! v_11)));
    result = (unsigned char)((761297993UL & v) % (unsigned long)((0 - 
                                                                  p_13[2][0][4] / (
                                                                  p_13[2][0][2] + 348)) + 928));
  }
  else {
    v = (unsigned long)((-489300318LL - (long long)((int)p + (int)p)) * 610LL);
    result = (unsigned char)((double)(- (v_19 * 119644568.f)) * - (- v_5));
    v_5 = (double)(! v - (unsigned long)(! ((int)v_17 | (int)v_17)));
  }
  while ((double)(~ p) != (double)(- v) * -2.91582234699e+38) {
    v_5 = v_9 * (long long)((int)v_7 + (int)((unsigned short)(v_5 * 925578116.)));
    v_11 = (unsigned short)(-18446744072836996603ULL);
    v_9 = (long long)(! (((int)p + (int)v_11) >> (p_13[1][0][3] & 31)));
    v = (unsigned long)(~ v_9);
  }
  while_0_break: ;
  return result;
}

