#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 664316049
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned long p_4, short p_6[5], int p_8,
          long long p_10)
{
  unsigned long long v_15;
  long long v_13;
  unsigned char v;
  float result;
  v_13 = -11433LL;
  v = (unsigned char)p_10;
  result = (float)p_10;
  while ((p_10 / (long long)((int)v + 855)) * (long long)((int)v + (int)p_6[3]) + (long long)(- (
         (long)p - -63591L)) == - (p_10 - (long long)p_8) / (long long)(
                                (p_4 + 3856492762UL) / (unsigned long)(
                                51 / (p_8 + 958) + 956) + 144UL)) {
    v_15 = v_13 + 291357786LL;
    result = (float)-64284;
    v_13 = (long long)p_8;
    v = (unsigned char)((unsigned long long)((unsigned long)(p_8 * 197) ^ 
                                             (unsigned long)v / (p_4 + 445UL)) % (
                        ! (v_15 | (unsigned long long)p_6[4]) + 854ULL));
  }
  while_0_break: ;
  if (- (- result) <= - (result / 3608455680.f) / ((float)(p_4 % ((unsigned long)p_6[1] % 102212078UL + 828UL)) + 864.f)) {
    result = (float)(~ (-4131811112U));
    result = (float)(0 / ((8018 ^ (int)((unsigned short)(- result))) + 324));
    result = ((float)((int)((unsigned char)2870426368.f) - 164) - - result) + - (- result);
  }
  else result = (float)p;
  return result;
}

