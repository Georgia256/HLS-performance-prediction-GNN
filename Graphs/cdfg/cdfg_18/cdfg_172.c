#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704475968
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, float p_4, unsigned long p_6[2], long p_15[4],
                  float p_17[3])
{
  long long v_21;
  unsigned long v_19;
  double v_13;
  long long v_11;
  unsigned int v_9;
  unsigned int v;
  unsigned long result;
  v_21 = (long long)p_4;
  v_19 = (unsigned long)p_17[1];
  v_13 = (double)p_4;
  v_11 = (long long)p_6[0];
  v = (unsigned int)p_4;
  result = (unsigned long)p;
  if (-2.45542892782e+37 / ((double)(((long long)v_19 - v_21) % (long long)(
                                     - p_6[0] + 901UL)) + 719.) != (double)(
      ~ v_19 + (unsigned long)(- ((long)p * p_15[3])))) {
    v_9 = 291728977U / (4294957582U / ((unsigned int)p_4 + 703U) + 961U);
    result /= (unsigned long)(~ (- p_15[3]) + 654L);
    v_13 = (double)((unsigned long)-415.438476562f * - (! p_6[1]));
  }
  else {
    v = (unsigned int)((((unsigned long)p_17[0] + p_6[0]) - (v_19 ^ (unsigned long)p_4)) % 207UL);
    v_9 = (unsigned int)(-4294904283UL);
    result = (unsigned long)(- p_17[2]);
  }
  while ((((unsigned long)p & ((unsigned long)p_4 - p_6[1])) | 11171UL) != (unsigned long)(! (
         v - ! v_9))) {
    v_9 = v_13 * (double)(v_11 >> 61ULL);
    v_11 = (long long)(((unsigned long)(v_9 * v) + p_6[1]) + (unsigned long)-1.4702625056e+32f);
    v = (unsigned int)(((long long)((unsigned long)v_9 | p_6[0]) * (v_11 % (long long)(
                                                                    p_6[1] + 920UL))) % (
                       ~ ((long long)result + 15786LL) + 511LL));
    v = v;
  }
  while_0_break: ;
  return result;
}

