#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 342051715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned short p_4[2][5][2],
                   unsigned long long p_9, unsigned long p_11, short p_13)
{
  double v_21;
  unsigned long long v_19;
  unsigned long v_17;
  unsigned short v_15;
  unsigned int v_7;
  char v;
  unsigned short result;
  v_21 = (double)p;
  v_19 = (unsigned long long)p_4[0][0][0];
  v_17 = 3968935588UL;
  v_15 = (unsigned short)p_11;
  v_7 = 41737U;
  v = (char)p;
  while ((unsigned long long)(p_11 * (unsigned long)(~ (! v_15))) < (unsigned long long)(
                                                                    (
                                                                    v_17 / (unsigned long)(
                                                                    (int)v_15 + 621)) % (unsigned long)(
                                                                    -13261 * (int)p_13 + 817)) * (
                                                                    - p_9 + v_19)) {
    v = v_21 + 5121.;
    v_17 = (unsigned long)(v_7 * 7287U);
    v_19 = p_9 - 38680ULL;
    v_15 = (unsigned short)(- (- (~ v_7)));
  }
  while_0_break: ;
  if ((unsigned long long)(((unsigned int)v - ~ v_7) % 4294967177U) >= ~ (
      p_9 * (unsigned long long)(p_11 / (unsigned long)((int)p_13 + 32)))) 
    result = (unsigned short)p;
  else result = p_4[0][3][0];
  return result;
}

