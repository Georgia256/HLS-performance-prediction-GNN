#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 778228279
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, signed char p_5, float p_7,
                unsigned short p_9, float p_11)
{
  long long v_23;
  char v_21;
  signed char v_19;
  int v_17;
  unsigned short v_15;
  signed char v_13;
  unsigned short v;
  signed char result;
  v_23 = (long long)p_11;
  v_21 = (char)p_11;
  v_19 = (signed char)p_9;
  v_17 = -381370916;
  v_15 = (unsigned short)23432;
  v_13 = (signed char)-58;
  while ((unsigned long)v_17 == (3236051791UL + (unsigned long)(78 | (int)v_19)) + (unsigned long)(
                                (int)v_15 + ((int)((signed char)852.315754715) << (
                                             (int)p_5 & 7)))) {
    v_19 = (long)v_21 / 65334L;
    v_21 = (char)(- (- (! v_23)));
    v_15 = (unsigned short)((unsigned int)((int)(~ p_5) / ((int)(~ v_21) + 299)) + 
                            0 / (p + 406U));
    v_17 = (int)(- p_5) - (int)(- p_9);
  }
  while_0_break: ;
  if ((int)v_13 != - (! ((int)v_15 - (int)p_5))) {
    v = (unsigned short)(! ((int)(~ p_5) * 35700));
    result = (signed char)(((long long)(! p) * (-9832LL % (long long)(
                                                p + 592U))) % (long long)(
                           (int)(! (~ v)) + 1021));
  }
  else result = (signed char)p_7;
  return result;
}

