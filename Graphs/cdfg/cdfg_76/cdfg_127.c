#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1046868045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, float p_4[1], unsigned short p_6, double p_8, long p_10)
{
  short v_21;
  long v_19;
  unsigned char v_17;
  unsigned long v_15;
  double v_13;
  unsigned short v;
  long result;
  v_19 = (long)p;
  v_17 = (unsigned char)11;
  v_15 = (unsigned long)p_8;
  v_13 = (double)p_6;
  v = (unsigned short)47141;
  while (19217 > (int)((short)(- (- p_4[0]) * ((float)(~ v_15) - p_4[0])))) {
    v_21 = v_19 * 112L;
    v_13 = (double)((int)v / (~ (p % ((int)v_13 + 618)) + 650));
    v_17 = (unsigned char)((-110 - ((int)v_17 ^ (int)v_21)) * - ((int)((unsigned short)p_8) - 40108));
    v_15 = (unsigned long)(! (! (! 819455894U)));
  }
  while_0_break: ;
  if ((int)((float)(! p_6) - (p_4[0] + (float)p)) * (0 % (((int)p_6 ^ -150542915) + 743)) == (int)(
      - p_8 * (double)((int)v ^ (int)((unsigned short)v_13)) - 103.)) 
    result = -85L;
  else result = -106L;
  return result;
}

