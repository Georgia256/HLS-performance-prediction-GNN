#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 40867571
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, long long p_13, unsigned short p_17)
{
  unsigned long long v_23;
  signed char v_21;
  double v_19;
  signed char v_15;
  unsigned int v_11;
  unsigned long long v_9;
  unsigned long long v_7;
  double v_4;
  unsigned long v;
  short result;
  v_23 = 997404097ULL;
  v_21 = (signed char)108;
  v_19 = -2944590615.19;
  v_15 = (signed char)p_13;
  v_11 = (unsigned int)p;
  v_9 = 18446744073120314697ULL;
  v_7 = (unsigned long long)p;
  v_4 = -8802168025.16;
  v = 3613524443UL;
  result = (short)p;
  if ((unsigned long long)(- (-90 * (int)p)) >= (unsigned long long)(
                                                (long long)v / 64939LL & ! p_13) % (
                                                (unsigned long long)(! p) % (
                                                v_7 * 22704ULL + 796ULL) + 75ULL)) {
    v_7 = (unsigned long long)((double)((long long)((int)p ^ (int)((char)1.26570030566e+38)) + p_13) * (
                               (double)(8905 - (int)p_17) / (v_19 + 829.)));
    v_9 = (unsigned long long)v_11 * ((unsigned long long)((int)p - (int)v_15) & ! v_7);
    v_11 = 482225063U;
  }
  else {
    v_11 = (unsigned int)(~ ((long long)v_21 - p_13) * (long long)(- (
                          (int)v_21 / ((int)p_17 + 13))));
    v_21 = (signed char)((long long)v_19 - ! ((long long)result / (p_13 + 397LL)));
    v_7 = ~ ((unsigned long long)((int)p / ((int)v_21 + 461)) % ((v_23 - (unsigned long long)v_4) + 535ULL));
  }
  if (116UL != (51883UL | 3711474028UL * (unsigned long)p) + ! (926644336UL / (
                                                                v + 475UL))) 
    result = (short)-217890896.f;
  else {
    v_4 = (double)((v_9 - 28ULL) / (~ v_7 + 625ULL) + (unsigned long long)(
                   2850966528.f - (float)((unsigned int)p * v_11)));
    v = (unsigned long)((unsigned long long)((unsigned long)(- v_4) * 57327UL) % (
                        (unsigned long long)p % (v_7 + 521ULL) + 408ULL));
    result = (short)(! v);
  }
  return result;
}

