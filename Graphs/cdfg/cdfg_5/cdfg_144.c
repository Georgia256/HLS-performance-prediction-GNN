#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 719888215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, float p_5, float p_7, unsigned char p_9[1],
         long p_11)
{
  signed char v_23;
  int v_21;
  int v_19;
  signed char v_17;
  unsigned short v_15;
  unsigned int v_13;
  unsigned char v;
  char result;
  v_23 = (signed char)p_11;
  v_21 = -51195;
  v_19 = (int)p_5;
  v_17 = (signed char)-33;
  v_15 = (unsigned short)876;
  v_13 = 4294902032U;
  v = (unsigned char)p_11;
  while ((float)(-42476LL + (long long)p) <= (- p_5 - (float)(4294959224U + v_13)) / (
                                             (float)v_15 + 327.f)) {
    v_13 = (unsigned long)v_17 | 314838895UL;
    v = (unsigned char)(((unsigned int)v_15 / (v_13 + 625U) ^ 50042U) - (unsigned int)v_23);
    v_15 = (unsigned short)v_21;
    v_13 = (unsigned int)(! ((unsigned long long)(p_5 / ((float)v + 906.f)) - (
                             (unsigned long long)v_19 | 57351ULL)));
  }
  while_0_break: ;
  if ((long long)(((int)p * (22752 / ((int)v + 916))) % (-26555 / ((int)((short)(
                                                                   (double)p_5 / 2.95150764791e+38)) + 76) + 642)) == 
      ((long long)(p_7 - (float)p_9[0]) % -960230296LL) / (long long)(
      (unsigned long)(p_11 << ((int)p_9[0] & 31)) / (unsigned long)(- v_13 + 704U) + 21UL)) 
    result = (char)-47;
  else result = (char)-95;
  return result;
}

