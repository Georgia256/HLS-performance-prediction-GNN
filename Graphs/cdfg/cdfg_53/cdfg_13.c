#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 937901769
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p[4][4], unsigned short p_4, unsigned int p_7,
              double p_11, unsigned int p_15)
{
  unsigned short v_23;
  unsigned long v_21;
  unsigned long v_19;
  char v_17;
  unsigned long v_13;
  long long v_9;
  unsigned long v;
  long long result;
  v_21 = 762309466UL;
  v_19 = (unsigned long)p_11;
  v_17 = (char)9;
  v_13 = (unsigned long)p_15;
  v_9 = 63245LL;
  result = 254527942LL;
  while ((long long)(((p_15 - (unsigned int)p_11) ^ ~ p_15) / 4294946646U) > 
         ((long long)(p_7 + (unsigned int)v_17) / ((long long)p_15 * p[3][1] + 615LL)) / (
         (result % (long long)(v_19 + 561UL)) * 3728440571LL + 11LL)) {
    v_23 = v_21 & 6590UL;
    v_13 = (unsigned long)((int)p_4 * (int)(- (~ v_23)));
    v_19 = (unsigned long)((long long)p_4 ^ p[1][0]);
    result = p[1][3];
  }
  while_0_break: ;
  if (((long long)(4294914916UL / (v_13 + 58UL)) ^ 881279471LL) >= (long long)v_13) 
    result = (long long)(! (~ (! 113338460U)));
  else {
    v = (unsigned long)((long long)p_7 * (v_9 % (long long)(((int)((unsigned short)p_11) - (int)p_4) + 22)));
    result = (long long)v;
    result = 309972033LL - (p[2][2] + 124LL) / ((long long)p_4 % (result + 458LL) + 288LL);
  }
  return result;
}

