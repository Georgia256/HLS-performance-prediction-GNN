#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 881944609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p)
{
  signed char v_11;
  double v_8;
  unsigned short v_6;
  int v_4;
  int v;
  unsigned long result;
  v_11 = (signed char)p;
  v_8 = -7048378118.53;
  v_6 = (unsigned short)28738;
  v_4 = 55562;
  v = (int)((unsigned long)p / (~ (4192708743UL >> ((int)v_11 & 31)) + 780UL));
  result = (unsigned long)(((int)-2.00319345216e+37f ^ v) % (v_4 + 1007) - 
                           (int)(~ v_6) * (int)((unsigned short)v_8));
  return result;
}

