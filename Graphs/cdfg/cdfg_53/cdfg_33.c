#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 571725801
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned int p_11, int p_13, long long p_15,
                  int p_17[3][3])
{
  float v_23;
  unsigned char v_21;
  double v_19;
  short v_8;
  float v_6;
  float v_4;
  unsigned char v;
  unsigned long result;
  v_23 = (float)p_11;
  v_21 = (unsigned char)p;
  v_19 = (double)p_17[0][2];
  if ((((unsigned long)v_23 + 4294919524UL) + (unsigned long)p) - (unsigned long)p == (unsigned long)(! (~ (
      (int)p * -47)))) {
    v = (unsigned char)(-47734. * v_19);
    v_4 = (float)(- (- v));
    v_8 = (short)(((18446744073709547797ULL & (unsigned long long)p) % (unsigned long long)(
                   ~ p_13 + 913)) % ((unsigned long long)-782.91080097 + 983ULL));
  }
  else {
    v_4 = (float)(- (- p_13));
    v = - v_21;
    v_8 = (short)v;
  }
  if ((int)((float)(! ((long long)p_13 % -15590LL)) / (- (- v_4) + 590.f)) > 
      (~ p_17[1][1] * (int)v_4) % ((p_13 / (p_13 + 618)) / (! p_13 + 900) + 629)) {
    v_6 = (float)((int)((v_4 - -761058624.f) + v_4) - ((int)(- v_8) - (int)(- p)));
    v = (unsigned char)((float)(594100294U & (unsigned int)(-122 - (int)((signed char)-707.231811523f))) + 
                        - v_4 / (v_6 + 99.f));
    result = (unsigned long)((unsigned int)(((int)v % -40) % 5805) | 3052783051U);
  }
  else result = (unsigned long)p_11;
  return result;
}

