#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 748333077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned long long p_4, double p_6[4],
                  int p_8[2][3][5], double p_10)
{
  double v_17;
  unsigned char v_15;
  unsigned int v_13;
  unsigned int v;
  unsigned char result;
  v_17 = 59773448.6007;
  v_15 = (unsigned char)p_4;
  result = (unsigned char)103;
  if ((- p_10 - (double)(4294931904U % ((unsigned int)-1.5420836702e+38f + 573U))) / (
      (double)(- result) + 95.) >= (double)((int)v_15 * (int)((unsigned char)264.245330811f) - (int)(- v_17)) / (
                                   - v_17 / 828. + 699.)) {
    v = (unsigned int)p_8[1][0][0];
    result = (unsigned char)((float)p - - (-181.841247559f * (float)v));
  }
  else {
    result = (unsigned char)(- p_10);
    v_13 = (unsigned int)(- ((p_6[1] + 3225919851.) - 4294938985.));
    result = (unsigned char)(- ((double)((unsigned int)p_8[0][0][3] - v_13) - 
                                -9586960293.04 / ((double)result + 186.)));
  }
  if (- ((unsigned long long)(62420LL & (long long)p_8[1][2][2]) - p_4 / 18446744073709548200ULL) != (unsigned long long)(
      (int)(- (p_10 / ((double)result + 131.))) << 16)) result = (unsigned char)(
                                                        2461062400.f * (float)p);
  else result = (unsigned char)((p_4 - 41941ULL) + (unsigned long long)(
                                -636034546LL % (((long long)p_6[2] - -36082LL) + 235LL)));
  return result;
}

