#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 655060465
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p[3], unsigned long long p_4, double p_6,
                 unsigned long long p_15[3], unsigned int p_17)
{
  long v_23;
  unsigned int v_21;
  unsigned long long v_19;
  signed char v_13;
  short v_11;
  char v_9;
  unsigned long v;
  unsigned int result;
  v_23 = (long)p_4;
  v_21 = 64506U;
  v_19 = p_4;
  v_9 = (char)p_4;
  result = 3885972460U;
  if ((unsigned long long)v_23 <= ((unsigned long long)p_17 | ((unsigned long long)v_21 + 524182802ULL)) + p_15[0]) {
    result = ! v_21 * (unsigned int)(! ((int)((char)-1291239168.f) % 99));
    v_11 = (short)(! (- v_19 - 22979ULL));
    v = 8UL;
  }
  else {
    v_11 = (short)(- (- (- p_6)));
    v_21 = (unsigned int)((unsigned long long)(37358 >> (~ p_15[2] & 15ULL)) & p_4);
    v = (unsigned long)((unsigned long long)(693438876UL / (unsigned long)(
                                             p_17 + 766U)) / ((unsigned long long)v_11 * p_15[0] + 108ULL) | (
                        ((unsigned long long)result - 51121ULL) | (unsigned long long)(
                        p_17 + v_21)));
  }
  while (- (332400629ULL * (unsigned long long)result - (unsigned long long)(
            424U % (result + 593U))) == - ((unsigned long long)p[2] % (
                                           p_4 + 478ULL)) - (unsigned long long)(
                                        (unsigned int)(- p_6) * ! result)) {
    v = (long long)v_9 / ((long long)v % 569161854LL + 852LL);
    v_13 = (signed char)((unsigned long long)(p_6 - (double)((unsigned int)v_11 * p_17)) ^ p_4);
    v_9 = (char)((unsigned long long)((p[2] / 145U) % 49884U) % (! p_15[0] / (
                                                                 (unsigned long long)(- p_6) + 952ULL) + 140ULL));
    result = (unsigned int)v_13;
  }
  while_0_break: ;
  return result;
}

