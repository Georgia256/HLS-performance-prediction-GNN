#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 361268150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, char p_7, float p_9, unsigned int p_11,
                  float p_13[5][1][4])
{
  unsigned int v_29;
  unsigned int v_27;
  unsigned short v_25;
  unsigned long v_23;
  unsigned char v_21;
  int v_19;
  float v_17;
  long v_15;
  float v_5;
  unsigned long long v;
  unsigned char result;
  v_29 = 342554712U;
  v_27 = (unsigned int)p_7;
  v_25 = (unsigned short)p_7;
  v_23 = (unsigned long)p;
  v_21 = (unsigned char)239;
  v_19 = (int)p_13[4][0][1];
  v_17 = -2.32244481616e+38f;
  v_15 = (long)p_13[3][0][3];
  if ((float)v_15 > - p) {
    v_15 = (long)(((long long)v_23 | -23224LL) / (long long)(v_19 + 829) - (long long)(
                  (long)(- v_25) * (-54578L * (long)v_17)));
    v_17 = (float)(- (~ v_15 % (long)((int)p_7 + 486)));
    result = (unsigned char)(- (- (v_19 * (int)v_21)));
  }
  else {
    v_21 = (unsigned char)(- (char)-57);
    v_17 = (float)v_29;
    result = (unsigned char)(- ((unsigned int)p_7 ^ v_27) + (unsigned int)(
                             (int)((float)v_21 / (p + 413.f)) % (- v_19 + 308)));
  }
  if ((unsigned long long)(! ((p_11 + (unsigned int)result) / ((unsigned int)(
                                                               p_13[1][0][3] - (float)result) + 813U))) == 
      (unsigned long long)(-12L / (v_15 + 284L) + (long)(- v_17)) - (
      31597ULL % (unsigned long long)(v_19 + 619) + (unsigned long long)(
      (unsigned int)p_13[0][0][2] + p_11))) result = (unsigned char)p;
  else {
    v_5 = p_9;
    v = (unsigned long long)((3462931200.f - (v_5 - (float)result)) + (float)p_7);
    result = (unsigned char)(~ v);
  }
  return result;
}

