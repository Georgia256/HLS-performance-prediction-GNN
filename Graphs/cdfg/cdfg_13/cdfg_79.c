#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 552774199
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned int p_9, short p_11, short p_13,
                  double p_17)
{
  unsigned long long v_25;
  signed char v_23;
  unsigned int v_21;
  char v_19;
  long long v_15;
  long v_7;
  long v_4;
  float v;
  unsigned char result;
  v_25 = 18446744072727150145ULL;
  v_23 = (signed char)p;
  v_21 = p_9;
  v_19 = (char)-7;
  v_15 = (long long)p_17;
  v_4 = 808874332L;
  while ((unsigned long long)((int)p_13 ^ (((int)p_13 - (int)((short)-4.39692368711e+37f)) | -312)) >= 
         (((unsigned long long)p * 173588562ULL) / (unsigned long long)(
          v_21 * (unsigned int)p_17 + 742U)) / (unsigned long long)((int)p_11 + 862)) {
    v_19 = (int)v_23 - -26924;
    v_15 = (long long)((unsigned long long)(~ ((long long)v_4 / (v_15 + 520LL))) - ~ (
                       v_25 / (unsigned long long)(v_4 + 320L)));
    v_23 = (signed char)(17LL + (23193LL - v_15));
    v_21 = (unsigned int)((((int)p_13 / ((int)((short)p_17) + 548)) % (
                           (-701925083 << ((int)v_19 & 31)) + 122)) * (int)(
                          (42620. - p_17) + (double)((long)v_19 & v_4)));
  }
  while_0_break: ;
  if (44L <= (v_4 + (long)p) * (long)(37238 / ((int)p + 845)) - (long)(
             (int)(- p) | (int)v_19)) {
    v_7 = (long)((long long)((p_9 / (unsigned int)((int)p_11 + 9)) * 54327U) % (
                 ((long long)p_13 - v_15) + 451LL));
    v = (float)((0 - (14L & v_4)) + ((long)p - -901139331L % (v_7 + 889L)));
    result = (unsigned char)(- v);
  }
  else result = (unsigned char)p_17;
  return result;
}

