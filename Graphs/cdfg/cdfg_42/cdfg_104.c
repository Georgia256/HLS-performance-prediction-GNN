#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 438261760
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned long p_4, int p_7, unsigned short p_9,
                signed char p_17)
{
  long v_27;
  short v_25;
  short v_23;
  long long v_21;
  unsigned int v_19;
  long v_15;
  long v_13;
  unsigned long long v_11;
  unsigned char v;
  signed char result;
  v_27 = 63444L;
  v_25 = (short)-9708;
  v_23 = (short)p_4;
  v_21 = 890854192LL;
  v_19 = 659598250U;
  v_13 = -754429387L;
  v_11 = 1039746596ULL;
  result = (signed char)99;
  if ((long long)((long)(10496 / (((int)p_17 - (int)result) + 1017)) * (
                  1052423825L / (v_27 + 406L))) < 36343LL * ((long long)(
                                                             (int)v_25 % -37) & -501687438LL)) {
    v_13 = (long)((long long)(! p_9) % (v_21 % ((long long)(p + (double)v_23) + 1001LL) + 726LL));
    v = (unsigned char)v_19;
    result = (signed char)((4294951634UL * (unsigned long)p_17) * 74UL);
  }
  else {
    result = (signed char)-150.274887085f;
    v_11 = (unsigned long long)((- p_7 + - p_7) / ((int)v_25 + 1013));
    v = (unsigned char)p;
  }
  while ((unsigned long long)((long)(! v) & (long)(! p_7) * (-367175861L / (long)(
                                                             (int)p_9 + 253))) == v_11) {
    v_15 = (unsigned long long)v_13 % 18446744072640017505ULL;
    v = (unsigned char)2.42076602778e+38f;
    v_13 = (long)(! (1733845ULL ^ (unsigned long long)v_15) % (unsigned long long)(
                  - p_4 + 563UL));
    v_11 = (unsigned long long)(~ p_4);
  }
  while_0_break: ;
  return result;
}

