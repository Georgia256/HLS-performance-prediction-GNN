#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 987886587
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p[5], unsigned char p_4[4][5][4],
                 long p_11, signed char p_13, char p_15)
{
  int v_25;
  int v_23;
  unsigned int v_21;
  float v_19;
  long v_17;
  signed char v_9;
  short v_7;
  long v;
  unsigned int result;
  v_25 = (int)p_15;
  v_23 = (int)p_13;
  v_21 = (unsigned int)p[4];
  v_9 = p_13;
  v = 15784L;
  v_19 = (float)(~ v_25);
  if ((double)(v_19 - (float)(v_21 - (unsigned int)p_13)) - (double)(
                                                            (int)p_13 % (
                                                            v_23 + 583)) * 961.244044228 >= (double)p[4]) {
    result = (unsigned int)(~ ((p[1] ^ (unsigned long long)p_11) / (unsigned long long)(
                               ((long)p_13 - v) + 345L)));
    v_7 = (short)(result / (unsigned int)((int)v_9 + 370));
    result = (unsigned int)((p[2] / (unsigned long long)(result + 648U) - (unsigned long long)(
                             (unsigned long)p_4[3][4][2] & 4294926046UL)) / (unsigned long long)(
                            (unsigned long)(~ result) / (unsigned long)(
                            v * (long)v_7 + 183L) + 513UL));
  }
  else {
    v_7 = (short)-2.79395344022e+38f;
    v_17 = 10807L;
    result = (unsigned int)((long)(~ ((int)p_15 >> 5)) + (long)((int)p_4[2][3][3] * (int)p_15) % (
                                                         (v_17 - (long)v_7) + 647L));
  }
  return result;
}

