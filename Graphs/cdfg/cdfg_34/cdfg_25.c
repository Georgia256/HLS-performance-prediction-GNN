#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 727002064
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p[4], float p_5, unsigned int p_7, signed char p_9,
                   short p_23)
{
  double v_21;
  unsigned short v_19;
  int v_17;
  float v_15;
  short v_13;
  signed char v_11;
  double v;
  unsigned short result;
  v_17 = 224831199;
  v_15 = (float)p_7;
  v_13 = (short)p_7;
  v_11 = (signed char)-9;
  v = (double)p_9;
  while ((long)(- (~ (105 * (int)v_11))) >= ! (-330500415L ^ (long)p_5) + (long)2.20277721105e+38) {
    v_19 = (unsigned int)v_17 / ((unsigned int)v_15 * ((unsigned int)v_13 & 45819U) + 264U);
    v_21 = (double)(((int)(~ p_23) % ((int)(! v_19) + 555)) / -296);
    v = (double)(51780 * (int)((unsigned short)v_21));
    v_11 = (signed char)((unsigned long long)(~ (! p[2])) % (((unsigned long long)(
                                                              p[2] << 22U) ^ 
                                                              32733ULL % (unsigned long long)(
                                                              (int)v_19 + 634)) + 295ULL));
  }
  while_0_break: ;
  if ((unsigned int)((float)p[2] / (((float)(p[3] | (long)v) + p_5 * 6954.f) + 401.f)) != (
      p_7 | 3033983929U / (unsigned int)((int)p_9 / -72 + 755))) result = (unsigned short)4296117726.05;
  else result = (unsigned short)63350;
  return result;
}

