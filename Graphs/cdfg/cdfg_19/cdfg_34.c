#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 253692715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, short p_7, int p_9, signed char p_13, long p_17)
{
  unsigned long long v_19;
  float v_15;
  char v_11;
  signed char v_5;
  unsigned long long v;
  char result;
  v_15 = (float)p_9;
  v_11 = (char)-15;
  v_5 = (signed char)-74;
  v = 868971047ULL;
  while ((((unsigned long)p_7 * 13912UL) % (unsigned long)(p_9 + 126)) % (unsigned long)(
         54441 * (int)v_11 + 348) >= (unsigned long)((int)p_13 * (175628197 + (int)5783779328.f)) * 25874UL) {
    v_5 = v_15 / 3772620032.f;
    v_19 = (unsigned long long)(p & (unsigned long)(! ((int)p_13 % 22018)));
    v_15 = (float)((unsigned long)p_17 / (- (p * p) + 622UL));
    v_11 = (char)((unsigned long long)(-9309L | p_17) % ((unsigned long long)p_9 * v_19 + 875ULL) + (unsigned long long)(
                  (float)(-72L / (p_17 + 1001L)) - -12024284.f * (float)p_17));
  }
  while_0_break: ;
  result = (char)(! (p << (v & 31ULL)) % (unsigned long)((int)-2250299136.f / (
                                                         -20003 % ((int)v_5 + 12) + 208) + 608));
  return result;
}

