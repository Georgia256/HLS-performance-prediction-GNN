#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 590558339
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned short p_5, double p_7, signed char p_9, long p_11)
{
  unsigned short v_21;
  short v_19;
  unsigned short v_17;
  short v_15;
  signed char v_13;
  long v;
  short result;
  v_21 = p_5;
  v_19 = p;
  v_17 = (unsigned short)52389;
  v_15 = p;
  v_13 = (signed char)-48;
  v = 1830L;
  result = (short)p_5;
  while (((int)p_5 / ((int)v_15 + 133)) / (((int)v_17 - -6225) + 903) - (int)p_9 > 
         ((int)((signed char)7994941882.92) % -55 - (int)v_13 % 32) % (
         (int)2.53605063549e+38f + 73)) {
    v_17 = (unsigned short)((int)p_9 % ((int)(! p_9) / ((int)((unsigned char)9448811520.f) * 255 + 899) + 642));
    v_19 = (short)((v | -117L) * (long)((int)p_9 / ((int)v_19 + 420)) | (long)p_9);
    v_13 = (signed char)v_21;
  }
  while_0_break: ;
  if (5433ULL != ~ ((unsigned long long)v_13 - 516657663ULL)) {
    result = (short)((int)((unsigned short)((double)result / (p_7 + 862.))) ^ (int)(- p_5));
    v = (long)((unsigned long long)((54111 & (int)p_5) % ((int)(p_7 - (double)p_9) + 799)) - (
               (unsigned long long)(- p_11) - (126504070ULL >> ((int)result & 63))));
    result = (short)(-38071L * ((long)p | v) - ! v);
  }
  else result = (short)p_11;
  return result;
}

