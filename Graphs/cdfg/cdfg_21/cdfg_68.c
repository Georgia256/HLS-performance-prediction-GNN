#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684473344
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned long p_13)
{
  signed char v_17;
  long v_15;
  unsigned long v_11;
  unsigned char v_9;
  long long v_7;
  long long v_4;
  char v;
  long long result;
  v_17 = (signed char)p_13;
  v_15 = 30904L;
  v_11 = (unsigned long)p;
  v_9 = (unsigned char)p_13;
  v_7 = (long long)p;
  v_4 = (long long)p_13;
  v = (char)108;
  result = 870700426LL;
  while (p_13 == ((unsigned long)((int)p / (((int)v_9 & (int)((unsigned char)-9071559680.f)) + 255)) | - v_11)) {
    result = v_15 * 402L;
    v_15 = (long)((unsigned int)(! v_17) % (((unsigned int)v_17 - 4294924379U) + 606U) << (
                  (int)v_17 / ((int)p + 318) & 31));
    v_7 = (long long)p_13;
    v_11 = (unsigned long)(919113286ULL - ! (26295ULL - (unsigned long long)v_7));
  }
  while_0_break: ;
  while ((unsigned long long)((int)v % 35291) == 18446744073709538332ULL) {
    result = 6166LL / ((v_4 & 4294922762LL) / (long long)(- v_11 + 594UL) + 712LL);
    v_4 = (4294935388LL - (-3864LL + v_7)) << (((long long)v_9 - result % 4294964266LL) & 63LL);
    v = (char)p;
  }
  while_0_break_0: ;
  return result;
}

