#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 69377325
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned int p_4, double p_6[2][5], double p_11,
         unsigned int p_21)
{
  long long v_23;
  unsigned long long v_19;
  unsigned long v_17;
  long long v_15;
  unsigned long long v_13;
  double v_9;
  unsigned long v;
  char result;
  v_23 = -46306LL;
  v_19 = (unsigned long long)p_11;
  v_17 = 606309428UL;
  v_15 = (long long)p_6[1][4];
  v_13 = (unsigned long long)p_11;
  v_9 = 1.68088350444e+38;
  v = 4294957508UL;
  while (v_13 < 229228624ULL) {
    v_9 = v_19 + (unsigned long long)(v_17 * (unsigned long)((double)v_15 / 1.20778769442e+38));
    v_15 = (long long)(39862ULL % (unsigned long long)(v_23 + 669LL));
    v_19 = ~ ((unsigned long long)(v_15 + -2763LL) % (v_13 % (unsigned long long)(
                                                      p_21 + 518U) + 494ULL));
    v_13 = (unsigned long long)((v_9 - 31162.) * (double)((unsigned long)p - v)) + 
           (4294929653ULL + v_19) % (unsigned long long)(! v + 842UL);
  }
  while_0_break: ;
  if ((unsigned long)(- (14 | (int)((char)p_6[1][1]))) != (v * (unsigned long)v_9) * (unsigned long)p_11) 
    result = (char)((long long)(! p) + 269695913LL);
  else result = (char)(- ((unsigned long)(-63085L / (long)((int)p + 634)) * (unsigned long)(
                          p_4 / 32U)));
  return result;
}

