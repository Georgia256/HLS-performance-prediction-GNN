#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042864051
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned char p_4, unsigned short p_9,
                  unsigned short p_13, signed char p_15)
{
  short v_27;
  unsigned long long v_25;
  unsigned int v_23;
  int v_21;
  unsigned short v_19;
  long v_17;
  unsigned long v_11;
  unsigned short v_7;
  float v;
  unsigned char result;
  v_27 = (short)p_9;
  v_25 = 120050355ULL;
  v_23 = (unsigned int)p_13;
  v_21 = -1593;
  v_19 = (unsigned short)31089;
  v_17 = (long)p;
  v_11 = 7205565UL;
  v = (float)p_15;
  result = p_4;
  while ((~ v_25 / (unsigned long long)(! v_21 + 305)) * 18446744073709526092ULL != 
         (unsigned long long)v_23 * 69ULL) {
    v_19 = (long)v_27 / 34840L;
    v_27 = (short)((long long)(v_11 % 279600UL) + (-43595LL - (long long)p_15));
    v_17 = (long)(- (- v + (float)((long)p_13 ^ v_17)));
    v_23 = (unsigned int)v_17;
  }
  while_0_break: ;
  if (((unsigned long long)((int)p_4 % 7117) % 5346ULL ^ (unsigned long long)v_21) != (unsigned long long)(
      (unsigned int)(- ((int)((short)9530365952.f) % 11200)) + (v_23 / (unsigned int)(
                                                                (int)p + 873) + 
                                                                4294902230U * (unsigned int)v_19))) {
    v_17 = -42101L;
    v_7 = (unsigned short)((unsigned long long)v_11 / ((18446744072856073513ULL + (unsigned long long)p_13) + 526ULL) | (unsigned long long)(
                           ((long)p_15 + v_17) + (long)p_9));
    result = (unsigned char)0;
  }
  else {
    v_11 = (unsigned long)((unsigned int)(v_21 * (int)(~ p_15)) / ((unsigned int)(
                                                                   (int)p_15 / (
                                                                   (int)p_9 + 939)) / (
                                                                   (v_23 - (unsigned int)v_19) + 1005U) + 390U));
    v_19 = (unsigned short)((((int)p_4 % ((int)result + 730)) * ((int)p_4 ^ (int)p_13)) / -43);
    result = (unsigned char)((unsigned long)((int)v_19 ^ (int)p_15) * (
                             v_11 - (unsigned long)p) + (unsigned long)(
                             108 / ((int)p_13 + 711)));
  }
  return result;
}

