#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 155884855
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, char p_5, long p_7, long long p_9,
                   unsigned int p_11)
{
  long long v_25;
  short v_23;
  double v_21;
  long v_19;
  unsigned char v_17;
  double v_15;
  float v_13;
  long v;
  unsigned short result;
  v_25 = -60773LL;
  v_23 = (short)-3062;
  v_21 = (double)p_7;
  v_19 = 26730L;
  v_17 = (unsigned char)p_9;
  v_15 = (double)p_5;
  v_13 = 3.3199264188e+38f;
  while (4294952021LL / (p_9 * (long long)p + 439LL) + ! (p_9 - (long long)p_5) >= 
         -47430LL / (((p_9 - (long long)p_5) & (long long)(-15536 * (int)v_23)) + 380LL)) {
    result = v_25 * 114LL;
    v_23 = (short)(((unsigned long)p_11 % (unsigned long)(((long)p - p_7) + 60L)) * (unsigned long)(
                   161L * (v_19 % 92L)));
    v_25 = (long long)((unsigned long)((v_19 / (long)((int)v_17 + 141)) % (long)(
                                       ((int)v_23 ^ 33348) + 248)) + (
                       12836UL - (unsigned long)((long)v_17 - v_19)));
    v_23 = (short)(! (4294901975UL % (unsigned long)((int)result % ((int)p + 882) + 441)));
  }
  while_0_break: ;
  if ((long long)(((int)p_5 * (int)((char)v_13)) / ((int)(v_15 * (double)v_17) + 935)) / (
      (long long)(! v_19) + 115LL) >= (long long)(0 - (int)((signed char)145479929.)) - (
                                      (long long)((int)((short)v_21) + (int)v_23) - 
                                      (long long)p_7 % (p_9 + 437LL))) 
    result = (unsigned short)p;
  else {
    v = (long)(~ (112LL / (p_9 / (long long)(p_11 + 929U) + 375LL)));
    result = (unsigned short)((unsigned long)v / (((unsigned long)p_5 % 25802UL) * (unsigned long)(~ p_7) + 512UL));
  }
  return result;
}

