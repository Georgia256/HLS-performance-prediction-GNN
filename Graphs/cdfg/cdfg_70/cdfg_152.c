#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684167578
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned int p_5, unsigned char p_9,
                unsigned char p_11[3][2][3], long p_13)
{
  char v_25;
  unsigned long long v_23;
  long v_21;
  float v_19;
  int v_17;
  unsigned int v_15;
  unsigned short v_7;
  short v;
  signed char result;
  v_23 = 48620ULL;
  v_21 = (long)p_11[0][0][2];
  v_19 = (float)p_11[1][1][2];
  v_15 = (unsigned int)p;
  v_7 = (unsigned short)3640;
  v = (short)-27863;
  result = (signed char)p_9;
  if ((742 | (int)((short)(- (v_19 + 4294925056.f)))) == (int)p_11[1][1][2]) {
    v_19 = (float)(unsigned short)22216;
    v_7 = (unsigned short)(! (- ((unsigned long long)v_21 * v_23)));
    result = (signed char)(- ((float)(p - 4275651932UL) + ((float)v_15 + v_19)));
  }
  else {
    v_25 = (char)(! 52642LL);
    result = result;
    v_15 = (unsigned int)((((unsigned long long)v_21 + v_23) - (unsigned long long)(
                           p_13 + (long)v_25)) + 9155ULL);
  }
  while ((((unsigned long)result - p) << ((int)(! v) & 31)) % (unsigned long)(
         (3503306338U * p_5 + (unsigned int)((int)v_7 + (int)p_9)) + 960U) >= 
         (((unsigned long)p_11[2][0][0] + 4294902083UL) & (unsigned long)(
          (int)p_11[2][0][0] % ((int)p_9 + 813))) % (unsigned long)(p_13 / (long)(
                                                                    (int)(- p_9) + 748) + 64L)) {
    result = v_15 % 4294956941U;
    v_17 = (int)(0UL / (~ (p + (unsigned long)p_5) + 208UL));
    v_15 = (unsigned int)(((unsigned long)(-347805429L + (long)v_17) + (unsigned long)(
                           p_5 / (unsigned int)((int)v_7 + 126))) | (unsigned long)(- (
                          p_13 - (long)-1.72700580164e+38f)));
    v = (short)(! p_9);
  }
  while_0_break: ;
  return result;
}

