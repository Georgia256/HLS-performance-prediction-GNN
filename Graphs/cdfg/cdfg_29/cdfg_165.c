#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 342337171
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, double p_5, unsigned long p_9,
                  unsigned char p_17)
{
  unsigned short v_25;
  unsigned long v_23;
  unsigned long v_21;
  unsigned short v_19;
  unsigned long v_15;
  unsigned int v_13;
  signed char v_11;
  unsigned long v_7;
  char v;
  unsigned long result;
  v_25 = (unsigned short)7587;
  v_23 = (unsigned long)p_5;
  v_21 = p_9;
  v_19 = (unsigned short)22837;
  v_15 = 3887541707UL;
  v_13 = 4294909807U;
  v_7 = (unsigned long)p;
  v = (char)-119;
  result = 4294905679UL;
  while ((unsigned long)(((int)v_19 >> (v_15 & 15UL)) - 184) <= (v_23 & (unsigned long)p) / (unsigned long)(
                                                                ((int)p & 39504) + 173) - (unsigned long)(! p_17)) {
    v_13 = (long)v_25 - 644903360L;
    v_7 = 381887257UL * result;
    v_21 = (unsigned long)(~ (! -13590007L));
    v_19 = (unsigned short)((unsigned long)((int)v % ((int)p_17 + 949) | 
                                            (int)p % ((int)v + 908)) + 
                            (733UL * v_7) / (unsigned long)((int)(~ p_17) + 878));
  }
  while_0_break: ;
  if (v_15 >= (unsigned long)(- p_17)) result = (unsigned long)(~ (- (! (short)-29883)));
  else {
    v_11 = (signed char)((unsigned long)v_13 * v_15);
    v = (char)((~ v_7 * (p_9 - p_9)) % (unsigned long)((int)v_11 + 991));
    result = (unsigned long)((double)((long)((int)p - 33809) % ((-436369657L - (long)v) + 834L)) / (
                             p_5 + 1.));
  }
  return result;
}

