#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 806129030
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, short p_5, long p_7, unsigned short p_9[5][4][1],
          long p_11)
{
  float v_29;
  float v_27;
  long v_25;
  double v_23;
  signed char v_21;
  int v_19;
  unsigned short v_17;
  unsigned int v_15;
  unsigned short v_13;
  unsigned char v;
  float result;
  v_29 = 367.274078369f;
  v_27 = -703.915771484f;
  v_25 = (long)p_5;
  v_23 = 2.62395946763e+38;
  v_21 = (signed char)p_7;
  v_19 = (int)p;
  v_15 = (unsigned int)p;
  if ((int)(- ((double)p_5 / 3.2545376996e+38) + (1.55774322474e+38 + (double)v_19) / (
                                                 (double)p_7 + 426.)) > 
      (int)((float)((long)v_23 * v_25) * - v_27) * ((int)(- p_9[2][1][0]) / (
                                                    -55 % ((int)((char)v_29) + 199) + 734))) {
    v_15 = (unsigned int)p_7;
    v_13 = (unsigned short)v_15;
    v = (unsigned char)(~ ((long)p_9[2][2][0] * p_11) ^ (long)(! ((int)v_13 / (
                                                                  (int)p_9[2][1][0] + 936))));
  }
  else {
    v_17 = (unsigned short)(0LL / (69LL % ((p - (long long)p_5) + 534LL) + 190LL));
    v_19 = (int)(v_15 >> (((unsigned long long)v_21 * 35276ULL + (unsigned long long)(
                           (int)p_9[3][3][0] - -91)) & 31ULL));
    v = (unsigned char)(~ ((int)v_17 - ! v_19));
  }
  if ((long long)(! (~ v)) > p * (long long)(- ((long)p_5 % (p_7 + 530L)))) 
    result = (float)30379UL;
  else result = (float)2121801945ULL;
  return result;
}

