#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 586298015
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, long long p_9)
{
  signed char v_15;
  long v_13;
  int v_11;
  unsigned long long v_7;
  unsigned long v_5;
  unsigned int v;
  double result;
  v_13 = (long)p;
  v_11 = (int)p;
  v_5 = (unsigned long)p_9;
  v = p;
  result = (double)p;
  v_7 = (unsigned long long)(- (- (result + 12029.)));
  while ((unsigned long long)(0 ^ (unsigned long)((p - v) >> (((unsigned long)result + v_5) & 31UL))) < - (
         - v_7 - (unsigned long long)(p_9 / (long long)(v_11 + 553)))) {
    result = (unsigned long)v_13 % 363507333UL;
    v_15 = (signed char)-89;
    v_11 = (int)((double)((long long)v_15 * p_9 + -866897197LL) - 4888295686.15);
    v_7 = (unsigned long long)(127.090518828 / (result + 266.));
  }
  while_0_break: ;
  return result;
}

