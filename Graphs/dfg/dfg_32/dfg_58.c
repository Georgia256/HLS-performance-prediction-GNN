#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221047704
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p[1], char p_9)
{
  unsigned char v_7;
  unsigned long long v_5;
  double v;
  int result;
  v = p[0];
  result = (int)p_9;
  v_7 = (unsigned char)(- p[0]);
  v_5 = (unsigned long long)(- (p[0] + (double)((int)((double)v_7 / (
                                                      p[0] + 127.)) + 
                                                (int)p_9 / (result + 232))));
  v = - v;
  result = (int)((unsigned long long)(((int)((char)v) + -109) + (int)(
                                      (p[0] * 1.84467440734e+19) * -16818.)) - v_5);
  return result;
}

