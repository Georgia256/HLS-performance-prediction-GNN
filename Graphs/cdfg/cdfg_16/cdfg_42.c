#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949397247
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, double p_9, signed char p_11,
                unsigned int p_19, unsigned short p_21)
{
  int v_17;
  signed char v_15;
  signed char v_13;
  unsigned short v_7;
  unsigned long v_4;
  unsigned long v;
  signed char result;
  v_17 = (int)p_9;
  v_15 = p_11;
  v_13 = (signed char)p_19;
  v_7 = (unsigned short)p_9;
  v_4 = 35599UL;
  v = (unsigned long)p;
  while (! ((unsigned int)v_7 % 3235247207U) - (unsigned int)((int)(~ p) - (int)((unsigned char)(- p_9))) > (unsigned int)(
         (int)p_11 - (int)(~ v_13))) {
    v_17 = (long long)v_17 % (((long long)v_15 + -53207LL) + 575LL);
    v_15 = (signed char)(51264ULL ^ (unsigned long long)(- (- p_19)));
    v_7 = (unsigned short)(~ (5638U & p_19 * (unsigned int)p_21));
    v_13 = (signed char)((4967162368.f / ((float)(! p_11) + 741.f)) / (
                         (float)((int)((double)p_11 + p_9) / 900747403) + 504.f));
  }
  while_0_break: ;
  result = (signed char)((v + v_4) / (unsigned long)((int)(! p) + 160));
  return result;
}

