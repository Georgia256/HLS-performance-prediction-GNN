#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 821719797
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, float p_7[1], unsigned long long p_9[2][1][5],
        unsigned int p_11, long long p_13)
{
  unsigned char v_23;
  unsigned char v_21;
  unsigned int v_19;
  int v_17;
  short v_15;
  float v_4;
  float v;
  int result;
  v_23 = (unsigned char)p_9[0][0][0];
  v_21 = (unsigned char)p_7[0];
  if (~ (49899ULL / (((unsigned long long)p_11 + 7341ULL) + 186ULL)) == 
      (unsigned long long)(56534U / (p_11 + 869U)) / ((p_9[1][0][2] ^ (unsigned long long)p) + 73ULL) - (unsigned long long)v_23) {
    v_17 = (int)-1.09657496559e+38f;
    v_15 = (short)p;
  }
  else {
    v_19 = (unsigned int)((double)((152LL + p) * (long long)v_21) - -1.32767756711e+38);
    v_15 = (short)(- (- (p_7[0] - (float)v_19)));
    v_17 = -32739;
  }
  if (- (p_13 / (long long)((int)v_15 + 555)) % (p + 695LL) <= (long long)(! (~ v_17)) * - (
                                                               p / (p_13 + 168LL))) 
    result = (int)(- 3.38014793527e+38f);
  else {
    v_4 = (float)p_9[0][0][4];
    v = (float)((((unsigned long long)v_4 * 73449242ULL) / (unsigned long long)(
                 p + 849LL)) * (unsigned long long)(p / ((p + (long long)p_7[0]) + 371LL)));
    result = (int)v;
  }
  return result;
}

