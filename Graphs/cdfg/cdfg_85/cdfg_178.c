#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 801847451
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned long long p_9, char p_11[1][3][1],
                   float p_17, unsigned long p_19)
{
  unsigned int v_23;
  int v_21;
  double v_15;
  short v_13;
  signed char v_7;
  signed char v_5;
  float v;
  unsigned short result;
  v_23 = 4136178864U;
  v_21 = -474977344;
  v_15 = -1.97018440017e+38;
  v_13 = (short)p_9;
  if ((unsigned long)(~ ((-12540 / (v_21 + 42)) * ((int)((char)v_15) * (int)p_11[0][0][0]))) <= 
      4294946949UL / (((unsigned long)((unsigned int)p + v_23) & 321083909UL) + 239UL)) {
    v_13 = (short)((int)((short)-1.77555012256e+38) % 24174);
    v_5 = (signed char)(162UL / (((unsigned long)v_15 >> 12UL) + 178UL) + (unsigned long)p);
    v_7 = (signed char)v_13;
  }
  else {
    v_5 = (signed char)((float)((unsigned long)((int)v_13 % 92) * (437UL - p_19)) + 
                        (float)((int)p / 49196) * 9.38903569816e+37f);
    v_13 = (short)-3548646144.f;
    v_7 = (signed char)p_17;
  }
  if ((unsigned long long)(4294948453UL - (unsigned long)v_5) / ((unsigned long long)v_7 * p_9 + 291ULL) - (unsigned long long)(~ (
      62006 + (int)p_11[0][0][0])) >= (unsigned long long)v_13) result = (unsigned short)p;
  else {
    v = (float)(~ 133699400ULL);
    result = (unsigned short)v;
  }
  return result;
}

