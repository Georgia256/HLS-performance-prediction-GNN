#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 193248035
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned short p_7, int p_9[5][4][2],
         unsigned long long p_11[3][1], unsigned int p_23)
{
  unsigned long v_25;
  double v_21;
  long long v_19;
  unsigned short v_17;
  char v_15;
  unsigned long long v_13;
  float v_5;
  float v;
  char result;
  v_25 = 6032UL;
  v_21 = (double)p_23;
  v_19 = 1062598006LL;
  v_17 = (unsigned short)51381;
  v_13 = 18446744072708850196ULL;
  result = (char)-21;
  if (! (v_19 * (long long)(-4 % ((int)result + 941))) == (long long)(
      (unsigned long)((unsigned int)(-47 - (int)((char)v_21)) - p_23) - 
      (unsigned long)((int)p / 61804) * v_25)) {
    v = (float)-527008573L;
    result = (char)(v_13 * (0ULL - p_11[1][0]));
    v_5 = (float)((double)(- (-317043778L * (long)p_7)) + (0. + - p));
  }
  else {
    v_15 = (char)(! (- p_11[1][0]) - ((unsigned long long)(627905491LL % (
                                                           (long long)p + 52LL)) - 193009161ULL));
    v = (float)(~ v_13 % (unsigned long long)((int)(- result) + 925) ^ (unsigned long long)v_17);
    v_5 = (float)v_15;
  }
  while (18446744073709551562ULL < ((unsigned long long)(p - (double)v) >> 40ULL) - (unsigned long long)(- v)) {
    result = (char)((double)(-8402 - 14 / ((int)p_7 + 330)) * p);
    v_5 = (float)(p_11[1][0] % ((unsigned long long)(- ((double)v_5 / 7378207028.63)) + 296ULL));
    v = (float)((207824394LL - (long long)p_7) * (long long)(~ p_9[2][2][0]));
  }
  while_0_break: ;
  return result;
}

