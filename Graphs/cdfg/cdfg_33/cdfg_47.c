#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 747293601
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned char p_7, short p_11, char p_13[2],
                   unsigned long long p_15)
{
  float v_27;
  double v_25;
  unsigned int v_23;
  unsigned char v_21;
  float v_19;
  double v_17;
  short v_9;
  short v_5;
  unsigned char v;
  unsigned short result;
  v_25 = (double)p;
  v_23 = 3963882814U;
  v_21 = (unsigned char)p_15;
  v_19 = (float)p_15;
  v_17 = 701.020872309;
  v = (unsigned char)252;
  if ((long long)((int)(! p_13[1]) % ((int)((char)v_25) % -125 + 89)) - (
      (long long)v_17 + -36951LL) != (long long)(3558263704UL * (unsigned long)(- (
                                                 890978736U % (unsigned int)(
                                                 (int)p_11 + 901))))) {
    v_21 = (unsigned char)((long long)v_23 % 658023048LL);
    v_9 = (short)(! (~ (247 / ((int)((unsigned char)3.82476248985e+37f) + 226))));
    v_19 = (float)p_11;
  }
  else {
    v_27 = (float)v;
    v_25 = (double)((unsigned long)(- (2.17903444976e+38 + (double)v_27)) * (
                    26015UL % (unsigned long)((int)(- p_7) + 739)));
    v_9 = (short)(((unsigned long long)(- p_11) * (p_15 * (unsigned long long)v_25)) * 620098033ULL);
  }
  if ((long)(- (~ p_11)) % (- ((long)p % 57475L) + 788L) <= (long)(((int)((char)v_17) + -107) ^ (int)(
                                                                   - v_19 / (
                                                                   (float)v_21 + 361.f)))) {
    v_5 = (short)(- p);
    v = (unsigned char)((unsigned long)((int)((short)-7668065892.67) * (int)v_9 << (
                                        177 * (int)p & 31)) - 4294960263UL);
    result = (unsigned short)(((int)v % ((int)p + 775)) % (81 % ((int)v_5 + 241) + 360) - 
                              ((int)p + (int)p_7) * (int)(! p_7));
  }
  else result = (unsigned short)(((unsigned long long)((int)((short)9866087424.f) + (int)p_11) + 
                                  (unsigned long long)p_13[0] % (p_15 + 1009ULL)) + (unsigned long long)(
                                 11300 / (23456 * (int)p_13[1] + 795)));
  return result;
}

