#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016214870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, unsigned int p_4, double p_7,
                  unsigned short p_9, char p_11[5])
{
  unsigned long long v_29;
  double v_27;
  unsigned short v_25;
  long long v_23;
  double v_21;
  int v_19;
  char v_17;
  unsigned char v_15;
  char v_13;
  unsigned long v;
  unsigned long result;
  v_27 = -7564844858.87;
  v_25 = (unsigned short)p_7;
  v_23 = 36234LL;
  v_21 = 707533442.653;
  v_19 = (int)p;
  v_17 = (char)p_9;
  v_13 = (char)0;
  while ((long long)(-216.869049072f / ((float)((long long)p ^ 28086LL) + 430.f)) % (
         ! v_23 * (long long)(v_19 * -25) + 433LL) > (long long)v_25) {
    v_29 = (int)((unsigned short)v_27) + 22360;
    v_23 = (long long)((unsigned long long)(678480614UL % (unsigned long)(
                                            (int)(! p_9) + 635)) - v_29);
    v_17 = (char)p_9;
    v_19 = (int)p_4;
  }
  while_0_break: ;
  if ((long long)((unsigned long)p_4 % (unsigned long)((long)p_7 % (33231L % (long)(
                                                                    v_19 + 252) + 876L) + 463L)) == 
      (long long)(! ((int)v_17 + (int)((char)p_7))) % ((305666477LL % (
                                                        (long long)v_21 + 806LL) & 
                                                        v_23 / (long long)(
                                                        v_19 + 523)) + 579LL)) {
    result = (unsigned long)(- -923824840);
    v = (unsigned long)((double)result / (- p_7 + 666.) - (double)((unsigned long)(
                                                                   (int)p_9 ^ -70) % (
                                                                   (result - (unsigned long)p_11[2]) + 78UL)));
    result = (((unsigned long)p - result) - 4206302296UL) | ((unsigned long)(~ p_4) - ! v);
  }
  else {
    v_15 = (unsigned char)(- (! 4274));
    result = (unsigned long)(((int)v_13 % ((int)v_15 + 306) >> (((unsigned int)p_11[2] - 23981U) & 31U)) / (
                             ! ((int)v_17 * (int)v_13) + 571));
    result = ~ (result % (unsigned long)((int)p_11[3] + 383)) * 110UL;
  }
  return result;
}

