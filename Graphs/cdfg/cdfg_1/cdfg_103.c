#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 288075352
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, long p_7, unsigned long p_11,
                   signed char p_13, unsigned long p_17)
{
  float v_27;
  unsigned char v_25;
  float v_23;
  int v_21;
  long v_19;
  double v_15;
  unsigned int v_9;
  float v_4;
  char v;
  unsigned short result;
  v_27 = (float)p_11;
  v_25 = (unsigned char)p;
  v_21 = (int)p_11;
  v_19 = -58377L;
  v_15 = (double)p_13;
  v_9 = (unsigned int)p_17;
  while ((unsigned long)(-32408 << (((unsigned long)v_9 + ~ p_17) & 15UL)) >= 
         (p_11 >> (p_11 & 31UL)) * p_17) {
    v_15 = (unsigned long long)v_21 + ((unsigned long long)v_19 + 1824ULL);
    v_23 = (float)v_25 + ((float)p_13 - - v_27);
    v_21 = (int)((unsigned short)(- (v_23 * 3814909696.f)));
    v_9 = (unsigned int)(42900LL % (p % (long long)(p_17 / (unsigned long)(
                                                    (int)p_13 + 437) + 331UL) + 241LL));
  }
  while_0_break: ;
  if (-51630. <= v_15 - (double)p_17) {
    v_4 = (float)(- (! (61U / (v_9 + 914U))));
    v = (char)((long long)v_4 / ((p / -120LL - (long long)(- p_7)) + 260LL));
    result = (unsigned short)v;
  }
  else {
    v_9 = (unsigned int)((unsigned long)p_7 - p_11 / (unsigned long)(
                                              (int)p_13 * 28210 + 90));
    result = (unsigned short)v_9;
  }
  return result;
}

