#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 982524830
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, float p_15[1][5][1])
{
  unsigned long long v_19;
  unsigned long long v_17;
  char v_13;
  short v_11;
  float v_8;
  long long v_6;
  short v_4;
  unsigned short v;
  unsigned int result;
  v_19 = (unsigned long long)p;
  v_17 = (unsigned long long)p;
  v_13 = (char)p_15[0][4][0];
  v_11 = (short)-10477;
  v_8 = -820.036437988f;
  v_6 = 4297LL;
  v = (unsigned short)21996;
  v_4 = (short)(- ((float)((long long)p / (v_6 + 721LL)) / (p_15[0][1][0] + 528.f)));
  if (- (- p_15[0][2][0]) - p_15[0][4][0] == (float)(v_17 * ((unsigned long long)(
                                                             (int)((short)p_15[0][3][0]) % (
                                                             (int)v_11 + 988)) % (
                                                             v_19 + 925ULL)))) {
    v_11 = (short)(((-772868227L + (long)v_13) / (long)((int)v_13 + 219)) / -27698L);
    v = (unsigned short)((unsigned long)v_11 % (((unsigned long)((long)v_13 * -4907L) | (
                                                 (unsigned long)v - 315287543UL)) + 1004UL));
    result = (unsigned int)(((long long)((int)v - (int)v_4) ^ (v_6 + (long long)v_8)) + (long long)(! (
                            (long)p / -133853983L)));
  }
  else result = (unsigned int)p_15[0][4][0];
  return result;
}

