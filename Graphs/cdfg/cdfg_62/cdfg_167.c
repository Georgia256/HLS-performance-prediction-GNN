#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 608317874
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p[3], unsigned short p_4, int p_6, unsigned int p_15,
                double p_21)
{
  signed char v_27;
  unsigned int v_25;
  unsigned short v_23;
  int v_19;
  int v_17;
  unsigned int v_13;
  unsigned short v_11;
  float v_9;
  char v;
  signed char result;
  v_27 = (signed char)-3;
  v_25 = 518923243U;
  v_23 = (unsigned short)p[1];
  v_19 = (int)p_4;
  v_17 = p_6;
  v_13 = 41102U;
  v_9 = -9556302848.f;
  v = (char)p[1];
  result = (signed char)p_6;
  while (~ (! ((unsigned int)result * 4294964226U)) == (unsigned int)v_19) {
    v_23 = (unsigned int)v_27 % ((v_25 & 4294967193U) + 329U);
    v_27 = (signed char)(~ (p_6 / -593) % (p_6 % ((int)(! v) + 717) + 914));
    v = (char)-1.66650118078e+38;
    result = (signed char)(- ((double)(613938706L / (long)(v_19 + 388)) - (
                              -55315. - p_21)));
  }
  while_0_break: ;
  while ((unsigned long)p_6 >= ! (~ (18401UL ^ (unsigned long)v))) {
    v_11 = v_13 - (unsigned int)((double)v_9 - -8.88163701054);
    result = (signed char)(- ((p_21 - 131.04507167) * (double)(p_15 / (unsigned int)(
                                                               (int)v_23 + 9))));
    v_13 = (unsigned int)((unsigned long)(~ v_19) + ((unsigned long)(
                                                     (int)result / -15125) - 4016786451UL));
    v = (char)(! (p_15 - (unsigned int)v_17) ^ (unsigned int)((int)v_11 / (
                                                              v_17 + 845)));
  }
  while_0_break_0: ;
  return result;
}

