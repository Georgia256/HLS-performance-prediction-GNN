#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205648696
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned short p_11, short p_17, signed char p_19)
{
  long v_15;
  char v_13;
  signed char v_9;
  unsigned char v_6;
  int v_4;
  unsigned short v;
  char result;
  v_15 = 740455332L;
  v_13 = (char)p_11;
  v_9 = (signed char)p_11;
  v_6 = (unsigned char)122;
  v_4 = (int)p;
  result = (char)-79;
  if (((long long)(((int)p_19 / ((int)v_9 + 895)) % (! v_4 + 121)) & 
       (long long)p_11 % ((63741LL - (long long)p_17) + 447LL)) < (long long)(
      -3.31735400079e+38f / ((float)(! (~ p)) + 406.f))) {
    v_4 = (int)(! (! (! p_17)));
    v = (unsigned short)((~ v_4 - ((int)p_17 + (int)p_11)) / ((int)p_17 + 999));
    v_9 = (signed char)(~ p_11);
  }
  else {
    v_13 = (char)(((unsigned long)p_19 / 4031559057UL) * (unsigned long)(
                  ((long)p_19 + -33881L) & (long)(- p)));
    result = (char)58;
    v = (unsigned short)(~ v_9);
  }
  while ((int)v == ! v_4 % (((int)v_6 | (int)p) + 888) - (((int)v_9 & (int)p_11) - (int)7089035264.f)) {
    v_9 = (signed char)((long)((int)v_13 + (int)p) + (42062L + ~ v_15));
    v = (unsigned short)(-1125 % ((int)(- p_11) + 876) ^ (int)(! p));
    v_6 = v_6;
  }
  while_0_break: ;
  return result;
}

