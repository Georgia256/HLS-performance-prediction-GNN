#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 233757872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, char p_11, short p_15, unsigned long long p_21)
{
  unsigned int v_19;
  double v_17;
  unsigned char v_13;
  long v_8;
  signed char v_6;
  char v_4;
  double v;
  long result;
  v_17 = (double)p_11;
  v_13 = (unsigned char)p_21;
  v_8 = -337851769L;
  v_6 = (signed char)76;
  v_4 = (char)116;
  v = 6971109062.25;
  result = 910749381L;
  if (~ result <= (long)(- ((int)((signed char)v_17) | -33) % ((int)v_4 + 415))) {
    v_13 = (unsigned char)(((int)(- p_15) / ((int)((short)(- p)) + 857)) * ~ (
                           (int)v_6 << ((int)p_11 & 7)));
    result = (long)(~ (((int)((char)v_17) - (int)p_11) ^ 31523 / ((int)p_15 + 340)));
    v_13 = (unsigned char)(1007915703ULL + (unsigned long long)(-14562L % (long)(
                                                                (int)v_13 + 666)) / 18446744073709548645ULL);
  }
  else {
    v_4 = (char)(- ((unsigned long)v_13 % 623676176UL));
    v_17 = (double)((unsigned long long)(! result / (long)(20847 / ((int)v_4 + 865) + 195)) + - (
                    p_21 % (unsigned long long)((int)p_11 + 939)));
    v_8 = (long)(40 + (int)p_15) / (~ result + 72L) >> ((long)((double)(
                                                               result + (long)p_11) / (
                                                               v + 171.)) & 31L);
  }
  while (v >= (double)((float)((int)v_4 + (int)v_6 * 124) / (((float)(! v_8) + 
                                                              p / ((float)p_11 + 500.f)) + 612.f))) {
    v_19 = (int)v_13 / -25766;
    v_6 = (signed char)((unsigned long)(v_8 * (long)p_15) % 32829UL + (unsigned long)v_8);
    result = (long)(((246. + v_17) + (double)v_19) + (double)(23879 / (
                                                              (int)p_11 + 350) ^ (int)-6237757440.f));
    v_4 = (char)(- (((double)p_15 - v_17) / 1148190950.));
  }
  while_0_break: ;
  return result;
}

