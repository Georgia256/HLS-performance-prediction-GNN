#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 988637034
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, short p_9[2][5][4], unsigned short p_17, short p_21)
{
  float v_19;
  long long v_15;
  unsigned char v_13;
  short v_11;
  unsigned char v_7;
  unsigned short v_4;
  float v;
  char result;
  v_19 = (float)p_17;
  v_15 = 916929486LL;
  v_13 = (unsigned char)p_9[1][1][1];
  v = (float)p;
  result = (char)1;
  if (! ((int)result >> ((int)((char)(- v)) & 7)) > - ((int)result * (int)((char)v_19)) + (
                                                    (int)v_13 - (int)p_21)) {
    v_4 = (unsigned short)50476;
    v_11 = (short)(-17968LL % (v_15 / -876927101LL + 782LL));
    v_7 = (unsigned char)p_9[0][4][3];
  }
  else {
    v_11 = (short)((unsigned long)p_17 - 3330318308UL);
    v_7 = (unsigned char)p_9[1][4][0];
    v_4 = (unsigned short)(- -4115514416.33);
  }
  if ((long)(140 - (int)v_4) > (long)((int)(~ p) * (int)(! v_7)) - (50386L ^ (long)p_9[0][0][3]) / (long)(
                                                                   (int)v_11 * (int)v_13 + 428)) 
    result = (char)-26;
  else {
    v = (float)3877282520UL;
    result = (char)v;
  }
  return result;
}

