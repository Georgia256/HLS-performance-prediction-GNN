#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468053820
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, double p_7, unsigned long long p_9, int p_17,
          unsigned long p_19)
{
  short v_21;
  short v_15;
  long long v_13;
  long long v_11;
  unsigned char v_5;
  unsigned long long v;
  short result;
  v_21 = (short)-12202;
  v_13 = (long long)p;
  v_11 = 362481908LL;
  if ((int)(! v_21) > (int)((short)p_7)) v = 825511523ULL;
  else {
    v_15 = (short)((unsigned long)(- (36939L / ((long)p_7 + 312L))) + 
                   (unsigned long)(! p_17) / (- p_19 + 218UL));
    v_5 = (unsigned char)(! (v_11 / (v_13 + 805LL)) + (long long)(737192529L + (long)v_15));
    v = (unsigned long long)(! ((int)p % -33306)) - (unsigned long long)(
                                                    (int)v_5 % ((int)((unsigned char)p_7) + 384)) / (
                                                    p_9 + 1014ULL);
  }
  result = (short)v;
  return result;
}

