#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 693171040
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, signed char p_5, char p_7[1][4], char p_11, double p_13)
{
  long v_19;
  unsigned char v_17;
  char v_15;
  int v_9;
  unsigned long long v;
  char result;
  v_19 = (long)p_11;
  v_17 = (unsigned char)p_11;
  v_15 = (char)((long)((int)v_17 - 1244751) - 29261L * v_19);
  if (((long)p ^ -23834L) <= (long)(- ((int)p_11 * (int)v_15 + ((int)p_5 + (int)((signed char)-1.54910008414e+38))))) {
    v = (unsigned long long)p_7[0][1];
    result = (char)(((unsigned long long)(! p) + ! v) % (unsigned long long)(
                    (int)(- p_5) + 281));
  }
  else {
    v_9 = ! (57330 * (int)p_11 + ((int)((unsigned char)p_13) - 204));
    result = (char)(275.271458931 * (double)(! v_9));
  }
  return result;
}

