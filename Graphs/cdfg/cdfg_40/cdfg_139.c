#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 881953385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned char p_5[3][5][2], unsigned long long p_7,
        unsigned long long p_11, unsigned short p_13[1][4][1])
{
  unsigned long long v_21;
  int v_19;
  signed char v_17;
  unsigned long v_15;
  short v_9;
  unsigned long long v;
  int result;
  v_21 = 59929ULL;
  v_19 = (int)p_7;
  v_17 = (signed char)p;
  v_15 = 3741387097UL;
  if ((unsigned long long)v_19 != p_7) {
    v = (unsigned long long)((int)v_17 - v_19 * ((int)7039060065.95 / 227453931));
    result = (int)v_15;
    v_9 = (short)(! (p_11 >> ((int)p_13[0][1][0] & 63)) * v);
  }
  else {
    v = p_11;
    result = (int)((unsigned long long)((float)(18446744072742466598ULL * v_21) + p) * v_21);
    v_9 = (short)(((unsigned long)v_19 * 5043UL - - v_15) * (unsigned long)(! (! p_13[0][2][0])));
  }
  if (- ((p_7 + v) * (unsigned long long)v_9) <= 0ULL) {
    v = p_7;
    v = ! ((unsigned long long)p_5[2][4][1] + ~ v);
    result = (int)((unsigned long long)result + - v * (unsigned long long)(
                                                (int)((unsigned short)p) + 18557));
  }
  else result = -12;
  return result;
}

