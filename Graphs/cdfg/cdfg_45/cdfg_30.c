#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970199315
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned char p_5[4], long p_9, int p_11,
                  short p_17)
{
  unsigned long long v_25;
  signed char v_23;
  unsigned long long v_21;
  float v_19;
  short v_15;
  char v_13;
  char v_7;
  short v;
  unsigned long result;
  v_25 = (unsigned long long)p_5[2];
  v_19 = (float)p;
  v_15 = (short)5026;
  v_7 = (char)p_9;
  v = (short)p_9;
  result = (unsigned long)p_17;
  if ((unsigned long)(! (~ (- p_11))) >= ! (~ (result + 3594625496UL))) {
    v_23 = (signed char)66;
    result = (unsigned long)((int)(- p_5[0]) + (int)v);
    v_13 = (char)v_23;
  }
  else {
    v_13 = (char)(- (18446744072810590777ULL ^ v_25) % (unsigned long long)(
                  (int)(! p_5[0]) + 8));
    v = (short)(((int)(-4634763264.17 / ((double)p + 590.)) / ((int)v_15 % (
                                                               (int)((short)v_19) + 382) + 491)) % (
                (int)(~ p) + 363));
    result = 4294924656UL;
  }
  while ((long)((int)p % ((int)v + 859) & (int)p_5[2] / ((int)v_7 + 651)) - ! p_9 != (long)p_11) {
    v_21 = (unsigned int)v_15 / 48953U;
    v_19 = (float)(((unsigned long long)v_13 / (v_21 + 828ULL) + (unsigned long long)(
                    (long)p - p_9)) | 18446744072828571375ULL);
    v_13 = (char)(! ((int)(v_19 - -118.224624634f) & - p_11));
    v_7 = (char)((unsigned long long)p_17 / ((((unsigned long long)v & 91838367ULL) & (unsigned long long)(- p_9)) + 429ULL));
  }
  while_0_break: ;
  return result;
}

