//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 190073634
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, double p_5, unsigned long p_7,
                  unsigned short p_13)
{
  unsigned long v_19;
  unsigned char v_17;
  unsigned int v_15;
  char v_11;
  unsigned short v_9;
  unsigned short v;
  unsigned long result;
  v_19 = 48603UL;
  v_17 = (unsigned char)p_7;
  v_15 = (unsigned int)p_7;
  v = (unsigned short)p_7;
  result = (unsigned long)p_5;
  v_9 = (unsigned short)v_19;
  v_11 = (char)(! ((long long)((int)v / ((int)v_17 + 56)) ^ (34686LL + p)) + 38LL);
  v = (unsigned short)((unsigned long)(- v_11) * ! ((unsigned long)(-530.556655266 * (double)p_13) - 
                                                    result * (unsigned long)v_15));
  result = (unsigned long)(((long long)((result % 4294966009UL) * 19644UL) / (
                            ~ ((long long)v * p) + 22LL)) / (long long)(
                           ((unsigned long)(- p_5) - ~ p_7) % (- ((unsigned long)v_9 % (
                                                                  p_7 + 153UL)) + 357UL) + 435UL));
  return result;
}

