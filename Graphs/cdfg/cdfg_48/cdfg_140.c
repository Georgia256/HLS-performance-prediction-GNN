#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 379556541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p[5][4][5], unsigned char p_5,
                       long long p_7, unsigned long p_15, int p_17)
{
  float v_21;
  signed char v_19;
  long v_13;
  char v_11;
  unsigned long long v_9;
  float v;
  unsigned long long result;
  v_21 = (float)p_5;
  v_19 = (signed char)p[0][1][0];
  v_13 = -171938273L;
  v_11 = (char)p_17;
  v_9 = 47987ULL;
  v = 4.35721174322e+37f;
  result = (unsigned long long)p[1][1][0];
  if ((unsigned long long)(! (-59 ^ (int)p_5)) * ((unsigned long long)(- v) - (
                                                  result - (unsigned long long)p_7)) == v_9) {
    v_11 = (char)(~ (-465341226U));
    result = (unsigned long long)(! ((unsigned int)(53634 * (int)((unsigned short)-4274529536.f)) + 
                                     (unsigned int)p_5 * 4294917456U));
    v_13 = (long)(~ (p[2][2][2] / (unsigned int)((int)p_5 + 291) ^ 36739U));
  }
  else {
    v_21 = (float)((26 - (int)((char)-3979246830.2)) << ((unsigned long)(
                                                         (int)v_11 % 64) / (
                                                         ~ p_15 + 145UL) & 31UL));
    result = (unsigned long long)v_13 % (((v_9 >> 22) & (unsigned long long)(- v_13)) + 468ULL);
    v_11 = (char)((unsigned long long)p_17 / (- (result + 74ULL) + 991ULL));
  }
  while ((long long)(- (! p[2][2][0])) <= (long long)(! ((int)((unsigned char)v) * (int)p_5)) % 559LL) {
    v_11 = (unsigned long long)v_11 | (v_9 + 124ULL);
    v_9 = (unsigned long long)((p_7 % (long long)(v_13 + 875L) ^ (long long)(
                                p_17 + (int)v_19)) * (long long)(- ((float)p_17 * v_21)));
    result = (unsigned long long)((int)-4818538371.06 % ((18985 >> (p_15 & 15UL)) + 99));
    v = (float)(! (char)-18);
  }
  while_0_break: ;
  return result;
}

