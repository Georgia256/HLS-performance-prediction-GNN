#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1047513328
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, long long p_5, unsigned long p_9,
                   long long p_15, unsigned short p_19)
{
  int v_17;
  unsigned long v_13;
  unsigned long long v_11;
  char v_7;
  unsigned long v;
  unsigned short result;
  v_17 = (int)p_9;
  v_13 = (unsigned long)p_19;
  v_11 = 18446744073668755386ULL;
  result = (unsigned short)48415;
  if (~ ((4289506522ULL | v_11) | (unsigned long long)(- v_17)) > (unsigned long long)(
      (unsigned long)((long)(~ p_19) + 827064375L) + 310841501UL)) {
    v_11 = (unsigned long long)((~ v_13 - (unsigned long)(! result)) + 90964693UL);
    v_7 = (char)v_11;
    v = (unsigned long)(! ((long long)v_7 - p) % (((long long)(p_9 & 95UL) + p_5) + 152LL));
  }
  else v = (unsigned long)(! ((3401616500LL % (p_5 + 145LL)) * ! p_15));
  result = (unsigned short)(~ (p / 49031LL) / ((long long)(v % 12327UL) * (
                                               p - p_5) + 186LL));
  return result;
}

