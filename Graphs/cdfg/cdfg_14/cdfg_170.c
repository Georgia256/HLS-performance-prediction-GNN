#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 365256270
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, signed char p_5[5], double p_7, unsigned int p_11,
                   long p_13)
{
  unsigned short v_19;
  short v_17;
  unsigned long long v_15;
  char v_9;
  unsigned int v;
  unsigned short result;
  v_19 = (unsigned short)37779;
  v_17 = (short)p_13;
  v_15 = (unsigned long long)p_5[2];
  v_9 = (char)p_5[4];
  if ((int)((unsigned short)-322838592.f) == (int)v_19) {
    v_9 = v_9;
    v = (unsigned int)((unsigned long)(! p_13) / ((495783164UL + (unsigned long)(
                                                   (int)p * (int)p)) + 822UL));
    result = (unsigned short)((unsigned int)((int)((char)(- p_7)) / (
                                             (int)v_9 + 534)) + ! ((unsigned int)p_5[3] % (
                                                                   p_11 + 43U)));
  }
  else {
    v_15 = (52ULL + v_15) % 1014ULL | (unsigned long long)((3577586263UL ^ (unsigned long)v_17) + 230UL);
    result = (unsigned short)((unsigned long long)-1.24531266982e+38f ^ v_15);
    v = (unsigned int)p_7;
  }
  result = (unsigned short)((unsigned long long)p - ((unsigned long long)v / 18446744073709545409ULL) % (unsigned long long)(
                                                    ((int)p_5[0] >> (
                                                     (int)result & 7)) + 741));
  return result;
}

