#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 137896961
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned int p_7, float p_11, unsigned short p_15)
{
  float v_21;
  short v_19;
  unsigned long long v_17;
  unsigned long v_13;
  char v_9;
  unsigned long long v_4;
  unsigned long v;
  float result;
  v_21 = 4.15517359056e+37f;
  v_19 = (short)5472;
  v_17 = 18446744073709502815ULL;
  v_13 = 625636281UL;
  v_9 = (char)p_7;
  v_4 = (unsigned long long)p_15;
  result = 142.093109131f;
  while ((unsigned long)(- (((float)v_13 - result) + 3.10073604003e+18f)) > 
         1 >> (((unsigned long long)p_15 / (v_17 + 230ULL)) * ((unsigned long long)v_19 * v_4) & 31ULL)) {
    v_21 /= -412.9609375f;
    v_19 = (short)result;
    v_4 = (unsigned long long)p_11;
    v_17 = 34481ULL;
  }
  while_0_break: ;
  if ((float)(~ (- (65396UL | (unsigned long)v_9))) <= p_11) result = (float)770389275;
  else {
    v_4 = (unsigned long long)((unsigned int)(1.35568142992e+38f + (float)(- p)) << (
                               ! p_7 & 31U));
    v = (unsigned long)v_4;
    result = (float)v;
  }
  return result;
}

