#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 825798827
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned char p_4, unsigned short p_11, unsigned int p_15)
{
  int v_17;
  int v_13;
  long v_9;
  char v_7;
  unsigned long long v;
  char result;
  v_17 = (int)p_11;
  v_13 = (int)p_11;
  v_9 = 131642555L;
  v_7 = (char)19;
  result = (char)93;
  v = (unsigned long long)(((long long)result - (896318009LL & (long long)p_15)) * (long long)(
                           ((int)p_11 / (v_17 + 869)) % ((int)(- result) + 126)));
  while ((((int)p / ((int)p_4 + 621)) / 179) * (int)(- ((double)result / 1020794814.44)) < 
         ((int)p_4 % 128) % ((int)(- (~ p)) + 191)) {
    v = (unsigned long long)v_9 - ((unsigned long long)v_7 + v / 16050ULL);
    v_9 = -672919869L;
    v_7 = (char)((float)(((int)p + (int)p_11) + v_13) / 11.1106567383f);
    result = (char)(((int)p_11 - ((int)result | -217984374)) * (int)(- v_7));
  }
  while_0_break: ;
  return result;
}

