#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 415765555
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, double p_19, unsigned long long p_23, int p_25[2][2][5])
{
  float v_21;
  signed char v_17;
  unsigned char v_15;
  float v_13;
  double v_11;
  signed char v_9;
  signed char v_7;
  double v_5;
  unsigned short v;
  float result;
  v_17 = (signed char)p_23;
  v_15 = (unsigned char)189;
  v_13 = (float)p_25[0][1][2];
  v_11 = (double)p_23;
  v_7 = (signed char)p_19;
  v = (unsigned short)40131;
  result = (float)p_23;
  if ((unsigned long long)(~ (((unsigned long)v_17 * 42393UL) % ((unsigned long)(
                                                                 (double)result * p_19) + 567UL))) >= 18446744073033698235ULL) {
    v_17 = (signed char)(- (p * (long)p_19) % (long)((int)(! v_17) + 506));
    v_11 = (double)((int)v_11 / ((int)v_17 * (int)v_17 + 402) & (int)(! v_17) * 9028);
    v_5 = (double)v_15;
  }
  else {
    v_21 = (float)p_25[1][1][2];
    v_5 = (double)((unsigned long long)((p_19 + -5576638138.28) * 2.97939653457e+38) * 58246ULL);
    v_13 = (float)((double)(((int)p_19 / -1040) % ((91 << ((int)v_7 & 7)) + 953)) / (
                   (p_19 / (double)(v_21 + 312.f)) / ((double)(- p_23) + 126.) + 970.));
  }
  while ((long)v >= p) {
    v_9 = v_5 + -358491638.;
    v_5 = (double)(- v_13);
    v_7 = (signed char)((int)((signed char)((double)result + v_11)) - (int)v_9);
    v = (unsigned short)(((int)(! v_7) - 52) * (int)v_9);
  }
  while_0_break: ;
  return result;
}

