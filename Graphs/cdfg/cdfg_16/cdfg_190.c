#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 896033365
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned char p_5, float p_7, signed char p_9[2][5][5],
          unsigned char p_11)
{
  float v_21;
  char v_19;
  long v_17;
  unsigned long v_15;
  float v_13;
  short v;
  short result;
  v_21 = -500.529296875f;
  v_19 = (char)p_9[1][0][4];
  v_17 = 25814L;
  v_15 = 1052445776UL;
  v_13 = 198.589263916f;
  while ((unsigned long)p_7 <= ~ (v_15 + 49391UL)) {
    v_19 = (int)v_21 % (((int)v_19 + (int)((char)-6952829952.f)) + 92);
    v_21 = - (-216.125610352f / ((float)p_11 + 562.f));
    v_13 = (float)((3430855915UL * (unsigned long)p - (unsigned long)p) + 
                   (unsigned long)((int)p_9[1][2][2] - (int)p_9[1][4][1]) % (
                   v_15 * (unsigned long)v_17 + 184UL));
    v_15 = (unsigned long)(- (42500L - ((long)v_13 - p)));
  }
  while_0_break: ;
  if ((float)((int)p_9[0][2][4] | (int)((signed char)(- p_7))) >= v_13) 
    result = (short)p;
  else {
    result = (short)(-103312440L + (long)p_5);
    v = (short)((int)(- p_11) * (28 % ((int)result + 333)));
    result = (short)((int)(! v) / ((int)((short)(((float)p_5 + p_7) / (
                                                 (float)(! p_9[0][3][4]) + 132.f))) + 348));
  }
  return result;
}

