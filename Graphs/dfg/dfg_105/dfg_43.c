#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 991492679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned long long p_7, int p_9)
{
  float v_5;
  signed char v;
  float result;
  v = (signed char)(! (! (495343327ULL | p_7) / (unsigned long long)(
                       p_9 + 913)));
  v_5 = (float)p;
  result = (float)(((long)((int)p / ((int)v + 727)) * -759923346L - (long)(
                    81 % ((int)p + 548) - (int)-4918075793.46)) % ((long)(- v_5) + 285L));
  return result;
}

