#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 679128825
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, char p_11, long p_13[3], unsigned char p_15,
                  signed char p_23)
{
  long v_27;
  long v_25;
  long v_21;
  unsigned long v_19;
  int v_17;
  unsigned long v_8;
  long long v_6;
  unsigned short v_4;
  short v;
  unsigned char result;
  v_21 = (long)p;
  v_19 = (unsigned long)p_15;
  v_17 = (int)p;
  v_8 = (unsigned long)p_15;
  v_6 = -661067151LL;
  v_4 = (unsigned short)12234;
  v = (short)-24569;
  result = (unsigned char)4;
  if ((long)v_17 == ! v_21) {
    v_8 = (unsigned long)((int)p_11 * (int)p ^ (int)result / ((int)v_4 + 180)) / (
          ((unsigned long)p_23 + v_19) % (unsigned long)((int)(- v) + 90) + 380UL);
    v_25 = 209L;
    v_6 = (long long)((float)((unsigned long)p_13[2] + 97949282UL) - 
                      ((float)v_25 - 2.33105632163e+38f) * 725.710632324f);
  }
  else {
    v_27 = (long)(- (! (126 - (int)p_11)));
    v_19 = 4294944295UL;
    v_17 = (int)((v_8 / (unsigned long)(((long)p_11 - v_27) + 936L)) % (unsigned long)(
                 (long)p_23 * (p_13[2] | 43690L) + 402L));
  }
  if ((unsigned long long)((unsigned long)p_13[0] % (v_8 + 623UL) & (unsigned long)(
                           -25 + (int)p_11)) - ((unsigned long long)(
                                                (int)p_15 % (v_17 + 870)) ^ 
                                                476529948ULL / (unsigned long long)(
                                                v_19 + 565UL)) < (unsigned long long)(
      (long)p + - (v_21 - (long)p_23))) {
    v_4 = (unsigned short)(((double)(v_6 / (long long)(v_8 + 183UL)) / 4617770925.8) * (double)(
                           (long long)(110 % ((int)p + 337)) * ((long long)p + v_6)));
    v = (short)(- v_4);
    result = (unsigned char)v;
  }
  else {
    v_8 = (unsigned long)p_11;
    result = (unsigned char)(- (! v_8));
  }
  return result;
}

