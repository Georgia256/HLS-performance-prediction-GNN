#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 799785657
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned short p_4, long p_9[1],
                 float p_11, int p_13)
{
  short v_19;
  char v_17;
  long v_15;
  unsigned long long v_7;
  char v;
  unsigned int result;
  v_19 = (short)-3308;
  v_17 = (char)p_11;
  v_15 = -461237090L;
  if (((p_9[0] + v_15) + 158L) / (long)((int)v_17 % -81 + 895) >= (long)(
                                                                  (int)v_19 + ~ p_13) + 
                                                                  (long)p_13 * 547937008L) {
    v_7 = 18446744072851636055ULL;
    v_7 = - (4294925314ULL % (((unsigned long long)p_13 + v_7) + 102ULL));
    v = (char)(p - (unsigned long)((unsigned int)((int)p_4 + p_13) | 4294966607U));
  }
  else {
    v = (char)-1;
    v_7 = 13914ULL;
  }
  if ((float)(- (p / (unsigned long)((int)(- p_4) + 710))) > (float)(
                                                             (unsigned long long)(
                                                             38 % ((int)v + 603)) * (
                                                             v_7 * (unsigned long long)p_9[0])) + p_11) 
    result = 10278U;
  else result = 125U;
  return result;
}

