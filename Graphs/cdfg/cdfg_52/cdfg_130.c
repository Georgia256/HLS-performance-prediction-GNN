#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 379010749
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned int p_5, unsigned char p_9, char p_13[2],
          unsigned long p_19)
{
  int v_25;
  unsigned int v_23;
  unsigned int v_21;
  signed char v_17;
  signed char v_15;
  double v_11;
  short v_7;
  double v;
  short result;
  v_25 = (int)p_13[0];
  v_23 = p_5;
  v_17 = (signed char)-38;
  v_15 = (signed char)21;
  v_11 = -110.950678149;
  result = (short)26858;
  if ((unsigned long)(-68 * (int)p_9) % ((p_19 - (unsigned long)p_5) % (unsigned long)(
                                         v_23 / (unsigned int)((int)p_9 + 142) + 818U) + 121UL) <= (unsigned long)v_25) {
    v_7 = (short)((unsigned long)((int)v_15 >> (((int)result & -402) & 7)) - 
                  (unsigned long)(-6126 * (int)p_9) * ((unsigned long)v_17 * p_19));
    result = (short)((long)((int)(! v_7) / (((int)((unsigned char)8000188007.93) + (int)p_9) + 732)) - 
                     50994L * (long)(v_11 * (double)p_13[1]));
    v = (double)((unsigned int)(55650 / ((int)result + 101)) % (p_5 + 998U));
  }
  else {
    v_21 = (unsigned int)((unsigned long)p + 70770437UL % (unsigned long)(
                                             ((unsigned int)p_13[1] - p_5) + 725U));
    v = (double)v_21;
  }
  result = (short)(- (p - v) + p);
  return result;
}

