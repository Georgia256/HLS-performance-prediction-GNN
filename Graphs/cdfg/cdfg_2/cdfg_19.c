#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 422108563
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, char p_5[1], short p_11, long long p_15[3][3][1],
                  short p_19)
{
  char v_27;
  char v_25;
  short v_23;
  signed char v_21;
  int v_17;
  long v_13;
  double v_9;
  long v_7;
  unsigned char v;
  unsigned char result;
  v_27 = (char)p_15[0][0][0];
  v_25 = (char)p_15[2][1][0];
  v_23 = (short)17251;
  v_21 = (signed char)p_15[0][0][0];
  v_17 = (int)p_15[0][0][0];
  v_13 = (long)p_19;
  v_9 = -1.28675157192e+38;
  v_7 = (long)p_15[2][2][0];
  v = (unsigned char)242;
  result = (unsigned char)74;
  while (0L >= - ((long)(! result) / (~ v_13 + 490L))) {
    v_9 = (int)v_27 - (int)((char)((float)v_25 + -846.334411621f));
    v_13 = (long)(-35324. * (1.84467440737e+19 - ((double)v_7 + v_9)));
    v_23 = (short)v_17;
    result = (unsigned char)((long)(! (~ p)) ^ (19340L * v_13) / (~ v_13 + 978L));
  }
  while_0_break: ;
  if ((int)p_11 % ((int)result + 61) << ((18446744073302313087ULL - (unsigned long long)(
                                          -31334 * (int)p_5[0])) & 31ULL) <= 
      ((int)((char)((float)v * -650.012634277f)) % ((int)(! p_5[0]) + 802)) / (
      ((int)(~ v_21) - ((int)v_23 >> 12)) + 562)) {
    result = (unsigned char)35;
    v = (unsigned char)(~ (v_7 % ((long)-7496907737.92 + 772L)) & (long)(
                        (int)(- result) / ((int)((unsigned char)v_9) + 315)));
    result = (unsigned char)((((int)p << 9) + (18454 + (int)v)) % ((int)(! (! p_5[0])) + 432));
  }
  else {
    v_9 = (double)(! p_19);
    v_13 = (long)(~ (~ p_15[1][2][0]) + (long long)((v_17 + 3) & (int)(
                                                    v_9 / ((double)p + 481.))));
    result = (unsigned char)(-97607L * ~ ((long)p_11 * v_13));
  }
  return result;
}

