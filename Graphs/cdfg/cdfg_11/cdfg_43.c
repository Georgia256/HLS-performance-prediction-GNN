#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 580278735
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned short p_4[1], float p_6,
        unsigned long long p_19, unsigned short p_21)
{
  long long v_17;
  long v_15;
  char v_13;
  int v_11;
  char v_9;
  double v;
  int result;
  v_17 = (long long)p_21;
  v_15 = 50142L;
  v_13 = (char)p_6;
  v_11 = 1041747658;
  v = 3102606162.62;
  result = 571961013;
  if ((unsigned long long)(((int)((signed char)(28282.f * p_6)) + -44) - - (
                           (int)v_13 % (result + 406))) > (((unsigned long long)(! v_17) - p_19) | (
                                                           (p ^ p_19) ^ (unsigned long long)(
                                                           (int)p_21 - (int)((unsigned short)2.53578744736e+38))))) {
    v_11 = (int)v_15;
    v_15 = -124L;
    v_9 = (char)((float)(- (- v_15)) - ((float)(- p) + p_6));
  }
  else {
    v = (double)(! (! (p / 18446744073709526360ULL)));
    v_9 = (char)((unsigned long long)(- ((long)result + v_15)) * (18446744072810992467ULL / (
                                                                  p + 690ULL) - (unsigned long long)(
                                                                  v - (double)p_6)));
    v_13 = (char)123;
  }
  while ((unsigned long)(- (- p_6)) % (- ((unsigned long)v * 597908621UL) + 15UL) == (unsigned long)(
         (((int)((char)v) - (int)v_9) * ((int)p_4[0] % (v_11 + 710))) / 267)) {
    v_15 = (unsigned int)v_13 - 4294919293U;
    v_15 = v_15;
    v_9 = (char)(- (p - ! p));
    v = (double)(! -42746LL);
  }
  while_0_break: ;
  return result;
}

