#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 702600049
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, short p_5, long p_7, long long p_9,
                  short p_15[5][3][4])
{
  double v_21;
  double v_19;
  float v_17;
  unsigned long long v_13;
  char v_11;
  unsigned short v;
  unsigned long result;
  v_21 = (double)p_9;
  v_17 = (float)p_5;
  v_13 = (unsigned long long)p_9;
  v_11 = (char)-98;
  v = (unsigned short)56636;
  if ((double)(-657517939 - (int)(v_21 * 135.)) < 7292606569.43 - (double)p_15[2][1][3]) {
    v_19 = (double)((long long)p_15[1][1][3] % (! p_9 + 944LL));
    v_17 = (float)p_7;
    result = (unsigned long)p_5;
  }
  else {
    result = (unsigned long)((long long)((p - (float)v) - 246.f) * (p_9 / (long long)(
                                                                    (int)((short)v_21) % (
                                                                    (int)p_5 + 423) + 341)));
    v_19 = (double)(short)-100;
    v_17 = (float)((830545481UL >> (p_9 / (long long)((int)p_15[4][1][1] + 466) & 31LL)) * (unsigned long)(
                   (1021351488.f - p) + (float)((int)p_15[2][2][2] - (int)((short)v_17))));
  }
  if ((unsigned long)((long)((double)(807000832.f * v_17) * (781.844674536 / (
                                                             (double)p_15[0][2][3] + 1006.))) - ~ (
                      p_7 - -17532L)) <= (unsigned long)((int)(v_19 / (
                                                               (double)p_9 + 910.)) & 
                                                         (int)v_11 % (
                                                         (int)((char)v_21) + 1016)) - 
                                         (unsigned long)(p - (float)p_9) % (
                                         result + 87UL)) result = 8614UL;
  else {
    result = (unsigned long)(((unsigned long long)(-45 * (int)v_11) * (
                              v_13 - 40281ULL)) * (unsigned long long)(
                             (long long)p_15[1][2][2] * p_9 - (long long)(! p_15[3][1][3])));
    v = (unsigned short)((long long)((unsigned long)((int)((short)p) * (int)p_5) % (
                                     result + 160UL)) + (((long long)p_7 - 759419310LL) + (
                                                         30LL + p_9)));
    result = (unsigned long)(- p / (((float)v - p) + 692.f));
  }
  return result;
}

