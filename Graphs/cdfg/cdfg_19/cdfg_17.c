#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 390833655
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, unsigned int p_4, unsigned char p_6,
        unsigned short p_9, long long p_11)
{
  signed char v_21;
  long long v_19;
  double v_17;
  signed char v_15;
  signed char v_13;
  signed char v;
  int result;
  v_21 = (signed char)-122;
  v_19 = (long long)p_6;
  v_17 = -1.49259493214e+38;
  v_15 = (signed char)p_4;
  v_13 = (signed char)p_11;
  v = (signed char)-69;
  result = (int)p_9;
  while ((long long)((unsigned long)((p_4 + 4294967246U) * 50U) ^ ! (
                     4294943726UL | p)) != ~ (! (- v_19))) {
    result = (int)(((long long)(3921829455UL / (unsigned long)((int)v + 47)) * ~ p_11) * ~ (
                   27702LL + (long long)v_15));
    v_13 = (signed char)((long long)v_21 * ((long long)((int)v_21 * (int)p_6) / (
                                            63907LL / (v_19 + 967LL) + 365LL)));
    v_19 = (long long)((int)v_13 * (int)((signed char)(- ((double)p_6 - -3.22670237205e+38))));
  }
  while_0_break: ;
  if (2LL != (long long)(result * (int)(7933242368.f + (float)p_11))) {
    v = (signed char)(0 / (((int)p_6 << 3) + 288) + (int)(~ v) % ((int)(! v_15) + 454));
    result = (int)((long long)(- (result / ((int)v + 1))) - ((long long)p_9 - p_11) % (
                                                            ((long long)v_13 + p_11) + 615LL));
    result = (int)(((p + (unsigned long)p_4) >> ((int)(- p_6) & 31)) / (unsigned long)(
                   ! result + 205));
  }
  else {
    v = (signed char)(v_17 - (double)(~ (- p_9)));
    v = (signed char)(~ ((unsigned long)(44668L / (long)((int)v + 807)) * p));
    result = (int)((long long)(((int)p_6 & (int)p_6) + (int)(! v)) * (
                   ~ p_11 | (long long)((int)p_6 | (int)((unsigned char)1.00466116999e+38f))));
  }
  return result;
}

