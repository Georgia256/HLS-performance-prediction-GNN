#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 336745188
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned char p_4, float p_7)
{
  unsigned short v_23;
  unsigned long v_21;
  unsigned char v_19;
  unsigned int v_17;
  unsigned char v_15;
  float v_13;
  short v_11;
  signed char v_9;
  unsigned short v;
  long long result;
  v_23 = (unsigned short)p_7;
  v_21 = 67574806UL;
  v_19 = (unsigned char)121;
  v_17 = 21838U;
  v_15 = (unsigned char)29;
  v_13 = (float)p;
  v_11 = (short)3102;
  v_9 = (signed char)5;
  v = (unsigned short)p_4;
  result = 642267876LL;
  while ((long long)((unsigned int)((int)v_15 + (int)p_4) * v_17 << (
                     3773349552U % ((unsigned int)v_19 % (v_17 + 835U) + 82U) & 31U)) != 
         -49697LL + 467926844LL / ((long long)v % (result + 125LL) + 418LL)) {
    v = (unsigned long)v_23 + (v_21 - 4294954534UL);
    v_17 = (unsigned int)(- (~ -51026LL));
    v_15 = (unsigned char)(- (- (v_13 * (float)p)));
    result -= (long long)p;
  }
  while_0_break: ;
  while ((float)(p + (unsigned long)p_4) <= - ((float)(! v) + p_7)) {
    v_13 = (int)v_9 - -120;
    v = (unsigned short)p_4;
    v_9 = (signed char)((float)(- ((int)v_11 >> ((int)v & 15))) * v_13);
    v = (unsigned short)(1893094916UL % ((4294967279UL + (unsigned long)v_9 % (
                                                         p + 691UL)) + 570UL));
  }
  while_0_break_0: ;
  return result;
}

