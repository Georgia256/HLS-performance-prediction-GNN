#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 234813892
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, short p_5, signed char p_13, char p_15, int p_17)
{
  unsigned short v_27;
  unsigned short v_25;
  unsigned char v_23;
  signed char v_21;
  int v_19;
  long v_11;
  float v_9;
  short v_7;
  unsigned short v;
  int result;
  v_27 = (unsigned short)36321;
  v_25 = (unsigned short)p_13;
  v_23 = (unsigned char)142;
  v_21 = (signed char)91;
  v_19 = (int)p;
  v_11 = -32148L;
  v_7 = (short)-30254;
  result = 12869;
  if ((unsigned long)(((unsigned int)((int)p_13 / ((int)v_7 + 373)) - 4294953396U) << (
                      -84 * ((int)v_7 | result) & 31)) != 4259006594UL + (unsigned long)(
                                                          (int)v_25 % (
                                                          (7250 - (int)v_27) + 338))) {
    v_7 = (short)(- p_17 / (v_19 / ((40 - (int)v_21) + 671) + 176));
    v_9 = (float)((unsigned long)((int)p_5 * (int)p_15) / ((535368371UL - (unsigned long)p_15) + 274UL) + (unsigned long)(
                  ((int)v_7 - (int)((short)p)) - p_17));
    v_11 = (long)((int)(~ (~ p_5)) | (int)(! (! p_13)));
  }
  else {
    v_19 = (int)p_13;
    v_7 = (short)(~ ((int)p_5 / (v_19 + 242) << ((int)v_23 & 31)));
    v_9 = (float)(~ (unsigned short)13520);
  }
  if (((int)v_7 - 2) - -86 == (int)(v_9 / ((float)(v_11 % -11091L) + 415.f))) 
    result = (int)p;
  else {
    v = (unsigned short)-65.1063746639;
    result = ! ((int)((signed char)((float)v / -272.180236816f)));
  }
  return result;
}

