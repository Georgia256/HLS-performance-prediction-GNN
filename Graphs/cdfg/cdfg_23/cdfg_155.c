#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410067338
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, double p_5, int p_7, unsigned int p_9, int p_11)
{
  unsigned short v_13;
  unsigned long long v;
  short result;
  v_13 = (unsigned short)p_11;
  if ((long long)((long)(- (- v_13)) * (-6388L * (long)(p_7 % -29464))) != -35154LL) {
    v = (unsigned long long)((unsigned int)-202.165756226f * 43827U >> (
                             42318 / ((p_7 + p_7) + 108) & 31));
    result = (short)(~ (v * 117ULL) - ((unsigned long long)p_5 * v & 35ULL));
  }
  else {
    v_13 = (unsigned short)(-(short)22078);
    result = (short)(((p_9 << (p_11 & 31)) | (unsigned int)((int)v_13 & (int)p)) - 34U);
  }
  result = (short)(- (7285L * (long)result) + (long)(! (! p)));
  return result;
}

