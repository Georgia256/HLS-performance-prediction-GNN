#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 888663589
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p[1][4], unsigned char p_9, float p_11,
                  long p_17[1][5], unsigned short p_19)
{
  unsigned long long v_25;
  int v_23;
  short v_21;
  signed char v_15;
  double v_13;
  long v_7;
  int v_4;
  unsigned long long v;
  unsigned long result;
  v_25 = (unsigned long long)p[0][1];
  v_23 = (int)p_11;
  v_21 = (short)p[0][3];
  v_15 = (signed char)75;
  v_7 = (long)p[0][0];
  v = 18446744073709537509ULL;
  result = (unsigned long)((p_17[0][2] >> ((int)v_21 & 31)) + - p_17[0][1]);
  if ((unsigned long long)(4206935306UL * result) < ((unsigned long long)v_7 & (
                                                     (v_25 ^ (unsigned long long)p_19) - - v))) {
    v_4 = (int)(-98L / (((long)p[0][2] + v_7) % (long)((int)p_9 * 16251 + 574) + 977L));
    v = (unsigned long long)(- v_4);
    result = (unsigned long)v;
  }
  else {
    v_21 = (short)((unsigned long)(-418127552L * (long)p[0][2] - (long)(
                                   v_23 >> (result & 31UL))) * (0UL / (unsigned long)(
                                                                p_17[0][4] % (long)(
                                                                (int)p_19 + 257) + 107L)));
    v_13 = (double)((long)((int)p_19 % ((int)p_9 + 648)) / (((long)v_21 & 436264177L) * (long)p_9 + 990L));
    result = (unsigned long)((int)((signed char)((double)p_11 / (v_13 + 330.))) + (int)v_15) % (
             ((unsigned long)(~ p_17[0][2]) & 169UL * result) + 583UL);
  }
  return result;
}

