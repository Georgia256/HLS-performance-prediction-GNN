#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 245704472
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p[2][1])
{
  short v_15;
  char v_13;
  unsigned char v_11;
  char v_9;
  double v_7;
  unsigned int v_5;
  char v;
  char result;
  v_15 = (short)8866;
  v_13 = (char)118;
  v_11 = (unsigned char)207;
  v_9 = (char)102;
  v_7 = (double)p[0][0];
  v_5 = 3851079800U;
  v = (char)1;
  result = (char)((unsigned long long)p[0][0] + 18446744073709499775ULL);
  while ((unsigned long)((int)result * (int)v & (int)((double)(188831973 % (
                                                               (int)p[1][0] + 848)) / (
                                                      -1029325222.41 * (double)v_5 + 50.))) >= 0UL) {
    v_7 = (int)v_9 - ((int)((unsigned short)v_7) - 42958);
    v_5 = 4294957525U;
    v_9 = (char)(287U - ~ (46123U / (unsigned int)((int)v_15 + 419)));
    result = (char)((((int)v_11 + (int)((unsigned char)-1.29776013973e+38)) % 7447) % (
                    ((int)(- v_13) + 40163) + 952));
  }
  while_0_break: ;
  return result;
}

