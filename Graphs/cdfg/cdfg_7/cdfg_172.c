#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 662758765
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_11, signed char p_15,
              unsigned long p_21, unsigned char p_23)
{
  unsigned short v_29;
  float v_27;
  short v_25;
  short v_19;
  signed char v_17;
  unsigned long v_13;
  unsigned char v_9;
  unsigned short v_6;
  double v_4;
  double v;
  long long result;
  v_29 = (unsigned short)18649;
  v_27 = (float)p;
  v_25 = (short)p_23;
  v_17 = (signed char)-49;
  v_9 = (unsigned char)75;
  v_6 = (unsigned short)p_21;
  v_4 = (double)p_23;
  v = (double)p;
  result = (long long)p_23;
  while ((long long)(((int)p_23 - (int)p_11) - (int)v_9) * - (result - (long long)p_11) > (long long)p_15) {
    v_29 = (int)v_29 - (int)((unsigned short)2.61358319231e+38);
    v_25 = (short)(- ((unsigned long)(- v_25) ^ (unsigned long)p_15 * 4294922830UL));
    v_13 = - ((p_21 - p_21) % (unsigned long)((int)(- p_23) + 298));
    result = (((long long)v_25 | result) % (long long)(((unsigned long)v_17 + v_13) + 655UL)) / (
             (long long)v_27 + 246LL);
  }
  while_0_break: ;
  if ((unsigned long long)((long long)(((int)v_6 ^ (int)v_9) / -38064988) - 
                           (p + (long long)p_21) % 14216LL) <= ((unsigned long long)(
                                                                102 + (int)v_25) * 151162129ULL) / (unsigned long long)(
                                                               ((int)v_9 / -28 + -115) + 898)) {
    v_9 = (unsigned char)0;
    v = (double)((long long)(((int)((unsigned short)v) % ((int)v_6 + 906)) % (
                             (int)(~ v_9) + 230)) * ~ (p / (long long)(
                                                       (int)p_11 + 231)));
    result = (long long)((v + v_4) - (v_4 * (double)v_6 + (double)((long long)-3.68810544514e+37f - p)));
  }
  else {
    v_19 = (short)((int)p_15 - ((int)((short)-1964830464.f) * (int)v_25) / (
                               (int)(~ p_15) + 828));
    v_13 = ! ((unsigned long)v_19 / (p_21 + 561UL) + (unsigned long)(
              -33948L * (long)p_23));
    result = (long long)((unsigned long long)(! v_13) - ((unsigned long long)p_15 * 101661727ULL + (unsigned long long)(
                                                         (int)v_17 - 99)));
  }
  return result;
}

