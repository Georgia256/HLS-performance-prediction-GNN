#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 633195672
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, float p_13[1][4], short p_15, long p_17,
                  unsigned short p_19)
{
  signed char v_29;
  unsigned long v_27;
  float v_25;
  float v_23;
  short v_21;
  unsigned long long v_11;
  char v_9;
  unsigned char v_7;
  long v_4;
  unsigned char v;
  unsigned long result;
  v_29 = (signed char)p_19;
  v_27 = 36097UL;
  v_25 = p_13[0][2];
  v_23 = (float)p_19;
  v_21 = (short)p_13[0][0];
  v_11 = 18446744073102958031ULL;
  v_7 = (unsigned char)117;
  v_4 = (long)p;
  v = (unsigned char)106;
  result = 3465862387UL;
  while (18446744072961635901ULL >= (unsigned long long)((float)(p + (int)v_7) * 6785086976.f - (float)(
                                                         -55L / (p_17 + 849L)))) {
    v_4 = (long)((((int)v_29 - 29419) % (-1062208070 * (int)v + 715)) * (int)(- (! p_19)));
    v_21 = (short)(- (v_27 * (unsigned long)p_19) / ((unsigned long)v_29 * ~ result + 388UL));
    v_7 = (unsigned char)((long)(((int)p_19 & 42069) ^ p) / ((long)((int)p_19 / (
                                                                    (int)p_19 + 207)) * (
                                                             -928411990L * (long)p) + 729L));
  }
  while_0_break: ;
  if ((-13491LL << ((v_4 & (long)p) & 63L)) - (long long)p_15 == (long long)(
      (float)(406199950UL * (unsigned long)((int)((unsigned short)v_25) + (int)p_19)) / (
      - v_23 + 461.f))) {
    v_9 = (char)(((long)((float)v_11 / (p_13[0][3] + 716.f)) / (((long)p_15 ^ p_17) + 907L)) / (long)(
                 (int)p_19 / (((int)p_15 - (int)v_21) + 1017) + 566));
    v = (unsigned char)((int)v_9 * (p + 1) + 433308622);
    result = (unsigned long)(((long)v + v_4 * (long)p) / (long)(((int)v + 
                                                                 (int)v_7 / (
                                                                 (int)v + 10)) + 813));
  }
  else {
    v_23 = - p_13[0][1] / 583514368.f + -430021280.f;
    result = (unsigned long)v_23;
  }
  return result;
}

