#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 887634933
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned long long p_11, short p_15,
                  double p_19, char p_25)
{
  unsigned long v_23;
  float v_21;
  unsigned char v_17;
  unsigned short v_13;
  unsigned char v_9;
  int v_7;
  unsigned long v_5;
  float v;
  unsigned long result;
  v_23 = 3255442378UL;
  v_21 = -913.443725586f;
  v_17 = (unsigned char)p_25;
  v_9 = (unsigned char)p;
  v_7 = 563730613;
  v_5 = (unsigned long)p;
  if ((unsigned long)((float)(p_11 % (unsigned long long)((int)v_17 + 47) - 49367ULL) + 
                      (float)(~ p_15) * v_21) <= (! v_23 & (unsigned long)(! (! p_15)))) {
    v_13 = (unsigned short)((double)((int)(! p_15) / 5217) - ((double)v_17 * p_19) / (
                                                             (double)(! v_5) + 889.));
    v = (float)(! (((unsigned long long)v_9 - p_11) * (unsigned long long)v_13));
    v_5 = (unsigned long)((unsigned long long)(78 - ! v_7));
  }
  else {
    v_21 = (float)(4294940476U % (unsigned int)((int)(! p_25) + 243));
    v_23 = (unsigned long)p_25;
    v = (float)((unsigned long)v_21 / (- (v_23 * v_5) + 42UL));
  }
  result = (unsigned long)((int)(! p) - (int)((unsigned short)(v * v))) / (
           - v_5 + 656UL);
  return result;
}

